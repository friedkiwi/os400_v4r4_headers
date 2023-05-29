#pragma nomargins nosequence
#pragma checkout(suspend)

/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLEAWI                                     */
/*                                                                */
/* Descriptive Name: IBM Language Environment API Header file     */
/*                                                                */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: This header contains declarations and definitions */
/*              used by callers of the Language Environment APIs. */
/*                                                                */
/* Header Files Included: H/POINTER                               */
/*                        H/QUSEC                                 */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qle_ABP_Info_t                                 */
/*                                                                */
/* Function Prototype List: QleActBndPgm                          */
/*                          QleGetExp                             */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D            3D60  941202 CJAHN:    New Include           */
/* $A1= PTH01719     3D60  950207 CJAHN:                          */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLEAWI_h

#define QLEAWI_h

  #include <pointer.h>
  #include <qusec.h>

  /* QleActBndPgm flags */
  #define QLE_ABP_WAS_ACTIVE    0x80   /* 1=Previously activated.    */
                                       /* 0=Not previously activated */

  /* QleGetExport constants */
  #define QLE_EX_NOT_FOUND      0
  #define QLE_EX_PROC           1
  #define QLE_EX_DATA           2
  #define QLE_EX_NO_ACCESS      3

  typedef _Packed struct Qle_ActBndPgmInfo_t {
    int   Bytes_Returned;             /* Bytes returned (in/out)     */
    int   Bytes_Available;            /* Bytes available (output)    */
    char  Reserved1[8];               /* Set to binary 0             */
    int   Act_Grp_Mark;               /* Activation Group Mark       */
    int   Act_Mark;                   /* Activation Mark             */
    char  Reserved2[7];               /* Set to binary 0             */
    char  Flags;                      /* Flags, see QLE_ABP_* defn's */
    char  *Reserved3;                 /* Set to binary 0             */
  } Qle_ABP_Info_t;


  #ifndef __ILEC400__
    extern "C" {
  #endif

  int QleActBndPgm (_SYSPTR        *,  /* Pointer to service program */
                    int            *,  /* Activation mark            */
                    Qle_ABP_Info_t *,  /* Activation information     */
                    int            *,  /* Length of Activation Info. */
                    Qus_EC_t       *); /* Error code                 */

  void *QleGetExp (int *,            /* Service pgm activation mark  */
                   int *,            /* Export Id                    */
                   int *,            /* Export name length           */
                   char *,           /* Export name                  */
                   void **,          /* Pointer to Pointer to export */
                   int *,            /* type, see QLE_EX_* defn's    */
                   Qus_EC_t *);      /* Error code                   */

  #ifndef __ILEC400__
    }
  #endif

#endif /* #ifndef QLEAWI_h */
#pragma checkout(resume)
