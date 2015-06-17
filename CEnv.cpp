#include "CEnv.h"
#include "1csql.h"
#include "COciConn.h"

/********* CSymbol *********/

string CSymbol::getString()
{
	return string("name:    ") + name + string("\nalias:   ") + alias + string("\nkind:    ") + kind;
}

//���������� �� ������� � ������ �������� �������
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

//����� �� ���� ������ ��������������� �� ������
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
������ �� ������� �������� ������������ ��������� �������.
���� ��� ������� �� ������� ���������� ������ �� �������, �� �������, ��� ��� ������ � ����������� (undefined) �����.
*/

/*
1. ������� ����� ������������
1.1. ������ ������� � ����� ���������, ���� � ������ ��������� � ������������� ������
1.2. ���� ������� �� �������, �� ���� ������ � ������� �������� ������ � ����������� ����� �������������� � ������ ������� �� �������
1.3. ���� � ��������� ������� ��� ������ �����, �� �������, ��� ������� ������� �������.
1.4. ���� � ��������� ������� ���� ������ �����.
1.4.1. ���� ���� ������������ � ������ �����, �� ������� �������� �������.
1.4.2. ���� ���� ����������� � ������ �����, �� ������� �� ������������� ��������.
2. ������ �� ����� �������������
2.1. ������ ����� �������.
2.2. ���� � ������� ��� ������ �����, �� ���������� ����� �������.
2.3. ���� � ������� ���� ������ �����.
2.3.1. ���� ���� ������������ � ������ �����, �� ������� ������� �������.
2.3.2. ���� ���� ����������� � ������ �����, �� ������� �� ������������� ��������.
2.4. ���� ������� � ����� �������� �� �������, �� ���� ������ � ������� �������� ������ � ����������� ����� �������������� � ������ ������� �� �������
*/



CSymbol* CEnv::find_table_for_column(string name, string tab)
{
	CSymbol* tab_ref = NULL;
	CSymbol* sym;
	
	debug("find_table_for_column name=%s; tab=%s", name.c_str(), tab.c_str());
	
	//����� �� �������� ������ ��������
	for(CEnv* e = this; e != NULL; e = e->prev)
	{
		//����� � ���������� ������� ��������
		for(int iv = 0; iv < e->table.size(); iv++)
		{
			//������ �� ������
			sym = e->table[iv];

			if((!(sym->kind.compare("table")) || !(sym->kind.compare("in_view"))) || !(sym->kind.compare("tab_proc")))
			{
				//������������ ������� ����� � ��� ��� ������� ������� ��������� � ���
				if(tab.size() > 0 && (!tab.compare(sym->alias) || sym->alias.size() == 0 && !tab.compare(sym->name)))
				{
					//��� ������� �� ��������� ������ �����, ������� ��� ������� ������ �������
					if(sym->col_list.size() == 0)
					{
						tab_ref = sym;
						break;
					}
					//��� ������� ��������� ������ �����
					else
					{
						//���� ������� ������ � ������ ����� ���� �������, �� ������� ������� �������
						if(sym->is_table_contains_column(name) || !name.compare("*"))
						{
							tab_ref = sym;
							break;
						}
					}
				}
				//������������ ������� �� �����
				else if(tab.size() == 0)
				{
					//��� ������� ��������� ������ �����
					if(sym->col_list.size() > 0)
					{
						//���� ������� ������ � ������ ����� ���� �������, �� ������� ������� �������
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
		//���������� ��� �������
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
			//�������� ������ ���������� ������� ��� �����
			cname = CName(string(""));
		}

		//������� ������ ������ ��������� ����� ������ � ������� ������� ���������.
		sym = new CSymbol(cname[cname.size()-1], alias, kind, tab_ref);
		
		//����������� �������� �������
		if(!kind.compare("table"))
		{
			//����� ������� �� �������
			if(name.size() == 1 )
			{
				//����� ��� ������� ����������� �������������
				tab_ref = this->get_with_table_ref(name);
				
				//���� ��� ������� �������� �� ���������� �������������
				if(tab_ref != NULL)
				{
					//����������� ������ �������� � �����
					sym->col_list = tab_ref->col_list;
					sym->html_style = tab_ref->html_style;
				}
				//���� ������� ���������
				else
				{
					//�������� ������ ��������
					sym->col_list = ociconn::con.get_column_list_array(name[name.size()-1].c_str(), "");
				}
			}
			//����� ������� �������
			else if(name.size() > 1 )
			{
				sym->col_list = ociconn::con.get_column_list_array(name[name.size()-1].c_str(), name[name.size()-2].c_str());
			}
		}
		//���� ����� �� ���������, ������� �����
		if(sym->html_style.empty())
			sym->html_style = CSymbol::new_html_style();

		debug("create_symbol: add table=%s", cname[cname.size()-1].c_str());
		//������� ������ � ������� ��������
		put(sym);
	}
	else if(!kind.compare("column"))
	{
		//��� ������� ������ ���������� ���, ������� �����������
		cname = name;
		
		debug("create_symbol cname.size=%d", cname.size());
		debug("create_symbol name=%s", cname[cname.size()-1].c_str());
		//������� ���������� � ����� ������� ��������� �������
		switch(cname.size())
		{
		case 1:
			//������� �� ����� �������������
			tab_ref = find_table_for_column(cname[cname.size()-1], string());
			break;
		case 2:
			//������� ����� ������������
			tab_ref = find_table_for_column(cname[cname.size()-1], cname[cname.size()-2]);
			break;
		default:
			tab_ref = find_table_for_column(cname[cname.size()-1], cname[0]); //������� ������ ������ ������ �������
			break;
			;//���� ������� �� 3-� � ����� ������, ������ ����� ��� ���������� ���� ������ b1.b2.b3, ��� ����������, ��������� ��������� ������ schm.pkg.name
		}

		//���� ��� ������� �� ������� ������ �� �������, �� ������ ���������� ������� � ��������������� ����
		if(tab_ref == NULL)
		{
			kind = "undefined";
		}
		
		//����� ������� � ������� ��������
		sym = get_sym_column(cname[cname.size()-1], kind, tab_ref);

		//���� �� ������, �� ������� ����� ������ � ��������� � ������� ��������
		if(sym == NULL)
		{
			sym = new CSymbol(cname[cname.size()-1], alias, kind, tab_ref);
			put(sym);
		}
	}

	return sym;
}

//��������� ������ ����������� ������������� with_table
CSymbol* CEnv::get_with_table_ref(CName & name)
{
	CSymbol* wth_tab_ref = NULL;
	CSymbol* sym;
	string tab;
	
	if(name.size() > 0)
		tab = name[name.size()-1];

	debug("env.get_with_table_column_list name=%s", tab.c_str());
	
	//����� �� �������� ������ ��������
	for(CEnv* e = this; e != NULL; e = e->prev)
	{
		//����� � ���������� ������� ��������
		for(int iv = 0; iv < e->table.size(); iv++)
		{
			//������ �� ������
			sym = e->table[iv];

			if(!(sym->kind.compare("with_table")))
			{
				//��� ������������� ��������� � ������ �������, ������ ������� ������ �������������
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

//������������ ��� ��������� ������ ������� � ������� ��������
CSymbol* CEnv::get_sym_column(string name, string kind, CSymbol* tab_ref)
{
	CSymbol* found = NULL;
	CSymbol* sym;
	
	debug("get_sym_column");
	
	//����� �� �������� ������ ��������
	for(CEnv* e = this; e != NULL; e = e->prev)
	{
		//����� � ���������� ������� ��������
		for(int iv = 0; iv < e->table.size(); iv++)
		{
			//����������� ������
			sym = e->table[iv];

			//���� ��������� ���, ��� � ������ �� ������� �� �������, ��� ������ ������� ������
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

//��������� �������� ��� ������� ���� *, t.*
vector<string> CEnv::get_all_tab_columns(string tab)
{
	vector<string> columns;
	CSymbol* sym;
	bool f_cols_find;
	
	debug("get_all_tab_columns");
	debug("table = %s", tab.c_str());
	
	if(tab.size() > 0)
	{
		//������������ �����, ���� ������ ������ ������ �� �������� ������ ��������
		//����� �� �������� ������ ��������
		debug("get_all_tab_columns: spec defined");
		f_cols_find = false;
		for(CEnv* e = this; e != NULL; e = e->prev)
		{
			debug("get_all_tab_columns: search in env%i", e->iCount);
			//����� � ���������� ������� ��������
			for(int iv = 0; iv < e->table.size(); iv++)
			{
				//������ �� ������
				sym = e->table[iv];

				if((!(sym->kind.compare("table")) || !(sym->kind.compare("in_view"))))
				{
					debug("get_all_tab_columns: check table = %s", sym->name.c_str());
					//��� ��� ������� ������� ��������� �� ��������������
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
		//������������ �� �����, ����� ������� ���� ������ � ������� ��
		//����� � ���������� ������� ��������
		debug("get_all_tab_columns: spec not defined");
		CEnv* e = this;
		for(int iv = 0; iv < e->table.size(); iv++)
		{
			//������ �� ������
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