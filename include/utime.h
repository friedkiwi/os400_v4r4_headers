#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:  utime.h                                       */
/*                                                                   */
/*  Descriptive Name:  File access and modification definition.      */
/*                                                                   */
/*                                                                   */
/*  5763-SS1, 5716-SS1                                               */
/*  (C) Copyright IBM Corp&period. 1993, 1995                        */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp&period.               */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description:  Defines type, structure, and prototype             */
/*                for file access and modification API               */
/*                                                                   */
/*                                                                   */
/*  Header Files Included : sys/types.h                              */
/*                                                                   */
/*  Macros List :  None                                              */
/*                                                                   */
/*  Structure List: utimbuf                                          */
/*                                                                   */
/*  Function Prototype List: utime                                   */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List :                                                       */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D28418       3D10  940307  ROCH      New Include            */
/*  $A1= P3977661     3D60  950105  ROCH      Changes to             */
/*                                            documentation          */
/*  $A2= P3992252     3D60  950522  ROCH      Add __cplusplus #ifdef */
/*                                            and #pragma info(none) */
/*  $A3= PTH01765     3D60  950804  ROCH      Correct #pragma info   */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __utime_h
  #define __utime_h 1

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>             /* include time_t definition      */

/* ================================================================= */
/* utimbuf structure definition                                      */
/* ================================================================= */

struct utimbuf {
   time_t     actime;           /*  access time       */
   time_t     modtime;          /*  modification time */
};

QBFC_EXTERN int utime(const char *, const struct utimbuf *);

#endif   /* __utime_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
