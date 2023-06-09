 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLICHGLL                                   */
 /*                                                                */
 /* Descriptive Name: Change Library List API                      */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Change Library List API changes the current   */
 /*              library, the two product libraries and the user   */
 /*              part of the job's library list.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /* Function Prototype List: QLICHGLL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLICHGLL_h
 #define QLICHGLL_h

 /******************************************************************/
 /*  Prototype for QLICHGLL API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QLICHGLL,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QLICHGLL(void *,           /* Current library name           */
               void *,           /* First product library          */
               void *,           /* Second product library         */
               void *,           /* User library list names        */
               int,              /* Number of user library names   */
               void *);          /* Error code                     */

 #endif
