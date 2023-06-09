/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIPRTP                                       */
/*                                                                   */
/* Descriptive Name: Print Panel                                     */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Print Panel API prints a panel to the printer    */
/*              file for an opened print application.                */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIPRTP                                  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940126 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUIPRTP_h
 #define QUIPRTP_h

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIPRTP        */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIPRTP,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIPRTP  (char *,           /* Application handle              */
                char *,           /* Print panel name                */
                char *,           /* Eject option                    */
                void *);          /* Error code                      */

#endif
