
#ifndef __ILEC400__
  extern "C" {
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLG                                        */
 /*                                                                */
 /* Descriptive Name: Common structures for LG component           */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The common structures that could be used by more  */
 /*              than one LG component include.                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qlg_CCSID_ReqCtlBlk_T                          */
 /*                 Qlg_Table_ReqCtlBlk_T                          */
 /*                 Qlg_Qual_Tbl_Name_T                            */
 /*                 Qlg_UsrDef_ReqCtlBlk_T                         */
 /*                 Qlg_Path_Name_T                                */
 /*                                                                */
 /* Function Prototype List: None                                  */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2827200     3D10  940227 ROCH    : New Include           */
 /* $A1= D2870900     3D60  941204 ROCH    : Add NLS enabled path  */
 /*                                          name structure        */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef    QLG_h
  #define  QLG_h

/********************************************************************/
/* Structure for CCSID based request                                */
/********************************************************************/

typedef struct Qlg_CCSID_ReqCtlBlk {
    int Type_of_Request;
    int CCSID_of_Input_Data;
    int Case_Request;
    char Reserved[10];
} Qlg_CCSID_ReqCtlBlk_T;

/********************************************************************/
/* Structures for request using table (*TBL)                        */
/********************************************************************/

typedef struct Qlg_Qual_Tbl_Name {
    char Tbl_Name[10];
    char Lib[10];
} Qlg_Qual_Tbl_Name_T;

typedef struct Qlg_Table_ReqCtlBlk {
    int Type_of_Request;
    int DBCS_Indicator;
    Qlg_Qual_Tbl_Name_T Qual_Tbl_Name;
} Qlg_Table_ReqCtlBlk_T;

/********************************************************************/
/* Structure for request using a user-defined conversion map        */
/********************************************************************/

typedef struct UsrDef_ReqCtlBlk {
    int Type_of_Request;
    int DBCS_Indicator;
    int Reserved;
    int Length;
/*  char CvtMap[];                         Variable length field    */
} Qlg_UsrDef_ReqCtlBlk_T;

/********************************************************************/
/* Structure for NLS enabled path name                              */
/****                                                            ****/
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will      */
/*       have to be defined by the user.                            */
/********************************************************************/

typedef struct Qlg_Path_Name {
    int  CCSID;
    char Country_ID[2];
    char Language_ID[3];
    char Reserved[3];
    unsigned int Path_Type;
    int  Path_Length;
    char Path_Name_Delimiter[2];
    char Reserved2[10];
  /*char Path_Name[];*/              /*   Variable length field    */
} Qlg_Path_Name_T;

#endif      /* #ifndef QLG_h */

#ifndef __ILEC400__
 }
#endif
