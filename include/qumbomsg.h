 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBOMSG                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities object management*/
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
 /*    Exception IDs returned by System Facilities object          */
 /*    management APIs.                                            */
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
 /* $A0= D2508200     3D60  950110           Added QMB8673         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _QUMBOMSG_INCLUDED         /* Check if already included */
#define _QUMBOMSG_INCLUDED         /* Set the included flag     */

/* The following exceptions are generated on the workstation: */
#define QUMBRC_MG_INV_USFPATH                   "QMB0602"
#define QUMBRC_MG_ACCESS_DENIED                 "QMB0604"
#define QUMBRC_MG_INV_DRIVE                     "QMB0605"
#define QUMBRC_MG_INV_PATH                      "QMB0606"
#define QUMBRC_MG_STAGE_DISABLED                "QMB0607"
#define QUMBRC_MG_STAGE_SIZE_EXCEEDED           "QMB0608"
#define QUMBRC_MG_INV_TARGET                    "QMB0609"
#define QUMBRC_MG_COPY_FAILED                   "QMB060A"
#define QUMBRC_MG_COULD_NOT_COPY                "QMB060B"
#define QUMBRC_MG_DISK_FULL                     "QMB060C"
#define QUMBRC_MG_FILE_NOT_FOUND                "QMB060D"
#define QUMBRC_MG_INI_ACCESS_FAILED             "QMB060E"
#define QUMBRC_MG_FILE_EXISTS                   "QMB060F"
#define QUMBRC_MG_NO_REPO_DATA                  "QMB0612"
#define QUMBRC_MG_NO_PCFILE_FOUND               "QMB0613"
#define QUMBRC_MG_PWS_INTERNAL_ERROR            "QMB0614"
#define QUMBRC_MG_INV_OBJTYPE                   "QMB0615"
#define QUMBRC_MG_INV_ESC                       "QMB0619"
#define QUMBRC_MG_INV_IPARM_FORCECOPY           "QMB061B"


/* The following exceptions are generated on the host: */
#define QUMBRC_MG_PARENT_CONT_IN_USE            "QMB8600"
#define QUMBRC_MG_AUT_TO_PARENT_CONT            "QMB8601"
#define QUMBRC_MG_NO_SPACE_OBJ_REPO             "QMB8602"
#define QUMBRC_MG_MEDIA_WRITE_PROTECT           "QMB8603"
#define QUMBRC_MG_AUT_TO_COMMAND                "QMB8604"
#define QUMBRC_MG_SYS_ERR                       "QMB8605"
#define QUMBRC_MG_INTERNAL_ERR                  "QMB8606"
#define QUMBRC_MG_TARGET_CONT_MISSING           "QMB8607"
#define QUMBRC_MG_OBJ_NOT_FOUND                 "QMB8608"
#define QUMBRC_MG_OBJ_IN_USE                    "QMB8609"
#define QUMBRC_MG_AUT_TO_OBJ                    "QMB860A"
#define QUMBRC_MG_OBJ_READ_ONLY                 "QMB860B"
#define QUMBRC_MG_NOT_IN_SYSDIR                 "QMB860C"
#define QUMBRC_MG_INV_OPARM_OBJID               "QMB860D"
#define QUMBRC_MG_INV_IPARM_OBJTYPE             "QMB860E"
#define QUMBRC_MG_INV_IPARM_OBJNAME             "QMB860F"
#define QUMBRC_MG_INV_IPARM_TGT_CONT            "QMB8610"
#define QUMBRC_MG_INV_IPARM_NOT_CONT            "QMB8612"
#define QUMBRC_MG_MAX_CONTAINER_DEPTH           "QMB8613"
#define QUMBRC_MG_MAX_OBJS                      "QMB8614"
#define QUMBRC_MG_OBJNAME_NOT_UNIQUE            "QMB8615"
#define QUMBRC_MG_INV_IPARM_OBJID               "QMB8616"
#define QUMBRC_MG_INV_OBJECT                    "QMB8617"
#define QUMBRC_MG_INV_IPARM_ATTRID              "QMB8618"
#define QUMBRC_MG_INV_OBJ_ATTRID                "QMB8619"
#define QUMBRC_MG_INV_IPARM_ACTION              "QMB861A"
#define QUMBRC_MG_INV_ATTR_ACTION               "QMB861B"
#define QUMBRC_MG_INV_IPARM_VALUE1              "QMB861C"
#define QUMBRC_MG_INV_IPARM_VAL1_LEN            "QMB861D"
#define QUMBRC_MG_INV_IPARM_VAL1_MAXLEN         "QMB861E"
#define QUMBRC_MG_INV_IPARM_VALUE2              "QMB861F"
#define QUMBRC_MG_INV_IPARM_VAL2_LEN            "QMB8620"
#define QUMBRC_MG_INV_IPARM_VAL2_MAXLEN         "QMB8621"
#define QUMBRC_MG_AUT_SHADOWED_OBJ              "QMB8622"
#define QUMBRC_MG_INV_OPARM_UNIQUEID            "QMB8623"
#define QUMBRC_MG_INV_IPARM_USERID              "QMB8624"
#define QUMBRC_MG_INV_OPARM_AUT                 "QMB8625"
#define QUMBRC_MG_INV_OPARM_AUTBITS             "QMB8626"
#define QUMBRC_MG_INV_OPARM_OWNER               "QMB8627"
#define QUMBRC_MG_NO_AUT_OWNER_PROFILE          "QMB8628"
#define QUMBRC_MG_INV_IPARM_OWNER               "QMB8629"
#define QUMBRC_MG_INV_IPARM_KEEPOWNAUT          "QMB862A"
#define QUMBRC_MG_INV_IPARM_FORCE_DELETE        "QMB862B"
#define QUMBRC_MG_INV_OPARM_ATTR_BUF            "QMB862C"
#define QUMBRC_MG_INV_OPARM_ATTR_LEN            "QMB862D"
#define QUMBRC_MG_ATTR_RMV_NOT_FOUND            "QMB862E"
#define QUMBRC_MG_ATTR_CHG_NOT_FOUND            "QMB862F"
#define QUMBRC_MG_AUT_KEY_OBJ_MBR               "QMB8630"
#define QUMBRC_MG_SHADOWED_OBJ_NOT_SET          "QMB8631"
#define QUMBRC_MG_SHADOWED_OBJ_NOT_FOUND        "QMB8632"
#define QUMBRC_MG_AUT_TO_REPO_FILE              "QMB8635"
#define QUMBRC_MG_AUT_TO_BASE_CONTAINER         "QMB8636"
#define QUMBRC_MG_INV_IPARM_SEARCH_VALUE        "QMB8637"
#define QUMBRC_MG_INV_IPARM_SEARCH_LEN          "QMB8638"
#define QUMBRC_MG_INV_IPARM_RTNBUF_LEN          "QMB8639"
#define QUMBRC_MG_INV_OPARM_RTNBUF              "QMB863A"
#define QUMBRC_MG_INV_IPARM_RTNFMT_NAME         "QMB863B"
#define QUMBRC_MG_INV_IPARM_QRY_TYPE            "QMB863C"
#define QUMBRC_MG_INV_IPARM_INC_PARTIAL         "QMB863D"
#define QUMBRC_MG_CONTAINER_NOT_EMPTY           "QMB863E"
#define QUMBRC_MG_BASECONT_HAS_NO_PARENT        "QMB863F"
#define QUMBRC_MG_REPO_FILE_NOT_FOUND           "QMB8640"
#define QUMBRC_MG_CANNOT_DLT_BASE_CONT          "QMB8641"
#define QUMBRC_MG_DEPENDENCIES_EXIST            "QMB8642"
#define QUMBRC_MG_NO_AUT_DEPENDENCIES           "QMB8643"
#define QUMBRC_MG_INV_IPARM_THUMBNAIL           "QMB8644"
#define QUMBRC_MG_INV_IPARM_THUMB_LEN           "QMB8645"
#define QUMBRC_MG_INV_OPARM_THUMB_LEN           "QMB8646"
#define QUMBRC_MG_INV_OPARM_THUMBNAIL           "QMB8647"
#define QUMBRC_MG_AUT_TO_TARGET_CONT            "QMB8648"
#define QUMBRC_MG_INV_IPARM_COPY_STREAM         "QMB8649"
#define QUMBRC_MG_CANNOT_MOVE_CONT              "QMB864A"
#define QUMBRC_MG_REPO_FILE_IN_USE              "QMB864B"
#define QUMBRC_MG_SHADOWED_OBJ_IN_USE           "QMB864C"
#define QUMBRC_MG_TARGET_CONT_IN_USE            "QMB864D"
#define QUMBRC_MG_MOVE_SHADOW                   "QMB864E"
#define QUMBRC_MG_NO_AUT_USER_PROFILE       