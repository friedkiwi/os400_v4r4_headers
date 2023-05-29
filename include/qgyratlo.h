 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYRATLO                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Objects Secured by Authorization    */
 /*                   List                                         */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1996                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Objects Secured by Authorization     */
 /*              List API puts a list of objects secured by an     */
 /*              authorization list into a receiver variable       */
 /*                                                                */
 /* Header Files Included: qgy.h                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_ATLO0100_List_T                            */
 /*                 Qgy_ATLO0110_List_T                            */
 /*                 Qgy_ATLO0200_List_T                            */
 /*                 Qgy_ATLO0210_List_T                            */
 /*                 Qgt_ATLO0300_List_T                            */
 /*                 Qgy_ATLO0400_List_T                            */
 /*                 Qgy_RATLO_List_Info_T                          */
 /*                 Qgy_RATLO_Section_Info_T                       */
 /*                                                                */
 /* Function Prototype List: QGYRATLO                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9444800     3P70  960920 BUDNIK :  New Include.          */
 /* $A1= D9450100     4D20  970422 KAS    :  Move some structures  */
 /*                                          to a new common       */
 /*                                          include, QGY.         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYRATLO_h
 #define QGYRATLO_h

 #include <qgy.h>                                            /*@A1A*/

  #ifdef __ILEC400__
       #pragma linkage (QGYRATLO,OS,nowiden)
  #else
       extern "OS"
  #endif

 /******************************************************************/
 /* Prototype for calling API QGYRATLO                             */
 /******************************************************************/
 void QGYRATLO (void *,          /* Receiver variable              */
                int   ,          /* Receiver variable length       */
                void *,          /* List information               */
                void *,          /* Section information            */
                int   ,          /* Number of records to return    */
                char *,          /* Format name                    */
                char *,          /* Authorization list name        */
                void *);         /* Error code                     */

 /******************************************************************/
 /* List information structure for QGYRATLO                        */
 /******************************************************************/
 typedef struct Qgy_RATLO_List_Info
    {
       int       Total_Records;
       int       Records_Returned;
       char      Request_Handle[4];
       int       Record_Length;
       char      Info_Complete;
       Qgy_Date_Time_T    Date_Time;
       char      List_Status_Indicator;
       char      Reserved;
       int       Returned_Info_Length;
       int       First_Buffer_Record;
       int       Reason_Code;
       char      Reserved2[36];
    } Qgy_RATLO_List_Info_T;

 /******************************************************************/
 /* Section information structure for QGYRATLO                     */
 /******************************************************************/
 typedef struct Qgy_RATLO_Section_Info
    {
       int     First_QSYS_Entry_Num;
       int     Num_QSYS_Objs;
       int     First_QDLS_Entry_Num;
       int     Num_QDLS_Objs;
       int     First_Dir_Entry_Num;
       int     Num_Dir_Objs;
       char    Reserved[40];
    } Qgy_RATLO_Section_Info_T;

 /******************************************************************/
 /* Record structure for ATLO0100 format                           */
 /******************************************************************/
 typedef struct Qgy_ATLO0100_List
    {
       Qgy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Auth_Holder;
    } Qgy_ATLO0100_List_T;

 /******************************************************************/
 /* Record structure for ATLO0110 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field must    */
 /*        be defined by the user.                                 */
 /******************************************************************/
 typedef struct Qgy_ATLO0110_List
    {
       int   Path_Name_Offset;
       int   Path_Name_Length;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Reserved;
 /*    Qgy_Path_Name_Info_T Path_Name;*/ /* Varying length         */
    } Qgy_ATLO0110_List_T;

 /******************************************************************/
 /* Record structure for ATLO0200 format                           */
 /******************************************************************/
 typedef struct Qgy_ATLO0200_List
    {
       Qgy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Object_Owner[10];
       char  Object_Attribute[10];
       char  Object_Text[50];
       char  Primary_Group[10];
    } Qgy_ATLO0200_List_T;

 /******************************************************************/
 /* Record structure for ATLO0210 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field will    */
 /*        have to be defined by the user.                         */
 /******************************************************************/
 typedef struct Qgy_ATLO0210_List
    {
       int   Path_Name_Offset;
       int   Path_Name_Length;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Object_Owner[10];
       char  Object_Attribute[10];
       char  Object_Text[50];
       char  Primary_Group[10];
       char  Reserved;
 /*    Qgy_Path_Name_Info_T Path_Name;*/ /* Varying length         */
    } Qgy_ATLO0210_List_T;

 /******************************************************************/
 /* Record structure for ATLO0300 format                           */
 /*******    