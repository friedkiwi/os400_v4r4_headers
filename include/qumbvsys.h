 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QUMBVSYS                                     */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities SADC main header */
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
 /*    This is the main header file for Shared Analog Device       */
 /*    Control (SADC).                                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List:                                                   */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /* Function Prototype List:                                       */
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

#ifndef _QUMBVSYS_INCLUDED
#define _QUMBVSYS_INCLUDED

#define MCI_TRUE                        1
#define MCI_FALSE                       0

/************************************************************************/
/*                                                                      */
/*      MCI command message identifiers which are for devices or groups */
/*                                                                      */
/************************************************************************/
#define MCI_CLOSE                       2
#define MCI_PLAY                        4
#define MCI_SEEK                        5
#define MCI_STOP                        6
#define MCI_PAUSE                       7
#define MCI_RECORD                      14
#define MCI_SET                         12
#define MCI_RESUME                      29
/*********************************************************************/
/*                                                                   */
/*      MCI command message identifiers which are not for groups     */
/*                                                                   */
/*********************************************************************/
#define MCI_OPEN                        1
#define MCI_ESCAPE                      3
#define MCI_INFO                        8
#define MCI_GETDEVCAPS                  9
#define MCI_STATUS                      10
#define MCI_SPIN                        11
#define MCI_STEP                        13
#define MCI_SYSINFO                     15
#define MCI_SET_CUEPOINT                19
#define MCI_SET_POSITION_ADVISE         20

/*********************************************************************/
/* this and all subsequent message ID's are reserved for the user    */
/*********************************************************************/
#define MCI_USER_MESSAGES               2000
#define MCI_CONNECT                     MCI_USER_MESSAGES+1
#define MCI_RECEIVE                     MCI_USER_MESSAGES+2
#define MCI_SEND                        MCI_USER_MESSAGES+4
#define MCI_SET_TUNER_CHANNEL           MCI_USER_MESSAGES+5

/*********************************************************************/
/* Special Device ID for "all"                                       */
/*********************************************************************/
#define MCI_ALL_DEVICE_ID               0xFFFF

/*********************************************************************/
/* Maximum length for MCI device name                                */
/*********************************************************************/
#define MAX_DEVICE_NAME                 36
#define MAX_ALIAS_NAME                  20
#define MAX_PRODINFO                    20
#define MAX_EXTENSION_NAME              4
#define MAX_DEV_PARAMS                  128
#define MAX_VERSION_NUMBER              6
#define MAX_PDD_NAME                    9
#define MAX_CLASSES                     10
#define MAX_EXTENSIONS                  25
#define MAX_TYPEBUFFER                  256
#define MAX_INFO                        250
#define MAX_DATA                        250

/************************************************************************/
/* MCI Device Type ID                                                   */
/************************************************************************/
#define MCI_DEVTYPE_VIDEOTAPE           1
#define MCI_DEVTYPE_VIDEODISC           2
#define MCI_DEVTYPE_SWITCH             42
#define MCI_DEVTYPE_TUNER              43
#define MCI_DEVTYPE_CODEC              44
#define MCI_DEVTYPE_CAMERA             45
#define MCI_DEVTYPE_SCAN_CONVERTER     46

#define MCI_DEVTYPE_VIDEOTAPE_NAME          "Videotape"
#define MCI_DEVTYPE_VIDEODISC_NAME          "Videodisc"
#define MCI_DEVTYPE_SWITCH_NAME             "Switch"
#define MCI_DEVTYPE_TUNER_NAME              "Tuner"
#define MCI_DEVTYPE_CODEC_NAME              "Codec"
#define MCI_DEVTYPE_CAMERA_NAME             "Camera"
#define MCI_DEVTYPE_SCAN_CONVERTER_NAME     "ScanConverter"

/*********************************************************************/
/* Getdevcaps, set, and status item base values                      */
/*********************************************************************/

#define MCI_AMP_ITEM_BASE                   0x00001000L
#define MCI_CD_ITEM_BASE                    0x00002000L
#define MCI_CDXA_ITEM_BASE                  0x00003000L
#define MCI_VD_ITEM_BASE                    0x00004000L
#define MCI_SEQ_ITEM_BASE                   0x00005000L
#define MCI_WAVE_ITEM_BASE                  0x00006000L
#define MCI_VID_ITEM_BASE                   0x00007000L
#define MCI_DGV_ITEM_BASE                   0x00008000L
#define MCI_OVLY_ITEM_BASE                  0x00009000L

/*********************************************************************/
/* Flags for mciDriverNotify                                         */
/*********************************************************************/
#define MCI_NOTIFY_SUCCESSFUL               0x0000
#define MCI_NOTIFY_SUPERSEDED               0x0001
#define MCI_NOTIFY_ABORTED                  0x0002
#define MCI_NOTIFY_ERROR                    0x0003
#define MCI_NOTIFY_POSITION                 0x0004
#define MCI_NOTIFY_CUEPOINT                 0x0005

/*********************************************************************/
/* Standard flags                                                    */
/*     0x000000XX are reserved for standard flags                    */
/*********************************************************************/
#define MCI_NOTIFY                          0x00000001L
#define MCI_WAIT                            0x00000002L
#define MCI_FROM                            0x00000004L
#define MCI_TO                              0x00000008L
#define MCI_MILLISECONDS                    0x00000010L
#define MCI_TRACK                           0x00000020L
#define MCI_OVER                            0x00000040L

/*********************************************************************/
/* Format Flags                                                      */
/*********************************************************************/
#define MCI_FORMAT_OTHER                    0x00000000L
#define MCI_FORMAT_MILLISECONDS             0x00000001L
#define MCI_FORMAT_MMTIME                   0x00000002L
#define MCI_FORMAT_PERCENTAGE               0x00000003L
#define MCI_FORMAT_FPS                      0x00000004L
#define MCI_FORMAT_MSF                      0x00000005L
#define MCI_FORMAT_TMSF                     0x00000006L
#define MCI_FORMAT_CHAPTERS                 0x00000007L
#define MCI_FORMAT_FRAMES                   0x00000008L
#define MCI_FORMAT_HMS                      0x00000009L
#define MCI_FORMAT_TRACKS                   0x0000000AL
#define MCI_FORMAT_BYTES                    0x0000000BL
#define MCI_FORMAT_SAMPLES                  0x0000000CL
#define MCI_FORMAT_HMSF                     0x0000000DL

/*********************************************************************/
/* parameters for default co