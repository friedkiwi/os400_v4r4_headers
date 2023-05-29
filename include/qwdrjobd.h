 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWDRJOBD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Job Description Information API     */
 /*                                                                */
 /* 5763-SS1,5769-SS1  (C) Copyright IBM Corp. 1994,1997           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Job Description Information API      */
 /*              retrieves information from a job description      */
 /*              object and places it into a single variable in the*/
 /*              calling program.                                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwd_JOBD0100_t                                */
 /*                                                                */
 /* Function Prototype List: QWDRJOBD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $A1= D9423200     3D70  960204 ROCH:     Add CYMD_Date         */
 /* $A2= D9477926     4D20  970618 ROCH: Add Allow_Multiple_Threads*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWDRJOBD_h
 #define QWDRJOBD_h

 /******************************************************************/
 /*  Prototype for QWDRJOBD API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWDRJOBD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWDRJOBD(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Qualified job description name */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the JOBD0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwd_JOBD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Job_Description_Name[10];
       char Job_Description_Lib_Name[10];
       char User_Name[10];
       char Job_Date[8];
       char Job_Switches[8];
       char Job_Queue_Name[10];
       char Job_Queue_Lib_Name[10];
       char Job_Queue_Priority[2];
       char Hold_Job_Queue[10];
       char Output_Queue_Name[10];
       char Output_Queue_Lib_Name[10];
       char Output_Queue_Priority[2];
       char Printer_Device_Name[10];
       char Print_Text[30];
       int  Syntax_Check_Severity;
       int  End_Severity;
       int  Message_Log_Severity;
       char Message_Log_Level;
       char Message_Log_Text[10];
       char Log_CL_Programs[10];
       char Inquiry_Message_Reply[10];
       char Device_Recovery_Action[13];
       char Time_Slice_End_Pool[10];
       char Accounting_Code[15];
       char Routing_Data[80];
       char Text_Description[50];
       char Reserved;
       int  Offset_Initial_Lib_List;
       int  Number_Libs_In_Lib_list;
       int  Offset_Request_Data;
       int  Length_Request_Data;
       int  Job_Message_Queue_Max_Size;
       char Job_Message_Queue_Full_Action[10];
       char CYMD_Date[10];
       char Allow_Multiple_Threads[10];
     /*char Reserved2[];*/       /* Varying length                 */
     /*char Initial_Lib_List[][11];*//* Varying length             */
     /*char Request_Data[];*/    /* Varying length                 */
    } Qwd_JOBD0100_t;

 #endif
