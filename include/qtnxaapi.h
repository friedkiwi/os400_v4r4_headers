/*********************************************************************/
/*                                                                   */
/* Header File Name        : QSYSINC/H/QTNXAAPI                      */
/*                                                                   */
/* Descriptive Name        : DB2/400 XA API Functions Common Header  */
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
/*                                                                   */
/* Function Prototype List :                                         */
/*   db2xa_open()       Open a resource manager                      */
/*   db2xa_close()      Close a resource manager                     */
/*   db2xa_start()      Start work on behalf of a transaction        */
/*                      branch                                       */
/*   db2xa_end()        End work performed on behalf of a            */
/*                      transaction branch                           */
/*   db2xa_rollback()   Roll back work done on behalf of a           */
/*                      transaction branch                           */
/*   db2xa_prepare()    Prepare to commit work done on behalf of a   */
/*                       transaction branch                          */
/*   db2xa_commit()     Commit work done on behalf of a transaction  */
/*                      branch                                       */
/*   db2xa_recover()    Obtain a list of prepared transaction        */
/*                      branches from a resource manager             */
/*   db2xa_forget()     Forget about a heuristically completed       */
/*                      transaction branch                           */
/*   db2xa_complete()   Wait for an asynchronous operation to        */
/*                      complete                                     */
/*                                                                   */
/* Change Activity         :                                         */
/*                                                                   */
/* CFD List                :                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D9496500     4D30  971217 MIETEK  : New                      */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*********************************************************************/

#ifndef _QTNXAAPI_H
#define _QTNXAAPI_H

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <qtnxadtp.h>

/*-------------------------------------------------------------------*/
/* XA function prototypes                                            */
/*-------------------------------------------------------------------*/

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_close                               */
/*                                                                  */
/* Descriptive Name    :  Close DB2/400 Resource Manager (RM)       */
/*                                                                  */
/* Function Description:  Close the resource manager.               */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  char *xa_info                             */
/*                                Pointer to a null terminated      */
/*                                character string containing       */
/*                                information used to uninitialize  */
/*                                the resource manager              */
/*                        int rmid                                  */
/*                                Resource manager ID generated by  */
/*                                the transaction manager           */
/*                        long flags                                */
/*                                Flags that affect the function    */
/*                                                                  */
/* Exit Normal                                                      */
/*   Return Value      :  XA_OK       Function was successful       */
/*   Outputs           :                                            */
/*                                                                  */
/* Exit Error                                                       */
/*   Return Value      :  XAER_ASYNC  TMASYNC was set in flags and  */
/*                                    TMUSEASYNC is not set in the  */
/*                                    the flags element of the      */
/*                                    RM's switch structure.        */
/*                        XAER_INVAL  Invalid arguments were        */
/*                                    specified.                    */
/*                        XAER_PROTO  The routine was invoked in an */
/*                                    improper context.             */
/*                        XAER_RMERR  An error occurred when        */
/*                                    closing the resource.         */
/*                                                                  */
/*   Outputs           :                                            */
/*                                                                  */
/***   END OF FUNCTION PROTOTYPE DESCRIPTION  ***********************/
QBFC_EXTERN int db2xa_close (char *xa_info,
                             int  rmid,
                             long flags);

/***   START OF FUNCTION PROTOTYPE DESCRIPTION  *********************/
/*                                                                  */
/* Function Name       :  db2xa_commit                              */
/*                                                                  */
/* Descriptive Name    :  Commit work done on behalf of a           */
/*                        transaction branch.                       */
/*                                                                  */
/* Function Description:  Changes made to resources held during     */
/*                        the transaction are made permanent.       */
/*                                                                  */
/* Implementation Part :  QTNXAAPI                                  */
/*                                                                  */
/* Dependencies        :                                            */
/*                                                                  */
/* Restrictions        :                                            */
/*                                                                  */
/* Exception Handlers  :                                            */
/*                                                                  */
/* Diagnostic Messages :                                            */
/*                                                                  */
/* Escape Messages     :                                            */
/*                                                                  */
/* Input               :  XID  *xid                                 */
/*                                Pointer to transaction branch     */
/*                                identifier                        */
/*                        int