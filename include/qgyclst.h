 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYCLST                                    */
 /*                                                                */
 /* Descriptive Name: Close List                                   */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description:  The QGYCLST API closes a previously opened       */
 /*               list.  Any internal storage associated with      */
 /*               that list is freed.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QGYCLST                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960530 DPW       New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYCLST_h
 #define QGYCLST_h

 /******************************************************************/
 /* Prototype for calling QGYCLST                                  */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYCLST,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QGYCLST  (char *,          /* Request handle                 */
                void *           /* Error code                     */
               );

 #endif

