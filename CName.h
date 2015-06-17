#if !defined(CNAMEH)
#define CNAMEH

#include <string>
#include <vector>
void debug(char *s, ...);

using namespace std;

class quot_string: public string
{
public:
	string text;
	bool b_quot;
	quot_string():string(), text(), b_quot(false){}
	quot_string(const string& sLow, const string& sNorm, bool quot):string(sLow), text(sNorm), b_quot(quot){}
};

/********* CName *********/
class CName: public vector<quot_string>
{
public:
	CName():vector<quot_string>(){}
	CName(const string& str);
	CName(const string& str, bool b_quot);
};

CName* newCName(char * psz, bool b_quot);
CName* addtoCName(CName* pName, char * psz, bool b_quot);


//—труктура дл€ хранени€ при лексическом разборе
/********* qout_psz *********/
struct quot_psz
{
	char* psz;
	bool b_quot;
	quot_psz(): psz(NULL), b_quot(false){}
	quot_psz(const char* p_psz);
	quot_psz(const char* p_psz, bool p_b_quot);
	quot_psz(bool p_b_quot): psz(NULL), b_quot(p_b_quot){}
	~quot_psz();
};

quot_psz* newQuot_psz(const char* psz);
quot_psz* newQuot_psz(const char* psz, bool b_quot);
quot_psz* newQuot_psz(bool b_quot);

#endif