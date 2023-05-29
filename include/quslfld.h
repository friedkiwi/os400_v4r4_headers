/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QUSLFLD                                      */
/*                                                                  */
/* Descriptive Name: List Fields                                    */
/*                                                                  */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                      */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: The List Fields API generates a list of fields      */
/*              within a specified file record format name.         */
/*                                                                  */
/* Header Files Included: None.                                     */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qdb_Lfld_Input_t                                 */
/*                 Qdb_Lfld_Header_t                                */
/*                 Qdb_Lfld_FLDL0100_t                              */
/*                 Qdb_Lfld_FLDL0200_t                              */
/*                                                                  */
/* Function Prototype List: QUSLFLD                                 */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------- -------------------------*/
/* $A0= D2862000     3D10  940317 TIRZAMAN:New Include              */
/* $A1= D9595700     4D40  980326 V2CIB10: Add format FLDL0200 which*/
/*                                         returns DFT value if     */
/*                                         present for field        */
/* $A2= D97032       4D40  980819 LJAMESON:Add fields for the LOB,  */
/*                                         UDT and datalink support.*/
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/* Additional notes about the Change Activity                       */
/* End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS *********************************/
#ifndef QUSLFLD_h
#define QUSLFLD_h

/********************************************************************/
/* Prototype for calling List Fields API QUSLFLD                    */
/********************************************************************/

#ifdef __ILEC400__
     #pragma linkage(QUSLFLD,OS,nowiden)
#else
     extern "OS"
#endif
void QUSLFLD ( void *,      /* user space and library name          */
               char *,      /* format name                          */
               void *,      /* database file name and library       */
               char *,      /* record format name                   */
               char *,      /* override processing                  */
               ...);        /* Optional Parameter:
                                 Error code                         */

/********************************************************************/
/* Type Definition for the Input Parameter Section of the user      */
/* space in the QUSLFLD API.                                        */
/********************************************************************/
typedef _Packed struct Qdb_Lfld_Input
   {
      char Userspace[10];
      char Userspace_Library[10];
      char Format_Name[8];
      char File_Name[10];
      char File_Library_Name[10];
      char Record_Format_Name[10];
      char Override;
   } Qdb_Lfld_Input_t;

/********************************************************************/
/* Type Definition for the Header Section of the user space in the  */
/* QUSLFLD API.                                                     */
/********************************************************************/
typedef _Packed struct Qdb_Lfld_Header
   {
      char   File_Name_Used[10];
      char   Library_Name[10];
      char   File_Type[10];
      char   Record_Format_Name[10];
      int    Record_Length;
      char   Record_Format_Id[13];
      char   Record_Text_Description[50];
      char   Reserved;
      int    Record_Description_CCSID;
      char   Variable_Length_Fields;
      char   Graphic_Fields_Indicator;
      char   Date_Time_Fields_Indicator;
      char   Null_Capable_Fields_Indicator;
   } Qdb_Lfld_Header_t;

/********************************************************************/
/* Type Definition for the FLDL0100 format of the userspace in the  */
/* QUSLFLD API.                                                 @A2C*/
/********************************************************************/
typedef _Packed struct Qdb_Lfld_FLDL0100
   {
      char   Field_Name[10];
      char   Data_Type;
      char   Use;
      int    Output_Buffer_Position;
      int    Input_Buffer_Position;
      int    Field_Length_Bytes;
      int    Digits;
      int    Decimal_Positions;
      char   Field_Text_Description[50];
      char   Edit_Code[2];
      int    Edit_Word_Length;
      char   Edit_Word[64];
      char   Column_Heading1[20];
      char   Column_Heading2[20];
      char   Column_Heading3[20];
      char   Internal_Field_Name[10];
      char   Alternate_Field_Name[30];
      int    Length_Alternate_Field;
      int    Number_DBCS_Characters;
      char   Null_Values_Allowed;
      char   Variable_Field_Indicator;
      char   Date_Time_Format[4];
      char   Date_Time_Separator;
      char   Variable_Length_Field_Ind;
      int    Field_Description_CCSID;
      int    Field_Data_CCSID;
      int    Field_Column_Heading_CCSID;
      int    Field_Edit_Words_CCSID;
      int    UCS2_Displayed_Length;
      int    Field_Data_Encoding_Scheme;
      int    Maximum_Large_Object_Length;
      int    Large_Object_Pad_Length;
      int    UDT_Name_Length;
      char   UDT_Name[128];
      char   UDT_Library_Name[10];
      char   Datalink_Control;
      char   Datalink_Integrity;
      char   Datalink_Read_Permission;
      char   Datalink_Write_Permission;
      char   Datalink_Recovery;
      char   Datalink_Unlink_Control;
   } Qdb_Lfld_FLDL0100_t;

/********************************************************************/
/* Type Definition for the FLDL0200 format of the userspace in the  */
/* QUSLFLD API.                                            @A2A @A1A*/
/********************************************************************/
typedef _Packed struct Qdb_Lfld_FLDL0200
   {
      int    Length_of_FLDL0200;
      int    Offset_to_DefaultVal;
      int    Length_of_DefaultVal;
      char   Field_Name[10];
      char   Data_Type;
      char   Use;
      int    Output_Buffer_Position;
      int    Input_Buffer_Position;
      int    Field_Length_Bytes;
      int    Digits;
      int    Decimal_Positions;
      char   Field_Text_Description[50];
      char   Edit_Code[2];
      int    Edit_Word_Length;
      char   Edit_Word[64];
      char   Column_Heading1[20];
      char   Column_Heading2[20];
      char   Column_Heading3[20];
      char   Internal_Field_Name[10];
      char   Alternate_Field_Name[30];
      int    Length_Alternate_Field;
      int    Number_DBCS_Characters;
      char   Null_Values_Allowed;
      char   Variable_Field_Indicator;
      char   Date_Time_Format[4];
     