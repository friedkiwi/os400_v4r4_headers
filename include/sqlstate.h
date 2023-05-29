/***********************************************************************
**
** Source File Name: sqlstate
**
** (C) COPYRIGHT International Business Machines Corp. 1991, 1997
** All Rights Reserved
** Licensed Materials - Property of IBM
**
** US Government Users Restricted Rights - Use, duplication or
** disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
**
** Function: Include File defining:
**             Labels for the SQL Council's SQL States
**
** Operating System: AS/400
**
**
** The last five bytes of the SQLCA contain a diagnostic code called
** SQLSTATE, which is consistent across all IBM SQL products.  The first
** character of SQLSTATE indicates whether the execution of the SQL
** statement was successful or unsuccessful ('0' or not).  The first two
** characters of SQLSTATE represent classes of successful and
** unsucessful execution conditions (with '00' through '49' reserved for
** ANS-defined classes). The class codes and their meanings are:
**
** 00  Unqualified Successful Completion
** 01  Warning
** 02  No Data
** 08  Connection exception was detected
** 21  Cardinality Violation
** 22  Data Exception
** 23  Constraint Violation
** 24  Invalid Cursor State
** 26  Invalid SQL Statement Identifier
** 37  Syntax Error
** 40  Serialization Failure
** 42  Authorization Violation
** 51  Invalid Application State
** 52  Duplicate or Undefined Name
** 53  Invalid Operand or Inconsistent Specification
** 54  SQL or Product Limit Exceeded
** 55  Object Not in Prerequisite State
** 56  Miscellaneous SQL or Product Restriction
** 57  Resource Not Available or Operator Intervention
** 58  System Error
**
************************************************************************/
#ifndef SQL_H_SQLSTATE
#define SQL_H_SQLSTATE

#ifdef __cplusplus
extern "C" {
#endif


/* SQLSTATE CLASSES                                                    */

#define SQLSTATE_CLASS_SUCCESS              "00"
#define SQLSTATE_CLASS_WARNING              "01"
#define SQLSTATE_CLASS_NO_DATA              "02"
#define SQLSTATE_CLASS_CONNECT_EXCEPT       "08"
#define SQLSTATE_CLASS_CARDINALITY          "21"
#define SQLSTATE_CLASS_DATA_EXCEPT          "22"
#define SQLSTATE_CLASS_CONSTRAINT           "23"
#define SQLSTATE_CLASS_INV_CURS_STATE       "24"
#define SQLSTATE_CLASS_INV_STMT_ID          "26"
#define SQLSTATE_CLASS_SYNTAX               "37"
#define SQLSTATE_CLASS_SERIALIZATION        "40"
#define SQLSTATE_CLASS_AUTHORZATION         "42"
#define SQLSTATE_CLASS_INV_APP_STATE        "51"
#define SQLSTATE_CLASS_DUP_UNDEF_NAME       "52"
#define SQLSTATE_CLASS_INV_OPERAND          "53"
#define SQLSTATE_CLASS_LIMIT                "54"
#define SQLSTATE_CLASS_PREREQ_STATE         "55"
#define SQLSTATE_CLASS_MISC_RESTRICT        "56"
#define SQLSTATE_CLASS_RESOURCE             "57"
#define SQLSTATE_CLASS_SYSTEM_ERROR         "58"

/* SQLSTATES                                                          */

#define SQL_EXEC_OK                         "00000"
#define SQL_WARN_DISCONNECT_ERR             "01002"
#define SQL_WARN_NULL_VAL_ELIMINATED        "01003"
#define SQL_WARN_VAL_TRUNC                  "01004"
#define SQL_WARN_INSUFF_ITEM_DESCRIPT       "01005"
#define SQL_WARN_NOT_ALL_PRIVS_GRANTED      "01007"
#define SQL_WARN_STR_TRUNC                  "01501"
#define SQL_WARN_NULLS_ELIM                 "01502"
#define SQL_WARN_COLS_TOOMANY               "01503"
#define SQL_WARN_STMT_NOWHERE               "01504"
#define SQL_WARN_STMT_NOTEXEC               "01505"
#define SQL_WARN_DATE_ADJ                   "01506"
#define SQL_WARN_CURSOR_NOT_BLOCKED         "01509"
#define SQL_WARN_HOST_NULL_COL_RANGE        "01515"
#define SQL_WARN_WITH_GRANT_IGNORED         "01516"
#define SQL_WARN_CHAR_SUB                   "01517"
#define SQL_WARN_HOST_NULL_NUM_RANGE        "01519"
#define SQL_WARN_VAR_NOWNULL                "01520"
#define SQL_WARN_TABLE_UNDEF                "01522" /* Planned        */
#define SQL_WARN_NULLS2_ELIM                "01524"
#define SQL_WARN_ISO_ESCAL                  "01526"
#define SQL_WARN_REG_NOTEXIST               "01527" /* Planned        */
#define SQL_WARN_WHERE_IGNORE               "01528" /* Planned        */
#define SQL_WARN_NAME_UNDEF                 "01532" /* Planned        */
#define SQL_WARN_USE_SBCS_CHARS_ONLY        "01539"
#define SQL_WARN_OP_NOPRIV                  "01542" /* Planned        */
#define SQL_WARN_REF_IGNORE                 "01543"
#define SQL_WARN_NAME_INTERP                "01545"
#define SQL_WARN_OBJ_NOPRIV                 "01548"
#define SQL_WARN_PACK_PRIV                  "01549" /* Planned        */
#define SQL_WARN_INDEX_EXIST                "01550"
#define SQL_WARN_GRANT_IGNORED              "01560"
#define SQL_WARN_NEWLOGPATH_INV             "01562"
#define SQL_WARN_CURR_LOGPATH_INV           "01563"
#define SQL_WARN_HOST_NULL_DIV_ZERO         "01564"
#define SQL_WARN_AUTO_CHECK_PEND_STATE      "01586"
#define SQL_WARN_KEYWORD_REDUNDANT          "01589"
#define SQL_WARN_VAL_MAY_BE_TRUNC           "01592"
#define SQL_WARN_VAL_COULD_BE_TRUNC         "01593"
#define SQL_WARN_INSUFF_DESCRIPTORS         "01594"
#define SQL_WARN_OLD_VIEW_REPLACED          "01595"
#define SQL_WARN_NO_COMPFUNC_FOR_LSTR       "01596"
#define SQL_WARN_EVMON_STATE_NOT_SET        "01598"
#define SQL_WARN_REBIND_OPTS_IGNORED        "01599"
#define SQL_WARN_CONN_DISABLED              "01601"
#define SQL_WARN_SUB_OPTIMAL_QUERY          "01602"
#define SQL_WARN_CONSTRAINT_VIO_MOVED       "01603"
#define SQL_WARN_EXPLAIN_MODE_RESTRICT      "01604"
#define SQL_WARN_POSSIBLE_INFINIT_LOOP      "01605"
#define SQL_WARN_DIR_EMPTY                  "01606"
#define SQL_WARN_TIMEDIFF_EXCEEDED          "01607"
#define SQL_WARN_CLAUSE_VAL_REPLACED        "01608"
#define SQL_WARN_MORE_RESULT_SETS           "01610"
#define SQL_WARN_NEXT_RESULT_SET            "01611"
#define SQL_WARN_REDIST_REQUIRED            "01618"
#define SQL_WARN_UNIONALL_TABLES_SAME       "01620"
#define SQL_WARN_LOB_CHANGED                "01621"
#define SQL_WARN_SYSTEM_ERROR               "01622"
#define SQL_WARN_DEGREE_IGNORED             "01623"
#define SQL_WARN_ONE_ACTIVE_BUFFPOOL        "01626"
#define SQL_WARN_DATALINK_VAL_INVAL         "01627"
#define SQL_WARN_RESOURCE_UNAVAIL           "01630"
#define SQL_NUM_CONN_EXCEEDED               "01632"
#define SQL_SUMM_TABLE_NO_OPTIMIZE          "01633"
#define SQL_WARN_INVALID_CURSOR_POS         "01S06"
#define SQL_WARN_UDF_RETURNS_STATE          "01Hxx"
#define SQL_NODATA_EXCEPTION                "02000"
#define SQL_NODATA_UHOLE                    "02501" /* Planned        */
#define SQL_NODATA_DHOLE                    "02502" /* Planned        */
#define SQL_INV_NUM_HOST_VARS               "07001"
#define SQL_INV_PARM_OR_CB                  "07002"
#define SQL_INV_EXECUTE_STMT                "07003"
#define SQL_USING_CLAUSE_REQUIRED           "07004"
#define SQL_INV_PREP_STMT_CURSOR            "07005"
#define SQL_HOSTVAR_NOT_USABLE              "07006"
#define SQL_CONN_FAILED                     "08001"
#define SQL_CONN_ALREADY_EXIST              "08002"
#define SQL_CONN_DOES_NOT_EXIT              "08003"
#define SQL_CONN_REJECTED_BY_SERVER         "08004"
#define SQL_CONN_RESOLUTION_UNKNOWN         "08007"
#define SQL_CONN_FAILED_NO_TM               "08502"
#define SQL_TRIGGER_ERROR                   "09000"
#define SQL_PROC_NOT_CONNECTABLE            "0A001"
#define SQL_LOB_NOVALUE_TOKEN_VAR           "0F001"
#define SQL_CARD_VALUE_TOOMANY              "21000"
#define SQL_CARD_INS_MULTIROW               "21501"
#define SQL_CARD_UPD_MULTIROW               "21502"
#define SQL_CARD_DEL_MULTIROW               "21504"
#define SQL_DATA_ONE_ROW                    "21505"
#define SQL_DATA_CHAR_RTRUNC                "22001"
#define SQL_DATA_INDICATOR_NULL             "22002"
#define SQL_DATA_NUM_RANGE                  "22003"
#define SQL_DATA_FETCH_INV                  "22006" /* Planned        */
#define SQL_DATA_FORMAT_INV                 "22007"
#define SQL_DATA_DATETIME_OV                "22008"
#define SQL_DATA_STR_RANGE                  "22011"
#define SQL_DATA_DIV_ZERO                   "22012"
#define SQL_DATA_INV_CAST_CHAR              "22018"
#define SQL_DATA_LIKE_INV_CHAR              "22019" /* Planned        */
#define SQL_DATA_NULL_MISSING               "22024"
#define SQL_DATA_LIKE_INV_ESC               "22025"
#define SQL_NULL_INSTANCE_MUT               "2202D"
#define SQL_DATA_LENGTH_RANGE               "22501"
#define SQL_DATA_STR_INV                    "22503"
#define SQL_DATA_DATA_BADFORM               "22504"
#define SQL_DATA_DATETIME_REG_INV           "22506"
#define SQL_DATA_TYPE_CANTUSE               "22507"
#define SQL_DATA_TYPE_INCOMPAT              "22509"
#define SQL_HOSTVAR_NEG_INDVAR              "22512"
#define SQL_DATA_INDEX_DUP                  "22515"
#define SQL_DATA_STR_CANTUSE_XLATE          "22517"
#define SQL_DATA_STR_CANTASGN_XLATE         "22518"
#define SQL_DATA_KEY_NOTEQUAL               "22520"
#define SQL_DATA_CCSIDVAL_INV               "22522"
#define SQL_DATA_CONVERSION_TRUNC           "22524"
#define SQL_CONSTR_CHG_KEY_NOTALLOW         "23001"
#define SQL_CONSTR_ROW_NOTSATISFY_VIEW      "23501"
#define SQL_CONSTR_NULL_NOTALLOW            "23502"
#define SQL_CONSTR_VALUE_INV                "23503"
#define SQL_CONSTR_OP_RESTRICT              "23504"
#define SQL_CONSTR_INDEX_UNIQUE             "23505"
#define SQL_CONSTR_VIOLATION_RLST           "23510"
#define SQL_CONSTR_PAR_ROW_DEL_NOALLOW      "23511"
#define SQL_CONSTR_ROW_INVALID              "23512"
#define SQL_CONSTR_ROW_NONCONFORM           "23513"
#define SQL_CONSTR_VIOLATIONS               "23514"
#define SQL_CONSTR_DUP_KEY_VALUES           "23515"
#define SQL_CONSTR_FOREIGN_KEY_NOALLOW      "23520"
#define SQL_CONSTR_UPDATE_CAT_STA