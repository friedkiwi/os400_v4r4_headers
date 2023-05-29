/*** START HEADER FILE SPECIFICATIONS ***************************/
/*                                                              */
/* Header File Name: H/QSPROUTQ                                 */
/*                                                              */
/* Descriptive Name: Retrieve Output Queue Information.         */
/*                                                              */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                  */
/* All rights reserved.                                         */
/* US Government Users Restricted Rights -                      */
/* Use, duplication or disclosure restricted                    */
/* by GSA ADP Schedule Contract with IBM Corp.                  */
/*                                                              */
/* Licensed Materials-Property of IBM                           */
/*                                                              */
/*                                                              */
/* Description: The Retrieve Output Queue Information API       */
/*              returns information about the parameters used   */
/*              to create the queue, the current status of the  */
/*              queue, and the number of entries on the queue.  */
/*                                                              */
/*                                                              */
/* Header Files Included: None.                                 */
/*                                                              */
/* Macros List: None.                                           */
/*                                                              */
/* Structure List: Qsp_OUTQ0100_t                               */
/*                 Qsp_OUTQ0200_t                               */
/*                 Qsp_PAGENT_t                                 */
/*                 Qsp_WTRENT_t                                 */
/*                                                              */
/* Function Prototype List: QSPROUTQ.                           */
/*                                                              */
/* Change Activity:                                             */
/*                                                              */
/* CFD List:                                                    */
/*                                                              */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION  */
/* ---- ------------ ----- ------ --------- --------------------*/
/* $A0= D2862000     3D10  940213 LUPA:     New Include         */
/* $A1= D9171000     3D60  950111 JCL :     Print openness      */
/* $A2= D95233       4D20  970221 BOLLIG:   added IMG CFG       */
/* $A3= D94929       4D30  970727 BOLLIG:   added SPLFASP info  */
/*                                                              */
/* End CFD List.                                                */
/*                                                              */
/*  Additional notes about the Change Activity                  */
/* End Change Activity.                                         */
/*** END HEADER FILE SPECIFICATIONS *****************************/

 #ifndef QSPROUTQ_h
 #define QSPROUTQ_h

  #ifdef __ILEC400__
       #pragma linkage (QSPROUTQ,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Retrieve Output Queue Information API     */
 /*  QSPROUTQ                                                    */
 /****************************************************************/
 void QSPROUTQ (void *,          /* Receiver variable            */
                int,             /* Length of receiver variable  */
                char *,          /* Format name                  */
                void *,          /* Qualified output queue name  */
                void *);         /* Error code                   */

 /****************************************************************/
 /* Structure for the Spooled File Size Entry                    */
 /****                                                         ***/
 /*     The following describes the spooled file size entries.   */
 /*     The spooled file size entries can be included in format  */
 /*     OUTQ0100 and OUTQ0200.                                   */
 /*                                                              */
 /*     Spool_File_Size_Offset provides the offset               */
 /*     Number_Of_Size_Entries provides the number of repeated   */
 /*     entries.                                                 */
 /*                                                              */
 /****************************************************************/

 typedef _Packed struct Qsp_PAGENT
    {
     int  Number_Of_Pages;
     char Starting_Time[8];
     char Ending_Time[8];
    } Qsp_PAGENT_t;


 /****************************************************************/
 /* Record structure for OUTQ0100 format                         */
 /****                                                         ***/
 /* NOTE: The following type definition only defines the fixed   */
 /*       portion of the format.  Any varying length field will  */
 /*       have to be defined by the user.                        */
 /****************************************************************/

 typedef _Packed struct Qsp_OUTQ0100
    {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Output_Queue_Name[10];
     char Output_Queue_Lib[10];
     char Order_of_Files[10];
     char Display_Any_File[10];
     int  Job_Separators;
     char Operator_Control[10];
     char Data_Queue_Name[10];
     char Data_Queue_Lib[10];
     char Authority_to_Check[10];
     int  Number_of_Files;
     char Output_Queue_Status[10];
     char Writer_Job_Name[10];
     char Writer_Job_User[10];
     char Writer_Job_Number[6];
     char Writer_Status[10];
     char Printer_Device_Name[10];
     char Output_Queue_Descr[50];
     char Reserved2[2];
     int  Number_Of_Page_Sizes_Given;
     int  Number_Of_Writers_Started;
     int  Writers_To_Autostart;
     char Remote_System_Name_Type[1];
     char Remote_System_Name[255];
     char Remote_Printer_Queue[128];
     char Message_Queue[10];
     char Message_Queue_Library[10];
     int  Connection_Type;
     int  Destination_Type;
     char VMMVS_Class[1];
     char FCB[8];
     char Transform_SCS_To_ASCII[1];
     char Manufacturer_Type_Model[17];
     char Workstation_Cust_Obj[10];
     char Workstation_Cust_Obj_Library[10];
     char Splf_Aux_Storage_Pool[1];
     int  Spooled_File_Size_Offset;
     int  Number_Of_Size_Entries;
     int  Length_Of_Each_Size_Entry;
     char Destination_Options[128];
     char Writer_Type[1];
     char Separator_Page[1];
     char Long_Remote_Printer_Queue[255];
     char Image_Configuration_Name[10];
     char Image_Configuration_Library[10];
     char Reserved3[3];
     int  Aux_Storage_Pool_ID;
     /*Qsp_PAGENT_t Size_Data[];*//* Varying length              */
    } Qsp_OUTQ0100_t;

 /****************************************************************/
 /* Structure for the Writer Entry                               */
 /****                                                         ***/
 /*     The following describes the writer entry in format       */
 /*     OUTQ0200.                                                */
 /*                                                              */
 /*     Writer_Entry_Offset      provides the offset             */
 /*     Number_Of_Writer_Entries provides the number of repeated */
 /*     entries.                                                 */
 /*                                                              */
 /****************************************************************/

 typedef _Packed struct Qsp_WTRENT
    {
     char Writer_Job_Name[10];
     char Writer_Job_User[10];
     char Writer_Job_Number[6];
     char Writer_Status[10];
     char Printer_Device_Name[10];
    } Qsp_WTRENT_t;

 /****************************************************************/
 /* Structure for the User Option Entry                          */
 /****                                                         ***/
 /*     The following describes the user option entry in format  */
 /*     OUTQ0200.                                                */
 /*                           