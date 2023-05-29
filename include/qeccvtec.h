 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QECCVTEC                                   */
 /*                                                                */
 /* Descriptive Name: Convert Edit Code API                        */
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
 /* Description: The Convert Edit Code API translates an edit code */
 /*              specification into an edit mask, which is a byte  */
 /*              string used to format a numeric value into a      */
 /*              readable character string.                        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QECCVTEC                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QECCVTEC_h
 #define QECCVTEC_h

 /******************************************************************/
 /*  Prototype for QECCVTEC API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QECCVTEC,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QECCVTEC(void *,          /* Edit mask                       */
               int  *,          /* Edit mask length                */
               int  *,          /* Receiver variable length        */
               char *,          /* Zero balance fill character     */
               char *,          /* Edit code                       */
               char *,          /* Fill or floating currency indic */
               int,             /* Source variable precision       */
               int,             /* Source variable decimal position*/
               void *);         /* Error code                      */

 #endif
