 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLYGETS                                    */
 /*                                                                */
 /* Descriptive Name: Get Space Status.                            */
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
 /* Description: The Get Space Status (QLYGETS) API obtains the    */
 /*              status of the space.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLYGETS                               */
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

#ifndef QLYGETS_h
 #define QLYGETS_h

 /*******************************************************************/
 /* Prototype for QLYGETS API.                                      */
 /*******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QLYGETS,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QLYGETS (char* ,         /* Status String                     */
               void* );        /* Error Structure                   */

#endif
