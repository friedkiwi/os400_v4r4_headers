/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QSPCLOSP                                  */
/*                                                               */
/* Descriptive Name: Close Spooled File.                         */
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
/* Description: The Close Spooled File API closes a spooled file */
/*              opened by the Open Spooled File API or created   */
/*              by the Create Spooled File API.                  */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None                                          */
/*                                                               */
/* Function Prototype List: QSPCLOSP                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940318 XZS2523:  New Include          */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

 #ifndef QSPCLOSP_h
 #define QSPCLOSP_h

  #ifdef __ILEC400__
       #pragma linkage (QSPCLOSP,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Closed Spooled File API QSPCLOSP          */
 /*                                                              */
 /****************************************************************/
 void QSPCLOSP (int,             /* Spooled file handle          */
                void *);         /* Error code                   */

 #endif
