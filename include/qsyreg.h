 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYREG                                     */
 /*                                                                */
 /* Descriptive Name: Standard Registration Structures.            */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This include is a CUE.                       */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers,  */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Description: All of the structures that are used in the        */
 /*              Function Registration Facility are kept here to   */
 /*              avoid conflict due to repetition.                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Func_Controls_T                            */
 /*                 Qsy_Func_Control_Rec_T                         */
 /*                 Qsy_Qual_Message_File_T                        */
 /*                 Qsy_Select_Func_T                              */
 /*                 Qsy_Selcrtr_T                                  */
 /*                 Qsy_FCNI0100_Entry_T                           */
 /*                 Qsy_FCNI0100_T                                 */
 /*                 Qsy_FNUI0100_Entry_T                           */
 /*                 Qsy_FNUI0100_T                                 */
 /*                 Qsy_UFNI0100_Entry_T                           */
 /*                 Qsy_UFNI0100_T                                 */
 /*                 Qsy_UFNI0200_Entry_T                           */
 /*                 Qsy_UFNI0200_T                                 */
 /*                 Qsy_UFNI0300_Entry_T                           */
 /*                 Qsy_UFNI0300_T                                 */
 /*                 Qsy_CFUI0100_Entry_T                           */
 /*                 Qsy_CFUI0100_T                                 */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9567200     4D30  971119 ROCH:     New Include           */
 /* $01= P3668176     4D40  980408 ROCH:     Make this a CUE       */
 /*                                          (prolog change only)  */
 /* $02= D9725500     4D40  980701 ROCH:     Add format            */
 /*                                          Qsy_UFNI0300.         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYREG_h
 #define QSYREG_h


 /******************************************************************/
 /* Defined constants                                              */
 /******************************************************************/
 /* Function control key values for register and retrieves.        */
 #define QSY_FCN_CATEGORY_KEY      1
 #define QSY_FCN_TYPE_KEY          2
 #define QSY_FCN_PROD_ID_KEY       3
 #define QSY_FCN_GROUP_ID_KEY      4
 #define QSY_FCN_FUNC_ID_KEY       5
 #define QSY_FCN_NAME_MSG_KEY      5
 #define QSY_FCN_NAME_KEY          6
 #define QSY_FCN_NAME_CCSID_KEY    7
 #define QSY_FCN_DESCR_MSG_KEY     8
 #define QSY_FCN_DESCR_KEY         9
 #define QSY_FCN_DESCR_CCSID_KEY  10
 #define QSY_FCN_DFT_USAGE_KEY    11
 #define QSY_FCN_ALLOBJ_KEY       12
 #define QSY_FCN_REPLACE_KEY      13

 /* Values for allow and not allow.  Can be used for setting the   */
 /* default usage setting or for setting individual users and      */
 /* groups.                                                        */
 #define QSY_FCN_REMOVE_SETTING  '0'
 #define QSY_FCN_NOT_ALLOW       '1'
 #define QSY_FCN_ALLOW           '2'

 /* Values for allow *ALLOBJ and not allow *ALLOBJ.                */
 #define QSY_FCN_NOT_ALLOW_ALLOBJ  '0'
 #define QSY_FCN_ALLOW_ALLOBJ      '1'

 /* Function category values.                                      */
 #define QSY_FCN_ALL_CLIENT       '9'
 #define QSY_FCN_OPNAV_CLIENT     '1'
 #define QSY_FCN_NON_OPNAV_CLIENT '2'
 #define QSY_FCN_HOST             '3'

 /* Function type values.                                          */
 #define QSY_FCN_PROD_FUNCTION    '1'
 #define QSY_FCN_GROUP_FUNCTION   '2'
 #define QSY_FCN_ADMIN_FUNCTION   '3'

 /* Usage source values.                                           */
 #define QSY_FCN_FROM_ALLOBJ       '1'
 #define QSY_FCN_FROM_USER         '2'
 #define QSY_FCN_FROM_GROUP_ALLOBJ '3'
 #define QSY_FCN_FROM_GROUP        '4'
 #define QSY_FCN_FROM_DEFAULT      '5'
 #define QSY_FCN_FROM_UNKNOWN      '9'

 /******************************************************************/
 /* Format structure for Function Controls.                        */
 /****                                                          ****/
 /* NOTE: This structure only defines fixed fields. Any varying    */
 /*       length or repeating field will have to be defined by     */
 /*       the user.                                                */
 /******************************************************************/
 typedef _Packed struct Qsy_Func_Control_Rec
 {
    int  Size_Record;
    int  Func_Control_Key;
    int  Length_Data;
  /*char Data[];*/                        /*Varying length         */
 } Qsy_Func_Control_Rec_T;

 typedef _Packed struct Qsy_Func_Controls
 {
    int  Number_Records;
  /*Qsy_Func_Control_Rec_T Records[];*/   /*Varying length         */
 } Qsy_Func_Controls_T;

 /******************************************************************/
 /* Format structure for the Qualified Message File Format for the */
 /* function description.                                          */
 /******************************************************************/
 typedef _Packed struct Qsy_Qual_Message_File
 {
    char Message_File[10];
    char Message_Library[10];
    char Message_Id[7];
 } Qsy_Qual_Message_File_T;

 /******************************************************************/
 /* Format structure for Function Selection Criteria               */
 /****                                                          ****/
 /* NOTE: This structure only defines fixed fields. Any varying    */
 /*       length or repeating field will have to be defined by     */
 /*       the user.                                                */
 /******************************************************************/
 typedef _Packed struct Qsy_Select_Func {
    int  Size_Entry;
    int  Comp_Operator;
    int  Func_Control_Key;
    int  Length_Comp_Data;
  /*char Comp_Data[];*/                   /*Varying length         */
 } Qsy_Select_Func_T;

 typedef _Packed struct Qsy_Selcrtr {
    int  Number_Sel_Criteria;
  /*Qsy_Select_Func_T Array[];*/          /*Varying length         */
 } Qsy_Selcrtr_T;

 /******************************************************************/
 /* Format structure for the FCNI0100 Format for the               */
 /* QsyRetrieveFunctionInformation API.                            */
 /****                                                          ****/
 /* NOTE: This structure only defines fixed fields. Any varying    */
 /*       length or repeating field will have to be defined by     */
 /*       the user.                                 