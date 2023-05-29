/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUSPTRUS                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Pointer to User Space API.             */
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
/* Description: The Retrieve Pointer to User Space API retrieves a   */
/*              pointer to the contents of a user-domain user space. */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUSPTRUS.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940119 LUPA:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUSPTRUS_h
 #define QUSPTRUS_h

 /********************************************************************/
 /*  Prototype for QUSPTRUS API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSPTRUS,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUSPTRUS (void *,           /* Qualified User Space Name       */
                void *,           /* Pointer to US.                  */
                ...);             /* Optional Parameter:
                                       Error code                    */

#endif
