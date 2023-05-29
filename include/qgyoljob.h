 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYOLJOB                                   */
 /*                                                                */
 /* Descriptive Name: Open list job API.                           */
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
 /* Description: The Open List Job API opens a list of all or some */
 /*              of the jobs on the system.                        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_OLJB0100_t                                 */
 /*                 Qgy_OLJB_Receiver_Information_t                */
 /*                 Qgy_OLJB0200_t                                 */
 /*                 Qgy_OLJB_List_Information_t                    */
 /*                 Qgy_OLJB_Sort_Data_t                           */
 /*                 Qgy_OLJB_Sort_Information_t                    */
 /*                 Qgy_OLJB_Job_Selection_t                       */
 /*                                                                */
 /* Function Prototype List: QGYOLJOB                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9486500     3P70  960930 MJD    :  New Include           */
 /* $A0= D95998       4D40  980630 ROCH   :  Server type           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYOLJOB_h
 #define QGYOLJOB_h

 /******************************************************************/
 /*  Prototype for QGYOLJOB API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYOLJOB,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QGYOLJOB(void *,           /* Receiver variable              */
              int  *,            /* Length of receiver variable    */
              char *,            /* Format name                    */
              void *,            /* Receiver variable definition   */
              int  *,            /* Length of receiver variable    */
                                 /* definition                     */
              void *,            /* List Information               */
              int  *,            /* Number of records to return    */
              void *,            /* Sort information               */
              void *,            /* Job selection information      */
              int  *,            /* Size of job selection          */
                                 /* information                    */
              int  *,            /* Number of fields to return     */
              void *,            /* Keys of fields to be returned  */
              void *);           /* Error Code                     */

 /******************************************************************/
 /* Type Definition for the OLJB0100 and OLJB0200 input parameter  */
 /* section.                                                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 /******************************************************************/
 /* Type Definition for the OLJB0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qgy_OLJB0100
    {
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Internal_Job_Id[16];
       char Status[10];
       char Job_Type;
       char Job_Subtype;
       char Reserved[2];
    } Qgy_OLJB0100_t;

 /******************************************************************/
 /* Type Definition for the OLJB0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qgy_OLJB_Receiver_InfoData
    {
       int  Length_Field_Info_Rtnd;
       int  Key_Field;
       char Type_Of_Data;
       char Reserved[3];
       int  Length_Data;
       int  Offset_To_Data;
    } Qgy_OLJB_Receiver_InfoData_t;

 typedef _Packed struct Qgy_OLJB_Receiver_Information
    {
       int  Number_Fields_Rtnd;
     /*Qgy_OLJB_Receiver_InfoData_t  Receiver_Info[]; */ /* Varying
                                                            length  */
    } Qgy_OLJB_Receiver_Information_t;

 typedef _Packed struct Qgy_OLJB0200
    {
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Internal_Job_Id[16];
       char Status[10];
       char Job_Type;
       char Job_Subtype;
       char Reserved[2];
       char Job_Info_Status;
       char Reserved2[3];
     /*char Data_Returned[]; *//* Varying length          */
    } Qgy_OLJB0200_t;

 /******************************************************************/
 /* Type Definition for List Information                           */
 /******************************************************************/

 typedef _Packed struct Qgy_OLJB_List_Information
    {
       int  Total_Records;
       int  Records_Returned;
       char Request_Handle[4];
       int  Record_Length;
       char Information_Complete;
       char Date_Time_Created[13];
       char List_Status;
       char Reserved;
       int  Information_Length;
       int  First_Record_In_Buffer;
       char Reserved2[40];
    } Qgy_OLJB_List_Information_t;

 typedef _Packed struct Qgy_OLJB_Sort_Data
    {
       int  Starting_Position;
       int  Key_Length;
       short Data_Type;
       char Sort_Order;
       char Reserved;
    } Qgy_OLJB_Sort_Data_t;

 /******************************************************************/
 /* Type Definition for Sort Information                           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _P