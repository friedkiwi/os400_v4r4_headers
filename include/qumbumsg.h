 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBUMSG                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities general          */
 /*                   exceptions                                   */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description:                                                   */
 /*    Generic exception IDs returned by System Facilities APIs.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2508200     3D10  931201           New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _QUMBUMSG_INCLUDED         /* Check if already included */
#define _QUMBUMSG_INCLUDED         /* Set the included flag     */

#define QUMBRC_NOT_IMPLEMENTED                  "QMB0001"
#define QUMBRC_PARAMETER_ERROR                  "QMB0003"
#define QUMBRC_MEMORY_ERROR                     "QMB0004"
#define QUMBRC_PARAMETER_COUNT                  "QMB0007"
#define QUMBRC_PWS_MEMORY_ERROR                 "QMB0008"
#define QUMBRC_INV_IPARM_ERRCODE                "QMB0009"

#endif /* defined _QUMBUMSG_INCLUDED */
