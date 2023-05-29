#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  netdb.h                                        */
/*                                                                   */
/* Descriptive Name: Sockets network library API                     */
/*                                                                   */
/* 5763-SS1, 5716-SS1, 5769-SS1                                      */
/* (C) Copyright IBM Corp. 1993, 1995, 1998                          */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Copyright (c) 1982, 1986 Regents of the University of California. */
/* All rights reserved.  The Berkeley software License Agreement     */
/* specifies the terms and conditions for redistribution.            */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the network library           */
/*          routines that perform look ups of host entries,          */
/*          network entries, protocol entries, and service           */
/*          entries.                                                 */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          None                                                     */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          HOST_NOT_FOUND                                           */
/*          NO_ADDRESS                                               */
/*          NO_DATA                                                  */
/*          NO_RECOVERY                                              */
/*          TRY_AGAIN                                                */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          hostent                                                  */
/*          hostent_data                                             */
/*          netent                                                   */
/*          netent_data                                              */
/*          protoent                                                 */
/*          protoent_data                                            */
/*          servent                                                  */
/*          servent_data                                             */
/*                                                                   */
/* Function Prototype List:   (Not Thread-safe)                      */
/*                                                                   */
/*          endhostent                                               */
/*          endnetent                                                */
/*          endprotoent                                              */
/*          endservent                                               */
/*          gethostbyaddr                                            */
/*          gethostbyname                                            */
/*          gethostent                                               */
/*          getnetbyaddr                                             */
/*          getnetbyname                                             */
/*          getnetent                                                */
/*          getprotobyname                                           */
/*          getprotobynumber                                         */
/*          getprotoent                                              */
/*          getservbyname                                            */
/*          getservbyport                                            */
/*          getservent                                               */
/*          sethostent                                               */
/*          setnetent                                                */
/*          setprotoent                                              */
/*          setservent                                               */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:  (Thread Safe)                           */
/*                                                                   */
/*          endhostent_r                                             */
/*          endnetent_r                                              */
/*          endprotoent_r                                            */
/*          endservent_r                                             */
/*          gethostbyaddr_r                                          */
/*          gethostbyname_r                                          */
/*          gethostent_r                                             */
/*          getnetbyaddr_r                                           */
/*          getnetbyname_r                                           */
/*          getnetent_r                                              */
/*          getprotobyname_r                                         */
/*          getprotobynumber_r                                       */
/*          getprotoent_r                                            */
/*          getservbyname_r                                          */
/*          getservbyport_r                                          */
/*          getservent_r                                             */
/*          sethostent_r                                             */
/*          setnetent_r                                              */
/*          setprotoent_r                                            */
/*          setservent_r                                             */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D3188200     3D10  930806  ROCH     New include.           */
/*   $A1= D94779.4     4D20  960916  ROCH     Add thread-safe        */
/*                                            routines.              */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __netdb_h
  #define __netdb_h

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif
/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/
#include <netinet/in.h>           /* struct in_addr              @A1A*/

/*********************************************************************/
/*   File Scoped Constants  - Note these constants are used only     */
/*   in structures hostent_data, netent_data, protoent_data and      */
/*   servent_data. These sturctures are considered opaque and all    */
/*   data should be retrieved thru hostent, netent, protoent,        */
/*   and servent respectively, looking for Null termination of       */
/*   strings and arrays. For AIX compatibility no reference should   */
/*   be mode to these constants.                                     */
/*                                                                   */
/*********************************************************************/
#define NETDB_MAX_HOST_NAME_LENGTH 255                         /*@A1A*/
#define NETDB_MAX_ARRAY_SIZE 64                                /*@A1A*/
#define NETDB_MAX_HOST_ADDR_ARRAY_SIZE 100                     /*@A1A*/
#define NETDB_MAX_NET_NAME_LENGTH 255                          /*@