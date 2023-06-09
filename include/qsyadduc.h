#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsyadduc.H                                   */
 /*                                                                */
 /* Descriptive Name: Add User Certificate                         */
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
 /*              the definition for associating certificates       */
 /*              with a user.                                      */
 /*                                                                */
 /* Header Files Included: qsydigid.h                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSYADDUC                              */
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

 #ifndef _QSYADDUC_H
 #define _QSYADDUC_H


 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include <qsydigid.h>

 /********************************************************************/
 /* Prototype for calling Digital Certificate ID API QSYADDUC        */
 /********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYADDUC,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYADDUC(
              char *,         /* User profile                  */
              char *,         /* Certificate                   */
              int   ,         /* Type                          */
              int   ,         /* Length of certificate         */
              void *);        /* Error code                    */

 #endif /* _QSYADDUC_H */
#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
