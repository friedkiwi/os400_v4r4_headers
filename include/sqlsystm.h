/******************************************************************************
 *
 * Source File Name = SQLSYSTM.H
 *
 * (C) COPYRIGHT International Business Machines Corp. 1993, 1999
 * All Rights Reserved
 * Licensed Materials - Property of IBM
 *
 * US Government Users Restricted Rights - Use, duplication or
 * disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 *
 * Function = Include File defining:
 *              Operating System Specific Information
 *
 * Operating System = OS/400
 *
 * Product Name = DB2 Universal Database for AS/400
 *
 *****************************************************************************/

#ifndef  SQL_H_SQLSYSTM
   #define SQL_H_SQLSYSTM          /* Permit duplicate Includes */


#ifndef DB2400                     /* This is DB2 for AS/400    */
  #define DB2400    1
#endif

/* Datalinks are not supported as parameters on DB2 UDB for AS/400      */
#ifndef NO_DATALINK
  #define NO_DATALINK 1
#endif

/* Bigint is not supported on the DB2 UDB for AS/400 platform           */
#ifndef NO_BIGINT
  #define NO_BIGINT 1
#endif

/* The DB2 UDB for AS/400 platform does not support the LOB APIs.       */
#ifndef NO_LOB_APIs
  #define NO_LOB_APIs 1
#endif

/* The DB2 UDB for AS/400 platform does not support input LOB datatypes
    unless the user-defined function is an SQL function.                  */
#ifndef NO_LOB_PARAMETERS
   #define NO_LOB_PARAMETERS 1
#endif

/* Operating System Control Parameters */

#ifndef SQL_API_RC
 #define SQL_API_RC      int
 #define SQL_STRUCTURE   struct
 #define PSQL_API_FN     *
 #define SQL_API_FN
 #define SQL_POINTER
 #define SQL_API_INTR
#endif

#ifndef SQL_WCHART_CONVERT
  #define SQL_WCHART_CONVERT
#endif
#include <wcstr.h>

#ifndef NO_BIGINT
/******************************************************************************
**
** Define the 64 bit integer type.
**
******************************************************************************/

#ifndef SQL_BIGINT_TYPE
   #define SQL_BIGINT_TYPE long long
#endif
typedef SQL_BIGINT_TYPE sqlint64;
#endif

#endif /* SQL_H_SQLSYSTM */
