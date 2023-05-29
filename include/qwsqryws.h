/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QWSQRYWS                                      */
/*                                                                   */
/* Descriptive Name: Query Keyboard Buffering                        */
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
/* Description: The Query Keyboard Buffering (QWSQRYWS) API sends    */
/*              the data stream command to query the current value   */
/*              for keyboard buffering for a specified display.      */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QWSQRYWS.                                */
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

#ifndef QWSQRYWS_h
 #define QWSQRYWS_h


 /******************************************************************/
 /*  Prototype for QWSQRYWS API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QWSQRYWS,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QWSQRYWS (char *,        /* Keyboard Buffering               */
                ...);          /* Optional Parameter:              */
                               /*    Device name                   */

#endif
