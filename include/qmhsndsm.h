/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QMHSNDSM                                      */
/*                                                                   */
/* Descriptive Name: Send Scope Message API.                         */
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
/* Description: The Send Scope Message API sends a scope message to  */
/*              a call stack entry.                                  */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QMHSNDSM.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940131 LUPA:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QMHSNDSM_h
#define QMHSNDSM_h

#ifdef __ILEC400__
    #pragma linkage (QMHSNDSM,OS,nowiden)
#else
    extern "OS"
#endif
/*********************************************************************/
/*  Prototype for calling Message Handler API QMHSNDSM               */
/*********************************************************************/
void QMHSNDSM (
        char *,            /* Scope type                      */
        void *,            /* Scope program name              */
        void *,            /* Scope program data              */
        int,               /* Scope program data length       */
        void *,            /* Message key                     */
        void *);           /* Error code                      */

#endif
