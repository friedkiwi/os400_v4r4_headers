 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLYSETS                                    */
 /*                                                                */
 /* Descriptive Name: Set Space Status API.                        */
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
 /* Description: The Set Space Status (QLYSETS) API sets the       */
 /*              status of the space.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /*                                                                */
 /* Macros List:    None.                                          */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLYSETS                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940213 LUPA:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLYSETS_h
 #define QLYSETS_h

 /******************************************************************/
 /* Prototype for QLYSETS API.                                     */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QLYSETS,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QLYSETS ( char*,               /* Status Word                */
                void*);              /* Error Code Structure       */

#endif


