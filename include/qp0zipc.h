 #ifndef __qp0zipc_h
 #define __qp0zipc_h
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QP0ZIPC                                      */
 /*                                                                */
 /* Descriptive Name: Common include for interprocess              */
 /*                   communications APIs                          */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Common include for interprocess communications    */
 /*              APIs.                                             */
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
 /* Header Files Included: TYPES.                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                  Qp0z_ipc_JobInfo_t                            */
 /*                  Qp0z_ipc_Perms_t                              */
 /*                  Qp0z_ipc_Time                                 */
 /*                  Qp0z_ipc_Profs_t                              */
 /*                  Qp0z_ipc_SemaphoreSet_t                       */
 /*                  Qp0z_ipc_MessageQueue_t                       */
 /*                  Qp0z_ipc_SharedMemory_t                       */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95191       4D20  970401 ROCH      New Include           */
 /* $B1= D95601       4D40  980504 ROCH      Added ThreadInfo      */
 /* $B2= D95944       4D40  980617 ROCH      Teraspace Changes     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef __types_h
 #include <sys/types.h>
 #endif
 /********************************************************************/
 /* Type definition for specifying the qualified job identifier.     */
 /********************************************************************/
 typedef _Packed struct Qp0z_ipc_JobInfo
 {
     char  Job_Name[10];
     char  User[10];
     char  Number[6];
     char  Reserved[2];
 } Qp0z_ipc_JobInfo_t;

 /********************************************************************/
 /* Type definition for specifying the thread identifier.        @B1A*/
 /********************************************************************/
 typedef _Packed struct Qp0z_ipc_ThreadInfo
 {
     char  Thread[16];
 } Qp0z_ipc_ThreadInfo_t;

 /********************************************************************/
 /* Type definition for specifying the permissions to an IPC object  */
 /********************************************************************/
 typedef _Packed struct Qp0z_ipc_Perms
 {
     char              Owner_Read;
     char              Owner_Write;
     char              Group_Read;
     char              Group_Write;
     char              General_Read;
     char              General_Write;
 } Qp0z_ipc_Perms_t;

 /********************************************************************/
 /* Type definition to specify the time an IPC action  occured       */
 /********************************************************************/
 typedef _Packed struct Qp0z_ipc_Time
 {
     char              Century;
     char              Date[6];
     char              Time[6];
     char              Milliseconds[3];
 } Qp0z_ipc_Time_t;

 /********************************************************************/
 /* Type definition to supply the owner, group, creator and          */
 /* creator's group.                                                 */
 /********************************************************************/
 typedef _Packed struct Qp0z_ipc_Profs
 {
     char              owner[10];
     char              group[10];
     char              creator[10];
     char              cgroup[10];
 } Qp0z_ipc_Profs_t;

 /********************************************************************/
 /* Type definition for the basic information that is returned for   */
 /* a semaphore set.                                                 */
 /********************************************************************/
 typedef _Packed struct Qp0z_ipc_SemaphoreSet
 {
     int                Identifier;
     key_t              Key;
     int                Num_Semaphores;
     char               Damaged;
     Qp0z_ipc_Perms_t   Perms;
     char               Auth_Delete;
     Qp0z_ipc_Time_t    oTime;
     Qp0z_ipc_Time_t    cTime;
     Qp0z_ipc_Profs_t   Profs;
 } Qp0z_ipc_SemaphoreSet_t;

 /********************************************************************/
 /* Type definition for the basic information that is returned for   */
 /* a message queue.                                                 */
 /********************************************************************/
 typedef _Packed struct Qp0z_ipc_MessageQueue
 {
     int                Identifier;
     key_t              Key;
     char               Damaged;
     Qp0z_ipc_Perms_t   Perms;
     char               Auth_Delete;
     int                Num_Msgs;
     int                Total_Msg_Size;
     int                Max_Msg_Size;
     int                Num_Waiters_Rcv;
     int                Num_Waiters_Snd;
     Qp0z_ipc_Time_t    rTime;
     Qp0z_ipc_Time_t    sTime;
     Qp0z_ipc_Time_t    cTime;
     Qp0z_ipc_Profs_t   Profs;
 } Qp0z_ipc_MessageQueue_t;

 /********************************************************************/
 /* Type definition for the basic information that is ret