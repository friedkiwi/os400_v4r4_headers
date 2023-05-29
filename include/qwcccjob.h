 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCCCJOB                                   */
 /*                                                                */
 /* Descriptive Name: Change Current Job                           */
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
 /* Description: The Change Current Job API lets you change        */
 /*              information for the current job.                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QWCCCJOB                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $01= P3985077     3D60  950317 SUDARMAN: Change header file    */
 /*                                          declaration           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCCCJOB_h
 #define QWCCCJOB_h

 #include <qus.h>                                           /* @01C*/

 /******************************************************************/
 /*  Prototype for QWCCCJOB API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCCCJOB,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCCCJOB(void *,           /* Changed job information        */
               void *);          /* Error code                     */

 #endif
