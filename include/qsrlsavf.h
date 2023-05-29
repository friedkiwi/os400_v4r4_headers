/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSRLSAVF                                      */
/*                                                                   */
/* Descriptive Name: List Save File                                  */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The List Save File API lists the contents of a save  */
/*              file.                                                */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qsr_Lsavf_Input_t                                 */
/*                 Qsr_Lsavf_Header_t                                */
/*                 Qsr_Lsavf_SAVF0100_t                              */
/*                 Qsr_Lsavf_SAVF0200_t                              */
/*                 Qsr_Lsavf_SAVF0300_t                              */
/*                                                                   */
/* Function Prototype List: QSRLSAVF.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940406 JRU      :New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSRLSAVF_h
 #define QSRLSAVF_h


 /******************************************************************/
 /*  Prototype for QSRLSAVF API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QSRLSAVF,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QSRLSAVF (void *,        /* Qualified user space name        */
                char *,        /* Format name                      */
                void *,        /* Qualified save file name         */
                char *,        /* Object name filter               */
                char *,        /* Object type filter               */
                void *,        /* Continuation handle              */
                void *);       /* Error code                       */

 /******************************************************************/
 /*  Type Definition for the Input Section.                        */
 /******************************************************************/
 typedef _Packed struct Qsr_Lsavf_Input
    {
       char User_Space_Name_Specified[10];
       char User_Space_Library_Name_Spec[10];
       char Format_Name[8];
       char Save_File_Name_Specified[10];
       char Save_File_Library_Name_Specified[10];
       char Object_Name_Filter_Specified[10];
       char Object_Type_Filter_Specified[10];
       char Continuation_Handle_Specified[36];
    } Qsr_Lsavf_Input_t;

 /******************************************************************/
 /*  Type Definition for the Header Section.                       */
 /******************************************************************/
 typedef _Packed struct Qsr_Lsavf_Header
    {
       char User_Space_Name_Used[10];
       char User_Space_Library_Name_Used[10];
       char Save_File_Name_Used[10];
       char Save_File_Library_Name_Used[10];
       char Continuation_Handle_Returned[36];
    } Qsr_Lsavf_Header_t;

 /******************************************************************/
 /*  Type Definition for the SAVF0100 format.                      */
 /******************************************************************/
 typedef _Packed struct Qsr_Lsavf_SAVF0100
    {
       char Library_Saved[10];
       char Save_Command[10];
       char Save_Date_And_Time[8];
       int  Auxiliary_Storage_Pool;
       int  Records;
       int  Objects_Saved;
       int  Access_Paths;
       char Save_Active[10];
       char Release_Level[6];
       char Data_Compressed[1];
       char System_Serial_Number[8];
       char Reserved[3];
    } Qsr_Lsavf_SAVF0100_t;

 /******************************************************************/
 /*  Type Definition for the SAVF0200 format.                      */
 /******************************************************************/
 typedef _Packed struct Qsr_Lsavf_SAVF0200
    {
       char Object_Name[10];
       char Library_Saved[10];
       char Object_Type[10];
       char Extended_Object_Attribute[10];
       char Save_Date_And_Time[8];
       int  Object_Size;
       int  Object_Size_Multiplier;
       int  Auxiliary_Storage_Pool;
       char Data_Saved[1];
       char Object_Owner[10];
       char Document_Library_Object_Name[20];
       char Folder[63];
       char Text_Description[50];
    } Qsr_Lsavf_SAVF0200_t;

 /******************************************************************/
 /*  Type Definition for the SAVF0300 format.                      */
 /******************************************************************/
 typedef _Packed struct Qsr_Lsavf_SAVF0300
    {
       char File_Name[10];
       char Library_Saved[10];
       char Member_Name[10];
       char Extended_Object_Attribute[10];
       char Save_Date_And_Time[8];
       int  Members_Saved;
    } Qsr_Lsavf_SAVF0300_t;

#endif
