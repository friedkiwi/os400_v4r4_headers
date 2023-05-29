/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QEZBCHJB                                  */
/*                                                               */
/* Descriptive Name: Wor with Jobs API                           */
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
/* Description: The Work with Jobs API uses the Work with User   */
/*              Jobs command to display either basic or          */
/*              intermediate information.                        */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QEZBCHJB                             */
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

#ifndef QEZBCHJB_h
#define QEZBCHJB_h

#ifdef __ILEC400__
    #pragma linkage (QEZBCHJB,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for calling Operational Assistant API QEZBCHJB     */
/*****************************************************************/
void QEZBCHJB();                 /* No parms                     */

#endif
