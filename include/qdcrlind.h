 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDCRLIND                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Line Description                    */
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
 /* Description: The Retrieve Line Description (QDCRLIND) API      */
 /*              retrieves information about a line description.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_LIND0100_t                                 */
 /*                 Qdc_LIND0200_t                                 */
 /*                 Qdc_LIND0300_t                                 */
 /*                 Qdc_LIND0400_t                                 */
 /*                 Qdc_LIND0500_t                                 */
 /*                 Qdc_LIND0600_t                                 */
 /*                 Qdc_LIND0700_t                                 */
 /*                 Qdc_LIND0800_t                                 */
 /*                 Qdc_LIND0900_t                                 */
 /*                 Qdc_LIND1000_t                                 */
 /*                 Qdc_LIND1100_t                                 */
 /*                 Qdc_LIND1200_t                                 */
 /*                 Qdc_LIND1300_t                                 */
 /*                 Qdc_LIND1400_t                                 */
 /*                 Qdc_LIND1500_t                                 */
 /*                 Qdc_LIND1600_t                                 */
 /*                 Qdc_Attached_Non_Switch_Ctl_t                  */
 /*                 Qdc_Non_Switch_Ctl_t                           */
 /*                 Qdc_Switch_Ctl_t                               */
 /*                 Qdc_Qctive_Switch_Ctl_t                        */
 /*                 Qdc_EOR_Characters_t                           */
 /*                 Qdc_SSAPs_t                                    */
 /*                 Qdc_Group_Addr_t                               */
 /*                 Qdc_Switch_NWIs_t                              */
 /*                 Qdc_Call_Progress_Sgn_Retry_t                  */
 /*                 Qdc_Function_Addr_t                            */
 /*                 Qdc_Logical_Chan_Entries_t                     */
 /*                 Qdc_Resource_Names_t                           */
 /*                                                                */
 /* Function Prototype List: QDCRLIND                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862004     3D10  940415 MOREY:    New Include           */
 /* $a1= p3617122     3d70  960409 muras:    update line parameters*/
 /* $a2= D94771       4d10  960718 JAH  :    ADD ACTLANMGR to TRN  */
 /* $A3= D94889       4d10  960829 ZUBAIR:  Add Network Ctl to TDLC*/
 /* $a4= D95078       4d10  961105 JAH  :    ADD GENTSTFRM to ETH  */
 /* $A5= D95283       4d14  970401 ZUBAIR :ATM support for Ethernet*/
 /*                                        and Token Ring Lines    */
 /* $a6= d95024       4d20  970505 muras     add ppp lines-lind1600*/
 /* $A7= D95220       4d20  970612 ZUBAIR :ATM support for Ethernet*/
 /*                                        and Tokenring lines.    */
 /* $a8= d95743       4d30  970815 muras     add high order linkspd*/
 /* $A9= P3665843     4d30  980224 KDICK:  Add reserved characters */
 /*                                        to LIND0700 and delete  */
 /*                                        reserved from LIND0900  */
 /* $AA= D95898       4d40  980728 KLR  :  Add TCP only field      */
 /* $AB= D95815       4d40  980806 CMWOOD: Add msgq to trn, eth,   */
 /*                                        ddi, fr, and x.25 lines */
 /* $AC= P3676517     4d40  980817 CMWOOD: Add current msgq fields */
 /* $AD= D95895.4     4d40  980922 Adafin: Add MDMINZCMD field     */
 /* $AE= D95895       4d40  980923 zubair: Add new PPP fields      */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDCRLIND_h
 #define QDCRLIND_h

 /******************************************************************/
 /* Prototype for calling Retrieve Line Description API (QDCRLIND) */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDCRLIND,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QDCRLIND (void *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format name                    */
                char *,            /* Line name                      */
                void *);           /* Error code                     */

 /******************************************************************/
 /* Type Definition for the LIND0100 format - Basic Line Info      */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Num_Attached_Non_Switch_Ctl;
       char Date_Info_Retrieved[7];
       char Time_Info_Retrieved[6];
       char Line_Name[10];
       char Line_Category[10];
       char Online_At_IPL[10];
       char Text_Desc[50];
       char Reserved[3];
    } Qdc_LIND0100_t;

 /******************************************************************/
 /* Type Definition for the LIND0200 format - Basic Line Info Plus */
 /******************************************************************/

 typedef _Packed struct Qdc_Attached_Non_Switch_Ctl
    {
       char Att_Non_Switch_Ctl_Name[10];
       char Ctl_Category[10];
       char Ctl_Type[10];
       char Ctl_Text_Desc[50];
    } Qdc_Attached_Non_Switch_Ctl_t;

 typedef _Packed struct Qdc_LIND0200
    {
       Qdc_LIND0100_t LIND0100;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
    /*Qdc_Attached_Non_Switch_Ctl_t Attached_Non_Switch_Ctl[];*//*
                                    Varying length                 */
    } Qdc_LIND0200_t;


 /******************************************************************/
 /* Type Definition for the LIND0300 format - *ASC                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Non_Switch_Ctl
    {
       char Att_Non_Switch_Ctl_Name[10];
       char Reserved[2];
    } Qdc_Non_Switch_Ctl_t;

 typedef _Packed struct Qdc_Switch_Ctl
    {
       char Switch_Ctl_Name[10];
       char Reserved[2];
    } Qdc_Switch_Ctl_t;

 typedef _Packed struct Qdc_Active_Switch_Ctl
    {
       char Active_Switch_Ctl_Name[10];
       char Reserved[2];
    } Qdc_Active_Switch_Ctl_t;

 typedef _Packed struct Qdc_EOR_Characters
    {
       int  Num_Trailing_Characters;
       char EOR_Character[10];
       char Reserved[2];
    } Qdc_EOR_Characters_t;

 typedef _Packed struct Qdc_LIND0300
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Line_Speed;
       int  Inactive_Timer;
       int  Max_Buffer_Size;
       int  Idle_Timer;
       int  Data_Set_Ready_Drop_Timer;
       int  Clear_To_Send_Timer;
       int  Remote_Answer_Timer;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
       int  Offset_Switch_Ctl;
       int  Num_Switch_Ctl;
       int  Length_Swi