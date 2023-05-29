 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/ESPTRNXT                                   */
 /*                                                                */
 /* Descriptive Name: Writer Transform Exit Interface              */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Writer Transform Exit Interface               */
 /*              - Describes the interface between a user defined  */
 /*                writer transform exit program and               */
 /*                an AS/400 printer writer (writer).              */
 /*                                                                */
 /* Header Files Included: none.                                   */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Esp_Transform_Exit_I_t                         */
 /*                 Esp_Transform_Exit_O_t                         */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710       3D60  950111 KJV:      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef ESPTRNXT_h
#define ESPTRNXT_h

/*******************************************************************/
/* Structure for Option Specific input information to transform    */
/*******************************************************************/

typedef _Packed struct Esp_Transform_Exit_I
{
     char Writer_Handle[16];
     char Writer_Name[10];
     char Printer_Device_Name[10];
     char Writer_Outq_Name[10];
     char Writer_Outq_Library_Name[10];
     char Writer_Msgq_Name[10];
     char Writer_Msgq_Library_Name[10];
     char Reserved1[10];
     char Spooled_File_Handle[10];
     char Internal_Job_Id[16];
     char Internal_Spool_Id[16];
     char Qualified_Job_Name[26];
     char Spooled_File_Name[10];
     int  Spooled_File_Number;
     char Reserved2[12];
     int  End_File_Type;
     int  Termination_Type;
     char Current_Writer_Form_Type[10];
     char Return_Align_Data;
     char Reserved3[5];
     int  Number_Of_Complete_Pages;
     char Wkstn_Cust_Obj_Name[10];
     char Wkstn_Cust_Obj_Lib[10];
     char Mfr_Type_Model[15];
} Esp_Transform_Exit_I_t;

/******************************************************************/
/* Structure for Option Specific Output Information From Transform*/
/*  Note:  The following type definition only defines the fixed   */
/*         portion of the format.  Any varying length fields must */
/*         be defined by the user.                                */
/******************************************************************/

typedef _Packed struct Esp_Transform_Exit_O
{
    int  Return_Code;
    char Transform_File;
    char Pass_Input_Data;
    char Send_Single_Copy;
    char Send_Open_Time_Cmds;
    char Done_Transforming_File;
    char Reserved[3];
    int  Vert_Pos_Cmds_Offset;
    int  Vert_Pos_Cmds_Length;
    int  Print_Data_Offset;
    int  Print_Data_Length;
    int  Carriage_Ret_Cmds_Offset;
    int  Carriage_Ret_Cmds_Length;
    int  Form_Feed_Cmds_Offset;
    int  Form_Feed_Cmds_Length;
    /*char  Carriage_Ret_Cmds[]; */   /* Varying length              */
    /*char  Form_Feed_Cmds[]; */      /* Varying length              */
} Esp_Transform_Exit_O_t;
#endif
