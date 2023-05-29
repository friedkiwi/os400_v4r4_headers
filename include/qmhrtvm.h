 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRTVM                                    */
 /*                                                                */
 /* Descriptive Name: Retrieve Message API.                        */
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
 /* Description: The Retrieve Message API retrieves the message    */
 /*              description of a predefined message.              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rtvm_RTVM0100_t                            */
 /*                 Qmh_Rtvm_RTVM0200_t                            */
 /*                 Qmh_Rtvm_RTVM0300_t                            */
 /*                                                                */
 /* Function Prototype List: QMHRTVM                               */
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

 #ifndef QMHRTVM_h
 #define QMHRTVM_h

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRTVM              */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QMHRTVM,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QMHRTVM (void *,           /* Message information            */
               int,              /* Length of message information  */
               char *,           /* Format name                    */
               char *,           /* Message identifier             */
               void *,           /* Qualified message file name    */
               void *,           /* Message data                   */
               int,              /* Length of message data         */
               char *,           /* Replace substitution values    */
               char *,           /* Return format control          */
               void *,           /* Error Code                     */
               ...   );          /* Optional parameter group:
                                      Retrieve option
                                      Convert to CCSID
                                      Message data CCSID           */

 /******************************************************************/
 /* Type Definition for the RTVM0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvm_RTVM0100
    {
       int  Bytes_Return;
       int  Bytes_Available;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Length_Help_Returned;
       int  Length_Help_Available;
     /*char Message[];*/         /* Varying length                 */
     /*char Message_Help[];*/    /* Varying length                 */
    } Qmh_Rtvm_RTVM0100_t;

 /******************************************************************/
 /* Type Definition for the RTVM0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvm_RTVM0200
    {
       int  Bytes_Return;
       int  Bytes_Available;
       int  Message_Severity;
       int  Alert_Index;
       char Alert_Option[9];
       char Log_Indicator[1];
       char Reserved[2];
       int  Length_Reply_Returned;
       int  Length_Reply_Available;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Length_Help_Returned;
       int  Length_Help_Available;
     /*char Default_Reply[];*/   /* Varying length                 */
     /*char Message[];*/         /* Varying length                 */
     /*char Message_Help[];*/    /* Varying length                 */
    } Qmh_Rtvm_RTVM0200_t;


 /******************************************************************/
 /* Type Definition for the Substitution Variable Format.          */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Subst_Variable_Format
    {
       int  Length_Subst_Replace_Data;
       int  Field_Size_Or_Decimal_Position;
       char Subst_Variable_Type[10];
    /* char Reserved[];*/        /* Varying length                 */
    } Qmh_Subst_Variable_Format_t;


 /******************************************************************/
 /* Type Definition for the RTVM0300 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvm_RTVM0300
    {
       int  Bytes_Return;
       int  Bytes_Available;
       int  Message_Severity;
       int  Alert_Index;
       char Alert_Option[9];
       char Log_Indicator[1];
       char Message_ID[7];
       char Reserved[3];
       int  Number_Replace_Data_Formats;
       int  Text_CCSID_Convert_Status;
       int  Data_CCSID_Convert_Status;
       int  Text_CCSID_Returned;
       int  Offset_Reply_Text;
       int  Length_Reply_Returned;
       int  Length_Reply_Available;
       int  Offset_Message_Returned;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Offset_Help_Returned;
       int  Length_Help_Returned;
       int  Length_Help_Available;
       int  Offset_Formats;
       int  Length_Formats_Returned;
       int  Length_Formats_Available;
       int  Length_Format_Element;
     /*char Reserved2[];*/            /* Varying length        