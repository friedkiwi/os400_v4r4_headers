 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFSETSZ                                   */
 /*                                                                */
 /* Descriptive Name: Set Stream File Size API                     */
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
 /* Description: The Set Stream FIle Size API sets the size of a   */
 /*              stream file in bytes.                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QHFSETSZ                              */
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

 #ifndef QHFSETSZ_h
 #define QHFSETSZ_h

 /******************************************************************/
 /*  Prototype for QHFSETSZ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFSETSZ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFSETSZ(void *,           /* Open file handle               */
               unsigned int,     /* File size                      */
               void *);          /* Error code                     */

 #endif
