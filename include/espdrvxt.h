 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/ESPDRVXT                                   */
 /*                                                                */
 /* Descriptive Name: Print Driver Exit Interface                  */
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
 /* Description: The Print Driver Exit Interface                   */
 /*              - Describes the interface between a user defined  */
 /*                print driver exit proogram (print driver) and   */
 /*                an AS/400 printer writer (writer).              */
 /*                                                                */
 /* Header Files Included: H/ESPDRVXT                              */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qsp_Driver_Exit_I_t                            */
 /*                 Qsp_Driver_Exit_O_t                            */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710       3D60  950111 RJOHNSON: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef ESPDRVXT_h
#define ESPDRVXT_h

/*******************************************************************/
/* Structure for Option Specific input information to print driver */
/*******************************************************************/

typedef _Packed struct Qsp_Driver_Exit_I
{
     char Writer_Handle[16];
     char Writer_Name[10];
     char Printer_Device_Name[10];
     char Writer_Outq_Name[10];
     char Writer_Outq_Library_Name[10];
     char Writer_Msgq_Name[10];
     char Writer_Msgq_Library_Name[10];
     char Align_File[10];
     char Spooled_File_Handle[10];
     char Internal_Job_Id[16];
     char Internal_Spool_Id[16];
     char Qualified_Job_Name[26];
     char Spooled_File_Name[10];
     int  Spooled_File_Number;
     int  Starting_Page_Number;
     int  Drawer_For_Separator_Pages;
     int  Number_Of_Job_Separators;
     int  Number_Of_File_Separators;
     int  Termination_Type;
     char Current_Writer_Form_Type[10];
     char Reserved[45];
} Qsp_Driver_Exit_I_t;

/******************************************************************/
/* Structure for Option Specific Output Information From Print    */
/* Driver.                                                        */
/******************************************************************/

typedef _Packed struct Qsp_Driver_Exit_O
{
    int  Error_Code;
    int  Initial_Status;
    int  Idle_Timer;
    char Allow_Interrupt;
    char Reserved[3];
    char Lan_Driver_Name[10]; /* Name of LAN driver is to start. */
} Qsp_Driver_Exit_O_t;
#endif
