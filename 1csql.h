#if !defined(CSQLH)
#define CSQLH

#include <string>

int yylex();
int yyparse();
void yyerror(char *s, ...);

#endif