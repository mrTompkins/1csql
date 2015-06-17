#include "CEnv.h"
#include "1csql.h"
#include "COciConn.h"

/********* CSymbol *********/

string CSymbol::getString()
{
	return string("name:    ") + name + string("\nalias:   ") + alias + string("\nkind:    ") + kind;
}

//содержится ли столбец в списке столбцов таблицы
bool CSymbol::is_table_contains_column(string column)
{
	for(int i = 0; i < col_list.size(); i++)
	{
		if(!col_list[i].compare(column))
		{
			return true;
		}
	}
	return false;
}

string CSymbol::new_html_style()
{
	static int html_style_num = 0;
	char psz_num[10];

	html_style_num++;
	sprintf(psz_num, "%i", html_style_num);

	return string("text-table") + string(psz_num);
}

//ссыка на этот символ свидетельствует об ошибке
CSymbol symErr;


/********* CEnv *********/

CEnv::~CEnv()
{
	for(int iv = 0; iv < table.size(); iv++)
	{
		delete table[iv];
	}
}

string CEnv::name() const
{
	char psz[10];
	itoa(iCount, psz, 10);
	return string(psz);
}

int CEnv::cnt() const
{
	return iCount;
}

/*
Ссылка на таблицу является обязательным атрибутом столбца.
Если для столбца не удалось определить ссылку на таблицу, то считаем, что это символ с неизвестным (undefined) типом.
*/

/*
1. Столбец имеет спецификатор
1.1. Искать таблицу с таким синонимом, либо с пустым сининомом и эквивалентным именем
1.2. Если таблица не найдена, то надо искать в таблице символов символ с неизвестным типом идентификатора и пустой ссылкой на таблицу
1.3. Если в найденной таблице нет списка полей, то считаем, что найдена искомая таблица.
1.4. Если в найденной таблице есть список полей.
1.4.1. Если поле присутствует в списке полей, то найдена искаомая таблица.
1.4.2. Если поле отсутствует в списке полей, то таблица не соответствует условиям.
2. Солбец не имеет спецификатора
2.1. Искать любую таблицу.
2.2. Если в таблице нет списка полей, то пропускать такую таблицу.
2.3. Если в таблице есть список полей.
2.3.1. Если поле присутствует в списке полей, то найдена искомая таблица.
2.3.2. Если поле отсутствует в списке полей, то таблица не соответствует условиям.
2.4. Если таблица с таким столбцом не найдена, то надо искать в таблице символов символ с неизвестным типом идентификатора и пустой ссылкой на таблицу
*/



CSymbol* CEnv::find_table_for_column(string name, string tab)
{
	CSymbol* tab_ref = NULL;
	CSymbol* sym;
	
	debug("find_table_for_column name=%s; tab=%s", name.c_str(), tab.c_str());
	
	//поиск по иерархии таблиц символов
	for(CEnv* e = this; e != NULL; e = e->prev)
	{
		//поиск в конкретной таблице символов
		for(int iv = 0; iv < e->table.size(); iv++)
		{
			//ссылка на символ
			sym = e->table[iv];

			if((!(sym->kind.compare("table")) || !(sym->kind.compare("in_view"))) || !(sym->kind.compare("tab_proc")))
			{
				//спецификатор столбца задан и имя или синоним таблицы совпадают с ним
				if(tab.size() > 0 && (!tab.compare(sym->alias) || sym->alias.size() == 0 && !tab.compare(sym->name)))
				{
					//для таблицы не определен список полей, считаем что найдена нужная таблица
					if(sym->col_list.size() == 0)
					{
						tab_ref = sym;
						break;
					}
					//для таблицы определен список полей
					else
					{
						//если столбец входит в список полей этой таблицы, то найдена искомая таблица
						if(sym->is_table_contains_column(name) || !name.compare("*"))
						{
							tab_ref = sym;
							break;
						}
					}
				}
				//спецификатор столбца не задан
				else if(tab.size() == 0)
				{
					//для таблицы определен список полей
					if(sym->col_list.size() > 0)
					{
						//если столбец входит в список полей этой таблицы, то найдена искомая таблица
						if(sym->is_table_contains_column(name))
						{
							tab_ref = sym;
							break;
						}
					}
				}
			}
		}
		if(tab_ref!=NULL)
			break;
	}

	return tab_ref;
}

CSymbol* CEnv::create_symbol(CName name, string alias, string kind)
{
	CSymbol* sym = NULL;
	CSymbol* tab_ref = NULL;
	CName cname;

	debug("create_symbol");

	if(!kind.compare("table") || !kind.compare("in_view") || !kind.compare("with_table") || !kind.compare("tab_proc"))
	{
		//определяем имя таблицы
		if(name.size() > 0)
		{
			cname = name;
		}
		else if(alias.size() > 0)
		{
			cname = CName(alias);
		}
		else
		{
			//возможен случай вложенного запроса без имени
			cname = CName(string(""));
		}

		//Таблица всегда должна создавать новую запись в текущей таблице симоволов.
		sym = new CSymbol(cname[cname.size()-1], alias, kind, tab_ref);
		
		//определение столбцов таблицы
		if(!kind.compare("table"))
		{
			//схема таблицы не указана
			if(name.size() == 1 )
			{
				//поиск для таблицы встроенного представления
				tab_ref = this->get_with_table_ref(name);
				
				//если для таблица основана на встроенном представлении
				if(tab_ref != NULL)
				{
					//скопировать список столбцов и стиль
					sym->col_list = tab_ref->col_list;
					sym->html_style = tab_ref->html_style;
				}
				//если таблица системная
				else
				{
					//получить список столбцов
					sym->col_list = ociconn::con.get_column_list_array(name[name.size()-1].c_str(), "");
				}
			}
			//схема таблицы указана
			else if(name.size() > 1 )
			{
				sym->col_list = ociconn::con.get_column_list_array(name[name.size()-1].c_str(), name[name.size()-2].c_str());
			}
		}
		//если стиль не определен, создать новый
		if(sym->html_style.empty())
			sym->html_style = CSymbol::new_html_style();

		debug("create_symbol: add table=%s", cname[cname.size()-1].c_str());
		//занести символ в таблицу символов
		put(sym);
	}
	else if(!kind.compare("column"))
	{
		//для столбца всегда определено имя, синоним отсутствует
		cname = name;
		
		debug("create_symbol cname.size=%d", cname.size());
		debug("create_symbol name=%s", cname[cname.size()-1].c_str());
		//сначала определить к какой таблице относится столбец
		switch(cname.size())
		{
		case 1:
			//столбец не имеет спецификатора
			tab_ref = find_table_for_column(cname[cname.size()-1], string());
			break;
		case 2:
			//столбец имеет спецификатор
			tab_ref = find_table_for_column(cname[cname.size()-1], cname[cname.size()-2]);
			break;
		default:
			tab_ref = find_table_for_column(cname[cname.size()-1], cname[0]); //считать первую строку именем таблицы
			break;
			;//поле состоит из 3-х и более частей, скорее всего это переменная типа запись b1.b2.b3, или переменная, процедура заголовка пакета schm.pkg.name
		}

		//если для столбца не найдена ссылка на таблицу, то символ необходимо отнести к неопределенному типу
		if(tab_ref == NULL)
		{
			kind = "undefined";
		}
		
		//поиск столбца в таблице символов
		sym = get_sym_column(cname[cname.size()-1], kind, tab_ref);

		//если не найден, то создаем новый символ и добавляем в таблицу символов
		if(sym == NULL)
		{
			sym = new CSymbol(cname[cname.size()-1], alias, kind, tab_ref);
			put(sym);
		}
	}

	return sym;
}

//получение адреса встроенного представления with_table
CSymbol* CEnv::get_with_table_ref(CName & name)
{
	CSymbol* wth_tab_ref = NULL;
	CSymbol* sym;
	string tab;
	
	if(name.size() > 0)
		tab = name[name.size()-1];

	debug("env.get_with_table_column_list name=%s", tab.c_str());
	
	//поиск по иерархии таблиц символов
	for(CEnv* e = this; e != NULL; e = e->prev)
	{
		//поиск в конкретной таблице символов
		for(int iv = 0; iv < e->table.size(); iv++)
		{
			//ссылка на символ
			sym = e->table[iv];

			if(!(sym->kind.compare("with_table")))
			{
				//имя представления совпадает с именем таблицы, значит найдено нужное представление
				if(!tab.compare(sym->name))
				{
					wth_tab_ref = sym;
				}
			}
		}
		if(wth_tab_ref!=NULL)
			break;
	}

	return wth_tab_ref;
}

//используется для получения адреса столбца в таблице символов
CSymbol* CEnv::get_sym_column(string name, string kind, CSymbol* tab_ref)
{
	CSymbol* found = NULL;
	CSymbol* sym;
	
	debug("get_sym_column");
	
	//поиск по иерархии таблиц символов
	for(CEnv* e = this; e != NULL; e = e->prev)
	{
		//поиск в конкретной таблице символов
		for(int iv = 0; iv < e->table.size(); iv++)
		{
			//проверяемый символ
			sym = e->table[iv];

			//если совпадают вид, имя и ссылка на таблицу то считаем, что найден искомый символ
			if(!kind.compare(sym->kind) && !name.compare(sym->name) && tab_ref == sym->tab_ref)
			{
				found = sym;
				break;
			}
		}
		if(found != NULL)
		{
			break;
		}
	}
	
	if(found != NULL)
		debug("get_sym_column found name:%s, kind:%s for %s", found->name.c_str(), found->kind.c_str(), name.c_str());

	return found;
}

//получение столбцов для запроса типа *, t.*
vector<string> CEnv::get_all_tab_columns(string tab)
{
	vector<string> columns;
	CSymbol* sym;
	bool f_cols_find;
	
	debug("get_all_tab_columns");
	debug("table = %s", tab.c_str());
	
	if(tab.size() > 0)
	{
		//спецификатор задан, надо искать нужную таблцу по иерархии таблиц символов
		//поиск по иерархии таблиц символов
		debug("get_all_tab_columns: spec defined");
		f_cols_find = false;
		for(CEnv* e = this; e != NULL; e = e->prev)
		{
			debug("get_all_tab_columns: search in env%i", e->iCount);
			//поиск в конкретной таблице символов
			for(int iv = 0; iv < e->table.size(); iv++)
			{
				//ссылка на символ
				sym = e->table[iv];

				if((!(sym->kind.compare("table")) || !(sym->kind.compare("in_view"))))
				{
					debug("get_all_tab_columns: check table = %s", sym->name.c_str());
					//имя или синоним таблицы совпадают со спецификатором
					if(!tab.compare(sym->alias) || sym->alias.size() == 0 && !tab.compare(sym->name))
					{
						debug("get_all_tab_columns: col_list for table = %s, list_size = %d", sym->name.c_str(), sym->col_list.size());
						columns = sym->col_list;
						f_cols_find = true;
						break;
					}
				}
			}
			if(f_cols_find)
				break;
		}
	}
	else
	{
		//спецификатор не задан, берем столбцы всех таблиц в текущей тс
		//поиск в конкретной таблице символов
		debug("get_all_tab_columns: spec not defined");
		CEnv* e = this;
		for(int iv = 0; iv < e->table.size(); iv++)
		{
			//ссылка на символ
			sym = e->table[iv];

			if((!(sym->kind.compare("table")) || !(sym->kind.compare("in_view"))))
			{
				debug("get_all_tab_columns: col_list for table = %s, list_size = %d", sym->name.c_str(), sym->col_list.size());
				for(int ic = 0; ic < sym->col_list.size(); ic++)
				{
					columns.push_back(sym->col_list[ic]);
					debug("get_all_tab_columns: col(%d) = %s", ic, sym->col_list[ic].c_str());
				}
			}
		}
	}

	return columns;
}


int CEnv::iCount_st = 0;

CEnv::CEnv(): prev(NULL), table()
{
	iCount = iCount_st;
	iCount_st++;
}

CEnv::CEnv(CEnv* p): prev(p), table()
{
	iCount = iCount_st;
	iCount_st++;
}

void CEnv::put(CSymbol* sym)
{
	this->table.push_back(sym);
}

void CEnv::print(FILE* f)
{
	fprintf(f, "\n*****env%d***** ", this->iCount);
	if(this->prev != NULL)
	{
		fprintf(f, "parent env%d\n", this->prev->iCount);
	}
	else
	{
		fprintf(f, "root env\n");
	}
	for(int iv = 0; iv < table.size(); iv++)
	{
		fprintf(f, "\n%s\n", table[iv]->getString().c_str());
		if(!table[iv]->kind.compare("column") && table[iv]->tab_ref!=NULL)
		{
			fprintf(f, "tab_ref: %s (%s)\n", table[iv]->tab_ref->name.c_str(), table[iv]->tab_ref->alias.c_str());
		}
		
		/*for(int ic = 0; ic < table[iv]->col_list.size(); ic++)
		{
			printf("col(%d):%s\n", ic, table[iv]->col_list[ic].c_str());
		}*/
	}
}