 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBCAPI                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities cooperative      */
 /*                   process management header                    */
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
 /*    This header file contains System Facilities cooperative     */
 /*    process management API defines, structures, macros and      */
 /*    typedefs.                                                   */
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

#ifndef _QUMBCAPI_INCLUDED         /* Check if already included */
#define _QUMBCAPI_INCLUDED         /* Set the included flag     */

#define QUMB_LEN_AS400_LIB_NAME          10
#define QUMB_LEN_AS400_OBJ_NAME          10
#define QUMB_LEN_NAMED_ASYNC_TAG         20
#define QUMB_LEN_RID                     11
#define QUMB_RAW_DATA                    0L
#define QUMB_SDDS                        1L

/* Supported SDDS packet formats */
#define QUMB_DATA_FORMAT_RAW             0x0000
   /* packet contains raw data that is not converted */
#define QUMB_DATA_FORMAT_CHAR            0x0001
   /* packet contains char data that is converted between EBCDIC <-> ASCII */
#define QUMB_DATA_FORMAT_SHORT           0x0002
   /* packet contains BIN(2)/short values that are byte swapped */
#define QUMB_DATA_FORMAT_LONG            0x0003
   /* packet contains BIN(4)/long values that are byte swapped */

/******************************************************************************/
/*           api format names                                                 */
/******************************************************************************/
#define QUMB_RTNFMT_RTV_DATA             "RTVR0100"
#define QUMB_INFMT_PROC_REQ_PTR          "RQSI0100"
#define QUMB_INFMT_PROC_REQ_SPC          "RQSI0200"
#define QUMB_RTNFMT_PROC_REQ             "RQSR0100"
#define QUMB_INFMT_RTN_DATA_SPC          "RTNI0100"
#define QUMB_INFMT_RTN_DATA_PTR          "RTNI0200"
#define QUMB_RTNFMT_QRY_USR              "USRR0100"
#define QUMB_FMT_3RD_PTY                 "USRF0100"
#define QUMB_CURRENT_PWS                 "*CURRENT"

/******************************************************************************/
/*                 Constants                                                  */
/******************************************************************************/
#define QUMB_QUERY_ALL_USER              "*ALL      "
#define QUMB_USER_SPACE_LIBRARY          "QTEMP     "

#define QUMB_LEN_PGM_ID                  21

/* Length of Remote Location Name */
#define QUMB_LEN_REMOTE_LOCATION_NAME    16
/* Length of User Space Name */
#define QUMB_LEN_RECEIVE_SPACE_NAME      20


/******************************************************************************/
/*   Structures used by cooperative process management APIs                   */
/******************************************************************************/

typedef _Packed struct QUMBRIDSTRUC {
  unsigned char auchRequestID[QUMB_LEN_RID];
} QUMBRID, * PQUMBRID;

/* Process request format RQSI0100 */
typedef _Packed struct _QUMBPROCREQ {
  UCHAR    auchRemoteLocationName[QUMB_LEN_REMOTE_LOCATION_NAME];
                                        /* Remote location name of */
                                        /* PWS to receive request */
  LONG     lWait;                       /* Time to wait for return data */
  UCHAR    auchProgramID[QUMB_LEN_PGM_ID];
             /* Fully qualified name of program to call */
  UCHAR    auchReserved1[3];            /* Reserved */
  ULONG    ulFunctionID;                /* Function ID of process to call */
  PUCHAR   pRequestBuffer;              /* Data buffer */
  ULONG    ulSendLength;                /* Length of data buffer */
  ULONG    ulSendVersion;               /* Type of data being sent */
} QUMBPROCREQ, * PQUMBPROCREQ;

/* Process request format RQSI0200 */
typedef _Packed struct _QUMBPROCREQSPC {
  UCHAR    auchRemoteLocationName[QUMB_LEN_REMOTE_LOCATION_NAME];
                                        /* Remote location name of */
                                        /* PWS to receive request */
  LONG     lWait;                       /* Time to wait for return data */
  UCHAR    auchProgramID[QUMB_LEN_PGM_ID];
             /* Fully qualified name of program to call */
  UCHAR    auchReserved1[3];               /* Reserved */
  ULONG    ulFunctionID;                /* Function ID of process to call */
  UCHAR    auchUserSpaceName[20];       /* User space in which to return data */
  ULONG    ulSendLength;                /* Length of data buffer */
  ULONG    ulSendVersion;               /* Type of data being sent */
} QUMBPROCREQSPC, * PQUMBPROCREQSPC;

/* typedef for Process request RQSR0100 format */
typedef _Packed struct _QUMBPROCREQRTN { /* output structure for */
                                         /* process request */
  QUMBRID RID;                           /* Request ID (output) */
  UCHAR    uchReserved1;                 /* Reserved */
  ULONG    ulStatus;                     /* 32 bit status */
  ULONG    ulRetVersion;                 /* type of data being sent */
  UCHAR    auchReceiveSpaceName[QUMB_LEN_RECEIVE_SPACE_NAME];
                                         /*  pointer to user space name */
  ULONG    ulReturnLength;               /* length of data in user space */
} QUMBPROCREQRTN, * PQUMBPROCREQRTN;


/* return data structure for format RTNI0200 */
typedef _Packed struct _QUMBRETURNDATA {
   QUMBRID      RID;                 /* Request ID */
   UCHAR        uchReserved1;        /* Reserved */
   ULONG        ulStatus;            /* 32 bit status */
   PUCHAR       pReqBuffer;          /* Pointer to buffer of return data */
   ULONG        ulRetLen;            /* length of data in pReqBuffer */
   ULONG        ulVersion;           /* type of data returned */
 } QUMBRETURNDATA, * PQUMBRETURNDATA;

/* return data structure for format RTNI0100 */
typedef _Packed struct _QUMBRETURNUSDATA {
   QUMBRID      RID;                 /* Request ID */
   UCHAR        uchReserved1;        /* Reserved */
   ULONG        ulStatus;            /* 32 bit status */
   UCHAR        auchUserSpaceName[QUMB_LEN_RECEIVE_SPACE_NAME];
   ULONG        ulRetLen;            /* length of data in pReqBuffer */
   ULONG        ulVersion;       