 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRTVUA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Users Authorized to an Object.      */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Users Authorized to an Object API    */
 /*              provides information about the users who are      */
 /*              authorized to an object.                          */
 /*                                                                */
 /* Header Files Included: H/QSYRTVUA                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_RTVUA_RTUA0100_t                           */
 /*                 Qsy_RTVUA_Feedback_Info_T                      */
 /*                                                                */
 /* Function Prototype List: QSYRTVUA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94766       3D70  960603 KARENS:   New Include           */
 /* $01= D94766       3P70  960715 BASMITH:  Add _Packed to        */
 /*                                          feedback structure.   */
 /*                                          Add user/group ind.   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYRTVUA_h
 #define QSYRTVUA_h

 /******************************************************************/
 /* Record structure for RTUA0100 format                           */
 /******************************************************************/
 typedef struct Qsy_RTVUA_RTUA0100
    {
       char  User_Name[10];
       char  User_Group_Indicator;
       char  Data_Authority[10];
       char  Authorization_List_Management;
       char  Object_Management;
       char  Object_Existence;
       char  Object_Alter;
       char  Object_Reference;
       char  Reserved1[10];
       char  Object_Operational;
       char  Data_Read;
       char  Data_Add;
       char  Data_Update;
       char  Data_Delete;
       char  Data_Execute;
       char  Reserved2[10];
    } Qsy_RTVUA_RTUA0100_t;

 /******************************************************************/
 /* Record structure for Return Records Feedback Information       */
 /******************************************************************/
 typedef _Packed struct Qsy_RTVUA_Feedback_Info
    {
       int   Bytes_Returned_Feedback_Info;
       int   Bytes_Available_Feedback_Info;
       int   Bytes_Returned_Receiver;
       int   Bytes_Available_Receiver;
       int   Number_of_Users;
       int   Entry_Length;
       char  Owner[10];
       char  Primary_Group[10];
       char  Authorization_List[10];
       char  Sensitivity_Level;
    } Qsy_RTVUA_Feedback_Info_T;


 /******************************************************************/
 /* Prototype for calling Security API QSYRTVUA                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRTVUA,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRTVUA (void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                Qsy_RTVUA_Feedback_Info_T *,
                                 /* Feedback information           */
                int,             /* Length of Feedback information */
                char *,          /* Format name                    */
                char *,          /* Object name                    */
                int,             /* Length of object name          */
                void *);         /* Error code                     */

 #endif
