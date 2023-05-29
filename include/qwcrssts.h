 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRSSTS                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve System Status API                   */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve System Status API allows you to      */
 /*              retrieve a group of statistics that represents    */
 /*              the current status of the system.                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwc_SSTS0100_t                                */
 /*                  Qwc_SSTS0200_t                                */
 /*                  Qwc_Rssts_Pool_Info_t                         */
 /*                  Qwc_SSTS0300_t                                */
 /*                                                                */
 /* Function Prototype List: QWCRSSTS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $01= P3960305     3D70  940715 TCR    :  Add restricted state  */
 /*                                          to the 200 format     */
 /* $02= P3635035     4D10  961211 JAH    :  fix brackets and      */
 /*                                          array in 200 format   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRSSTS_h
 #define QWCRSSTS_h

 /******************************************************************/
 /*  Prototype for QWCRSSTS API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCRSSTS,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCRSSTS(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               char *,           /* Reset status statistics        */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the SSTS0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_SSTS0100
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Current_Date_Time[8];
       char System_Name[8];
       int  Users_Currently_Signed_On;
       int  Users_Signed_Off;
       int  Users_Suspended_Sys_Request;
       int  Users_Suspended_Group_Job;
       int  Users_Signed_Off_Printer_Output;
       int  Batch_Jobs_Waiting;
       int  Batch_Jobs_Running;
       int  Batch_Jobs_Held;
       int  Batch_Jobs_Ending;
       int  Batch_Jobs_Scheduled;
       int  Batch_Jobs_Held_On_Job_Q;
       int  Batch_Jobs_On_Held_Job_Q;
       int  Batch_Jobs_Unassigned_Job_Q;
       int  Batch_Jobs_Ended_Printer_Output;
    } Qwc_SSTS0100_t;

 /******************************************************************/
 /* Type Definition for the SSTS0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_SSTS0200
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Current_Date_Time[8];
       char System_Name[8];
       char Elapsed_Time[6];
       char Restricted_State[1];
       char Reserved[1];
       int  Pct_Processing_Unit_Used;
       int  Jobs_In_System;
       int  Pct_Perm_Addresses;
       int  Pct_Temp_Addresses;
       int  System_ASP;
       int  Pct_System_ASP_used;
       int  Total_Aux_Storage;
       int  Current_Unprotect_Storage;
       int  Maximum_Unprotect_Storage;
    } Qwc_SSTS0200_t;

 /******************************************************************/
 /* Type Definition for the SSTS0300 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwc_Rssts_Pool_Info
    {
       int  System_Pool;
       int  Pool_Size;
       int  Reserved_Size;
       int  Maximum_Active_Jobs;
       int  Database_Faults;
       int  Database_Pages;
       int  Nondatabase_Faults;
       int  Nondatabase_Pages;
       int  Active_Wait;
       int  Wait_ineligible;
       int  Active_ineligible;
       char Pool_Name[10];
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
       char Paging_Option[10];
    } Qwc_Rssts_Pool_Info_t;

 typedef _Packed struct Qwc_SSTS0300
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Current_Date_Time[8];
       char System_Name[8];
       char Elapsed_Time[6];
       char Reserved[2];
       int  Number_Pools;
       int  Offset_Pool_Info;
       int  Length_Pool_Info;
     /*char Reserved2[];*/       /* Varying length                 */
     /*Qwc_Rssts_Pool_Info_t Pool_Info[];*//* Varying length       */
    } Qwc_SSTS0300_t;

 #endif
