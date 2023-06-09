/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QNMRGTI                                       */
/*                                                                   */
/* Descriptive Name: Register APPN Topology Information.             */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Register APPN Topology Information API causes    */
/*              the requested APPN topology information to be        */
/*              reported.                                            */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: QNMOptionCurrent                                     */
/*              QNMOptionLocalEN                                     */
/*              QNMOptionLocalNN                                     */
/*              QNMOptionLocalVN                                     */
/*              QNMOptionNetNN                                       */
/*              QNMOptionNetVN                                       */
/*              QNMFormatAppn0100                                    */
/*              QNMFormatAppn0200                                    */
/*              QNMdataQueue                                         */
/*              QNMuserQueue                                         */
/*              QNMreplaceYes                                        */
/*              QNMreplaceNo                                         */
/*              QNMqueueEntryId                                      */
/*              QNMentryCurrent                                      */
/*              QNMentryUpdated                                      */
/*              QNMentryDeleted                                      */
/*              QNMdbDeleted                                         */
/*              QNMnodeTypeEnumNN                                    */
/*              QNMnodeTypeEnumEN                                    */
/*              QNMnodeTypeEnumVN                                    */
/*              QNMnodeTypeEnumNone                                  */
/*              QNMnodeTypeNN                                        */
/*              QNMnodeTypeEN                                        */
/*              QNMnodeTypeVN                                        */
/*              QNMnodeTypeNone                                      */
/*                                                                   */
/* Structure List: Qnm_RGTI_Input_t                                  */
/*                 Qnm_RGTI_Header_t                                 */
/*                 Qnm_APPN0100_t                                    */
/*                 Qnm_APPN0200_t                                    */
/*                 Qnm_CV4580_Node_Attr_t                            */
/*                 Qnm_CV4580_Node_Status_t                          */
/*                 Qnm_CV4580_Node_Support_t                         */
/*                 Qnm_CV4580_Node_Support_2_t                       */
/*                 Qnm_CV4680_Tg_Flags_t                             */
/*                 Qnm_CV47_Tg_Status_t                              */
/*                 Qnm_CV47_Tg_Char_t                                */
/*                                                                   */
/* Function Prototype List: QNMRGTI.                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940201 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QNMRGTI_h
#define QNMRGTI_h

/*********************************************************************/
/*  Prototype for calling Register for APPN Topology Information API */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QNMRGTI,OS,nowiden)
#else
     extern "OS"
#endif
void QNMRGTI   (int *,           /* Queue handle                     */
                void *,          /* Options                          */
                int,             /* Number options                   */
                char *,          /* Format                           */
                void *,          /* Qualified user space name        */
                void *,          /* Qualified queue name             */
                char *,          /* Queue type                       */
                char *,          /* Replace registration             */
                void *);         /* Error code                       */

/*********************************************************************/
/* Constants                                                         */
/*********************************************************************/

/* Option values */
#define  QNMOptionCurrent  "*CURRENT  "
#define  QNMOptionLocalEN  "*LOCALEN  "
#define  QNMOptionLocalNN  "*LOCALNN  "
#define  QNMOptionLocalVN  "*LOCALVN  "
#define  QNMOptionNetNN    "*NETNN    "
#define  QNMOptionNetVN    "*NETVN    "

/* Format names */
#define  QNMFormatAppn0100 "APPN0100"
#define  QNMFormatAppn0200 "APPN0200"

/* Queue types */
#define  QNMdataQueue "*DTAQ     "
#define  QNMuserQueue "*USRQ     "

/* Replace options */
#define  QNMreplaceYes "*YES      "
#define  QNMreplaceNo  "*NO       "

/* Data queue identifier (10 character) */
#define  QNMqueueEntryId   "*APPNTOP  "

/* Entry ID values */
#define QNMentryCurrent "00"
#define QNMentryUpdated "01"
#define QNMentryDeleted "02"
#define QNMdbDeleted    "03"

/* Node type enumerations */
#define  QNMnodeTypeEnumNN   1
#define  QNMnodeTypeEnumEN   2
#define  QNMnodeTypeEnumVN   3
#define  QNMnodeTypeEnumNone 0

/* Node types */
#define  QNMnodeTypeNN     "*NN"
#define  QNMnodeTypeEN     "*EN"
#define  QNMnodeTypeVN     "*VN"
#define  QNMnodeTypeNone   "   "

/*********************************************************************/
/* Structure for Input Parameter Section                             */
/*********************************************************************/
typedef _Packed struct Qnm_RGTI_Input
{
  char  User_Space_Name_Specified[10];
  char  User_Space_Library_Specified[10];
  char  Format_Name_Specified[8];
} Qnm_RGTI_Input_t;

/*********************************************************************/
/* Structure for Header Section                                      */
/*********************************************************************/
typedef _Packed struct Qnm_RGTI_Header
{
  char  User_Space_Name_Used[10];
  char  User_Space_Library_Used[10];
  int   Number_Nodes;
  char  Timestamp_Reported[8];
  char  Timestamp_Node_Initialized[8];
  int   Number_ENs;
  int   Number_EN_Tgs;
  int   Number_NN_Tgs;
  char  Local_Netid[8];
  char  Local_Cpname[8];
  int   Local_Tdu_Frsn;
  char  Local_Node_Type[3];
  char  Reserved_1;
  int   Local_Node_Type_Enum;
  short Local_Qual_Cpname_Length;
  char  Local_Qual_Cpname[17];
  char  Reserved_2[1];
  int   Node_Purges;
  int   Tg_Purges;
} Qnm_RGTI_Header_t;

/*********************************************************************/
/* Structure for Format of Node Status                               */
/* Derived from SNA control vector x'4580'.                          */
/*********************************************************************/
typedef _Packed struct Qnm_CV4580_Node_Status
{
  unsigned congested : 1;
  unsigned ird : 1;
  unsigned erd : 1;
  unsigned : 2;
  unsigned quiescing : 1;
  unsigned : 2;
} Qnm_CV4580_Node_Status_t;

/*********************************************************************/
/* Structure for Format of Node Support                              */
/* Derived from SNA control vector x'4580'.                          */
/*********************************************************************/
typedef _Packed struct Qnm_CV4580_Node_Support
{
  unsigned gateway : 1;
  unsigned centralDir : 1;
  unsigned isr : 1;
  unsigned retired1 : 1;
  unsigned : 2;
  unsigned retired2 : 2;
} Qnm_CV4580_Node_Support_t;

/*********************************************************************/
/* Structure for Additional Node Support                            