/*********************************************************************/
/*                                                                   */
/* Header File Name        : QSYSINC/H/QTNXADTP                      */
/*                                                                   */
/* Descriptive Name        : DB2/400 XA API Function Switch Header   */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1998                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/* Description             :                                         */
/*   Provide common declarations used by the XA APIs.                */
/*                                                                   */
/* Macro List              :                                         */
/*                                                                   */
/* Structure List          :                                         */
/*   QTNXADTP_switch_t      XA function switch                       */
/*   QTNXADTP_xid_t         Transaction branch ID                    */
/*                                                                   */
/* Function Prototype List :                                         */
/*                       None. XA API function prototypes are        */
/*                       declared in the QTNXAAPI header file.       */
/*                                                                   */
/* Change Activity         :                                         */
/*                                                                   */
/* CFD List                :                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D9496500     4D30  970918 MIETEK  : New                      */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*********************************************************************/

#ifndef _QTNXADTP_H
#define _QTNXADTP_H

/*-------------------------------------------------------------------*/
/* Transaction branch identification: XID                            */
/*-------------------------------------------------------------------*/
#define  XIDDATASIZE  128           /* Size in bytes                 */
#define  MAXGTRIDSIZE 64            /* Maximum size in bytes of
                                       global transaction id         */
#define  MAXBQUALSIZE 64;           /* Maximum size in bytes of
                                       branch qualifier              */
struct db2xid_t {
  long formatID;                    /* Format id
                                       Value of -1 (constant NULLXID)
                                       means that XID is null.       */
  long gtrid_length;                /* Length of lobal transaction id*/
  long bqual_length;                /* Length of branch qualifier    */
  char data[XIDDATASIZE];           /* Transaction branch id         */
  };
typedef struct db2xid_t XID;

#define NULLXID -1                  /* Format id value indicating
                                       null XID                      */

/*-------------------------------------------------------------------*/
/* Flag definitions for xa_ and ax_ routines                         */
/*-------------------------------------------------------------------*/
#define TMASYNC      0x80000000L    /* Perform routine asynchronously*/
#define TMONEPHASE   0x40000000L    /* Caller is using one-phase
                                       optimization                  */
#define TMFAIL       0x20000000L    /* Dissociates caller and marks
                                       transaction branch
                                       rollback-only                 */
#define TMNOWAIT     0x10000000L    /* Return if blocking condition
                                      exists                        */
#define TMRESUME     0x08000000L    /* Caller is resuming
                                       association with suspended
                                       transaction branch            */
#define TMSUCCESS    0x04000000L    /* Dissociate caller from
                                       transaction branch            */
#define TMSUSPEND    0x02000000L    /* Caller is suspending, not
                                       ending, association           */
#define TMSTARTRSCAN 0x01000000L    /* Start a recovery scan         */
#define TMENDRSCAN   0x00800000L    /* End a recovery scan           */
#define TMMULTIPLE   0x00400000L    /* Wait for any asynchronous
                                       operation                     */
#define TMJOIN       0x00200000L    /* Caller is joining existing
                                       transaction branch            */
#define TMMIGRATE    0x00100000L    /* Caller intends to perform
                                       migration                     */

/*-------------------------------------------------------------------*/
/* ax_() return codes                                                */
/*-------------------------------------------------------------------*/
#define TM_JOIN     2               /* Caller is joining existing
                                       transaction branch            */
#define TM_RESUME   1               /* Caller is resuming
                                       association with suspended
                                       transaction branch            */
#define TM_OK       0               /* Normal execution              */
#define TMER_TMERR  -1              /* An error occurred in the
                                       transaction manager           */
#define TMER_INVAL  -2              /* Invalid arguments were given  */
#define TMER_PROTO  -3              /* Routine invoked in an
                                       improper context              */

/*-------------------------------------------------------------------*/
/* xa_() return codes                                                */
/*-------------------------------------------------------------------*/
/*----- Rollback codes ----------------------------------------------*/
#define XA_RBBASE      100          /* Inclusive lower bound of the
                                       rollback codes                */
#define XA_RBROLLBACK  XA_RBBASE    /* Rollback was caused by an
                                       unspecified reason            */
#define XA_RBCOMMFAIL  XA_RBBASE+1  /* Rollback was caused by
                                       communication failure         */
#define XA_RBDEADLOCK  XA_RBBASE+2  /* Deadlock was detected         */
#define XA_RBINTEGRITY XA RBBASE+3  /* Condition that violates the
                                       integrity of the resources
                                       was detected                  */
#define XA_RBOTHER     XA_RBBASE+4  /* RM rolled back the
                                       transaction branch for a
                                       reason not on this list       */
#define XA_RBPROTO     XA_RBBASE+5  /* Protocol error occurred in the
                                       RM                            */
#define XA_RBTIMEOUT   XA_RBBASE+6  /* Transaction branch tool too
                                       long                          */
#define XA_RBTRANSIENT XA_RBBASE+7  /* May retry the transaction
                                       branch                        */
#define XA_RBEND       XA_RBTRANSIENT /* The inclusive upper bound
                                       of the rollback codes         */
/* ----- Migrate codes ----------------------------------------------*/
#define XA_NOMIGRATE   9            /* Resumption must occur where
                                       suspension occurred            */
/*----- Heuristic codes ---------------------------------------------*/
#define XA_HEURHAZ     8            /* Transaction branch may have
                                       been heuristically completed  */
#define XA_HEURCOM     7            /* Transaction branch has been
                                       heuristically committed       */
#define XA_HEURRB      6            /* Transaction branch has been
                                       heuristically rolled back     */
#define XA_HEURMIX     5            /* Transaction branch has been
                                       heuristically committed or
                                       rolled back                   */
/*----- Other positive codes ----------------------------------------*/
#define XA_RETRY       4            /* Routine returned with no
                                       effect and may be reissued    */
#define XA_RDONLY      3            /* Transaction branch was
                                       read-only and has been
                                 