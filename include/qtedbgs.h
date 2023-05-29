/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTEDBGS                                       */
/*                                                                   */
/* Descriptive Name: Source Debugger APIs.                           */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: Include header file for the QTEDBGS APIs.            */
/*                                                                   */
/* Header Files Included: H/QTES                                     */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Receiver variables for Retrieve Module Views      */
/*                 Receiver variables for Retrieve Stopped Position  */
/*                 Receiver variables for Retrieve View Text         */
/*                 Receiver variables for Retrieve View File         */
/*                 Receiver variables for Map View Position          */
/*                 Receiver variables for Submit Debug Command       */
/*                 Receiver variable for Retrieve View Line Info     */
/*                 Receiver variable for Retrieve Statement View     */
/*                                                                   */
/* Function Prototype List: QteStartSourceDebug                      */
/*                          QteEndSourceDebug                        */
/*                          QteRetrieveDebugAttribute                */
/*                          QteSetDebugAttribute                     */
/*                          QteRetrieveModuleViews                   */
/*                          QteRegisterDebugView                     */
/*                          QteRemoveDebugView                       */
/*                          QteRetrieveStoppedPosition               */
/*                          QteAddBreakpoint                         */
/*                          QteRemoveBreakpoint                      */
/*                          QteRemoveAllBreakpoints                  */
/*                          QteStep                                  */
/*                          QteRetrieveViewText                      */
/*                          QteRetrieveViewFile                      */
/*                          QteMapViewPosition                       */
/*                          QteSubmitDebugCommand                    */
/*                          QteRetrieveViewLineInformation           */
/*                          QteRetrieveStatementView                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D2862000     3D10  940222 ROCH    : New Include              */
/* $A1= D9172200     3D60  940912 ROCH    : Support RetrieveView @A1A*/
/*                                           LineInformation API @A1A*/
/* $A2= D9191500     3D60  941005 ROCH    : Support Retrieve     @A2A*/
/*                                           StatementView API   @A2A*/
/* $A3= D9123600     3D60  941207 ROCH    : Added kStringF_E     @A3A*/
/*                                           expression type.    @A3A*/
/* $A4= D9421104     3D70  960306 ROCH    : Add Watch support    @A4A*/
/* $A5= D9421100     3D70  960403 ROCH    : Add statement info.  @A5A*/
/*                                           Retrieve Statement  @A5A*/
/*                                           View API.           @A5A*/
/* $A6= D9496001     4D10  961106 ROCH    : Support for Unicode  @A6A*/
/*                                          and ASCII format     @A6A*/
/* $A7= D9480301     4D20  961022 ROCH    : Add threads support. @A7A*/
/*                                          Rmv _Packed from struc   */
/*                                          within typedefs for iCC. */
/* $A8= D9489401     4D20  970310 ROCH    : Add JAVA support     @A8A*/
/* $A9= P3663050     4D30  971118 ROCH    : Integer/cardinal 64  @A9A*/
/* $AA= D9552900     4D40  980810 ROCH    : Cardinal 8           @AAA*/
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QTEDBGS_H
#define _QTEDBGS_H


/*-------------------------------------------------------------------*/
/* Includes used by Source Debugger APIs                             */
/*-------------------------------------------------------------------*/

#include <qtes.h>                   /* Common names include          */


/*********************************************************************/
/* Prototype for Start Source Debug API.                             */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteStartSourceDebug,OS,nowiden)
 #else
    extern "C"
 #endif

void QteStartSourceDebug(
              _TE_OBJLIB_T *,       /* Program stop handler name     */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for End Source Debug API.                               */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteEndSourceDebug,OS,nowiden)
 #else
    extern "C"
 #endif
void QteEndSourceDebug(
              _TE_ERROR_CODE_T *);  /* Error code                    */


/*********************************************************************/
/* Prototype for Retrieve Debug Attribute API.                       */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteRetrieveDebugAttribute,OS,nowiden)
 #else
    extern "C"
 #endif
void QteRetrieveDebugAttribute(
              _TE_NAME_T,           /* Debug attribute name          */
              _TE_NAME_T,           /* Debug attribute value         */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Set Debug Attribute API.                            */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteSetDebugAttribute,OS,nowiden)
 #else
    extern "C"
 #endif
void QteSetDebugAttribute(
              _TE_NAME_T,           /* Debug attribute name          */
              _TE_NAME_T,           /* Debug attribute value         */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Retrieve Module Views API.                          */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteRetrieveModuleViews,OS,nowiden)
 #else
    extern "C"
 #endif
void QteRetrieveModuleViews(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              _TE_FORMAT_T,         /* Format name                   */
              void *,               /* Program or class file name    */
              _TE_NAME_T,           /* Program type                  */
              void *,               /* Module name or returned       */
                                    /* class file information size   */
              void *,               /* Returned library name or      */
                                    /* class file information        */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the VEWL0100 format of receiver variable in   */
/* the Retrieve Module Views API.                                    */
/*-------------------------------------------------------------------*/

typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int NumberElements;
          struct {
    _TE_NAME_T ModuleName;
    _TE_NAME_T ViewType;
    _TE_COMPILER_ID_T CompilerID;
    _TE_NAME_T MainIndicator;
    _TE_TIMESTAMP_T TimeStamp;
    _TE_TEXTDESC_T ViewDescription;
    char Reserved[3];
    long int ViewNumber;
    long int NumView