/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QEARMVBM                                      */
/*                                                                   */
/* Descriptive Name: Remove All Bookmarks from a Course              */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Remove All Bookmarks from a Course (QEARMVBM)    */
/*              API removes all bookmarks from a Tutorial System     */
/*              Support course.                                      */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QEARMVBM.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940323 JRU      :New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QEARMVBM_h
 #define QEARMVBM_h


 /******************************************************************/
 /*  Prototype for QEARMVBM API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QEARMVBM,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QEARMVBM (char *,        /* Course ID                        */
                void *);       /* Error code                       */

#endif
