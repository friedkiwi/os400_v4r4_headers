#ifndef _QGYRHRCM_H_
#define _QGYRHRCM_H_

/**********************************************************************
//                     Include File Description
//*********************************************************************
//  Header File Name: H/QGYRHRCM
//
//  Descriptive Name: Retrieve Hardware Resource API Declarations
//
//  Description:
//  Defines constants and types for the programmer using the
//  retrieve hardware resource APIs.
//
//  (C) Copyright IBM Corp. 1996
//  Refer to copyright instructions form no. G120-2083
//
//  Header files included:
//    none
//
//  Macros list:
//    none
//
//  Function list:
//    none
//
//  Structure list:
//    Qgy_RhrlRcvrVarHdr_t
//    Qgy_RHRL0100_t
//    Qgy_RHRI0100_t
//    Qgy_RHRI0200_t
//    Qgy_RHRI0300_t
//    Qgy_RHRI0400_t
//    Qgy_RHRI0500_t
//
//  End Include File Description
*/

/**********************************************************************
//                          Change Log
//*********************************************************************
//
//  Flag  Reason    Date      Userid    Description
//  ----  --------  --------  --------  -----------
//  $A0   D94532    02/25/96  ROCHESTR  New include file.
//
// End Change Activity
*/


/**********************************************************************
//                            Types
//********************************************************************/

typedef unsigned long  int qgyUint32;
typedef          long  int qgyInt32;


/**********************************************************************
//                          Constants
//********************************************************************/

/* for format name types */
enum { QGY_RSC_ADDR_LEN    = 12 };              /* lan adap addr len */
enum { QGY_RSC_CRDPOS_LEN  = 5 };               /* rsc card pos len */
enum { QGY_RSC_DES_LEN     = 50 };              /* rsc descr length */
enum { QGY_RSC_DEVPOS_LEN  = 5 };               /* rsc device pos ln */
enum { QGY_RSC_FRMID_LEN   = 4 };               /* rsc frame ID len */
enum { QGY_RSC_KIND_LEN    = 24 };              /* rsc kind length */
enum { QGY_RSC_MODL_LEN    = 3 };               /* rsc model length */
enum { QGY_RSC_NAME_LEN    = 10 };              /* rsc name length */
enum { QGY_RSC_PART_LEN    = 12 };              /* rsc part num len */
enum { QGY_RSC_PRCFEAT_LEN = 4 };               /* proc feature code */
enum { QGY_RSC_SER_LEN     = 10 };              /* rsc ser num len */
enum { QGY_RSC_SYS_LEN     = 8 };               /* conn sys name len */
enum { QGY_RSC_TYPE_LEN    = 4 };               /* rsc type length */

/* resource categories */
enum { QGY_CAT_AHW = 1 };               /* all hardware */
enum { QGY_CAT_CMN = 2 };               /* communication */
enum { QGY_CAT_LWS = 3 };               /* local work station */
enum { QGY_CAT_PRC = 4 };               /* processor */
enum { QGY_CAT_STG = 5 };               /* storage device */
enum { QGY_CAT_CSA = 6 };               /* coupled system adapter */
enum { QGY_CAT_LAN = 7 };               /* local area network */


/**********************************************************************
//                            Types
//********************************************************************/

/* Receiver variable header for format with repeating fields.        */
/* The varying length field will have to be defined by the user.     */

typedef struct Qgy_RhrlRcvrVarHdr       /* for qgyrhrl API */
  {
  qgyUint32 bytesRet;                   /* number of bytes returned */
  qgyUint32 bytesAvail;                 /* number of bytes available */
  qgyUint32 numRscRet;                  /* num of resources returned */
  qgyUint32 rscEntryLen;                /* length of resource entry */
  /* resource information of varying length                          */
  } Qgy_RhrlRcvrVarHdr_t;


/* receiver variable body for format with repeating fields */

typedef struct Qgy_RHRL0100             /* for RHRL0100 format */
  {
  qgyUint32 cat;                        /* category */
  qgyUint32 famLvl;                     /* family level */
  qgyInt32  lineType;                   /* LAN line type */
  char name[QGY_RSC_NAME_LEN];          /* name */
  char type[QGY_RSC_TYPE_LEN];          /* type */
  char modl[QGY_RSC_MODL_LEN];          /* model */
  char stat;                            /* status */
  char sys[QGY_RSC_SYS_LEN];            /* system connected to */
  char addr[QGY_RSC_ADDR_LEN];          /* LAN adapter address */
  char des[QGY_RSC_DES_LEN];            /* description */
  char kind[QGY_RSC_KIND_LEN];          /* kind */
  } Qgy_RHRL0100_t;


/* receiver variable types for formats without repeating fields */

typedef struct Qgy_RHRI0100             /* for RHRI0100 format */
  {
  qgyUint32 bytesRet;                   /* byte returned by API */
  qgyUint32 bytesAvail;                 /* byte available from API */
  qgyInt32  sysBus;                     /* system bus number */
  qgyInt32  sysBrd;                     /* system board number */
  qgyInt32  sysCrd;                     /* system card number */
  qgyInt32  ioBusAddr;                  /* I/O bus address */
  qgyInt32  adptAddr;                   /* adapter address */
  qgyInt32  portNum;                    /* port number */
  char ser[QGY_RSC_SER_LEN];            /* serial number */
  char part[QGY_RSC_PART_LEN];          /* part number */
  char frmId[QGY_RSC_FRMID_LEN];        /* frame ID */
  char crdPos[QGY_RSC_CRDPOS_LEN];      /* card position */
  } Qgy_RHRI0100_t;

typedef struct Qgy_RHRI0200             /* for RHRI0200 format */
  {
  qgyUint32 bytesRet;                   /* byte returned by API */
  qgyUint32 bytesAvail;                 /* byte available from API */
  qgyInt32  sysBus;                     /* system bus number */
  qgyInt32  sysBrd;                     /* system board number */
  qgyInt32  sysCrd;                     /* system card number */
  char ser[QGY_RSC_SER_LEN];            /* serial number */
  char part[QGY_RSC_PART_LEN];          /* part number */
  char frmId[QGY_RSC_FRMID_LEN];        /* frame ID */
  char crdPos[QGY_RSC_CRDPOS_LEN];      /* card position */
  } Qgy_RHRI0200_t;

typedef struct Qgy_RHRI0300             /* for RHRI0300 format */
  {
  qgyUint32 bytesRet;                   /* byte returned by API */
  qgyUint32 bytesAvail;                 /* byte available from API */
  qgyInt32  sysBus;                     /* system bus number */
  qgyInt32  sysBrd;                     /* system board number */
  qgyInt32  sysCrd;                     /* system card number */
  qgyUint32 ioBusAddr;                  /* I/O bus address */
  qgyUint32 adptAddr;                   /* adapter address */
  qgyUint32 portNum;                    /* port number */
  qgyUint32 devAddr;                    /* device address */
  qgyUint32 shrSessNum;                 /* shared session number */
  char ser[QGY_RSC_SER_LEN];            /* serial number */
  char part[QGY_RSC_PART_LEN];          /* part number */
  char frmId[QGY_RSC_FRMID_LEN];        /* frame ID */
  char crdPos[QGY_RSC_CRDPOS_LEN];      /* card position */
  } Qgy_RHRI0300_t;

typedef struct Qgy_RHRI0400             /* for RHRI0400 format */
  {
  qgyUint32 bytesRet;                   /* byte returned by API */
  qgyUint32 bytesAvail;                 /* byte available from API */
  qgyInt32  sysBus;                     /* system bus number */
  qgyInt32  sysBrd;                     /* system board number */
  qgyInt32  sysCrd;                     /* system card number */
  char ser[QGY_RSC_SER_LEN];            /* serial number */
  char part[QGY_RSC_PART_LEN];          /* part number */
  char frmId[QGY_RSC_FRMID_LEN];        /* frame ID */
  char crdPos[QGY_RSC_CRDPOS_LEN];      /* card position */
  char prcFeat[QGY_RSC_PRCFEAT_LEN];    /* processor feature code */
  } Qgy_RHRI0400_t;

typedef struct Qgy_RHRI0500             /* for RHRI0500 format */
  {
  qgyUint32 bytesRet;                   /* byte returned by API */
  qgyUint32 bytesAvail;                 /* byte available from API */
  qgyInt32  sysBus;                     /* system bus number */
  qgyInt32  sysBrd;                     /* system board number */
  qgyInt32  sysCrd;                     /* system card number */
  qgyUint32 ioBusAddr;                  /* I/O bus address */
  qgyUint32 ctlrAddr;                   /* contr