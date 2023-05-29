 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHSNDRM                                   */
 /*                                                                */
 /* Descriptive Name: Send Reply Message API.                      */
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
 /* Description: The Send Reply Message API sends a reply message  */
 /*              to the sender of an inquiry message.              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHSNDRM                              */
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

 #ifndef QMHSNDRM_h
 #define QMHSNDRM_h

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHSNDRM             */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QMHSNDRM,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QMHSNDRM (void *,          /* Message key                    */
                void *,          /* Qualified message queue name   */
                char *,          /* Message reply text             */
                int,             /* Length of message reply text   */
                char *,          /* Remove message option          */
                void *,          /* Error code                     */
                ...);            /* Optional:
                                       Coded Character Set Id      */

 #endif
