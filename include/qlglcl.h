 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLGLCL                                     */
 /*                                                                */
 /* Descriptive Name: Standard Locale Structures.                  */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: All of the structures that are used by the        */
 /*              retrieve locale API.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List:    LG_LC_ALL     -1                               */
 /*                 LG_LC_CTYPE    1                               */
 /*                 LG_LC_COLLATE  2                               */
 /*                 LG_LC_TIME     3                               */
 /*                 LG_LC_NUMERIC  4                               */
 /*                 LC_MESSAGES    5                               */
 /*                 LG_LC_MONETARY 6                               */
 /*                 LG_LC_TOD      7                               */
 /*                                                                */
 /* Structure List: Qlg_LOCI0100_t                                 */
 /*                 Qlg_SB_CTYPE_t                                 */
 /*                 Qlg_DB_CTYPE_t                                 */
 /*                 Qlg_MB_CTYPE_t                                 */
 /*                 Qlg_SB_COLLATE_t                               */
 /*                 Qlg_DB_COLLATE_t                               */
 /*                 Qlg_MB_COLLATE_t                               */
 /*                 Qlg_Multi_Char_t                               */
 /*                 Qlg_One_To_Many_t                              */
 /*                 Qlg_LC_TIME_t                                  */
 /*                 Qlg_LC_NUMERIC_t                               */
 /*                 Qlg_LC_MESSAGES_t                              */
 /*                 Qlg_LC_MONETARY_t                              */
 /*                 Qlg_LC_TOD_t                                   */
 /*                 Qlg_LC_ALL_t                                   */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2870900     3D60  941204 ROCH:     New Include           */
 /* $A1= PTH01812     3P70  960801 ROCH:     Add Max bytes collate */
 /* $A2= PTH01812     3P70  960801 ROCH:     Add Len 1 to many     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLGLCL_h
 #define QLGLCL_h

 #define LG_LC_ALL     -1
 #define LG_LC_CTYPE    1
 #define LG_LC_COLLATE  2
 #define LG_LC_TIME     3
 #define LG_LC_NUMERIC  4
 #define LG_LC_MESSAGES 5
 #define LG_LC_MONETARY 6
 #define LG_LC_TOD      7

 /******************************************************************/
 /* Format structure for the LOCI0100 Format for the               */
 /* QusRetrieveLocaleInformation API.                              */
 /****                                                          ****/
 /* NOTE: This structure only defines fixed fields. Any varying    */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LOCI0100 {
    int  Bytes_Returned;
    int  Bytes_Available;
    int  Locale_Cat_Key;
    int  Offset_Cat_Information;
    int  Length_Cat_Information;
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_LOCI0100_t;

 /******************************************************************/
 /* Structures for the LC_CTYPE locale category.                   */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_SB_CTYPE {
    int  CCSID_of_Data;
    int  Data_Type;
    char SB_Upper_Case[256];
    char SB_Lower_Case[256];
    unsigned short SB_Char_Class[256];
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_SB_CTYPE_t;

 typedef _Packed struct Qlg_DB_CTYPE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Offset_DB_Upper_Case;
    int  Offset_DB_Lower_Case;
    int  Offset_DB_Char_Class;
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_DB_CTYPE_t;

 typedef _Packed struct Qlg_MB_CTYPE {
    int  CCSID_of_Data;
    int  Data_Type;
    char SB_Upper_Case[256];
    char SB_Lower_Case[256];
    unsigned short SB_Char_Class[256];
    int  Offset_DB_Upper_Case;
    int  Offset_DB_Lower_Case;
    int  Offset_DB_Char_Class;
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_MB_CTYPE_t;

 /******************************************************************/
 /* Structures for the LC_COLLATE locale category.                 */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_SB_COLLATE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Number_Weights_Sort_Rules;
    int  Offset_Sort_Rules;
    int  Offset_SB_Collate_Table;
    int  Offset_Multi_Chars;
    int  Offset_SB_One_To_Many;
    int  Bytes_Used_In_Weights;                              /*@A1A*/
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_SB_COLLATE_t;

 typedef _Packed struct Qlg_DB_COLLATE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Number_Weights_Sort_Rules;
    int  Offset_Sort_Rules;
    int  Offset_DB_Collate_Table;
    int  Offset_Multi_Chars;
    int  Offset_DB_One_To_Many;
    int  Bytes_Used_In_Weights;                              /*@A1A*/
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_DB_COLLATE_t;

 typedef _Packed struct Qlg_MB_COLLATE {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Number_Weights_Sort_Rules;
    int  Offset_Sort_Rules;
    int  Offset_SB_Collate_Table;
    int  Offset_DB_Collate_Table;
    int  Offset_Multi_Chars;
    int  Offset_SB_One_To_Many;
    int  Offset_DB_One_To_Many;
    int  Bytes_Used_In_Weights;                              /*@A1A*/
  /*char Reserved[];*/                    /* Varying length        */
 } Qlg_MB_COLLATE_t;

 typedef _Packed struct Qlg_Multi_Char {
    int  Offset_Collate_Element;
    int  Length_Collate_Element;
    int  Offset_Order_Weights;
    int  Offset_Next_Element;
 } Qlg_Multi_Char_t;

 typedef _Packed struct Qlg_One_To_Many {
    int  Offset_Collate_Element;
    int  Length_Collate_Element;                            /*@A2A*/
    int  Length_Replacement_String;
    int  Number_Replacement_Strings;
    int  Offset_Replacement_String;
    int  Offset_Next_Element;
 } Qlg_One_To_Many_t;

 /******************************************************************/
 /* Structures for the LC_TIME locale category.                    */
 /****                                                          ****/
 /* NOTE: These structures only define fixed fields. Any varying   */
 /*       length fields will have to be defined by the user.       */
 /******************************************************************/
 typedef _Packed struct Qlg_LC_TIME {
    int  CCSID_of_Data;
    int  Data_Type;
    int  Offset_Date_Time;
    int  Length_Date_Time;
    int  Offset_Date;
    int  Length_Date;
    int  Offset_Time;
    int  Length_Time;
    int  Offset_AM_PM;
    int  Length_AM_PM;
    int  Offset_Time_12_Hour_clock;
    int  Length_Time_12_Hour_clock;
    int  Offset_Abbrev_Weekdays;
    int  Length_Abbrev_Weekdays;
    int  Offset_Full_Weekdays;
    int  Length_Full_Weekdays;
    int  Offset_Abbrev_Months;
    int  Length_Abbrev_Months;
    int  Offset_Full_