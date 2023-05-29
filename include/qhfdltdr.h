 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFDLTDR                                   */
 /*                                                                */
 /* Descriptive Name: Delete Directory API                         */
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
 /* Description: The Delete Direcotry API deletes a single, empty  */
 /*              directory.                                        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QHFDLTDR                              */
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

 #ifndef QHFDLTDR_h
 #define QHFDLTDR_h

 /******************************************************************/
 /*  Prototype for QHFDLTDR API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFDLTDR,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFDLTDR(void *,           /* Path name                      */
               int,              /* Length of path name            */
               void *);          /* Error code                     */

 #endif
