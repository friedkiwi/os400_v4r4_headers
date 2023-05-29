 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBCMSG                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities cooperative      */
 /*                   process management exceptions                */
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
 /*    Exception IDs returned by System Facilities cooperative     */
 /*    process management APIs.                                    */
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
 /* $A0= D2508200     3D60  950109           Added QMB042A         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _QUMBCMSG_INCLUDED         /* Check if already included */
#define _QUMBCMSG_INCLUDED         /* Set the included flag     */

/* The following exceptions are generated on the workstation: */
#define QUMBRC_CP_INVALID_SDDS_FORMAT           "QMB0425"
#define QUMBRC_CP_INVALID_DATA_VERSION          "QMB0426"
#define QUMBRC_CP_DATA_CONVERSION_ERROR         "QMB0427"
#define QUMBRC_CP_ROUTER_NOT_REG                "QMB042A"

/* The following exceptions are generated on the host: */
#define QUMBRC_CP_FUNC_ERROR                    "QMB8401"
#define QUMBRC_CP_COMM_INTERNAL_ERROR           "QMB8402"
#define QUMBRC_CP_RESOURCE_ERROR                "QMB8403"
#define QUMBRC_CP_INTERNAL_ERROR                "QMB8404"
#define QUMBRC_CP_FORMAT_TYPE_ERROR             "QMB8405"
#define QUMBRC_CP_FORMAT_LEN_ERROR              "QMB8406"
#define QUMBRC_CP_PWSID_INVALID                 "QMB8407"
#define QUMBRC_CP_RECORD_NOT_FOUND_ERR          "QMB8409"
#define QUMBRC_CP_RSLV_USR_SPC_PTR_ERR          "QMB840A"
#define QUMBRC_CP_CRT_USR_SPC_ERR               "QMB840B"
#define QUMBRC_CP_FUNC_ID_NOT_FOUND             "QMB840C"
#define QUMBRC_CP_DQ_ALLOCATE_ERROR             "QMB840D"
#define QUMBRC_CP_RRP_SUBMIT_ERROR              "QMB840E"
#define QUMBRC_CP_UNABLE_TO_FORMAT_RID          "QMB840F"
#define QUMBRC_CP_DATA_QUEUE_WRITE_ERR          "QMB8410"
#define QUMBRC_CP_DATA_BLOCK_ERROR              "QMB8411"
#define QUMBRC_CP_3RD_PTY_APP_NOT_FND           "QMB8412"
#define QUMBRC_CP_DATA_BLOCK_ORDER_ERR          "QMB8413"
#define QUMBRC_CP_TIMED_OUT_ON_DQ_READ          "QMB8414"
#define QUMBRC_CP_INPUT_FORMAT_ERROR            "QMB8415"
#define QUMBRC_CP_NOT_AUT_PWS                   "QMB8417"
#define QUMBRC_CP_PWS_NOT_RUNNING_USF           "QMB8418"
#define QUMBRC_CP_TERMINATING                   "QMB8419"

#endif /* defined _QUMBCMSG_INCLUDED */
