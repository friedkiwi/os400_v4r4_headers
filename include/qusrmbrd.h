 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSRMBRD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Member Description API              */
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
 /* Description: The Retrieve Member Description API retrieves  n  */
 /*              specific information about a single database file */
 /*              member and returns the information to the calling */
 /*              program in a receiver variable.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdb_Mbrd0100_t                                 */
 /*                 Qdb_Mbrd0200_t                                 */
 /*                 Qdb_Mbrd0300_t                                 */
 /*                 Qdb_File_List_t                                */
 /*                 Qdb_Cst_Indexs_t                               */
 /*                 Qdb_Dsas_t                                 @A1A*/
 /*                 Qdb_Dsias_t                                @A1A*/
 /*                 Qdb_Mbrd0200a_t                            @A1A*/
 /*                                                                */
 /* Function Prototype List: QUSRMBRD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940102 ROCH:     New Include           */
 /* $A1= D9197100     3D60  941104 ROCH:     Add data space        */
 /*                                           activity statistics  */
 /*                                           support.             */
 /* $A2= D9491500     4D30  971215 45HDMK:   Add evi support.      */
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QUSRMBRD_h
#define QUSRMBRD_h

/*********************************************************************/
/* Prototypes for calling Retrieve Member Description API QUSRMBRD   */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QUSRMBRD,OS,nowiden)
#else
     extern "OS"
#endif

void QUSRMBRD(void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              char *,               /* Format name                   */
              void *,               /* File and library name         */
              char *,               /* Member name                   */
              char *,               /* Override processing           */
              ...);                 /* Optional Parameters:
                                         Error code
                                         Find member processing      */

/*******************************************************************/
/* Record structure for QUSRMBRD MBRD0100 format                   */
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0100 {
     int  Bytes_Returned;
     int  Bytes_Available;
     char Db_File_Name[10];
     char Db_File_Lib[10];
     char Member_Name[10];
     char File_Attr[10];
     char Src_Type[10];
     char Crt_Date[13];
     char Change_Date[13];
     char Text_Desc[50];
     char Src_File;
} Qdb_Mbrd0100_t;

/*******************************************************************/
/* Record structure for QUSRMBRD MBRD0200 format                   */
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0200 {
     int  Bytes_Returned;
     int  Bytes_Available;
     char Db_File_Name[10];
     char Db_File_Lib[10];
     char Member_Name[10];
     char File_Attr[10];
     char Src_Type[10];
     char Crt_Date[13];
     char Src_Change_Date[13];
     char Text_Desc[50];
     char Src_File;
     char Ext_File;
     char Log_File;
     char Odp_Share;
     char Reserved[2];
     int  Num_Cur_Rec;
     int  Num_Dlt_Rec;
     int  Dat_Spc_Size;
     int  Acc_Pth_Size;
     int  Num_Dat_Mbr;
     char Change_Date[13];
     char Save_Date[13];
     char Rest_Date[13];
     char Exp_Date[13];
     int  Nbr_Days_Used;
     char Date_Lst_Used[7];
     char Use_Reset_Date[7];
     char Reserved1[2];
     int  Data_Spc_Sz_Mlt;
     int  Acc_Pth_Sz_Mlt;
     int  Member_Text_Ccsid;
     long Offset_Add_Info;                                   /*@A1A*/
     long Length_Add_Info;                                   /*@A1A*/
     char Reserved2[14];                                     /*@A1C*/
} Qdb_Mbrd0200_t;

/*******************************************************************/
/* Structure for record format and based-on file                   */
/*******************************************************************/
typedef _Packed struct Qdb_File_List{
     char File_Name[10];
     char File_Lib[10];
     char Member_Name[10];
     char Format_Name[10];
     int  Lgl_File_Rcd_Frmt_Num;
     int  Cur_Num_Rcds;
     int  Num_Dlt_Rcds;
     int  Acc_Pth_Sz;
     int  Acc_Pth_Sz_Mlt;
     char Acc_Pth_Shrd;
     char Acc_Pth_Vld;
     char Acc_Pth_Hld;
     char Acc_Pth_Owner_File[10];
     char Acc_Pth_Owner_Lib[10];
     char Acc_Pth_Owner_Mbr[10];
     char Reserved[19];
} Qdb_File_List_t;

/*******************************************************************/
/* Structure for constraint index information                      */
/*******************************************************************/
typedef _Packed struct Qdb_Cst_Indexs {
     char  Cst_Lib_Name[10];
     short Cst_Name_Length;
     char  Cst_Name[258];
     long  Cst_Acc_Pth_Sz;
     long  Cst_Acc_Pth_Sz_Mlt;
     char  Cst_Pth_Shrd;
     char  Cst_Pth_Vld;
     char  Cst_Pth_Hld;
     char  Cst_Num_Lrd[8];                                   /*@A1A*/
     char  Cst_Num_Prd[8];                                   /*@A1A*/
     char  Reserved1[24];                                    /*@A1C*/
} Qdb_Cst_Indexs_t;

/*******************************************************************/
/* Record structure for QUSRMBRD MBRD0300 format                   */
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0300 {
     long Bytes_Returned;
     long Bytes_Available;
     char Db_File_Name[10];
     char Db_File_Lib[10];
     char Member_Name[10];
     char File_Attr[10];
     char Src_Type[10];
     char Crt_Date[13];
     char Src_Change_Date[13];
     char Text_desc[50];
     char Src_File;
     char Ext_File;
     char Log