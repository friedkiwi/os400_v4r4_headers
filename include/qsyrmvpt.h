/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSYRMVPT                                      */
/*                                                                   */
/* Descriptive Name: Remove Profile Tokens API.                      */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1999                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Remove Profile Tokens API removes all profile    */
/*              tokens from the system.                              */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QSYRMVPT.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9714500     4D40  980819 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSYRMVPT_h
 #define QSYRMVPT_h

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/

 /********************************************************************/
 /*  Prototype for QSYRMVPT  API                                     */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSYRMVPT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSYRMVPT (char[10],           /* User Profile Name.            */
               void *);             /* Error Code                    */

#endif
