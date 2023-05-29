 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHSMMOVL                                   */
 /*                                                                */
 /* Descriptive Name: Move Library to ASP (QHSMMOVL) API.          */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Prototypes for call API QHSMMOVL.                 */
 /*                                                                */
 /* Header Files Included: None                                    */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /* Function Prototype: QHSMMOVL                                   */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3664493     4D30  980218 KLG       New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


#ifndef QHSMMOVL_h
 #define QHSMMOVL_h


 /******************************************************************/
 /*  Prototype for QHSMMOVL API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QHSMMOVL,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QHSMMOVL (char *,        /* Library name                     */
                int  *,        /* Target ASP                       */
                char *,        /* Check Dependencies               */
                void *);       /* Error code                       */


#endif
