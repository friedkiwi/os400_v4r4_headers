/******************************************************************************
 *
 * Source File Name = SQLUDF.H
 *
 * (C) COPYRIGHT International Business Machines Corp. 1987, 1999
 * All Rights Reserved
 * Licensed Materials - Property of IBM
 *
 * US Government Users Restricted Rights - Use, duplication or
 * disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 *
 * Function = Include File for use in compiling User Defined Function.
 *            Intended to help writers of UDFs deal with the interface
 *            between DBMS and UDF.  Contains:
 *              common structures
 *              "language types" for the SQL types
 *              enumerated type declaration for call-type argument
 *              SQLSTATE constants
 *              macro for prescribed part of the argument list
 *              macro for scratchpad oriented part of argument list
 *              macros to address prescribed parts of argument list
 *              macros to test for argument null and notnull
 *
 * Operating System = Common C Include File
 *
 * Product Names = DB2 Universal Database for OS/390 Version 6
 *                 DB2 Universal Database Version 6
 *                 DB2 Universal Database for AS/400 Version 4 Release 4
 *
 *  Change Activity:
 *
 *  CFD List:
 *
 *  FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION
 *  ---- ------------ ----- ------ -------- ------------------------
 *  $A0= D97030       4D40  990124 ROCH     New Include
 *  $A1= P3695278     4P40  990324 ROCH     Correct SQLUDF_FQNAME_LEN
 *  $A2= P3695278     4P40  990324 ROCH     Changes to the CALLTYPE
 *                                           declarations
 *
 *  End CFD List.
 *
 *   Additional notes about the Change Activity
 *
 *  End Change Activity:
 *
 *****************************************************************************/

#ifndef  SQL_H_SQLUDF
#define SQL_H_SQLUDF            /* Permit duplicate Includes */

#ifdef __cplusplus
extern "C" {
#endif

#include "sqlsystm.h"             /* System-Specific Include   */

#if (defined(DB2OS2) || defined(DB2NT))
#pragma pack(4)
#elif (defined(DB2WIN))
#pragma pack(2)
#elif (defined(DB2MAC))
#if (defined(DB2PPC))
#pragma align 4
#elif (defined(DB268K))
#pragma align 2
#endif
#elif (defined(DB2390))
#pragma pack(full)

#elif (defined(DB2SUN) && defined(__xlC__))
#pragma options align=natural
#elif (defined(DB2AIX))
#pragma options align=power
#elif (defined(DB2HP) || defined(DB2SNI) || defined(DB2SUN))
#endif

/*==============================================*/
/*==============================================*/
/*== Common #defines, used in this file.      ==*/
/*==============================================*/
/*==============================================*/
/*---------------------------------------------------------------------*/
/* When the following LEN defines are used to define a null-terminated */
/* string, be sure to add 1 for the null terminating character.        */
/*---------------------------------------------------------------------*/
#define   SQLUDF_SQLSTATE_LEN       5    /* length of SQLSTATE   */
#define   SQLUDF_SCRATCHPAD_LEN   100    /* length of scratchpad */
#define   SQLUDF_FQNAME_LEN       517    /* length of fully-qualified name */
#define   SQLUDF_SPECNAME_LEN     128    /* length of function specific name */
#define   SQLUDF_MSGTEXT_LEN       70    /* length of message text area */
#define   SQLUDF_MAX_IDENT_LEN    128    /* max length of identifier */
#define   SQLUDF_SH_IDENT_LEN       8    /* length of short identifier */
/*------------------------------------------------------------------------*/
/* LIMIT on total number of columns for a result table of TABLE FUNCTION. */
/* This may be DIFFERENT than the regular limit on DB2 tables.            */
/*------------------------------------------------------------------------*/
#if (defined(DB2390))
#define SQLUDF_MAXCOL_TABFUN       750
#else
#define SQLUDF_MAXCOL_TABFUN       255
#endif

/*==============================================*/
/*==============================================*/
/*== Common structures.                       ==*/
/*== Note:  these are used in the C "language ==*/
/*==        type" definitions which follow.   ==*/
/*==============================================*/
/*==============================================*/

#ifndef SQL_SQLDBCHAR_DEFN
#define SQL_SQLDBCHAR_DEFN
  typedef unsigned short sqldbchar;
#endif

/*---------------------------------------------------------------------*/
/* Structure used for  VARCHAR FOR BIT DATA, LONG VARCHAR              */
/*---------------------------------------------------------------------*/
SQL_STRUCTURE  sqludf_vc_fbd
{
   unsigned short length;         /* length of data */
   char           data[1];        /* first char of data */
};

/*-------------------------------------------------*/
/* Structure used for: LONG VARGRAPHIC             */
/*-------------------------------------------------*/
SQL_STRUCTURE  sqludf_vg
{
   unsigned short length;         /* length of data */
#ifdef SQL_WCHART_CONVERT
   wchar_t        data[1];        /* first char of data */
#else
   sqldbchar      data[1];        /* first char of data */
#endif
};

/*---------------------------------*/
/* Structure used for: BLOB, CLOB  */
/*---------------------------------*/
SQL_STRUCTURE  sqludf_lob
{
   unsigned long  length;         /* length of data */
   char           data[1];        /* first char of data */
};

/*----------------------------*/
/* Structure used for: DBCLOB */
/*----------------------------*/
SQL_STRUCTURE  sqludf_lobg
{
   unsigned long  length;         /* length of data */
#ifdef SQL_WCHART_CONVERT
   wchar_t        data[1];        /* first char of data */
#else
   sqldbchar      data[1];        /* first char of data */
#endif
};
#ifndef NO_DATALINK
/* @dlnkdlnkpvt -- begin */
SQL_STRUCTURE sqludf_datalink
{
    unsigned long version;
    char linktype[4];
    unsigned long url_length;
    unsigned long comment_length;
    char reserve2[8];               /* Future  */
    char url_plus_comment[230];
                                   /* URL followed by comment     */
};
/* @dlnkdlnkpvt -- end */
#endif
/*------------------------------------------------------------*/
/* Structure used for: the scratchpad.                        */
/* Note: This structure as provided by DB2 gives the          */
/*       overall size/structure of the scratchpad argument.   */
/*       Individual UDFs which use a scratchpad may wish to   */
/*       override the "data" variable of this scratchpad      */
/*       with variables that make sense for the particular    */
/*       UDF.                                                 */
/* Note: Remember that the "data" variable is initialized     */
/*       by DB2 to all \0 before the first call.              */
/*------------------------------------------------------------*/
SQL_STRUCTURE  sqludf_scratchpad
{
   unsigned long  length;         /* length of scratchpad data */
   char           data[SQLUDF_SCRATCHPAD_LEN]; /* scratchpad data, init. to all
                                                \0 */
};


/*------------------------------------------------------------*/
/* Structure used for: Database code page.                    */
/*------------------------------------------------------------*/
/* DB2/CS code page structure */
struct db2_cs_cdpg
{
  unsigned long  sbcs;                          /* DB single byte CS          */
  unsigned long  dbcs;                          /* DB double byte CS          */
  unsigned long  comp;                          /* DB composite codepage CS   */
  unsigned char  dummy[36];                     /* reserved for later use     */
};

struct db2_mvs_cdpg
{
  unsigned long ascii_sbcs;
  unsigned long ascii_dbcs;
  unsigned long ascii_mixed;
  unsigned long ebcdic_sbcd;
  unsigned long ebcdic_dbcs;
  unsigned long ebcdic_mixed;
  unsigned long encoding_scheme;
  unsigned char reserved[20];
};

/* code page structure */
union db_cdpg
{
  struct db2_cs_cdpg cdpg_cs;              /* DB2/CS code page         */
  struct db2_mvs_cdpg cdpg_mvs;            /* DB2 for OS/390 code page */
};


/*===============================================================*/
/*== Operating System "platform" definitions.                  ==*/
/*===============================================================*/
#define SQLUDF_PLATFORM_UNKNOWN         0         /* Unknown platform         */
#define SQLUDF_PLATFORM_OS2             1         /* OS/2                     */
#define SQLUDF_PLATFORM_WINDOWS         3         /* Windows                  */
#define SQLUDF_PLATFORM_AIX             4         /* AIX                      */
#define SQLUDF_PLATFORM_NT              5         /* NT                       */
#define SQLUDF_PLATFORM_HP              6         /* HP                       */
#define SQLUDF_PLATFORM_SUN             7         /* Sun                      */
#define SQLUDF_PLATFORM_OS390           8         /* OS/390                   */
#define SQLUDF_PLATFORM_SNI            13         /* Siemens Nixdorf          */
#define SQLUDF_PLATFORM_WINDOWS95      15         /* Windows 95               */
#define SQLUDF_PLATFORM_SCO            16         /* SCO                      */
#define SQLUDF_PLATFORM_LINUX          18         /* Linux                    */
#define SQLUDF_PLATFORM_DYNIX          19         /* DYNIX/ptx                */
#define SQLUDF_PLATFORM_AS400         400         /* AS/400                   */

#define SQLUDF_PLATFORM_MVS           SQLUDF_PLATFORM_OS390 /* OS/390         */

/*------------------------------------------------------------*/
/* Structure used for: dbinfo.                                */
/* Note: This structure as provided by DB2 to the UDF         */
/*       contains additional information which may be used to */
/*       enable (but not require) additional capability or    */
/*       optimizations on the part of the external function.  */
/*       This argument is only present if the DBINFO          */
/*       keyword is specified in the CREATE FUNCTION          */
/*       statement.                                           */
/*------------------------------------------------------------*/
SQL_STRUCTURE  sqludf_dbinfo
{
  unsigned short    dbnamelen;                     /* database name length    */
  unsigned char     dbname[SQLUDF_MAX_IDENT_LEN];  /* database name           */
  unsigned short    authidlen;                     /* authorization ID length */
  unsigned char     authid[SQLUDF_MAX_IDENT_LEN];  /* appl authorization ID   */
  union db_cdpg     codepg;                        /* database code page      */
  unsigned short    tbschemalen;                   /* table schema name length*/
  unsigned char     tbschema[SQLUDF_MAX_IDENT_LEN];/* table schema name       */
  unsigned short    tbnamelen;                     /* table name length       */
  unsigned char     tbname[SQLUDF_MAX_IDENT_LEN];  /* table name              */
  unsigned short    colnamelen;                    /* column name length      */
  unsigned char     colname[SQLUDF_MAX_IDENT_LEN]; /* column name             */

  /*----------------------