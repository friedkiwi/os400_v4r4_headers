 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYOLOBJ                                   */
 /*                                                                */
 /* Descriptive Name: Open List of Objects                         */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYOLOBJ API generates a list of object names */
 /*              and descriptive information based on specified    */
 /*              selection parameters.                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QGYOLOBJ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3622493     3D70  960603 DPW       New Include           */
 /* $A1= P3670166     4Q30  980508 RAH:      Fixes:                */
 /*                                            1) l 155, change    */
 /*                                              comment delimeter */
 /*                                            2) l 232, add ";"   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYOLOBJ_h
 #define QGYOLOBJ_h

 typedef char authority_t[10];
 typedef char status_t;

 /******************************************************************/
 /* Prototype for call to QGYOLOBJ API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYOLOBJ,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYOLOBJ  (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   void *,     /* Sort Information                  */
                   void *,     /* Object and Library name           */
                   char *,     /* Object type                       */
                   void *,     /* Authority control                 */
                   void *,     /* Selection control                 */
                   int   ,     /* Number of fields to return        */
                   void *,     /* Key of fields to return           */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definition for Sort Key Field Information                  */
 /*******************************************************************/
 typedef _Packed struct Qgy_Olobj_SortKeyInfo
 {
    int   Field_Start_Pos;
    int   Field_Length;
    int   Field_Data_Type;
    char  Sort_Order;
    char  Reserved;
 } Qgy_Olobj_SortKeyInfo_t;


 /*******************************************************************/
 /* Type Definition for the Sort Information Format                 */
 /*   NOTE:  This type definition only defines fixed portions of    */
 /*          the format.  Any varying length fields must be         */
 /*          specified by the user.                                 */
 /*******************************************************************/
 typedef _Packed struct Qgy_Olobj_SortInfo
 {
    int   Num_Keys;
  /*Qgy_Olobj_SortKeyInfo_t   KeyInfo[];*/   /* VARYING LENGTH */
 } Qgy_Olobj_SortInfo_t;


 /******************************************************************/
 /* Type Definition for the Authority Control Format               */
 /*   NOTE:  This type definition only defines fixed portions of   */
 /*          the format.  Any varying length fields must be        */
 /*          specified by the user.                                */
 /******************************************************************/
 typedef _Packed struct Qgy_Olobj_AuthControl
 {
    int   Format_Length;
    int   Call_Level;
    int   Obj_Auth_Offset;
    int   Num_Obj_Auth;
    int   Lib_Auth_Offset;
    int   Num_Lib_Auth;
    int   Reserved;
  /*authority_t   Obj_Auth[];*/                  /* VARYING LENGTH */
  /*authority_t   Lib_Auth[];*/                  /* VARYING LENGTH */
 } Qgy_Olobj_AuthControl_t;

 /******************************************************************/
 /* Type Definition for the List Information Format                */
 /******************************************************************/
 typedef _Packed struct Qgy_Olobj_ListInfo
 {
    int  Total_Records;
    int  Records_Retd;
    char Request_Handle[4];
    int  Record_Length;
    char Info_Complete;
    char Date_Time[13];
    char List_Status;
    char Reserved1;
    int  Info_Length;
    int  First_Record;
    char Reserved2[40];
 } Qgy_Olobj_ListInfo_t;

 /******************************************************************/
 /* Type Definition for the Selection Control Format               */
 /*   NOTE:  This type definition only defines fixed portions of   */
 /*          the format.  Any varying length fields must be        */
 /*          specified by the user.                                */
 /******************************************************************/
 typedef _Packed struct Qgy_Olobj_SelControl
 {
    int   Format_Length;
    int   Sel_or_Omit_Status;
    int   Status_Offset;
    int   Num_Status;
    int   Reserved;
  /*status_t   Status[];*/     /* VARYING LENGTH               @A1C*/
 } Qgy_Olobj_SelControl_t;


 /******************************************************************/
 /* Type Definition for the Received Data Information Format       */
 /*   NOTE:  This definition only defines fixed portions of the    */
 /*          format.  Any varying length field must be specified   */
 /*          by the user.                                          */
 /******************************************************************/
 typedef  _Packed struct Qgy_Olobj_KeyData
 {
    int   Field_Info_Length;
    int   Key_Field;
    char  Data_Type;
    char  Reserved1[3];
    int   Data_Length;
  /*Qgy_Olobj_Keyxxxx_t  Data;*/
  /* NOTE: If one key format is specified, the x's must be replaced */
  /* by the appropriate key number.  Otherwise, a struct containing */
  /* the desired fields must be defined separately (in the style of */
  /* 