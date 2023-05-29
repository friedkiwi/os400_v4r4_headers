/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QEZCHBKL                                      */
/*                                                                   */
/* Descriptive Name: Change OA Backup List API.                      */
/*                                                                   */
/* 5716-SS1  (C) Copyright IBM Corp. 1996,1996                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Change OA Backup List API allows the user to     */
/*              change the backup status of the objects to be backed */
/*              up using Operational Assist.                         */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QEZCHBKL.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9453100     3D70  960317 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QEZCHBKL_h
 #define QEZCHBKL_h

 /********************************************************************/
 /*  Prototype for QEZCHBKL API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QEZCHBKL,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QEZCHBKL (void *,           /* Input parm structure            */
                int,              /* Size of input parm structure    */
                void *);          /* Error Code                      */


 /*********************************/
 /* Format of the input structure */
 /*********************************/

  typedef _Packed struct Qez_Input_Var {
        long Number_Records;
      /*Qez_Record_t Array;*/              /* Varying length field  */
  } Qez_Input_Var_t;

  typedef _Packed struct Qez_Record {
        long Record_Length;
        int Key_Number;
        long Data_Length;
      /*char Key_Data;*/                   /* Varying length field  */
  } Qez_Record_t;

#endif
