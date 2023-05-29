#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

#ifndef __qp0ztrml_h
  #define __qp0ztrml_h 1

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name:        qp0ztrml.h                                */
/*                                                                    */
/* Descriptive Name:        Generic Terminal Header File              */
/*                                                                    */
/* 5769-SS1                                                           */
/* (C) Copyright IBM Corp. 1997,1998                                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* Description:             Generic Terminal support                  */
/*                                                                    */
/* Header Files Included:   spawn.h                                   */
/*                          sys/types.h                               */
/*                                                                    */
/* Macros List:             None                                      */
/*                                                                    */
/* Structure List:          Qp0z_Terminal_T                           */
/*                          Qp0z_Terminal_Attr_T                      */
/*                                                                    */
/* Function Prototype List: Qp0zEndTerminal                           */
/*                          Qp0zGetTerminalPid                        */
/*                          Qp0zIsATerminal                       @A1A*/
/*                          Qp0zRunTerminal                           */
/*                          Qp0zStartTerminal                         */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- ------------------------- */
/* $A0= D9551600     4D20  970604 ROCH    : New include               */
/* $A1= P3665469     4D30  980218 ROCH    : Added Qp0zIsATerminal     */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

/**********************************************************************/
/* Includes                                                           */
/**********************************************************************/

#include <sys/types.h>       /* pid_t */
#include <spawn.h>           /* inheritance_t */

/**********************************************************************/
/* Structures                                                         */
/**********************************************************************/

/* Generic Terminal handle */
typedef struct {
  void *reservedP;
  int   reservedId;
  int   reservedPid;
  int   reserved1;
  int   reserved2;
} Qp0z_Terminal_T;

/* Generic Terminal attributes */
typedef struct {
  inheritance_t Inherit;     /* Inheritance structure for spawning
                                interpreter process */
  unsigned int Buffer_Size;  /* Size of buffer for reading data from
                                interpreter process */
  char DBCS_Capable;         /* True when terminal is enabled for
                                double-byte character sets */
  char reserved1[3];         /* Reserved (binary 0) */
  char *Title;               /* Text string for window title */
  char *Cmd_Key_Line1;       /* Text string for first line of command
                                key descriptions */
  char *Cmd_Key_Line2;       /* Text string for second line of command
                                key descriptions */
  char reserved2[32];        /* Reserved (binary 0) */
} Qp0z_Terminal_Attr_T;

/**********************************************************************/
/* Macros                                                             */
/**********************************************************************/

/* Return values for Qp0zRunTerminal() */
#define QP0Z_TERMINAL_F12   0 /* User pressed F12 */
#define QP0Z_TERMINAL_F3    1 /* User pressed F3 */
#define QP0Z_TERMINAL_ENDED 2 /* Interpreter process ended */

/**********************************************************************/
/* Function Prototypes                                                */
/**********************************************************************/

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

QBFC_EXTERN int Qp0zStartTerminal(Qp0z_Terminal_T *handle,
                                  char *args[],
                                  char *envs[],
                                  Qp0z_Terminal_Attr_T attrs);
QBFC_EXTERN int Qp0zRunTerminal(Qp0z_Terminal_T handle);
QBFC_EXTERN int Qp0zEndTerminal(Qp0z_Terminal_T handle);
QBFC_EXTERN int Qp0zGetTerminalPid(Qp0z_Terminal_T handle, pid_t *pid);
QBFC_EXTERN int Qp0zIsATerminal(int fd); /* @A1A*/

#endif /* __qp0ztrml_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
