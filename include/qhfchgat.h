 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFCHGAT                                   */
 /*                                                                */
 /* Descriptive Name: Change Directory Entry Attributes API        */
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
 /* Description: The Change Directory Entry Attributes API changes */
 /*              the attributes of a specified directory entry for */
 /*              an existing file or directory.                    */
 /*                                                                */
 /* Header Files Included: H/QHF                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.(Formats stored in QHF Include)           */
 /*                                                                */
 /* Function Prototype List: QHFCHGAT                              */
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

 #ifndef QHFCHGAT_h
 #define QHFCHGAT_h

 /******************************************************************/
 /* Includes for structures used by API                            */
 /******************************************************************/
 #include <qhf.h>

 /******************************************************************/
 /*  Prototype for QHFCHGAT API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFCHGAT,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFCHGAT(void *,           /* Path name                      */
               int,              /* Path name length               */
               void *,           /* Attribute information table    */
               int,              /* Length of attribute info table */
               void *);          /* Error code                     */

 #endif
