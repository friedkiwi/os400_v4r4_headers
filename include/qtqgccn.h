 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTQGCCN                                    */
 /*                                                                */
 /* Descriptive Name: Get CCSID for Normalization.                 */
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
 /* Description: The Get CCSID for Normalization API assists in    */
 /*              determining the CCSID for normalization given     */
 /*              two CCSIDs.                                       */
 /*                                                                */
 /* Header Files Included: H/QTQGCCN                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTQGCCN                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 MOREY:    New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QTQGCCN_h
 #define QTQGCCN_h

 #ifdef __ILEC400__
      #pragma linkage (QTQGCCN,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QTQGCCN API.                             */
 /******************************************************************/
 void QTQGCCN (int *,            /* CCSID1                         */
               int *,            /* CCSID2                         */
               int *,            /* CCSIDn                         */
               int *,            /* HINTV                          */
               void *);          /* FB                             */

 #endif
