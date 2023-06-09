 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFFRCSF                                   */
 /*                                                                */
 /* Descriptive Name: Force Stream File API                        */
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
 /* Description: The Force Buffered Data API synchronously forces  */
 /*              buffered data and directory entry information out */
 /*              of main storage and into novolatile storage for   */
 /*              either a specific file or all files opened by a   */
 /*              job.                                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QHFFRCSF                              */
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

 #ifndef QHFFRCSF_h
 #define QHFFRCSF_h

 /******************************************************************/
 /*  Prototype for QHFFRCSF API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFFRCSF,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFFRCSF(void *,           /* Files to force                 */
               void *);          /* Error code                     */

 #endif
