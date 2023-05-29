 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLIRNMO                                    */
 /*                                                                */
 /* Descriptive Name: Rename Object API                            */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Rename Object API renames an existing object  */
 /*              to a new object name or new library name or both, */
 /*              and optionally replaces the object.               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLIRNMO                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLIRNMO_h
 #define QLIRNMO_h

 /******************************************************************/
 /*  Prototype for QLIRNMO API                                     */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QLIRNMO,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QLIRNMO(void *,            /* From qualified object name     */
              char *,            /* Object type                    */
              void *,            /* To qualified object name       */
              char *,            /* Replace object                 */
              void *);           /* Error code                     */

 #endif
