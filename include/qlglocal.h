 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLGLOCAL                                   */
 /*                                                                */
 /* Descriptive Name: Locale APIs.                                 */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QLGLOCAL service program.    */
 /*                                                                */
 /* Header Files Included: h/qlg                                   */
 /*                        h/qlglcl                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.  (Structures in QLG and QLGLCL)          */
 /*                                                                */
 /* Function Prototype List: QlgRetrieveExitInformation            */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2870900     3D60  941204 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGLOCAL_h
 #define QLGLOCAL_h

 /******************************************************************/
 /* Includes for structures.                                       */
 /******************************************************************/
 #include <qlg.h>
 #include <qlglcl.h>

 /******************************************************************/
 /* Prototype for calling Retrieve Exit Information API.           */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma argument (QlgRetrieveLocaleInformation,OS,nowiden)
    void QlgRetrieveLocaleInformation
                                (void *, /* Receiver Variable      */
                                 int   , /* Length Receiver Var    */
                                 char *, /* Format Name            */
                                 void *, /* Locale Path Name       */
                                 int   , /* Locale Category Key    */
                                 void *);/* Error Code             */
 #else
     extern "C"
     void QlgRetrieveLocaleInformation
                                (void *, /* Receiver Variable      */
                                 int  *, /* Length Receiver Var    */
                                 char *, /* Format Name            */
                                 void *, /* Locale Path Name       */
                                 int  *, /* Locale Category Key    */
                                 void *);/* Error Code             */
 #endif

#endif
