#include "Dump.h"
#include "CEnv.h"

static CAstNULL G_AstNULL;

void Dumpast(CName* pName)
{
	const CName& name = *pName;
	for(int i = 0; i < name.size(); i++)
	{
		if(i > 0)
		{
			printf(".");
		}
		if(name[i].b_quot)
			printf("\"");
		printf((*pName)[i].c_str());
		if(name[i].b_quot)
			printf("\"");
	}
}

void Dumpast(CAst* a)
{
	CAstNULL nullAst;
	if(a == NULL)
	{
		a = (CAst*)(&nullAst);
	}

	if(!strcmp(a->whoami(), "CSelect"))
	{
		if(((CSelect*)a)->wth != NULL)
		{
			printf("\n with ");
			Dumpast(((CSelect*)a)->wth);
		}
		printf("\nselect ");
		Dumpast(((CSelect*)a)->sl);
		printf("\n from ");
		Dumpast(((CSelect*)a)->tabrefs);
		if(((CSelect*)a)->whr != NULL)
		{
			printf("\n where ");
			Dumpast(((CSelect*)a)->whr);
		}
		if(((CSelect*)a)->hier != NULL)
		{
			Dumpast(((CSelect*)a)->hier);
		}
		if(((CSelect*)a)->hav_grp != NULL)
		{
			Dumpast(((CSelect*)a)->hav_grp);
		}
		if(((CSelect*)a)->ord != NULL)
		{
			Dumpast(((CSelect*)a)->ord);
		}
	}

	else if(!strcmp(a->whoami(), "CTable"))
	{
		Dumpast(((CTable*)a)->pName);
		if(((CTable*)a)->alias.size()>0)
		{
			printf(" as ");
			if(((CTable*)a)->b_quot)
				printf("\"");
			printf("%s", ((CTable*)a)->alias.c_str());
			if(((CTable*)a)->b_quot)
				printf("\"");
		}
	}

	else if(!strcmp(a->whoami(), "CField"))
	{
		Dumpast(((CField*)a)->pName);
	}

	else if(!strcmp(a->whoami(), "CSelExpr"))
	{
		Dumpast(((CSelExpr*)a)->a);
		if(((CSelExpr*)a)->alias.size()>0)
		{
			printf(" as ");
			if(((CSelExpr*)a)->b_quot)
				printf("\"");
			printf("%s", ((CSelExpr*)a)->alias.c_str());
			if(((CSelExpr*)a)->b_quot)
				printf("\"");
		}
	}
	
	else if(!strcmp(a->whoami(), "CExprList"))
	{
		for(int i = 0; i < ((CExprList*)a)->l.size(); i++)
		{
			Dumpast(((CExprList*)a)->l[i]);
			if(i + 1 < ((CExprList*)a)->l.size())
				printf(", ");
		}
	}

	else if(!strcmp(a->whoami(), "CWhere"))
	{
		Dumpast(((CWhere*)a)->a);
	}
	
	else if(!strcmp(a->whoami(), "CExp"))
	{
		Dumpast(((CExp*)a)->l);
		printf(" %s ", ((CExp*)a)->str.c_str());
		Dumpast(((CExp*)a)->r);
	}

	else if(!strcmp(a->whoami(), "CLogExp"))
	{
		Dumpast(((CLogExp*)a)->l);
		printf("\n %s ", ((CLogExp*)a)->str.c_str());
		Dumpast(((CLogExp*)a)->r);
	}
	
	else if(!strcmp(a->whoami(), "CIsExp"))
	{
		Dumpast(((CIsExp*)a)->a);
		printf(" is");
		if(!((CIsExp*)a)->b_flag)
			printf(" not");
		if(((CIsExp*)a)->str_null.size()>0)
			printf(" null");
		else
			printf(" %s", ((CIsExp*)a)->b?"true":"false");
	}

	else if(!strcmp(a->whoami(), "CInValExp"))
	{
		Dumpast(((CInValExp*)a)->l);
		if(!((CInValExp*)a)->b_flag)
			printf(" not");
		printf(" in(");
		Dumpast(((CInValExp*)a)->r);
		printf(")");
	}
	
	else if(!strcmp(a->whoami(), "CInSelExp"))
	{
		Dumpast(((CInSelExp*)a)->l);
		if(!((CInSelExp*)a)->b_flag)
			printf(" not");
		printf(" in(");
		Dumpast(((CInSelExp*)a)->r);
		printf(")");
	}
	
	else if(!strcmp(a->whoami(), "CExistsExp"))
	{
		if(!((CExistsExp*)a)->b_flag)
			printf(" not");
		printf("exists (");
		Dumpast(((CExistsExp*)a)->a);
		printf(")");
	}

	else if(!strcmp(a->whoami(), "CBtwnExp"))
	{
		Dumpast(((CBtwnExp*)a)->a);
		printf(" between ");
		Dumpast(((CBtwnExp*)a)->l);
		printf(" and ");
		Dumpast(((CBtwnExp*)a)->r);
	}

	else if(!strcmp(a->whoami(), "CJoin"))
	{
		Dumpast(((CJoin*)a)->tab_refs);
		if (((CJoin*)a)->dir.size() > 0)
			printf(" %s", ((CJoin*)a)->dir.c_str());
		if (((CJoin*)a)->type.size() > 0)
			printf(" %s", ((CJoin*)a)->type.c_str());
		printf(" join ");
		Dumpast(((CJoin*)a)->tabl);
		if(((CJoin*)a)->cond != NULL)
		{
			Dumpast(((CJoin*)a)->cond);
		}
	}

	else if(!strcmp(a->whoami(), "CJoinCond"))
	{
		if(((CJoinCond*)a)->cond != NULL)
		{
			printf(" %s ", ((CJoinCond*)a)->type.c_str());
			Dumpast(((CJoinCond*)a)->cond);
		}
	}
	
	else if(!strcmp(a->whoami(), "CTabSub"))
	{
		printf("(");
		Dumpast(((CTabSub*)a)->a);
		printf(") ");
		if(((CTabSub*)a)->alias.size() > 0)
		{
			if(((CTabSub*)a)->b_quot)
				printf("\"");
			printf("%s", ((CTabSub*)a)->alias.c_str());
			if(((CTabSub*)a)->b_quot)
				printf("\"");
		}
	}
	
	else if(!strcmp(a->whoami(), "CSelTabSub"))
	{
		printf("(");
		Dumpast(((CSelTabSub*)a)->a);
		printf(")");
		if(((CSelTabSub*)a)->alias.size() > 0)
		{
			printf(" as ");
			if(((CSelTabSub*)a)->b_quot)
				printf("\"");
			printf("%s", ((CSelTabSub*)a)->alias.c_str());
			if(((CSelTabSub*)a)->b_quot)
				printf("\"");
		}
	}

	else if (!strcmp(a->whoami(), "CUnionSub"))
	{
		printf("(");
		Dumpast(((CUnionSub*)a)->a);
		printf(")");
	}

	else if (!strcmp(a->whoami(), "CExpTabSub"))
	{
		printf("(");
		Dumpast(((CExpTabSub*)a)->a);
		printf(")");
	}
	
	else if(!strcmp(a->whoami(), "CCmp"))
	{
		Dumpast(((CCmp*)a)->l);
		printf(" %s ", ((CCmp*)a)->str.c_str());
		if(((CCmp*)a)->spec.size() > 0)
			printf("%s ", ((CCmp*)a)->spec.c_str());
		Dumpast(((CCmp*)a)->r);
	}

	else if(!strcmp(a->whoami(), "CValList"))
	{
		for(int i = 0; i < ((CValList*)a)->l.size(); i++)
		{
			Dumpast(((CValList*)a)->l[i]);
			if(i + 1 < ((CValList*)a)->l.size())
				printf(", ");
		}
	}

	else if(!strcmp(a->whoami(), "CCall"))
	{
		Dumpast(((CCall*)a)->pName);
		printf("(");
		Dumpast(((CCall*)a)->vall);
		printf(")");
	}

	else if(!strcmp(a->whoami(), "CFcount"))
	{
		if(((CFcount*)a)->b_all)
		{
			printf("count(*)");
		}
		else
		{
			printf("count(");
			Dumpast(((CFcount*)a)->a);
			printf(")");
		}
	}

	else if(!strcmp(a->whoami(), "CFsubstr"))
	{
		printf("substr(");
		switch (((CFsubstr*)a)->type)
		{
		case 1:
			Dumpast(((CFsubstr*)a)->a1);
			break;
		case 2:
			Dumpast(((CFsubstr*)a)->a1);
			printf(" from ");
			Dumpast(((CFsubstr*)a)->a2);
			break;
		case 3:
			Dumpast(((CFsubstr*)a)->a1);
			printf(" from ");
			Dumpast(((CFsubstr*)a)->a2);
			printf(" for ");
			Dumpast(((CFsubstr*)a)->a3);
			break;
		default:
			printf("Undefined type of Substr function");
		}
		printf(")");
	}

	else if(!strcmp(a->whoami(), "CFtrim"))
	{
		printf("trim(");
		if(((CFtrim*)a)->trim_ltb.empty())
		{
			Dumpast(((CFtrim*)a)->vall);
		}
		else
		{
			printf("%s ", ((CFtrim*)a)->trim_ltb.c_str());
			Dumpast(((CFtrim*)a)->a);
			printf(" from ");
			Dumpast(((CFtrim*)a)->vall);
		}
		printf(")");
	}

	else if(!strcmp(a->whoami(), "CInterval"))
	{
		printf("interval %s %s", ((CInterval*)a)->intrvl.c_str(), ((CInterval*)a)->time.c_str());
	}
	
	else if(!strcmp(a->whoami(), "CCase"))
	{
		printf("case ");
		if(((CCase*)a)->a != NULL)
		{
			Dumpast(((CCase*)a)->a);
		}

		Dumpast(((CCase*)a)->cl);

		if(((CCase*)a)->el != NULL)
		{
			printf(" else ");
			Dumpast(((CCase*)a)->el);
		}
		printf(" end");
	}

	else if(!strcmp(a->whoami(), "CCaseList"))
	{
		for(int i = 1; i < ((CCaseList*)a)->l.size(); i+=2)
		{
			printf(" when ");
			Dumpast(((CCaseList*)a)->l[i-1]);
			printf(" then ");
			Dumpast(((CCaseList*)a)->l[i]);
		}
	}
	
	else if(!strcmp(a->whoami(), "COutPlus"))
	{
		Dumpast(((COutPlus*)a)->a);
		printf("%s", ((COutPlus*)a)->str.c_str());
	}

	else if (!strcmp(a->whoami(), "CUnion"))
	{
		Dumpast(((CUnion*)a)->a1);
		printf(" %s ", ((CUnion*)a)->str.c_str());
		Dumpast(((CUnion*)a)->a2);
	}

	else if (!strcmp(a->whoami(), "CTabProc"))
	{
		if(((CTabProc*)a)->b_table_pref)
			printf("table(");
		Dumpast(((CTabProc*)a)->a);
		if(((CTabProc*)a)->b_table_pref)
			printf(")");

		if(((CTabProc*)a)->alias.size()>0)
		{
			printf(" as ");
			if(((CTabProc*)a)->b_quot)
				printf("\"");
			printf("%s", ((CTabProc*)a)->alias.c_str());
			if(((CTabProc*)a)->b_quot)
				printf("\"");
		}
	}

	else if(!strcmp(a->whoami(), "CWith"))
	{
		Dumpast(((CWith*)a)->a);
	}

	else if(!strcmp(a->whoami(), "CWithList"))
	{
		for(int i = 0; i < ((CWithList*)a)->l.size(); i++)
		{
			printf("\n");
			Dumpast(((CWithList*)a)->l[i].pName);
			printf(" as \n (");
			Dumpast(((CWithList*)a)->l[i].a);
			printf(")");
			if(i + 1 < ((CWithList*)a)->l.size())
				printf(",");
		}
	}
	
	else if (!strcmp(a->whoami(), "CPrior"))
	{
		printf("prior ");
		Dumpast(((CPrior*)a)->a);
	}
	
	else if (!strcmp(a->whoami(), "CHierarchy"))
	{
		if(((CHierarchy*)a)->start != NULL)
		{
			printf("\nstart with ");
			Dumpast(((CHierarchy*)a)->start);
		}
		if(((CHierarchy*)a)->connect != NULL)
		{
			printf("\nconnect by ");
			Dumpast(((CHierarchy*)a)->connect);
		}
	}

	else if (!strcmp(a->whoami(), "CConnect"))
	{
		if(((CConnect*)a)->b_noncycle)
		{
			printf("noncycle ");
		}
		Dumpast(((CConnect*)a)->a);
	}
	
	else if (!strcmp(a->whoami(), "CAnFunc"))
	{
		Dumpast(((CAnFunc*)a)->fn);
		Dumpast(((CAnFunc*)a)->an);
	}
	
	else if (!strcmp(a->whoami(), "CAnalytic"))
	{
		printf(" over(");
		if(((CAnalytic*)a)->part != NULL)
			Dumpast(((CAnalytic*)a)->part);
		if(((CAnalytic*)a)->ord != NULL)
		{
			if(((CAnalytic*)a)->part != NULL)
				printf(" ");
			Dumpast(((CAnalytic*)a)->ord);
		}
		if(((CAnalytic*)a)->wind != NULL)
			Dumpast(((CAnalytic*)a)->wind);
		printf(")");
	}
	
	else if (!strcmp(a->whoami(), "CWindow"))
	{
		printf(" %s", ((CWindow*)a)->str.c_str());
		if(((CWindow*)a)->wnd2 == NULL)
			Dumpast(((CWindow*)a)->wnd1);
		else
		{
			printf(" between ");
			Dumpast(((CWindow*)a)->wnd1);
			printf(" and ");
			Dumpast(((CWindow*)a)->wnd2);
		}
	}
	
	else if (!strcmp(a->whoami(), "CWndBound"))
	{
		if(((CWndBound*)a)->a == NULL)
		{
			printf("%s %s", ((CWndBound*)a)->str1.c_str(), ((CWndBound*)a)->str2.c_str());
		}
		else
		{
			Dumpast(((CWndBound*)a)->a);
			printf(" %s", ((CWndBound*)a)->str2.c_str());
		}
	}
	
	else if (!strcmp(a->whoami(), "CGroupList"))
	{
		for(int i = 0; i < ((CGroupList*)a)->l.size(); i++)
		{
			Dumpast(((CGroupList*)a)->l[i].a);
			if(!((CGroupList*)a)->l[i].str.empty())
				printf(" %s", ((CGroupList*)a)->l[i].str.c_str());
			if(i + 1 < ((CGroupList*)a)->l.size())
				printf(", ");
		}
	}

	else if (!strcmp(a->whoami(), "CGroup"))
	{
		printf("\ngroup by ");
		Dumpast(((CGroup*)a)->a);
		if(((CGroup*)a)->b_rollup)
			printf(" with rollup");
	}

	else if (!strcmp(a->whoami(), "CHaving"))
	{
		printf("\nhaving ");
		Dumpast(((CHaving*)a)->a);
	}

	else if(!strcmp(a->whoami(), "CHavGroup"))
	{
		if(((CHavGroup*)a)->grp != NULL)
			Dumpast(((CHavGroup*)a)->grp);
		if(((CHavGroup*)a)->hav != NULL)
			Dumpast(((CHavGroup*)a)->hav);
	}
	
	else if (!strcmp(a->whoami(), "COrder"))
	{
		printf("\norder by ");
		Dumpast(((COrder*)a)->a);
	}
	
	else if (!strcmp(a->whoami(), "CAnOrderList"))
	{
		for(int i = 0; i < ((CAnOrderList*)a)->l.size(); i++)
		{
			Dumpast(((CAnOrderList*)a)->l[i].a);
			if(!((CAnOrderList*)a)->l[i].str.empty())
				printf(" %s", ((CAnOrderList*)a)->l[i].str.c_str());
			if(i + 1 < ((CAnOrderList*)a)->l.size())
				printf(", ");
		}
	}
	
	else if (!strcmp(a->whoami(), "CAnOrder"))
	{
		printf("order by ");
		Dumpast(((CAnOrder*)a)->a);
	}
	
	else if (!strcmp(a->whoami(), "CPartition"))
	{
		printf("partition by ");
		Dumpast(((CPartition*)a)->a);
	}

	else if(!strcmp(a->whoami(), "CTabBrac"))
	{
		printf("(");
		Dumpast(((CTabBrac*)a)->a);
		printf(")");
	}

	else if(!strcmp(a->whoami(), "CExpBrac"))
	{
		printf("(");
		Dumpast(((CExpBrac*)a)->a);
		printf(")");
	}
	
	else if(!strcmp(a->whoami(), "CNot"))
	{
		printf("%s ", ((CNot*)a)->str.c_str());
		Dumpast(((CNot*)a)->a);
	}
	
	else if(!strcmp(a->whoami(), "CMinus"))
	{
		printf("%s", ((CMinus*)a)->str.c_str());
		Dumpast(((CMinus*)a)->a);
	}

	else if(!strcmp(a->whoami(), "CString"))
	{
		printf("%s", ((CString*)a)->str.c_str());
	}
	else if(!strcmp(a->whoami(), "CNumber"))
	{
		printf("%d", ((CNumber*)a)->n);
	}
	else if(!strcmp(a->whoami(), "CFloat"))
	{
		printf("%g", ((CFloat*)a)->d);
	}
	else if(!strcmp(a->whoami(), "CBool"))
	{
		printf("%b", ((CBool*)a)->b);
	}
	else if(!strcmp(a->whoami(), "CNull"))
	{
		printf("null");
	}
	else
	{
		printf("\nNot described %s\n", a->whoami());
	}
}

CAst* Get_left_select(CAst* a)
{
	CAst* ret;
	debug("Get_left_select");

	if(!strcmp(a->whoami(), "CUnion"))
	{
		ret = Get_left_select(((CUnion*)a)->a1);
	}
	else if(!strcmp(a->whoami(), "CUnionSub"))
	{
		ret = Get_left_select(((CUnionSub*)a)->a);
	}
	else if(!strcmp(a->whoami(), "CSelect"))
	{
		ret = a;
	}
	else
	{
		printf("Get_left_select for undefined %s\n", a->whoami());
		ret = &G_AstNULL;
	}

	return ret;
}

//получение имен столбцов вложенных подзапросов
void Get_column_names(CSymbol* sym, CAst* a, CEnv* env)
{
	CUnion* u;
	CSelect* sel;
	CExprList* el;
	vector<CAst*> vl;
	CField* fl;
	vector<string> vcols;

	debug("Get_column_names");
	debug("Get_column_names: env%i", env->cnt());

	if(!strcmp(a->whoami(), "CUnion"))
	{
		a = Get_left_select(a);
	}

	if(!strcmp(a->whoami(), "CSelect"))
	{
		//разбор целого запроса
		sel = (CSelect*)a;
		//содержит вложенный список выражений запроса
		el = (CExprList*)(sel->sl);
		//список выражений запроса
		vl = el->l;
	}
	else
	{
		printf("Get_column_names for not described %s\n", a->whoami());
		return;
	}
	
	sym->col_list.clear();

	//просмотр всех выражений запроса
	for(int ie = 0; ie < vl.size(); ie++)
	{
		//обычные выражения
		if(!strcmp(vl[ie]->whoami(), "CSelExpr"))
		{
			//берется синоним, или, если для выражение является полем и у него отстутствует синоним, то берется само поле
			if(((CSelExpr*)vl[ie])->alias.size() == 0 && !strcmp(((CSelExpr*)vl[ie])->a->whoami(), "CField"))
			{
				//переменная, содержащая поле
				fl = (CField*)(((CSelExpr*)vl[ie])->a);
				const CName& name = *(fl->pName);
				if(name.size() > 0)
				{
					//особый случай выборки всех полей, либо всех полей определеных таблиц
					if(!(name[name.size()-1].compare("*")))
					{
						debug("Get_column_names for (*)\n");
						switch(name.size())
						{
						case 1:
							//выборка всех полей всех таблиц
							vcols = env->get_all_tab_columns(string());
							break;
						case 2:
							//выборка всех полей определенной таблицы
							vcols = env->get_all_tab_columns(name[name.size()-2]);
							break;
						default:
							break;
						}
						//добавление полученных полей в список полей таблицы
						for(int ic = 0; ic < vcols.size(); ic++)
						{
							sym->col_list.push_back(vcols[ic]);
						}
					}
					//сохранить имя поля
					else
					{
						sym->col_list.push_back(name[name.size()-1]);
					}
					debug("Get_column_names add CField name %s\n", name[name.size()-1].c_str());
				}
				//у поля отсутствует имя и синоноим
				else
				{
					printf("Get_column_names: CField.name.size=0\n");
				}
			}
			//если есть синоним, то записываем его
			else if(((CSelExpr*)vl[ie])->alias.size() != 0)
			{
				sym->col_list.push_back(((CSelExpr*)vl[ie])->alias);
				debug("Get_column_names add CField alias %s\n", ((CSelExpr*)vl[ie])->alias.c_str());
			}
		}
		//подзапрос определяется синонимом
		else if(!strcmp(vl[ie]->whoami(), "CSelTabSub"))
		{
			sym->col_list.push_back(((CSelTabSub*)vl[ie])->alias);
			debug("Get_column_names add CSelTabSub alias", ((CSelTabSub*)vl[ie])->alias.c_str());
		}
		//неопределенный тип выражения запроса
		else
		{
			printf("Get_column_names for not described %s\n", vl[ie]->whoami());
		}
	}
}

CEnv* MakeEnv(CAst* a, CEnv* env)
{
	CAstNULL nullAst;
	CSymbol* sym;

	if(a == NULL)
	{
		a = (CAst*)(&nullAst);
	}

	debug("MakeEnv: %s", a->whoami());
	/* rem env = */
	if(!strcmp(a->whoami(), "CSelect"))
	{
		env = new CEnv(env);
		((CSelect*)a)->env = env;

		if(((CSelect*)a)->wth != NULL)
		{
			MakeEnv(((CSelect*)a)->wth, env);
		}
		MakeEnv(((CSelect*)a)->tabrefs, env);
		MakeEnv(((CSelect*)a)->sl, env);
		if(((CSelect*)a)->whr != NULL)
		{
			MakeEnv(((CSelect*)a)->whr, env);
		}
		if(((CSelect*)a)->hier != NULL)
		{
			MakeEnv(((CSelect*)a)->hier, env);
		}
		if(((CSelect*)a)->hav_grp != NULL)
		{
			MakeEnv(((CSelect*)a)->hav_grp, env);
		}
		if(((CSelect*)a)->ord != NULL)
		{
			MakeEnv(((CSelect*)a)->ord, env);
		}

		((CSelect*)a)->env->print(stdout);
	}

	else if(!strcmp(a->whoami(), "CTable"))
	{
		sym = env->create_symbol(*((CTable*)a)->pName, ((CTable*)a)->alias, "table");
		((CTable*)a)->sym = sym;
	}

	else if(!strcmp(a->whoami(), "CExprList"))
	{
		for(int i = 0; i < ((CExprList*)a)->l.size(); i++)
		{
			MakeEnv(((CExprList*)a)->l[i], env);
		}
	}

	else if(!strcmp(a->whoami(), "CTabSub"))
	{
		sym = env->create_symbol(CName(), ((CTabSub*)a)->alias, string("in_view"));
		/*env = MakeEnv(((CTabSub*)a)->a, env);
		Get_column_names(sym, ((CTabSub*)a)->a, env);*/
		Get_column_names(sym, ((CTabSub*)a)->a, MakeEnv(((CTabSub*)a)->a, env));
		((CTabSub*)a)->sym = sym;
	}

	else if(!strcmp(a->whoami(), "CSelTabSub"))
	{
		//по-факту поле из запроса
		//env->create_symbol(CName(), ((CSelTabSub*)a)->alias, string("table"));
		MakeEnv(((CSelTabSub*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CUnionSub"))
	{
		MakeEnv(((CUnionSub*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CExpTabSub"))
	{
		MakeEnv(((CExpTabSub*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CJoin"))
	{
		MakeEnv(((CJoin*)a)->tab_refs, env);
		MakeEnv(((CJoin*)a)->tabl, env);
		if(((CJoin*)a)->cond != NULL)
		{
			MakeEnv(((CJoin*)a)->cond, env);
		}
	}

	else if(!strcmp(a->whoami(), "CJoinCond"))
	{
		if(((CJoinCond*)a)->cond != NULL)
		{
			MakeEnv(((CJoinCond*)a)->cond, env);
		}
	}

	else if(!strcmp(a->whoami(), "CLogExp"))
	{
		MakeEnv(((CLogExp*)a)->l, env);
		MakeEnv(((CLogExp*)a)->r, env);
	}

	else if(!strcmp(a->whoami(), "CInSelExp"))
	{
		MakeEnv(((CInSelExp*)a)->l, env);
		MakeEnv(((CInSelExp*)a)->r, env);
	}

	else if(!strcmp(a->whoami(), "CWhere"))
	{
		MakeEnv(((CWhere*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CExistsExp"))
	{
		MakeEnv(((CExistsExp*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CField"))
	{
		sym = env->create_symbol(*(((CField*)a)->pName), string(""), string("column"));
		((CField*)a)->sym = sym;
	}

	else if(!strcmp(a->whoami(), "CSelExpr"))
	{
		MakeEnv(((CSelExpr*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CCmp"))
	{
		MakeEnv(((CCmp*)a)->l, env);
		MakeEnv(((CCmp*)a)->r, env);
	}

	else if(!strcmp(a->whoami(), "CExp"))
	{
		MakeEnv(((CExp*)a)->l, env);
		MakeEnv(((CExp*)a)->r, env);
	}

	else if(!strcmp(a->whoami(), "CIsExp"))
	{
		MakeEnv(((CIsExp*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CInValExp"))
	{
		MakeEnv(((CInValExp*)a)->l, env);
		MakeEnv(((CInValExp*)a)->r, env);
	}

	else if(!strcmp(a->whoami(), "CBtwnExp"))
	{
		MakeEnv(((CBtwnExp*)a)->a, env);
		MakeEnv(((CBtwnExp*)a)->l, env);
		MakeEnv(((CBtwnExp*)a)->r, env);
	}

	else if(!strcmp(a->whoami(), "CValList"))
	{
		for(int i = 0; i < ((CValList*)a)->l.size(); i++)
		{
			MakeEnv(((CValList*)a)->l[i], env);
		}
	}

	else if(!strcmp(a->whoami(), "CCall"))
	{
		MakeEnv(((CCall*)a)->vall, env);
	}

	else if(!strcmp(a->whoami(), "CFcount"))
	{
		if(((CFcount*)a)->b_all)
		{
		}
		else
		{
			MakeEnv(((CFcount*)a)->a, env);
		}
	}

	else if(!strcmp(a->whoami(), "CFsubstr"))
	{
		switch (((CFsubstr*)a)->type)
		{
		case 1:
			MakeEnv(((CFsubstr*)a)->a1, env);
			break;
		case 2:
			MakeEnv(((CFsubstr*)a)->a1, env);
			MakeEnv(((CFsubstr*)a)->a2, env);
			break;
		case 3:
			MakeEnv(((CFsubstr*)a)->a1, env);
			MakeEnv(((CFsubstr*)a)->a2, env);
			MakeEnv(((CFsubstr*)a)->a3, env);
			break;
		default:
			printf("MakeEnv for undefined type of Substr function");
		}
	}

	else if(!strcmp(a->whoami(), "CFtrim"))
	{
		if(((CFtrim*)a)->trim_ltb.empty())
		{
			MakeEnv(((CFtrim*)a)->vall, env);
		}
		else
		{
			MakeEnv(((CFtrim*)a)->a, env);
			MakeEnv(((CFtrim*)a)->vall, env);
		}
	}

	else if(!strcmp(a->whoami(), "CInterval"))
	{
	}

	else if(!strcmp(a->whoami(), "CCase"))
	{
		if(((CCase*)a)->a != NULL)
		{
			MakeEnv(((CCase*)a)->a, env);
		}

		MakeEnv(((CCase*)a)->cl, env);

		if(((CCase*)a)->el != NULL)
		{
			MakeEnv(((CCase*)a)->el, env);
		}
	}

	else if(!strcmp(a->whoami(), "CCaseList"))
	{
		for(int i = 1; i < ((CCaseList*)a)->l.size(); i+=2)
		{
			MakeEnv(((CCaseList*)a)->l[i-1], env);
			MakeEnv(((CCaseList*)a)->l[i], env);
		}
	}

	else if(!strcmp(a->whoami(), "COutPlus"))
	{
		MakeEnv(((COutPlus*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CUnion"))
	{
		MakeEnv(((CUnion*)a)->a1, env);
		MakeEnv(((CUnion*)a)->a2, env);
	}

	else if (!strcmp(a->whoami(), "CTabProc"))
	{
		sym = env->create_symbol(CName(), ((CTable*)a)->alias, "tab_proc");
		((CTabProc*)a)->sym = sym;
		MakeEnv(((CTabProc*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CWith"))
	{
		MakeEnv(((CWith*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CWithList"))
	{
		for(int i = 0; i < ((CWithList*)a)->l.size(); i++)
		{
			sym = env->create_symbol(*(((CWithList*)a)->l[i].pName), string(), string("with_table"));
			/*env = MakeEnv(((CWithList*)a)->l[i].a, env);
			Get_column_names(sym, ((CWithList*)a)->l[i].a, env);*/
			Get_column_names(sym, ((CWithList*)a)->l[i].a, MakeEnv(((CWithList*)a)->l[i].a, env));
			((CWithList*)a)->l[i].sym = sym;
		}
	}

	else if (!strcmp(a->whoami(), "CPrior"))
	{
		MakeEnv(((CPrior*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CHierarchy"))
	{
		if(((CHierarchy*)a)->start != NULL)
		{
			MakeEnv(((CHierarchy*)a)->start, env);
		}
		if(((CHierarchy*)a)->connect != NULL)
		{
			MakeEnv(((CHierarchy*)a)->connect, env);
		}
	}

	else if (!strcmp(a->whoami(), "CConnect"))
	{
		MakeEnv(((CConnect*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CAnFunc"))
	{
		MakeEnv(((CAnFunc*)a)->fn, env);
		MakeEnv(((CAnFunc*)a)->an, env);
	}

	else if (!strcmp(a->whoami(), "CAnalytic"))
	{
		if(((CAnalytic*)a)->part != NULL)
			MakeEnv(((CAnalytic*)a)->part, env);
		if(((CAnalytic*)a)->ord != NULL)
		{
			MakeEnv(((CAnalytic*)a)->ord, env);
		}
		if(((CAnalytic*)a)->wind != NULL)
			MakeEnv(((CAnalytic*)a)->wind, env);
	}

	else if (!strcmp(a->whoami(), "CWindow"))
	{
		if(((CWindow*)a)->wnd2 == NULL)
			MakeEnv(((CWindow*)a)->wnd1, env);
		else
		{
			MakeEnv(((CWindow*)a)->wnd1, env);
			MakeEnv(((CWindow*)a)->wnd2, env);
		}
	}

	else if (!strcmp(a->whoami(), "CWndBound"))
	{
		if(((CWndBound*)a)->a != NULL)
		{
			MakeEnv(((CWndBound*)a)->a, env);
		}
	}

	else if (!strcmp(a->whoami(), "CGroupList"))
	{
		for(int i = 0; i < ((CGroupList*)a)->l.size(); i++)
		{
			MakeEnv(((CGroupList*)a)->l[i].a, env);
		}
	}

	else if (!strcmp(a->whoami(), "CGroup"))
	{
		MakeEnv(((CGroup*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CHaving"))
	{
		MakeEnv(((CHaving*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CHavGroup"))
	{
		if(((CHavGroup*)a)->grp != NULL)
			MakeEnv(((CHavGroup*)a)->grp, env);
		if(((CHavGroup*)a)->hav != NULL)
			MakeEnv(((CHavGroup*)a)->hav, env);
	}

	else if (!strcmp(a->whoami(), "COrder"))
	{
		MakeEnv(((COrder*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CAnOrderList"))
	{
		for(int i = 0; i < ((CAnOrderList*)a)->l.size(); i++)
		{
			MakeEnv(((CAnOrderList*)a)->l[i].a, env);
		}
	}

	else if(!strcmp(a->whoami(), "CTabBrac"))
	{
		MakeEnv(((CTabBrac*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CExpBrac"))
	{
		MakeEnv(((CExpBrac*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CAnOrder"))
	{
		MakeEnv(((CAnOrder*)a)->a, env);
	}

	else if (!strcmp(a->whoami(), "CPartition"))
	{
		MakeEnv(((CPartition*)a)->a, env);
	}
	
	else if(!strcmp(a->whoami(), "CNot"))
	{
		MakeEnv(((CNot*)a)->a, env);
	}
	
	else if(!strcmp(a->whoami(), "CMinus"))
	{
		MakeEnv(((CMinus*)a)->a, env);
	}

	else if(!strcmp(a->whoami(), "CString"))
	{
	}
	else if(!strcmp(a->whoami(), "CNumber"))
	{
	}
	else if(!strcmp(a->whoami(), "CFloat"))
	{
	}
	else if(!strcmp(a->whoami(), "CBool"))
	{
	}
	else if(!strcmp(a->whoami(), "CNull"))
	{
	}

	else
	{
		printf("\nMakeEnv for not described %s\n", a->whoami());
	}

	return env;
}

void Dumpast_html(CAst* a, FILE* f)
{
	fprintf(f,
"<!DOCTYPE HTML>\n\
<html>\n\
\n\
<head>\n\
  <link rel=\"stylesheet\" href=\"styles.css\">\n\
  <meta charset=\"Windows-1251\">\n\
</head>\n\
\n\
<body>\n\
  <header>\n\
  </header>\n\
  <div class=\"query\">\n");
	
	Dumpast_html_recurs(a, f, 0, &CAstNULL());
	
	fprintf(f,
"  </div>\n\
</body>\n\
\n\
</html>");
}

void print_ident(FILE* f, double d_length)
{
	int length = (int)d_length;
	fprintf(f, "<text>");
	for(int i = 0; i < length; i++)
	{
		fprintf(f, "&nbsp;");
	}
	fprintf(f, "</text>");
}

void print_ident(FILE* f, double d_length, char* str)
{
	int length = (int)d_length;
	fprintf(f, "<text>");
	for(int i = 0; i < length; i++)
	{
		fprintf(f, str);
	}
	fprintf(f, "</text>");
}

void Dumpast_html_recurs(CName* pName, FILE* f, double level)
{
	const CName& name = *pName;
	for(int i = 0; i < name.size(); i++)
	{
		if(i > 0)
		{
			fprintf(f, ".");
		}
		if(name[i].b_quot)
			fprintf(f, "\"");
		fprintf(f, name[i].c_str());
		if(name[i].b_quot)
			fprintf(f, "\"");
	}
}

void Dumpast_html_recurs(CAst* a, FILE* f, double level, CAst* prev)
{
	bool b_left_paren = false, b_right_paren = false;
	double left_logic_indent = 0.0, right_logic_indent = 0.0;
	bool b_val_list_seq = false;
	CAstNULL nullAst;
	if(a == NULL)
	{
		a = (CAst*)(&nullAst);
	}

	//Использование для отладки
	//fprintf(f, "<text>&nbsp;prev->%s&nbsp;</text>", prev->whoami());

	if(!strcmp(a->whoami(), "CSelect"))
	{
		if(((CSelect*)a)->wth != NULL)
		{
			fprintf(f, "<text class=\"text-keyword-control\">with&nbsp;</text>");
			Dumpast_html_recurs(((CSelect*)a)->wth, f, level + 5.0/8.0, a);
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
		}
		fprintf(f, "<text class=\"text-keyword-control\">select&nbsp;</text><text class=\"text-field\">");
		Dumpast_html_recurs(((CSelect*)a)->sl, f, level, a);
		fprintf(f, "<br>");
		print_ident(f, 8.0*level);
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;&nbsp;from&nbsp;</text>");
		Dumpast_html_recurs(((CSelect*)a)->tabrefs, f, level, a);
		if(((CSelect*)a)->whr != NULL)
		{
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;where&nbsp;</text>");
			Dumpast_html_recurs(((CSelect*)a)->whr, f, level, a);
		}
		if(((CSelect*)a)->hier != NULL)
		{
			Dumpast_html_recurs(((CSelect*)a)->hier, f, level, a);
		}
		if(((CSelect*)a)->hav_grp != NULL)
		{
			Dumpast_html_recurs(((CSelect*)a)->hav_grp, f, level, a);
		}
		if(((CSelect*)a)->ord != NULL)
		{
			Dumpast_html_recurs(((CSelect*)a)->ord, f, level, a);
		}
	}

	else if(!strcmp(a->whoami(), "CTable"))
	{
		if(!((CTable*)a)->sym->kind.compare("table") || !((CTable*)a)->sym->kind.compare("in_view"))
		{
			fprintf(f, "<text class=\"");
			fprintf(f, ((CTable*)a)->sym->html_style.c_str());
			fprintf(f, "\">");
		}
		else
		{
			fprintf(f, "<text class=\"text-table\">");
		}
		Dumpast_html_recurs(((CTable*)a)->pName, f, level);
		if(((CTable*)a)->alias.size()>0)
		{
			print_ident(f, 1.0);
			if(((CTable*)a)->b_quot)
				fprintf(f, "\"");
			fprintf(f, "%s", ((CTable*)a)->alias.c_str());
			if(((CTable*)a)->b_quot)
				fprintf(f, "\"");
		}
		fprintf(f, "</text>");
	}

	else if(!strcmp(a->whoami(), "CField"))
	{
		if(!((CField*)a)->sym->kind.compare("column"))
		{
			fprintf(f, "<text class=\"");
			fprintf(f, ((CField*)a)->sym->tab_ref->html_style.c_str());
			fprintf(f, "\">");
		}
		else
		{
			fprintf(f, "<text class=\"text-field\">");
		}
		Dumpast_html_recurs(((CField*)a)->pName, f, level);
		fprintf(f, "</text>");
	}

	else if(!strcmp(a->whoami(), "CSelExpr"))
	{
		Dumpast_html_recurs(((CSelExpr*)a)->a, f, level, a);
		if(((CSelExpr*)a)->alias.size()>0)
		{
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;as&nbsp;</text>");
			if(((CSelExpr*)a)->b_quot)
				fprintf(f, "\"");
			fprintf(f, "%s", ((CSelExpr*)a)->alias.c_str());
			if(((CSelExpr*)a)->b_quot)
				fprintf(f, "\"");
		}
	}

	else if(!strcmp(a->whoami(), "CExprList"))
	{
		level = level+7.0/8.0;
		for(int i = 0; i < ((CExprList*)a)->l.size(); i++)
		{
			//if(i > 0)
			//	print_ident(f, 8.0*level);

			Dumpast_html_recurs(((CExprList*)a)->l[i], f, level, a);
			if(i + 1 < ((CExprList*)a)->l.size())
			{
				fprintf(f, "<text class=\"text-comma\">,&nbsp;</text>");
				//вертикально печатать
				if(((CExprList*)a)->b_vert)
				{
					fprintf(f, "<br>");
					print_ident(f, 8.0*level);
				}
			}
		}
	}

	else if(!strcmp(a->whoami(), "CWhere"))
	{
		Dumpast_html_recurs(((CWhere*)a)->a, f, level, a);
	}

	else if(!strcmp(a->whoami(), "CExp"))
	{
		Dumpast_html_recurs(((CExp*)a)->l, f, level, a);
		
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s&nbsp;</text>", ((CExp*)a)->str.c_str());
		Dumpast_html_recurs(((CExp*)a)->r, f, level, a);
	}

	else if(!strcmp(a->whoami(), "CLogExp"))
	{
		if(!((CLogExp*)a)->str.compare("and"))
		{
			if(!strcmp(((CLogExp*)a)->l->whoami(), "CLogExp"))
			{
				if(!((CLogExp*)((CLogExp*)a)->l)->str.compare("or"))
				{
					//дополнительный символ из-за скобки
					left_logic_indent = 5.0/8.0;
					b_left_paren = true;
				}
			}
			if(!strcmp(((CLogExp*)a)->r->whoami(), "CLogExp"))
			{
				if(!((CLogExp*)((CLogExp*)a)->r)->str.compare("or"))
				{
					//дополнительный символ из-за скобки
					right_logic_indent = 5.0/8.0;
					b_right_paren = true;
				}
			}

			//если предшествующий символ and, то отступ не нужен
			if(! (!strcmp(prev->whoami(), "CLogExp") && !((CLogExp*)prev)->str.compare("and") || !strcmp(prev->whoami(), "CWhere") || !strcmp(prev->whoami(), "CHaving") || !strcmp(prev->whoami(), "CCaseList") || !strcmp(prev->whoami(), "CJoinCond") || !strcmp(prev->whoami(), "CConnect") || !strcmp(prev->whoami(), "CHierarchy") ) )
			{
				print_ident(f, 4.0);
			}
		}
		else if(!((CLogExp*)a)->str.compare("or"))
		{
			if(!strcmp(((CLogExp*)a)->l->whoami(), "CLogExp"))
			{
				if(!((CLogExp*)((CLogExp*)a)->l)->str.compare("and"))
				{
					left_logic_indent = 3.0/8.0;
				}
			}
			if(!strcmp(((CLogExp*)a)->r->whoami(), "CLogExp"))
			{
				if(!((CLogExp*)((CLogExp*)a)->r)->str.compare("and"))
				{
					right_logic_indent = 3.0/8.0;
				}
			}

			//если предшествующий символ or, то отступ не нужен
			if(! (!strcmp(prev->whoami(), "CLogExp") && !((CLogExp*)prev)->str.compare("or") || !strcmp(prev->whoami(), "CWhere") || !strcmp(prev->whoami(), "CHaving") || !strcmp(prev->whoami(), "CCaseList") || !strcmp(prev->whoami(), "CJoinCond") || !strcmp(prev->whoami(), "CConnect") || !strcmp(prev->whoami(), "CHierarchy") ) )
			{
				print_ident(f, 3.0);
			}
		}
		
		//если многострочное условие, то отступ должен увеличиваться для каждой строки
		if(! (!strcmp(((CLogExp*)a)->l->whoami(), "CLogExp") ) )
			left_logic_indent += ((double)((CLogExp*)a)->str.size()+1.0)/8.0;
		if(! (!strcmp(((CLogExp*)a)->r->whoami(), "CLogExp") ) )
			right_logic_indent += ((double)((CLogExp*)a)->str.size()+1.0)/8.0;
		
		//печать отступа для самого первого условия
		if(!strcmp(prev->whoami(), "CWhere") || !strcmp(prev->whoami(), "CHaving") /*|| !strcmp(prev->whoami(), "CCaseList") || !strcmp(prev->whoami(), "CJoinCond")*/ || !strcmp(prev->whoami(), "CConnect") || !strcmp(prev->whoami(), "CHierarchy") )
			level+=max((6.0 - (double)((CLogExp*)a)->str.size())/8.0, 0.0);
		
		if(b_left_paren)
		{
			fprintf(f, "<text class=\"text-brackets\">(</text>");
		}
		level+=left_logic_indent;
		Dumpast_html_recurs(((CLogExp*)a)->l, f, level, a);
		level-=left_logic_indent;
		if(b_left_paren)
		{
			fprintf(f, "<text class=\"text-brackets\">)</text>");
		}

		fprintf(f, "<br>");
		print_ident(f, 8.0*level);
		fprintf(f, "<text class=\"text-keyword-control\">%s&nbsp;", ((CLogExp*)a)->str.c_str());
		fprintf(f, "</text>");

		if(b_right_paren)
		{
			fprintf(f, "<text class=\"text-brackets\">(</text>");
		}
		level+=right_logic_indent;
		Dumpast_html_recurs(((CLogExp*)a)->r, f, level, a);
		level-=right_logic_indent;
		if(b_right_paren)
		{
			fprintf(f, "<text class=\"text-brackets\">)</text>");
		}
	}

	else if(!strcmp(a->whoami(), "CIsExp"))
	{
		Dumpast_html_recurs(((CIsExp*)a)->a, f, level, a);
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;is</text>");
		if(!((CIsExp*)a)->b_flag)
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;not</text>");
		if(((CIsExp*)a)->str_null.size()>0)
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;null</text>");
		else
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s</text>", ((CIsExp*)a)->b?"true":"false");
	}

	else if(!strcmp(a->whoami(), "CInValExp"))
	{
		Dumpast_html_recurs(((CInValExp*)a)->l, f, level, a);
		if(!((CInValExp*)a)->b_flag)
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;not</text>");
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;in&nbsp;</text>");
		fprintf(f, "<br>");
		print_ident(f, 7.0 + 8.0 * (level));
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CInValExp*)a)->r, f, level + 1.0 / 8.0, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CInSelExp"))
	{
		level++;
		Dumpast_html_recurs(((CInSelExp*)a)->l, f, level, a);
		if(!((CInSelExp*)a)->b_flag)
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;not</text>");
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;in&nbsp;</text>");
		fprintf(f, "<br>");
		print_ident(f, 7.0 + 8.0 * (level - 1));
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CInSelExp*)a)->r, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CExistsExp"))
	{
		level++;
		if(!((CExistsExp*)a)->b_flag)
			fprintf(f, "<text class=\"text-keyword-control\">not&nbsp;</text>");
		fprintf(f, "<text class=\"text-keyword-control\">exists&nbsp;</text>");
		fprintf(f, "<br>");
		print_ident(f, 7.0 + 8.0 * (level - 1));
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CExistsExp*)a)->a, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CBtwnExp"))
	{
		Dumpast_html_recurs(((CBtwnExp*)a)->a, f, level, a);
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;between&nbsp;</text>");
		Dumpast_html_recurs(((CBtwnExp*)a)->l, f, level, a);
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;and&nbsp;</text>");
		Dumpast_html_recurs(((CBtwnExp*)a)->r, f, level, a);
	}

	else if(!strcmp(a->whoami(), "CJoin"))
	{
		Dumpast_html_recurs(((CJoin*)a)->tab_refs, f, level, a);
		
		fprintf(f, "<br>");
		print_ident(f, 8.0*level);
		
		if (((CJoin*)a)->dir.size() > 0)
		{
			fprintf(f, "<text class=\"text-keyword-control\">%s&nbsp;</text>", ((CJoin*)a)->dir.c_str());
		}
		if (((CJoin*)a)->type.size() > 0)
		{
			fprintf(f, "<text class=\"text-keyword-control\">%s&nbsp;</text>", ((CJoin*)a)->type.c_str());
		}
		fprintf(f, "<text class=\"text-keyword-control\">join&nbsp;</text>");
		if( (!strcmp((((CJoin*)a)->tabl)->whoami(), "CJoin") ) )
			level += 2.0/8.0;
		Dumpast_html_recurs(((CJoin*)a)->tabl, f, level, a);
		if( ( !strcmp((((CJoin*)a)->tabl)->whoami(), "CJoin") ) )
			level -= 2.0/8.0;

		if(((CJoin*)a)->cond != NULL)
		{
			Dumpast_html_recurs(((CJoin*)a)->cond, f, level, a);
		}
	}

	else if(!strcmp(a->whoami(), "CJoinCond"))
	{
		if(((CJoinCond*)a)->cond != NULL)
		{
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
			fprintf(f, "<text class=\"text-keyword-control\">%s&nbsp;</text>", ((CJoinCond*)a)->type.c_str());
			if(!((CJoinCond*)a)->type.compare("using"))
				fprintf(f, "<text class=\"text-brackets\">(</text>");
			Dumpast_html_recurs(((CJoinCond*)a)->cond, f, level, a);
			if(!((CJoinCond*)a)->type.compare("using"))
				fprintf(f, "<text class=\"text-brackets\">)</text>");
		}
	}

	/*else if(!strcmp(a->whoami(), "CJoin"))
	{
		Dumpast_html_recurs(((CJoin*)a)->tab_refs, f, level, a);
		level -= 7.0/8.0;
		fprintf(f, "<br>");
		print_ident(f, 8.0*level);
		if (((CJoin*)a)->dir.size() > 0)
		{
			print_ident(f, max(5.0-(double)((CJoin*)a)->dir.size(), 0.0));
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s</text>", ((CJoin*)a)->dir.c_str());
		}
		if (((CJoin*)a)->type.size() > 0)
		{
			if (((CJoin*)a)->dir.empty())
			{
				print_ident(f, max(5.0-(double)((CJoin*)a)->type.size(), 0.0));
			}
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s</text>", ((CJoin*)a)->type.c_str());
		}
		if (!((CJoin*)a)->type.empty() || !((CJoin*)a)->dir.empty())
		{	
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
		}
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;&nbsp;join&nbsp;</text>");
		Dumpast_html_recurs(((CJoin*)a)->tabl, f, level, a);
		if(((CJoin*)a)->cond != NULL)
		{
			Dumpast_html_recurs(((CJoin*)a)->cond, f, level+3.0/8.0, a);
		}
	}

	else if(!strcmp(a->whoami(), "CJoinCond"))
	{
		if(((CJoinCond*)a)->cond != NULL)
		{
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s&nbsp;</text>", ((CJoinCond*)a)->type.c_str());
			Dumpast_html_recurs(((CJoinCond*)a)->cond, f, level, a);
		}
	}*/

	else if(!strcmp(a->whoami(), "CTabSub"))
	{
		/*if(!strcmp(prev->whoami(), "CJoin"))
			level+=7.0/8.0;*/
		level+=1.0/8.0;
		fprintf(f, "<text class=\"text-table\">");
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CTabSub*)a)->a, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
		if(((CTabSub*)a)->alias.size() > 0)
		{
			if(!((CTabSub*)a)->sym->kind.compare("table") || !((CTabSub*)a)->sym->kind.compare("in_view"))
			{
				fprintf(f, "<text class=\"");
				fprintf(f, ((CTabSub*)a)->sym->html_style.c_str());
				fprintf(f, "\">");
			}
			else
			{
				fprintf(f, "<text class=\"text-table\">");
			}
			print_ident(f, 1.0);
			if(((CTabSub*)a)->b_quot)
				fprintf(f, "\"");
			fprintf(f, "%s", ((CTabSub*)a)->alias.c_str());
			if(((CTabSub*)a)->b_quot)
				fprintf(f, "\"");
			fprintf(f, "</text>");
		}
		fprintf(f, "</text>");
	}

	else if(!strcmp(a->whoami(), "CSelTabSub"))
	{
		level+=1.0/8.0;
		fprintf(f, "<text class=\"text-field\">");
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CSelTabSub*)a)->a, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
		if(((CSelTabSub*)a)->alias.size() > 0)
		{
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;as&nbsp;</text>");
			if(((CSelTabSub*)a)->b_quot)
				fprintf(f, "\"");
			fprintf(f, "<text class=\"text-field\">%s</text>", ((CSelTabSub*)a)->alias.c_str());
			if(((CSelTabSub*)a)->b_quot)
				fprintf(f, "\"");
		}
		fprintf(f, "</text>");
	}

	else if (!strcmp(a->whoami(), "CUnionSub"))
	{
		level+=5.0/8.0;
		fprintf(f, "<text class=\"text-field\">");
		print_ident(f, 4.0);
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CUnionSub*)a)->a, f, level, a);
		fprintf(f, "<br>");
		print_ident(f, max(8.0*level-1.0, 0.0));
		fprintf(f, "<text class=\"text-brackets\">)</text>");
		fprintf(f, "</text>");
	}

	else if(!strcmp(a->whoami(), "CExpTabSub"))
	{
		//если подзапрос стоит в правой части сравнения, нужна новая строка
		if(!strcmp(prev->whoami(), "CCmp") && ((CCmp*)prev)->r == a)
		{
			level++;
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
		}
		/*fprintf(f, "<br>");
		print_ident(f, 8.0*level);*/
		level+=1.0/8.0;
		fprintf(f, "<text class=\"text-field\">");
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CExpTabSub*)a)->a, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
		fprintf(f, "</text>");
	}

	else if(!strcmp(a->whoami(), "CCmp"))
	{
		Dumpast_html_recurs(((CCmp*)a)->l, f, level, a);
		fprintf(f, "<text class=\"text-keyword-operator\">");
		fprintf(f, "&nbsp;%s&nbsp;", ((CCmp*)a)->str.c_str());
		if(((CCmp*)a)->spec.size() > 0)
		{
			fprintf(f, "%s&nbsp;", ((CCmp*)a)->spec.c_str());
		}
		fprintf(f, "</text>");
		Dumpast_html_recurs(((CCmp*)a)->r, f, level, a);
	}

	else if(!strcmp(a->whoami(), "CValList"))
	{
		b_val_list_seq = true;
		for(int i = 0; i < ((CValList*)a)->l.size(); i++)
		{
			if( !strcmp(((CValList*)a)->l[i]->whoami(), "CExpTabSub") )
			{
				b_val_list_seq = false;
				break;
			}
		}

		if(!b_val_list_seq)
		{
			level+=2.0/8.0;
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
		}

		for(int i = 0; i < ((CValList*)a)->l.size(); i++)
		{
			Dumpast_html_recurs(((CValList*)a)->l[i], f, level, a);
			if(i + 1 < ((CValList*)a)->l.size())
			{
				if(b_val_list_seq)
					fprintf(f, "<text class=\"text-comma\">,&nbsp;</text>");
				else
				{
					fprintf(f, "<text class=\"text-comma\">,&nbsp;</text>");
					fprintf(f, "<br>");
					print_ident(f, 8.0*level);
				}
			}
		}
	}

	else if(!strcmp(a->whoami(), "CCall"))
	{
		if(strcmp(prev->whoami(), "CTabProc"))
			fprintf(f, "<text class=\"text-function\">");
		Dumpast_html_recurs(((CCall*)a)->pName, f, level);
		if(strcmp(prev->whoami(), "CTabProc"))
			fprintf(f, "</text>");
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CCall*)a)->vall, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CFcount"))
	{
		if(((CFcount*)a)->b_all)
		{
			fprintf(f, "<text class=\"text-function\">count</text>");
			fprintf(f, "<text class=\"text-brackets\">(</text>");
			fprintf(f, "<text class=\"text-keyword-control\">*</text>");
			fprintf(f, "<text class=\"text-brackets\">)</text>");
			fprintf(f, "</text>");
		}
		else
		{
			fprintf(f, "<text class=\"text-function\">count</text>");
			fprintf(f, "<text class=\"text-brackets\">(</text>");
			Dumpast_html_recurs(((CFcount*)a)->a, f, level, a);
			fprintf(f, "<text class=\"text-brackets\">)</text>");
		}
	}

	else if(!strcmp(a->whoami(), "CFsubstr"))
	{
		fprintf(f, "<text class=\"text-function\">substr</text>");
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		switch (((CFsubstr*)a)->type)
		{
		case 1:
			Dumpast_html_recurs(((CFsubstr*)a)->a1, f, level, a);
			break;
		case 2:
			Dumpast_html_recurs(((CFsubstr*)a)->a1, f, level, a);
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;from&nbsp;</text>");
			Dumpast_html_recurs(((CFsubstr*)a)->a2, f, level, a);
			break;
		case 3:
			Dumpast_html_recurs(((CFsubstr*)a)->a1, f, level, a);
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;from&nbsp;</text>");
			Dumpast_html_recurs(((CFsubstr*)a)->a2, f, level, a);
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;for&nbsp;</text>");
			Dumpast_html_recurs(((CFsubstr*)a)->a3, f, level, a);
			break;
		default:
			fprintf(f, "<text>Undefined type of Substr function</text>");
		}
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CFtrim"))
	{
		fprintf(f, "<text class=\"text-function\">trim</text>");
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		if(((CFtrim*)a)->trim_ltb.empty())
		{
			Dumpast_html_recurs(((CFtrim*)a)->vall, f, level, a);
		}
		else
		{
			printf("%s ", ((CFtrim*)a)->trim_ltb.c_str());
			Dumpast_html_recurs(((CFtrim*)a)->a, f, level, a);
			fprintf(f, "<text class=\"text-function\">&nbsp;keyword-control&nbsp;</text>");
			Dumpast_html_recurs(((CFtrim*)a)->vall, f, level, a);
		}
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CInterval"))
	{
		fprintf(f, "<text class=\"text-keyword-control\">interval&nbsp;");
		fprintf(f, "<text class=\"text-string\">%s&nbsp;</text>", ((CInterval*)a)->intrvl.c_str());
		fprintf(f, ((CInterval*)a)->time.c_str());
		fprintf(f, "</text>");
	}

	else if(!strcmp(a->whoami(), "CCase"))
	{
		//if(! (!strcmp(prev->whoami(), "CExprList")) )
		if(! (!strcmp(prev->whoami(), "CSelExpr") || !strcmp(prev->whoami(), "CCaseList")) )
		{
			level += 4.0/8.0;
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
		}
		fprintf(f, "<text class=\"text-keyword-control\">case&nbsp;</text>");
		if(((CCase*)a)->a != NULL)
		{
			Dumpast_html_recurs(((CCase*)a)->a, f, level, a);
		}

		Dumpast_html_recurs(((CCase*)a)->cl, f, level+2.0/8.0, a);

		if(((CCase*)a)->el != NULL)
		{
			fprintf(f, "<br>");
			print_ident(f, 8.0*(level+2.0/8.0));
			fprintf(f, "<text class=\"text-keyword-control\">else</text>");
			fprintf(f, "<br>");
			print_ident(f, 8.0*(level+4.0/8.0));
			Dumpast_html_recurs(((CCase*)a)->el, f, level+4.0/8.0, a);
		}
		fprintf(f, "<br>");
		print_ident(f, 8.0*level);
		fprintf(f, "<text class=\"text-keyword-control\">end</text>");
	}

	else if(!strcmp(a->whoami(), "CCaseList"))
	{
		for(int i = 1; i < ((CCaseList*)a)->l.size(); i+=2)
		{
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
			fprintf(f, "<text class=\"text-keyword-control\">when&nbsp;</text>");
			left_logic_indent = 0.0;
			if(!strcmp(((CCaseList*)a)->l[i-1]->whoami(), "CLogExp"))
			{
				left_logic_indent = (max(4.0-(double)((CLogExp*)((CCaseList*)a)->l[i-1])->str.size(), 0.0))/8.0;
			}
			level += left_logic_indent;
			Dumpast_html_recurs(((CCaseList*)a)->l[i-1], f, level, a);
			level -= left_logic_indent;
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;then</text>");
			fprintf(f, "<br>");
			print_ident(f, 8.0*(level+2.0/8.0));
			Dumpast_html_recurs(((CCaseList*)a)->l[i], f, level+2.0/8.0, a);
		}
	}

	else if(!strcmp(a->whoami(), "COutPlus"))
	{
		Dumpast_html_recurs(((COutPlus*)a)->a, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		fprintf(f, "<text class=\"text-keyword-control\">+</text>");
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if (!strcmp(a->whoami(), "CUnion"))
	{
		Dumpast_html_recurs(((CUnion*)a)->a1, f, level, a);
		if(!((CUnion*)a)->str.empty())
		{
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s</text>", ((CUnion*)a)->str.c_str());
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
		}
		Dumpast_html_recurs(((CUnion*)a)->a2, f, level, a);
	}

	else if (!strcmp(a->whoami(), "CTabProc"))
	{
		if(!((CTabProc*)a)->sym->kind.compare("tab_proc"))
		{
			fprintf(f, "<text class=\"");
			fprintf(f, ((CTabProc*)a)->sym->html_style.c_str());
			fprintf(f, "\">");
		}
		else
		{
			fprintf(f, "<text class=\"text-table\">");
		}

		if(((CTabProc*)a)->b_table_pref)
		{
			fprintf(f, "<text class=\"text-keyword-control\">table</text>");
			fprintf(f, "<text class=\"text-brackets\">(</text>");
		}
		Dumpast_html_recurs(((CTabProc*)a)->a, f, level, a);
		if(((CTabProc*)a)->b_table_pref)
		{
			fprintf(f, "<text class=\"text-brackets\">)</text>");
		}

		if(((CTabProc*)a)->alias.size()>0)
		{
			print_ident(f, 1.0);
			if(((CTabProc*)a)->b_quot)
				fprintf(f, "\"");
			fprintf(f, "%s", ((CTabProc*)a)->alias.c_str());
			if(((CTabProc*)a)->b_quot)
				fprintf(f, "\"");
		}
		fprintf(f, "</text>");

	}

	else if(!strcmp(a->whoami(), "CWith"))
	{
		Dumpast_html_recurs(((CWith*)a)->a, f, level, a);
	}

	else if(!strcmp(a->whoami(), "CWithList"))
	{
		for(int i = 0; i < ((CWithList*)a)->l.size(); i++)
		{
			if(i > 0)
			{
				fprintf(f, "<br>");
				print_ident(f, 8.0*level);
			}
			if(!((CWithList*)a)->l[i].sym->kind.compare("with_table"))
			{
				fprintf(f, "<text class=\"");
				fprintf(f, ((CWithList*)a)->l[i].sym->html_style.c_str());
				fprintf(f, "\">");
			}
			else
			{
				fprintf(f, "<text class=\"text-table\">");
			}
			Dumpast_html_recurs(((CWithList*)a)->l[i].pName, f, level);
			fprintf(f, "</text>");

			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;as</text>");
			fprintf(f, "<br>");
			print_ident(f, 8.0*(level+3.0/8.0));

			fprintf(f, "<text class=\"text-brackets\">(</text>");
			Dumpast_html_recurs(((CWithList*)a)->l[i].a, f, level+4.0/8.0, a);
			fprintf(f, "<text class=\"text-brackets\">)</text>");
			if(i + 1 < ((CWithList*)a)->l.size())
				fprintf(f, "<text class=\"text-comma\">,&nbsp;</text>");
		}
	}
	
	else if (!strcmp(a->whoami(), "CPrior"))
	{
		fprintf(f, "<text class=\"text-keyword-control\">prior&nbsp;</text>");
		Dumpast_html_recurs(((CPrior*)a)->a, f, level, a);
	}
	
	else if (!strcmp(a->whoami(), "CHierarchy"))
	{
		if(((CHierarchy*)a)->start != NULL)
		{
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;start&nbsp;with&nbsp;</text>");
			Dumpast_html_recurs(((CHierarchy*)a)->start, f, level, a);
		}
		if(((CHierarchy*)a)->connect != NULL)
		{
			fprintf(f, "<br>");
			print_ident(f, 8.0*level);
			fprintf(f, "<text class=\"text-keyword-control\">connect&nbsp;by&nbsp;</text>");
			Dumpast_html_recurs(((CHierarchy*)a)->connect, f, level, a);
		}
	}

	else if (!strcmp(a->whoami(), "CConnect"))
	{
		if(((CConnect*)a)->b_noncycle)
		{
			fprintf(f, "<text class=\"text-keyword-control\">noncycle&nbsp;</text>");
		}
		Dumpast_html_recurs(((CConnect*)a)->a, f, level + 1.0/8.0, a);
	}
	
	else if (!strcmp(a->whoami(), "CAnFunc"))
	{
		Dumpast_html_recurs(((CAnFunc*)a)->fn, f, level, a);
		Dumpast_html_recurs(((CAnFunc*)a)->an, f, level, a);
	}
	
	else if (!strcmp(a->whoami(), "CAnalytic"))
	{
		fprintf(f, "<text class=\"text-function\">&nbsp;over</text>");
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		if(((CAnalytic*)a)->part != NULL)
			Dumpast_html_recurs(((CAnalytic*)a)->part, f, level, a);
		if(((CAnalytic*)a)->ord != NULL)
		{
			if(((CAnalytic*)a)->part != NULL)
				fprintf(f, "&nbsp;");
			Dumpast_html_recurs(((CAnalytic*)a)->ord, f, level, a);
		}
		if(((CAnalytic*)a)->wind != NULL)
			Dumpast_html_recurs(((CAnalytic*)a)->wind, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}
	
	else if (!strcmp(a->whoami(), "CWindow"))
	{
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s</text>", ((CWindow*)a)->str.c_str());
		if(((CWindow*)a)->wnd2 == NULL)
			Dumpast_html_recurs(((CWindow*)a)->wnd1, f, level, a);
		else
		{
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;between&nbsp;</text>");
			Dumpast_html_recurs(((CWindow*)a)->wnd1, f, level, a);
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;and&nbsp;</text>");
			Dumpast_html_recurs(((CWindow*)a)->wnd2, f, level, a);
		}
	}
	
	else if (!strcmp(a->whoami(), "CWndBound"))
	{
		if(((CWndBound*)a)->a == NULL)
		{
			fprintf(f, "<text class=\"text-function\">%s&nbsp;%s</text>", ((CWndBound*)a)->str1.c_str(), ((CWndBound*)a)->str2.c_str());
		}
		else
		{
			Dumpast_html_recurs(((CWndBound*)a)->a, f, level, a);
			fprintf(f, "<text class=\"text-function\">&nbsp;%s</text>", ((CWndBound*)a)->str2.c_str());
		}
	}
	
	else if (!strcmp(a->whoami(), "CGroupList"))
	{
		for(int i = 0; i < ((CGroupList*)a)->l.size(); i++)
		{
			Dumpast_html_recurs(((CGroupList*)a)->l[i].a, f, level, a);
			if(!((CGroupList*)a)->l[i].str.empty())
				fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s</text>", ((CGroupList*)a)->l[i].str.c_str());
			if(i + 1 < ((CGroupList*)a)->l.size())
			{
				fprintf(f, "<text class=\"text-comma\">,&nbsp;</text>");
				fprintf(f, "<br>");
				print_ident(f, 8.0*level);
			}
		}
	}

	else if(!strcmp(a->whoami(), "CHavGroup"))
	{
		if(((CHavGroup*)a)->grp != NULL)
			Dumpast_html_recurs(((CHavGroup*)a)->grp, f, level, a);
		if(((CHavGroup*)a)->hav != NULL)
			Dumpast_html_recurs(((CHavGroup*)a)->hav, f, level, a);
	}

	else if (!strcmp(a->whoami(), "CGroup"))
	{
		fprintf(f, "<br>");
		print_ident(f, 8.0*level);
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;group&nbsp;by&nbsp;</text>");
		Dumpast_html_recurs(((CGroup*)a)->a, f, level + 10.0/8.0, a);
		if(((CGroup*)a)->b_rollup)
			fprintf(f, "<text class=\"text-keyword-control\">&nbsp;with&nbsp;rollup</text>");
	}

	else if (!strcmp(a->whoami(), "CHaving"))
	{
		fprintf(f, "<br>");
		print_ident(f, 8.0*level);
		fprintf(f, "<text class=\"text-keyword-control\">having&nbsp;</text>");
		Dumpast_html_recurs(((CHaving*)a)->a, f, level, a);
	}
	
	else if (!strcmp(a->whoami(), "COrder"))
	{
		fprintf(f, "<br>");
		print_ident(f, 8.0*level);
		fprintf(f, "<text class=\"text-keyword-control\">&nbsp;order&nbsp;by&nbsp;</text>");
		Dumpast_html_recurs(((COrder*)a)->a, f, level + 10.0/8.0, a);
	}
	
	else if (!strcmp(a->whoami(), "CAnOrderList"))
	{
		for(int i = 0; i < ((CAnOrderList*)a)->l.size(); i++)
		{
			Dumpast_html_recurs(((CAnOrderList*)a)->l[i].a, f, level, a);
			if(!((CAnOrderList*)a)->l[i].str.empty())
				fprintf(f, "<text class=\"text-keyword-control\">&nbsp;%s</text>", ((CAnOrderList*)a)->l[i].str.c_str());
			if(i + 1 < ((CAnOrderList*)a)->l.size())
				fprintf(f, "<text class=\"text-comma\">,&nbsp;</text>");
		}
	}
	
	else if (!strcmp(a->whoami(), "CAnOrder"))
	{
		fprintf(f, "<text class=\"text-keyword-control\">order&nbsp;by&nbsp;</text>");
		Dumpast_html_recurs(((CAnOrder*)a)->a, f, level, a);
	}
	
	else if (!strcmp(a->whoami(), "CPartition"))
	{
		fprintf(f, "<text class=\"text-keyword-control\">partition&nbsp;by&nbsp;</text>");
		Dumpast_html_recurs(((CPartition*)a)->a, f, level, a);
	}

	else if(!strcmp(a->whoami(), "CTabBrac"))
	{
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		print_ident(f, 6.0);
		Dumpast_html_recurs(((CTabBrac*)a)->a, f, level, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CExpBrac"))
	{
		fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CExpBrac*)a)->a, f, level-6.0/8.0, a);
		fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CNot"))
	{
		fprintf(f, "<text class=\"text-keyword-control\">%s&nbsp;</text>", ((CNot*)a)->str.c_str());
		if(strcmp(((CNot*)a)->a->whoami(), "CExpBrac"))
			fprintf(f, "<text class=\"text-brackets\">(</text>");
		Dumpast_html_recurs(((CNot*)a)->a, f, level+(double)(((CNot*)a)->str.size()+2)/8.0, a);
		if(strcmp(((CNot*)a)->a->whoami(), "CExpBrac"))
			fprintf(f, "<text class=\"text-brackets\">)</text>");
	}

	else if(!strcmp(a->whoami(), "CMinus"))
	{
		fprintf(f, "<text class=\"text-keyword-control\">%s</text>", ((CMinus*)a)->str.c_str());
		Dumpast_html_recurs(((CMinus*)a)->a, f, level, a);
	}

	else if(!strcmp(a->whoami(), "CString"))
	{
		fprintf(f, "<text class=\"text-string\">%s</text>", ((CString*)a)->str.c_str());
	}
	else if(!strcmp(a->whoami(), "CNumber"))
	{
		fprintf(f, "<text class=\"text-number\">%d</text>", ((CNumber*)a)->n);
	}
	else if(!strcmp(a->whoami(), "CFloat"))
	{
		fprintf(f, "<text class=\"text-number\">%g</text>", ((CFloat*)a)->d);
	}
	else if(!strcmp(a->whoami(), "CBool"))
	{
		fprintf(f, "<text>%b</text>", ((CBool*)a)->b);
	}
	else if(!strcmp(a->whoami(), "CNull"))
	{
		fprintf(f, "<text class=\"text-keyword-control\">null</text>");
	}
	else
	{
		fprintf(f, "<text>Not described %s prev=%s</text>", a->whoami(), prev->whoami());
	}
}