#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/* ================================================================= */
/*                                                                   */
/*  Header File Name: errno.h                                        */
/*                                                                   */
/*  Descriptive Name: Error number definitions (for compatibility)   */
/*                                                                   */
/*  5763-SS1, 5716-SS1 (C) Copyright IBM Corp. 1993,1995             */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Proptety of IBM                               */
/*                                                                   */
/*  Description: Defines additional errno values to be used by       */
/*               the AS/400 system code.                             */
/*                                                                   */
/*  Header Files Included: None                                      */
/*                                                                   */
/*                                                                   */
/*  Macros List:                                                     */
/*                                                                   */
/*                                                                   */
/*  Function Prototype list: None.                                   */
/*                                                                   */
/*                                                                   */
/*  Change Activity :                                                */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A1  P3981269     3D60  950206  ROCH      New include            */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*                                                                   */
/*  End Change Activity.                                             */
/*                                                                   */
/* ================================================================= */

#ifndef __ERRNO_h
#define __ERRNO_h

  #ifndef __sys_errno_h
    #include <sys/errno.h>
  #endif

#endif /* __ERRNO_h */

#ifdef __ILEC400__
#pragma checkout(resume)
#endif
