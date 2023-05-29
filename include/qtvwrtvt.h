 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTVWRTVT                                   */
 /*                                                                */
 /* Descriptive Name: Write to Virtual Terminal.                   */
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
 /* Description: The Write to Virtual Terminal (QTVWRTVT) API      */
 /*              writes data from a server program's data buffer   */
 /*              to a virtual terminal.                            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QTVWRTVT                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 LUPA:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QTVWRTVT_h
 #define QTVWRTVT_h

 /******************************************************************/
 /*  Prototype for calling Virtual Terminal API QTVWRTVT           */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage(QTVWRTVT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QTVWRTVT (void *,            /* Virtual terminal handle      */
                char *,            /* Write information            */
                void *,            /* Data buffer                  */
                int,               /* Number of bytes to write.    */
                void *);           /* Error code                   */

#endif
