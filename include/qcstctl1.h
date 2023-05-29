/***   START OF HEADER FILE SPECIFICATIONS   ************************/
/*                                                                  */
/* Header File Name: H/QCSTCTL1                                     */
/*                                                                  */
/* Descriptive Name: Cluster Control APIs.                          */
/*                                                                  */
/* 5769-SS1                                                         */
/* (C) Copyright IBM Corp. 1999,1999                                */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: Include header file for QCSTCTL1 service program.   */
/*                                                                  */
/* Header Files Included: qcst.h                                    */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qcst_List_Cluster_Input_t                        */
/*                 Qcst_List_Cluster_Header_t                       */
/*                 Qcst_List_Node_Entry_t                           */
/*                 Qcst_LCTI0100_t                                  */
/*                                                                  */
/* Function Prototype List: QcstListClusterInfo                     */
/*                                                                  */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- ----- ------ --------- --------------------------- */
/* $A0= D9570800 4D40  980722 ROCH:     New Include                 */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*   Additional notes about the Change Activity                     */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/***   END OF HEADER FILE SPECIFICATIONS   **************************/

#ifndef _QCSTCTL1_h
#define _QCSTCTL1_h

#include <qcst.h>


/********************************************************************/
/* Prototype for List Cluster Information API.                      */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstListClusterInfo,OS,nowiden)
#else
    extern "C"
#endif
void QcstListClusterInfo   (char *,  /* Qualified user space name   */
                            char *,  /* Cluster name                */
                            char *,  /* Format name                 */
                            char *,  /* Node id                     */
                            void *); /* Error code                  */

/*------------------------------------------------------------------*/
/* Input Parameter Section.                                         */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Cluster_Input {
    char UserSpaceName[10];
    char UserSpaceLibName[10];
    char ClusterName[10];
    char FormatName[8];
    char NodeId[8];
} Qcst_List_Cluster_Input_t;

/*------------------------------------------------------------------*/
/* Header Section.                                                  */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Cluster_Header {
    char InfoStatus;
} Qcst_List_Cluster_Header_t;

/*------------------------------------------------------------------*/
/* Structure for List Node Entry format.                            */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_List_Node_Entry {
    int  LengthOfNodeEntry;
    char NodeId[8];
    int  NodeStatus;
    int  OffsetToFirstInterface;
    int  NumberOfInterfaces;
  /*char InterfaceAddress[][16];*/     /* varying length            */
} Qcst_List_Node_Entry_t;

/*------------------------------------------------------------------*/
/* Structure for LCTI0100 format.                                   */
/*------------------------------------------------------------------*/
/* typedef _Packed struct Qcst_LCTI0100 {
     Qcst_List_Node_Entry_t [];           varying length
} Qcst_LCTI0100_t;                                                  */

#endif /* _QCSTCTL1_h*/
