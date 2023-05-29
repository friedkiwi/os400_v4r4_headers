 #ifndef __qp0zolsm_h
 #define __qp0zolsm_h
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QP0ZOLSM                                     */
 /*                                                                */
 /* Descriptive Name: Open list of semaphores in a semaphore set   */
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
 /* Description: The QP0ZOLSM API generates a list of semaphores   */
 /*              in a specific semaphore set, that is determined   */
 /*              by the selection parameters.                      */
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
 /*                  Qp0z_Olsem_Waiter_t                           */
 /*                  Qp0z_Olsem_LSEM0100_t                         */
 /*                                                                */
 /* Function Prototype List: QP0ZOLSM                              */
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
 /* Prototype for call to QP0ZOLSM API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
 #pragma linkage(QP0ZOLSM,OS,nowiden)
 #else
 extern "OS"
 #endif

   void   QP0ZOLSM  (void *,     /* Receiver variable              */
                     int   ,     /* Length of receiver variable    */
                     void *,     /* List information               */
                     int   ,     /* Number of records to return    */
                     char *,     /* Format name                    */
                     int   ,     /* Semaphore set identifier       */
                     void *      /* Error code                     */
                     );


 /*******************************************************************/
 /* Type definition for each job waiting on the semaphore value     */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Olsem_Waiter
 {
     int                   Wait_Value;
     Qp0z_ipc_JobInfo_t    Waiting_Job;
 } Qp0z_Olsem_Waiter_t;

 /*******************************************************************/
 /* Type Definition for the Open list of semaphores                 */
 /* Format name:        LSEM0100                                    */
 /*******************************************************************/
 typedef _Packed struct Qp0z_Olsem_LSEM0100
 {
     int                Entry_Length;
     int                Semaphore_Number;
     int                Value;
     int                Waiter_Array_Offset;
     int                Total_Waiters;
     int                Size_Of_Waiter;
     int                Waiters_For_Zero;
     int                Waiters_For_Pos;
     Qp0z_ipc_JobInfo_t Last_Change_Job;
     pid_t              Last_Change_Pid;
   /*Qp0z_Olsem_Waiter_t waiters[1]; */          /* VARYING LENGTH */
 } Qp0z_Olsem_LSEM0100_t;



#endif

