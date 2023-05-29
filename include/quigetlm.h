/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIGETLM                                      */
/*                                                                   */
/* Descriptive Name: Get List Multiple Entries                       */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Get List Multiple Entries API accesses one or    */
/*              more entries in a list and updates the corresponding */
/*              dialog variables with the values contained in the    */
/*              list entry.                                          */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIGETLM                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940204 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUIGETLM_h
#define QUIGETLM_h

#ifdef __ILEC400__
    #pragma linkage (QUIGETLM,OS,nowiden)
#else
    extern "OS"
#endif
/********************************************************************/
/*  Prototype for calling User Interface Manager API QUIGETLM       */
/********************************************************************/
void QUIGETLM (char *,           /* Application handle              */
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
               int,              /* Number of records               */
               int,              /* Record size                     */
               int,              /* Record count                    */
               void *);          /* Error code                      */

#endif
