 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSROBJD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Object Description API              */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve Object Description API lets you      */
 /*              retrieve object information about a specific      */
 /*              object.                                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwc_SSTS0100_t                                */
 /*                  Qwc_SSTS0200_t                                */
 /*                  Qwc_Rssts_Pool_Info_t                         */
 /*                  Qwc_SSTS0300_t                                */
 /*                                                                */
 /* Function Prototype List: QUSROBJD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSROBJD_h
 #define QUSROBJD_h

 /******************************************************************/
 /*  Prototype for QUSROBJD API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSROBJD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSROBJD(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Object and library name        */
               char *,           /* Object type                    */
               ...);             /* Optional Parameter Group:
                                      void *   Error code          */

 /******************************************************************/
 /* Type Definition for the OBJD0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_OBJD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Return_Lib[10];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[13];
       char Change_Date_Time[13];
    } Qus_OBJD0100_t;

 /******************************************************************/
 /* Type Definition for the OBJD0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_OBJD0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Return_Lib[10];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[13];
       char Change_Date_Time[13];
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
    } Qus_OBJD0200_t;

 /******************************************************************/
 /* Type Definition for the OBJD0300 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_OBJD0300
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Return_Lib[10];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[13];
       char Change_Date_Time[13];
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
       char Source_File_Update_Date_Time[13];
       char Object_Saved_Date_Time[13];
       char Object_Restored_Date_Time[13];
       char Creator_User_Profile[10];
       char System_Object_Creation[8];
       char Reset_Date[7];
       int  Save_Size;
       int  Save_Sequence_Number;
       char Storage[10];
       char Save_Command[10];
       char Save_Volume_ID[71];
       char Save_Device[10];
       char Save_File_Name[10];
       char Save_File_Lib_Name[10];
       char Save_Label[17];
       char System_Level[9];
       char Compiler[16];
       char Object_Level[8];
       char User_Changed;
       char Licensed_Program[16];
       char PTF[10];
       char APAR[10];
    } Qus_OBJD0300_t;

 /******************************************************************/
 /* Type Definition for the OBJD0400 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_OBJD0400
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Return_Lib[10];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[13];
       char Change_Date_Time[13];
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
       char Source_File_Update_Date_Time[13];
       char Object_Saved_Date_Time[13];
       char Object_Restored_Date_Time[13];
       char Creator_User_Profile[10];
       char System_Object_Creation[8];
       char Reset_Date[7];
       int  Save_Size;
       int  Save_Sequence_Number;
       char Storage[10];
       char Save_Command[10];
       char Save_Volume_ID[71];
       char Save_Device[10];
       char Save_File_Name[10];
       char Save_File_Lib_Name[10];
       char Save_Label[17];
       char System_Level[9];
       char Compiler[16];
       char Object_Level[8];
       char User_Changed;
       char Licensed_Program[16];
       char PTF[10];
       char APAR[10];
       char Last_Used_Date[7];
       char Usage_Information_Update;
       int  Days_Used_Count;
       int  Object_Size;
       int  Object_Size_Multiplier;
       char Object_Compress_Status;
       char Allow_Change;
       char Changed_By_Program;
       char User_Defined_Attr[10];
       char Overflow_A