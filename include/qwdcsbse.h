 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWDCSBSE                                   */
 /*                                                                */
 /* Descriptive Name: Change Subsystem Description Entries API     */
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
 /* Description: Change the subsystem description entries.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:   Qwd_Csbse_t                                  */
 /*                   Qwd_Csbse_Change_Info_t                      */
 /*                                                                */
 /* Function Prototype List: QWDCSBSE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97098       4D30  980227 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWDCSBSE_h
 #define QWDCSBSE_h


 /******************************************************************/
 /*  Key definitions for prestart job entry                        */
 /******************************************************************/
 #define QWD_PJE_USER_PROFILE    1
 #define QWD_PJE_START_JOBS      2
 #define QWD_PJE_INIT_NUM_JOBS   3
 #define QWD_PJE_THRESHOLD       4
 #define QWD_PJE_ADDL_NUM_JOBS   5
 #define QWD_PJE_MAX_NUM_JOBS    6
 #define QWD_PJE_JOB_NAME        7
 #define QWD_PJE_JOBD_NAME       8
 #define QWD_PJE_MAX_NUM_USES    9
 #define QWD_PJE_WAIT_FOR_JOB   10
 #define QWD_PJE_POOL_ID        11
 #define QWD_PJE_CLASS1_NAME    12
 #define QWD_PJE_CLASS1_JOBS    13
 #define QWD_PJE_CLASS2_NAME    14
 #define QWD_PJE_CLASS2_JOBS    15

 /******************************************************************/
 /*  Format definitions                                            */
 /******************************************************************/
 #define QWD_PJE_FORMAT          "SBSE0500"

 /******************************************************************/
 /* Type Definitions for Change Information                        */
 /*                                                                */
 /* NOTE: The following type definitions only define the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qwd_Csbse
 {
     int  Length_Field_Info_;
     int  Key_Field;
     int  Length_Data;
     /*char Data[];*/              /* Varying length               */
 } Qwd_Csbse_t;

 typedef _Packed struct Qwd_Csbse_Change_Info
 {
     int  Number_Key_Fields;
     /*Qwd_CSBSE_t Var_Record;*/   /* Varying length               */
 } Qwd_Csbse_Change_Info_t;


 /******************************************************************/
 /*  Prototype for QWDCSBSE API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
 #pragma linkage(QWDCSBSE,OS,nowiden)
 #else
    extern "OS"
 #endif
     void QWDCSBSE(void *,        /* Subsystem description name   */
                  void *,         /* Format name                  */
                  void *,         /* Entry Identifier             */
                  void *,         /* Change Information           */
                  void *);        /* Error code                   */

 #endif
