 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZLSRMS                                    */
 /*                                                                */
 /* Descriptive Name: Remove NetServer Share                       */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the QZLSRMS API.          */
 /*                                                                */
 /* Header Files Included: H/QZLSRMS                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSRMS                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 BRIDGET   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QZLSRMS_h
 #define QZLSRMS_h

 #ifdef __ILEC400__
      #pragma linkage (QZLSRMS,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QZLSRMS API.                             */
 /******************************************************************/
 void QZLSRMS(char *ShareName,
              char *ErrorCode);
 #endif
