#ifndef _QZMF_H
   #define _QZMF_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QZMF                                          */
/*                                                                   */
/* Descriptive Name: Mail Server Framework (MSF) API and Exit Pgm.   */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Include header file for the common structures and    */
/*              constants for MSF APIs and Exit Programs.            */
/*                                                                   */
/* Header Files Included:                                            */
/*                        H/POINTER                                  */
/*                        H/LIMITS                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*                 Qzmf_Exit_Pgm_Lib_Name_t                          */
/*                 Qzmf_Date_t                                       */
/*                 Qzmf_Time_t                                       */
/*                 Qzmf_System_Timestamp_t                           */
/*                                                                   */
/*                 Qzmf_GET_GMT_Delta_t                              */
/*                 Qzmf_GET_Timestamp_t                              */
/*                 Qzmf_GET_t                                        */
/*                 Qzmf_GET_Generic_Attrbt_t                         */
/*                 Qzmf_GET_Int_Attrbt_t                             */
/*                 Qzmf_GET_Timestamp_Attrbt_t                       */
/*                 Qzmf_GET_Subject_Attrbt_t                         */
/*                 Qzmf_GET_Signtr_Attrbt_t                          */
/*                 Qzmf_GET_Note_Attrbt_t                            */
/*                 Qzmf_GET_Appl_UId__Attrbt_t                       */
/*                 Qzmf_GET_Appl_Rf_UId_Attrbt_t                     */
/*                 Qzmf_GET_Ref_Attrbt_t                             */
/*                 Qzmf_GET_Attach_Attrbt_t                          */
/*                                                                   */
/*                 Qzmf_FSO_t                                        */
/*                                                                   */
/*                 Qzmf_Msg_Desc_Attrbt_Entity_t                     */
/*                 Qzmf_Msg_Desc_Hdr0100_t                           */
/*                                                                   */
/*                 Qzmf_ORGL0100_t                                   */
/*                 Qzmf_ENVL0100_t                                   */
/*                 Qzmf_RCPL0100_t                                   */
/*                 Qzmf_ROAL0100_t                                   */
/*                 Qzmf_RTAL0100_t                                   */
/*                 Qzmf_RPYL0100_t                                   */
/*                 Qzmf_ORCL0100_t                                   */
/*                 Qzmf_ATTL0100_t                                   */
/*                 Qzmf_MSGL0100_t                                   */
/*                                                                   */
/*                 Qzmf_Orgntr0100_Msg_Desc_t                        */
/*                 Qzmf_Envlp0100_Msg_Desc_t                         */
/*                 Qzmf_Rcpt0100_Msg_Desc_t                          */
/*                 Qzmf_Rpt_O_Addr0100_Msg_Desc_t                    */
/*                 Qzmf_Rpt_T_Addr0100_Msg_Desc_t                    */
/*                 Qzmf_Rply_T_Addr0100_Msg_Desc_t                   */
/*                 Qzmf_Org_Rcp_Addr0100_Msg_Desc_t                  */
/*                 Qzmf_Attch0100_Msg_Desc_t                         */
/*                 Qzmf_Msg_Type0100_Msg_Desc_t                      */
/*                                                                   */
/* Function Prototype List: None                                     */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------   ------------------------ */
/* $A0= D9129400     3D10  940408 BANER :   New Include for V3R1     */
/* $A1= P3967695     3P10  940920 FGOH  :   Add reply requested flag */
/* $A2= D91597.1     3D60  941128 BANER :   Parenthize two defines   */
/* $A3= P3979716     3P10  950301 RIPSTRA:  Add importance to GET    */
/* $A4= P3991537     3P10  950602 HAN:      Chg FSO attach ref struct*/
/* $A5= P3611630     3D20  960119 GJROMAN:  (see below)              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* A5: Added GET attribute type and structure for MIME Attachment    */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#include <pointer.h>
#include <limits.h>


typedef char Qzmf_Type_Value_t[4];
typedef char Qzmf_Format_Name_t[8];
typedef char Qzmf_Msg_Id_t[32];
typedef long int Qzmf_CCSID_t;
typedef char Qzmf_Exit_Point_t[20];

typedef _Packed struct Qzmf_Exit_Pgm_Lib_Name
{
   char                    Program_Name[10];
   char                    Library_Name[10];
} Qzmf_Exit_Pgm_Lib_Name_t;

typedef char Qzmf_Type_Group_t[2];
typedef char Qzmf_Type_Name_t[8];
typedef char Qzmf_User_Space_t[20];

typedef _Packed struct Qzmf_Date
{
   char                    Year[2];
   char                    Month[2];
   char                    Day[2];
} Qzmf_Date_t;

typedef _Packed struct Qzmf_Time
{
   char                    Hour[2];
   char                    Minute[2];
   char                    Second[2];
} Qzmf_Time_t;

typedef _Packed struct Qzmf_System_Timestamp
{
   char                    Century_Digit;
   Qzmf_Date_t             Date;
   Qzmf_Time_t             Time;
   char                    Milli_Second[3];
} Qzmf_System_Timestamp_t;


typedef char Qzmf_Msg_Id_Qry_Status_t;

/*-------------------------------------------------------------------*/
/***   Following are the Valid MSF Configuration API Type Groups   ***/
/*-------------------------------------------------------------------*/

#define  QZMF_ADDR_TYPE_GROUP         "01"
#define  QZMF_MSG_TYPE_GROUP          "02"
#define  QZMF_ENV_TYPE_GROUP          "03"
#define  QZMF_ATTACH_TYPE_GROUP       "04"

#define  QZMF_LST_SEL_NO_TYPE_GROUP   "  "


#define  QZMF_TYPE_GROUP_LENGTH       (sizeof(Qzmf_Type_Group_t))


/*-------------------------------------------------------------------*/
/***   Following are the Valid MSF Configuration API Format Names  ***/
/*-------------------------------------------------------------------*/

#define  QZMF_ADD_CONFIG_FORMAT         "ADDC0100"
#define  QZMF_DEL_CONFIG_FORMAT         "DLTC0100"
#define  QZMF_LST_SELECTION_FORMAT      "LSTC0100"
#define  QZMF_LST_RECEIVER_FORMAT       "LSTL0100"

#define  QZMF_MSF_CONFIG_FMT_LENGTH     (sizeof(Qzmf_Format_Name_t))


/*-------------------------------------------------------------------*/
/***   Following are the Valid MSF Messaging API Format Names      ***/
/*-------------------------------------------------------------------*/

#define  QZMF_CRT_MAIL_MSG_FORMAT       "CRTM0100"
#define  QZMF_RTV_MAIL_MSG_FORMAT       "RTVM0100"
#define  QZMF_CHG_MAIL_MSG_FORMAT       "CHGM0100"
#define  QZMF_RSV_MAIL_MSG_FORMAT       "RSVF0100"
#define  QZMF_QRY_MAIL_MSG_FORMAT       "QRYF0100"
#define  QZMF_RMV_RSV_MAIL_MSG_FORMAT   "RMVF0100"
#define  QZMF_CRT_CMP_MAIL_MSG_FORMAT   "CCMP0100"

#define  QZMF_MSF_MSG_API_FMT_LENGTH    (sizeof(Qzmf_Format_Name_t))


/*-------------------------------------------------------------------*/
/** Various Format definitions of the Message Descriptor Structure  **/
/*-------------------------------------------------------------------*/

#define  QZMF_ORIGINATOR_LIST_FMT       "ORGL0100"
#define  QZMF_ENVELOPE_LIST_FMT         "ENVL0100"
#define  QZMF_RECIPIENT_LIST_FMT        "RCPL0100"
#define  QZMF_RECIPIENT_HIST_FMT     