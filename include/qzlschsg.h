 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZLSCHSG                                   */
 /*                                                                */
 /* Descriptive Name: Change NetServer Guest User Profile          */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the QZLSCHSG API.         */
 /*                                                                */
 /* Header Files Included: H/QZLSCHSG                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSCHSG                              */
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

 #ifndef QZLSCHSG_h
 #define QZLSCHSG_h

 #ifdef __ILEC400__
      #pragma linkage (QZLSCHSG,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QZLSCHSG API.                            */
 /******************************************************************/
 void QZLSCHSG(char *GuestName,
               char *ErrorCode);
 #endif
