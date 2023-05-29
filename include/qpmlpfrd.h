/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QPMLPFRD                                      */
/*                                                                   */
/* Descriptive Name: List Performace Data API.                       */
/*                                                                   */
/* 5716-SS1, 5769-SS1                                                */
/* (C) Copyright IBM Corp. 1994,1998                                 */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The List Performance Data (QPMLPFRD) API returns the */
/*              latest collection of performance data in the user    */
/*              space specified for the resource on the Work with    */
/*              Collector (QPMWKCOL) API.                            */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qpm_Input_Parameter_Section_t                     */
/*                 Qpm_Header_Section_t                              */
/*                 Qpm_Job_Format_t                                  */
/*                 Qpm_Pool_Format_t                                 */
/*                 Qpm_Disk_Format_t                                 */
/*                 Qpm_IOP_Format_t                                  */
/*                 Qpm_Async_Format_t                                */
/*                 Qpm_Bisync_Format_t                               */
/*                 Qpm_ECL_Format_t                                  */
/*                 Qpm_Ethernet_Format_t                             */
/*                 Qpm_IDLC_Format_t                                 */
/*                 Qpm_LAPD_Format_t                                 */
/*                 Qpm_SDLC_Format_t                                 */
/*                 Qpm_X_25_Format_t                                 */
/*                                                                   */
/* Function Prototype List: QPMLPFRD.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940417 LUPA:     New Include              */
/* $A1= D9169600     3D60  941128 MMILLER:  New fields added to      */
/*                                          end of formats           */
/* $A2= D94395       3D70  960314 DFL:      New fields added to      */
/*                                           IOP format              */
/* $C3= D94940.2     4D20  970220 MAS:      New fields added to      */
/*                                          end of formats           */
/* $E1= D97008       4D40  980831 MAS:      New field added to       */
/*                                           IDLC format             */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QPMLPFRD_h
 #define QPMLPFRD_h

 /********************************************************************/
 /*  Prototype for QPMLPFRD API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QPMLPFRD,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QPMLPFRD (char *,           /* Type of Resource                */
                int  *,           /* Sequence Number of Collection   */
                void *);          /* Error Code                      */

 /********************************************************************/
 /*  Typedef for Input Parameter Section                             */
 /********************************************************************/
 typedef _Packed struct Qpm_Input_Parameter_Section {
       char  R_Type[10];
       char  Reserved[2];
       int   Sequence_Num;
 } Qpm_Input_Parameter_Section_t;

 /********************************************************************/
 /*  Typedef for Header Section                                      */
 /********************************************************************/
 typedef _Packed struct Qpm_Header_Section {
       char  R_Type[10];
       char  Reserved[2];
       int   Interval_Time;
       int   CPU_Secs_Used;
       int   Num_CPU;
       int   Sequence_Num;
       char  System_Name[10];
       char  Release[6];
       char  Date_Time[12];
 } Qpm_Header_Section_t;

 /********************************************************************/
 /*  Typedef for Job Format                                          */
 /********************************************************************/
 typedef _Packed struct Qpm_Job_Format {
       char  Job_Name[10];
       char  User_Name[10];
       char  Job_Number[6];
       char  Job_Type;
       char  Job_Subtype;
       char  PT_Source_Job;
       char  PT_Target_Job;
       char  Emulation_Job;
       char  PCS_App_Job;
       char  Target_DDM_Job;
       char  MRT_Job;
       char  S36_Env_Job;
       char  Priority[2];
       char  Pool[2];
       char  Reserved[13];
       int   Time_Slice;
       int   CPU_Time;
       int   Trans_Count;
       int   Trans_Time;
       int   Sync_DB_Reads;
       int   Sync_DB_Writes;
       int   Sync_NDB_Reads;
       int   Sync_NDB_Writes;
       int   Async_DB_Reads;
       int   Async_DB_Writes;
       int   Async_NDB_Reads;
       int   Async_NDB_Writes;
       int   Comm_Puts;
       int   Comm_Gets;
       int   EAO_Exceptions;
       int   Binary_Overflows;
       int   Decimal_Overflows;
       int   Float_Overflows;
       int   Logical_DB_Reads;
       int   Logical_DB_Writes;
       int   Misc_DB_Ops;
       int   Permanent_Writes;
       int   Checksum_IO;
       int   PAG_Faults;
       int   Number_Print_Lines;
       int   Number_Print_Pages;
       int   Active_Wait_Trans;
       int   Wait_Ineligible_Trans;
       int   Active_Ineligible_Trans;
       char  Line_Desc[10];
       char  Secondary_Line_D[10];
       char  Task_Type[2];
       char  Task_Type_Extender[2];
       int   Threads_Active;
       int   Threads_Count;
 } Qpm_Job_Format_t;

 /********************************************************************/
 /*  Typedef for Pool Format                                         */
 /********************************************************************/
 typedef _Packed struct Qpm_Pool_Format {
       int   Pool_Number;
       int   Activity_Level;
       int   Pool_Size;
       int   Machine_Res_Portion;
       int   DB_Faults;
       int   NDB_Faults;
       int   DB_Pages;
       int   NDB_Pages;
       int   Active_Wait_Trans;
       int   Wait_Ineligible_Trans;
       int   Active_Ineligible_Trans;
       int   Active_Wait_Std_Wrap;
       int   Wait_Inel_Std_Wrap;
       int   Active_Inel_Std_Wrap;
 } Qpm_Pool_Format_t;

 /********************************************************************/
 /*  Typedef for Disk Format                                         */
 /********************************************************************/
 typedef _Packed struct Qpm_Disk_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Arm_Number[4];
       char  Drive_Type[4];
       char  Mirror_Flag;
       char  Mirror_Status;
       char  Reserved_1[2];
       int   Times_Not_Busy;
       int   Samples_Taken;
       int   Drive_Capacity;
       int   Drive_Available;
       int   Blocks_Read;
       int   Blocks_Written;
       int   Read_Commands;
       int   Write_Commands;
       int   Idle_Loop_Count;
       int   Idle_Loop_Time;
       int   Seeks_23;
       int   Seeks_13_23;
       int   Seeks_16_13;
       int   Seeks_112_16;
       int   Seeks_112;
       int   Zero_Seeks;
       int   Buffer_Overruns;
       int   Buffer_Underruns;
       int   Avg_Queue_Length;
       char  ASP_Number[2];
       char  Checksum_Number[2];
       int   Permanent_Capacity;
       int   Permanent_Available;
       char  IOP_Resource_Name[10];
       char  Unit_Resource_Name[10];
       char  Compressed_Unit;
 } Qpm_Disk_Format_t;

 /********************************************************************/
 /*  Typedef for IOP Format                                          */
 /****************************************