 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBVERR                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities SADC error codes */
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
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2508200     3D10  940715 HENCKEL   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _QUMBVERR_INCLUDED
#define _QUMBVERR_INCLUDED

#ifndef _MEERROR_H_
#define _MEERROR_H_
#endif

#ifndef NO_ERROR
#define NO_ERROR                          0
#endif


/*****************************************/
/* MCI Device Manager Error Return codes */
/*****************************************/

#define MCIERR_BASE                      5000
#define MCIERR_SUCCESS                   0
#define MCIERR_INVALID_DEVICE_ID         (MCIERR_BASE + 1)
#define MCIERR_NO_MSG_FOUND              (MCIERR_BASE + 2)
#define MCIERR_UNRECOGNIZED_KEYWORD      (MCIERR_BASE + 3)
#define MCIERR_UNRECOGNIZED_COMMAND      (MCIERR_BASE + 5)
#define MCIERR_HARDWARE                  (MCIERR_BASE + 6)
#define MCIERR_INVALID_DEVICE_NAME       (MCIERR_BASE + 7)
#define MCIERR_OUT_OF_MEMORY             (MCIERR_BASE + 8)
#define MCIERR_DEVICE_OPEN               (MCIERR_BASE + 9)
#define MCIERR_CANNOT_LOAD_DRIVER        (MCIERR_BASE + 10)
#define MCIERR_MISSING_COMMAND_STRING    (MCIERR_BASE + 11)
#define MCIERR_PARAM_OVERFLOW            (MCIERR_BASE + 12)
#define MCIERR_MISSING_STRING_ARGUMENT   (MCIERR_BASE + 13)
#define MCIERR_BAD_INTEGER               (MCIERR_BASE + 14)
#define MCIERR_PARSER_INTERNAL           (MCIERR_BASE + 15)
#define MCIERR_DRIVER_INTERNAL           (MCIERR_BASE + 16)
#define MCIERR_MISSING_PARAMETER         (MCIERR_BASE + 17)
#define MCIERR_UNSUPPORTED_FUNCTION      (MCIERR_BASE + 18)
#define MCIERR_FILE_NOT_FOUND            (MCIERR_BASE + 19)
#define MCIERR_DEVICE_NOT_READY          (MCIERR_BASE + 20)
#define MCIERR_INTERNAL                  (MCIERR_BASE + 21)
#define MCIERR_DRIVER                    (MCIERR_BASE + 22)
#define MCIERR_CANNOT_USE_ALL            (MCIERR_BASE + 23)
#define MCIERR_MULTIPLE                  (MCIERR_BASE + 24)
#define MCIERR_EXTENSION_NOT_FOUND       (MCIERR_BASE + 25)
#define MCIERR_OUTOFRANGE                (MCIERR_BASE + 26)
#define MCIERR_CANNOT_ADD_ALIAS          (MCIERR_BASE + 27)
#define MCIERR_FLAGS_NOT_COMPATIBLE      (MCIERR_BASE + 28)
#define MCIERR_CANNOT_USE_NOUNLOAD       (MCIERR_BASE + 29)
#define MCIERR_FILE_NOT_SAVED            (MCIERR_BASE + 30)
#define MCIERR_DEVICE_TYPE_REQUIRED      (MCIERR_BASE + 31)
#define MCIERR_DEVICE_LOCKED             (MCIERR_BASE + 32)
#define MCIERR_DUPLICATE_ALIAS           (MCIERR_BASE + 33)
#define MCIERR_INSTANCE_INACTIVE         (MCIERR_BASE + 34)

#define MCIERR_COMMAND_TABLE             (MCIERR_BASE + 35)
#define MCIERR_DUPLICATE_KEYWORD         (MCIERR_BASE + 42)
#define MCIERR_COMMAND_STRING_OVERFLOW   (MCIERR_BASE + 43)
#define MCIERR_DRIVER_PROC_NOT_FOUND     (MCIERR_BASE + 44)
#define MCIERR_INVALID_DEVICE_TYPE       (MCIERR_BASE + 45)
#define MCIERR_INVALID_DEVICE_ORDINAL    (MCIERR_BASE + 46)
#define MCIERR_HEADPHONES_NOT_SET        (MCIERR_BASE + 47)
#define MCIERR_SPEAKERS_NOT_SET          (MCIERR_BASE + 48)
#define MCIERR_SOUND_NOT_SET             (MCIERR_BASE + 49)
#define MCIERR_INVALID_BUFFER            (MCIERR_BASE + 50)
#define MCIERR_INVALID_MEDIA_TYPE        (MCIERR_BASE + 51)
#define MCIERR_INVALID_CONNECTOR_INDEX   (MCIERR_BASE + 52)
#define MCIERR_NO_CONNECTION             (MCIERR_BASE + 53)
#define MCIERR_INVALID_FLAG              (MCIERR_BASE + 54)
#define MCIERR_CANNOT_LOAD_DSP_MOD       (MCIERR_BASE + 55)
#define MCIERR_ALREADY_CONNECTED         (MCIERR_BASE + 56)
#define MCIERR_INVALID_CALLBACK_HANDLE   (MCIERR_BASE + 57)
#define MCIERR_DRIVER_NOT_FOUND          (MCIERR_BASE + 58)
#define MCIERR_DUPLICATE_DRIVER          (MCIERR_BASE + 59)
#define MCIERR_INI_FILE                  (MCIERR_BASE + 60)
#define MCIERR_INVALID_GROUP_ID          (MCIERR_BASE + 61)
#define MCIERR_ID_ALREADY_IN_GROUP       (MCIERR_BASE + 62)
#define MCIERR_MEDIA_CHANGED             (MCIERR_BASE + 63)
#define MCIERR_MISSING_FLAG              (MCIERR_BASE + 64)
#define MCIERR_UNSUPPORTED_FLAG          (MCIERR_BASE + 65)
#define MCIERR_DRIVER_NOT_LOADED         (MCIERR_BASE + 66)
#define MCIERR_INVALID_MODE              (MCIERR_BASE + 67)
#define MCIERR_INVALID_ITEM_FLAG         (MCIERR_BASE + 68)
#define MCIERR_INVALID_TIME_FORMAT_FLAG  (MCIERR_BASE + 69)
#define MCIERR_SPEED_FORMAT_FLAG         (MCIERR_BASE + 70)
#define MCIERR_INVALID_AUDIO_FLAG        (MCIERR_BASE + 71)
#define MCIERR_NODEFAULT_DEVICE          (MCIERR_BASE + 72)
#define MCIERR_DUPLICATE_EXTENSION       (MCIERR_BASE + 73)
#define MCIERR_FILE_ATTRIBUTE            (MCIERR_BASE + 74)
#define MCIERR_DUPLICATE_CUEPOINT        (MCIERR_BASE + 75)
#define MCIERR_INVALID_CUEPOINT          (MCIERR_BASE + 76)
#define MCIERR_CUEPOINT_LIMIT_REACHED    (MCIERR_BASE + 77)
#define MCIERR_MISSING_ITEM              (MCIERR_BASE + 78)
#define MCIERR_MISSING_TIME_FORMAT       (MCIERR_BASE + 79)
#define MCIERR_MISSING_SPEED_FORMAT      (MCIERR_BASE + 80)
#define MCIERR_INVALID_CONNECTOR_TYPE    (MCIERR_BASE + 81)
#define MCIERR_TARGET_DEVICE_FULL        (MCIERR_BASE + 82)
#define MCIERR_UNSUPPORTED_CONN_TYPE     (MCIERR_BASE + 83)
#define MCIERR_CANNOT_MODIFY_CONNECTOR   (MCIERR_BASE + 84)
#define MCIERR_RECORD_ABORTED            (MCIERR_BASE + 85)
#define MCIERR_GROUP_COMMAND             (MCIERR_BASE + 86)
#define MCIERR_DEVICE_NOT_FOUND          (MCIERR_BASE + 87)
#define MCIERR_RESOURCE_NOT_AVAILABLE    (MCIERR_BASE + 88)
#define MCIERR_INVALID_IO_PROC           (MCIERR_BASE + 89)

#define MCIERR_VDP_COMMANDCANCELLED      (MCIERR_BASE + 106)
#define MCIERR_VDP_COMMANDFAILURE        (MCIERR_BASE + 107)
#define MCIERR_VDP_NOTSPUNUP             (MCIERR_BASE + 108)
#define MCIERR_VDP_NOCHAPTER             (MCIERR_BASE + 109)
#define MCIERR_VDP_NOSIDE                (MCIERR_BASE + 110)
#define MCIERR_VDP_NOSIZE                (MCIERR_BASE + 111)
#define MCIERR_VDP_INVALID_TIMEFORMAT    (MCIERR_BASE + 112)

#define MCIERR_INDETERMINATE_LENGTH      (MCIERR_BASE + 120)
#define