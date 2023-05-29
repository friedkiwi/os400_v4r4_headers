/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/ETNCMTRB                                      */
/*                                                                   */
/* Descriptive Name: Commitment Control Exit Program                 */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: Users who add API commitment resources to the        */
/*              commitment definition must supply a commitment       */
/*              control exit program.                                */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qtn_Status_Info_t                                 */
/*                 Qtn_Return_Info_t                                 */
/*                                                                   */
/* Function Prototype List: none.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940410 LUPA:     New Include              */
/* $01= PSA50564     3D20  960212 V08DFC:   Correction to the Status */
/*                                          Inform Format Structure  */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef ETNCMTRB_h
 #define ETNCMTRB_h

 /********************************************************************/
 /*  Typedef for Status information Format structure.                */
 /********************************************************************/
 typedef _Packed struct Qtn_Status_Info {
       int   Status_Info_Length;
       char  Action_Required;
       char  Called_IPL_Recovery;
       char  Reserved_1[4];
       char  Proc_Error_Status;
       char  Proc_End_Status;
       char  Reserved_2;
       char  C_Or_R_Qualifier;
       char  C_Definition_Scope;
       char  Reserved_3[25];
       int   Cycle_Id;
       char  Journal_Name[10];
       char  Journal_Lib[10];
       char  Current_Luwid[39];
       char  C_Definition_Status;
 } Qtn_Status_Info_t;

 /********************************************************************/
 /*  Typedef for Return information Format structure.                */
 /********************************************************************/
 typedef _Packed struct Qtn_Return_Info {
       int   Ret_Info_Length;
       char  Commit_Vote;
       char  Classify_Res;
       char  Changes_Ended;
 } Qtn_Return_Info_t;

#endif
