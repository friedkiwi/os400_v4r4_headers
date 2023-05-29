/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QLPCDINF                                      */
/*                                                                   */
/* Descriptive Name: CDROM premastering Information API              */
/*                                                                   */
/* 5716-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The CDROM premastering Information API creates the   */
/*              QDSETMAP bytestream file and also returns info       */
/*              in an user space about the tape file/cdrom file name */
/*              on files that were saved when enabled for CDROM      */
/*              premastering.                                        */
/*                                                                   */
/* Header Files Included: h/qlp                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None. (Structures included in QLP)                */
/*                                                                   */
/* Function Prototype List: QLPCDINF.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9157100     3D60  941016 BLOCKER:  New Include              */
/* $A1= P3984880     3D60  950317 BLOCKER:  add __cplusplus defs     */
/* $A2= PTH01765     3D60  950816 BLOCKER:  restored --> restore     */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QLPCDINF_h
 #define QLPCDINF_h

#ifdef __cplusplus
   extern "C" {
   #pragma info(none)
#endif


 /******************************************************************/
 /*  Header Included.                                              */
 /******************************************************************/
 #ifndef QLP_h
   #include <h/qlp.h>
 #endif

 /******************************************************************/
 /*  Prototype for QLPCDINF API                                    */
 /******************************************************************/
 #ifdef __cplusplus
    extern "OS"
 #else
    #pragma linkage (QLPCDINF,OS,nowiden)
 #endif

 void QLPCDINF (void *,   /* User space Name            */
                char *,   /* User space format          */
                char *,   /* Distribution Setmap ID     */
                int  ,    /* CDROM size in bytes        */
                char *,   /* CDROM volume ID prefix     */
                void *);  /* Error Code                 */


#ifdef __cplusplus
  #pragma info(restore)
 }
#endif

#endif                            /* #ifndef QLPCDINF_h             */




