 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/CDRCVRT                                    */
 /*                                                                */
 /* Descriptive Name: Convert Graphic Character Strings.           */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the CDRCVRT API.          */
 /*                                                                */
 /* Header Files Included: H/CDRCVRT                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: CDRCVRT                               */
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

 #ifndef CDRCVRT_h
 #define CDRCVRT_h

 #ifdef __ILEC400__
      #pragma linkage (CDRCVRT,OS)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling CDRCVRT API.                             */
 /******************************************************************/
 void CDRCVRT (int *,            /* CCSID1                         */
               int *,            /* ST1                            */
               char *,           /* S1                             */
               int *,            /* L1                             */
               int *,            /* CCSID2                         */
               int *,            /* ST2                            */
               int *,            /* GCCASN                         */
               int *,            /* L2                             */
               char *,           /* S2                             */
               int *,            /* L3                             */
               int *,            /* L4                             */
               void *);          /* FB                             */

 #endif
