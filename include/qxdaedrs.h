/* START HEADER FILE SPECIFICATIONS **********************************/
/*                                                                   */
/* Header File Name: QXDAEDRS                                        */
/*                                                                   */
/* Descriptive Name: Extended Dynamic Remote Support (EDRS) APIs     */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1998                            */
/* ALL rights reserved.                                              */
/* US Government Users Restricted Rights-                            */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM.                               */
/*                                                                   */
/*                                                                   */
/* Description: Provides functions to database operations on either  */
/*              a local or remote system.                            */
/*                                                                   */
/* Header Files Included: QP0WPID                                    */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qxda_CDBO0100_t                                   */
/*                 Qxda_CDBI0100_t                                   */
/*                 Qxda_QSTM0100_t                                   */
/*                 Qxda_QJBI0100_t                                   */
/*                 Qxda_ParmInfo_t                                   */
/*                                                                   */
/* Function Prototype List: QxdaConnectEDRS                          */
/*                          QxdaCommitEDRS                           */
/*                          QxdaRollbackEDRS                         */
/*                          QxdaProcessImmediateEDRS                 */
/*                          QxdaProcessExtDynEDRS                    */
/*                          QxdaProcessCommandEDRS                   */
/*                          QxdaCallProgramEDRS                      */
/*                          QxdaFindEDRSJob                          */
/*                          QxdaDisconnectEDRS                       */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ -------- --------------------------*/
/* $A0= D97264       4D40  9804   BARBZ    New include               */
/* $A1= P3695732     4P40  990330 MLONG    Added # jobs returned     */
/*                                                                   */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QXDAEDRS_h
#define QXDAEDRS_h

#ifndef __ILEC400__
  extern "C" {
#endif

#include <qp0wpid.h>

#define QXDA_MAX_CONNECTIONS     30  /* Max # of connections allowed */

#define QXDA_MAX_USER_DATA_LEN  256  /* Max length of job and suspend
                                        data in Qxda_CDBI0100 struct */

/*********************************************************************/
/* Commit options to use with QxdaCommit API                         */
/*********************************************************************/
#define QXDA_COMMIT_WORK          0
#define QXDA_COMMIT_WITH_HOLD     1

/*********************************************************************/
/* Rollback options to use with QxdaRollback API                     */
/*********************************************************************/
#define QXDA_ROLLBACK_WORK        0
#define QXDA_ROLLBACK_WITH_HOLD   1

/*********************************************************************/
/* Additional options to use with QxdaProcessExtDyn API              */
/*********************************************************************/
#define QXDA_EXTDYN_NOOPTS        0x00000000
#define QXDA_CREATE_OBJECTS       0x00000001
#define QXDA_FIND_STMT            0x00000010
#define QXDA_DEFER_OPEN           0x00000100

/*********************************************************************/
/* Disconnect options to use with QxdaDisconnectDB API               */
/*********************************************************************/
#define QXDA_DISCONNECT_COMMIT    0
#define QXDA_DISCONNECT_ROLLBACK  1

/*********************************************************************/
/* Parameter usages to use with QxdaCallProgram API                  */
/*********************************************************************/
#define QXDA_INPUT                0
#define QXDA_OUTPUT               1
#define QXDA_IN_OUT               2

/*********************************************************************/
/* Parameter types to use with QxdaCallProgram API                   */
/*********************************************************************/
#define QXDA_BIN4                 1
#define QXDA_CHAR                 2


/*********************************************************************/
/* Prototypes for calling the APIs                                   */
/*********************************************************************/
#ifdef __ILEC400__
#pragma argument (QxdaConnectEDRS, OS, nowiden)
#endif
void QxdaConnectEDRS ( void *,         /* Input structure            */
                       char *,         /* Input structure format     */
                       void *,         /* Receiver variable          */
                       int *,          /* Length of receiver variable*/
                       char *,         /* Receiver variable format   */
                       void *);        /* Error code                 */

#ifdef __ILEC400__
#pragma argument (QxdaCommitEDRS, OS, nowiden)
#endif
void QxdaCommitEDRS ( int