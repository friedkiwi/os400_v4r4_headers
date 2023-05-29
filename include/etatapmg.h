 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ETATAPMG                                     */
 /*                                                                */
 /* Descriptive Name: Tape Management Exit Program.                */
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
 /* Description: The Tape Mangement exit program allows a tape     */
 /*              management system to monitor and control the use  */
 /*              of volumes and devices used by the operating      */
 /*              system for most tape operations.                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: QTA_SOF_EXIT                                      */
 /*              QTA_ACTIVE_FILE_MSGS                              */
 /*              QTA_CHAR_CODE_CNV                                 */
 /*              QTA_EOS_EXIT                                      */
 /*              QTA_EOF_EXIT                                      */
 /*              QTA_IGNORE_RESPONSE                               */
 /*              QTA_MOUNT_NEXT_MSGS                               */
 /*              QTA_NO_LOG_BLK_ID                                 */
 /*              QTA_PERM_EXP_DATA                                 */
 /*              QTA_SOV_EXIT                                      */
 /*              QTA_SOS_EXIT                                      */
 /*              QTA_SUPPRESS_IGNORE_RESPONSE                      */
 /*              QTA_SUPPRESS_ACTIVE_FILE_MSGS                     */
 /*              QTA_SUPPRESS_CHAR_CODE_CNV                        */
 /*              QTA_SUPPRESS_MOUNT_NEXT_MSGS                      */
 /*              QTA_ACCEPT_MOUNTED_VOL                            */
 /*              QTA_NOT_ACCEPTED_TERMINATE                        */
 /*              QTA_REJECT_IN_FAVOR_OF                            */
 /*                                                                */
 /* Structure List: Qta_Exit_Description_Struct_t                  */
 /*                 Qta_Label_Info_Struct_t                        */
 /*                 Qta_Operational_Info_Struct_t                  */
 /*                 Qta_Control_Value_Info_Struct_t                */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3954178     3D10  940518 MOREY     New Include           */
 /* $A1= Pxxxxxxx     4D10  961126 HOOVEY    Update for V3R6,V3R7  */
 /*                                          and V4R1              */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity 