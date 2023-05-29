#ifndef QESRSRVA_h
#define QESRSRVA_h
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QESRSRVA.h                                 */
 /*                                                                */
 /* Descriptive Name: Retrieve service attributes API              */
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
 /* Description: The Retrieve Service Attributes API copies        */
 /*              specified service attributes into the receiver    */
 /*              variable.                                         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qes_Receiver_Variable_t                        */
 /*                 Qes_Templat_t                                  */
 /*                 Qes_Analyze_Problem_Auto_t                     */
 /*                 Qes_Report_Problem_Auto_t                      */
 /*                 Qes_Report_Problems_To_t                       */
 /*                 Qes_PTF_Install_Type_t                         */
 /*                 Qes_Critical_Messages_To_User_t                */
 /*                 Qes_Send_Data_Packet_t                         */
 /*                                                                */
 /* Function Prototype List: QESRSRVA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR:     CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3940750     3D10  940209 LUONG:    New Incl ude          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/


/*********************************************************************/
/* Prototypes for calling Retrieve Service Attributes API QESRSRVA   */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QESRSRVA,OS,nowiden)
#else
     extern "OS"
#endif

void QESRSRVA(void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              long,                 /* Number of service attributes  */
                                    /*   to retrieve                 */
              void *,               /* Service attribute keys        */
              void *                /* Error code                    */
             );

/*******************************************************************/
/* Record structure for QESRSRVA service attribute                 */
/* 'Analyze problem automatically' format                          */
/*******************************************************************/
typedef _Packed struct Qes_Analyze_Problem_Auto {
     char  Yes_Or_No;
} Qes_Analyze_Problem_Auto_t;

/*******************************************************************/
/* Record structure for QESRSRVA service attribute                 */
/* 'Report problem automatically' format                           */
/*******************************************************************/
typedef _Packed struct Qes_Report_Problem_Auto {
     char  Yes_Or_No;
} Qes_Report_Problem_Auto_t;

/*******************************************************************/
/* Record structure for QESRSRVA service attribute                 */
/* 'Service Provider to report problems to automatically' format   */
/*******************************************************************/
typedef _Packed struct Qes_Report_Problems_To {
     char  Service_Provider_Name_Format;
     char  Service_Provider_Name[17];
} Qes_Report_Problems_To_t;

/*******************************************************************/
/* Record structure for QESRSRVA service attribute                 */
/* 'Type of PTF install' format                                    */
/*******************************************************************/
typedef _Packed struct Qes_PTF_Install_Type {
     char  Type_Of_PTF_Install[10];
} Qes_PTF_Install_Type_t;

/*******************************************************************/
/* Record structure for QESRSRVA service attribute                 */
/* 'Critical messages to user' format                              */
/*******************************************************************/
typedef _Packed struct Qes_Critical_Messages_To_User {
     int   Number_Entry;
     char  User_List[50][10];
} Qes_CriticalMessages_ToUser_t;

/*******************************************************************/
/* Record structure for QESRSRVA service attribute                 */
/* 'Send data packet' format                                       */
/*******************************************************************/
typedef _Packed struct Qes_Send_Data_Packet {
     char  Yes_Or_No;
} Qes_Send_Data_Packet_t;

/*******************************************************************/
/* Record structure for QESRSRVA service attribute template format */
/*******************************************************************/
typedef _Packed struct Qes_Template {
     int   ServiceAttribute_Key;
     int   ServiceAttribute_Length;
     char  ServiceAttribute_Data_Type;
     char  ServiceAttribute_Status;
     char  Reserved[2];
     union {
             Qes_Analyze_Problem_Auto_t
                Analyze_Problem_Automatically;
             Qes_Report_Problem_Auto_t
                Report_Problem_Automatically;
             Qes_Report_Problems_To_t
                Report_To_Service_Provider;
             Qes_PTF_Install_Type_t
                PTF_Install_Type;
             Qes_CriticalMessages_ToUser_t
                Critical_Messages_To_User;
             Qes_Send_Data_Packet_t
                Send_Data_Packet;
           } ServiceAttribute;
} Qes_Template_t;

/*******************************************************************/
/* Record structure for QESRSRVA receiver variable format          */
/****                                                           ****/
/* NOTE: The following type definition only defines the fixed      */
/*       portion of the format.  Any varying length field will     */
/*       have to be defined by the user.                           */
/*******************************************************************/
typedef _Packed struct Qes_Receiver_Variable {
     int             Number_SrvAttribute_Retrieved;
   /*int             Offset_SrvAttribute_Template[1];*//* Varying
                                    length                         */
   /*Qes_Template_t  ServiceAttribute_Template;*//* Varying
                                    length                         */
} Qes_Receiver_Variable_t;

#endif
