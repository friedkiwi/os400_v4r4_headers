/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:   grp.h                                        */
/*                                                                   */
/*  Descriptive Name:   Group database related definitions.          */
/*                                                                   */
/*  5763-SS1 (C) Copyright IBM Corp. 1994, 1994                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file contains structures and function   */
/*               prototypes for group database access.               */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*    FLAG REASON   VERS DATE   PGMR COMMENTS                        */
/*    _____________ ____ ______ ____ _______________________________ */
/*    $A0= D2875000 3D10 940130 PSB: New.                            */
/*    $A1= D9705910 4D40 981020 battista: Add _r routines            */
/*    $A2= P3681951 4D40 981022 battista: Add struct to group        */
/*    $A3= P3683864 4D40 981118 CSB:  Use size_t instead of int for  */
/*                                    size of work buffer.           */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _GRP_H
#define _GRP_H


#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>

struct group {
        char    *gr_name;        /* Group name.                      */
        gid_t   gr_gid;          /* Group id.                        */
        char    **gr_mem;        /* A null-terminate