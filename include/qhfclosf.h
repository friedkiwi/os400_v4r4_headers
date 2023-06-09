 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFCLOSF                                   */
 /*                                                                */
 /* Descriptive Name: Close Stream File API                        */
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
 /* Description: The Close Stream File API closes the specified    */
 /*              stream file, releasing any locks on the file or   */
 /*              ranges within the file.                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QHFCLOSF                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QHFCLOSF_h
 #define QHFCLOSF_h

 /******************************************************************/
 /*  Prototype for QHFCLOSF API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFCLOSF,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFCLOSF(void *,           /* Open directory handle          */
               void *);          /* Error code                     */

 #endif
