 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ETGDEVEX                                     */
 /*                                                                */
 /* Descriptive Name: Telnet Server Device Exit Program            */
 /*                                                                */
 /* 5769-TC1  (C) Copyright IBM Corp. 1997,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The TELNET server device exit program provides    */
 /*              device initialization and termination for         */
 /*              clients.                                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: QTG_DSPD0100                                      */
 /*                                                                */
 /* Structure List: Qtg_User_Description_t                         */
 /*                 Qtg_DSPD0100_t                                 */
 /*                 Qtg_Device_Description_t                       */
 /*                 Qtg_Connection_Description_t                   */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95486       4D20  970423 JSS       New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ETGDEVEX_h
 #define ETGDEVEX_h

 /******************************************************************/
 /* Type Definition for the User Description Information           */
 /******************************************************************/
 typedef _Packed struct Qtg_User_Description
    {
       int  Length_user_description;
       char User_profile[10];
       char Current_library[10];
       char Program_to_call[10];
       char Initial_menu[10];
    } Qtg_User_Description_t;

 /******************************************************************/
 /* Structures used by Device Description Information              */
 /******************************************************************/
 #define QTG_DSPD0100         "DSPD0100"

 typedef _Packed struct Qtg_DSPD0100
    {
       char Keyboard_identifier[3];
       char Reserved[1];
       int  Code_page;
       int  Char_set;
    } Qtg_DSPD0100_t;

 /******************************************************************/
 /* Type Definition for the Device Description Information         */
 /******************************************************************/
 typedef _Packed struct Qtg_Device_Description
    {
       char Device_name[10];
       char Device_format[8];
       char Reserved[2];
       int  Offset_to_device_attributes;
       int  Length_device_attributes;
       /* Qtg_DSPD0100_t Display_device;  */     /* Varying length */
       /* Qtg_PRTD0100_t Printer_device;  */     /* Varying length */
    } Qtg_Device_Description_t;

 /******************************************************************/
 /* Type Definition for the Connection Description Information     */
 /******************************************************************/
 typedef _Packed struct Qtg_Connection_Description
    {
       int  Length_connection_description;
       char Internet_address[20];
       char Secure_password_valid[1];
       char Workstation_type[14];
    } Qtg_Connection_Description_t;

#endif
