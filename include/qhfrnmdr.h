 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFRNMDR                                   */
 /*                                                                */
 /* Descriptive Name: Rename Directory API                         */
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
 /* Description: The Rename Directory API renames a single         */
 /*              directory.                                        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QHFRNMDR                              */
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

 #ifndef QHFRNMDR_h
 #define QHFRNMDR_h

 /******************************************************************/
 /*  Prototype for QHFRNMDR API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFRNMDR,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFRNMDR(void *,           /* Path name                      */
               int,              /* Path name length               */
               void *,           /* New directory name             */
               int,              /* New directory name length      */
               void *);          /* Error code                     */

 #endif
