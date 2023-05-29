 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZ                                        */
 /*                                                                */
 /* Descriptive Name: PZ include                                   */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1996,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The List PTF API returns a list of PTFs for the   */
 /*              specified product, option, load, release.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*       Qpz_LST_PTF_Info_t                                       */
 /*       Qpz_PTFL0100_t                                           */
 /*       Qpz_INPUT_parm_section                                   */
 /*       Qpz_Header_Sect                                          */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94963       4d10  961010 ROCH      New Include           */
 /* $A1= D95243       4d20  970515 ROCH      add new function      */
 /* $B1= D97005       4d40  980701 ROCH      Add field to PTFL0100 */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QPZ_h
 #define QPZ_h

 #ifdef __cplusplus
   extern "C" {
   #pragma info(none)
 #endif


/********************************************************************/
/*  Structure for Product Information Format                        */
/********************************************************************/

typedef _Packed struct Qpz_LST_PTF_Info_T
   {
                 char PID[7];
                 char Rls_Lvl[6];
                 char Option[4];
                 char Load[10];
                 char Inc_Super[1];
                 char Reserved[22];
               } Qpz_LST_PTF_Info_T;

/********************************************************************/
/*  Structure for PTFL0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_PTFL0100
   {
                 char PTF_ID[7];
                 char Rls_Lvl[6];
                 char Prd_Opt[4];
                 char Lod_ID[4];
                 char Loaded_Sts;
                 char Savf_Sts;
                 char Cvr_Ltr_Sts;
                 char On_Order_Sts;
                 char IPL_Act;
                 char Act_Pnd;
                 char Act_RQD;
                 char IPL_RQD;
                 char PTF_Rls;
                 char PTF_Min[2];
                 char PTF_Max[2];
                 char Lod_Sts_Date_Time[13];
               /*char Reserved[];*/          /* Varying length      */
               } Qpz_PTFL0100_t;





/********************************************************************/
/*  Structures for the user space                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_Input_parm_sect
   {
                 char Usr_SPC_Name[10];
                 char Usr_SPC_Lib_Nam[10];
                 char Product_Info[50];
                 char Format_name[8];
   }Qpz_User_space_name_T;

typedef _Packed struct Qpz_Header_Sect
   {
                 char Usr_SPC_Name_used[10];
                 char Usr_SPC_LIb_used[10];
               /*char Reserved; */           /* Varying length      */
   }Qpz_Header;


#ifdef __cplusplus
  #pragma info(restore)
 }
#endif

#endif                            /* #ifndef QPZ_h                  */
