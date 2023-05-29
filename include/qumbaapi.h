 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBAAPI                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities multimedia       */
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
 /*    This header file contains System Facilities multimedia      */
 /*    API defines, structures, macros, typedefs, and function     */
 /*    prototypes.                                                 */
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

#ifndef _QUMBAAPI_INCLUDED         /* Check if already included */
#define _QUMBAAPI_INCLUDED         /* Set the included flag     */

/*  Standard flags for the ulAsychFlag parameter */
#define QUMB_SYNC                      1
#define QUMB_ASYNC                     2

/* Standard flags for the ulControlFlag parameter */
#define QUMB_HOLD                      0x0001
#define QUMB_START_IMMEDIATE           0x0002
#define QUMB_EXIT_ON_COMPLETION        0x1000
#define QUMB_LIVE_VIEW                 0x2000
#define QUMB_STAGE_REPO_OBJS           0x4000

/* Standard flags for the ulEUIFlag parameter */
#define QUMB_CTL_PANEL                 0x0001
#define QUMB_NO_CTL_PANEL              0x0002
#define QUMB_NO_SYS_MENU               0x0100
#define QUMB_NO_MIN_BUTTON             0x0200
#define QUMB_NO_MAX_BUTTON             0x0400
#define QUMB_NON_SIZABLE_BORDER        0x0800
#define QUMB_NO_WINCAPTION             0x1000
#define QUMB_API_RETAINS_FOCUS         0x2000
#define QUMB_APP_RETAINS_FOCUS         0x4000


/* Valid flags for ProcessType flag in return structure */
#define QUMB_USF_NATIVE                0x0001
#define QUMB_USF_EXTERNAL              0x0002

/* Standard flags for ulControlId on QumbControlProcess and */
/* FzzmControlProcess APIs                                  */
#define QUMB_END_API                   1
#define QUMB_PLAY                      2
#define QUMB_RECORD                    3
#define QUMB_PAUSE                     4
#define QUMB_RESUME                    5
#define QUMB_MONITOR                   6
#define QUMB_CAPTURE                   7
#define QUMB_STOP                      8
#define QUMB_SAVE                      9
#define QUMB_TRACK_ADVANCE             12
#define QUMB_TRACK_REVERSE             13
#define QUMB_HIDE                      14
#define QUMB_SHOW                      15
#define QUMB_CHANGE_OBJECT             16

/* Valid flags for ulNotifyFlags field on QumbObjectSelection */
#define QUMB_LEFT_BTN_CLICK            0x01
#define QUMB_LEFT_BTN_DBL_CLICK        0x02
#define QUMB_MIDDLE_BTN_CLICK          0x04
#define QUMB_MIDDLE_BTN_DBL_CLICK      0x08
#define QUMB_RIGHT_BTN_CLICK           0x10
#define QUMB_RIGHT_BTN_DBL_CLICK       0x20

/* Maximum sizes for MMAPI parameter fields */
#define QUMB_MAX_SIZE_WIN_TITLE        40

/* Possible return status messages from MMAPI */
#define QUMB_MSG_COMPLETE    1     /* API has completed playing the */
                                   /* specified object              */
#define QUMB_MSG_EXIT        2     /* API is no longer active       */

/* Multimedia Message usMsgIndicator field valus */
#define QUMB_STATUS_MSG                     1   /* status msg       */
#define QUMB_OBJECT_SELECTION_MSG           2   /* notification msg */


/* Structure to hold all of the parameters passed into PresentObject() call */
typedef _Packed struct {
   CHAR         achRemoteLocationName[QUMB_LEN_REMOTE_LOCATION_NAME];
   CHAR         achObjectID[QUMB_ATTRLEN_OBJID];
   ULONG        ulAsyncFlag;
   ULONG        ulControlFlag;
   ULONG        ulEUIFlag;
   ULONG        ulSADCPWSTargetDeviceID;
   ULONG        ulSADCAS400SourceDeviceID;
   ULONG        ulSADCAS400TargetDeviceID;
   CHAR         achWindowTitle[QUMB_MAX_SIZE_WIN_TITLE];
} QUMBPRESOBJ, *PQUMBPRESOBJ;

/* Structure to hold all of the parameters passed into PresentObject() call */
/*  in order to take advantage of the ability to set the position and of    */
/*  of the original presentation window.                                    */
typedef _Packed struct {
   CHAR         achRemoteLocationName[QUMB_LEN_REMOTE_LOCATION_NAME];
   CHAR         achObjectID[QUMB_ATTRLEN_OBJID];
   ULONG        ulAsyncFlag;
   ULONG        ulControlFlag;
   ULONG        ulEUIFlag;
   ULONG        ulSADCPWSTargetDeviceID;
   ULONG        ulSADCAS400SourceDeviceID;
   ULONG        ulSADCAS400TargetDeviceID;
   CHAR         achWindowTitle[QUMB_MAX_SIZE_WIN_TITLE];
   LONG         lXOrigin;
   LONG         lYOrigin;
   LONG         lWidth;
   LONG         lHeight;
} QUMBPRESOBJ2, *PQUMBPRESOBJ2;

/* Structure to hold all the parameters returned from PresentObject() call */
typedef _Packed struct {
   QUMBRID      AsyncID;
   CHAR         achReserved1;
   ULONG        ulProcessType;
   ULONG        ulSADCPWSTargetDeviceID;
   ULONG        ulSADCAS400SourceDeviceID;
   ULONG        ulSADCAS400TargetDeviceID;
}  QUMBPRESOBJRTN, *PQUMBPRESOBJRTN;

/* Structure to hold all of the parameters passed into PresentFile() call */
typedef _Packed struct {
   CHAR         achRemoteLocationName[QUMB_LEN_REMOTE_LOCATION_NAME];
   ULONG        ulAsyncFlag;
   ULONG        ulControlFlag;
   ULONG        ulEUIFlag;
   CHAR         achWindowTitle[QUMB_MAX_SIZE_WIN_TITLE];
   CHAR         achPathAndFileName[QUMB_ATTRLEN_PC_FILE_PATH];
} QUMBPRESFILE, *PQUMBPRESFILE;

/* Structure to hold all of the parameters passed into PresentFile() call */
/*  in order to take advantage of the ability to set the position and of    */
/*  of the original presentation window.                                    */
typedef _Packed struct {
   CHAR         achRemoteLocationName[QUMB_LEN_REMOTE_LOCATION_NAME];
   ULONG        ulAsyncFlag;
   ULONG        ulControlFlag;
   ULONG        ulEUIFlag;
   CHAR         achWindowTitle[QUMB_MAX_SIZE_WIN_TITLE];
   CHAR         achPathAndFileName[QUMB_ATTRLEN_PC_FILE_PATH];
   CHAR         achReserved1;
   LONG         lXOrigin;
   LONG         lYOrigin;
   LONG         lWidth;
   LONG         lHeight;
} QUMBPRESFILE2, *PQUMBPRESFILE2;

/* Structure to hold all of the parameters returned from PresentFile() call */
typedef _Packed struct {
   QUMBRID      AsyncID;
   CHAR         achReserved1;
   ULONG        ulProcessType;
}  QUMBPRESFILERTN, *PQUMBPRESFILERTN;

/* Str