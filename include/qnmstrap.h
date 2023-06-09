/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QNMSTRAP                                      */
/*                                                                   */
/* Descriptive Name: Start Application                               */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Start Application API, an SNA management services*/
/*              transport API, starts support for a network          */
/*              management application.                              */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QNMSTRAP.                                */
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

#ifndef QNMSTRAP_h
#define QNMSTRAP_h

/********************************************************************/
/*  Prototype for QNMSTRAP API                                      */
/********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QNMSTRAP,OS,nowiden)
#else
     extern "OS"
#endif
void QNMSTRAP (int  *,           /* Handle                          */
               char *,           /* Local Application Name          */
               void *,           /* Data Queue                      */
               void *);          /* Error Code                      */

#endif
