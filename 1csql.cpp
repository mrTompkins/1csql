// 1csql.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "1csql.tab.h"
#include "1csql.h"
#include "CAst.h"
#include "CEnv.h"
#include "Dump.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "COciConn.h"


CAst* GAst;

void env_test();

FILE* fdebug;

void
	emit(char *s, ...)
{
	extern int yylineno;

	va_list ap;
	va_start(ap, s);

	printf("rpn: ");
	vfprintf(stdout, s, ap);
	printf("\n");
}

void
	yyerror(char *s, ...)
{
	extern int yylineno;

	va_list ap;
	va_start(ap, s);

	fprintf(stderr, "%d: error: ", yylineno);
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");
	/*if(yylloc.first_line)
		fprintf(stderr, "%d.%d-%d.%d: error: ", yylloc.first_line, yylloc.first_column,
		yylloc.last_line, yylloc.last_column);
	vfprintf(stderr, s, ap);
	fprintf(stderr, "\n");*/
}

void debug(char *s, ...)
{
	/*extern int yylineno;

	va_list ap;
	va_start(ap, s);

	printf("dbg: ");
	vfprintf(stdout, s, ap);
	printf("\n");*/
}


int main(int ac, char **av)
{
	extern FILE *yyin;
	extern int yydebug;
	FILE* fhtml;

	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "American");

	if(ac > 1 && !strcmp(av[1], "-d")) {
		yydebug = 1; ac--; av++;
	}

	if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
		perror(av[1]);
		exit(1);
	}
	//yyin = fopen("C:\\Users\\AProsekov\\Documents\\Visual Studio 2010\\Projects\\1csql\\Debug\\query.sql" , "r");
	
	//����� ������ ��������� �� ������� � ����
	//freopen("debug.dbg", "w", stderr);

	//����������������� ��� ���������� � �����
	//ociconn::con.connect("APPS", "Un4oh9de#", "GRIMM");

	if(!yyparse())
		printf("SQL parse worked\n");
	else
		printf("SQL parse failed\n");

	Dumpast(GAst);
	printf("\n");

	MakeEnv(GAst, NULL);

	fhtml = fopen("result.html", "w");
	Dumpast_html(GAst, fhtml);
	fclose(fhtml);

	delete GAst;
	
	ociconn::con.disconnect();

	//env_test();

} /* main */


void env_test()
{
	CName cname;
	CSymbol* sym;
	CEnv env;
	string alias;
	string kind;

	//1. ������� ����� ������������, ���� ������� � ����� ��������� ��� ������ �����
	/*cname.clear();
	cname.push_back("ap_suppliers");
	alias = "s";
	kind = "table";
	env.create_symbol(cname, alias, kind);
	
	cname.clear();
	cname.push_back("s");
	cname.push_back("vendor_id");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//2. ������� ����� ������������, ���� ������� � ����� ������ � ��������� � ������� � ����� ������ ��� �������� ��� ������ �����
	/*cname.clear();
	cname.push_back("ap_suppliers");
	alias = "s";
	kind = "table";
	env.create_symbol(cname, alias, kind);

	cname.clear();
	cname.push_back("ap_suppliers");
	alias = "";
	kind = "table";
	env.create_symbol(cname, alias, kind);
	
	cname.clear();
	cname.push_back("ap_suppliers");
	cname.push_back("vendor_id");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//3. ������� ����� ������������, ���� ������� � ����� ������ � ������ ��������� ��� ������ �����
	/*cname.clear();
	cname.push_back("ap_suppliers");
	alias = "s";
	kind = "table";
	env.create_symbol(cname, alias, kind);
	
	cname.clear();
	cname.push_back("ap_suppliers");
	cname.push_back("vendor_id");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//4. ������� ����� ������������, ���� ������� � ����� ��������� �� ������� �����, ������� ������ � ������ �����
	/*cname.clear();
	cname.push_back("ap_suppliers");
	alias = "s";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_id");
	
	cname.clear();
	cname.push_back("s");
	cname.push_back("vendor_id");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//5. ������� ����� ������������, ���� ������� � ����� ��������� �� ������� �����, ������� �� ������ � ������ �����
	/*cname.clear();
	cname.push_back("ap_suppliers");
	alias = "s";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_id");
	
	cname.clear();
	cname.push_back("s");
	cname.push_back("vendor_name");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//6. ������� �� ����� �������������, ��� ������� ��� ������� �����
	/*cname.clear();
	cname.push_back("ap_suppliers");
	alias = "s";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);

	cname.clear();
	cname.push_back("xxrt");
	cname.push_back("xxpo320_mig_po_vendors_p0");
	alias = "";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);
	
	cname.clear();
	cname.push_back("vendor_name");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//7. ������� �� ����� �������������, ���� ������� �� ������� �����, ������� �� ������ � ������ �����
	/*cname.clear();
	cname.push_back("ap_suppliers");
	alias = "s";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_id");
	
	cname.clear();
	cname.push_back("vendor_name");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//8. ������� �� ����� �������������, ���� ������� �� ������� �����, ������� ������ � ������ �����
	/*cname.clear();
	cname.push_back("ap_suppliers");
	alias = "s";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_id");
	sym->col_list.push_back("vendor_name");
	
	cname.clear();
	cname.push_back("vendor_name");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//9. ������� �� ����� �������������, ���� ������� �� ������� �����, ��� ����� � ��������, ������� ������ � ������ �����
	/*cname.clear();
	cname.push_back("");
	alias = "";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_id");
	
	cname.clear();
	cname.push_back("vendor_id");
	alias = "";
	kind = "column";
	env.create_symbol(cname, alias, kind);
	env.print(stdout);*/

	//10. ������� ����� ������������,
	//    ���� ������� �� ������� ����� � ����� �� ��������� � ��������� ������� ��������, ������� �� ������ � ������ �����
	//    ���� ������� �� ������� ����� � ����� �� ��������� � ��������� ������� ��������, ������� ������ � ������ �����
	/*cname.clear();
	cname.push_back("xxrt");
	cname.push_back("xxpo320_mig_po_vendors_p0");
	alias = "v";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_id");
	env.print(stdout);
	
	CEnv env1(&env);
	cname.clear();
	cname.push_back("ap_suppliers");
	alias = "v";
	kind = "table";
	sym = env1.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_name");
	env1.print(stdout);
	
	CEnv env2(&env1);
	cname.clear();
	cname.push_back("v");
	cname.push_back("vendor_id");
	alias = "";
	kind = "column";
	env2.create_symbol(cname, alias, kind);
	env2.print(stdout);*/

	//11. ������� �� ����� �������������,
	//    ���� ������� �� ������� ����� � ��������� � ��������� ������� ��������, ������� �� ������ � ������ �����
	//    ���� ������� �� ������� ����� � ��������� � ��������� ������� ��������, ������� ������ � ������ �����
	/*cname.clear();
	cname.push_back("xxrt");
	cname.push_back("xxpo320_mig_po_vendors_p0");
	alias = "xpv";
	kind = "table";
	sym = env.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_id");
	env.print(stdout);
	
	CEnv env1(&env);
	cname.clear();
	cname.push_back("ap_suppliers");
	alias = "v";
	kind = "table";
	sym = env1.create_symbol(cname, alias, kind);
	sym->col_list.push_back("vendor_name");
	env1.print(stdout);
	
	CEnv env2(&env1);
	cname.clear();
	cname.push_back("");
	cname.push_back("vendor_id");
	alias = "";
	kind = "column";
	env2.create_symbol(cname, alias, kind);
	env2.print(stdout);*/
}