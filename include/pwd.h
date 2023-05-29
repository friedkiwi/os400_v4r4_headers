/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:   pwd.h                                        */
/*                                                                   */
/*  Descriptive Name:   User database related definitions.           */
/*                                                                   */
/*  5763-SS1 (C) Copyright IBM Corp. 1994, 1994                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*                                                                   */
/* Description:  This header file contains structures and function   */
/*               prototypes for user database access.                */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*    FLAG&REASON   VERS DATE   PGMR COMMENTS                        */
/*    ____ ________ ____ ______ ____ _______________________________ */
/*    $A0= D2875000 3D10 940130 PSB: New.                            */
/*    $A1= D9705910 4D40 981020 battista: Add _r routines            */
/*    $A2= P3681951 4D40 981022 battista: Add struct to passwd       */
/*    $A3= P3683864 4D40 981118 CSB:  Use size_t instead of int for  */
/*                                    size of work buffer.           */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _PWD_H
#define _PWD_H


#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>

struct passwd {
        char    *pw_name;            /* User name.                   */
        uid_t   pw_uid;              /* User ID number.              */
        gid_t   pw_gid;              /* Group ID number.             */
        char    *pw_dir;             /* Initial working directory.   */
        char    *pw_shell;           /* Initial user program.        */
};

QBFC_EXTERN struct passwd *getpwuid( uid_t uid );
QBFC_EXTERN struct passwd *getpwnam( const char *name );

 /* Start add of _R routines                                     @A3C*/
QBFC_EXTERN  int getpwuid_r( uid_t            uid,
                             struct passwd  * passwdarea,
                             char           * workbuffer,
                             size_t           workbuffer_size,
                             struct passwd ** passwdreturnptr);

QBFC_EXTERN  int getpwnam_r( const char     * name,
                             struct passwd  * passwdarea,
                             char           * workbuffer,
                             size_t           workbuffer_size,
                             struct passwd ** passwdreturnptr);
 /* End add of _R routines                                       @A3C*/

#endif /* _PWD_H */
