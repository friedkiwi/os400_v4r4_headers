/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QSPCRTSP                                  */
/*                                                               */
/* Descriptive Name: Create a Spooled File                       */
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
/* Description: The Create Spooled File API is used to create    */
/*              a new spooled file with attributes based on      */
/*              values taken from the spooled file attributes    */
/*              parameter.                                       */
/*                                                               */
/* Header Files Included: h/qusrspla                             */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None                                          */
/*                                                               */
/* Function Prototype List: QSPCRTSP                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- -------------------- */
/* $A0= D2862000     3D10  940318 XZS2523:  New Include          */
/* $00= P3985172     3D60  950316 JLINDSAY: Always include .h    */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

 #ifndef QSPCRTSP_h
 #define QSPCRTSP_h

 #include <qusrspla.h>

  #ifdef __ILEC400__
       #pragma linkage (QSPCRTSP,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Create Spooled File API QSPCRTSP          */
 /*                                                              */
 /****************************************************************/
 void QSPCRTSP (int  *,          /* Spooled file handle          */
                void *,          /* Spooled file attributes      */
                void *);         /* Error code                   */

 #endif
