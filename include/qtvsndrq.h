 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTVSNDRQ                                   */
 /*                                                                */
 /* Descriptive Name: Send Request for OS/400 Function.            */
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
 /* Description: The Send Request for OS/400 Function (QTVSNDRQ)   */
 /*              API sends a request to the operating system to    */
 /*              perform a particular function.                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTVSNDRQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 LUPA:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QTVSNDRQ_h
 #define QTVSNDRQ_h

 /******************************************************************/
 /*  Prototype for calling Virtual Terminal API QTVSNDRQ           */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage(QTVSNDRQ,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QTVSNDRQ (void *,           /* Virtual terminal handle       */
                int,              /* Request type                  */
                void *);          /* Error code                    */

#endif
