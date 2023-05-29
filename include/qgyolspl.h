 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYOLSPL                                   */
 /*                                                                */
 /* Descriptive Name: Open List of Spooled Files                   */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYOLSPL API generates a list of spooled      */
 /*              files  on the system.  The list can include all   */
 /*              spooled files or those of specific users, output  */
 /*              queues, form types, user-specified data values,   */
 /*              statuses, printers, or specific jobs.  The number */
 /*              of list entries to return and a sort parameter    */
 /*              may be specified.                                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qgy_Olspl_UserInfo_t                          */
 /*                  Qgy_Olspl_QInfo_t                             */
 /*                  Qgy_Olspl_SFInfo_t                            */
 /*                  Qgy_Olspl_DevInfo_t                           */
 /*                  Qgy_Olspl_FilterInfo_t                        */
 /*                  Qgy_Olspl_SData_t                             */
 /*                  Qgy_Olspl_SortInfo_t                          */
 /*                  Qgy_Olspl_RecVar_0100_t                       */
 /*                  Qgy_Olspl_RecVar_0200_t                       */
 /*                  Qgy_Olspl_ListInfo_t                          */
 /*                                                                */
 /* Function Prototype List: QGYOLSPL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960604 DPW       New Include           */
 /* $A1= P3656852     4D30  971215 LLHIRSCH  Change Data_Type from */
 /*                                          int to short          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYOLSPL_h
 #define QGYOLSPL_h

 /******************************************************************/
 /* Prototype for call to QGYOLSPL API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYOLSPL,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYOLSPL  (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   void *,     /* Sort Information                  */
                   void *,     /* Filter information                */
                   void *,     /* Qualified job name                */
                   char *,     /* Format of the generated list      */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definitions for the Filter Information Format              */
 /*   NOTE:  This type definition only defines fixed portions of    */
 /*          the format.  Any varying length fields must be         */
 /*          specified by the user.                                 */
 /*******************************************************************/
 typedef _Packed struct Qgy_Olspl_UserInfo
 {
    char  User_Name[10];
    char  Reserved[2];
 } Qgy_Olspl_UserInfo_t;

 typedef _Packed struct Qgy_Olspl_QInfo
 {
    char  Output_Q_Name[10];
    char  Output_Q_Lib_Name[10];
 } Qgy_Olspl_Qinfo_t;

 typedef _Packed struct Qgy_Olspl_SFInfo
 {
    char  SF_Status[10];
    char  Reserved[2];
 } Qgy_Olspl_SFInfo_t;

 typedef _Packed struct Qgy_Olspl_DevInfo
 {
    char  Dev_Name[10];
    char  Reserved[2];
 } Qgy_Olspl_DevInfo_t;

 typedef _Packed struct Qgy_Olspl_FilterInfo
 {
    int   Num_User_Names;
  /*Qgy_Olspl_UserInfo_t  UserInfo[];*/     /*VARYING LENGTH*/
    int   Num_Q_Names;
  /*Qgy_Olspl_QInfo_t     QInfo[];   */     /*VARYING LENGTH*/
    char  Form_Type[10];
    char  User_Data[10];
    int   Num_Statuses;
  /*Qgy_Olspl_SFInfo_t    SFInfo[];  */     /*VARYING LENGTH*/
    int   Num_Dev_Names;
  /*Qgy_Olspl_DevInfo_t   DevInfo[]; */     /*VARYING LENGTH*/
 } Qgy_Olspl_FilterInfo_t;

 /******************************************************************/
 /* Type Definitions for the Sort Information Format               */
 /*   NOTE:  This definition only defines fixed portions of the    */
 /*          format.  Any varying length field must be specified   */
 /*          by the user.                                          */
 /******************************************************************/
 typedef _Packed struct Qgy_Olspl_SData
 {
    int   Start_Pos;
    int   Field_Length;
    short Data_Type;                     /* @A1C*/
    char  Sort_Order;
    char  Reserved;
 } Qgy_Olspl_SData_t;

 typedef _Packed struct Qgy_Olspl_SortInfo
 {
    int                 Num_Keys;
  /*Qgy_Olspl_SData_t   SData[];*/       /*VARYING LENGTH*/
 } Qgy_Olspl_SortInfo_t;


 /******************************************************************/
 /* Type Definitions for the Receiver Variable Formats             */
 /******************************************************************/
 typedef _Packed struct Qgy_Olspl_RecVar_0100
 {
    char  Spooled_File_Name[10];
    char  Job_Name[10];
    char  User_Name[10];
    char  Job_No[6];
    int   Spooled_File_No;
    int   Total_Pages;
    int   Current_Page;
    int   Copies_To_Print;
    char  Out_Q_Name[10];
    char  Out_Q_Lib_Name[10];
    char  User_Spec_Data[10];
    char  Status[10];
    char  Form_Type[10];
    char  Priority[2];
    char  Int_Job_ID[16];
    char  Int_SF_ID[16];
    char  Device_Type[10];
    char  Reserved[14];
 } Qgy_Olspl_RecVar_0100_t;

 typedef _Packed struct Qgy_Olspl_RecVar_0200
 {
    Qgy_Olspl_RecVar_0100_t   RecVar_0100;
    char  Date_Opened[7];
    char  Time_Opened[6];
    char  Printer_Assigned;
    char  Printer_Name[10];
    char  Reserved[8];
 } Qgy_Olspl_RecVar_0200_t;



 /******************************************************************/
 /* Type Definition for the List Information Format                */
 /******************************************************************/
 typedef _Packed struct Qgy_Olspl_ListInfo
 {
    int  Total_Records;
    int  Records_Retd;
    char Request_Handle[4];
    int  Record_Length;
    char Info_Complete;
  