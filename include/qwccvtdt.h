 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCCVTDT                                   */
 /*                                                                */
 /* Descriptive Name: Convert Date and Time Format API.            */
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
 /* Description: The Convert Date and Time Format (QWCCVTDT) API   */
 /*              converts date and time values from one format to  */
 /*              another format.                                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QWCCVTDT.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940227 LUPA:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QWCCVTDT_h
 #define QWCCVTDT_h

 /******************************************************************/
 /*  Prototype for calling Miscellaneous API QWCCVTDT              */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QWCCVTDT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QWCCVTDT(void *,             /* Input format                 */
               void *,             /* Input variable               */
               void *,             /* Output format                */
               void *,             /* Output variable              */
               void *);            /* Error code                   */

#endif
