 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYASPOL                                    */
 /*                                                                */
 /* Descriptive Name: Open list of ASPs API.                       */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open List of ASPs API opens a list of ASPs.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: YASP0100_t                                     */
 /*                 YASP0200_t                                     */
 /*                 YASP0300_t                                     */
 /*                 YASP_List_Information_t                        */
 /*                 YASP_Filter_t                                  */
 /*                                                                */
 /* Function Prototype List: QYASPOL                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95991       4D40  980824 JGR    :  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QYASPOL_h
 #define QYASPOL_h

 /******************************************************************/
 /*  Prototype for QYASPOL API                                     */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QYASPOL,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QYASPOL(void *,            /* Receiver variable              */
              int  *,            /* Length of receiver variable    */
              void *,            /* List information               */
              int  *,            /* Number of records to return    */
              int  *,            /* Number of filters              */
              void *,            /* Filter information             */
              char *,            /* Format name                    */
              void *);           /* Error Code                     */

 /******************************************************************/
 /* Type Definition for the YASP0100 format.                       */
 /******************************************************************/
 typedef _Packed struct YASP0100
    {
       int  Number;
    } YASP0100_t;

 /******************************************************************/
 /* Type Definition for the YASP0200 format.                       */
 /******************************************************************/
 typedef _Packed struct YASP0200
    {
       int  Number;
       int  Disks;
       int  Total;
       int  Avail;
       int  Prot_Total;
       int  Prot_Avail;
       int  Unprot_Total;
       int  Unprot_Avail;
       int  System_Stg;
       int  Ovrflow_Stg;
       int  Error_Log;
       int  Mach_Log;
       int  Mach_Trace;
       int  M_S_Dump;
       int  Microcode;
       int  Threshold;
       char Type[2];
       char Ovrflow_Rslt;
       char End_Immed;
       char Comp_Rcvy_Pol;
       char Comp_Disks;
       char Bal_Status;
       char Bal_Type;
       char Date_Time[13];
       char Reserved1[3];
       int  Bal_Moved;
       int  Bal_Remain;
       int  Trace_Duration;
       char Trace_Status;
       char Trace_Date_Time[13];
    } YASP0200_t;

 /******************************************************************/
 /* Type Definition for the YASP0300 format.                       */
 /******************************************************************/
 typedef _Packed struct YASP0300
    {
       int  Number;
       char Type[4];
       char Model[4];
       char Serial_Num[10];
       char Resource[10];
       int  Unit_Number;
       int  Total;
       int  Available;
       int  Sys_Reserved;
       char Mir_Prot;
       char Mir_Report;
       char Mir_Status;
       char Reserved1;
       int  Unit_Control;
       int  Blks_To_M_S;
       int  Blks_From_M_S;
       int  Req_To_M_S;
       int  Req_From_M_S;
       int  P_Blks_From_M_S;
       int  P_Req_From_M_S;
       int  Sample_Cnt;
       int  Not_Busy_Cnt;
       char Comp_Status;
       char Prot_Type;
    } YASP0300_t;

 /******************************************************************/
 /* Type Definition for the Filter.                                */
 /******************************************************************/

 typedef _Packed struct YASP_Filter
    {
       int  Entry_Size;
       int  Key;
       int  Data_Size;
     /*char Data[];*/           /* Variable length data            */
    } YASP_Filter_t;

 /******************************************************************/
 /* Type Definition for List Information                           */
 /******************************************************************/

 typedef _Packed struct Qgy_YASP_List_Information
    {
       int  Total_Records;
       int  Records_Returned;
       char Request_Handle[4];
       int  Record_Length;
       char Information_Complete;
       char Date_Time_Created[13];
       char List_Status;
       char Reserved;
       int  Information_Length;
       int  First_Record_In_Buffer;
       char Reserved2[40];
    } YASP_List_Information_t;

 #endif
