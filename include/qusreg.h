 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSREG                                     */
 /*                                                                */
 /* Descriptive Name: Standard Registration Structures.            */
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
 /* Description: All of the structures that are used in the        */
 /*              Registration facilities are kept here to avoid    */
 /*              conflict due to repetition.                       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_Prep_Exit_t                                */
 /*                 Qus_Qmff_t                                     */
 /*                 Qus_Selcrtr_t                                  */
 /*                 Qus_Select_Entry_t                             */
 /*                 Qus_Program_Data_t                             */
 /*                 Qus_EXTI0100_t                                 */
 /*                 Qus_EXTI0100_Entry_t                           */
 /*                 Qus_EXTI0200_t                                 */
 /*                 Qus_EXTI0200_Entry_t                           */
 /*                 Qus_EXTI0300_t                                 */
 /*                 Qus_EXTI0300_Entry_t                           */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940327 LUPA:     New Include           */
 /* $B1= D9705820     4D40  980819 MBAILEY:  Add threadsafe and    */
 /*                                          multithreaded job     */
 /*                                          action.               */
 /* $B2= P3681667     4D40  981104 MBAILEY:  Add pad for four-byte */
 /*                                          alignment.            */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSREG_h
 #define QUSREG_h

 #define MAX_PGM_DATA_SIZE  2048
 /******************************************************************/
 /* Format structure for the Preprocessing Exit Program Format for */
 /* QusRegisterExitPoint API.                                      */
 /******************************************************************/
 typedef _Packed struct Qus_Prep_Exit {
    char Prep_Prog_Name[10];
    char Prep_Prog_Library[10];
    char Prep_Prog_Format[8];
 } Qus_Prep_Exit_t;

 /******************************************************************/
 /* Format structure for the Qualified Message File Format for the */
 /* entire sevice program.                                         */
 /******************************************************************/
 typedef _Packed struct Qus_Qmff {
    char Message_File[10];
    char Message_Library[10];
    char Message_Id[7];
 } Qus_Qmff_t;

 /******************************************************************/
 /* Format structure for the Exit Program Selection Criteria of the*/
 /* QusRetrieveExitInformation API.                                */
 /****                                                          ****/
 /* NOTE: This structure only defines fixed fields. Any varying    */
 /*       length or repeating field will have to be defined by     */
 /*       the user.                                                */
 /******************************************************************/
 typedef _Packed struct Qus_Select_Entry {
    int  Size_Entry;
    int  Comp_Operator;
    int  Start_Pgm_Data;
    int  Length_Comp_Data;
  /*char Comp_Data[];*/                   /*Varying length         */
 } Qus_Select_Entry_t;

 typedef _Packed struct Qus_Selcrtr {
    int  Number_Sel_Criteria;
  /*Qus_Select_Entry_t Array[];*/         /*Varying length         */
 } Qus_Selcrtr_t;

 /******************************************************************/
 /* Format Structure for the Program Data.  This structure has     */
 /* set up to facilitate COBOL and RPG pointer basing.             */
 /******************************************************************/
 typedef _Packed struct Qus_Program_Data {
    char  Data;                           /*Varying length         */
 }  Qus_Program_Data_t;

 /******************************************************************/
 /* Format structure for the EXTI0100 Format for the               */
 /* QusRetrieveExitInformation API.                                */
 /****                                                          ****/
 /* NOTE: This structure only defines fixed fields. Any varying    */
 /*       length or repeating field will have to be defined by     */
 /*       the user.                                                */
 /******************************************************************/
 typedef _Packed struct Qus_EXTI0100_Entry {
    char Exit_Point_Name[20];
    char Format_Name[8];
    int  Max_Exit_Programs;
    int  Number_Exit_Programs;
    char Allow_Deregistration;
    char Allow_Change_Control;
    char Registered_Exit_Point;
    char Prep_Name_Add_Pgm[10];
    char Prep_Lib_Add_Pgm[10];
    char Prep_Format_Add[8];
    char Prep_Name_Rmv_Pgm[10];
    char Prep_Lib_Rmv_Pgm[10];
    char Prep_Format_Rmv[8];
    char Prep_Name_Rtv_Info[10];
    char Prep_Lib_Rtv_Info[10];
    char Prep_Format_Rtv[8];
    char Desc_Indicator;
    char Desc_Msg_File[10];
    char Desc_Msg_Library[10];
    char Desc_Msg_Id[7];
    char Text_Description[50];
  /*char Reserved[];*/                     /*Varying length        */
 } Qus_EXTI0100_Entry_t;

 typedef _Packed struct Qus_EXTI0100 {
    int  Bytes_Returned;
    int  Bytes_Available;
    char Continue_Handle[16];
    int  Offset_Exit_Point_Entry;
    int  Number_Points_Returned;
    int  Length_Exit_Point_Entry;
  /*char Reserved[];*/                     /*Varying length        */
  /*Qus_EXTI0100_Entry_t Array[];*/        /*Varying length        */
 } Qus_EXTI0100_t;

 /******************************************************************/
 /* Format structure for the EXTI0200 Format for the               */
 /* QusRetrieveExitInformation API.                                */
 /****                                                          ****/
 /* NOTE: This structure only defines fixed fields. Any varying    */
 /*       length or repeating field will have to be defined by     */
 /*       the user.                                                */
 /******************************************************************/

 typedef _Packed struct Qus_EXTI0200_Entry {
    i