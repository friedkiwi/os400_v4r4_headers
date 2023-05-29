 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBOAPI                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities object management*/
 /*                   header                                       */
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
 /*    This header file contains System Facilities object          */
 /*    management API defines, structures, macros and typedefs.    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*    02/27/95 : Added QUMB_IFS define which can be used to move  */
 /*               and copy object data between an IFS object and   */
 /*               the object repository.                           */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2508200     3D10  931201           New Include           */
 /* $A0= D2508200     3D60  950227           Added QUMB_IFSPATH    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _QUMBOAPI_INCLUDED         /* Check if already included */
#define _QUMBOAPI_INCLUDED         /* Set the included flag     */

/* ************************************************************************* */
/*                                                                           */
/* ************************* MACROS/DEFINITIONS **************************** */
/*                                                                           */
/* ************************************************************************* */

/* Misc USF field lengths */
#define QUMB_LEN_UNIQUE_ID              10
#define QUMB_LEN_USER_ID                10
#define QUMB_LEN_USER_AUTHORITY         10
#define QUMB_LEN_AUTHORIZATION_LIST     10
#define QUMB_LEN_NETWORK_ID             8
#define QUMB_LEN_REMOTE_DEVICE_NAME     8
#define QUMB_LEN_SADC_DEVICE_NAME       20
#define QUMB_LEN_DEVICE_OFFSET_MEMBER   12
#define QUMB_LEN_FORMAT_NAME            8
#define QUMB_LEN_MAX_SEARCH_VALUE       60
#define QUMB_LEN_MAX_QRY_DEFS           20
#define QUMB_LEN_QRY_DATE               8   /* Format: YYYYMMDD */
#define QUMB_LEN_CALENDAR_NAME          26
#define QUMB_LEN_DEVICE_DESC            50

/* Attribute ID definitions used for setting (QumbSetObjectAttribute) */
/* and retrieving (QumbRtvObjectAttribute) attributes. Attribute IDs  */
/* are also used to specify the attributes to search on when calling  */
/* the QumbQryObjects API.                                            */
#define QUMB_ATTR_OBJTYPE               1
#define QUMB_ATTR_KEYWORD               2
#define QUMB_ATTR_LANGUAGE              3
#define QUMB_ATTR_TEMPLATE              4
#define QUMB_ATTR_KEY_OBJ_MBR           5
#define QUMB_ATTR_SHADOWED_OBJ          6
#define QUMB_ATTR_PC_FILE_PATH          7
#define QUMB_ATTR_OPTICAL_FILE_PATH     8
#define QUMB_ATTR_RMV_MEDIA_TITLE       9
#define QUMB_ATTR_ESC                   10
#define QUMB_ATTR_OBJDESC               11
#define QUMB_ATTR_BASE_CONTAINER        12
#define QUMB_ATTR_CRT_DATE_TIME         13
#define QUMB_ATTR_CHG_DATE_TIME         14
#define QUMB_ATTR_OBJNAME               15
#define QUMB_ATTR_PARENT_CONTAINER      16
#define QUMB_ATTR_GENERAL               17
#define QUMB_ATTR_REPO_FILE_PATH        18
#define QUMB_ATTR_DEVICE_NAME           19
#define QUMB_ATTR_DEVICE_OFFSET         20
#define QUMB_ATTR_OBJID                 21
#define QUMB_ATTR_SEQ_OBJ_MBR           22

/* Attribute manipulation/action definitions */
#define QUMB_ACTION_SET_ATTR            '0'
#define QUMB_ACTION_ADD_ATTR            '1'
#define QUMB_ACTION_CHG_ATTR            '2'
#define QUMB_ACTION_RMV_ATTR            '3'

/* USF attribute lengths */
#define QUMB_ATTRLEN_OBJNAME            50
#define QUMB_ATTRLEN_OBJDESC            50
#define QUMB_ATTRLEN_KEYWORD            50
#define QUMB_ATTRLEN_OBJTYPE            8
#define QUMB_ATTRLEN_OBJID              20
#define QUMB_ATTRLEN_LANGUAGE           3
#define QUMB_ATTRLEN_TEMPLATE           1
#define QUMB_ATTRLEN_KEY_OBJ_MBR        20
#define QUMB_ATTRLEN_RMV_MEDIA_TITLE    54
#define QUMB_ATTRLEN_ESC                50
#define QUMB_ATTRLEN_REPO_FILE_PATH     76  /* 63 (folder) + '/' + 12 (doc) */
#define QUMB_ATTRLEN_PC_FILE_PATH       259
#define QUMB_ATTRLEN_OPTICAL_FILE_PATH  298
#define QUMB_ATTRLEN_CRT_DATE_TIME      12  /* YYYYMMDDHHMM */
#define QUMB_ATTRLEN_CHG_DATE_TIME      16  /* YYYYMMDDHHMMSSHS */
#define QUMB_ATTRLEN_OWNER              10

/* The following are USF attributes that are represented by structures:     */
/* Structure definition used for setting & rtving the device name attribute */
typedef _Packed struct _QUMBDEVICENAME {  /* QSDI0100 */
   UCHAR auchNetworkID[QUMB_LEN_NETWORK_ID];
   UCHAR auchRemoteDeviceName[QUMB_LEN_REMOTE_DEVICE_NAME];
   UCHAR auchSADCDeviceName[QUMB_LEN_SADC_DEVICE_NAME];
} QUMBDEVICENAME, * PQUMBDEVICENAME;
#define QUMB_ATTRLEN_DEVICE_NAME        sizeof(QUMBDEVICENAME)

/* Structure definition used for setting & rtving the device offset attr */
typedef _Packed struct _QUMBDEVICEOFFSET {
   UCHAR uchOffsetTimeFormat;
   UCHAR auchBeginOffset[QUMB_LEN_DEVICE_OFFSET_MEMBER];
   UCHAR auchEndOffset[QUMB_LEN_DEVICE_OFFSET_MEMBER];
} QUMBDEVICEOFFSET, * PQUMBDEVICEOFFSET;
#define QUMB_ATTRLEN_DEVICE_OFFSET      sizeof(QUMBDEVICEOFFSET)

/* Structure definition used for retrieving an object's general attributes */
typedef _Packed struct _QUMBGENERALATTRS {  /* QRYR0200 */
   UCHAR auchObjectID[QUMB_ATTRLEN_OBJID];
   UCHAR auchName[QUMB_ATTRLEN_OBJNAME];
   UCHAR auchDescription[QUMB_ATTRLEN_OBJDESC];
   UCHAR auchType[QUMB_ATTRLEN_OBJTYPE];
   UCHAR uchTemplateFlag;
   UCHAR auchCreateDateTimeStamp[QUMB_ATTRLEN_CRT_DATE_TIME];
   UCHAR auchChangeDateTimeStamp[QUMB_ATTRLEN_CHG_DATE_TIME];
   UCHAR auchOpticalPath[QUMB_ATTRLEN_OPTICAL_FILE_PATH];
   UCHAR auchPCPath[QUMB_ATTRLEN_PC_FILE_PATH];
   UCHAR auchRepositoryPath[QUMB_ATTRLEN_REPO_FILE_PATH];
   UCHAR auchRemovableMediaTitle[QUMB_ATTRLEN_RMV_MEDIA_TITLE];
   ULONG ulUserAuthorityBits;
   UCHAR auchShadowObjectID[QUMB_ATTRLEN_OBJID];
   ULONG ulShadowUserAuthorityBits;
} QUMBGENERALATTRS, * PQUMBGENERALATTRS;
#define QUMB_ATTRLEN_GENERAL            sizeof(QUMBGENERALATTRS)

/* USF Object Type Definitions */
#define QUMB_OBJTYP_SEQUENCEOBJ         "UMS     "
#define QUMB_OBJTYP_DIGITALOBJ          "UMD     "
#define QUMB_OBJTYP_VIDEOOBJ            "UMDV    "
#define QUMB_OBJTYP_AUDIOOBJ            "UMDA    "
#define QUMB_OBJTYP_IMAGEOBJ            "UMDI    "
#define QUMB_OBJTYP_TEXTOBJ             "UMDT    "
#define QUMB_OBJTYP_GRAPHICSOBJ         "UMDG    "
#define QUMB_OBJTYP_SCRIPTOBJ           "UMDS    "
#define QUMB_OBJTYP_KEYOBJ              "UK      "
#define QUMB_OBJTYP_DEVICEOBJ           "UD      "
#define QUMB_OBJTYP_CONTAINEROBJ        "UGC     "
#define QUMB_OBJTYP_SHADOWOBJ           "US      "

/* USF Object Language Definitions */
#define QUMB_OBJLANG_ANY                "ANY"  /* Special value */
#define QUMB_OBJLANG_ARABIC             "785"
#define QUMB_OBJLANG_ASIAN              "099"
#define QUMB_OBJLANG_AUSTRALIA          "061"
#define QUMB_OBJLANG_BELGIUM            "032"
#define QUMB_OBJLANG_BRAZIL             "055"
#define QUMB_OBJLANG_CANADA             "002"
#define QUMB_OBJLANG_CHINA              "088"
#define QUMB_OBJLANG_CZECHOSLOVAKIA     "042"
#define QUMB_OBJLANG_DENMARK            "045"
#define QUMB_OBJLANG_FINLAND            "358"
#define QUMB_OBJLANG_FRANCE             "033"
#define QUMB_OBJLANG_GERMANY            "049"
#define QUMB_OBJLANG_HEBREW             "972"
#define QUMB_OBJLANG_HUNGARY            "036"
#define QUMB_OBJLANG_ICELAND            "354"
#define QUMB_OBJLANG_ITALY              "039"
#define QUMB_OBJLANG_JAPAN              "081"
#define QUMB_OBJLANG_KOREA              "082"
#define QUMB_OBJLANG_LATIN_AMERICA      "003"
#define QUMB_OBJLANG_NETHERLANDS        "031"
#define QUMB_OBJLANG_NORWAY             "047"
#define QUMB_OBJLANG_POLAND             "048"
#define QUMB_OBJLANG_PORTUGAL 