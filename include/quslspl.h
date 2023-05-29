 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSLSPL                                    */
 /*                                                                */
 /* Descriptive Name: List spooled files.                          */
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
 /* Description: The List Spooled Files API is similar to the      */
 /*              Work with Spooled Files command or the Work with  */
 /*              Job command.                                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_SPLF_I_t                                   */
 /*                 Qus_SPLF_I2_t                                  */
 /*                 Qus_SPLF_H_t                                   */
 /*                 Qus_SPLF0200_t                                 */
 /*                 Qus_SPLF0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QUSLSPL                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940316 XZS2523:  New Include           */
 /* $A1= D9492900     4D30  970728 DWIGHT :  Support for HSM.      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QUSLSPL_h
#define QUSLSPL_h

/*******************************************************************/
/*  Prototype for calling List Spooled File API QUSLSPL            */
/*******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QUSLSPL,OS,nowiden)
  #else
       extern "OS"
  #endif
void QUSLSPL  (void *,           /* User space and library name    */
               char *,           /* Format name                    */
               char *,           /* User name                      */
               void *,           /* Output queue and library name  */
               char *,           /* Form type                      */
               char *,           /* User-specified data            */
               ...);             /* Optional Parameter Group 1:
                                      Error code
                                    Optional Parameter Group 2:
                                      Qualified Job Name
                                      Keys for fields to return
                                      Number of fields to return
                                    Optional Parameter Group 3:
                                      Auxiliary storage pool       */


/*******************************************************************/
/* Input Parameter Section.                                        */
/*******************************************************************/
typedef _Packed struct Qus_SPLF_I
{
     char User_Space[10];
     char User_Space_Lib[10];
     char Format_Name[8];
     char User_Name[10];
     char Output_Queue_Name[10];
     char Output_Queue_Lib[10];
     char Form_Type[10];
     char User_Data[10];
     char Qual_Job_Name[26];
     int  Num_Keys_Spec;
   /*int  Keys[];*/              /* Varying length                 */
} Qus_SPLF_I_t;

/*******************************************************************/
/* Input Parameter Section #2 used when Optional Parameter group 3 */
/* is specified.                                                   */
/*******************************************************************/
typedef _Packed struct Qus_SPLF_I2
{
     char User_Space[10];
     char User_Space_Lib[10];
     char Format_Name[8];
     char User_Name[10];
     char Output_Queue_Name[10];
     char Output_Queue_Lib[10];
     char Form_Type[10];
     char User_Data[10];
     char Qual_Job_Name[26];
     int  Offset_Keys_Spec;
     int  Num_Keys_Spec;
     int  Auxiliary_Storage_Pool;
   /*int  Keys[];*/              /* Varying length                 */
} Qus_SPLF_I2_t;

/*******************************************************************/
/* Header Section.                                                 */
/*******************************************************************/

typedef _Packed struct Qus_SPLF_H
{
     char User_Name[10];
     char Output_Queue_Name[10];
     char Output_Queue_Lib[10];
     char UsrSpc_Name[10];
     char UsrSpc_Lib[10];
     char Qualified_Job_Name[26];
} Qus_SPLF_H_t;

/*******************************************************************/
/* Structure for SPLF0100 format                                   */
/*******************************************************************/

typedef _Packed struct Qus_SPLF0100
{
     char User_Name[10];
     char Output_Queue[10];
     char Output_Queue_Lib[10];
     char Form_Type[10];
     char User_Data[10];
     char Int_Job_ID[16];
     char Int_Splf_ID[16];
     char Reserved[2];
     int  Auxiliary_Storage_Pool;
} Qus_SPLF0100_t;

/*******************************************************************/
/* Type definition for the SPLF0200 format.                        */
/*******                                                           */
/* NOTE:  The following type definition only defines the fixed     */
/*        portion of the format. Any varying length field will     */
/*        have to be defined by the user.                          */
/*******************************************************************/

typedef _Packed struct Qus_LSPL_Key_Info
{
     int  Len_Field_Info_Retd;
     int  Key_Field_for_Field_Retd;
     char Type_of_Data[1];
     char Reserv3[3];
     int  Data_Length;
   /*char Data[];*/              /* Varying length                 */
   /*char Reserved[];*/          /* Varying length                 */
} Qus_LSPL_Key_Info_t;

typedef _Packed struct Qus_SPLF0200
{
     int  Num_Fields_Retd;
   /*Qus_LSPL_Key_Info_t Key_Info;*//*Varying length               */
} Qus_SPLF0200_t;

#endif
