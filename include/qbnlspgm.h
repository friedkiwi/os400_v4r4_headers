 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QBNLSPGM                                   */
 /*                                                                */
 /* Descriptive Name: List Service Program Information             */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The List Service Program Information API gives    */
 /*              information about service programs, similar to the*/
 /*              Display Service Program command.                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qbn_LSPGM_Input_Section_t                      */
 /*                 Qbn_LSPGM_Header_Section_t                     */
 /*                 Qbn_LSPGM_SPGL0100_t                           */
 /*                 Qbn_LSPGM_SPGL0200_t                           */
 /*                 Qbn_LSPGM_SPGL0300_t                           */
 /*                 Qbn-LSPGM_SPGL0400_t                           */
 /*                 Qbn_LSPGM_SPGL0500_t                           */
 /*                 Qbn_LSPGM_SPGL0600_t                           */
 /*                 Qbn_LSPGM_SPGL0700_t                           */
 /*                 QBN_LSPGM_SPGL0800_t                           */
 /*                                                                */
 /* Function Prototype List: QBNLSPGM.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* LEVEL                                                          */
 /* ------                                                         */
 /* V3R1M0                                                         */
 /* V3R6M0                                                         */
 /* V4R2M0                                                         */
 /* V4R4M0                                                         */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QBNLSPGM_h
 #define QBNLSPGM_h

 /******************************************************************/
 /* Prototype for calling Binder API QBNLSPGM                      */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QBNLSPGM,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QBNLSPGM (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified service program name */
                void *);         /* Error code                     */

 /******************************************************************/
 /* User Space Input Section                                       */
 /******************************************************************/
 typedef _Packed struct Qbn_LSPGM_Input_Section
    {
       char User_Space[10];
       char User_Space_Lib[10];
       char Format[8];
       char Srvpgm_Name[10];
       char Srvpgm_Library[10];
    }  Qbn_LSPGM_Input_Section_t;

 /******************************************************************/
 /* User Space Header Section                                      */
 /******************************************************************/
 typedef _Packed struct Qbn_LSPGM_Header_Section
    {
       char User_Space[10];
       char User_Space_Lib[10];
       int  Reason_Code;
    }  Qbn_LSPGM_Header_Section_t;

 /******************************************************************/
 /* Type definition for the SPGL0100                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LSPGM_SPGL0100
    {
       char Srvpgm_Name[10];
       char Srvpgm_Library_Name[10];
       char Bound_Module_Name[10];
       char Bound_Module_Library_Name[10];
       char Source_File_Name[10];
       char Source_File_Library_Name[10];
       char Source_File_Member[10];
       char Module_Attribute[10];
       char Module_Creation_Timestamp[13];
       char Source_File_Updated_Timestamp[13];
       char Sort_Sequence_Table[10];
       char Sort_Sequence_Table_Library[10];
       char Language_ID[10];
       int  Optimization_Level;
       int  Maximum_Optimization;
       char Debug_Data[10];
       char Module_Created_On[6];
       char Module_Created_For[6];
       char Reserved1[20];
       char User_Modified;
       char Licensed_Program[13];
       char PTF_Number[5];
       char APAR_ID[6];
       char Module_Creation_Data;
       int  Module_CCSID;
       char Object_Control_Level[8];
       char Performance_Data;
       char Profiling_Data[10];
       char Reserved4[1];
       int  Number_Proc;
       int  Number_Proc_Blk_Reordered;
       int  Number_Proc_Blk_Order_Measured;
       char Teraspace_Storage_Enabled;
       char Reserved3[75];
       int  Number_SQL_Inst;
       char Relational_Database[18];
       char Commitment_Control[10];
       char Allow_Copy_Data[10];
       char Close_SQL_Cursors[10];
       char Naming_Convention[10];
       char Date_Format[10];
       char Date_Separator;
       char Time_Format[10];
       char Time_Separator;
       char Delay_PREPARE[10];
       char Allow_Blocking[10];
       char Default_Collection_Name[10];
       char SQL_Package_Name[10];
       char SQL_Package_Library_Name[10];
       char Dynamic_User_Profile[10];
       char SQL_Sort_Sequence_Table[10];
       char SQL_Sort_Sequence_Table_Lib[10];
       char SQL_Language_ID[10];
       char Connection_Method[10];
       int  SQL_Path_Length;
       char SQL_Path[558];
    }  Qbn_LSPGM_SPGL0100_t;

 /******************************************************************/
 /* Type definition for the SPGM0200                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LSPGM_SPGM0200
    {
       char Srvpgm_Name[10];
       char Srvpgm_Library_Name[10];
       char Bound_Srvpgm_Name[10];
       char Bound_Srvpgm_Library_Name[10];
       char Bound_Srvpgm_Signature[16];
    }  Qbn_LSPGM_SPGL0200_t;

 /******************************************************************/
 /* Type definition for the SPGL0300                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LSPGM_SPGL0300
    {
       char Srvpgm_Name[10];
       char Srvpgm_Library_Name[10];
       int  Size_Data_Item_Export;
       int  Data_Item_Export_Name_CCSID;
       int  Data_Item_Export_Name_Length;
       char Data_Item_Export_Name[256];
    }  Qbn_LSPGM_SPGL0300_t;

 /******************************************************************/
 /* Type definition for the SPGL0400                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LSPGM_SPGL0400
    {
       char Srvpgm_Name[10];
       char 