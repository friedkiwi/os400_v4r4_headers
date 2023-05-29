#ifndef _QSXSRVPL__h
#define _QSXSRVPL__h

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header file name: qsxsrvpl.h                                      */
/*                                                                   */
/* Descriptive name: Problem Log APIs                                */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1994,1998                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Include header file for the problem log APIs.        */
/*                                                                   */
/* Macros used: None.                                                */
/*                                                                   */
/* Structure list:                                                   */
/*   See include body.                                               */
/*                                                                   */
/* Function prototype list:                                          */
/*    QsxStartProblemLogServices                                     */
/*    QsxEndProblemLogServices                                       */
/*    QsxAddProblemLogEntry                                          */
/*    QsxCreateProblemLogEntry                                       */
/*    QsxChangeProblemLogEntry                                       */
/*    QsxDeleteProblemLogEntry                                       */
/*    QsxRetrieveProblemLogEntry                                     */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON  LEVEL DATE    PGMR        DESCRIPTION                */
/* ---- ------- ----- ------  ---------   -------------------------- */
/* $A0=D28854   3D10  930706  GBS:        New include                */
/* $A1=P3622471 3D70  960610  MARQUEZ    :Do not use "qusec.cleinc"  */
/*                                          instead just use         */
/*                                          <qusec.h>                */
/* $B1=D95243   4D20  970623  DIANAG     :Add Operating System Delta */
/*                                          Level                    */
/* $B2=P3649900 4D20  970806  DIANAG     :Undo changes to support    */
/*                                          Delta Level              */
/* $C1=P3673512 4D40  981021  BAUTISTA   :Add new struct for         */
/*                                        QsxRetrieveProblemLogEntry */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#include <qusec.h>

/*********************************************************************
 *                        GENERAL DECLARATIONS
 *********************************************************************/
typedef int Qsx_Field_Length_T;

/* Type used for newtork ID and control point name                   */
typedef struct { char Name[8]; } Qsx_Appn_Name_T;
const Qsx_Appn_Name_T
        QSX_NETID_IBM  = {' ',' ',' ',' ',' ',' ',' ',' '};
const Qsx_Appn_Name_T
        QSX_CPNAME_IBM = {'*','I','B','M','S','R','V',' '};

typedef struct
{
  Qsx_Appn_Name_T       Network_Id;
  Qsx_Appn_Name_T       Control_Point_Name;
  char                  Reserved[4];
} Qsx_Appn_T;

typedef struct
{
  char          Number[15];
  char          Reserved[5];
} Qsx_Internet_T;

typedef union
{
  Qsx_Appn_T            Appn;
  Qsx_Internet_T        Internet;
} Qsx_Net_Union_T;

/* Constants used for newtork types                                  */
typedef char Qsx_Networks_T;
const Qsx_Networks_T    QSX_APPN     = 'A';
const Qsx_Networks_T    QSX_INTERNET = 'I';
const Qsx_Networks_T    QSX_IBMSRV   = 'R';

typedef struct
{
  Qsx_Networks_T  Code;
  Qsx_Net_Union_T Net_Union;
} Qsx_Net_T;

/*********************************************************************
 * Declaration of the problem log ID
 *********************************************************************/
typedef struct { char ch[10]; } Qsx_Problem_Number_T;

const Qsx_Problem_Number_T
        QSX_LOCAL_PROBLEM = {'*','L','O','C','A','L',' ',' ',' ',' '};
const Qsx_Problem_Number_T
        QSX_BLANK_PROBLEM = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};


typedef struct
{
  Qsx_Problem_Number_T   Number;
  Qsx_Net_T          Net_Type;
} Qsx_Prob_Log_Id_T;

/*********************************************************************
 * Declaration to be used with a device or feature description
 *********************************************************************/

/* constants used for machine or device field lengths                */
const Qsx_Field_Length_T          QSX_MACHINE_FIELD       = 4;
const Qsx_Field_Length_T          QSX_MODEL_FIELD         = 3;
const Qsx_Field_Length_T          QSX_FEATURE_FIELD       = 4;
const Qsx_Field_Length_T          QSX_SERIAL_FIELD        = 8;

typedef struct
{
  Qsx_Field_Length_T    Machine_Lng;
  Qsx_Field_Length_T    Model_Lng;
  Qsx_Field_Length_T    Feature_Lng;
  Qsx_Field_Length_T    Serial_Lng;
  char                  Machine_Type[16];
  char                  Model[16];
  char                  Feature[16];
  char                  Serial[32];
} Qsx_Machine_T;

/*********************************************************************
 * Declaration to be used with a program or product description.
 *********************************************************************/

/* Constants used for program or product field lengths               */
const Qsx_Field_Length_T          QSX_PRODUCT_FIELD       = 7;
const Qsx_Field_Length_T          QSX_VERSION_FIELD       = 2;
const Qsx_Field_Length_T          QSX_RELEASE_FIELD       = 2;
const Qsx_Field_Length_T          QSX_MOD_FIELD           = 2;
/*const Qsx_Field_Length_T        QSX_DELTALVL_FIELD      = 2;   @B2D*/

typedef struct
{
  Qsx_Field_Length_T    Product_Lng;
  Qsx_Field_Length_T    Version_Lng;
  Qsx_Field_Length_T    Release_Lng;
  Qsx_Field_Length_T    Modification_Lng;
  /*Qsx_Field_Length_T    DeltaLvl_Lng;                     @B1A @B2D*/
  char                  Product_Id[15];
  char                  Version[5];
  char                  Release[5];
  char                  Modification[5];
  /*char                  DeltaLvl[2];                      @B1A @B2D*/
  char                  Reserved[2];                     /* @B1D @B2A*/
} Qsx_Product_T;

/*********************************************************************
 * Declaration used for the postal adddress.
 *********************************************************************/
typedef struct
{
  char  Address_1[36];
  char  Address_2[36];
  char  Address_3[36];
  char  City_State[36];
  char  Country[20];
  char  Zip_Code[12];
} Qsx_Address_T;

/*********************************************************************
 * Declaration used for date and time.
 *********************************************************************/
typedef char Qsx_Century_Code_T;

const Qsx_Century_Code_T        QSX_20TH_CENTURY = '0';
const Qsx_Century_Code_T        QSX_21ST_CENTURY = '1';

typedef struct
{
  Qsx_Century_Code_T    Century[1];
  char                  Year[2];
  char                  Month[2];
  char                  Day[2];
  char                  Hour[2];
  char                  Minute[2];
  char                  Second[2];
} Qsx_Date_Time_T;

/*********************************************************************
 * Valid key types                                               @C1C
 *********************************************************************/

typedef enum
{
  Qsx_Problem_Id          = 1,
  Qsx_Type                = 2,
  Qsx_Status              = 3,
  Qsx_User_Asn            = 4,
  Qsx_Origin_Sys          = 5,
  Qsx_Oper_Data           = 6,
  Qsx_Filter              = 7,
  Qsx_Answer              = 8,
  Qsx_Severity            = 1001,
  Qsx_Description         = 1002,
  Qsx_Crt_Data            = 1003,
  Qsx_Rpt_Dev             = 1004,
  Qsx_Fail_Resc           = 1005,
  Qsx_Rpt_Product         = 1006,
  Qsx_Iso_Info            = 1007,
  Qsx_Vfy_Status          = 1008,
  Qsx_Rcv_Status          = 1009,
  Qsx_Symptom             = 1010,
  Qsx_Media               = 1011,
  Qsx_Problem_Category    = 1012,
  Qsx_Pc_Software_Data    = 1013,
  Qsx_Ffdc_Data           = 1014,
  Qsx_Query_Status        = 1015,
  Qsx_Hardware_Location   = 1016,
  Qsx_Fru_Class           = 2000,
  Qsx_Dev_Fru             = 2001,
  Qsx_Code_Fru            = 2002,
  Qsx_Media_Fru           = 2003,
  Qsx_User_Fru            = 2004,
  Qsx_Fru_Name            = 2005,
  Qsx_Att_Fru             = 2006,
  Qsx_Cfg_Fru             = 2007,
  Qsx_Gen_Fru        