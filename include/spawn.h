#ifndef _SPAWN_H
#define _SPAWN_H
/*********************************************************************/
/*                                                                   */
/* Header File Name: spawn.h                                         */
/*                                                                   */
/* Header File Description: CPA spawn declarations                   */
/*                                                                   */
/* 5716-SS1,5769-SS1 (C) Copyright IBM Corp. 1994,1999               */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description:                                                      */
/*      Define the inheritance structure and the prototypes for      */
/*      the spawn functions.                                         */
/*                                                                   */
/* Header Files Included:                                            */
/*          sys/types.h                                              */
/*          sys/signal.h                                             */
/*                                                                   */
/* Macros List:                                                      */
/*      SPAWN_SETSIGMASK                                             */
/*      SPAWN_SETSIGDEF                                              */
/*      SPAWN_SETPGROUP                                              */
/*      SPAWN_SETTHREAD_NP                                           */
/*      SPAWN_SETPJ_NP                                               */
/*      SPAWN_SETCOMPMSG_NP                                          */
/*      SPAWN_FDCLOSED                                               */
/*      SPAWN_NEWPGROUP                                              */
/*      SPAWN_MAX_NUM_ARGS                                           */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*           flagset_t                                               */
/*           inheritance_t                                           */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*           Qp0zSpawn()                                             */
/*           Qp0zSpawnp()                                            */
/*           Qp0zPipe()                                              */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON  VERSION    DATE    PGMR      DESCRIPTION             */
/* ---- ------- ---------- ------- --------- ----------------------- */
/* $A0=CPA28531 v3r1m0.cpa 941025  ROCH      : Creation              */
/* $A1=P3603505 v3r6m0.cpa 950625  ROCH      : Added SPAWN_SETPGROUP */
/*                                             fixed signal include  */
/* $A2=D94779.13 v4r2m0.xpf 961210 ROCH      : Added new flag        */
/*                                             SPAWN_SETTHREAD_NP    */
/* $A3=D94779.15 v4r2m0.xpf 970415 ROCH      : Added new flag        */
/*                                             SPAWN_SETPJ_NP        */
/* $A4=P3684518  v4r4m0.xpf 981117 ROCH      : Added new flag        */
/*                                             SPAWN_SETCOMPMSG_NP   */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*********************************************************************/

/*********************************************************************/
/* Includes                                                          */
/*********************************************************************/
#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>


#ifndef  __sys_signal_h                  /* @A1C*/
    #include <sys/signal.h>              /* @A1C*/
#endif

/*********************************************************************/
/* Macros and Constants                                              */
/*********************************************************************/

#define SPAWN_SETSIGMASK     0x00000002
#define SPAWN_SETSIGDEF      0x00000004
#define SPAWN_SETPGROUP      0x00000008                        /*@A1A*/
#define SPAWN_SETTHREAD_NP   0x00000010                        /*@A2A*/
#define SPAWN_SETPJ_NP       0x00000020                        /*@A3A*/
#define SPAWN_SETCOMPMSG_NP  0x00000040                        /*@A4A*/
#define SPAWN_FDCLOSED     -1
#define SPAWN_NEWPGROUP    -1
#define SPAWN_MAX_NUM_ARGS 255

/*********************************************************************/
/* Wrappers to map the standard name to the CPA function             */
/*********************************************************************/

#define spawn   Qp0zSpawn
#define spawnp  Qp0zSpawnp
#define pipe    Qp0zPipe

/*********************************************************************/
/* Data Types                                                        */
/*********************************************************************/

typedef unsigned int flagset_t;


typedef struct inheritance {
    flagset_t     flags;
    pid_t         pgroup;
    sigset_t      sigmask;
    sigset_t      sigdefault;
} inheritance_t;


/*********************************************************************/
/* Function Prototypes                                               */
/*********************************************************************/


    QBFC_EXTERN pid_t Qp0zSpawn (const char*           path,
                                 const int             fd_count,
                                 const int *           fd_map,
                                 const inheritance_t*  inherit,
                                       char**          argv,
                                       char**           envp);

    QBFC_EXTERN pid_t Qp0zSpawnp (const char*           filename,
                                  const int             fd_count,
                                  const int *           fd_map,
                                  const inheritance_t*  inherit,
                                        char**          argv,
                                        char**          envp);


    QBFC_EXTERN int
                      Qp0zPipe(int fildes[2]);
#endif /* _SPAWN_H */

