 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZRTVFX                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve PTF Information                     */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* 5769-SS1  (C) Copyright IBM Corp. 1996,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve PTF Information API returns          */
 /*              information about a specific PTF.                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*       Qpz_Rtv_PTF_Info_t                                       */
 /*       Qpz_PTFR0100_t                                           */
 /*       Qpz_NLV_Rec_t                                            */
 /*       Qpz_Addn_Info_0200_t                                     */
 /*       Qpz_PTFR0200_t                                           */
 /*       Qpz_Pre_Req_t                                            */
 /*       Qpz_Addn_Info_0300_t                                     */
 /*       Qpz_PTFR0300_t                                           */
 /*       Qpz_Addn_Info_0400_t                                     */
 /*       Qpz_PTF_Obj_t                                            */
 /*       Qpz_PTF_Sub_Obj_t                                        */
 /*       Qpz_PTFR0400_t                                           */
 /*       Qpz_Dependent_t                                          */
 /*       Qpz_Addn_Info_0500_t                                     */
 /*       Qpz_PTFR0500_t                                           */
 /*                                                                */
 /* Function Prototype List: QPZRTVFX                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940327 ROCH      New Include           */
 /* $A1= D9182700     3D60  940711 ROCH      *PRV support,         */
 /*                                          PTFR0400 format       */
 /*                                          PTF object list       */
 /* $B1=D94963        4d10  961010 ROCH      added new fields      */
 /*                                              to base structure */
 /* $C1=D94923        4d20  970619 ROCH      added new fields      */
 /*                                              to PTFR0300       */
 /* $C2=D95243        4d20  970619 ROCH      added new fields      */
 /*                                              to base structure */
 /* $D1=D97005        4d40  980701 ROCH      added new fields      */
 /*                                              to base structure */
 /*                                              and added PTRF0500*/
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPZRTVFX_h
#define QPZRTVFX_h

/********************************************************************/
/*  Prototype for calling Software Product API QPZRTVFX             */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QPZRTVFX, OS, nowiden)
#else
  extern "OS"
#endif
void QPZRTVFX(void *,             /* Receiver variable              */
              int,                /* Length of receiver variable    */
              void *,             /* PTF information (Format Below) */
              char *,             /* Format name                    */
              void *);            /* Error code                     */

/********************************************************************/
/*  Structure for PTF Information Format                            */
/********************************************************************/

typedef _Packed struct Qpz_Rtv_PTF_Info
   {
                 char PTF_ID[7];
                 char PID[7];
                 char Rls_Lvl[6];
                 int  CCSID;
                 char Close_Files;
                 char Reserved[25];
               } Qpz_Rtv_PTF_Info_t;

/********************************************************************/
/*  Structure for PTFR0100 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_PTFR0100
   {
                 int  Bytes_Returned;
                 int  Bytes_Avail;
                 int  Ofst_Addn_Info;
                 char PID[7];
                 char PTF_ID[7];
                 char Rls_Lvl[6];
                 char Prd_Opt[4];
                 char Lod_ID[4];
                 char Loaded_Sts;
                 char Cvr_Ltr_Sts;
                 char On_Order_Sts;
                 char Savf_Sts;
                 char Fil_Nam[10];
                 char Fil_Lib_Nam[10];
                 char PTF_Type;
                 char IPL_Act;
                 char Act_Pnd;
                 char Act_Req;
                 char PTF_Rls;
                 char Tgt_Rls[6];
                 char Superseding_PTF[7];
                 char IPL_Side[1];
                 char Minimum_Level[2];
                 char Maximum_Level[2];
                 char Format_Info_Available;
                 char Status_date_time[13];
                 char Lic_Group[7];
               /*char Reserved[];*/          /* Varying length      */
               } Qpz_PTFR0100_t;

/********************************************************************/
/*  Structure for PTFR0200 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_NLV_Rec
   {
                 char Cvr_Ltr_NLV[4];
                 char Cvr_Ltr_Fil_Nam[10];
                 char Cvr_Ltr_Lib_Nam[10];
                 char Cvr_Ltr_Mbr_Nam[10];
               /*char Reserved[];*/          /* Varying length      */
   }Qpz_NLV_Rec_t;

typedef _Packed struct Qpz_Addn_Info_0200
   {
                 int  Ofst_Cvr_Ltr_Rec;
                 int  Num_NLVs_Avail;
                 int  Length_Cvr_Ltr_Rec;
               /*char Reserved; */           /* Varying length      */
   }Qpz_Addn_Info_0200_t;

typedef _Packed struct Qpz_PTFR0200
   {
                 Qpz_PTFR0100_t PTFR0100;
               /*Qpz_Addn_Info_0200_t Addn_Info[];*//* Varying
                                                length              */
               /*Qpz_NLV_Rec_t NLV_Rec[];*/  /* Varying length      */
   }Qpz_PTFR0200_t;

/********************************************************************/
/*  Structure for PTFR0300 format                                   */
/****                                                            ****/
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qpz_Pre_Req
   {
                 char PID[7];
                 char PTF_ID[7];
                 char Rls[6];
                 char Req_Min_Level[2];
                 char Req_Max_Level[2];
                 char Req_Typ;
                 char Is_Cond;
                 char Is_Reqd;
                 char Req_Prd_Opt[4];
                 char Req_Lod_Id[4];
               /*char Reserved; */          /* Varying length       */
    }Qpz_Pre_Req_t;

typedef _Packed struct Qpz_Addn_Info_0300
   {
                 int  Ofst_Pre_Req_Rec;
                 int  Num_Pre_Reqs;
                 int  Len_Pre_Req_Rec;
               /*char Reserved; */          /* Varying length       */
    }Qp