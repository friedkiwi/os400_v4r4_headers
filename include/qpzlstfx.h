 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZLSTFX                                   */
 /*                                                                */
 /* Descriptive Name: List PTFs                                    */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Prototypes for call API QpzListPTF.               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /* Function Prototype: QpzListPTF                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94963       4d10  961010 ROCH      New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPZLSTFX_h
#define QPZLSTFX_h

/********************************************************************/
/*  Prototype for calling Software Product API QPZLSTFX             */
/********************************************************************/
#ifdef __cplusplus
  extern "C" {
  #pragma info(none)
#endif


/******************************************************************/
/*  Header Included.                                              */
/******************************************************************/
#ifndef QPZ_h
  #include <h/qpz.h>
#endif

#ifdef __cplusplus
void QpzListPTF(void *,           /* qualified user space name      */
              void *,             /* PRD information (Format Below) */
              char *,             /* Format name                    */
              void *);            /* Error code                     */

#else
  #pragma argument (QpzListPTF, OS, nowiden)
void QpzListPTF(void *,           /* qualified user space name      */
              void *,             /* PRD information (Format Below) */
              char *,             /* Format name                    */
              void *);            /* Error code                     */

#endif
#ifdef __cplusplus
  #pragma info(restore)
 }
#endif
#endif                           /* #ifndef QPZLSTFX_h             */
