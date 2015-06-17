#if !defined(DUMPH)
#define DUMPH

#include "CAst.h"
#include <stdio.h>

void Dumpast(CAst* a);
void Dumpast_html(CAst* a, FILE* f);
void Dumpast_html_recurs(CAst* a, FILE* f, double level, CAst* prev);
CEnv* MakeEnv(CAst* a, CEnv* env);
void Get_column_names(CSymbol* sym, CAst* a);

#endif