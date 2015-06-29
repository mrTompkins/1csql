#include "CAst.h"

//перевод строки в нижний регистр
void lower(string & str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}

/********* CName *********/
CName::CName(const string& str, bool b_quot)
{
	string sLower(str);
	lower(sLower);

	quot_string qstr(sLower, str, b_quot);
	
	this->push_back(qstr);
}

CName::CName(const string& str)
{
	string sLower(str);
	lower(sLower);

	quot_string qstr(sLower, str, false);
	
	this->push_back(qstr);
}

CName* newCName(char * psz, bool b_quot)
{
	debug("newCName");
	string str = string(psz);
	
	string sLower(str);
	lower(sLower);

	quot_string qstr(sLower, str, b_quot);

	CName* pName = new CName;
	pName->push_back(qstr);
	return pName;
}

CName* addtoCName(CName* pName, char * psz, bool b_quot)
{
	debug("addtoCName");
	string str = string(psz);
	
	string sLower(str);
	lower(sLower);

	quot_string qstr(sLower, str, b_quot);
	
	pName->push_back(qstr);
	return pName;
}

//Структура для хранения имен при лексическом разборе
/********* quot_psz *********/
quot_psz::quot_psz(const char* p_psz)
{
	b_quot = false;
	if(p_psz!=NULL)
		psz = strdup(p_psz);
	else
		psz = NULL;
}

quot_psz::quot_psz(const char* p_psz, bool p_b_quot)
{
	b_quot = p_b_quot;
	if(p_psz!=NULL)
		psz = strdup(p_psz);
	else
		psz = NULL;
}

quot_psz* newQuot_psz(const char* psz)
{
	return new quot_psz(psz);
}

quot_psz* newQuot_psz(const char* psz, bool b_quot)
{
	return new quot_psz(psz, b_quot);
}

quot_psz* newQuot_psz(bool b_quot)
{
	return new quot_psz(b_quot);
}

quot_psz::~quot_psz()
{
	debug("~quot_psz start");
	free(psz);
	psz = NULL;
	debug("~quot_psz end");
}

/********* CAst *********/
CAst::~CAst(){/*debug("~CAst");debug("~CAst end");*/}

/********* CAstNULL *********/
char* CAstNULL::whoami() const
{
	return "CAstNULL";
}

CAstNULL::~CAstNULL(){/*debug("~CAstNULL"); debug("~CAstNULL end");*/}

/********* CStmtList *********/
char* CStmtList::whoami() const
{
	return "CStmtList";
}

CStmtList::~CStmtList()
{
	debug("~CStmtList");
	for(int i = 0; i < l.size(); i++)
		delete l[i];
	delete env;
	debug("~CStmtList end");
}

/********* CSelect *********/

char* CSelect::whoami() const
{
	return "CSelect";
}

CSelect::~CSelect()
{
	debug("~CSelect");
	delete wth;
	delete opts;
	delete sl;
	delete into;
	delete tabrefs;
	delete whr;
	delete hier;
	delete hav_grp;
	delete upd;
	delete ord;
	delete idx;
	delete total;
	//delete env;
	debug("~CSelect end");
}

/********* CTable *********/
char* CTable::whoami() const
{
	return "CTable";
}

CTable::~CTable()
{
	debug("~CTable");
	delete pName;
	debug("~CTable end");
}

/********* CField *********/
char* CField::whoami() const
{
	return "CField";
}

CField::~CField()
{
	debug("~CField");
	delete pName;
	debug("~CField end");
}

/********* CSelectExpr *********/
char* CSelExpr::whoami() const
{
	return "CSelExpr";
}

CSelExpr::~CSelExpr()
{
	debug("~CSelExpr");
	delete a;
	debug("~CSelExpr end");
}

/********* CInto *********/
char* CInto::whoami() const
{
	return "CInto";
}

CInto::~CInto()
{
	debug("~CInto");
	delete pName;
	debug("~CInto end");
}

/********* CTableReferences *********/
char* CExprList::whoami() const
{
	return "CExprList";
}

CExprList::~CExprList()
{
	debug("~CExprList");
	for(int i = 0; i < l.size(); i++)
	{
		delete l[i];
	}
	debug("~CExprList end");
}

/********* CWhere *********/
char* CWhere::whoami() const
{
	return "CWhere";
}

CWhere::~CWhere()
{
	debug("~CWhere");
	delete a;
	debug("~CWhere end");
}

/********* CExp *********/
char* CExp::whoami() const
{
	return "CExp";
}

CExp::~CExp()
{
	debug("~CExp");
	delete r;
	delete l;
	debug("~CExp end");
}

/********* CLogExp *********/
char* CLogExp::whoami() const
{
	return "CLogExp";
}

CLogExp::~CLogExp()
{ debug("~CLogExp"); debug("~CLogExp end"); }


/********* CIsExp *********/
char* CIsExp::whoami() const
{
	return "CIsExp";
}

CIsExp::~CIsExp()
{
	debug("~CIsExp");
	delete a;
	debug("~CIsExp end");
}

/********* CInValExp *********/
char* CInValExp::whoami() const
{
	return "CInValExp";
}

CInValExp::~CInValExp()
{
	debug("~CInValExp");
	delete l;
	delete r;
	debug("~CInValExp end");
}

/********* CInSelExp *********/
char* CInSelExp::whoami() const
{
	return "CInSelExp";
}

CInSelExp::~CInSelExp()
{
	debug("~CInSelExp");
	delete l;
	delete r;
	debug("~CInSelExp end");
}

/********* CExistsExp *********/
char* CExistsExp::whoami() const
{
	return "CExistsExp";
}

CExistsExp::~CExistsExp()
{
	debug("~CExistsExp");
	delete a;
	debug("~CExistsExp end");
}

/********* CBtwnExp *********/
char* CBtwnExp::whoami() const
{
	return "CBtwnExp";
}

CBtwnExp::~CBtwnExp()
{
	debug("~CBtwnExp");
	delete a;
	delete l;
	delete r;
	debug("~CBtwnExp end");
}

/********* CJoin *********/
char* CJoin::whoami() const
{
	return "CJoin";
}

CJoin::~CJoin()
{
	debug("~CJoin");
	delete tabl;
	delete tab_refs;
	delete cond;
	debug("~CJoin end");
}

/********* CJoinCond *********/
char* CJoinCond::whoami() const
{
	return "CJoinCond";
}

CJoinCond::~CJoinCond()
{
	debug("~CJoinCond"); debug("~CJoinCond end");
}

/********* CTabSub *********/
char* CTabSub::whoami() const
{
	return "CTabSub";
}

CTabSub::~CTabSub()
{
	debug("~CTabSub");
	delete a;
	debug("~CTabSub end");
}

/********* CSelTabSub *********/
char* CSelTabSub::whoami() const
{
	return "CSelTabSub";
}

CSelTabSub::~CSelTabSub()
{
	debug("~CSelTabSub");
	delete a;
	debug("~CSelTabSub end");
}

/********* CUnionSub *********/
char* CUnionSub::whoami() const
{
	return "CUnionSub";
}

CUnionSub::~CUnionSub()
{
	debug("~CUnionSub");
	delete a;
	debug("~CUnionSub end");
}

/********* CExpTabSub *********/
char* CExpTabSub::whoami() const
{
	return "CExpTabSub";
}

CExpTabSub::~CExpTabSub()
{
	debug("~CExpTabSub");
	delete a;
	debug("~CExpTabSub end");
}

/********* CSubordTable *********/
char* CSubordTable::whoami() const
{
	return "CSubordTable";
}

CSubordTable::~CSubordTable()
{
	debug("~CSubordTable");
	delete pName;
	delete vall;
	debug("~CSubordTable end");
}

/********* CCmp *********/
char* CCmp::whoami() const
{
	return "CCmp";
}

CCmp::~CCmp()
{ debug("~CCmp"); debug("~CCmp end"); }

/********* CValList *********/
char* CValList::whoami() const
{
	return "CValList";
}

CValList::~CValList()
{
	debug("~CValList");
	for(int i = 0; i < l.size(); i++)
	{
		delete l[i];
	}
	debug("~CValList end");
}

/********* CCall *********/
char* CCall::whoami() const
{
	return "CCall";
}

CCall::~CCall()
{
	debug("~CCall");
	delete pName;
	delete vall;
	debug("~CCall end");
}

/********* CFcount *********/
char* CFcount::whoami() const
{
	return "CFcount";
}

CFcount::~CFcount()
{
	debug("~CFcount");
	delete a;
	delete opts;
	debug("~CFcount end");
}

/********* CFsubstr *********/
char* CFsubstr::whoami() const
{
	return "CFsubstr";
}

CFsubstr::~CFsubstr()
{
	debug("~CFsubstr");
	delete a1;
	delete a2;
	delete a3;
	debug("~CFsubstr end");
}

/********* CFexpress *********/
char* CFexpress::whoami() const
{
	return "CFexpress";
}

CFexpress::~CFexpress()
{
	debug("~CFexpress");
	delete a1;
	delete a2;
	debug("~CFexpress end");
}

/********* CFtrim*********/
char* CFtrim::whoami() const
{
	return "CFtrim";
}

CFtrim::~CFtrim()
{
	debug("~CFtrim");
	delete vall;
	delete a;
	debug("~CFtrim end");
}

/********* CInterval*********/
char* CInterval::whoami() const
{
	return "CInterval";
}

CInterval::~CInterval()
{
	debug("~CInterval");
	debug("~CInterval end");
}

/********* CCase *********/
char* CCase::whoami() const
{
	return "CCase";
}

CCase::~CCase()
{
	debug("~CCase");
	delete a;
	delete cl;
	delete el;
	debug("~CCase end");
}

/********* CCaseList *********/
char* CCaseList::whoami() const
{
	return "CCaseList";
}

CCaseList::~CCaseList()
{
	debug("~CCaseList");
	for(int i = 0; i < l.size(); i++)
	{
		delete l[i];
	}
	debug("~CCaseList end");
}

/********* COutPlus *********/
char* COutPlus::whoami() const
{
	return "COutPlus";
}

COutPlus::~COutPlus()
{
	debug("~COutPlus");
	debug("~COutPlus end");
}

/********* CUnion *********/
char* CUnion::whoami() const
{
	return "CUnion";
}

CUnion::~CUnion()
{
	debug("~CUnion");
	delete a1;
	delete a2;
	debug("~CUnion end");
}

/********* CTabProc *********/
char* CTabProc::whoami() const
{
	return "CTabProc";
}

CTabProc::~CTabProc()
{
	debug("~CTabProc");
	delete a;
	debug("~CTabProc end");
}

/********* CTabVar *********/
char* CTabVar::whoami() const
{
	return "CTabVar";
}

CTabVar::~CTabVar()
{
	debug("~CTabVar");
	delete a;
	debug("~CTabVar end");
}

/********* CWith *********/
char* CWith::whoami() const
{
	return "CWith";
}

CWith::~CWith()
{
	debug("~CWith");
	delete a;
	debug("~CWith end");
}

/********* CWithList *********/
//vector<CAst*> l;
char* CWithList::whoami() const
{
	return "CWithList";
}

CWithList::~CWithList()
{
	debug("~CWithList");
	for(int i = 0; i < l.size(); i++)
	{
		delete l[i].pName;
		delete l[i].a;
	}
	debug("~CWithList end");
}

/********* CPrior *********/
char* CPrior::whoami() const
{
	return "CPrior";
}

CPrior::~CPrior()
{
	debug("~CWith");
	delete a;
	debug("~CWith end");
}

/********* CStartWith *********/
char* CHierarchy::whoami() const
{
	return "CHierarchy";
}

CHierarchy::~CHierarchy()
{
	debug("~CHierarchy");
	delete start;
	delete connect;
	debug("~CHierarchy end");
}

/********* CConnect *********/
char* CConnect::whoami() const
{
	return "CConnect";
}

CConnect::~CConnect()
{
	debug("~CConnect");
	delete a;
	debug("~CConnect end");
}

/********* CAnFunc *********/
char* CAnFunc::whoami() const
{
	return "CAnFunc";
}

CAnFunc::~CAnFunc()
{
	debug("~CAnFunc");
	delete fn;
	delete an;
	debug("~CAnFunc end");
}

/********* CAnalytic *********/
char* CAnalytic::whoami() const
{
	return "CAnalytic";
}

CAnalytic::~CAnalytic()
{
	debug("~CAnalytic");
	delete part;
	delete ord;
	delete wind;
	debug("~CAnalytic end");
}

/********* CWindow *********/
char* CWindow::whoami() const
{
	return "CWindow";
}

CWindow::~CWindow()
{
	debug("~CWindow");
	delete wnd1;
	delete wnd2;
	debug("~CWindow end");
}

/********* CWndBound *********/
char* CWndBound::whoami() const
{
	return "CWndBound";
}

CWndBound::~CWndBound()
{
	debug("~CWndBound");
	delete a;
	debug("~CWndBound end");
}

/********* CGroupList *********/
char* CGroupList::whoami() const
{
	return "CGroupList";
}

CGroupList::~CGroupList()
{
	debug("~CGroupList");
	for(int i = 0; i < l.size(); i++)
	{
		delete l[i].a;
	}
	debug("~CGroupList end");
}

/********* CGroup *********/
char* CGroup::whoami() const
{
	return "CGroup";
}

CGroup::~CGroup()
{
	debug("~CGroup");
	delete a;
	debug("~CGroup end");
}

/********* CHaving *********/
char* CHaving::whoami() const
{
	return "CHaving";
}

CHaving::~CHaving()
{
	debug("~CHaving");
	delete a;
	debug("~CHaving end");
}

/********* CHavGroup *********/
char* CHavGroup::whoami() const
{
	return "CHavGroup";
}

CHavGroup::~CHavGroup()
{
	debug("~CHavGroup");
	delete grp;
	delete hav;
	debug("~CHavGroup end");
}

/********* CForUpdate *********/
char* CForUpdate::whoami() const
{
	return "CForUpdate";
}

CForUpdate::~CForUpdate()
{
	debug("~CForUpdate");
	delete a;
	debug("~CForUpdate end");
}

/********* COrder *********/
char* COrder::whoami() const
{
	return "COrder";
}

COrder::~COrder()
{
	debug("~COrder");
	delete a;
	debug("~COrder end");
}

/********* CIndexBy *********/
char* CIndexBy::whoami() const
{
	return "CIndexBy";
}

CIndexBy::~CIndexBy()
{
	debug("~CIndexBy");
	delete a;
	debug("~CIndexBy end");
}

/********* CTotal *********/
char* CTotal::whoami() const
{
	return "CTotal";
}

CTotal::~CTotal()
{
	debug("~CTotal");
	delete a1;
	delete a2;
	debug("~CTotal end");
}

/********* CAnOrderList *********/
char* CAnOrderList::whoami() const
{
	return "CAnOrderList";
}

CAnOrderList::~CAnOrderList()
{
	debug("~CAnOrderList");
	for(int i = 0; i < l.size(); i++)
	{
		delete l[i].a;
	}
	debug("~CAnOrderList end");
}

/********* CAnOrder *********/
char* CAnOrder::whoami() const
{
	return "CAnOrder";
}

CAnOrder::~CAnOrder()
{
	debug("~CAnOrder");
	delete a;
	debug("~CAnOrder end");
}

/********* CPartition *********/

char* CPartition::whoami() const
{
	return "CPartition";
}

CPartition::~CPartition()
{
	debug("~CPartition");
	delete a;
	debug("~CPartition end");
}

/********* CTabBrac *********/
char* CTabBrac::whoami() const
{
	return "CTabBrac";
}

CTabBrac::~CTabBrac()
{
	debug("~CTabBrac");
	delete a;
	debug("~CTabBrac end");
}

/********* CExpBrac *********/
char* CExpBrac::whoami() const
{
	return "CExpBrac";
}

CExpBrac::~CExpBrac()
{
	debug("~CExpBrac");
	delete a;
	debug("~CExpBrac end");
}

/********* CNot *********/
char* CNot::whoami() const
{
	return "CNot";
}

CNot::~CNot()
{
	debug("~CNot");
	delete a;
	debug("~CNot end");
}

/********* CMinus *********/
char* CMinus::whoami() const
{
	return "CMinus";
}

CMinus::~CMinus()
{
	debug("~CMinus");
	delete a;
	debug("~CMinus end");
}

/********* CUserVar *********/
char* CUserVar::whoami() const
{
	return "CUserVar";
}

CUserVar::~CUserVar()
{
	debug("~CUserVar");
	delete pName;
	debug("~CUserVar end");
}

/********* CSelOpts *********/
char* CSelOpt::whoami() const
{
	return "CSelOpt";
}

CSelOpt::~CSelOpt()
{
	debug("~CSelOpt");
	delete num;
	debug("~CSelOpt end");
}

/********* CSelOpts *********/
char* CSelOpts::whoami() const
{
	return "CSelOpts";
}

CSelOpts::~CSelOpts()
{
	debug("~CSelOpts");
	for(int i = 0; i < l.size(); i++)
		delete l[i];
	debug("~CSelOpts end");
}

/********* CString *********/
char* CString::whoami() const
{
	return "CString";
}

CString::~CString(){debug("~CString"); debug("~CString end");}

/********* CNumber *********/
char* CNumber::whoami() const
{
	return "CNumber";
}

CNumber::~CNumber(){debug("~CNumber"); debug("~CNumber end");}

/********* CFloat *********/
char* CFloat::whoami() const
{
	return "CFloat";
}

CFloat::~CFloat(){debug("~CFloat"); debug("~CFloat end");}

/********* CBool *********/
char* CBool::whoami() const
{
	return "CBool";
}

CBool::~CBool(){debug("~CBool"); debug("~CBool end");}

/********* CNull *********/
char* CNull::whoami() const
{
	return "CNull";
}

CNull::~CNull()
{debug("~CNull"); debug("~CNull end");}

/********* newFunctions *********/

/*** CAstNULL ***/
CAst* newCAstNULL()
{
	debug("newCAstNULL");
	return new CAstNULL;
}

/*** CStmtList ***/
CAst* newCStmtList(CAst* a)
{
	debug("newCStmtList");
	CStmtList* pStmtList = new CStmtList;
	pStmtList->l.push_back(a);
	pStmtList->env = NULL;
	return pStmtList;
}

CAst* addtoCStmtList(CAst* stmtl, CAst* a)
{
	debug("addtoCStmtList");
	CStmtList* pStmtList = (CStmtList*)stmtl;
	pStmtList->l.push_back(a);
	return pStmtList;
}

/*** CSelect ***/
CAst* newCSelect(CAst* wth, CAst* opts, CAst* sl, CAst* into, CAst* tabrefs, CAst* whr, CAst* hier, CAst* hav_grp, CAst* upd, CAst* ord, CAst* idx, CAst* total)
{
	debug("newCSelect");
	CSelect* pSelect = new CSelect;
	pSelect->wth = wth;
	pSelect->opts = opts;
	pSelect->sl = sl;
	pSelect->into = into;
	pSelect->tabrefs = tabrefs;
	pSelect->whr = whr;
	pSelect->hier = hier;
	pSelect->hav_grp = hav_grp;
	pSelect->ord = ord;
	pSelect->upd = upd;
	pSelect->idx = idx;
	pSelect->total = total;
	pSelect->env = NULL;
	return pSelect;
}

/*** CTable ***/
CAst* newCTable(CName* pName, char* pszAlias, bool b_quot)
{
	debug("newCTable");
	CTable* pTable;
	pTable = new CTable;
	pTable->pName = pName;
	pTable->b_quot = b_quot;
	string strAlias = string(pszAlias==NULL?"":pszAlias);
	string sLowAlias(strAlias);
	lower(sLowAlias);
	pTable->alias = quot_string(sLowAlias, strAlias, false);
	return pTable;
}

/*** CField ***/
CAst* newCField(CName* pName)
{
	debug("newCField");
	CField* pField = new CField;
	pField->pName = pName;
	return pField;
}

/*** CSelExpr ***/
CAst* newCSelExpr(CAst* a, char* pszAlias, bool b_quot)
{
	debug("newCSelExpr");
	CSelExpr* pSelExpr = new CSelExpr;
	pSelExpr->a = a;
	pSelExpr->b_quot = b_quot;
	string strAlias = string(pszAlias==NULL?"":pszAlias);
	string sLowAlias(strAlias);
	lower(sLowAlias);
	pSelExpr->alias = quot_string(sLowAlias, strAlias, false);
	return pSelExpr;
}

/*** newCInto ***/
CAst* newCInto(CName* pName)
{
	debug("newCInto");
	CInto* pInto = new CInto;
	pInto->pName = pName;
	return pInto;
}

/*** CExprList ***/
CAst* newCExprList(CAst* a, bool b_vert)
{
	debug("newCExprList");
	CExprList* pExprList = new CExprList;
	pExprList->b_vert = b_vert;
	pExprList->l.push_back(a);
	return pExprList;
}

CAst* addtoCExprList(CAst* exprl, CAst* a)
{
	debug("addtoCExprList");
	CExprList* pExprList = (CExprList*)exprl;
	pExprList->l.push_back(a);
	return pExprList;
}

/*** CWhere ***/
CAst* newCWhere(CAst* a)
{
	debug("newCWhere");
	CWhere* pWhere = new CWhere;
	pWhere->a = a;
	return pWhere;
}

/*** CExp ***/
CAst* newCExp(CAst* l, CAst* r, char* pszStr)
{
	debug("newCExp");
	CExp* pExp = new CExp;
	pExp->l = l;
	pExp->r = r;
	pExp->str = string(pszStr);
	return pExp;
}

/*** CLogExp ***/
CAst* newCLogExp(CAst* l, CAst* r, char* pszStr)
{
	debug("newCLogExp");
	CLogExp* pLogExp = new CLogExp;
	pLogExp->l = l;
	pLogExp->r = r;
	string str = string(pszStr);
	lower(str);
	pLogExp->str = str;
	return pLogExp;
}

/*** newCIsExp ***/
CAst* newCIsExp(CAst* a, bool b_flag, char* psz_null, bool b)
{
	debug("newCIsExp");
	CIsExp* pIsExp = new CIsExp;
	pIsExp->a = a;
	pIsExp->b_flag = b_flag;
	pIsExp->str_null = string(psz_null==NULL?"":psz_null);
	pIsExp->b = b;
	return pIsExp;
}

/*** newCInValExp ***/
CAst* newCInValExp(CAst* l, CAst* r, bool b_flag)
{
	debug("newCInValExp");
	CInValExp* pInValExp = new CInValExp;
	pInValExp->l = l;
	pInValExp->r = r;
	pInValExp->b_flag = b_flag;
	return pInValExp;
}

/*** newCInSelExp ***/
CAst* newCInSelExp(CAst* l, CAst* r, bool b_flag)
{
	debug("newCInSelExp");
	CInSelExp* pInSelExp = new CInSelExp;
	pInSelExp->l = l;
	pInSelExp->r = r;
	pInSelExp->b_flag = b_flag;
	return pInSelExp;
}

/*** newCExistsExp ***/
CAst* newCExistsExp(CAst* a, bool b_flag)
{
	debug("newCExistsExp");
	CExistsExp* pExistsExp = new CExistsExp;
	pExistsExp->a = a;
	pExistsExp->b_flag = b_flag;
	return pExistsExp;
}

/*** newCBtwnExp ***/
CAst* newCBtwnExp(CAst* a, CAst* l, CAst* r)
{
	debug("newCBtwnExp");
	CBtwnExp* pBtwnExp = new CBtwnExp;
	pBtwnExp->a = a;
	pBtwnExp->l = l;
	pBtwnExp->r = r;
	return pBtwnExp;
}

/*** newCJoin ***/
CAst* newCJoin(CAst* tab_refs, CAst* tabl, CAst* cond, char* type, char* dir)
{
	debug("newCJoin");
	CJoin* pJoin = new CJoin;
	pJoin->tab_refs = tab_refs;
	pJoin->tabl = tabl;
	pJoin->cond = cond;
	pJoin->type = string(type==NULL?"":type);
	pJoin->dir = string(dir==NULL?"":dir);
	return pJoin;
}

/*** newCJoinCond ***/
CAst* newCJoinCond(CAst* a, char* type)
{
	debug("newCJoinCond");
	CJoinCond* pJoinCond = new CJoinCond;
	pJoinCond->cond = a;
	pJoinCond->type = string(type==NULL?"":type);
	return pJoinCond;
}

/*** newCTabSub ***/
CAst* newCTabSub(CAst* a, char* pszAlias, bool b_quot)
{
	debug("newCTabSub");
	CTabSub* pTabSub = new CTabSub;
	pTabSub->a = a;
	pTabSub->b_quot = b_quot;
	string strAlias = string(pszAlias==NULL?"":pszAlias);
	string sLowAlias(strAlias);
	lower(sLowAlias);
	pTabSub->alias = quot_string(sLowAlias, strAlias, false);
	return pTabSub;
}

/*** newCSelTabSub ***/
CAst* newCSelTabSub(CAst* a, char* pszAlias, bool b_quot)
{
	debug("newCSelTabSub");
	CSelTabSub* pSelTabSub = new CSelTabSub;
	pSelTabSub->a = a;
	pSelTabSub->b_quot = b_quot;
	string strAlias = string(pszAlias==NULL?"":pszAlias);
	string sLowAlias(strAlias);
	lower(sLowAlias);
	pSelTabSub->alias = quot_string(sLowAlias, strAlias, false);
	return pSelTabSub;
}

/*** newCUnionSub ***/
CAst* newCUnionSub(CAst* a)
{
	debug("newCUnionSub");
	CUnionSub* pUnionSub = new CUnionSub;
	pUnionSub->a = a;
	return pUnionSub;
}

/*** newCExpTabSub ***/
CAst* newCExpTabSub(CAst* a)
{
	debug("newCExpTabSub");
	CExpTabSub* pExpTabSub = new CExpTabSub;
	pExpTabSub->a = a;
	return pExpTabSub;
}

/*** newCSubordTable ***/
CAst* newCSubordTable(CName* pName, CAst* vall)
{
	debug("newCSubordTable");
	CSubordTable* pSubordTable= new CSubordTable;
	pSubordTable->pName = pName;
	pSubordTable->vall = vall;
	return pSubordTable;
}

/*** newCCmp ***/
CAst* newCCmp(CAst* l, CAst* r, char* pszStr, char* spec)
{
	debug("CCmp");
	CCmp* pCmp = new CCmp;
	pCmp->l = l;
	pCmp->r = r;
	pCmp->str = string(pszStr);
	lower(pCmp->str);
	pCmp->spec = string(spec==NULL?"":spec);
	lower(pCmp->spec);
	return pCmp;
}

/*** newCValList ***/
CAst* newCValList()
{
	debug("newCValList");
	CValList* pValList = new CValList;
	return pValList;
}

CAst* newCValList(CAst* a)
{
	debug("newCValList");
	CValList* pValList = new CValList;
	pValList->l.push_back(a);
	return pValList;
}

CAst* addtoCValList(CAst* vall, CAst* a)
{
	debug("addtoCValList");
	CValList* pValList = (CValList*)vall;
	pValList->l.push_back(a);
	return pValList;
}

/*** newCCall ***/
CAst* newCCall(CName* pName, CAst* vall)
{
	debug("newCCall");
	CCall* pCall = new CCall;
	pCall->pName = pName;
	pCall->vall = vall;
	return pCall;
}

/*** newCFcount ***/
CAst* newCFcount(CAst* opts, CAst* a, bool b_all)
{
	debug("newCFcount");
	CFcount* pFcount = new CFcount;
	pFcount->b_all = b_all;
	pFcount->a = a;
	pFcount->opts = opts;
	return pFcount;
}

/*** newCFsubstr ***/
CAst* newCFsubstr(CAst* a1, CAst* a2, CAst* a3, int type)
{
	debug("newCFsubstr");
	CFsubstr* pFsubstr = new CFsubstr;
	pFsubstr->a1 = a1;
	pFsubstr->a2 = a2;
	pFsubstr->a3 = a3;
	pFsubstr->type = type;
	return pFsubstr;
}

/*** newCFtrim ***/
CAst* newCFtrim(CAst* vall, CAst* a, char* trim_ltb)
{
	debug("newCFtrim");
	CFtrim* pFtrim = new CFtrim;
	pFtrim->vall = vall;
	pFtrim->a = a;
	pFtrim->trim_ltb = string(trim_ltb==NULL?"":trim_ltb);
	return pFtrim;
}

/*** newCFexpress ***/
CAst* newCFexpress(CAst* a1, CAst* a2)
{
	debug("newCFexpress");
	CFexpress* pFexpress = new CFexpress;
	pFexpress->a1 = a1;
	pFexpress->a2 = a2;
	return pFexpress;
}

/*** newCInterval ***/
CAst* newCInterval(char* intrvl, char* time)
{
	debug("newCInterval");
	CInterval* pInterval = new CInterval;
	pInterval->intrvl = string(intrvl==NULL?"":intrvl);
	pInterval->time = string(time==NULL?"":time);
	return pInterval;
}

/*** newCCase ***/
CAst* newCCase(CAst* a, CAst* cl, CAst* el)
{
	debug("newCCase");
	CCase* pCase = new CCase;
	pCase->a = a;
	pCase->cl = cl;
	pCase->el = el;
	return pCase;
}

/*** newCCaseList ***/
CAst* newCCaseList(CAst* a1, CAst* a2)
{
	debug("newCCaseList");
	CCaseList* pCaseList = new CCaseList;
	pCaseList->l.push_back(a1);
	pCaseList->l.push_back(a2);
	return pCaseList;
}

CAst* addtoCCaseList(CAst* a, CAst* a1, CAst* a2)
{
	debug("addtoCCaseList");
	CCaseList* pCaseList = (CCaseList*)a;
	pCaseList->l.push_back(a1);
	pCaseList->l.push_back(a2);
	return pCaseList;
}

/*** newCOutPlus ***/
CAst* newCOutPlus(CAst* a, char* pszStr)
{
	debug("newCOutPlus");
	COutPlus* pOutPlus = new COutPlus;
	pOutPlus->a = a;
	pOutPlus->str = string(pszStr);
	return pOutPlus;
}

/*** newCUnion ***/
CAst* newCUnion(CAst* a1, CAst* a2, char* pszStr)
{
	debug("newCUnion");
	CUnion* pUnion = new CUnion;
	pUnion->a1 = a1;
	pUnion->a2 = a2;
	string str = string(pszStr==NULL?"":pszStr);;
	lower(str);
	pUnion->str = str;
	return pUnion;
}

/*** newCTabProc ***/
CAst* newCTabProc(CAst* a, char* pszAlias, bool b_quot, bool b_table_pref)
{
	debug("newCTabProc");
	CTabProc* pTabProc = new CTabProc;
	pTabProc->a = a;
	pTabProc->b_quot = b_quot;
	string strAlias = string(pszAlias==NULL?"":pszAlias);
	string sLowAlias(strAlias);
	lower(sLowAlias);
	pTabProc->alias = quot_string(sLowAlias, strAlias, false);
	pTabProc->b_table_pref = b_table_pref;
	return pTabProc;
}

/*** newCTabVar ***/
CAst* newCTabVar(CAst* a, char* pszAlias, bool b_quot)
{
	debug("newCTabVar");
	CTabVar* pTabVar = new CTabVar;
	pTabVar->a = a;
	pTabVar->b_quot = b_quot;
	string strAlias = string(pszAlias==NULL?"":pszAlias);
	string sLowAlias(strAlias);
	lower(sLowAlias);
	pTabVar->alias = quot_string(sLowAlias, strAlias, false);
	return pTabVar;
}

/*** newCWith ***/
CAst* newCWith(CAst* a)
{
	debug("newCWith");
	CWith* pWith = new CWith;
	pWith->a = a;
	return pWith;
}

/*** newCWithList ***/
CAst* newCWithList(CAst* a, CName* pName)
{
	debug("newCWithList");
	CWithToken wt;
	wt.a = a;
	wt.pName = pName;
	CWithList* pWithList = new CWithList;
	pWithList->l.push_back(wt);
	return pWithList;
}

CAst* addtoCWithList(CAst* wl, CAst* a, CName* pName)
{
	debug("newCWithList");
	CWithToken wt;
	wt.a = a;
	wt.pName = pName;
	CWithList* pWithList = (CWithList*)wl;
	pWithList->l.push_back(wt);
	return pWithList;
}

/*** newCPrior ***/
CAst* newCPrior(CAst* a)
{
	debug("newCPrior");
	CPrior* pPrior = new CPrior;
	pPrior->a = a;
	return pPrior;
}

/*** newCHierarchy ***/
CAst* newCHierarchy(CAst* start, CAst* connect)
{
	debug("newCStartWith");
	CHierarchy* pHierarchy= new CHierarchy;
	pHierarchy->start = start;
	pHierarchy->connect = connect;
	return pHierarchy;
}

/*** newCConnect ***/
CAst* newCConnect(CAst* a, bool b_noncycle)
{
	debug("CConnect");
	CConnect* pConnect = new CConnect;
	pConnect->a = a;
	pConnect->b_noncycle = b_noncycle;
	return pConnect;
}

/*** newCAnFunc ***/
CAst* newCAnFunc(CAst* fn, CAst* an)
{
	debug("newCAnFunc");
	CAnFunc* pAnFunc = new CAnFunc;
	pAnFunc->fn = fn;
	pAnFunc->an = an;
	return pAnFunc;
}

/*** newCAnalytic ***/
CAst* newCAnalytic(CAst* part, CAst* ord, CAst* wind)
{
	debug("newCAnalytic");
	CAnalytic* pAnalytic = new CAnalytic;
	pAnalytic->part = part;
	pAnalytic->ord = ord;
	pAnalytic->wind = wind;
	return pAnalytic;
}

/*** newCWindow ***/
CAst* newCWindow(CAst* wnd1, CAst* wnd2, char* pszStr)
{
	debug("newCWindow");
	CWindow* pWindow = new CWindow;
	string str = string(pszStr==NULL?"":pszStr);
	lower(str);
	pWindow->str = str;
	pWindow->wnd1 = wnd1;
	pWindow->wnd2 = wnd2;
	return pWindow;
}

/*** newCWndBound ***/
CAst* newCWndBound(CAst* a, char* pszStr1, char* pszStr2)
{
	debug("newCWndBound");
	CWndBound* pWndBound = new CWndBound;
	string str;
	pWndBound->a = a;
	str = string(pszStr1==NULL?"":pszStr1);
	lower(str);
	pWndBound->str1 = str;
	str = string(pszStr2==NULL?"":pszStr2);
	lower(str);
	pWndBound->str2 = str;
	return pWndBound;
}

/*** newCGroupList ***/
CAst* newCGroupList(CAst* a, char* pszStr)
{
	debug("newCGroupList");
	string str;
	CGroupToken gt;
	gt.a = a;
	str = string(pszStr==NULL?"":pszStr);
	gt.str = str;
	
	CGroupList* pGroupList = new CGroupList;
	pGroupList->l.push_back(gt);
	return pGroupList;
}

CAst* addtoCGroupList(CAst* gl, CAst* a, char* pszStr)
{
	debug("addtoCGroupList");
	string str;
	CGroupToken gt;
	gt.a = a;
	str = string(pszStr==NULL?"":pszStr);
	gt.str = str;
	
	CGroupList* pGroupList = (CGroupList*)gl;
	pGroupList->l.push_back(gt);
	return pGroupList;
}

/*** newCGroup ***/
CAst* newCGroup(CAst* a, bool b_rollup)
{
	debug("newCGroup");
	CGroup* pGroup = new CGroup;
	pGroup->a = a;
	pGroup->b_rollup = b_rollup;
	return pGroup;
}

/*** newCHaving ***/
CAst* newCHaving(CAst* a)
{
	debug("newCHaving");
	CHaving* pHaving = new CHaving;
	pHaving->a = a;
	return pHaving;
}

/*** newCHavGroup ***/
CAst* newCHavGroup(CAst* hav, CAst* grp)
{
	debug("CHavGroup");
	CHavGroup* pHavGroup = new CHavGroup;
	pHavGroup->grp = grp;
	pHavGroup->hav = hav;
	return pHavGroup;
}

/*** newCForUpdate ***/
CAst* newCForUpdate(CAst* a)
{
	debug("newCForUpdate");
	CForUpdate* pForUpdate = new CForUpdate;
	pForUpdate->a = a;
	return pForUpdate;
}

/*** newCOrder ***/
CAst* newCOrder(CAst* a)
{
	debug("newCOrder");
	COrder* pOrder = new COrder;
	pOrder->a = a;
	return pOrder;
}

/*** newCIndexBy ***/
CAst* newCIndexBy(CAst* a)
{
	debug("newCIndexBy");
	CIndexBy* pIndexBy = new CIndexBy;
	pIndexBy->a = a;
	return pIndexBy;
}

/*** newCTotal ***/
CAst* newCTotal(CAst* a1, CAst* a2)
{
	debug("newCTotal");
	CTotal* pTotal = new CTotal;
	pTotal->a1 = a1;
	pTotal->a2 = a2;
	return pTotal;
}

/*** newCAnOrderList ***/
CAst* newCAnOrderList(CAst* a, char* pszStr)
{
	debug("newCAnOrderList");
	string str;
	CGroupToken gt;
	gt.a = a;
	str = string(pszStr==NULL?"":pszStr);
	gt.str = str;
	
	CAnOrderList* pAnOrderList = new CAnOrderList;
	pAnOrderList->l.push_back(gt);
	return pAnOrderList;
}

CAst* addtoCAnOrderList(CAst* gl, CAst* a, char* pszStr)
{
	debug("addtoCAnOrderList");
	string str;
	CGroupToken gt;
	gt.a = a;
	str = string(pszStr==NULL?"":pszStr);
	gt.str = str;
	
	CAnOrderList* pAnOrderList = (CAnOrderList*)gl;
	pAnOrderList->l.push_back(gt);
	return pAnOrderList;
}

/*** newCAnOrder ***/
CAst* newCAnOrder(CAst* a)
{
	debug("newCAnOrder");
	CAnOrder* pAnOrder = new CAnOrder;
	pAnOrder->a = a;
	return pAnOrder;
}

/*** newCPartition ***/
CAst* newCPartition(CAst* a)
{
	debug("newCPartition");
	CPartition* pPartition = new CPartition;
	pPartition->a = a;
	return pPartition;
}

/*** newCTabBrac ***/
CAst* newCTabBrac(CAst* a)
{
	debug("newCTabBrac");
	CTabBrac* pTabBrac = new CTabBrac;
	pTabBrac->a = a;
	return pTabBrac;
}

/*** newCExpBrac ***/
CAst* newCExpBrac(CAst* a)
{
	debug("newCExpBrac");
	if(!strcmp(a->whoami(), "CLogExp"))
		return a;
	CExpBrac* pExpBrac = new CExpBrac;
	pExpBrac->a = a;
	return pExpBrac;
}

/*** newCNot ***/
CAst* newCNot(CAst* a, char* pszStr)
{
	debug("newCNot");
	CNot* pNot = new CNot;
	pNot->a = a;
	string str = string(pszStr==NULL?"":pszStr);
	lower(str);
	pNot->str = str;
	return pNot;
}

/*** newCMinus ***/
CAst* newCMinus(CAst* a, char* pszStr)
{
	debug("newCMinus");
	CMinus* pMinus = new CMinus;
	pMinus->a = a;
	string str = string(pszStr==NULL?"":pszStr);
	lower(str);
	pMinus->str = str;
	return pMinus;
}

/*** newCUserVar ***/
CAst* newCUserVar(CName* pName)
{
	debug("newCUserVar");
	CUserVar* pUserVar = new CUserVar;
	pUserVar->pName = pName;
	return pUserVar;
}

/*** newCSelOpt ***/
CAst* newCSelOpt(char* pszStr, CAst* num)
{
	debug("newCSelOpt");
	CSelOpt* pSelOpt = new CSelOpt;
	pSelOpt->str = string(pszStr==NULL?"":pszStr);
	pSelOpt->num = num;
	return pSelOpt;
}

/*** newCSelOpts ***/
CAst* newCSelOpts(CAst* a)
{
	debug("newCSelOpts");
	CSelOpts* pSelOpts = new CSelOpts;
	pSelOpts->l.push_back(a);
	return pSelOpts;
}

CAst* addtoCSelOpts(CAst* Opts, CAst* a)
{
	debug("addtoCSelOpts");
	CSelOpts* pSelOpts = (CSelOpts*)Opts;
	pSelOpts->l.push_back(a);
	return pSelOpts;
}

/*** CString ***/
CAst* newCString(char* psz)
{
	debug("newCString");
	CString* pString = new CString;
	pString->str = string(psz);
	return pString;
}

/*** CNumber ***/
CAst* newCNumber(int n)
{
	debug("newCNumber");
	CNumber* pNumber = new CNumber;
	pNumber->n = n;
	return pNumber;
}

/*** CFloat ***/
CAst* newCFloat(double d)
{
	debug("newCFloat");
	CFloat* pFloat = new CFloat;
	pFloat->d = d;
	return pFloat;
}

/*** CBool ***/
CAst* newCBool(bool b)
{
	debug("newCBool");
	CBool* pBool = new CBool;
	pBool->b = b;
	return pBool;
}

CAst* newCNull()
{
	return new CNull;
}