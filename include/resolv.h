#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  resolv.h                                       */
/*                                                                   */
/* Descriptive Name: Defines global information used by the          */
/*                   sockets resolver routines                       */
/*                                                                   */
/*                                                                   */
/* 5763-SS1, 5716-SS1                                                */
/* (C) Copyright IBM Corp. 1994, 1995                                */
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
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines macros, variables, and structures                */
/*          to be used with the sockets resolver routines.           */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          arpa/nameser.h                                           */
/*          netinet/in.h                                             */
/*          sys/types.h                                              */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          MAXDNSRCH                                                */
/*          MAXLVLSRCH                                               */
/*          MAXNS                                                    */
/*                                                                   */
/*          RES_AAONLY                                               */
/*          RES_DEFAULT                                              */
/*          RES_DEFNAMES                                             */
/*          RES_DNSRCH                                               */
/*          RES_IGNTC                                                */
/*          RES_INIT                                                 */
/*          RES_RECURSE                                              */
/*          RES_STAYOPEN                                             */
/*          RES_USEVC                                                */
/*                                                                   */
/*          nsaddr                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          state                                                    */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          None                                                     */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D3188200     3D10  940225  ROCH     New include.           */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __resolv_h
  #define __resolv_h

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

#include <arpa/nameser.h>             /* MAXDNAME typedef            */
#include <netinet/in.h>               /* sockaddr_in structure       */
#include <sys/types.h>                /* u_short typedef             */

/*********************************************************************/
/* Macros for options flag in _res structure                         */
/*********************************************************************/
#define RES_AAONLY       0x0001       /* request authoritative answer*/
#define RES_DEFNAMES     0x0002       /* append default domain name
                                         to names without '.'        */
#define RES_DNSRCH       0x0004       /* append search list entries
                                         to names not ending in '.'  */
#define RES_IGNTC        0x0008       /* ignore truncation           */
#define RES_INIT         0x0010       /* _res structure is
                                         initialized                 */
#define RES_RECURSE      0x0020       /* recursive query             */
#define RES_STAYOPEN     0x0040       /* keep TCP connection open    */
#define RES_USEVC        0x0080       /* use TCP instead of UDP      */

#define RES_DEFAULT      (RES_RECURSE|RES_DEFNAMES|RES_DNSRCH)
                                      /* default setting for _res    */

/*********************************************************************/
/* Miscellaneous macros                                              */
/*********************************************************************/
#define nsaddr  nsaddr_list[0]        /* define the address of the
                                         first name server in the
                                         list (see _res structure)   */

#define MAXDNSRCH        6            /* maximum number of domains
                                         to search                   */
#define MAXLVLSRCH       3            /* maximum number of default
                                         domain levels to search     */
#define MAXNS            3            /* maximum number of name
                                         servers                     */

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/

struct state {                        /* resolver state     