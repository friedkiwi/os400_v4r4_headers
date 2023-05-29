 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ESYUPDCU                                     */
 /*                                                                */
 /* Descriptive Name: Update Certificate Usage Exit Program.       */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1999                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Update Certificate Usage exit program         */
 /*              provides the notification of certificate          */
 /*              updates for registered applications that use      */
 /*              certificates.                                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Update_Cert_Usage_Info_t                   */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9714500     4D40  980819 ROCH:     New Include           */
 /* $01= P3677328     4D40  980902 ROCH:     Update copyright.     */
 /*                                          (prolog chg only).    */
 /*                                                                */
 /* End CFD List.                                                  */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ESYUPDCU_h
 #define ESYUPDCU_h

 /******************************************************************/
 /* Type Definition for the Update Certificate Usage exit program  */
 /* information.                                                   */
 /******************************************************************/
 typedef _Packed struct Qsy_Update_Cert_Usage_Info
    {
       char Exitpt_Name[20];
       char Exitpt_Fmt[8];
       char Application_ID[100];
       char Action;
       char Cert_ID_Type;
       char Reserved[2];
       int  Offset_Cert_Store;
       int  Length_Cert_Store;
       int  Offset_Cert_ID;
       int  Length_Cert_ID;
     /*char Cert_Store[];*/               /*Varying length        */
     /*char Cert_ID[];*/                  /*Varying length        */
    } Qsy_Update_Cert_Usage_Info_t;

#endif
