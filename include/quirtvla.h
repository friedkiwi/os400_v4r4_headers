/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIRTVLA                                      */
/*                                                                   */
/* Descriptive Name: Retrieve List Attributes                        */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Retrieve List Attributes API retrieves a list of */
/*              attributes.                                          */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIRTVLA                                 */
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

#ifndef QUIRTVLA_h
 #define QUIRTVLA_h

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIRTVLA       */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIRTVLA,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIRTVLA (char *,           /* Application handle              */
                char *,           /* List name                       */
                void *,           /* Receiver                        */
                int,              /* Receiver length                 */
                void *);          /* Error code                      */

#endif
