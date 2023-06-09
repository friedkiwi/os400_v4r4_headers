/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSYDRGFN                                      */
/*                                                                   */
/* Descriptive Name: Deregister Function API.                        */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1998                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Deregister Function API deregisters a function   */
/*              from the registration facility.                      */
/*                                                                   */
/* Header Files Included: h/qsyreg                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.  (Formats included in QSYREG)               */
/*                                                                   */
/* Function Prototype List: QSYDRGFN.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9567200     4D30  971119 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSYDRGFN_h
 #define QSYDRGFN_h

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/
 #include <qsyreg.h>

 /********************************************************************/
 /*  Prototype for QSYDRGFN  API                                     */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSYDRGFN,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSYDRGFN (char[30],           /* Function ID                   */
                void *);            /* Error Code                    */

#endif
