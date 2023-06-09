#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsylstvc.h                                   */
 /*                                                                */
 /* Descriptive Name: List Validation list Certificates            */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1997,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Digital Certificate ID include provides       */
 /*              the definition for listing certificates that are  */
 /*              in a validation list.                             */
 /*                                                                */
 /* Header Files Included: qsydigid.h                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSYLSTVC                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS DATE   PGMR  COMMENTS                    */
 /*    ---- -------- ---- ------ ----  --------------------------- */
 /*    $A0= D95249   4D20 970501 ROCH: New Include.                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QSYLSTVC_H
 #define _QSYLSTVC_H

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include "qsydigid.h"

 /********************************************************************/
 /* Prototype for calling Digital Certificate ID API QSYLSTVC        */
 /********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYLSTVC,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYLSTVC(
              char *,        /* User space name             */
              char *,        /* Validation list pathname    */
              int   ,        /* Length of path              */
              char *,        /* Format name                 */
              char *,        /* Selection control - ptr to  */
                             /*     Qsy_Sel_Ctrl_T          */
              void *);       /* Error code                  */

 #endif /* _QSYLSTVC_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
