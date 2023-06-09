/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIGETLE                                      */
/*                                                                   */
/* Descriptive Name: Get List Entry                                  */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Get List Entry API accesses an entry in a list   */
/*              and optionally updates the corresponding dialog      */
/*              variables to the values in the list entry.           */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIGETLE                                 */
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

#ifndef QUIGETLE_h
 #define QUIGETLE_h

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIGETLE       */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIGETLE,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIGETLE (char *,           /* Application handle              */
                void *,           /* Variable buffer                 */
                int,              /* Variable buffer length          */
                char *,           /* Variable record name            */
                char *,           /* List name                       */
                char *,           /* Positioning option              */
                char *,           /* Copy option                     */
                void *,           /* Selection criteria              */
                char *,           /* Selection handle                */
                char *,           /* Extend option                   */
                char *,           /* List entry handle               */
                void *);          /* Error code                      */

#endif
