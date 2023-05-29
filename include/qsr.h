#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name:  qsr.h                                       */
/*                                                                */
/* Descriptive Name: Common structures for save/restore APIs      */
/*                                                                */
/* WARNING:        This macro/include is a CUE.                   */
/*                 This macro/include provides an interface       */
/*                 that is externally documented to customers     */
/*                 or is function that any user could create.     */
/*                 Any changes to this part MUST be upward        */
/*                 compatible at compile and run time.            */
/*                 This interface may be generated as in-line     */
/*                 code in customer programs.                     */
/*                                                                */
/*                 CSTATUS:  OT                                   */
/*                                                                */
/*                                                                */
/* 5769-SS1                                                       */
/* (C) Copyright IBM Corp. 1999,1999                              */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: This header file defines common structures        */
/*              used by the save/restore APIs.                    */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: Qsr_TAPE0100_t                                 */
/*                 Qsr_TAPE0100_Device_t                          */
/*                 Qsr_TAPE0100_File_t                            */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION     */
/* ---- ------------ ----- ------ -------- ---------------------- */
/* $A0= P3671746     4D40  980822 ROCH     New Include            */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef __qsr_cleinc
#define __qsr_cleinc

/******************************************************************/
/* Type Definitions                                               */
/******************************************************************/

/******************************************************************/
/* Type Definition for the Media Definition                       */
/****                                                         *****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/

typedef struct Qsr_TAPE0100 {
    int Bytes_Returned;
    int Bytes_Available;
    int Maximum_Resources;
    int Minimum_Resources;
    int Offset_First_Device;
    int Device_Count;
    /*char Device[]; */          /*  Varying length field          */
} Qsr_TAPE0100_t;

typedef struct Qsr_TAPE0100_Device {
    int Offset_Next_Device;
    char Device_Name[10];
    char reserved[2];
    int Offset_First_File;
    int File_Count;
    /*char Filess[]; */         /* Varying length field           */
} Qsr_TAPE0100_Device_t;

typedef struct Qsr_TAPE0100_File {
    int Offset_Next_File;
    int Sequence_Number;
    int Offset_First_Volume_Id;
    int Volume_Id_Count;
    int Volume_Id_Length;
    int Starting_Volume;
    /*char Volume_Ids[]; */     /* Varying length field           */
} Qsr_TAPE0100_File_t;


#endif  /* __qsr_cleinc */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif

