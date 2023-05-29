#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:   dirent.h                                      */
/*                                                                   */
/* Descriptive Name: File system directory API definition.           */
/*                                                                   */
/* 5763-SS1, 5716-SS1, 5769-SS1                                      */
/* (C) Copyright IBM Corp. 1993, 1998                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Defines the dirent structure, the DIR type,          */
/*              and directory function prototypes.                   */
/*                                                                   */
/* Header Files Included: unistd.h                                   */
/*                                                                   */
/* Macros List: _QP0L_DIR_NAME                                       */
/*                                                                   */
/* Structure List: DIR                                               */
/*                 dirent                                            */
/*                                                                   */
/* Function Prototype List:   closedir                               */
/*                            opendir                                */
/*                            readdir                                */
/*                            readdir_r                          @A5A*/
/*                            rewinddir                              */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR       CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ ---------- ------------------------*/
/* $A0= D28418       3D10  940307 ROCH       New Include             */
/* $A1= D91979       3D60  941219 ROCH       File Generation ID      */
/*                                           added to structs        */
/* $A2= P3977661     3D60  950105 ROCH       Changes to              */
/*                                           documentation           */
/* $A3= P3992252     3D60  950522 ROCH       Add __cplusplus #ifdef  */
/*                                           and #pragma info(none)  */
/* $A4= PTH01765     3D60  950804 ROCH       Correct #pragma info    */
/* $A5= D9477905     4D20  960830 ROCH       Add readdir_r() API     */
/*                                           prototype               */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __dirent_h
#define __dirent_h

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <unistd.h>                /* include NULL definition and
                                      types used dirent structure   */
/*********************************************************************/
/*  Type Definitions                                                 */
/*********************************************************************/

typedef struct _DIR DIR;  /* Directory Stream.  This is an incomplete
                             type.                                   */

#define _QP0L_DIR_NAME 640 /* size of d_name field of dirent
                              structure                              */

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/
#define d_reserved2 d_fileno_gen_id

struct dirent {
  char           d_reserved1[16];  /* Reserved                       */
  unsigned int   d_fileno_gen_id;  /* File number generation ID  @A1C*/
  ino_t          d_fileno;         /* The file number of the file    */
  unsigned int   d_reclen;         /* Length of this directory entry
                                      in bytes                       */
  int            d_reserved3;      /* Reserved                       */
  char           d_reserved4[8];   /* Reserved                       */
  qlg_nls_t      d_nlsinfo;        /* National Language Information
                                      about d_name                   */
  unsigned int   d_namelen;        /* Length of the name, in bytes
                                      excluding NULL terminator      */
  char           d_name[_QP0L_DIR_NAME]; /* Name...null terminated   */

};

/*********************************************************************/
/*  Function Prototypes                                              */
/*********************************************************************/

QBFC_EXTERN DIR *opendir(const char *);
QBFC_EXTERN struct dirent *readdir(DIR *);
QBFC_EXTERN void rewinddir(DIR *);
QBFC_EXTERN int closedir(DIR *);
QBFC_EXTERN int readdir_r(DIR *, struct dirent *, struct dirent **);
                                                               /*@A5A*/
#endif /* __dirent_h */
#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
