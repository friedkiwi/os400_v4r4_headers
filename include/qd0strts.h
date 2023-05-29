/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QD0STRTS                                  */
/*                                                               */
/* Descriptive Name: Start Data Stream Translation Session API   */
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
/* Description: The Start Data Stream Translation Session API    */
/*              initates a session for data stream translation.  */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QD0STRTS                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940328 XZS0786:  New Include          */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

#ifndef QD0STRTS_h
#define QD0STRTS_h

#ifdef __ILEC400__
    #pragma linkage (QD0STRTS,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for Start Data Stream Translation Session API      */
/*  QD0STRTS                                                     */
/*****************************************************************/
void QD0STRTS (void *,           /* Translation session handle   */
               char *,           /* Display device name          */
               char *,           /* Default screen size          */
               char *,           /* Alternate screen size        */
               void *);          /* Error code                   */

#endif
