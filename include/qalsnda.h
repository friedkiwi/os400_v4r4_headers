/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QALSNDA                                       */
/*                                                                   */
/* Descriptive Name: Send Alert                                      */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Send Alert API, an alert API, sends an alert to  */
/*              the OS/400 alert manager for processing.             */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QALSNDA.                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940227 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QALSNDA_h
#define QALSNDA_h

/********************************************************************/
/*  Prototype for QALSNDA API                                       */
/********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QALSNDA,OS,nowiden)
  #else
       extern "OS"
  #endif
void QALSNDA (void *,           /* Alert Major Vector              */
              int   ,           /* Alert Major Vector Length       */
              char *,           /* Local / Received indicator      */
              char *,           /* Origin                          */
              void *);          /* Error Code                      */

#endif
