/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIDLTL                                       */
/*                                                                   */
/* Descriptive Name: Delete List                                     */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Delete List API deletes an active list and       */
/*              provides a way for the application to start over     */
/*              with a new list.                                     */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIDLTL                                  */
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

#ifndef QUIDLTL_h
 #define QUIDLTL_h

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIDLTL        */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIDLTL,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIDLTL  (char *,           /* Application handle              */
                char *,           /* List name                       */
                void *);          /* Error code                      */

#endif
