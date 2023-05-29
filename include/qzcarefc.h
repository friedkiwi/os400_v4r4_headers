/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QZCAREFC                                     */
/*                                                                  */
/* Descriptive Name: Update Client Info API                         */
/*                                                                  */
/* 5763-SS1, 5716-SS1, 5769-SS1                                     */
/* (C) Copyright IBM Corp. 1997,1998                                */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/* Description: The refresh Client Info API allows applications     */
/*              to refresh Hardware, Software or All information    */
/*              stored on AS/400 about a client.                    */
/*                                                                  */
/*              The "New Program Model(NPM)" interface would be     */
/*              to use the QzcaRefreshClientInfo ILE C function     */
/*              in the QSYS/QZCACLT service program.                */
/*                                                                  */
/* Header Files Included: None.                                     */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: None.                                            */
/*                                                                  */
/* Function Prototype List: QZCAREFC                                */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ --------- ------------------------*/
/* $A0= P3653044     4D20  970818 ALDO      New Include             */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*  Additional notes about the Change Activity                      */
/* End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS *********************************/

#ifndef QZCAREFC_h
#define QZCAREFC_h

/********************************************************************/
/*  Prototype for calling Add Client API QZCAREFC                   */
/********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QZCAREFC,OS,nowiden)
  #else
       extern "OS"
  #endif
void QZCAREFC( void *,                 /* Client ID                 */
               void *,                 /* Refresh Choice            */
               int  *,                 /* Time out                  */
               void *  );              /* Error Code                */


#endif  /* QZCAREFC_h */

