#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

#ifndef __qcst_h
  #define __qcst_h 1

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name: H/QCST                                           */
/*                                                                    */
/* Description: Common information amongst Cluster APIs.              */
/*                                                                    */
/* 5769-SS1                                                           */
/* (C) Copyright IBM Corp. 1999,1999                                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* Description:  Cluster Common Functions                             */
/*                                                                    */
/* Header Files Included:   None                                      */
/*                                                                    */
/* Macros List:             None                                      */
/*                                                                    */
/* Structure List:  Qcst_Results_Info_UsrQ_Entry_t                    */
/*                  Qcst_Results_Info_UsrQ_t                          */
/*                                                                    */
/* Function Prototype List: None                                      */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- ------------------------- */
/* $00= D95708.10    4D40  980317 ROCH    : New include               */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

/**********************************************************************/
/* Includes                                                           */
/**********************************************************************/

/******************************************************************/
/* Defines for special values                                     */
/******************************************************************/
#define QcstJobd "*JOBD     "
#define QcstNone "*NONE     "
#define QcstSame "*SAME     "
#define QcstPrimaryNodeRole 0
#define QcstReplicateNodeRole -1

/******************************************************************/
/* Cluster Resource Group Status Values                           */
/******************************************************************/
enum QcstCrgStatus {
     QcstCrgActive              = 10,
     QcstCrgInactive            = 20,
     QcstCrgIndoubt             = 30,
     QcstCrgRestored            = 40,
     QcstCrgAddnodePending      = 500,
     QcstCrgDeletePending       = 510,
     QcstCrgChangePending       = 520,
     QcstCrgEndCrgPending       = 530,
     QcstCrgInitializePending   = 540,
     QcstCrgRemovenodePending   = 550,
     QcstCrgStartCrgPending     = 560,
     QcstCrgSwitchOverPending   = 570,
     QcstCrgDeleteCmdPending    = 580
 };

/******************************************************************/
/* Cluster Node Status                                            */
/******************************************************************/
 enum QcstClusterNodeStatus {
     QcstNew = 1,
     QcstActive,
     QcstRemovePending,
     QcstActivePending,
     QcstInactivePending,
     QcstInactive,
     QcstFailed,
     QcstPartition
 };

/**********************************************************************/
/* Type definitions                                                   */
/**********************************************************************/

typedef char Qcst_Cluster_Name_t[10];

typedef char Qcst_Node_Id_t[8];

typedef char Qcst_Format_Name_t[8];

typedef char Qcst_Request_Handle_t[16];

typedef char Qcst_Crg_Name_t[10];

typedef char Qcst_Text_Description_t[50];

typedef int  Qcst_Crg_Type_t;

typedef char  Qcst_Crg_Exit_Program_Data_t[256];

typedef char  Qcst_TakeOver_IP_Address_t[16];

/******************************************************************/
/* Cluster Resource Group Type Values                             */
/******************************************************************/
enum QcstCrgType {
     QcstCrgDataResiliency = 1,
     QcstCrgApplResiliency = 2
 };

/**********************************************************************/
/* Structures                                                         */
/**********************************************************************/

/**********************************************************************/
/* Results Information User Queue Entry                               */
/**********************************************************************/
#define CurrentMessageVersionId  1; /* use this for Msg_Version_Id */

 typedef _Packed struct Qcst_Results_Info_UsrQ_Key {
     char Entry_Type[10];
     char Entry_ID[2];
     char Request_Handle[16];
} Qcst_Results_Info_UsrQ_Key_t;

 typedef _Packed struct Qcst_Results_Info_UsrQ_Entry {
     int  Msg_Version_Id;
     int  Msg_Type;
     char Api_Name[30];
     char Msg_Id[7];
     char Reserved1[35];
     char Failing_Node_Id[8];
     char External_Object_Name[10];
     char Reserved2[2];
     int  Offset_To_Msg_Data;
     int  Msg_Data_Len;
/*     char Msg_Data[];						       */
} Qcst_Results_Info_UsrQ_Entry_t;

enum QcstRiqCompletionReasonCode {
  QcstApiSuccessful                  = 1,
  QcstApiSuccessfulWithFailure       = 2,
  QcstApiFailure                     = 3
};

enum QcstMessageType {
  QcstDiag   = 1,
  QcstInfo   = 2,
  QcstComp   = 3
};

/**********************************************************************/
/* Request Information Parameter                                      */
/**********************************************************************/

 typedef _Packed struct Qcst_Results_Info_Parm {
     char User_Queue_Name[10];
     char User_Queue_Lib_Name[10];
     char Reserved[10];
} Qcst_Results_Info_Parm_t;

/**********************************************************************/
/* Macros                                                             */
/**********************************************************************/


/**********************************************************************/
/* Function Prototypes                                                */
/**********************************************************************/

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#endif /* __qcst_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
