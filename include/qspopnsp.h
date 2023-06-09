/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QSPOPNSP                                  */
/*                                                               */
/* Descriptive Name: Open Spooled File.                          */
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
/* Description: The Open Spooled File API opens an existing      */
/*              spooled file.                                    */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None                                          */
/*                                                               */
/* Function Prototype List: QSPOPNSP                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- -------------------- */
/* $A0= D2862000     3D10  940318 XZS2523:  New Include          */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

 #ifndef QSPOPNSP_h
 #define QSPOPNSP_h

  #ifdef __ILEC400__
       #pragma linkage (QSPOPNSP,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Open Spooled File API QSPOPNSP            */
 /*                                                              */
 /****************************************************************/
 void QSPOPNSP (int  *,          /* Spooled file handle          */
                void *,          /* Qualified job name           */
                void *,          /* Internal job id              */
                void *,          /* Internal spooled file id     */
                char *,          /* Spooled file name            */
                int,             /* Spooled file number          */
                int,             /* Number of buffers to get     */
                void *);         /* Error code                   */

 #endif
