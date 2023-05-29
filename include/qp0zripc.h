 #ifndef __qp0zripc_h
 #define __qp0zripc_h
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QP0ZRIPC                                     */
 /*                                                                */
 /* Descriptive Name: Retrieve detailed information about an       */
 /*                   interprocess communication object.           */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QP0ZRIPC API generates detailed information   */
 /*              for a single IPC object based on specified        */
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
 /* Header Files Included: QP0ZIPC                                 */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                  Qp0z_Ripc_RSST0100_t                          */
 /*                  Qp0z_Ripc_RMSQ0100_t                          */
 /*                  Qp0z_Ripc_RSHM0100_t                          */
 /*                  Qp0z_Ripc_MessageEnt_t                        */
 /*                  Qp0z_Ripc_WaitOnRcv_t                         */
 /*                  Qp0z_Ripc_WaitOnSnd_t                         */
 /*                  Qp0z_Ripc_AttachInfo_t                        */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QP0ZRIPC                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95191       4D20  970401 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


 #ifndef __qp0zipc_h
 #include <qp0zipc.h>
 #endif
 /******************************************************************/
 /* Prototype for call to QP0ZRIPC API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
 #pragma linkage(QP0ZRIPC,OS,nowiden)
 #else
 extern "OS"
 #endif

   void   QP0ZRIPC  (void *,     /* Receiver variable              */
                     int   ,     /* Length of receiver variable    */
                     char *,     /* Format name                    */
                     int   ,     /* Identifier                     */
                     void *      /* Error code                     */
                     );



 /*******************************************************************/
 /* Type Definition for Retrieve an IPC object                      */
 /* Format name:        RSST0100                                    */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Ripc_RSST0100
 {
     int                     Bytes_Returned;
     int                     Bytes_Available;
     Qp0z_ipc_SemaphoreSet_t Basic_Info;
 } Qp0z_Ripc_RSST0100_t;

 /********************************************************************/
 /* Type definition for each individual message on the message queue */
 /********************************************************************/
 typedef _Packed struct Qp0z_Ripc_MessageEnt
 {
     int                Message_Type;
     int                Message_Size;
 } Qp0z_Ripc_MessageEnt_t;
 /*******************************************************************/
 /* Type definition for each job waiting to receive a message       */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Ripc_WaitOnRcv
 {
     int                   Message_Type;
     Qp0z_ipc_JobInfo_t    Waiting_Job;
 } Qp0z_Ripc_WaitOnRcv_t;

 /*******************************************************************/
 /* Type definition for each job waiting to send a message          */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Ripc_WaitOnSnd
 {
     int                   Message_Size;
     Qp0z_ipc_JobInfo_t    Waiting_Job;
 } Qp0z_Ripc_WaitOnSnd_t;

 /*******************************************************************/
 /* Type Definition for Retrieve an IPC object                      */
 /* Format name:        RMSQ0100                                    */
 /*   NOTE:  This type definition only defines fixed portions of    */
 /*          the format.  Any varying length fields must be         */
 /*          specified by the user.                                 */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Ripc_RMSQ0100
 {
     int                     Bytes_Returned;
     int                     Bytes_Available;
     Qp0z_ipc_MessageQueue_t Basic_Info;
     Qp0z_ipc_JobInfo_t      Last_msgsnd_Job;
     pid_t                   Last_msgsnd_Pid;
     Qp0z_ipc_JobInfo_t      Last_msgrcv_Job;
     pid_t                   Last_msgrcv_Pid;
     int                     Message_Info_Offset;
     int                     Message_Info_Size;
     int                     Rcv_Waiter_Offset;
     int                     Rcv_Waiter_Size;
     int                     Snd_Waiter_Offset;
     int                     Snd_Waiter_Size;
   /*Qp0z_Ripc_MessageEnt_t  msgs[1]; */         /* VARYING LENGTH */
   /*Qp0z_Ripc_WaitOnRcv_t   rcvWaiters[1]; */    /* VARYING LENGTH */
   /*Qp0z_Ripc_WaitOnSnd_t   sndWaiters[1]; */    /* VARYING LENGTH */
 } Qp0z_Ripc_RMSQ0100_t;

 /*******************************************************************/
 /* Type definition for each job attached to the shared memory      */
 /*******************************************************************/
 typedef _Packed stru