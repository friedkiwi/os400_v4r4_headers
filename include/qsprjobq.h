 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPRJOBQ                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Job Queue Information API           */
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
 /* Description: The Retrieve Job Queue Information API retrieves  */
 /*              information associated with a specific job queue. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qsp_JOBQ0100_t                                */
 /*                                                                */
 /* Function Prototype List: QSPRJOBQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSPRJOBQ_h
 #define QSPRJOBQ_h

 /******************************************************************/
 /*  Prototype for QSPRJOBQ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QSPRJOBQ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QSPRJOBQ(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Job queue name                 */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the JOBQ0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qsp_JOBQ0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Job_Queue_Name[10];
       char Job_Queue_Lib_Name[10];
       char Operator_Controlled[10];
       char Authority_Check[10];
       int  Number_Jobs;
       char Job_Queue_Status[10];
       char Subsystem_Name[10];
       char Text_Description[50];
    } Qsp_JOBQ0100_t;

 #endif
