/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QWSSETWS                                      */
/*                                                                   */
/* Descriptive Name: Set Keyboard Buffering                          */
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
/* Description: The Set Keyboard Buffering (QWSSETWS) API controls   */
/*              the type-ahead and attention key buffering functions */
/*              for a display.                                       */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QWSSETWS.                                */
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

#ifndef QWSSETWS_h
 #define QWSSETWS_h


 /******************************************************************/
 /*  Prototype for QWSSETWS API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QWSSETWS,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QWSSETWS (char,          /* Keyboard Buffering               */
                ...);          /* Optional Parameter:              */
                               /*    Device name                   */

#endif
