/* Companion source code for "flex & bison", published by O'Reilly
 * Media, ISBN 978-0-596-15597-1
 * Copyright (c) 2009, Taughannock Networks. All rights reserved.
 * See the README file for license conditions and contact info.
 * $Header: /home/johnl/flnb/code/sql/RCS/pmysql.l,v 2.1 2009/11/08 02:53:39 johnl Exp $
 */
/*
 * Scanner for mysql subset
 */

%option noyywrap nodefault yylineno case-insensitive
%option outfile="us\1csql\1csql.lex.cpp"
%{
#include "1csql.tab.h"
#include "1csql.h"
#include "CAst.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <vector>

void yyerror(char *s, ...);

std::vector<int> oldstate;

%}

%x COMMENT DOT_NAME
%s BTWMODE

%%

  /* keywords */

ADD	{ return ADD; }
ALL	{ return ALL; }
ALTER	{ return ALTER; }
ANALYZE	{ return ANALYZE; }

  /* Hack for BETWEEN ... AND ... 
   * return special AND token if BETWEEN seen
   */
<BTWMODE>AND	{ BEGIN oldstate[oldstate.size()-1]; oldstate.pop_back(); return AND; }
AND	{ yylval.strval = strdup(yytext); return ANDOP; }
ANY     { return ANY; }
AS	{ return AS; }
ASC	{ return ASC; }
AUTO_INCREMENT	{ return AUTO_INCREMENT; }
BEFORE	{ return BEFORE; }
BETWEEN	{ oldstate.push_back(YY_START); BEGIN BTWMODE; return BETWEEN; }
INT8|BIGINT	{ return BIGINT; }
BINARY	{ return BINARY; }
BIT	{ return BIT; }
BLOB	{ return BLOB; }
BOTH	{ return BOTH; }
BY	{ return BY; }
CALL	{ return CALL; }
CASCADE	{ return CASCADE; }
CASE	{ return CASE; }
CHANGE	{ return CHANGE; }
CHAR(ACTER)?	{ return CHAR; }
CHECK	{ return CHECK; }
COLLATE	{ return COLLATE; }
COLUMN	{ return COLUMN; }
COMMENT	{ return COMMENT; }
CONDITION	{ return CONDITION; }
CONNECT	{ return CONNECT; }
CONSTRAINT	{ return CONSTRAINT; }
CONTINUE	{ return CONTINUE; }
CONVERT	{ return CONVERT; }
CREATE	{ return CREATE; }
CROSS	{ return CROSS; }
CURRENT_DATE	{ return CURRENT_DATE; }
CURRENT_TIME	{ return CURRENT_TIME; }
CURRENT_TIMESTAMP	{ return CURRENT_TIMESTAMP; }
CURRENT_USER	{ return CURRENT_USER; }
CURRENT { return CURRENT; }
CURSOR	{ return CURSOR; }
DATABASE	{ return DATABASE; }
DATABASES	{ return DATABASES; }
DATE	{ return DATE; }
DATETIME	{ return DATETIME; }
DAY		{ return DAY; }
DAY_HOUR	{ return DAY_HOUR; }
DAY_MICROSECOND	{ return DAY_MICROSECOND; }
DAY_MINUTE	{ return DAY_MINUTE; }
DAY_SECOND	{ return DAY_SECOND; }
NUMERIC|DEC|DECIMAL	{ return DECIMAL; }
DECLARE	{ return DECLARE; }
DEFAULT	{ return DEFAULT; }
DELAYED	{ return DELAYED; }
DELETE	{ return DELETE; }
DESC	{ return DESC; }
DESCRIBE	{ return DESCRIBE; }
DETERMINISTIC	{ return DETERMINISTIC; }
DISTINCT	{ return DISTINCT; }
DISTINCTROW	{ return DISTINCTROW; }
DIV	{ return DIV; }
FLOAT8|DOUBLE	{ return DOUBLE; }
DROP	{ return DROP; }
EACH	{ return EACH; }
ELSE	{ return ELSE; }
ELSEIF	{ return ELSEIF; }
END	{ return END; }
ENUM { return ENUM; }
ESCAPED	{ return ESCAPED; }
EXISTS	{ yylval.subtok = 0; return EXISTS; }
NOT[ \t\n]+EXISTS	{ yylval.subtok = 1; return EXISTS; }
EXIT	{ return EXIT; }
EXPLAIN	{ return EXPLAIN; }
FETCH	{ return FETCH; }
FLOAT4?	{ return FLOAT; }
FOLLOWING { return FOLLOWING; }
FOR	{ return FOR; }
FORCE	{ return FORCE; }
FOREIGN	{ return FOREIGN; }
FROM	{ return FROM; }
FULLTEXT	{ return FULLTEXT; }
GRANT	{ return GRANT; }
GROUP	{ return GROUP; }
HAVING	{ return HAVING; }
HIGH_PRIORITY	{ return HIGH_PRIORITY; }
HOUR	{ return HOUR; }
HOUR_MICROSECOND	{ return HOUR_MICROSECOND; }
HOUR_MINUTE	{ return HOUR_MINUTE; }
HOUR_SECOND	{ return HOUR_SECOND; }
IF	{ return IF; }
IGNORE	{ return IGNORE; }
IN	{ return IN; }
INFILE	{ return INFILE; }
INNER	{ return INNER; }
INOUT	{ return INOUT; }
INSENSITIVE	{ return INSENSITIVE; }
INSERT	{ return INSERT; }
INT4?|INTEGER	{ return INTEGER; }
INTERVAL	{ return INTERVAL; }
INTO	{ return INTO; }
INTERSECT { yylval.strval = strdup(yytext); return UNION; }
IS	{ return IS; }
ITERATE	{ return ITERATE; }
JOIN	{ return JOIN; }
INDEX|KEY	{ return KEY; }
KEYS	{ return KEYS; }
KILL	{ return KILL; }
LEADING	{ return LEADING; }
LEAVE	{ return LEAVE; }
LEFT	{ return LEFT; }
LIKE	{ return LIKE; }
LIMIT	{ return LIMIT; }
LINES	{ return LINES; }
LOAD	{ return LOAD; }
LOCALTIME	{ return LOCALTIME; }
LOCALTIMESTAMP	{ return LOCALTIMESTAMP; }
LOCK	{ return LOCK; }
LONG	{ return LONG; }
LONGBLOB	{ return LONGBLOB; }
LONGTEXT	{ return LONGTEXT; }
LOOP	{ return LOOP; }
LOW_PRIORITY	{ return LOW_PRIORITY; }
MATCH	{ return MATCH; }
MEDIUMBLOB	{ return MEDIUMBLOB; }
MIDDLEINT|MEDIUMINT	{ return MEDIUMINT; }
MEDIUMTEXT	{ return MEDIUMTEXT; }
MINUS { yylval.strval = strdup(yytext); return UNION; }
MINUTE_MICROSECOND	{ return MINUTE_MICROSECOND; }
MINUTE	{ return MINUTE; }
MINUTE_SECOND	{ return MINUTE_SECOND; }
MOD	{ return MOD; }
MODIFIES	{ return MODIFIES; }
MONTH	{ return MONTH; }
NATURAL	{ return NATURAL; }
NONCYCLE	{ return NONCYCLE; }
NOT	{ return NOT; }
NO_WRITE_TO_BINLOG	{ return NO_WRITE_TO_BINLOG; }
NULL	{ return NULLX; }
NUMBER	{ return NUMBER; }
ON	{ return ON; }
ON[ \t\n]+DUPLICATE { return ONDUPLICATE; } /* hack due to limited lookahead */
OPTIMIZE	{ return OPTIMIZE; }
OPTION	{ return OPTION; }
OPTIONALLY	{ return OPTIONALLY; }
OR	{ yylval.strval = strdup(yytext); return OR; }
ORDER	{ return ORDER; }
OVER	{ return OVER; }
OUT	{ return OUT; }
OUTER	{ return OUTER; }
OUTFILE	{ return OUTFILE; }
PARTITION { return PARTITION; }
PRECEDING { return PRECEDING; }
PRECISION	{ return PRECISION; }
PRIMARY	{ return PRIMARY; }
PRIOR	{ return PRIOR; }
PROCEDURE	{ return PROCEDURE; }
PURGE	{ return PURGE; }
QUICK	{ return QUICK; }
RANGE	{ return RANGE; }
READ	{ return READ; }
READS	{ return READS; }
REAL	{ return REAL; }
REFERENCES	{ return REFERENCES; }
REGEXP|RLIKE	{ return REGEXP; }
RELEASE	{ return RELEASE; }
RENAME	{ return RENAME; }
REPEAT	{ return REPEAT; }
REPLACE	{ return REPLACE; }
REQUIRE	{ return REQUIRE; }
RESTRICT	{ return RESTRICT; }
RETURN	{ return RETURN; }
REVOKE	{ return REVOKE; }
RIGHT	{ return RIGHT; }
ROLLUP	{ return ROLLUP; }
ROWS	{ return ROWS; }
ROW		{ return ROW; }
SCHEMA	{ return SCHEMA; }
SCHEMAS	{ return SCHEMAS; }
SECOND  { return SECOND; }
SECOND_MICROSECOND	{ return SECOND_MICROSECOND; }
SELECT	{ return SELECT; }
SENSITIVE	{ return SENSITIVE; }
SEPARATOR	{ return SEPARATOR; }
SET	{ return SET; }
SHOW	{ return SHOW; }
INT2|SMALLINT	{ return SMALLINT; }
SOME	{ return SOME; }
SONAME	{ return SONAME; }
SPATIAL	{ return SPATIAL; }
SPECIFIC	{ return SPECIFIC; }
SQL	{ return SQL; }
SQLEXCEPTION	{ return SQLEXCEPTION; }
SQLSTATE	{ return SQLSTATE; }
SQLWARNING	{ return SQLWARNING; }
SQL_BIG_RESULT	{ return SQL_BIG_RESULT; }
SQL_CALC_FOUND_ROWS	{ return SQL_CALC_FOUND_ROWS; }
SQL_SMALL_RESULT	{ return SQL_SMALL_RESULT; }
SSL	{ return SSL; }
START	{ return START; }
STARTING	{ return STARTING; }
STRAIGHT_JOIN	{ return STRAIGHT_JOIN; }
TABLE	{ return TABLE; }
TEMPORARY	{ return TEMPORARY; }
TERMINATED	{ return TERMINATED; }
TEXT	{ return TEXT; }
THEN	{ return THEN; }
TIME	{ return TIME; }
TIMESTAMP	{ return TIMESTAMP; }
INT1|TINYINT	{ return TINYINT; }
TINYTEXT	{ return TINYTEXT; }
TO	{ return TO; }
TRAILING	{ return TRAILING; }
TRIGGER	{ return TRIGGER; }
UNDO	{ return UNDO; }
UNBOUNDED { return UNBOUNDED; }
UNION	{ yylval.strval = strdup(yytext); return UNION; }
UNION[ \t\n]+ALL	{ yylval.strval = strdup(yytext); return UNION; }
UNIQUE	{ return UNIQUE; }
UNLOCK	{ return UNLOCK; }
UNSIGNED	{ return UNSIGNED; }
UPDATE	{ return UPDATE; }
USAGE	{ return USAGE; }
USE	{ return USE; }
USING	{ return USING; }
UTC_DATE	{ return UTC_DATE; }
UTC_TIME	{ return UTC_TIME; }
UTC_TIMESTAMP	{ return UTC_TIMESTAMP; }
VALUES?	{ return VALUES; }
VARBINARY	{ return VARBINARY; }
VARCHAR(ACTER)?	{ return VARCHAR; }
VARYING	{ return VARYING; }
WHEN	{ return WHEN; }
WHERE	{ return WHERE; }
WHILE	{ return WHILE; }
WITH	{ return WITH; }
WRITE	{ return WRITE; }
XOR	{ yylval.strval = strdup(yytext); return XOR; }
YEAR	{ return YEAR; }
YEAR_MONTH	{ return YEAR_MONTH; }
ZEROFILL	{ return ZEROFILL; }

   /* numbers */

-?[0-9]+	        { yylval.intval = atoi(yytext); return INTNUM; } 

-?[0-9]+"."[0-9]* |
-?"."[0-9]+	|
-?[0-9]+E[-+]?[0-9]+	|
-?[0-9]+"."[0-9]*E[-+]?[0-9]+ |
-?"."[0-9]*E[-+]?[0-9]+	{ yylval.floatval = atof(yytext) ;
                                  return APPROXNUM; }
    /* booleans */
TRUE	{ yylval.boolval = true; return BOOL; }
UNKNOWN	{ yylval.boolval = false; return BOOL; }
FALSE	{ yylval.boolval = false; return BOOL; }

   /* strings */

'(\\.|''|[^'\n])*'		{ yylval.strval = strdup(yytext); return STRING; }
\"(\\.|\"\"|[^"\n])*\"  { yylval.qpsz = newQuot_psz(true); yylval.qpsz->psz = (char*)malloc(strlen(yytext)-1); memset(yylval.qpsz->psz, '\0', strlen(yytext)-1); strncpy(yylval.qpsz->psz, yytext+1, strlen(yytext)-2); return NAME; }

'(\\.|[^'\n])*$	        { yyerror("Unterminated string %s", yytext); }
\"(\\.|[^"\n])*$	{ yyerror("Unterminated string %s", yytext); }

   /* hex strings */
X'[0-9A-F]+' |  
0X[0-9A-F]+  { yylval.strval = strdup(yytext); return STRING; }

   /* bit strings */

0B[01]+      |
B'[01]+'     { yylval.strval = strdup(yytext); return STRING; }

   /* name followed by the dot */
"." { oldstate.push_back(YY_START); BEGIN DOT_NAME; return yytext[0]; }
<DOT_NAME>[A-Za-zР-пр-џ][A-Za-zР-пр-џ0-9_$]* { BEGIN oldstate[oldstate.size()-1]; oldstate.pop_back(); yylval.qpsz = newQuot_psz(yytext, false); return NAME; }
<DOT_NAME>\"(\\.|\"\"|[^"\n])*\" { BEGIN oldstate[oldstate.size()-1]; oldstate.pop_back(); yylval.qpsz = newQuot_psz(true); yylval.qpsz->psz = (char*)malloc(strlen(yytext)-1); memset(yylval.qpsz->psz, '\0', strlen(yytext)-1); strncpy(yylval.qpsz->psz, yytext+1, strlen(yytext)-2); return NAME; }
<DOT_NAME>"*" { BEGIN oldstate[oldstate.size()-1]; oldstate.pop_back(); yylval.qpsz = newQuot_psz(yytext, false); return NAME; }

   /* operators */
[-+&~|^/%*(),.;!]   { return yytext[0]; }

"&&"		{ return ANDOP; }
"||"            { return CONCAT; }

"="	{ yylval.strval = strdup(yytext); return COMPARISON; }
"<=>"	{ yylval.strval = strdup(yytext); return COMPARISON; }
">="	{ yylval.strval = strdup(yytext); return COMPARISON; }
">"	{ yylval.strval = strdup(yytext); return COMPARISON; }
"<="	{ yylval.strval = strdup(yytext); return COMPARISON; }
"<"	{ yylval.strval = strdup(yytext); return COMPARISON; }
"!="	|
"<>"	{ yylval.strval = strdup(yytext); return COMPARISON; }
"=>"	{ return PARASSIGN; }

"(+)"    { return OUTPLUS; }

"<<"	{ yylval.subtok = 1; return SHIFT; }
">>"	{ yylval.subtok = 2; return SHIFT; }

        /* functions */

SUBSTR(ING)?/"(" { return FSUBSTRING; }
TRIM/"(" { return FTRIM; }
DATE_ADD/"(" { return FDATE_ADD; }
DATE_SUB/"(" { return FDATE_SUB; }

	/* 
         * peek ahead and return function if name(
         */
COUNT    { int c = yyinput(); unput(c);
           if(c == '(') return FCOUNT;
           yylval.qpsz = newQuot_psz(yytext, false);
           return NAME; }

[A-Za-zР-пр-џ][A-Za-zР-пр-џ0-9_$]*	{ yylval.qpsz = newQuot_psz(yytext, false);
                          return NAME; }
`[^`/\\.\n]+`           { yylval.qpsz = newQuot_psz(yytext+1, false);
						  yylval.qpsz->psz[yyleng-2] = 0;
                          return NAME; }

`[^`\n]*$               { yyerror("unterminated quoted name %s", yytext); }

	/* user variables */
@[0-9a-z_.$]+ |
@\"[^"\n]+\" |
@`[^`\n]+` |
@'[^'\n]+' { yylval.strval = strdup(yytext+1); return USERVAR; }

@\"[^"\n]*$ { yyerror("unterminated quoted user variable %s", yytext); }
@`[^`\n]*$ { yyerror("unterminated quoted user variable %s", yytext); }
@'[^'\n]*$ { yyerror("unterminated quoted user variable %s", yytext); }


":="     { return ASSIGN; }

	/* comments */   
#.*		;
"--".*	;

"/*"   { oldstate.push_back(YY_START); BEGIN COMMENT; }
<COMMENT>"*/"   { BEGIN oldstate[oldstate.size()-1]; oldstate.pop_back(); }
<COMMENT>.|\n   ;
<COMMENT><<EOF>> { yyerror("unclosed comment"); }

	/* everything else */
[ \t\n]         /* white space */
<*>. { yyerror("mystery character '%c'", *yytext); }

%%

