/* Companion source code for "flex & bison", published by O'Reilly
 * Media, ISBN 978-0-596-15597-1
 * Copyright (c) 2009, Taughannock Networks. All rights reserved.
 * See the README file for license conditions and contact info.
 * $Header: /home/johnl/flnb/code/sql/RCS/pmysql.y,v 2.1 2009/11/08 02:53:39 johnl Exp $
 */
/*
 * Parser for mysql subset
 */
%{
#include "1csql.tab.h"
#include "1csql.h"
#include "CAst.h"
#include "Dump.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

void yyerror(char *s, ...);
void emit(char *s, ...);
#define YYDEBUG 1
%}


%union {
	class CAst* a;
	int intval;
	double floatval;
	bool boolval;
	char *strval;
	int subtok;
	struct quot_psz* qpsz;
	class CName* cname;
}
	
	/* names and literal values */

%token <qpsz> NAME
%token <strval> STRING
%token <intval> INTNUM
%token <boolval> BOOL
%token <floatval> APPROXNUM
%token <strval> UNION

       /* user @abc names */

%token <strval> USERVAR

       /* operators and precedence levels */

%right ASSIGN
%left UNION
%right LEFT RIGHT INNER OUTER CROSS NATURAL STRAIGHT_JOIN JOIN
%left ON USING
%left <strval> OR
%left <strval> XOR
%left <strval> ANDOP
%nonassoc IN IS LIKE REGEXP
%left NOT '!'
%left BETWEEN
%left <strval> COMPARISON /* = <> < > <= >= <=> */
%left '|'
%left '&'
%left <subtok> SHIFT /* << >> */
%left CONCAT
%left '+' '-'
%left '*' '/' '%' MOD
%left '^'
%left PARASSIGN
%left OUTPLUS
%left PRIOR

%nonassoc UMINUS

%token ADD
%token ALL
%token ALTER
%token ANALYZE
%token AND
%token ANY
%token AS
%token ASC
%token AUTO_INCREMENT
%token BEFORE
%token BETWEEN
%token BIGINT
%token BINARY
%token BIT
%token BLOB
%token BOTH
%token BY
%token CALL
%token CASCADE
%token CASE
%token CHANGE
%token CHAR
%token CHECK
%token COLLATE
%token COLUMN
%token COMMENT
%token CONDITION
%token CONCAT
%token CONNECT
%token CONSTRAINT
%token CONTINUE
%token CONVERT
%token CREATE
%token CROSS
%token CURRENT_DATE
%token CURRENT_TIME
%token CURRENT_TIMESTAMP
%token CURRENT_USER
%token CURRENT
%token CURSOR
%token DAY
%token DATABASE
%token DATABASES
%token DATE
%token DATETIME
%token DAY_HOUR
%token DAY_MICROSECOND
%token DAY_MINUTE
%token DAY_SECOND
%token DECIMAL
%token DECLARE
%token DEFAULT
%token DELAYED
%token DELETE
%token DESC
%token DESCRIBE
%token DETERMINISTIC
%token DISTINCT
%token DISTINCTROW
%token DIV
%token DOUBLE
%token DROP
%token EACH
%token ELSE
%token ELSEIF
%token ENCLOSED
%token END
%token ENUM
%token ESCAPED
%token <subtok> EXISTS
%token EXIT
%token EXPLAIN
%token FETCH
%token FLOAT
%token FOLLOWING
%token FOR
%token FORCE
%token FOREIGN
%token FROM
%token FULLTEXT
%token GRANT
%token GROUP
%token HAVING
%token HIGH_PRIORITY
%token HOUR
%token HOUR_MICROSECOND
%token HOUR_MINUTE
%token HOUR_SECOND
%token IF
%token IGNORE
%token IN
%token INDEX
%token INFILE
%token INNER
%token INOUT
%token INSENSITIVE
%token INSERT
%token INT
%token INTEGER
%token INTERVAL
%token INTO
%token ITERATE
%token JOIN
%token KEY
%token KEYS
%token KILL
%token LEADING
%token LEAVE
%token LEFT
%token LIKE
%token LIMIT
%token LINES
%token LOAD
%token LOCALTIME
%token LOCALTIMESTAMP
%token LOCK
%token LONG
%token LONGBLOB
%token LONGTEXT
%token LOOP
%token LOW_PRIORITY
%token MATCH
%token MEDIUMBLOB
%token MEDIUMINT
%token MEDIUMTEXT
%token MINUTE
%token MINUTE_MICROSECOND
%token MINUTE_SECOND
%token MOD
%token MODIFIES
%token MONTH
%token NATURAL
%token NONCYCLE
%token NOT
%token NO_WRITE_TO_BINLOG
%token NULLX
%token NUMBER
%token ON
%token ONDUPLICATE
%token OPTIMIZE
%token OPTION
%token OPTIONALLY
%token OR
%token ORDER
%token OVER
%token OUT
%token OUTER
%token OUTFILE
%token PARASSIGN
%token PARTITION
%token PRECEDING
%token PRECISION
%token PRIMARY
%token PROCEDURE
%token PURGE
%token QUICK
%token RANGE
%token READ
%token READS
%token REAL
%token REFERENCES
%token REGEXP
%token RELEASE
%token RENAME
%token REPEAT
%token REPLACE
%token REQUIRE
%token RESTRICT
%token RETURN
%token REVOKE
%token RIGHT
%token ROLLUP
%token ROWS
%token ROW
%token SCHEMA
%token SCHEMAS
%token SECOND
%token SECOND_MICROSECOND
%token SELECT
%token SENSITIVE
%token SEPARATOR
%token SET
%token SHOW
%token SMALLINT
%token SOME
%token SONAME
%token SPATIAL
%token SPECIFIC
%token SQL
%token SQLEXCEPTION
%token SQLSTATE
%token SQLWARNING
%token SQL_BIG_RESULT
%token SQL_CALC_FOUND_ROWS
%token SQL_SMALL_RESULT
%token SSL
%token START
%token STARTING
%token STRAIGHT_JOIN
%token TABLE
%token TEMPORARY
%token TEXT
%token TERMINATED
%token THEN
%token TIME
%token TIMESTAMP
%token TINYBLOB
%token TINYINT
%token TINYTEXT
%token TO
%token TRAILING
%token TRIGGER
%token UNBOUNDED
%token UNDO
%token UNIQUE
%token UNLOCK
%token UNSIGNED
%token UPDATE
%token USAGE
%token USE
%token USING
%token UTC_DATE
%token UTC_TIME
%token UTC_TIMESTAMP
%token VALUES
%token VARBINARY
%token VARCHAR
%token VARYING
%token WHEN
%token WHERE
%token WHILE
%token WITH
%token WRITE
%token XOR
%token YEAR
%token YEAR_MONTH
%token ZEROFILL

 /* functions with special syntax */
%token FSUBSTRING
%token FTRIM
%token FDATE_ADD FDATE_SUB
%token FCOUNT

%type <a> select_expr_list
%type <a> val_list opt_val_list case_list
%type <a> groupby_list
%type <a> table_references
%type <a> column_list
%type <a> index_list opt_for_join
%type <boolval> opt_with_rollup

%type <a> stmt_list stmt select_stmt union_select_stmt opt_where groupby having opt_orderby opt_limit opt_into_list select_expr table_reference table_factor join_table join_condition index_hint table_subquery expr expr_or_subquery func f_count interval_exp opt_with with_list opt_hierarchy connect_by analytic_func analytic opt_partition opt_windowing windowing_bound an_orderby_list an_opt_orderby opt_hav_group
%type <a> table_subquery_alias table_reference_or_subquery table_references_or_subquery union_or_subquery
%type <qpsz> opt_as_alias
%type <cname> compose_name
%type <strval> opt_outer inner_cross left_or_right opt_left_or_right_outer
%type <strval> rows_range opt_asc_desc
%type <strval> trim_ltb

%start stmt_list

%%

stmt_list: stmt ';' { $$ = $1; GAst = $1; }
  | stmt_list stmt ';' { $$ = newCAstNULL(); }
  ;

   /* statements: select statement */

stmt: union_select_stmt { emit("STMT"); $$ = $1; }
   ;

union_select_stmt: select_stmt { $$ = $1; }
   | union_or_subquery UNION union_or_subquery { emit("UNION"); $$ = newCUnion($1, $3, $2); free($2); }
   ;
   
union_or_subquery : union_select_stmt { $$ = $1; }
   | table_subquery { emit("UNION SUBQUERY"); $$ = newCUnionSub($1); }
   ;

select_stmt: opt_with SELECT select_opts select_expr_list
                        { emit("SELECTNODATA"); $$ = newCAstNULL(); } ;
    | opt_with SELECT select_opts select_expr_list opt_into_list
     FROM table_references_or_subquery
     opt_where opt_hierarchy opt_hav_group opt_orderby opt_limit
     { emit("SELECT"); $$ = newCSelect($1, $4, $7, $8, $9, $10, $11); } ;
;

opt_hav_group: /* nil */ { $$ = newCHavGroup(NULL, NULL); }
   | groupby { $$ = newCHavGroup(NULL, $1); }
   | having { $$ = newCHavGroup($1, NULL); }
   | groupby having { $$ = newCHavGroup($2, $1); }
   | having groupby { $$ = newCHavGroup($1, $2); }
   ;

opt_hierarchy : /* nil */ { $$ = NULL; }
   | START WITH expr connect_by { emit("START WITH"); $$ = newCHierarchy($3, $4); }
   | connect_by START WITH expr { emit("START WITH"); $$ = newCHierarchy($4, $1); }
   | connect_by { $$ = newCHierarchy(NULL, $1); }
   ;
   
connect_by : CONNECT BY NONCYCLE expr { emit("CONNECT BY"); $$ = newCConnect($4, true); }
   | CONNECT BY expr { emit("CONNECT BY"); $$ = newCConnect($3, false); }
   ;

opt_where: /* nil */ { $$ = NULL; }
   | WHERE expr { emit("WHERE"); $$ = newCWhere($2); }
   ;

groupby: GROUP BY groupby_list opt_with_rollup
                             { emit("GROUPBYLIST"); $$ =  newCGroup($3, $4); }
;

groupby_list: expr opt_asc_desc
                             { emit("GROUPBY"); $$ = newCGroupList($1, $2); }
   | groupby_list ',' expr opt_asc_desc
                             { emit("GROUPBY"); $$ = addtoCGroupList($1, $3, $4); }
   ;

opt_asc_desc: /* nil */ { $$ = ""; }
   | ASC                { $$ = "asc"; }
   | DESC               { $$ = "desc"; }
    ;

opt_with_rollup: /* nil */  { $$ = false; }
   | WITH ROLLUP  { $$ = true; }
   ;

having: HAVING expr { emit("HAVING"); $$ = newCHaving($2); };

opt_orderby: /* nil */ { $$ = NULL; } | ORDER BY groupby_list { emit("ORDERBY"); $$ = newCOrder($3); }
   ;
   

an_orderby_list: expr opt_asc_desc
                             { emit("ANALYTIC ORDER LIST"); $$ = newCAnOrderList($1, $2); }
   | an_orderby_list ',' expr opt_asc_desc
                             { emit("ANALYTIC ORDER LIST"); $$ = addtoCAnOrderList($1, $3, $4); }
   ;

an_opt_orderby: /* nil */ { $$ = NULL; } | ORDER BY an_orderby_list { emit("ANALYTIC ORDERBY"); $$ = newCAnOrder($3); }
   ;

opt_limit: /* nil */ { $$ = NULL; } | LIMIT expr { emit("LIMIT 1"); $$ = newCAstNULL(); }
   | LIMIT expr ',' expr             { emit("LIMIT 2"); $$ = newCAstNULL(); }
   ;
  
compose_name: NAME { $$ = newCName($1->psz, $1->b_quot); delete $1; }
   | compose_name '.' NAME { $$ = addtoCName($1, $3->psz, $3->b_quot); delete $3; }
   ;

opt_into_list: /* nil */ { $$ = NULL; }
   | INTO column_list { emit("INTO"); $$ = newCAstNULL(); }
   ;

column_list: NAME { emit("COLUMN"); $$ = newCExprList(newCField(newCName($1->psz, $1->b_quot)), false); delete $1; }
   | column_list ',' NAME  { emit("COLUMN"); $$ = addtoCExprList($1, newCField(newCName($3->psz, $3->b_quot))); delete $3; }
   ;

select_opts:  /* nil */ 		  { }
| select_opts ALL                 { }
| select_opts DISTINCT            { }
| select_opts DISTINCTROW         { }
| select_opts HIGH_PRIORITY       { }
| select_opts STRAIGHT_JOIN       { }
| select_opts SQL_SMALL_RESULT    { }
| select_opts SQL_BIG_RESULT      { }
| select_opts SQL_CALC_FOUND_ROWS { }
    ;

select_expr_list: select_expr { $$ = newCExprList($1, true); }
    | select_expr_list ',' select_expr {$$ = addtoCExprList($1, $3); }
	;

select_expr: expr opt_as_alias { $$ = newCSelExpr($1, $2->psz, $2->b_quot); delete $2; }
	| table_subquery opt_as_alias { emit("COLUMN_SUBQUERY"); $$ = newCSelTabSub($1, $2->psz, $2->b_quot); delete $2; }
    | '*' { emit("SELECTALL"); $$ = newCSelExpr(newCField(newCName("*", false)), NULL, false); }
    | NULLX opt_as_alias { emit("NULLX"); $$ = newCSelExpr(newCNull(), $2->psz, $2->b_quot); delete $2; }
	;

	/* служит только при заключении в скобки */
table_references:    table_reference /* единственная таблица может быть в скобках */ { emit("TABREF"); $$ = newCExprList($1, true); }
	| table_references ',' table_reference_or_subquery /* подзапрос можно заключать в скобки, если он следует за простой таблицей */ { emit("ADD TABREF"); $$ = addtoCExprList($1, $3); }
	| table_subquery_alias ',' table_reference_or_subquery /* единственный подзапрос нельзя заключать в скобки из-за рекурсивного вложения */ { emit("ADD TABREF"); $$ = addtoCExprList($1, $3); }
    ;
  
  /* служит только для условия from из запроса */
table_references_or_subquery:    table_reference_or_subquery { emit("TABREFS OR SUBQUERY"); $$ = newCExprList($1, true); }
	| table_references_or_subquery ',' table_reference_or_subquery { emit("TABREFS OR SUBQUERY"); $$ = addtoCExprList($1, $3); }
    ;

table_reference:  table_factor
  | join_table
  ;

  /* необходимо для того, чтобы разделить '(' table_references ')' и вложенные table_subquery */
table_reference_or_subquery: table_reference
  | table_subquery_alias
  ;

table_factor:
    compose_name opt_as_alias index_hint { emit("TABLE"); $$ = newCTable($1, $2->psz, $2->b_quot); }
  | '(' table_references ')' { emit("TABLEREFERENCES"); $$ = newCTabBrac($2); }
  | TABLE '(' func ')' opt_as_alias { emit("TABPROC"); $$ = newCTabProc($3, $5->psz, $5->b_quot, true); }
  | func opt_as_alias { emit("TABFUNC"); $$ = newCTabProc($1, $2->psz, $2->b_quot, false); }
  ;
  
opt_as_alias: AS NAME { emit ("ALIAS"); $$ = $2; }
  | NAME              { emit ("ALIAS"); $$ = $1; }
  | /* nil */		  { $$ = newQuot_psz(false); }
  ;

join_table:
	table_reference_or_subquery JOIN table_reference_or_subquery join_condition
                  { emit("JOIN"); $$ = newCJoin($1, $3, $4, NULL, NULL); }
  | table_reference_or_subquery JOIN table_reference_or_subquery
                  { emit("JOIN"); $$ = newCJoin($1, $3, NULL, NULL, NULL); }
  | table_reference_or_subquery left_or_right opt_outer JOIN table_reference_or_subquery join_condition
                  { emit("JOIN"); $$ = newCJoin($1, $5, $6, $3, $2); }
  | table_reference_or_subquery left_or_right opt_outer JOIN table_reference_or_subquery
                  { emit("JOIN"); $$ = newCJoin($1, $5, NULL, $3, $2); }
  | table_reference_or_subquery inner_cross JOIN table_reference_or_subquery join_condition
                  { emit("JOIN"); $$ = newCJoin($1, $4, $5, $2, NULL); }
  | table_reference_or_subquery inner_cross JOIN table_reference_or_subquery
                  { emit("JOIN"); $$ = newCJoin($1, $4, NULL, $2, NULL); }
  | table_reference_or_subquery NATURAL opt_left_or_right_outer JOIN table_reference_or_subquery join_condition
                  { emit("JOIN"); $$ = newCJoin($1, $5, $6, "natural", $3); }
  | table_reference_or_subquery NATURAL opt_left_or_right_outer JOIN table_reference_or_subquery
                  { emit("JOIN"); $$ = newCJoin($1, $5, NULL, "natural", $3); }
  | table_reference_or_subquery STRAIGHT_JOIN table_reference_or_subquery join_condition
                  { emit("JOIN"); $$ = newCJoin($1, $3, $4, "straight", NULL); }
  | table_reference_or_subquery STRAIGHT_JOIN table_reference_or_subquery
                  { emit("JOIN"); $$ = newCJoin($1, $3, NULL, "straight", NULL); }
  ;

inner_cross: INNER { $$ = "inner"; }
  | CROSS  { $$ = "cross"; }
  ;

opt_outer: /* nil */  { $$ = NULL; }
   | OUTER {$$ = "outer"; }
   ;

left_or_right: LEFT { $$ = "left"; }
    | RIGHT { $$ = "right"; }
    ;

opt_left_or_right_outer: LEFT opt_outer { $$ = "left"; }
   | RIGHT opt_outer  { $$ = "right"; }
   | /* nil */ { $$ = NULL; }
   ;

join_condition:
    ON expr { emit("ONEXPR"); $$ = newCJoinCond($2, "on"); }
    | USING '(' column_list ')' { emit("USING"); $$ = newCJoinCond($3, "using"); }
    ;

index_hint:
     USE KEY opt_for_join '(' index_list ')'
                  { emit("INDEXHINT"); $$ = newCAstNULL(); }
   | IGNORE KEY opt_for_join '(' index_list ')'
                  { emit("INDEXHINT"); $$ = newCAstNULL(); }
   | FORCE KEY opt_for_join '(' index_list ')'
                  { emit("INDEXHINT"); $$ = newCAstNULL(); }
   | /* nil */ { $$ = NULL; }
   ;

opt_for_join: FOR JOIN { $$ = newCAstNULL(); }
   | /* nil */ { $$ = NULL; }
   ;

index_list: NAME  { emit("INDEX"); $$ = newCAstNULL(); delete $1; }
   | index_list ',' NAME { emit("INDEX"); $$ = $1; delete $3; }
   ;

table_subquery: '(' union_select_stmt ')' { emit("SUBQUERY"); $$ = $2; }
   | '(' table_subquery ')' { $$ = $2; }
   ;
  
table_subquery_alias: table_subquery opt_as_alias { emit("SUBQUERYAS %s", $2->psz); $$ = newCTabSub($1, $2->psz, $2->b_quot); delete $2; }
  ;
   
opt_with: /* nil */ { $$ = NULL; }
   | WITH with_list { emit("WITH"); $$ = newCWith($2); }
   ;
   
with_list: NAME AS table_subquery { $$ = newCWithList($3, newCName($1->psz, $1->b_quot)); delete $1; }
   | with_list ',' NAME AS table_subquery { $$ = addtoCWithList($1, $5, newCName($3->psz, $3->b_quot)); delete $3; }
   ;

   /**** expressions ****/

expr: USERVAR         { emit("USERVAR %s", $1); $$ = newCField(newCName($1, false)); free($1); }
   | compose_name  { emit("FIELDNAME"); $$ = newCField($1); }
   | STRING        { emit("STRING %s", $1); $$ = newCString($1); free($1); }
   | INTNUM        { emit("NUMBER %d", $1); $$ = newCNumber($1); }
   | APPROXNUM     { emit("FLOAT %g", $1); $$ = newCFloat($1); }
   | BOOL          { emit("BOOL %d", $1); $$ = newCBool($1); }
   ;

expr: expr_or_subquery '+' expr_or_subquery { emit("ADD"); $$ = newCExp($1, $3, "+"); }
   | expr_or_subquery '-' expr_or_subquery { emit("SUB"); $$ = newCExp($1, $3, "-"); }
   | expr_or_subquery '*' expr_or_subquery { emit("MUL"); $$ = newCExp($1, $3, "*"); }
   | expr_or_subquery '/' expr_or_subquery { emit("DIV"); $$ = newCExp($1, $3, "/"); }
   | expr_or_subquery '%' expr_or_subquery { emit("MOD"); $$ = newCExp($1, $3, "%"); }
   | expr_or_subquery MOD expr_or_subquery { emit("MOD"); $$ = newCExp($1, $3, "mod"); }
   | expr_or_subquery CONCAT expr_or_subquery { emit("CONCAT"); $$ = newCExp($1, $3, "||"); }
   | expr_or_subquery PARASSIGN expr_or_subquery { emit("PARASSIGN"); $$ = newCExp($1, $3, "=>"); }
   | '-' expr_or_subquery %prec UMINUS { emit("NEG"); $$ = newCMinus($2, "-"); }
   | expr_or_subquery ANDOP expr_or_subquery { emit("AND"); $$ = newCLogExp($1, $3, $2); }
   | expr_or_subquery OR expr_or_subquery { emit("OR"); $$ = newCLogExp($1, $3, $2); }
   | expr_or_subquery XOR expr_or_subquery { emit("XOR"); $$ = newCLogExp($1, $3, $2); }
   | expr_or_subquery COMPARISON expr_or_subquery { emit("CMP %s", $2); $$ = newCCmp($1, $3, $2, NULL); free($2); }
   | expr_or_subquery COMPARISON ANY expr_or_subquery %prec COMPARISON { emit("CMPANYSELECT %s", $2); $$ = newCCmp($1, $4, $2, "any"); free($2); }
   | expr_or_subquery COMPARISON SOME expr_or_subquery %prec COMPARISON { emit("CMPANYSELECT %s", $2); $$ = newCCmp($1, $4, $2, "some"); free($2); }
   | expr_or_subquery COMPARISON ALL expr_or_subquery %prec COMPARISON { emit("CMPALLSELECT %s", $2); $$ = newCCmp($1, $4, $2, "all"); free($2); }
   | expr_or_subquery '|' expr_or_subquery { emit("BITOR"); $$ = newCExp($1, $3, "|"); }
   | expr_or_subquery '&' expr_or_subquery { emit("BITAND"); $$ = newCExp($1, $3, "&"); }
   | expr_or_subquery '^' expr_or_subquery { emit("BITXOR"); $$ = newCExp($1, $3, "^"); }
   | expr_or_subquery SHIFT expr_or_subquery { emit("SHIFT %s", $2==1?"left":"right"); $$ = newCAstNULL(); }
   | NOT expr_or_subquery { emit("NOT"); $$ = newCNot($2, "not"); }
   | '!' expr_or_subquery { emit("NOT"); $$ = newCNot($2, "!"); }
   | expr_or_subquery OUTPLUS { emit("OUTPLUS"); $$ = newCOutPlus($1, "(+)"); }
   | PRIOR expr_or_subquery { emit("PRIOR"); $$ = newCPrior($2); }
   | USERVAR ASSIGN expr_or_subquery { emit("ASSIGN @%s", $1); $$ = newCAstNULL(); free($1); }
   | '(' expr ')' { $$ = newCExpBrac($2); }
   ;

   /* сделано чтобы исключить неоднозначность из-за рекурсивного вложения скобок */
expr_or_subquery: expr { $$ = $1; }
   | table_subquery { $$ = newCExpTabSub($1); }
   | NULLX { $$ = newCNull(); }
   ;

expr:  expr_or_subquery IS NULLX     { emit("ISNULL"); $$ = newCIsExp($1, true, "null", false); }
   |   expr_or_subquery IS NOT NULLX { emit("ISNULL"); emit("NOT"); $$ = newCIsExp($1, false, "null", false); }
   |   expr_or_subquery IS BOOL      { emit("ISBOOL %b", $3); $$ = newCIsExp($1, true, NULL, $3); }
   |   expr_or_subquery IS NOT BOOL  { emit("ISBOOL %b", $4); emit("NOT"); $$ = newCIsExp($1, false, NULL, $4); }
   ;

expr: expr_or_subquery BETWEEN expr_or_subquery AND expr_or_subquery %prec BETWEEN { emit("BETWEEN"); $$ = newCBtwnExp($1, $3, $5); }
   ;

val_list: expr { $$ = newCValList($1); }
   | NULLX { $$ = newCValList(newCNull()); }
   | val_list',' expr_or_subquery  { $$ = addtoCValList($1, $3); }
   | table_subquery',' expr_or_subquery { $$ = addtoCValList(newCValList(newCExpTabSub($1)), $3); }
   ;

opt_val_list: /* nil */ { $$ = newCValList(); }
   | val_list { $$ = $1; }
   ;

expr: expr_or_subquery IN '(' val_list ')'       { emit("ISIN"); $$ = newCInValExp($1, $4, true); }
   | expr_or_subquery NOT IN '(' val_list ')'    { emit("ISIN"); emit("NOT"); $$ = newCInValExp($1, $5, false); }
   | expr_or_subquery IN '(' union_select_stmt ')'     { emit("INSELECT"); $$ = newCInSelExp($1, $4, true); }
   | expr_or_subquery NOT IN table_subquery { emit("INSELECT"); emit("NOT"); $$ = newCInSelExp($1, $4, false); }
   | EXISTS table_subquery      { emit("EXISTS"); if($1)emit("NOT"); $$ = newCExistsExp($2, !$1); }
   ;
   
func: compose_name '(' opt_val_list ')' {  emit("CALL"); $$ = newCCall($1, $3); }
   ;

expr: func
   | analytic_func
   ;
   
  /* analitical functions */
analytic_func: func OVER '(' analytic ')' {  emit("CALL %s", $1); $$ = newCAnFunc($1, $4); }
   | f_count OVER '(' analytic ')' {  emit("CALL %s", $1); $$ = newCAnFunc($1, $4); }
   ;
   
analytic: opt_partition an_opt_orderby opt_windowing { $$ = newCAnalytic($1, $2, $3); }
   ;
   
opt_partition: /* nil */ { $$ = NULL; }
   | PARTITION BY val_list { emit("PARTITION"); $$ = newCPartition($3); }
   ;
   
opt_windowing: /* nil */ { emit("WINDOW"); $$ = NULL; }
   | rows_range windowing_bound { emit("WINDOW"); $$ = newCWindow($2, NULL, $1); }
   | rows_range BETWEEN windowing_bound AND windowing_bound %prec BETWEEN { emit("WINDOW"); $$ = newCWindow($3, $5, $1); }
   ;
   
rows_range: ROWS { $$ = "rows"; }
   | RANGE { $$ = "range"; }
   ;
   
windowing_bound: UNBOUNDED PRECEDING { $$ = newCWndBound(NULL, "unbounded", "preceding"); }
   | UNBOUNDED FOLLOWING { $$ = newCWndBound(NULL, "unbounded", "following"); }
   | CURRENT ROW		 { $$ = newCWndBound(NULL, "current", "row"); }
   | expr_or_subquery PRECEDING		 { $$ = newCWndBound($1, NULL, "preceding"); }
   | expr_or_subquery FOLLOWING		 { $$ = newCWndBound($1, NULL, "following"); }
   ;

  /* functions with special syntax */
f_count: FCOUNT '(' '*' ')' { emit("COUNTALL"); $$ = newCFcount(NULL, true); }
   | FCOUNT '(' expr_or_subquery ')' { emit(" CALL 1 COUNT"); $$ = newCFcount($3, false); } 
   ;
   
expr: f_count { $$ = $1; };

expr: FSUBSTRING '(' val_list ')' {  emit("CALL SUBSTR"); $$ = newCFsubstr($3, NULL, NULL, 1);}
   | FSUBSTRING '(' expr_or_subquery FROM expr_or_subquery ')' {  emit("CALL 2 SUBSTR"); $$ = newCFsubstr($3, $5, NULL, 2); }
   | FSUBSTRING '(' expr_or_subquery FROM expr_or_subquery FOR expr_or_subquery ')' {  emit("CALL 3 SUBSTR"); $$ = newCFsubstr($3, $5, $7, 3); }
| FTRIM '(' val_list ')' { emit("CALL TRIM"); $$ = newCFtrim($3, NULL, NULL); }
   | FTRIM '(' trim_ltb expr_or_subquery FROM val_list ')' { emit("CALL 3 TRIM"); $$ = newCFtrim($6, $4, $3); }
   ;

trim_ltb: LEADING { emit("INT 1"); $$ = "leading"; }
   | TRAILING { emit("INT 2"); $$ = "trailing"; }
   | BOTH { emit("INT 3"); $$ = "both"; }
   ;

expr: FDATE_ADD '(' expr_or_subquery ',' interval_exp ')' { emit("CALL 3 DATE_ADD"); $$ = newCAstNULL(); }
   |  FDATE_SUB '(' expr_or_subquery ',' interval_exp ')' { emit("CALL 3 DATE_SUB"); $$ = newCAstNULL(); }
   ;
   
expr: REPLACE '(' val_list ')' { emit("CALL REPLACE"); $$ = newCCall(newCName("replace", false), $3); }
   ;

interval_exp: INTERVAL expr_or_subquery DAY_HOUR { emit("NUMBER 1"); $$ = $2; }
   | INTERVAL expr_or_subquery DAY_MICROSECOND { emit("NUMBER 2"); $$ = $2; }
   | INTERVAL expr_or_subquery DAY_MINUTE { emit("NUMBER 3"); $$ = $2; }
   | INTERVAL expr_or_subquery DAY_SECOND { emit("NUMBER 4"); $$ = $2; }
   | INTERVAL expr_or_subquery YEAR_MONTH { emit("NUMBER 5"); $$ = $2; }
   | INTERVAL expr_or_subquery YEAR       { emit("NUMBER 6"); $$ = $2; }
   | INTERVAL expr_or_subquery HOUR_MICROSECOND { emit("NUMBER 7"); $$ = $2; }
   | INTERVAL expr_or_subquery HOUR_MINUTE { emit("NUMBER 8"); $$ = $2; }
   | INTERVAL expr_or_subquery HOUR_SECOND { emit("NUMBER 9"); $$ = $2; }
   ;
   
expr: INTERVAL STRING SECOND { emit("INTERVAL 1"); $$ = newCInterval($2, "second"); }
   | INTERVAL STRING MINUTE  { emit("INTERVAL 2"); $$ = newCInterval($2, "minute"); }
   | INTERVAL STRING HOUR    { emit("INTERVAL 3"); $$ = newCInterval($2, "hour"); }
   | INTERVAL STRING DAY     { emit("INTERVAL 4"); $$ = newCInterval($2, "day"); }
   | INTERVAL STRING MONTH   { emit("INTERVAL 4"); $$ = newCInterval($2, "month"); }
   | INTERVAL STRING YEAR    { emit("INTERVAL 5"); $$ = newCInterval($2, "year"); }
   ;

expr: CASE expr_or_subquery case_list END           { emit("CASEVAL 0"); $$ = newCCase($2, $3, NULL); }
   |  CASE expr_or_subquery case_list ELSE expr_or_subquery END { emit("CASEVAL 1"); $$ = newCCase($2, $3, $5); }
   |  CASE case_list END                { emit("CASE 0"); $$ = newCCase(NULL, $2, NULL); }
   |  CASE case_list ELSE expr_or_subquery END      { emit("CASE 1"); $$ = newCCase(NULL, $2, $4); }
   ;

case_list: WHEN expr_or_subquery THEN expr_or_subquery     { $$ = newCCaseList($2, $4); }
         | case_list WHEN expr_or_subquery THEN expr_or_subquery { $$ = addtoCCaseList($1, $3, $5); } 
   ;

expr: expr_or_subquery LIKE expr_or_subquery { emit("LIKE"); $$ = newCCmp($1, $3, "like", NULL); }
   | expr_or_subquery NOT LIKE expr_or_subquery { emit("LIKE"); emit("NOT"); $$ = newCCmp($1, $4, "not like", NULL); }
   ;

expr: expr_or_subquery REGEXP expr_or_subquery { emit("REGEXP"); $$ = newCCmp($1, $3, "regexp", NULL); }
   | expr_or_subquery NOT REGEXP expr_or_subquery { emit("REGEXP"); emit("NOT"); $$ = newCCmp($1, $4, "not regexp", NULL); }
   ;

expr: CURRENT_TIMESTAMP { emit("NOW"); $$ = newCAstNULL(); };
   | CURRENT_DATE	{ emit("NOW"); $$ = newCAstNULL(); };
   | CURRENT_TIME	{ emit("NOW"); $$ = newCAstNULL(); };
   ;

expr: BINARY expr_or_subquery %prec UMINUS { emit("STRTOBIN"); $$ = newCAstNULL(); }
   ;

%%

/*void
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
}

int main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
}*/  

//main
