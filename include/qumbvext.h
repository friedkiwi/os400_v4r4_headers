 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBVEXT                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities SADC exit header */
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
 /*    This header file is used to write SADC device exit programs */
 /*    for new video devices.                                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*     DEVICE_INIT_PARMS                                          */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*     CMDEXIT                                                    */
 /*     STSEXIT                                                    */
 /*     INITEXIT                                                   */
 /*     ERREXIT                                                    */
 /*     DATAEXIT                                                   */
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

#ifndef _QUMBVEXT_INCLUDED
#define _QUMBVEXT_INCLUDED
/*********************************************************************/
/*                                                                   */
/*                    ASCII characters                               */
/*                                                                   */
/*********************************************************************/
#define A     0x41
#define B     0x42
#define C     0x43
#define D     0x44
#define E     0x45
#define F     0x46
#define G     0x47
#define H     0x48
#define I     0x49
#define J     0x4A
#define K     0x4B
#define L     0x4C
#define M     0x4D
#define N     0x4E
#define O     0x4F
#define P     0x50
#define Q     0x51
#define R     0x52
#define S     0x53
#define T     0x54
#define U     0x55
#define V     0x56
#define W     0x57
#define X     0x58
#define Y     0x59
#define Z     0x5A

#define CR    0x0d
#define COLON 0x3a

/*--------------------------------------------------------------------------*/
/* Defines used in command stream processing                                */
/*--------------------------------------------------------------------------*/

/* Command types... */
#define SENDCOMMAND       0x01      /* Send Data Byte to The Player */
#define SENDVALUE         0x02      /* Send Data Byte to player (no response)*/
#define SENDPARM          0x03      /* Send Parameter (Data is a Parm ) */
#define WAITFORRESPONSE   0x04      /* Wait for player response.... */
#define WAITFORPOSITION   0x05      /* Wait for a play to complete */
#define WAITFORPLAYERMODE 0x06      /* Wait for a player mode... */
#define WAITWHILEPLAYERMODE 0x07    /* Wait while a player mode... */
#define QUERYPOSITIONON   0x08      /* Query position during play/record */
#define QUERYPOSITIONOFF  0x09     /* Don't query position during play/record */
#define SENDCOMMANDSYNC   0x0A   /* Send byte to device and wait for response */
#define SENDPARMSYNC      0x0B      /* Send parm to device byte at a time */
#define WAITFORPLAYERDATA 0x15      /* Wait for specified data ... */
#define READRESPONSE      0x16      /* Read device response data */
#define STATUSPOSITION    0x17      /* Get status position */


/* Options used with the above... */
#define PARM1  0x01              /* Data for Send Number is Parm #1 */
#define PARM2  0x02              /* Data for Send Number is Parm #2 */
#define PARM3  0x03              /* Data for Send Number is Parm #3 */

/*****************************************************************************/
/* Structure definitions                                                     */
/*****************************************************************************/

typedef struct {
    WORD    wDeviceType;     /* MCI device type number                  */
    WORD    wDataType;       /* Data type returned by device            */
    WORD    wDataIndex;      /* Number of return bytes to ignore        */
    WORD    wDataLength;     /* Max number of bytes returned by device  */
    WORD    wErrorType;      /* Type of device data for errors          */
    WORD    wErrorIndex;     /* Number of return bytes to ignore        */
                             /*   before checking for errors            */
    CHAR    szErrorData[20];
                             /* Value returned to indicate errors       */
    WORD    wErrorLength;    /* Number of bytes to check for error      */
    WORD    wPositionType;   /* Indicates if position is ASCII or binary*/
    WORD    wPositionIndex;  /* Number of return bytes to ingore        */
                             /*   before actual position value          */
    WORD    wPositionLength; /* Max number of position bytes            */
    WORD    wModeType;       /* Indicates if mode is ASCII or binary    */
    WORD    wModeIndex;      /* Number of return bytes to ingore        */
                             /*   before actual mode value              */
    WORD    wModeLength;     /* Max number of mode bytes                */
    WORD    wMaxBytes;       /* Max number of bytes to read before      */
                             /*   continuing                            */
    CHAR    cEndOfData;      /* Character used to signal end of data    */
    WORD    wMaxWait;        /* Max time to wait for a device to        */
                             /*   respond before continuing             */
    CHAR    szQueryMode[10];
                        /* Characters to send to device to get mode     */
    WORD    wDevPositionFormat; /* Position format of device            */
    WORD    wParmPositionFormat;/* Position format of parameter         */
    WORD    wNumFramesPerSec;/* Number of frames shown per second       */
    WORD    wCanSupportHMSF; /* Device supports HMSF 0-No 1-Yes         */
    CHAR    szQueryPosition[10];
                             /* Characters to send to device to get     */
                             /*   frame position                        */
    CHAR    szQueryTime[10];
                             /* Characters to send to device to get     */
                             /*   time position                         */
    CHAR    szQueryPositionFormat[10];
                    