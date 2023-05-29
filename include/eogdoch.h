 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EOGDOCH                                    */
 /*                                                                */
 /* Descriptive Name: Document Handleing Exit Program.             */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Document Handling program allows other        */
 /*              applications to be called in place of or in       */
 /*              addition to the OfficeVision/400 word processor.  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qog_Doci_DOCI0100_t                            */
 /*                 Qog_Doci_DOCI0200_t                            */
 /*                 Qog_Doci_DOCI0300_t                            */
 /*                 Qog_Doci_DOCI0400_t                            */
 /*                 Qog_Doci_DOCI0500_t                            */
 /*                 Qog_Doci_DOCI0600_t                            */
 /*                 Qog_Doci_DOCI0700_t                            */
 /*                 Qog_Doci_DOCI0800_t                            */
 /*                 Qog_Doci_Recipient_List_t;                     */
 /*                 Qog_Doci_DOCI0900_t                            */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940415 DWC:      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EOGDOCH_h
 #define EOGDOCH_h


 /******************************************************************/
 /* Print function request format.                                 */
 /******************************************************************/

 typedef _Packed struct Qog_Doci_DOCI0100
    {
       char Number_Of_Copies_To_Print[2];
       char Output_Device[1];
       char Printer_Device[10];
       char Output_Queue_Name[10];
       char Output_Queue_Lib_Name[10];
       char Output_file_name[10];
       char Form_Type[10];
       char Printer_File_Name[10];
       char Printer_File_Library_Name[10];
       char Device_File_Name[10];
       char Device_Library_Name[10];
       char Device_Member_Name[10];
       char Delay_Printing[1];
       char Draft_Spacing[1];
       char Print_Line_Numbers[1];
       char Resolve_Instructions[1];
       char Large_Print[1];
       int  Graphic_Character_Set;
       int  Code_Page;
       char Print_Separator_Page[1];
       char Adjust_Line_Endings[1];
       char Adjust_Page_Endings[1];
       char Allow_Window_Lines[1];
       char Additional_Spaces_To_Left[2];
       char Print_Changes_Symbols[1];
       char Change_Symbols_To_Print[5];
       char Print_Quality[1];
       char Place_On_Job_Queue[1];
       char Send_Completion_Message[1];
       char Job_Description_Name[10];
       char Job_Description_Lib_Name[10];
       char Cancel_On_Error[1];
       char Print_Error_Log[1];
       char Error_Log_Form_Type[10];
       char Clear_Err_Log_After_Printing[1];
       char Save_Resolved_Output[1];
       char Resolved_Output_Doc[12];
       char Resolved_Output_Folder[63];
       char Multiple_Line_Report[1];
       char Print_On_Both_Sides[1];
       char Auto_Page_Binding[1];
       char Auto_Shift_Margins[1];
       char Renumber_Sys_Page_Numbers[1];
       char Print_From_Page_1_[7];
       char Print_To_Page_1_[8];
       char Print_From_Page_2_[7];
       char Print_To_Page_2_[8];
       char Print_From_Page_3_[7];
       char Print_To_Page_3_[8];
       char Print_From_Page_4_[7];
       char Print_To_Page_4_[8];
       char Print_From_Page_5_[7];
       char Print_To_Page_5_[8];
       char Print_From_Page_6_[7];
       char Print_To_Page_6_[8];
       char Print_From_Page_7_[7];
       char Print_To_Page_7_[8];
       char Doc_Is_Label_Doc[1];
       char Number_Of_Labels[2];
       char Width_Of_Labels[3];
       char Sheet_Feed_Labels[1];
       char Num_Of_Rows_Per_Sheet[2];
       char Merge_Type[1];
       char Query_Name[10];
       char Query_Library_Name[10];
       char Data_Doc_Name[12];
       char Data_Folder_Name[63];
       char Data_File_Name[10];
       char Data_File_Lib_Name[10];
       char Data_File_Member_Name[10];
    } Qog_Doci_DOCI0100_t;

 /******************************************************************/
 /* Merge function request format.                                 */
 /******************************************************************/

 typedef _Packed struct Qog_Doci_DOCI0200
    {
       char To_Document_Name[12];
       char To_Folder_Name[63];
       char Replace_Document[1];
       char Place_On_Job_Queue[1];
       char Send_Completion_Message[1];
       char Job_Description_Name[10];
       char Job_Description_Lib_Name[10];
       char Merge_Type[1];
       char Query_Name[10];
       char Query_Lib_Name[10];
       char Data_Document_Name[12];
       char Data_Folder_Name[63];
       char Data_File_Name[10];
       char Data_File_Lib_Name[10];
       char Data_File_Member_Name[10];
       char Adjustment_Option[1];
       char Multiple_Line_Report[1];
       char Collect_Footnotes[1];
       char Reserved[258];
    } Qog_Doci_DOCI0200_t;

 /******************************************************************/
 /* Spell function request format.                                 */
 /******************************************************************/

 typedef _Packed struct Qog_Doci_DOCI0300
    {
       char Type_Of_Check[1];
       char Beginning_Page_Number[7];
       char Ending_Page_Number[7];
       char Reserved[470];
    } Qog_Doci_DOCI0300_t;

 /******************************************************************/
 /* Mail function request format.                                  */
 /******************************************************************/

 typedef _Packed struct Qog_Doci_DOCI0400
    {
       char Mail_Reference_Doc_Name[12];
       char Mail_Reference_Folder_Name[63];
       char Attach_Mail_Reference[1];
       char Same_Note[1];
       char Reserved[408];
    } Qog_Doci_DOCI0400_t;

 /******************************************************************/
 /* Edit function request format.                                  */
 /******************************************************************/

 typedef _Packed struct Qog_Doci_DOCI0500
    {
       char Show_Exit_Display[1];
       char Reserved[484];
    } Qog_Doci_DOCI0500_t;

 /****************************************************