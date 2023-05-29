#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:   limits.h                                     */
/*                                                                   */
/*  Header File Description: System limit definitions                */
/*                           (For compatibility)                     */
/*                                                                   */
/*  5763-SS1 (C) Copyright IBM Corp. 1993, 1993                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: Defines system limit macros.                        */
/*                                                                   */
/*  Header Files Included: None.                                     */
/*                                                                   */
/*  Macros List: None                                                */
/*                                                                   */
/*  Structure List: None.                                            */
/*                                                                   */
/*  Function Prototype List: None                                    */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $a0= P3981269     3D60  950207  ROCH      Compatibility changes  */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __LIMITS_h
#define __LIMITS_h 1

  #ifndef __sys_limits_h
    #include <sys/limits.h>
  #endif /* __sys_limits_h */

#endif /* __LIMITS_h */

#ifdef __ILEC400__
#pragma checkout(resume)
#endif
