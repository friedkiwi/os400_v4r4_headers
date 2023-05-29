/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QEZMAIN                                   */
/*                                                               */
/* Descriptive Name: Operational Assistant Attention-Key-Handling*/
/*                   API.                                        */
/*                                                               */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                   */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Operational Assistant Attention-Key-Handling */
/*              API creates a group job to display the AS/400    */
/*              Operational Assistant menu (ASSIST).             */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QEZMAIN                              */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940317 XZS0786:  New Include          */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

#ifndef QEZMAIN_h
#define QEZMAIN_h

#ifdef __ILEC400__
    #pragma linkage (QEZMAIN,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for calling Operational Assistant API QEZMAIN      */
/*****************************************************************/
void QEZMAIN();                  /* No parms                     */

#endif
