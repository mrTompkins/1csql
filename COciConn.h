#ifndef COCICONNH
# define COCICONNH


#include <vector>
#include <string>

namespace ociconn
{

#ifndef OCI_ORACLE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <oci.h>
#endif

class COciConn
{
  HMODULE hLib;

sword   (*pOCIServerDetach)  (OCIServer *srvhp, OCIError *errhp, ub4 mode);

sword   (*pOCISessionEnd)   (OCISvcCtx *svchp, OCIError *errhp, OCISession *usrhp, 
                         ub4 mode);

sword   (*pOCIHandleFree)(void  *hndlp, const ub4 type);

sword   (*pOCISessionBegin)  (OCISvcCtx *svchp, OCIError *errhp, OCISession *usrhp,
                          ub4 credt, ub4 mode);

sword   (*pOCIAttrSet) (void  *trgthndlp, ub4 trghndltyp, void  *attributep,
                    ub4 size, ub4 attrtype, OCIError *errhp);

sword   (*pOCIServerAttach)  (OCIServer *srvhp, OCIError *errhp,
                          const OraText *dblink, sb4 dblink_len, ub4 mode);

sword   (*pOCIEnvInit) (OCIEnv **envp, ub4 mode, 
                    size_t xtramem_sz, void  **usrmempp);

sword   (*pOCIHandleAlloc)(const void  *parenth, void  **hndlpp, const ub4 type, 
                       const size_t xtramem_sz, void  **usrmempp);

sword   (*pOCIInitialize)   (ub4 mode, void  *ctxp, 
                 void  *(*malocfp)(void  *ctxp, size_t size),
                 void  *(*ralocfp)(void  *ctxp, void  *memptr, size_t newsize),
                 void   (*mfreefp)(void  *ctxp, void  *memptr) );

sword   (*pOCIErrorGet)   (void  *hndlp, ub4 recordno, OraText *sqlstate,
                       sb4 *errcodep, OraText *bufp, ub4 bufsiz, ub4 type);

sword   (*pOCIStmtFetch)   (OCIStmt *stmtp, OCIError *errhp, ub4 nrows, 
                        ub2 orientation, ub4 mode);

sword   (*pOCIStmtFetch2)   (OCIStmt *stmtp, OCIError *errhp, ub4 nrows, 
                        ub2 orientation, sb4 scrollOffset, ub4 mode);

oratext* (*pOCIStringPtr)(    OCIEnv *env, const OCIString *vs    );

sword   (*pOCIStmtExecute)  (OCISvcCtx *svchp, OCIStmt *stmtp, OCIError *errhp, 
                         ub4 iters, ub4 rowoff, const OCISnapshot *snap_in, 
                         OCISnapshot *snap_out, ub4 mode);

sword   (*pOCIDefineObject)  (OCIDefine *defnp, OCIError *errhp, 
                          const OCIType *type, void  **pgvpp, 
                          ub4 *pvszsp, void  **indpp, ub4 *indszp);

sword (*pOCIObjectPin)(    OCIEnv *env, OCIError *err, OCIRef *object_ref, 
                       OCIComplexObject *corhdl, OCIPinOpt pin_option, 
                       OCIDuration pin_duration, 
                       OCILockOpt lock_option, void  **object    );

sword   (*pOCIAttrGet) (const void  *trgthndlp, ub4 trghndltyp, 
                    void  *attributep, ub4 *sizep, ub4 attrtype, 
                    OCIError *errhp);

sword   (*pOCIParamGet) (const void  *hndlp, ub4 htype, OCIError *errhp, 
                     void  **parmdpp, ub4 pos);

sword   (*pOCIDescribeAny)  (OCISvcCtx *svchp, OCIError *errhp, 
                         void  *objptr, 
                         ub4 objnm_len, ub1 objptr_typ, ub1 info_level,
                         ub1 objtyp, OCIDescribe *dschp);

sword   (*pOCIDefineByPos)  (OCIStmt *stmtp, OCIDefine **defnp, OCIError *errhp,
                         ub4 position, void  *valuep, sb4 value_sz, ub2 dty,
                         void  *indp, ub2 *rlenp, ub2 *rcodep, ub4 mode);

sword   (*pOCIStmtPrepare)   (OCIStmt *stmtp, OCIError *errhp, const OraText *stmt,
                          ub4 stmt_len, ub4 language, ub4 mode);

sword (*pOCIStmtPrepare2) ( OCISvcCtx *svchp, OCIStmt **stmtp, OCIError *errhp,
                     const OraText *stmt, ub4 stmt_len, const OraText *key,
                     ub4 key_len, ub4 language, ub4 mode);

sword (*pOCIStmtRelease) ( OCIStmt *stmtp, OCIError *errhp, const OraText *key,
                       ub4 key_len, ub4 mode);

sword (*pOCIObjectUnpin)(    OCIEnv *env, OCIError *err, void  *object);

sword   (*pOCITransCommit)  (OCISvcCtx *svchp, OCIError *errhp, ub4 flags);

sword   (*pOCIDescriptorFree)(void  *descp, const ub4 type);

sword (*pOCIStringAssignText)(    OCIEnv *env, OCIError *err, const oratext *rhs, 
                              ub4 rhs_len, OCIString **lhs    );

sword   (*pOCIBindObject)  (OCIBind *bindp, OCIError *errhp, const OCIType *type, 
                        void  **pgvpp, ub4 *pvszsp, void  **indpp, 
                        ub4 *indszp);

sword   (*pOCIBindByName)   (OCIStmt *stmtp, OCIBind **bindp, OCIError *errhp,
                         const OraText *placeholder, sb4 placeh_len, 
                         void  *valuep, sb4 value_sz, ub2 dty, 
                         void  *indp, ub2 *alenp, ub2 *rcodep, 
                         ub4 maxarr_len, ub4 *curelep, ub4 mode);
  dvoid *tmp;
  OCIEnv *envhp;
  OCIServer *srvhp;
  OCIError *errhp;
  OCISvcCtx *svchp;
  OCISession *usrhp;
  bool b_connected;
  void checkerr(OCIError *errhp, sword status);
  char* get_object_type(const char* const object_name, const char* const schema_name);
  void get_name_by_synonym(const void* const synonym_name, const void* const schema_name, char **table_name, char **table_owner);
public:
	COciConn() : b_connected(false){}
	void connect(const char* username, const char* password, const char* service_name);
	void disconnect();
	bool is_connected() const;
	std::vector<std::string> get_column_list(const char* const object_name, const char* const schema_name);
	std::vector<std::string> get_column_list_array(const char* const object_name, const char* const schema_name);
};

extern COciConn con;

}
#endif
