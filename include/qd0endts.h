/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QD0ENDTS                                  */
/*                                                               */
/* Descriptive Name: End Data Stream Translation API.            */
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
/* Description: The End Data Stream Translation Session API ends */
/*              a session for data stream translation.           */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QD0ENDTS                             */
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

#ifndef QD0ENDTS_h
#define QD0ENDTS_h

#ifdef __ILEC400__
    #pragma linkage (QD0ENDTS,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for End Data Stream Translation Session API        */
/*  QD0ENDTS                                                     */
/*****************************************************************/
void QD0ENDTS (void *,           /* Translation session handle   */
               void *);          /* Error code                   */

#endif
