/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : QTVOPNVT                                 */
/*                                                                   */
/* Descriptive Name       : Open Virtual Terminal Path.              */
/*                                                                   */
/*                                                                   */
/* program-number  (C) Copyright IBM Corp. 1994, 1994                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Open Virtual Terminal Path (QTVOPNVT) API opens  */
/*              a path to a virtual terminal, allowing a server      */
/*              program to interact with an AS/400 application.      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:     Qtv_Opnvt_Sess_Init_t                         */
/*                     Qtv_Opnvt_Record_t                            */
/*                                                                   */
/* Function Prototype List: QTVOPNVT                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -----------------------  */
/* $A0= D2862000     3D10  940424 LUPA    : New Header               */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the change activity                       */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QTVOPNVT_h
 #define QTVOPNVT_h

 /********************************************************************/
 /*  Prototype for calling Virtual Terminal API QTVOPNVT             */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage(QTVOPNVT,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QTVOPNVT (void *,           /* Virtual terminal handle         */
                char *,           /* Keyboard language type          */
                int,              /* Character set                   */
                int,              /* Code page                       */
                int,              /* Work station type               */
                void *,           /* Data queue name and library     */
                void *,           /* Key value                       */
                int,              /* Key value length                */
                void *,           /* Error code                      */
                ...);             /* Optional group 1: (void *)
                                     Open operation information.
                                     Optional group 2: (void *)
                                     Session initiation info.        */

 /**********************