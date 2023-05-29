 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSNDDTAQ                                   */
 /*                                                                */
 /* Descriptive Name: Send Data Queue API                          */
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
 /* Description: The Send Data Queue APi sends data to the         */
 /*              specified data queue.                             */
 /*                                                                */
 /* Header Files Included: h/decimal                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSNDDTAQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSNDDTAQ_h
 #define QSNDDTAQ_h

    #include <decimal.h>
 /******************************************************************/
 /*  Prototype for QSNDDTAQ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
    #pragma linkage(QSNDDTAQ,OS,nowiden)
 #else
    extern "OS"
 #endif
    void QSNDDTAQ (char *,        /* Data queue name                */
                   char *,        /* Library name                   */
                   _Decimal(5,0), /* Length of data                 */
                   void *,        /* Data                           */
                   ...);          /* Optional Parameters:
                                     _Decimal(3,0)  Length of key
                                                        data
                                      void *        Key data        */

 #endif
