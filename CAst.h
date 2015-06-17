#if !defined(CASTH)
#define CASTH

#include <string>
#include <vector>
#include <stdio.h>
#include "CEnv.h"
#include "CName.h"
#include <algorithm>

using namespace std;

//перевод строки в нижний регистр
void lower(std::string & str);
//master //test
/********* CAst *********/
class CAst
{
public:
	virtual char* whoami() const = 0;
	virtual ~CAst();
};

extern CAst* GAst;

/********* CAstNULL *********/
class CAstNULL: public CAst
{
public:
	virtual char* whoami() const;
	virtual ~CAstNULL();
};

/********* CSelect *********/
class CSelect: public CAst
{
public:
	CAst* wth;
	CAst* sl;
	CAst* tabrefs;
	CAst* whr;
	CAst* hier;
	CAst* hav_grp;
	CAst* ord;
	CEnv* env;
	virtual char* whoami() const;
	~CSelect();
};

/********* CTable *********/
class CTable: public CAst
{
public:
	CName* pName;
	string alias;
	CSymbol* sym;
	bool b_quot;
	virtual char* whoami() const;
	~CTable();
};

/********* CField *********/
class CField: public CAst
{
public:
	CName* pName;
	CSymbol* sym;
	virtual char* whoami() const;
	~CField();
};

/********* CSelExpr *********/
class CSelExpr: public CAst
{
public:
	CAst* a;
	string alias;
	bool b_quot;
	virtual char* whoami() const;
	~CSelExpr();
};

/********* CExprList *********/
class CExprList: public CAst
{
public:
	vector<CAst*> l;
	bool b_vert; //печатать вертикально
	virtual char* whoami() const;
	~CExprList();
};

/********* CWhere *********/
class CWhere: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CWhere();
};


/********* CExp *********/
class CExp: public CAst
{
public:
	CAst* l;
	CAst* r;
	string str;
	virtual char* whoami() const;
	~CExp();
};

/********* CLogExp *********/
class CLogExp: public CExp
{
public:
	virtual char* whoami() const;
	~CLogExp();
};

/********* CIsExp *********/
class CIsExp: public CAst
{
public:
	CAst* a;
	bool b_flag;
	string str_null;
	bool b;
	virtual char* whoami() const;
	~CIsExp();
};

/********* CInValExp *********/
class CInValExp: public CAst
{
public:
	CAst* l;
	CAst* r;
	bool b_flag;
	virtual char* whoami() const;
	~CInValExp();
};

/********* CInSelExp *********/
class CInSelExp: public CAst
{
public:
	CAst* l;
	CAst* r;
	bool b_flag;
	virtual char* whoami() const;
	~CInSelExp();
};

/********* CExistsExp *********/
class CExistsExp: public CAst
{
public:
	CAst* a;
	bool b_flag;
	virtual char* whoami() const;
	~CExistsExp();
};

/********* CBtwnExp *********/
class CBtwnExp: public CAst
{
public:
	CAst* a;
	CAst* l;
	CAst* r;
	virtual char* whoami() const;
	~CBtwnExp();
};

/********* CJoin *********/
class CJoin: public CAst
{
public:
	CAst* tab_refs;
	CAst* tabl;
	CAst* cond;
	string type; //INNER, OUTER, CROSS, NATURAL
	string dir;  //LEFT, RIGHT
	virtual char* whoami() const;
	~CJoin();
};

/********* CJoinCond *********/
class CJoinCond: public CAst
{
public:
	CAst* cond;
	string type; //on, using
	virtual char* whoami() const;
	~CJoinCond();
};

/********* CTabSub *********/
class CTabSub: public CAst
{
public:
	CAst* a;
	string alias;
	CSymbol* sym;
	bool b_quot;
	virtual char* whoami() const;
	~CTabSub();
};

/********* CSelTabSub *********/
class CSelTabSub: public CAst
{
public:
	CAst* a;
	string alias;
	bool b_quot;
	virtual char* whoami() const;
	~CSelTabSub();
};

/********* CUnionSub *********/
class CUnionSub: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CUnionSub();
};

/********* CExpTabSub *********/
class CExpTabSub: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CExpTabSub();
};

/********* CCmp *********/
class CCmp: public CExp
{
public:
	string spec;
	virtual char* whoami() const;
	~CCmp();
};

/********* CValList *********/
class CValList: public CAst
{
public:
	vector<CAst*> l;
	virtual char* whoami() const;
	~CValList();
};

/********* CCall *********/
class CCall: public CAst
{
public:
	CName* pName;
	CAst* vall;
	virtual char* whoami() const;
	~CCall();
};

/********* CFcount *********/
class CFcount: public CAst
{
public:
	bool b_all;
	CAst* a;
	virtual char* whoami() const;
	~CFcount();
};

/********* CFsubstr *********/
class CFsubstr: public CAst
{
public:
	int type;
	CAst* a1;
	CAst* a2;
	CAst* a3;
	virtual char* whoami() const;
	~CFsubstr();
};

/********* CFtrim*********/
class CFtrim: public CAst
{
public:
	CAst* vall;
	CAst* a;
	string trim_ltb;
	virtual char* whoami() const;
	~CFtrim();
};

/********* CInterval*********/
class CInterval: public CAst
{
public:
	string time;
	string intrvl;
	virtual char* whoami() const;
	~CInterval();
};

/********* CCase *********/
class CCase: public CAst
{
public:
	CAst* a;
	CAst* cl;
	CAst* el;
	virtual char* whoami() const;
	~CCase();
};

/********* CCaseList *********/
class CCaseList: public CAst
{
public:
	vector<CAst*> l;
	virtual char* whoami() const;
	~CCaseList();
};

/********* COutPlus *********/
class COutPlus: public CAst
{
public:
	string str;
	CAst* a;
	virtual char* whoami() const;
	~COutPlus();
};

/********* CUnion *********/
class CUnion: public CAst
{
public:
	string str;
	CAst* a1;
	CAst* a2;
	virtual char* whoami() const;
	~CUnion();
};

/********* CTabProc *********/
class CTabProc: public CAst
{
public:
	CAst* a;
	string alias;
	CSymbol* sym;
	bool b_quot;
	bool b_table_pref; //для выражений вида TABLE(func())
	virtual char* whoami() const;
	~CTabProc();
};

/********* CWith *********/
class CWith: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CWith();
};

/********* CWithList *********/
struct CWithToken
{
	CAst* a;
	CName* pName;
	CSymbol* sym;
};

class CWithList: public CAst
{
public:
	vector<CWithToken> l;
	virtual char* whoami() const;
	~CWithList();
};

/********* CPrior *********/
class CPrior: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CPrior();
};

/********* CHierarchy *********/
class CHierarchy: public CAst
{
public:
	CAst* start;
	CAst* connect;
	virtual char* whoami() const;
	~CHierarchy();
};

/********* CConnect *********/
class CConnect: public CAst
{
public:
	CAst* a;
	bool b_noncycle;
	virtual char* whoami() const;
	~CConnect();
};

/********* CAnFunc *********/
class CAnFunc: public CAst
{
public:
	CAst* fn;
	CAst* an;
	virtual char* whoami() const;
	~CAnFunc();
};

/********* CAnalytic *********/
class CAnalytic: public CAst
{
public:
	CAst* part;
	CAst* ord;
	CAst* wind;
	virtual char* whoami() const;
	~CAnalytic();
};

/********* CWindow *********/
class CWindow: public CAst
{
public:
	string str;
	CAst* wnd1;
	CAst* wnd2;
	virtual char* whoami() const;
	~CWindow();
};

/********* CWndBound *********/
class CWndBound: public CAst
{
public:
	string str1;
	string str2;
	CAst* a;
	virtual char* whoami() const;
	~CWndBound();
};

/********* CGroupList *********/
struct CGroupToken
{
	CAst* a;
	string str;
};

class CGroupList: public CAst
{
public:
	vector<CGroupToken> l;
	virtual char* whoami() const;
	~CGroupList();
};

/********* CGroup *********/
class CGroup: public CAst
{
public:
	CAst* a;
	bool b_rollup;
	virtual char* whoami() const;
	~CGroup();
};

/********* CHaving *********/
class CHaving: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CHaving();
};

/********* CHavGroup *********/
class CHavGroup: public CAst
{
public:
	CAst* grp;
	CAst* hav;
	virtual char* whoami() const;
	~CHavGroup();
};

/********* COrder *********/
class COrder: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~COrder();
};

/********* CAnOrderList *********/
class CAnOrderList: public CAst
{
public:
	vector<CGroupToken> l;
	virtual char* whoami() const;
	~CAnOrderList();
};

/********* CAnOrder *********/
class CAnOrder: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CAnOrder();
};

/********* CPartition *********/
class CPartition: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CPartition();
};


/********* CTabBrac *********/
class CTabBrac: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CTabBrac();
};

/********* CExpBrac *********/
class CExpBrac: public CAst
{
public:
	CAst* a;
	virtual char* whoami() const;
	~CExpBrac();
};

/********* CNot *********/
class CNot: public CAst
{
public:
	CAst* a;
	string str;
	virtual char* whoami() const;
	~CNot();
};

/********* CMinus *********/
class CMinus: public CAst
{
public:
	CAst* a;
	string str;
	virtual char* whoami() const;
	~CMinus();
};

/********* CString *********/
class CString: public CAst
{
public:
	string str;
	virtual char* whoami() const;
	~CString();
};

/********* CNumber *********/
class CNumber: public CAst
{
public:
	int n;
	virtual char* whoami() const;
	~CNumber();
};

/********* CFloat *********/
class CFloat: public CAst
{
public:
	double d;
	virtual char* whoami() const;
	~CFloat();
};

/********* CBool *********/
class CBool: public CAst
{
public:
	bool b;
	virtual char* whoami() const;
	~CBool();
};

/********* CNull *********/
class CNull: public CAst
{
public:
	virtual char* whoami() const;
	~CNull();
};

/********* newFunctions *********/

CAst* newCAstNULL();
CAst* newCSelect(CAst* wth, CAst* sl, CAst* tabrefs, CAst* whr, CAst* hier, CAst* hav_grp, CAst*);
CAst* newCTable(CName* pName, char* pszAlias, bool b_quot);
CAst* newCField(CName* pName);
CAst* newCSelExpr(CAst* a, char* pszAlias, bool b_quot);
CAst* newCExprList(CAst* a, bool b_vert);
CAst* addtoCExprList(CAst* exprl, CAst* a);
CAst* newCWhere(CAst* a);
CAst* newCExp(CAst* l, CAst* r, char* pszStr);
CAst* newCLogExp(CAst* l, CAst* r, char* pszStr);
CAst* newCIsExp(CAst* a, bool b_flag, char* psz_null, bool b);
CAst* newCInValExp(CAst* l, CAst* r, bool b_flag);
CAst* newCInSelExp(CAst* l, CAst* r, bool b_flag);
CAst* newCExistsExp(CAst* a, bool b_flag);
CAst* newCBtwnExp(CAst* a, CAst* l, CAst* r);
CAst* newCJoin(CAst* tab_refs, CAst* tabl, CAst* cond, char* type, char* dir);
CAst* newCJoinCond(CAst* a, char* type);
CAst* newCTabSub(CAst* a, char* pszAlias, bool b_quot);
CAst* newCSelTabSub(CAst* a, char* pszAlias, bool b_quot);
CAst* newCExpTabSub(CAst* a);
CAst* newCCmp(CAst* l, CAst* r, char* pszStr, char* spec);
CAst* newCValList();
CAst* newCValList(CAst* a);
CAst* addtoCValList(CAst* vall, CAst* a);
CAst* newCCall(CName* pName, CAst* vall);
CAst* newCFcount(CAst* a, bool b_all);
CAst* newCFsubstr(CAst* a1, CAst* a2, CAst* a3, int type);
CAst* newCFtrim(CAst* vall, CAst* a, char* trim_ltb);
CAst* newCInterval(char* intrvl, char* time);
CAst* newCCase(CAst* a, CAst* cl, CAst* el);
CAst* newCCaseList(CAst* a1, CAst* a2);
CAst* addtoCCaseList(CAst* a, CAst* a1, CAst* a2);
CAst* newCOutPlus(CAst* a, char* pszStr);
CAst* newCUnion(CAst* a1, CAst* a2, char* pszStr);
CAst* newCUnionSub(CAst* a);
CAst* newCTabProc(CAst* a, char* pszAlias, bool b_quot, bool b_table_pref);
CAst* newCWith(CAst* a);
CAst* newCWithList(CAst* a, CName* pName);
CAst* addtoCWithList(CAst* wl, CAst* a, CName* pName);
CAst* newCPrior(CAst* a);
CAst* newCHierarchy(CAst* start, CAst* connect);
CAst* newCConnect(CAst* a, bool b_noncycle);
CAst* newCAnFunc(CAst* fn, CAst* an);
CAst* newCAnalytic(CAst* part, CAst* ord, CAst* wind);
CAst* newCWindow(CAst* wnd1, CAst* wnd2, char* pszStr);
CAst* newCWndBound(CAst* a, char* pszStr1, char* pszStr2);
CAst* newCGroupList(CAst* a, char* pszStr);
CAst* addtoCGroupList(CAst* gl, CAst* a, char* pszStr);
CAst* newCGroup(CAst* a, bool b_rollup);
CAst* newCHaving(CAst* a);
CAst* newCHavGroup(CAst* hav, CAst* grp);
CAst* newCOrder(CAst* a);
CAst* newCAnOrderList(CAst* a, char* pszStr);
CAst* addtoCAnOrderList(CAst* gl, CAst* a, char* pszStr);
CAst* newCAnOrder(CAst* a);
CAst* newCPartition(CAst* a);
CAst* newCTabBrac(CAst* a);
CAst* newCExpBrac(CAst* a);
CAst* newCNot(CAst* a, char* pszStr);
CAst* newCMinus(CAst* a, char* pszStr);
CAst* newCString(char* psz);
CAst* newCNumber(int n);
CAst* newCFloat(double d);
CAst* newCBool(bool b);
CAst* newCNull();

#endif