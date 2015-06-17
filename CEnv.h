#if !defined(CENVH)
#define CENVH

#include <string>
#include <vector>
#include <stdio.h>
#include "CName.h"

using namespace std;

class CSymbol
{
public:
	string name;
	string alias;
	string kind;  //table, in_view, column, with_table
	CSymbol* tab_ref; //table ref for column
	vector<string> col_list; //for inline view and table
	string html_style;

	string static new_html_style();
	string getString();
	
	CSymbol(): name(), alias(), kind(), tab_ref(NULL), col_list() {}
	CSymbol(string p_name, string l_alias, string p_kind, CSymbol* p_tab_ref): name(p_name), alias(l_alias), kind(p_kind), tab_ref(p_tab_ref), col_list() {}
	bool is_table_contains_column(string column);
};

extern CSymbol symErr;

class CEnv
{
private:
	//запретить копирование
	CEnv(const CEnv& env);
	//подсчет числа экземпл€ров
	static int iCount_st;
	int iCount;
public:
	CEnv();
	CEnv(CEnv* p);
	~CEnv();
	CEnv* prev;
	vector<CSymbol*> table;

	void put(CSymbol* sym);

	CSymbol* create_symbol(CName name, string alias, string kind);
	CSymbol* find_table_for_column(string name, string tab);
	CSymbol* get_sym_column(string name, string kind, CSymbol* tab_ref);
	vector<string> get_all_tab_columns(string tab);
	CSymbol* get_with_table_ref(CName & name);
	string name() const;
	int cnt() const;
	void print(FILE* f);
};

#endif