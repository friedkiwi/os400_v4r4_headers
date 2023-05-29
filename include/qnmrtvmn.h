/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QNMRTVMN                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Mode Name                              */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Retrieve Mode Name API, an SNA management        */
/*              services transport API, retrieves the APPC mode name */
/*              currently being used for the purpose of sending      */
/*              requests.                                            */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QNMRTVMN.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940327 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QNMRTVMN_h
 #define QNMRTVMN_h

 /********************************************************************/
 /*  Prototype for QNMRTVMN API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QNMRTVMN,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QNMRTVMN (int   ,           /* Handle                          */
                char *,           /* Mode Name                       */
                void *);          /* Error Code                      */

#endif
