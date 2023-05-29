 #ifndef __qp0zolip_h
 #define __qp0zolip_h
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QP0ZOLIP                                     */
 /*                                                                */
 /* Descriptive Name: Open List of interprocess communication      */
 /*                   objects.                                     */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1997,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QP0ZOLIP API generates a list of IPC objects  */
 /*              and descriptive information based on specified    */
 /*              selection parameters.                             */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This macro/include is a CUE.                 */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: QP0ZIPC.                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                  Qp0z_Olipc_FilterInfo_t                       */
 /*                  Qp0z_Olipc_LSST0100_t                         */
 /*                  Qp0z_Olipc_LMSQ0100_t                         */
 /*                  Qp0z_Olipc_LSHM0100_t                         */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QP0ZOLIP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95191       4D20  970401 ROCH      New Include           */
 /* $B1= D95601       4D40  980428 ROCH      Add Named and Unnamed */
 /*                                          semaphore support     */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


 #ifndef __qp0zipc_h
 #include <qp0zipc.h>
 #endif

 /******************************************************************/
 /* Prototype for call to QP0ZOLIP API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
 #pragma linkage(QP0ZOLIP,OS,nowiden)
 #else
 extern "OS"
 #endif

   void   QP0ZOLIP  (void *,     /* Receiver variable              */
                     int   ,     /* Length of receiver variable    */
                     void *,     /* List information               */
                     int   ,     /* Number of records to return    */
                     char *,     /* Format name                    */
                     void *,     /* Filter information             */
                     char *,     /* Filter format name             */
                     void *      /* Error code                     */
                     );



 /*******************************************************************/
 /* Type Definition for Filter Field Information                    */
 /*   NOTE:  This type definition only defines fixed portions of    */
 /*          the format.  Any varying length fields must be         */
 /*          specified by the user.                                 */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Olipc_FilterInfo
 {
     char  Filter_On_Key;
     char  Reserved[3];
     key_t Minimum_Key;
     key_t Maximum_Key;
     int   Offset_To_Owners;
     int   Number_Of_Owners;
     int   Offset_To_Creators;
     int   Number_Of_Creators;
   /*char  OwnerList[10][1];*/                    /* VARYING LENGTH */
   /*char  CreatorList[10][1];*/                  /* VARYING LENGTH */
 } Qp0z_Olipc_FilterInfo_t;

 /*******************************************************************/
 /* Type Definition for the Open list of IPC objects                */
 /* Format name:        LSST0100                                    */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Olipc_LSST0100
 {
     Qp0z_ipc_SemaphoreSet_t Basic_Info;
 } Qp0z_Olipc_LSST0100_t;


 /*******************************************************************/
 /* Type Definition for the Open list of IPC objects                */
 /* Format name:        LMSQ0100                                    */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Olipc_LMSQ0100
 {
     Qp0z_ipc_MessageQueue_t Basic_Info;
 } Qp0z_Olipc_LMSQ0100_t;

 /*******************************************************************/
 /* Type Definition for the Open list of IPC objects                */
 /* Format name:        LSHM0100                                    */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Olipc_LSHM0100
 {
     Qp0z_ipc_SharedMemory_t Basic_Info;
 } Qp0z_Olipc_LSHM0100_t;


 /*******************************************************************/
 /* Type Definition for the Waiter information                  @B1A*/
 /*******************************************************************/

 typedef _Packed struct Qp0z_Olipc_Waiter {
     Qp0z_ipc_JobInfo_t Waiting_Job;
     Qp0z_ipc_ThreadInfo_t Waiting_Thread ;
 } Qp0z_Olipc_WaiterInfo_t;


 /*******************************************************************/
 /* Type Definition for Open list of named semaphores               */
 /* Format name: LNSM0100                                           */
 /* NOTE: This type definition only defines fixed portions of       */
 /*       the format. Any varying length fields must be             */
 /*       specified by the user.                                @B1A*/
 /*******************************************************************/
 typedef _Packed struct Qp0z_Olipc_LNSM0100
 {
     int Entry_Length;
     int Value;
     int Max_Value;
     int Waiters_Offset;
     int Num_Waiters;
     int Name_Offset;
     int Name_Size;
     char Title[16];
     char Marked_Deleted;
     char Auth_Delete;
     char Creator[10];
     char Creator_Group[10];
     Qp0z_ipc_Perms_t Perms;
     Qp0z_ipc_JobInfo_t Last_Post_Job;
     Qp0z_ipc_ThreadInfo_t Last_Post_Thread;
     Qp0z_ipc_JobInfo_t Last_Wait_Job;
     Qp0z_ipc_ThreadInfo_t Last_Wait_Thread;
     /*Qp0z_Olipc_WaiterInfo_t Waiters[];*/       /* VARYING LENGTH */
     /*char * Name[];*/                     /* null terminated name */
 } Qp0z_Olipc_LNSM0100_t;



 /*******************************************************************/
 /* Type Definition for open list of unnamed semaphores             */
 /* Format name: LUSM0100                                           */
 /* NOTE: This type definition only defines fixed portions of       */
 /* the format. Any varying length fields must be                   */
 /* specified by the user.                                      @B1A*/
 /*******************************************************************/
 typedef _Packed struct Qp0z_Olipc_LUSM0100
 {
     int Entry_Length;
     int Value;
     int Max_Value;
     int Waiters_Offset;
     int Num_Waiters;
     int reserved;
     char Title[16];
     Qp0z_ipc_JobInfo_t Last_Post_Job;
     Qp0z_ipc_ThreadInfo_t Last_Post_Thread;
     Qp0z_ipc_JobInfo_t Last_Wait_Job;
     Qp0z_ipc_ThreadInfo_t Last_Wait_Thread;
     /*Qp0z_Olipc_WaiterInfo_t Waiters[];*/      /* VARYING LENGTH */
 } Qp0z_Olipc_LUSM0100_t;

#endif

