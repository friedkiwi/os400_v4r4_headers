#ifdef __cplusplus
   extern "C" {
   #pragma info(none)
#else
   #pragma nomargins nosequence
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBAPI                                    */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities master header    */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description:                                                   */
 /*    This header file is System Facilities master header file.   */
 /*    It includes all the header files needed to call System      */
 /*    Facilities APIs.                                            */
 /*                                                                */
 /* Header Files Included:                                         */
 /*    H/QUMBUDEF                                                  */
 /*    H/QUMBOAPI                                                  */
 /*    H/QUMBCAPI                                                  */
 /*    H/QUMBAAPI                                                  */
 /*    H/QUMBUMSG                                                  */
 /*    H/QUMBOMSG                                                  */
 /*    H/QUMBCMSG                                                  */
 /*    H/QUMBAMSG                                                  */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*    QumbCreateObject                                            */
 /*    QumbSetObjectAttribute                                      */
 /*    QumbSetObjectThumbnail                                      */
 /*    QumbRtvObjectAttribute                                      */
 /*    QumbRtvObjectThumbnail                                      */
 /*    QumbQryObjectsByAttribute                                   */
 /*    QumbRtvUniqueID                                             */
 /*    QumbRtvUserAuthorityToObject                                */
 /*    QumbRtvObjectOwner                                          */
 /*    QumbSetObjectOwner                                          */
 /*    QumbDeleteObject                                            */
 /*    QumbCopyObject                                              */
 /*    QumbMoveObject                                              */
 /*    QumbRtvObjectAuthority                                      */
 /*    QumbSetObjectAuthority                                      */
 /*    QumbCopyObjectData                                          */
 /*    QumbMoveObjectData                                          */
 /*    QumbDeleteObjectData                                        */
 /*    QumbQryObjects                                              */
 /*    QumbResolveKeyObject                                        */
 /*    QumbQryDevices                                              */
 /*    QumbQryConnectors                                           */
 /*    QumbReturnData                                              */
 /*    QumbProcessRequest                                          */
 /*    QumbRtvData                                                 */
 /*    QumbQryUser                                                 */
 /*    QumbQryOriginatingLocation                                  */
 /*    QumbSendNamedAsyncID                                        */
 /*    QumbClearData                                               */
 /*    QumbPresentObject                                           */
 /*    QumbPresentFile                                             */
 /*    QumbCaptureObject                                           */
 /*    QumbControlProcess                                          */
 /*    QumbQryWinPositionAndSize                                   */
 /*    QumbSetWinPositionAndSize                                   */
 /*    QumbRtvMultimediaMessage                                    */
 /*    QumbCreateThumbnail                                         */
 /*    QumbObjectSelection                                         */
 /*                                                                */
 /* Change Activity:                                               */
 /*    01/04/95 : Changed prototypes for the following APIs:       */
 /*                  QumbPresentObject                             */
 /*                  QumbPresentFile                               */
 /*                  QumbCaptureObject                             */
 /*               Input and output formats/structures parameters   */
 /*               are now void pointers.                           */
 /*                                                                */
 /*    03/09/95 : Changed include so it can be used with both C    */
 /*               and C++ compilers.                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2508200     3D10  931201           New Include           */
 /* $A0= D2508200     3D60  950104           Chg MM API Prototypes */
 /* $A0= D2508200     3D60  950309           Enable C++ Usage      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _QUMBAPI_INCLUDED         /* Check if already included */
#define _QUMBAPI_INCLUDED         /* Set the included flag     */

/* Include the system-wide header */
#include <H/QUMBUDEF>

/* Include the object management API header */
#include <H/QUMBOAPI>

/* Include the cooperative process management API header */
#include <H/QUMBCAPI>

/* Include the multimedia API header */
#include <H/QUMBAAPI>

/* Include the generic exception ID header */
#include <H/QUMBUMSG>

/* Include the object management API exception ID header */
#include <H/QUMBOMSG>

/* Include the cooperative process management API exception ID header */
#include <H/QUMBCMSG>

/* Include the multimedia API exception ID header */
#include <H/QUMBAMSG>

#ifdef __cplusplus
   extern "OS" {
#else
   #pragma argument(QumbCreateObject,OS,nowiden)
   #pragma argument(QumbSetObjectAttribute,OS,nowiden)
   #pragma argument(QumbSetObjectThumbnail,OS,nowiden)
   #pragma argument(QumbRtvObjectAttribute,OS,nowiden)
   #pragma argument(QumbRtvObjectThumbnail,OS,nowiden)
   #pragma argument(QumbQryObjectsByAttribute,OS,nowiden)
   #pragma argument(QumbRtvUniqueID,OS,nowiden)
   #pragma argument(QumbRtvUserAuthorityToObject,OS,nowiden)
   #pragma argument(QumbRtvObjectOwner,OS,nowiden)
   #pragma argument(QumbSetObjectOwner,OS,nowiden)
   #pragma argument(QumbDeleteObject,OS,nowiden)
   #pragma argument(QumbCopyObject,OS,nowiden)
   #pragma argument(QumbMoveObject,OS,nowiden)
   #pragma argument(QumbRtvObjectAuthority,OS,nowiden)
   #pragma argument(QumbSetObjectAuthority,OS,nowiden)
   #pragma argument(QumbCopyObjectData,OS,nowiden)
   #pragma argument(QumbMoveObjectData,OS,nowiden)
   #pragma argument(QumbDeleteObjectData,OS,nowiden)
   #pragma argument(QumbQryObjects,OS,nowiden)
   #pragma argument(QumbResolveKeyObject,OS,nowiden)
   #pragma argument(QumbQryDevices,OS,nowiden)
   #pragma argument(QumbQryConnectors,OS,nowiden)
   #pragma argument(QumbReturnData,OS,nowiden)
   #pragma argument(QumbProcessRequest,OS,nowiden)
   #pragma argument(QumbRtvData,OS,nowiden)
   #pragma argument(QumbQryUser,OS,nowiden)
   #pragma argument(QumbQryOriginatingLocation,OS,nowiden)
   #pragma argument(QumbSendNamedAsyncID,OS,nowiden)
   #pragma argument(QumbClearData,OS,nowiden)
   #pragma argument(QumbPresentObject,OS,nowiden)
   #pragma argument(QumbPresentFile,OS,nowiden)
   #pragma argument(QumbCaptureObject,OS,nowiden)
   #pragma argument(QumbControlProcess,OS,nowiden)
   #pragma argument(QumbQryWinPositionAndSize,OS,nowiden)
   #pragma argument(QumbSetWinPositionAndSize,OS,nowiden)
   #pragma argument(QumbRtvMultimediaMessage,OS,nowiden)
   #pragma argument(QumbCreateThumbnail,OS,nowiden)
   #pragma argument(QumbObjectSelection,OS,nowiden)
#endif

/* ************************************************************************* */
/*                   Object Management API Prototypes                        */
/* ************************************************************************* */

/* Prototype for the USF object management API used to create objects.       */
VOID QumbCreateObject(
                  PUCHAR puchNewObjectID,
                  PUCHAR puchObjectType,
               