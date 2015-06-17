#include "COciConn.h"
#include "CName.h"

namespace ociconn
{

COciConn con;

void COciConn::connect(const char* username, const char* password, const char* service_name)
{
	if(!is_connected())
	{
		debug("connect start");

		hLib = LoadLibrary(L"oci.dll");
		(FARPROC &)pOCIServerDetach = GetProcAddress(hLib, "OCIServerDetach");
		(FARPROC &)pOCISessionEnd = GetProcAddress(hLib, "OCISessionEnd");
		(FARPROC &)pOCIHandleFree = GetProcAddress(hLib, "OCIHandleFree");
		(FARPROC &)pOCISessionBegin = GetProcAddress(hLib, "OCISessionBegin");
		(FARPROC &)pOCIAttrSet = GetProcAddress(hLib, "OCIAttrSet");
		(FARPROC &)pOCIServerAttach = GetProcAddress(hLib, "OCIServerAttach");
		(FARPROC &)pOCIEnvInit = GetProcAddress(hLib, "OCIEnvInit");
		(FARPROC &)pOCIHandleAlloc = GetProcAddress(hLib, "OCIHandleAlloc");
		(FARPROC &)pOCIInitialize = GetProcAddress(hLib, "OCIInitialize");
		(FARPROC &)pOCIErrorGet = GetProcAddress(hLib, "OCIErrorGet");
		(FARPROC &)pOCIStmtFetch = GetProcAddress(hLib, "OCIStmtFetch");
		(FARPROC &)pOCIStmtFetch2 = GetProcAddress(hLib, "OCIStmtFetch2");
		(FARPROC &)pOCIStringPtr = GetProcAddress(hLib, "OCIStringPtr");
		(FARPROC &)pOCIStmtExecute = GetProcAddress(hLib, "OCIStmtExecute");
		(FARPROC &)pOCIDefineObject = GetProcAddress(hLib, "OCIDefineObject");
		(FARPROC &)pOCIObjectPin = GetProcAddress(hLib, "OCIObjectPin");
		(FARPROC &)pOCIAttrGet = GetProcAddress(hLib, "OCIAttrGet");
		(FARPROC &)pOCIParamGet = GetProcAddress(hLib, "OCIParamGet");
		(FARPROC &)pOCIDescribeAny = GetProcAddress(hLib, "OCIDescribeAny");
		(FARPROC &)pOCIDefineByPos = GetProcAddress(hLib, "OCIDefineByPos");
		(FARPROC &)pOCIStmtPrepare = GetProcAddress(hLib, "OCIStmtPrepare");
		(FARPROC &)pOCIStmtPrepare2 = GetProcAddress(hLib, "OCIStmtPrepare2");
		(FARPROC &)pOCIStmtRelease = GetProcAddress(hLib, "OCIStmtRelease");
		(FARPROC &)pOCIObjectUnpin = GetProcAddress(hLib, "OCIObjectUnpin");
		(FARPROC &)pOCITransCommit = GetProcAddress(hLib, "OCITransCommit");
		(FARPROC &)pOCIDescriptorFree = GetProcAddress(hLib, "OCIDescriptorFree");
		(FARPROC &)pOCIStringAssignText = GetProcAddress(hLib, "OCIStringAssignText");
		(FARPROC &)pOCIBindObject = GetProcAddress(hLib, "OCIBindObject");
		(FARPROC &)pOCIBindByName = GetProcAddress(hLib, "OCIBindByName");

		pOCIInitialize((ub4) OCI_THREADED | OCI_OBJECT, (dvoid *)0,
			  (dvoid *(*)(void *, size_t)) 0, (dvoid * (*)(void *,void *,size_t)) 0,  (void (*)(void *,void *)) 0 );

		pOCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
			 52, (dvoid **) &tmp);

		pOCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 21, (dvoid **) &tmp  );

		pOCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) OCI_HTYPE_ERROR,
			 52, (dvoid **) &tmp);
		pOCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) OCI_HTYPE_SERVER,
			 52, (dvoid **) &tmp);

		pOCIServerAttach( srvhp, errhp, (text *)service_name, strlen((char *)service_name), (ub4) OCI_DEFAULT);

		pOCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) OCI_HTYPE_SVCCTX,
			 52, (dvoid **) &tmp);

		/* set attribute server context in the service context */
		pOCIAttrSet( (dvoid *) svchp, (ub4) OCI_HTYPE_SVCCTX,
			 (dvoid *) srvhp, (ub4) 0,
			 (ub4) OCI_ATTR_SERVER, (OCIError *) errhp);

		/* allocate a user context handle */
		pOCIHandleAlloc((dvoid *)envhp, (dvoid **)&usrhp, (ub4) OCI_HTYPE_SESSION,
			 (size_t) 0, (dvoid **) 0);

		pOCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION,
			 (dvoid *)username, (ub4)strlen((char *)username),
			 OCI_ATTR_USERNAME, errhp);

		pOCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION,
			 (dvoid *)password, (ub4)strlen((char *)password),
			 OCI_ATTR_PASSWORD, errhp);

		checkerr(errhp, pOCISessionBegin (svchp, errhp, usrhp,
			 OCI_CRED_RDBMS, OCI_DEFAULT));

		pOCIAttrSet((dvoid *)svchp, (ub4)OCI_HTYPE_SVCCTX,
			 (dvoid *)usrhp, (ub4)0,
			 OCI_ATTR_SESSION, errhp);

		b_connected = true;

		debug("connect end");
	}
}

void COciConn::disconnect()
{
	if(is_connected())
	{
		debug("disconnect start");
		pOCISessionEnd(svchp, errhp, usrhp, (ub4)OCI_DEFAULT);
		pOCIServerDetach( srvhp, errhp, (ub4) OCI_DEFAULT );
		checkerr(errhp, pOCIHandleFree((dvoid *) srvhp, (ub4) OCI_HTYPE_SERVER));
		checkerr(errhp, pOCIHandleFree((dvoid *) svchp, (ub4) OCI_HTYPE_SVCCTX));
		checkerr(errhp, pOCIHandleFree((dvoid *) errhp, (ub4) OCI_HTYPE_ERROR));
		FreeLibrary(hLib);
		b_connected = false;

		debug("disconnect end");
	}
}

void COciConn::checkerr(OCIError *errhp, sword status)
{
  text errbuf[512];
  ub4 buflen;
  sb4 errcode;

  switch (status)
  {
  case OCI_SUCCESS:
    break;
  case OCI_SUCCESS_WITH_INFO:
    printf("Error - OCI_SUCCESS_WITH_INFO\n");
    break;
  case OCI_NEED_DATA:
    printf("Error - OCI_NEED_DATA\n");
    break;
  case OCI_NO_DATA:
    printf("Error - OCI_NO_DATA\n");
    break;
  case OCI_ERROR:
    pOCIErrorGet ((dvoid *) errhp, (ub4) 1, (text *) NULL, &errcode,
            errbuf, (ub4) sizeof(errbuf), (ub4) OCI_HTYPE_ERROR);
    printf("Error - %s\n", errbuf);
    break;
  case OCI_INVALID_HANDLE:
    printf("Error - OCI_INVALID_HANDLE\n");
    break;
  case OCI_STILL_EXECUTING:
    printf("Error - OCI_STILL_EXECUTE\n");
    break;
  case OCI_CONTINUE:
    printf("Error - OCI_CONTINUE\n");
    break;
  default:
    break;
  }
}

bool COciConn::is_connected() const
{
	return b_connected;
}

char* COciConn::get_object_type(const char* const object_name, const char* const schema_name)
{
  OCIStmt *stmthp;
  OCIDefine *defn1p = (OCIDefine *) 0;
  OCIBind   *bnd1p = (OCIBind *) 0;             // the first bind handle 
  OCIBind   *bnd2p = (OCIBind *) 0;             // the second bind handle
  sb2 indp_obj_type = 0;
  sb2 indp_sch_name = 0;
  sb4 status;
  sword retval;
  void *object_type = NULL;
  void *bind_object_name = NULL;
  void *bind_schema_name = NULL;

  debug("get_object_type start");
  debug("get_object_type: schema_name = %s, object_name=%s", schema_name, object_name);

  const text *const  selquery1 = (text *)
                     "SELECT object_type FROM all_objects WHERE object_name = upper(:object_name) and (owner = upper(nvl(:schema_name, user)) or owner = 'PUBLIC') order by decode(object_type, 'SYNONYM', 1, 0) desc";

  object_type = (char*)malloc(20);
  bind_object_name = (char*)malloc(31);
  bind_schema_name = (char*)malloc(31);

  checkerr(errhp, pOCIHandleAlloc( (dvoid *) envhp, (dvoid **) &stmthp,
                           (ub4) OCI_HTYPE_STMT, 50, (dvoid **) &tmp));

    /* define the application request  */
  checkerr(errhp, pOCIStmtPrepare2 ( svchp, &stmthp, errhp,
                     (text *) selquery1, (ub4) strlen((char *)selquery1), NULL,
                     0, (ub4) OCI_NTV_SYNTAX, (ub4) OCI_DEFAULT));

  /* bind the input variable */
  checkerr(errhp, pOCIDefineByPos(stmthp, &defn1p, errhp,
                          (ub4) 1, (dvoid *) object_type,
                          (sb4) 20, SQLT_STR, (dvoid *) &indp_obj_type, (ub2 *)0,
                          (ub2 *)0, (ub4) OCI_DEFAULT));

  /*  bind the placeholders */
  checkerr(errhp, pOCIBindByName(stmthp, &bnd1p, errhp, (text *) ":object_name",
             -1, (dvoid *) bind_object_name,
             strlen((char *)bind_object_name), SQLT_STR, (dvoid *) 0,
             (ub2 *) 0, (ub2 *) 0, (ub4) 0, (ub4 *) 0, OCI_DEFAULT));
  
  checkerr(errhp, pOCIBindByName(stmthp, &bnd1p, errhp, (text *) ":schema_name",
             -1, (dvoid *) bind_schema_name,
             strlen((char *)bind_schema_name), SQLT_STR, (dvoid *) &indp_sch_name,
             (ub2 *) 0, (ub2 *) 0, (ub4) 0, (ub4 *) 0, OCI_DEFAULT));

  
  strcpy((char*)bind_object_name, object_name);
  if( schema_name == NULL || strlen(schema_name) == 0 )
  {
	  strcpy((char*)bind_schema_name, "");
	  indp_sch_name = -1;
  }
  else
  {
	strcpy((char*)bind_schema_name, schema_name);
  }

  status = pOCIStmtExecute(svchp, stmthp, errhp, (ub4) 1, (ub4) 0,
                         (OCISnapshot *) NULL,
                         (OCISnapshot *) NULL, (ub4) OCI_DEFAULT);

  if ( !(status ==  OCI_SUCCESS || status == OCI_SUCCESS_WITH_INFO) )
  {
		printf("get_object_type: Error determination object type\n");
		strcpy((char*)object_type, "UNDEFINED");
		printf("schema_name = %s\n", schema_name);
		printf("object_name = %s\n", object_name);
		printf("object_type = %s\n", object_type);
  }
  else
  {
	  /* execute and fetch */
	  do
	  {
		  if(indp_obj_type == -1)
		  {
			  printf("get_object_type: Error object type is null\n");
			  strcpy((char*)object_type, "UNDEFINED");
		  }
	  }
	  while ((status = pOCIStmtFetch2(stmthp, errhp, (ub4) 1, (ub4) OCI_FETCH_NEXT, 0,
								   (ub4) OCI_DEFAULT)) == OCI_SUCCESS ||
									status == OCI_SUCCESS_WITH_INFO);
}

  if ( status!= OCI_NO_DATA )
    checkerr(errhp, status);

  free(bind_object_name);
  free(bind_schema_name);

  checkerr(errhp, pOCIStmtRelease(stmthp, errhp, NULL, 0, (ub4) OCI_DEFAULT));
  debug("get_object_type: object_type=%s", (char*)object_type);

  debug("get_object_type end");
  return (char*)object_type;
}

void COciConn::get_name_by_synonym(const void* const synonym_name, const void* const schema_name, char **table_name, char **table_owner)
{
	OCIStmt *stmthp;
	OCIDefine *defn1p = (OCIDefine *) 0;
	OCIDefine *defn2p = (OCIDefine *) 0;
	OCIBind   *bnd1p = (OCIBind *) 0;             // the first bind handle 
	OCIBind   *bnd2p = (OCIBind *) 0;             // the second bind handle
	sb2 indp_tab_name = 0;
	sb2 indp_tab_owner = 0;
	sb2 indp_sch_name = 0;
	sb4 status;
	sword retval;
	void *bind_synonym_name;
	void *bind_schema_name;

	const text *const  selquery1 = (text *)
		"SELECT lower(table_name), lower(table_owner) FROM all_synonyms WHERE synonym_name = upper(:synonym_name) and (owner = upper(nvl(:schema_name, user)) or owner = 'PUBLIC')";

	debug("get_name_by_synonym start");
	debug("get_name_by_synonym: schema_name = %s, synonym_name=%s", schema_name, synonym_name);

	/*
	*table_name = (char*)malloc(31);
	*table_owner = (char*)malloc(31);
	*/
	bind_synonym_name = (char*)malloc(31);
	bind_schema_name = (char*)malloc(31);

    checkerr(errhp, pOCIHandleAlloc( (dvoid *) envhp, (dvoid **) &stmthp,
                             (ub4) OCI_HTYPE_STMT, 50, (dvoid **) &tmp));

	/* define the application request  */
	checkerr(errhp, pOCIStmtPrepare2 ( svchp, &stmthp, errhp,
                     (text *) selquery1, (ub4) strlen((char *)selquery1), NULL,
                     0, (ub4) OCI_NTV_SYNTAX, (ub4) OCI_DEFAULT));

	/* bind the input variable */
	  checkerr(errhp, pOCIDefineByPos(stmthp, &defn1p, errhp,
							  (ub4) 1, (dvoid *) *table_name,
							  (sb4) 31, SQLT_STR, (dvoid *) &indp_tab_name, (ub2 *)0,
							  (ub2 *)0, (ub4) OCI_DEFAULT));
  
	  checkerr(errhp, pOCIDefineByPos(stmthp, &defn2p, errhp,
							  (ub4) 2, (dvoid *) *table_owner,
							  (sb4) 31, SQLT_STR, (dvoid *) &indp_tab_owner, (ub2 *)0,
							  (ub2 *)0, (ub4) OCI_DEFAULT));

		/*  bind the placeholders */
	  checkerr(errhp, pOCIBindByName(stmthp, &bnd1p, errhp, (text *) ":synonym_name",
				 -1, (dvoid *) bind_synonym_name,
				 strlen((char *)bind_synonym_name), SQLT_STR, (dvoid *) 0,
				 (ub2 *) 0, (ub2 *) 0, (ub4) 0, (ub4 *) 0, OCI_DEFAULT));
  
	  checkerr(errhp, pOCIBindByName(stmthp, &bnd2p, errhp, (text *) ":schema_name",
				 -1, (dvoid *) bind_schema_name,
				 strlen((char *)bind_schema_name), SQLT_STR, (dvoid *) &indp_sch_name,
				 (ub2 *) 0, (ub2 *) 0, (ub4) 0, (ub4 *) 0, OCI_DEFAULT));
	  
	  strcpy((char*)bind_synonym_name, (char*)synonym_name);
	  strcpy((char*)bind_schema_name, (char*)schema_name);

	  if(schema_name == NULL || strlen((char*)schema_name) == 0)
	  {
		  indp_sch_name = -1;
	  }

	status = pOCIStmtExecute(svchp, stmthp, errhp, (ub4) 1, (ub4) 0,
		(OCISnapshot *) NULL,
		(OCISnapshot *) NULL, (ub4) OCI_DEFAULT);

	if ( !(status ==  OCI_SUCCESS || status == OCI_SUCCESS_WITH_INFO) )
	{
		printf("get_name_by_synonym: Error get table name by synonym %s\n", synonym_name);
	}
	else
	{
		do
		{
			if(indp_tab_name == -1 || indp_tab_owner == -1)
			{
				printf("get_name_by_synonym: Error table_name or table_owner is null for synonym_name=%s\n", synonym_name);
				strcpy((char*)*table_name, "UNDEFINED");
				strcpy((char*)*table_owner, "");
			}

		    //printf("for synonym %s.%s table_name = %s.%s\n", schema_name, synonym_name, *table_owner, *table_name);
		}
		while ((status = pOCIStmtFetch2(stmthp, errhp, (ub4) 1, (ub4) OCI_FETCH_NEXT, 0,
			(ub4) OCI_DEFAULT)) == OCI_SUCCESS ||
			status == OCI_SUCCESS_WITH_INFO);
	}

	if ( status!= OCI_NO_DATA )
		checkerr(errhp, status);

	free(bind_synonym_name);
	free(bind_schema_name);

	checkerr(errhp, pOCIStmtRelease(stmthp, errhp, NULL, 0, (ub4) OCI_DEFAULT));

	debug("get_name_by_synonym end");
}

std::vector<std::string> COciConn::get_column_list(const char* const object_name, const char* const schema_name)
{
	OCIStmt *stmthp;
	OCIDefine *defn1p = (OCIDefine *) 0;
	OCIBind   *bnd1p = (OCIBind *) 0;             // the first bind handle 
	OCIBind   *bnd2p = (OCIBind *) 0;             // the second bind handle
	sb2 indp_column = 0;
	sb2 indp_sch_name = 0;
	sb4 status;
	char *object_type = NULL;
	void *column_name = NULL;
	void *bind_object_name = NULL;
	void *bind_schema_name = NULL;
	bool b_synonym = false;
	std::vector<std::string> v_cols;

	debug("get_column_list start");
	debug("get_column_list: schema_name = %s, object_name=%s", schema_name, object_name);

	//если соединения с сервером нет, то вернуть пустой список
	if(!this->is_connected())
	{
		return v_cols;
	}

	const text *const  selquery1 = (text *)
		"SELECT lower(column_name) FROM all_tab_columns WHERE table_name = upper(:object_name) and (owner = upper(nvl(:schema_name, user)) or owner = 'PUBLIC')";

	object_type = (char*)malloc(20);
	column_name = (char*)malloc(31);
	bind_object_name = (char*)malloc(31);
	bind_schema_name = (char*)malloc(31);

    checkerr(errhp, pOCIHandleAlloc( (dvoid *) envhp, (dvoid **) &stmthp,
                             (ub4) OCI_HTYPE_STMT, 50, (dvoid **) &tmp));

	/* define the application request  */
	checkerr(errhp, pOCIStmtPrepare2 ( svchp, &stmthp, errhp,
                     (text *) selquery1, (ub4) strlen((char *)selquery1), NULL,
                     0, (ub4) OCI_NTV_SYNTAX, (ub4) OCI_DEFAULT));

	/* bind the input variable */
  checkerr(errhp, pOCIDefineByPos(stmthp, &defn1p, errhp,
                          (ub4) 1, (dvoid *) column_name,
                          (sb4) 31, SQLT_STR, (dvoid *) &indp_column, (ub2 *)0,
                          (ub2 *)0, (ub4) OCI_DEFAULT));

	/*  bind the placeholders */
  checkerr(errhp, pOCIBindByName(stmthp, &bnd1p, errhp, (text *) ":object_name",
             -1, (dvoid *) bind_object_name,
             strlen((char *)bind_object_name), SQLT_STR, (dvoid *) 0,
             (ub2 *) 0, (ub2 *) 0, (ub4) 0, (ub4 *) 0, OCI_DEFAULT));
  
  checkerr(errhp, pOCIBindByName(stmthp, &bnd1p, errhp, (text *) ":schema_name",
             -1, (dvoid *) bind_schema_name,
             strlen((char *)bind_schema_name), SQLT_STR, (dvoid *) &indp_sch_name,
             (ub2 *) 0, (ub2 *) 0, (ub4) 0, (ub4 *) 0, OCI_DEFAULT));

	// получение типа и имени объекта
	object_type = get_object_type(object_name, schema_name);
	debug("get_column_list: object_type=%s", object_type);
	while(!strcmp(object_type, "SYNONYM"))
	{
		free(object_type);
		get_name_by_synonym(object_name, schema_name, (char**)&bind_object_name, (char**)&bind_schema_name);
		object_type = get_object_type((char*)bind_object_name, (char*)bind_schema_name);
		debug("get_column_list: bind_object_name=%s, bind_schema_name=%s", (char*)bind_object_name, (char*)bind_schema_name);
		debug("get_column_list: object_type = %s", object_type);
		b_synonym = true;
	}
	
	if( !strcmp(object_type, "TABLE") || !strcmp(object_type, "VIEW") )
	{
		if(!b_synonym)
		{
			strcpy((char*)bind_object_name, object_name);
			if( schema_name == NULL || strlen(schema_name) == 0 )
			{
				strcpy((char*)bind_schema_name, "");
				indp_sch_name = -1;
			}
			else
			{
				strcpy((char*)bind_schema_name, schema_name);
			}
		}
	}
	else
	{
		printf("get_column_list: type %s not processing", object_type);
	}

	//получение столбцов
	if( !strcmp(object_type, "TABLE") || !strcmp(object_type, "VIEW") )
	{
		status = pOCIStmtExecute(svchp, stmthp, errhp, (ub4) 1, (ub4) 0,
			(OCISnapshot *) NULL,
			(OCISnapshot *) NULL, (ub4) OCI_DEFAULT);

		if ( !(status ==  OCI_SUCCESS || status == OCI_SUCCESS_WITH_INFO) )
		{
			printf("get_column_list: Error to find table columns\n");
		}
		else
		{
			//printf("columns:\n");
			do
			{
				if(indp_column == -1)
				{
					printf("get_column_list: Error column name is null\n");
					strcpy((char*)column_name, "UNDEFINED");
				}
				
				v_cols.push_back(std::string((char*)column_name));
				//printf("%s\n", column_name);
			}
			while ((status = pOCIStmtFetch2(stmthp, errhp, (ub4) 1, (ub4) OCI_FETCH_NEXT, 0,
				(ub4) OCI_DEFAULT)) == OCI_SUCCESS ||
				status == OCI_SUCCESS_WITH_INFO);
		}

		if ( status!= OCI_NO_DATA )
			checkerr(errhp, status);
	}

	free(object_type);
	free(bind_object_name);
	free(bind_schema_name);

	checkerr(errhp, pOCIStmtRelease(stmthp, errhp, NULL, 0, (ub4) OCI_DEFAULT));

	debug("get_column_list end");
	return v_cols;
}

std::vector<std::string> COciConn::get_column_list_array(const char* const object_name, const char* const schema_name)
{
	OCIStmt *stmthp;
	OCIDefine *defn1p = (OCIDefine *) 0;
	OCIBind   *bnd1p = (OCIBind *) 0;             // the first bind handle 
	OCIBind   *bnd2p = (OCIBind *) 0;             // the second bind handle
	sb2 indp_sch_name = 0;
	sb4 status;
	char *object_type = NULL;
	void *bind_object_name = NULL;
	void *bind_schema_name = NULL;
	bool b_synonym = false;
	std::vector<std::string> v_cols;
	
	const int c_prefetch_rows = 500;
	int prefetch_rows = c_prefetch_rows;
	int fetched;

	// Fetched data
	char column_name[c_prefetch_rows][31];
 
	// Fetched data indicators, lengths and codes
	sb2 column_indp[c_prefetch_rows];
	ub2 column_len[c_prefetch_rows];
	ub2 column_code[c_prefetch_rows];

	debug("get_column_list_array start");
	debug("get_column_list_array: schema_name = %s, object_name=%s", schema_name, object_name);

	//если соединения с сервером нет, то вернуть пустой список
	if(!this->is_connected())
	{
		return v_cols;
	}

	const text *const  selquery1 = (text *)
		"SELECT lower(column_name) FROM all_tab_columns WHERE table_name = upper(:object_name) and (owner = upper(nvl(:schema_name, user)) or owner = 'PUBLIC')";

	bind_object_name = (char*)malloc(31);
	bind_schema_name = (char*)malloc(31);

    checkerr(errhp, pOCIHandleAlloc( (dvoid *) envhp, (dvoid **) &stmthp,
                             (ub4) OCI_HTYPE_STMT, 50, (dvoid **) &tmp));

	// Set prefetch count
	checkerr(errhp, pOCIAttrSet(stmthp, OCI_HTYPE_STMT, (void*)&prefetch_rows, sizeof(int), 
                                       OCI_ATTR_PREFETCH_ROWS, errhp));

	/* define the application request  */
	checkerr(errhp, pOCIStmtPrepare2 ( svchp, &stmthp, errhp,
                     (text *) selquery1, (ub4) strlen((char *)selquery1), NULL,
                     0, (ub4) OCI_NTV_SYNTAX, (ub4) OCI_DEFAULT));

	/* bind the input variable */
  /*checkerr(errhp, pOCIDefineByPos(stmthp, &defn1p, errhp,
                          (ub4) 1, (dvoid *) column_name,
                          (sb4) 31, SQLT_STR, (dvoid *) &indp_column, (ub2 *)0,
                          (ub2 *)0, (ub4) OCI_DEFAULT));*/
  checkerr(errhp, pOCIDefineByPos(stmthp, &defn1p, errhp, 1, (void*)column_name, 31, SQLT_STR, (void*)column_indp,
						column_len, column_code, OCI_DEFAULT));

	/*  bind the placeholders */
  checkerr(errhp, pOCIBindByName(stmthp, &bnd1p, errhp, (text *) ":object_name",
             -1, (dvoid *) bind_object_name,
             strlen((char *)bind_object_name), SQLT_STR, (dvoid *) 0,
             (ub2 *) 0, (ub2 *) 0, (ub4) 0, (ub4 *) 0, OCI_DEFAULT));
  
  checkerr(errhp, pOCIBindByName(stmthp, &bnd1p, errhp, (text *) ":schema_name",
             -1, (dvoid *) bind_schema_name,
             strlen((char *)bind_schema_name), SQLT_STR, (dvoid *) &indp_sch_name,
             (ub2 *) 0, (ub2 *) 0, (ub4) 0, (ub4 *) 0, OCI_DEFAULT));

	// получение типа и имени объекта
	object_type = get_object_type(object_name, schema_name);
	debug("get_column_list_array: object_type=%s", object_type);
	while(!strcmp(object_type, "SYNONYM"))
	{
		free(object_type);
		get_name_by_synonym(object_name, schema_name, (char**)&bind_object_name, (char**)&bind_schema_name);
		object_type = get_object_type((char*)bind_object_name, (char*)bind_schema_name);
		debug("get_column_list_array: bind_object_name=%s, bind_schema_name=%s", (char*)bind_object_name, (char*)bind_schema_name);
		debug("get_column_list_array: object_type = %s", object_type);
		b_synonym = true;
	}
	
	if( !strcmp(object_type, "TABLE") || !strcmp(object_type, "VIEW") )
	{
		if(!b_synonym)
		{
			strcpy((char*)bind_object_name, object_name);
			if( schema_name == NULL || strlen(schema_name) == 0 )
			{
				strcpy((char*)bind_schema_name, "");
				indp_sch_name = -1;
			}
			else
			{
				strcpy((char*)bind_schema_name, schema_name);
			}
		}
	}
	else
	{
		printf("get_column_list_array: type %s not processing", object_type);
	}

	//получение столбцов
	if( !strcmp(object_type, "TABLE") || !strcmp(object_type, "VIEW") )
	{
		status = pOCIStmtExecute(svchp, stmthp, errhp, (ub4) prefetch_rows, (ub4) 0,
			(OCISnapshot *) NULL,
			(OCISnapshot *) NULL, (ub4) OCI_DEFAULT);

		if(status ==  OCI_SUCCESS || status == OCI_SUCCESS_WITH_INFO || status == OCI_NO_DATA)
		{
			while(status >= 0)
			{
				checkerr(errhp, pOCIAttrGet(stmthp, OCI_HTYPE_STMT, (void*)&fetched, NULL, OCI_ATTR_ROWS_FETCHED, errhp));
 
				// OCI_NO_DATA is returned by OCIStmtExecute and OCIStmtFetch2 when the number of fetched rows 
				// is less than the number of rows allocated in the array
				if(fetched == 0)
					break;
 
				// Output fetched data 
				for(int i = 0; i < fetched; i++)
				{
					if(column_indp[i] == -1)
					{
						printf("get_column_list_array: Error column name is null\n");
						strcpy(column_name[i], "UNDEFINED");
					}

					v_cols.push_back(std::string(column_name[i]));
				}
 
				if(status == OCI_NO_DATA)
					break;

				// Fetch another set of rows
				status = pOCIStmtFetch2(stmthp, errhp, prefetch_rows, OCI_DEFAULT, 0, OCI_DEFAULT);
			}
			if ( status!= OCI_NO_DATA )
				checkerr(errhp, status);
		}
	}

	free(object_type);
	free(bind_object_name);
	free(bind_schema_name);

	checkerr(errhp, pOCIStmtRelease(stmthp, errhp, NULL, 0, (ub4) OCI_DEFAULT));

	debug("get_column_list_array end");
	return v_cols;
}

}