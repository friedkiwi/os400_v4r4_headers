 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: SQLCLI                                       */
 /*                                                                */
 /* Descriptive Name: Structured Query Language (SQL) Call Level   */
 /*                   Interface.                                   */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The SQL Call Level Interface provides access to   */
 /*              most SQL functions, without the need for a        */
 /*              precompiler.                                      */
 /*                                                                */
 /* Header Files Included: SQLCLI                                  */
 /*                                                                */
 /* Function Prototype List:  SQLAllocConnect                      */
 /*                           SQLAllocEnv                          */
 /*                           SQLAllocHandle                       */
 /*                           SQLAllocStmt                         */
 /*                           SQLBindCol                           */
 /*                           SQLBindFileToCol                     */
 /*                           SQLBindFileToParam                   */
 /*                           SQLBindParam                         */
 /*                           SQLBindParameter                     */
 /*                           SQLCancel                            */
 /*                           SQLCloseCursor                       */
 /*                           SQLColAttributes                     */
 /*                           SQLColumns                           */
 /*                           SQLConnect                           */
 /*                           SQLCopyDesc                          */
 /*                           SQLDataSources                       */
 /*                           SQLDescribeCol                       */
 /*                           SQLDescribeParam                     */
 /*                           SQLDisconnect                        */
 /*                           SQLDriverConnect                     */
 /*                           SQLEndTran                           */
 /*                           SQLError                             */
 /*                           SQLExecDirect                        */
 /*                           SQLExecute                           */
 /*                           SQLExtendedFetch                     */
 /*                           SQLFetch                             */
 /*                           SQLFetchScroll                       */
 /*                           SQLForeignKeys                       */
 /*                           SQLFreeConnect                       */
 /*                           SQLFreeEnv                           */
 /*                           SQLFreeHandle                        */
 /*                           SQLFreeStmt                          */
 /*                           SQLGetCol                            */
 /*                           SQLGetConnectOption                  */
 /*                           SQLGetCursorName                     */
 /*                           SQLGetConnectAttr                    */
 /*                           SQLGetData                           */
 /*                           SQLGetDescField                      */
 /*                           SQLGetDescRec                        */
 /*                           SQLGetDiagField                      */
 /*                           SQLGetDiagRec                        */
 /*                           SQLGetEnvAttr                        */
 /*                           SQLGetFunctions                      */
 /*                           SQLGetInfo                           */
 /*                           SQLGetLength                         */
 /*                           SQLGetPosition                       */
 /*                           SQLGetStmtAttr                       */
 /*                           SQLGetStmtOption                     */
 /*                           SQLGetSubString                      */
 /*                           SQLGetTypeInfo                       */
 /*                           SQLLanguages                         */
 /*                           SQLMoreResults                       */
 /*                           SQLNativeSql                         */
 /*                           SQLNumParams                         */
 /*                           SQLNumResultCols                     */
 /*                           SQLParamData                         */
 /*                           SQLParamOptions                      */
 /*                           SQLPrepare                           */
 /*                           SQLPrimaryKeys                       */
 /*                           SQLProcedureColumns                  */
 /*                           SQLProcedures                        */
 /*                           SQLPutData                           */
 /*                           SQLReleaseEnv                        */
 /*                           SQLRowCount                          */
 /*                           SQLSetConnectAttr                    */
 /*                           SQLSetConnectOption                  */
 /*                           SQLSetCursorName                     */
 /*                           SQLSetDescField                      */
 /*                           SQLSetDescRec                        */
 /*                           SQLSetEnvAttr                        */
 /*                           SQLSetParam                          */
 /*                           SQLSetStmtAttr                       */
 /*                           SQLSetStmtOption                     */
 /*                           SQLSpecialColumns                    */
 /*                           SQLStatistics                        */
 /*                           SQLTables                            */
 /*                           SQLTransact                          */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91823       3D60  941206 MEGERIAN  New Include           */
 /* $A1= D94881       4D20  960816 MEGERIAN  V4R2M0 enhancements   */
 /* $A2= D95600       4D30  970910 MEGERIAN  V4R3M0 enhancements   */
 /* $A3= P3682850     4D40  981030 MEGERIAN  V4R4M0 enhancements   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef SQL_H_SQLCLI
  #define SQL_H_SQLCLI                /* Permit duplicate Includes */

  #ifdef __ILEC400__
    #pragma checkout(suspend)
    #pragma nomargins nosequence
  #else
    #pragma info(none)
  #endif

  #ifndef __SQL_EXTERN
     #ifdef __ILEC400__
       #define SQL_EXTERN extern
     #else
       #ifdef __cplusplus
         #ifdef __TOS_OS400__
           #define SQL_EXTERN extern "C nowiden"
         #else
           #define SQL_EXTERN extern "C"
         #endif
       #else
       #define SQL_EXTERN extern
       #endif /* __cplusplus */
     #endif /* __ILEC_400__ */
     #define __SQL_EXTERN
  #endif

  #ifdef __ILEC400__
    #pragma argument (SQLAllocConnect       , nowiden)
    #pragma argument (SQLAllocEnv           , nowiden)
    #pragma argument (SQLAllocHandle        , nowiden)
    #pragma argument (SQLAllocStmt          , nowiden)
    #pragma argument (SQLBindCol            , nowiden)
    #pragma argument (SQLBindFileToCol      , nowiden)
    #pragma argument (SQLBindFileToParam    , nowiden)
    #pragma argument (SQLBindParam          , nowiden)
    #pragma argument (SQLBindParameter      , nowiden)
    #pragma argument (SQLCancel             , nowiden)
    #pragma argument (SQLCloseCursor        , nowiden)
    #pragma argument (SQLColAttributes      , nowiden)
    #pragma argument (SQLColumns            , nowiden)
    #pragma argument (SQLConnect            , nowiden)
    #pragma argument (SQLCopyDesc           , nowiden)
    #pragma argument (SQLDataSources        , nowiden)
    #pragma argument (SQLDescribeCol        , nowiden)
    #pragma argument (SQLDescribeParam      , nowiden)
    #pragma argument (SQLDisconnect         , nowiden)
    #pragma argument (SQLDriverConnect      , nowiden)
    #pragma arg