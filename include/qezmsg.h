/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QEZMSG                                    */
/*                                                               */
/* Descriptive Name: Work with Messages API.                     */
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
/* Description: The Work with Messages API uses the Display      */
/*              Messages command to display basic or intermediate*/
/*              assistance level.                                */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QEZMSG                               */
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

#ifndef QEZMSG_h
#define QEZMSG_h

#ifdef __ILEC400__
    #pragma linkage (QEZMSG,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for calling Operational Assistant API QEZMSG       */
/*****************************************************************/
void QEZMSG();                   /* No parms                     */

#endif
