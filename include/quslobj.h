 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSLOBJ                                    */
 /*                                                                */
 /* Descriptive Name: List Objects                                 */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The List Objects API lets you generate a list of  */
 /*              object names and descriptive information based on */
 /*              specified selection parameters.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_Lobj_Aut_Control_t                         */
 /*                 Qus_Lobj_Select_Control_t                      */
 /*                 Qus_Lobj_Input_t                               */
 /*                 Qus_OBJL0100_t                                 */
 /*                 Qus_OBJL0200_t                                 */
 /*                 Qus_OBJL0300_t                                 */
 /*                 Qus_OBJL0400_t                                 */
 /*                 Qus_OBJL0500_t                                 */
 /*                 Qus_OBJL0600_t                                 */
 /*                 Qus_OBJL0700_t                                 */
 /*                                                                */
 /* Function Prototype List: QUSLOBJ                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSLOBJ_h
 #define QUSLOBJ_h

 /******************************************************************/
 /*  Prototype for QUSLOBJ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSLOBJ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSLOBJ(void *,            /* User space name and library    */
              char *,            /* Format name                    */
              void *,            /* Object name and library        */
              char *,            /* Object type                    */
              ...);              /* Optional Parameter Group 1:
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      void *   Authority control
                                      void *   Selection control   */

 /******************************************************************/
 /* Type Definition for the Authority Control Format.              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qus_Lobj_Aut_Control
    {
       int  Length_Authority_Control_Fmt;
       int  Call_Level;
       int  Offset_Obj_Aut;
       int  Number_Obj_Aut;
       int  Offset_Lib_Aut;
       int  Number_Lib_Aut;
       int  Reserved;
     /*char Obj_Aut[][10];*/               /* Varying length       */
     /*char Lib_Aut[][10];*/               /* Varying length       */
    } Qus_Lobj_Aut_Control_t;

 /******************************************************************/
 /* Type Definition for the Selection Control Format.              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qus_Lobj_Select_Control
    {
       int  Length_Selection_Control_Fmt;
       int  Select_Omit_Status;
       int  Offset_Status;
       int  Number_Status;
       int  Reserved;
     /*char Status[][1];*/                 /* Varying length       */
    } Qus_Lobj_Select_Control_t;

 /******************************************************************/
 /* Type Definition for the input parameter section                */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qus_Lobj_Input
    {
       char User_Space[10];
       char User_Space_Lib[10];
       char Format[8];
       char Object_Name[10];
       char Object_Lib[10];
       char Object_Type[10];
       char Reserved[2];
       int  Error_Code_Bytes_Provided;
       int  Length_Aut_Control_Fmt;
       int  Call_Level;
       int  Offset_Obj_Aut;
       int  Number_Obj_Aut;
       int  Offset_Lib_Aut;
       int  Number_Lib_Aut;
       int  Length_Select_Control_Fmt;
       int  Select_Omit_Status;
       int  Offset_Status;
       int  Number_Status;
       int  Reserved2;
     /*char Object_Aut[][10]; */           /* Varying length       */
     /*char Library_Aut[][10]; */          /* Varying length       */
     /*char Status[][1]; */                /* Varying length       */
    } Qus_Lobj_Input_t;

 /******************************************************************/
 /* Type Definition for the OBJL0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0100
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
    } Qus_OBJL0100_t;

 /******************************************************************/
 /* Type Definition for the OBJL0200 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0200
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
    } Qus_OBJL0200_t;

 /******************************************************************/
 /* Type Definition for the OBJL0300 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0300
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[8];
       char Change_Date_Time[8];
       char Storage[10];
       char Object_Compress_Status;
       char Allow_Change;
       char Changed_By_Program;
       char Object_Audit_Value[10];
       char Reserved2[9];
    } Qus_OBJL0300_t;

 /******************************************************************/
 /* Type Definition for the OBJL0400 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0400
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[8];
       char Change_Date_Time[8];
      