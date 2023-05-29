 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSY                                        */
 /*                                                                */
 /* Descriptive Name: Common Structures Used by Security API's.    */
 /*                                                                */
 /* 5763-SS1, 5769-SS1  (C) Copyright IBM Corp. 1994,1998          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Defines common structures and variables used      */
 /*              by Security API's.                                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Qualified_Name_T                           */
 /*                 Qsy_Special_Authorities_T                      */
 /*                 Qsy_Date_T                                     */
 /*                 Qsy_Time_T                                     */
 /*                 Qsy_Date_Time_T                                */
 /*                 Qsy_User_Options_T                             */
 /*                 Qsy_Audit_Level_T                              */
 /*                 Qsy_Path_Info_T                                */
 /*                 Qsy_Supp_Group_Name_T                          */
 /*                 Qsy_OPM_Attr_Data_T                            */
 /*                 Qsy_OPM_Attr_Descr_T                           */
 /*                 Qsy_OPM_Attr_Info_T                            */
 /*                 Qsy_App_Control_Rec_T                          */
 /*                 Qsy_App_Controls_T                             */
 /*                 Qsy_App_Qual_Message_File_T                    */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940110 ROCH:     New Include           */
 /* $A1= P3985947     3D60  950414 ROCH:     Add optical to        */
 /*                                          Qsy_Audit_Level.      */
 /* $A2= D9502400     4D20  970521 ROCH:     Add attribute support.*/
 /* $A3= D9524900     4D20  970618 ROCH:     Add X509 cert support.*/
 /* $A4= D9714500     4D40  980819 ROCH:     Add structure for     */
 /*                                          Application controls. */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


 #ifndef _sy_h
 #define _sy_h

/*******************************************************************/
/* Include for SY API's                                            */
/*******************************************************************/
 typedef struct Qsy_Qualified_Name
    {
       char  Name[10];
       char  Library[10];
    } Qsy_Qual_Name_T;

 typedef struct Qsy_Special_Authorities
    {
       char  All_Object;
       char  Security_Admin;
       char  Job_Control;
       char  Spool_Control;
       char  Save_System;
       char  Service;
       char  Audit;
       char  Io_Sys_Cfg;
       char  Reserved[7];
    } Qsy_Special_Auth_T;

 typedef struct Qsy_Date
    {
       char  Year[2];
       char  Month[2];
       char  Day[2];
    } Qsy_Date_T;

 typedef struct Qsy_Time
    {
       char  Hour[2];
       char  Minutes[2];
       char  Seconds[2];
    } Qsy_Time_T;

 typedef struct Qsy_Date_Time
    {
       char  Century;
       Qsy_Date_T Date;
       Qsy_Time_T Time;
    } Qsy_Date_Time_T;

 typedef struct Qsy_User_Options
    {
       char  Show_Keywords;
       char  Show_Details;
       char  Fullscreen_Help;
       char  Show_Status;
       char  Noshow_Status;
       char  Roll_Key;
       char  Print_Message;
       char  Reserved[29];
    } Qsy_User_Optn_T;

 typedef struct Qsy_Audit_Level
    {
       char  Command_Strings;
       char  Create;
       char  Delete;
       char  Job_Data;
       char  Object_Mgt;
       char  Office_Services;
       char  Program_Adopt;
       char  Save_Restore;
       char  Security;
       char  Service_Tools;
       char  Spool_File_Data;
       char  System_Management;
       char  Optical;
       char  Reserved[51];
    } Qsy_Audit_Level_T;

/*******************************************************************/
/* Structure for Path Information                                  */
/****                                                           ****/
/* *****************************************************************/
/* NOTE:  The following type definition only defines the fixed     */
/*        portion of the format. Any varying length field will     */
/*        have to be defined by the user.                          */
/*******************************************************************/
 typedef _Packed struct Qsy_Path_Info
    {
       int   CCSID;
       char  Cntryid[2];
       char  Langid[3];
       char  Reserved[3];
       int   Flag;
       int   Numbytes;
       char  Delimiter[2];
       char  Reserved2[10];
  /*char Qsy_Path_Name[]; */  /* Varying length                 */
    } Qsy_Path_Info_T;

 typedef char Qsy_Supp_Group_Name_T[15][10];

/*******************************************************************/
/* Structures for validation list attributes.                      */
/*******************************************************************/
 #define QSY_IN_VLDL        0
 #define QSY_SYSTEM_ATTR    0
 #define QSY_VFY_ONLY      '0'
 #define QSY_VFY_FIND      '1'
 #define QSY_ENCRYPT_DATA  "QsyEncryptData"
 #define QSY_X509_CERT     "QsyX509Cert"

 typedef struct Qsy_OPM_Attr_Data
 {
   int                     Attr_CCSID;
   int                     Attr_Length;
   char                    Reserved[8];
 /*char                    Attr_Value[];  */ /* varying length.    */
 } Qsy_OPM_Attr_Data_T;

 typedef struct Qsy_OPM_Attr_Descr
 {
   int                     Entry_Length;
   int                     Attr_Location;
   int                     Attr_Type;
   int                     Displacement_to_Attr_ID;
   int                     Length_of_Attr_ID;
   int                     Displacement_to_Attr_Data;
   int                     Length_of_Attr_Data;
 /*char                    Attr_ID[]; */ /* varying length.      */
 /*Qsy_OPM_Attr_Data_T     Attr_Data; */ /* varying length.      */
 } Qsy_OPM_Attr_Descr_T;

 typedef struct Qsy_OPM_Attr_Info
 {
   int                     Number_Attrs;
 /*Qsy_OPM_Attr_Descr_T    Attr_Descr[];*/ /* varying length.      */
 } Qsy_OPM_Attr_Info_T;

/*******************************************************************/
/*                                                                 */
/* Structures for Application Controls.                            */
/*                                          