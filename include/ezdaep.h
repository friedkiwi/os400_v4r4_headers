/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/EZDAEP                                */
/*                                                                   */
/* Descriptive Name       :  Database Server Exit Program structures */
/*                                                                   */
/* 5716-SS1  (C) Copyright IBM Corp. 1995.                           */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: This include defines the parameter structures for    */
/*              the four exit points defined for the database        */
/*              server.                                              */
/*                                                                   */
/*               1) QIBM_QZDA_INIT format ZDAI0100                   */
/*                    Used when the database server is started       */
/*                                                                   */
/*               2) QIBM_QZDA_NDB1 format ZDAD0100                   */
/*                    Used for all native database requests, except  */
/*                    the Add Library List request                   */
/*                  QIBM_QZDA_NDB1 format ZDAD0200                   */
/*                    Used for the native database Add Library List  */
/*                    request                                        */
/*                                                                   */
/*               3) QIBM_QZDA_ROI1 format ZDAR0100                   */
/*                    Used for all retrieve object information       */
/*                    requests, except the Foreign and Primary       */
/*                    Key requests                                   */
/*                  QIBM_QZDA_ROI1 format ZDAR0200                   */
/*                    Used for the retrieve object information       */
/*                    Foreign and Primary Key requests               */
/*                                                                   */
/*               4) QIBM_QZDA_SQL1 format ZDAQ0100                   */
/*                    Used for SQL requests of 512 bytes or less     */
/*                  QIBM_QZDA_SQL1 format ZDAQ0200                   */
/*                    Used for SQL requests of more than 512 bytes   */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qzda_Init_Format_t                                */
/*                 Qzda_NDB_Format1_t                                */
/*                 Qzda_NDB_Format2_t                                */
/*                 Qzda_ROI_Format1_t                                */
/*                 Qzda_ROI_Format2_t                                */
/*                 Qzda_SQL_Format_t                                 */
/*                 Qzda_SQL_Format2_t                                */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON    LEVEL DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- --------- ----- ------ --------- -------------------------   */
/* $A0= P3978167  3D60  950210 ROCHESTER:New Include                 */
/* $A1= P3613759  3D70  960314 M S Moore:Add new SQL format          */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef EZDAEP_h
 #define EZDAEP_h

 /* Server ID constants */

 #define QZDA_DB_SERVER_INIT_ID  "*SQL "  /* DB server init ID       */
 #define QZDA_DB_SERVER_NDB_ID   "*NDB "  /* DB server NDB ID        */
 #define QZDA_DB_SERVER_ROI_ID   "*ROI "  /* DB server ROI ID        */
 #define QZDA_DB_SERVER_SQL_ID   "*SQL "  /* DB server SQL ID        */


 /* Format name constants */

 #define QZDA_DB_INIT_FORMAT "ZDAI0100"   /* DB server init format   */
 #define QZDA_DB_NDB1_FORMAT "ZDAD0100"   /* DB server NDB1 format   */
 #define QZDA_DB_NDB2_FORMAT "ZDAD0200"   /* DB server NDB2 format   */
 #define QZDA_DB_ROI1_FORMAT "ZDAR0100"   /* DB server ROI1 format   */
 #define QZDA_DB_ROI2_FORMAT "ZDAR0200"   /* DB server ROI2 format   */
 #define QZDA_DB_SQL_FORMAT  "ZDAQ0100"   /* DB server SQL format    */
 #define QZDA_DB_SQL2_FORMAT "ZDAQ0200"   /* DB server SQL2 format
                                                                 @A1A*/

 /* Function ID constants for init portion of the database server    */

 #define QZDA_INIT_FUNCTION  0x0000       /* Init function ID        */


 /* Function ID constants for the NDB portion of the database server */

 #define QZDA_CRT_SOURCE_FILE   0x1800 /* Create source file request */
 #define QZDA_CRT_BASED_ON_FILE 0x1801 /* Create based on file rqst  */
 #define QZDA_ADD_FILE_MEMBER   0x1802 /* Add file member request    */
 #define QZDA_CLEAR_FILE_MEMBER 0x1803 /* Clear file member request  */
 #define QZDA_DLT_FILE_MEMBER   0x1804 /* Delete file member request */
 #define QZDA_OVERRIDE_FILE     0x1805 /* Override DB file request   */
 #define QZDA_DLT_FILE_OVERRIDE 0x1806 /* Dlt DB file override rqst  */
 #define QZDA_CRT_SAVE_FILE     0x1807 /* Create save file request   */
 #define QZDA_CLEAR_SAVE_FILE   0x1808 /* Clear save file request    */
 #define QZDA_DLT_FILE          0x1809 /* Delete file request        */
 #define QZDA_ADD_LIBRARY_LIST  0x180C /* Add library list request   */


 /* Function ID constants for the ROI portion of the database server */

 #define QZDA_LIBRARY_INFO       0x1800 /* Rtv library info request  */
 #define QZDA_REL_DATABASE_INFO  0x1801 /* Rtv relational DB request */
 #define QZDA_SQL_PACK_INFO      0x1802 /* Rtv SQL package request   */
 #define QZDA_SQL_PACK_STMT_INFO 0x1803 /* Rtv SQL package stmt rqst */
 #define QZDA_FILE_INFO          0x1804 /* Rtv file information rqst */
 #define QZDA_FILE_MEMBER_INFO   0x1805 /* Rtv file member info rqst */
 #define QZDA_RECORD_FORMAT_INFO 0x1806 /* Rtv record format request */
 #define QZDA_FIELD_INFO         0x1807 /* Rtv field info request    */
 #define QZDA_INDEX_INFO         0x1808 /* Rtv index info request    */
 #define QZDA_FOREIGN_KEY_INFO   0x1809 /* Rtv foreign key request   */
 #define QZDA_PRIMARY_KEY_INFO   0x180A /* Rtv primary key request   */
 #define QZDA_SPECIAL_COLUMN_INFO 0x180B /* Rtv special column rqst  */


 /* Function ID constants for the SQL portion of the database server */

 #define QZDA_SQL_PREPARE         0x1800 /* Prepare request          */
 #define QZDA_SQL_DESCRIBE        0x1801 /* Describe request         */
 #define QZDA_DESC_PARM_MARKERS   0x1802 /* Describe parm marker rqst*/
 #define QZDA_PREPARE_DESCRIBE    0x1803 /* Prepare/describe request */
 #define QZDA_OPEN_DESCRIBE       0x1804 /* Open/describe request    */
 #define QZDA_SQL_EXECUTE         0x1805 /* Execute request          */
 #define QZDA_EXECUTE_IMMEDIATE   0x1806 /* Execute immediate request*/
 #define QZDA_SQL_COMMIT          0x1807 /* Commit request           */
 #define QZDA_SQL_ROLLBACK        0x1808 /* Rollback request         */
 #define QZDA_SQL_CONNECT         0x1809 /* Connect request          */
 #define QZDA_SQL_CLOSE           0x180A /* Close request            */
 #define QZDA_SQL_FETCH           0x180B /* Fetch request            */
 #define QZDA_STREAM_FETCH        0x180C /* Stream fetch request     */
 #define QZDA_PREPARE_EXECUTE     0x180D /* Prepare/execute request  */
 #define QZDA_OPEN_DESCRIBE_FETCH 0x180E /* Open/describe/fetch rqst */
 #define QZDA_CRT_CLEAR_PACKAGE   0x180F /* Create/clear package rqst*/
 #define QZDA_CLEAR_PACKAGE       0x1810 /* Clear package request    */
 #define QZDA_DELETE_PACKAGE      0x1811 /* Delete package request   */
 #define QZDA_EXECUTE_OPEN_DESC   0x1812 /* Execute or open/desc rqst*/
 #define QZDA_END_STREAM_FETCH    0x1813 /* End stream fetch request */


 /********************************************************************/
 /*  Typedef for the database init exit point format                 */
 /********************************************************************/

 typedef _Packed struct Qzda_Init_Format {
       char  User_Profile[10];         /* User profile name          */
       char  Server_ID[10];            /* Server identifier          */
       char  Format_Nam