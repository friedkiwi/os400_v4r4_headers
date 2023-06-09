 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLZARLS                                    */
 /*                                                                */
 /* Descriptive Name: Release License                              */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Release License API is the opposite to the    */
 /*              Request License API.                              */
 /*                                                                */
 /* Header Files Included: H/QLZA                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.  (Structures included in QLZA)           */
 /*                                                                */
 /* Function Prototype List: QLZARLS                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 ROCH      New Include           */
 /* $A1= P3985168     3D60  950316 KPS       Change include linkage*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLZARLS_h
#define QLZARLS_h

/********************************************************************/
/*  Header Included.                                                */
/********************************************************************/
#include <qlza.h>

/********************************************************************/
/*  Prototype for calling Software Product API QLZARLS              */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QLZARLS, OS, nowiden)
#else
  extern "OS"
#endif
void QLZARLS (void *,             /* Product identification         */
              char *,             /* Product id format name         */
              void *,             /* License user                   */
              char *,             /* License user format name       */
              void *);            /* Error code                     */

#endif
