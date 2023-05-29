 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSRJOBI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Job Information API                 */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Describe your function here.                      */
 /*                                                                */
 /* Header Files Included: H/OPM-API-name or Service-pgm-name      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_JOBI0100_t.                                */
 /*                 Qwc_JOBI0150_t.                                */
 /*                 Qwc_JOBI0200_t.                                */
 /*                 Qwc_JOBI0300_t.                                */
 /*                 Qwc_JOBI0400_t.                                */
 /*                 Qwc_JOBI0500_t.                                */
 /*                 Qwc_JOBI0600_t.                                */
 /*                 Qwc_JOBI0700_t.                                */
 /*                 Qwc_Grp_List_t.                                */
 /*                 Qwc_Lib_List_t.                                */
 /*                                                                */
 /* Function Prototype List: QUSRJOBI.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $A1= D6464800     3D70  960322 MJD:      Add routing data.     */
 /* $A2= D9497904     4D20  970314 TDP:      Add Decimal Format.   */
 /* $A3= D9497904     4D20  970314 TDP:      Add Decimal Format.   */
 /* $01= p3653833     4D20  970909 TCR:      Add reserved field.   */
 /*                                           to 200 fmt           */
 /* $A4= D9560000     4D30  971008 ROCH:     Add Server Mode for   */
 /*                                          SQL                   */
 /*                                          Correct order of      */
 /*                                          Qwc_JOBI0900_t fields */
 /*                                                                */
 /* $A5= D9571100     4D30  971203 ROCH:     Add Chrid Control     */
 /* $A6= D9560400     4D30  971217 ROCH:     Add Maximum threads   */
 /* $A7= D9560411     4D30  980107 ROCH:     Add Job user ID,      */
 /*                                          Job user ID setting,  */
 /*                                          Process ID number     */
 /* $02= p3669769     4Q30  980430 AMN:      Move reserved field   */
 /*      p3669897                             in 200 fmt.          */
 /* $A8= D95998       4D40  980624 ROCH:     Add server type.      */
 /* $A9= D97233       4D40  980902 ROCH:     Add new tmp storage   */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  QUSRJOBI_h
#define  QUSRJOBI_h

/*******************************************************************/
/*  Prototype for calling Retrieve Job Information API (QUSRJOBI)  */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QUSRJOBI,OS,nowiden)
#else
     extern "OS"
#endif

void QUSRJOBI(void *,            /* Receiver variable              */
              int,               /* Length of receiver variable    */
              char *,            /* Format name                    */
              void *,            /* Qualified job name             */
              void *,            /* Internal job identifier        */
              ...);              /* Optional Parameter:
                                      Error code                   */

/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0100 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0100 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  Run_Priority;
     int  Time_Slice;
     int  Default_Wait;
     char Purge[10];
} Qwc_JOBI0100_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0150 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0150 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  Run_Priority;
     int  Time_Slice;
     int  Default_Wait;
     char Purge[10];
     char Time_Slice_End_Pool[10];
     int  CPU_Used;
     int  System_Pool_ID;
     int  Max_CPU_Time;
     int  Temp_Storage_Used;
     int  Max_Temp_Storage;
     int  Thread_Count;
     int  Maximum_Threads;
     unsigned int  Temp_Storage_Used_MB;
     int  Max_Temp_Storage_MB;
} Qwc_JOBI0150_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0200 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0200 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Subsys_Name[10];
     int  Run_Priority;
     int  System_Pool_ID;
     int  CPU_Used;
     int  Aux_IO_Request;
     int  Interact_Trans;
     int  Response_Time;
     char Function_Type[1];
     char Function_Name[10];
     char Active_Job_Stat[4];
     int  Num_DBase_Lock_Wts;
     int  Num_Internal_Mch_Lck_Wts;
     int  Num_Non_DBase_Lock_Wts;
     int  Wait_Time_DBase_Lock_Wts;
     int  Wait_Time_Internal_Mch_Lck_Wts;
     int  Wait_Time_Non_DBase_Lock_Wts;
     char Reserved[1];
     int  Current_System_Pool_ID;
     int  Thread_Count;
} Qwc_JOBI0200_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0300 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0300 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Jobq_Name[10];
     char Jobq_Lib[10];
     char Jobq_Priority[2];
     char Outq_Name[10];
     char Outq_Lib[10];
     char Outq_Priority[2];
     char Prt_Dev_Name[10];
     char Subm_Job_Name[10];
     char Subm_User_Name[10];
     char Subm_Job_Num[6];
     char Subm_Msgq_Name[10];
     char Subm_Msgq_Lib[10];
     char Sts_On_Jobq[10];
     char Date_Put_On_Jobq[8];
     char Job_Date[7];
} Qwc_JOBI0300_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0400 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0400 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Date_Enter_Sys[13];
     char Date_Job_Active[13];
     char Job_Acct_Code[15];
     char Job_Desc_Name[10];
     char Job_Desc_Lib[10];
     char Unit_Work_ID[24];
     char Mode_Name[8];
     char Inq_Msg_Reply[10];
     char Log_Cl_Pgms[10];
     char Brk_Msg_Hndl[10];
     char Status_Msg_Hndl[10];
     char Device_Recov_Act[13];
     char DDM_Conv_Hndl[10];
     char Date_Separator[1];
     char Date_Format[4];
     char Print_Text[30];
     char Subm_Job_Name[10];
     char Subm_User_Name[10];
     char Subm_Job_Num[6];
     char Subm_Msgq_Name[10];
     char Subm_Msgq_Lib[10];
     char Time_Separator[1];
     int  Coded_Char_Set_ID;
     char Sched_Date_Time[8];
     char Print_Key_Format[10];
     char Sort_Sequence[10];
     char Sort_Sequence_Lib[10];
     char Language_ID[3];
     char Country_ID[2];
     char Completion_Status[1];
     char Signed_On_Job[1];
     char Job_Switches[8];
     char Job_Msgq_Full_Action[10];
     char Reserved1[1];
     int  Job_Msgq_Max_Size;
     int  Default_Coded_Char_Set_Id;
     char Routing_Data[80];
     char Decimal_Format[1];
     char Chrid_Ctl[10];
     char Server_Type[30];
} Qwc_JOBI0400_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0500 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0500 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  End_Severity;
     int  Log_Severity;
     char Log_Level[1];
     char Log_Text[10];
} Qwc_JOBI0500_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0600 format                   */
/*******************************************************************/
typedef _Packed struct Qwc_Grp_List{
     char Grp_Name[10];
} Qwc_Grp_List_t;

typedef _Packed struct Qwc_JOBI0600 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Job_Switch[8];
     char End_Status[1];
     char Subsys_Name[10];
     char Subsys_Lib[10];
     char Curr_Usrprf_Name[10];
     char Dbcs_Enabled[1];
     char Exit_Key[1];
     char Cancel_Key[1];
     int  Product_Return_Code;
     int  User_Return_Code;
     int  Program_Return_Code;
     char Special_Environment[10];
     char Device_Name[10];
     char Group_Profile_Name[10];
     Qwc_Grp_List_t Grp[15];
     char Job_User_ID[10];
     char Job_User_ID_Setting[1];
} Qwc_JOBI0600_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0700 format                   */
/****                                                           ****/
/* NOTE: The following type definition only defines the fixed      */
/*       portion of the format.  Any varying length field will     */
/*       have to be defined by the user.                           */
/*********************************************