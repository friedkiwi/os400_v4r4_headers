 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCMDCHK                                    */
 /*                                                                */
 /* Descriptive Name: Command Check API                            */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: QCMDCHK API performs syntax checking for a single */
 /*              command, and optionally prompts for the command.  */
 /*                                                                */
 /* Header Files Included: h/decimal                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QCMDCHK                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940423 MOREY:    New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QCMDCHK_h
 #define QCMDCHK_h

 #include <decimal.h>

 /******************************************************************/
 /* Prototype for calling Check Command Syntax API QCMDEXC OPM     */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QCMDCHK,OS,nowiden)
 #else
    extern "OS"
 #endif
    void QCMDCHK (void *,        /* Command string                 */
                  _Decimal(15, 5),/* Length of command string      */
                  ...);          /* Optional parameter:
                                      IGC process control          */

 #endif
