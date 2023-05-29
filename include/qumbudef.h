 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBUDEF                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities general header   */
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
 /*    This header file contains System Facilities system-wide     */
 /*    API defines, structures, macros, and typedefs.              */
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

#ifndef _QUMBUDEF_INCLUDED         /* Check if already included */
#define _QUMBUDEF_INCLUDED         /* Set the included flag */

/******************************* DEFINES **********************************/

#define QUMB_TRUE   '1'         /* CHAR flag true  */
#define QUMB_FALSE  '0'         /* CHAR flag false */

#ifndef FALSE
   #define FALSE   0
#endif

#ifndef TRUE
   #define TRUE    1
#endif

#ifndef NULL
   #define NULL ((void *)0)
#endif

#define NEAR                    /* n - Define it as nothing */

#define VOID    void            /* No prefix */

#define CHAR    char            /* ch   */
#define SHORT   short           /* s    */
#define LONG    long            /* l    */


/******************************* TYPEDEFS *********************************/

typedef unsigned char  UCHAR;   /* uch  */
typedef unsigned short USHORT;  /* us   */
typedef unsigned long  ULONG;   /* ul   */

typedef unsigned char BYTE;     /* uch  */

typedef unsigned char *PSZ;     /* psz  */
typedef unsigned char *PCH;     /* pch  */

typedef BYTE *PBYTE;            /* puch */
typedef CHAR *PCHAR;            /* pch  */
typedef SHORT *PSHORT;          /* ps   */
typedef LONG *PLONG;            /* pl   */

typedef UCHAR *PUCHAR;          /* puch */
typedef USHORT *PUSHORT;        /* pus  */
typedef ULONG *PULONG;          /* pul  */

typedef VOID  *PVOID;           /* p    */
typedef PVOID  *PPVOID;         /* pp   */

typedef unsigned long BOOL;     /* b    */
typedef BOOL *PBOOL;            /* pb   */


/****************************** STRUCTURES ********************************/

/* Structure that is used to receive errors */
#define QUMB_EXCEPT_DATA_LEN            200
typedef _Packed struct _QUMBERRCODE {   /* syserr */
   LONG lBytesProvided;
   LONG lBytesAvail;
   CHAR achExceptID[7];
   CHAR chReserved;
   CHAR achExceptData[QUMB_EXCEPT_DATA_LEN];
} QUMBERRCODE;
typedef QUMBERRCODE *PQUMBERRCODE;      /* psyserr */

#endif /* defined _QUMBUDEF_INCLUDED */
