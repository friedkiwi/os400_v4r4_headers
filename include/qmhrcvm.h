 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRCVM                                    */
 /*                                                                */
 /* Descriptive Name: Receive Nonprogram Message.                  */
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
 /* Description: The Receive Nonprogram Message API receives a     */
 /*              message from a nonprogram message queue.          */
 /*                                                                */
 /* Header Files Included:                                         */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rcvm_RCVM0100_t                            */
 /*                 Qmh_Rcvm_RCVM0200_t                            */
 /*                                                                */
 /* Function Prototype List: QMHRCVM                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 RGARVEY : New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRCVM_h
 #define QMHRCVM_h

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRCVM              */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QMHRCVM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHRCVM (void *,           /* Message information            */
               int,              /* Length of message information  */
               char *,           /* Format name                    */
               void *,           /* Qualified message queue name   */
               char *,           /* Message type                   */
               void *,           /* Message key                    */
               int,              /* Wait time                      */
               char *,           /* Message action                 */
               void *,           /* Error code                     */
               ...   );          /* Optional parameter group:
                                       Coded Character Set Id.     */

 /******************************************************************/
 /* Type Definition for the RCVM0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rcvm_RCVM0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Message_Severity;
       char Message_Id[7];
       char Message_Type[2];
       char Message_Key[4];
       char Reserved[7];
       int  CCSID_Convert_Status;
       int  CCSID_Returned;
       int  Data_Returned;
       int  Data_Available;
     /*char Message_Data[];*/    /* Varying length                 */
    } Qmh_Rcvm_RCVM0100_t;

 /******************************************************************/
 /* Type Definition for the RCVM0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rcvm_RCVM0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Message_Severity;
       char Message_Id[7];
       char Message_Type[2];
       char Message_Key[4];
       char Message_File_Name[10];
       char Message_File_Library[10];
       char Message_Library_Used[10];
       char Send_Job[10];
       char Send_User_Profile[10];
       char Send_Job_Number[6];
       char Send_Program_Name[12];
       char Reserved1[4];
       char Send_Date[7];
       char Send_Time[6];
       char Reserved2[17];
       int  Text_CCSID_Convert_Status;
       int  Data_CCSID_Convert_Status;
       char Alert_Option[9];
       int  Text_CCSID_Returned;
       int  Data_CCSID_Returned;
       int  Length_Data_Returned;
       int  Length_Data_Available;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Length_Help_Returned;
       int  Length_Help_Available;
     /*char Message_Text[];*/    /* Varying length                 */
     /*char Message[];*/         /* Varying length                 */
     /*char Message_Help[];*/    /* Varying length                 */
    } Qmh_Rcvm_RCVM0200_t;

 #endif
