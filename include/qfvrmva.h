 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFVRMVA                                    */
 /*                                                                */
 /* Descriptive Name: Remove activity.                             */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Remove Activity API removes an activity from  */
 /*              the specifiec change request description.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QFVRMVA                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
 /* ---- --------- ----- ------ --------- -------------------------*/
 /* $A0= PM601636  3D10  940619 HHUGO    :New  include             */
 /*                                                                */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFVRMVA_h
 #define QFVRMVA_h

 /******************************************************************/
 /* Prototype for calling Remove Activity API (QFVRMVA)            */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QFVRMVA,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QFVRMVA (void *,           /* Change request description     */
               char *,           /* Activity                       */
               void *);          /* Error code                     */

 #endif
