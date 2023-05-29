 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRMVM                                    */
 /*                                                                */
 /* Descriptive Name: Remove Nonprogram Message.                   */
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
 /* Description: The Remove Nonprogram Messages API removes        */
 /*              messages from nonprogram message queues.          */
 /*                                                                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHRMVM                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 DPOHLSON  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRMVM_h
 #define QMHRMVM_h

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRMVM              */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QMHRMVM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHRMVM (void *,           /* Qualified message queue name   */
               void *,           /* Message key                    */
               char *,           /* Messages to remove             */
               void *);          /* Error code                     */

 #endif
