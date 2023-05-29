 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCSTCRG1                                   */
 /*                                                                */
 /* Descriptive Name: Cluster Resource Group APIs.                 */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1999,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: APIs that are in the QCSTCRG1 service program.    */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                        h/qcst                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qcst_RGDI0100t                                */
 /*                  Qcst_Rcvy_Domain_Array_t                      */
 /*                  Qcst_RGDI0200_t                               */
 /*                  Qcst_RGDC0100_t                               */
 /*                  Qcst_RGDC0200_t                               */
 /*                                                                */
 /* Function Prototype List: QcstCreateClusterResourceGroup        */
 /*                          QcstDeleteClusterResourceGroup        */
 /*                          QcstChangeClusterResourceGroup        */
 /*                          QcstAddNodeToRcvyDomain               */
 /*                          QcstRemoveNodeFromRcvyDomain          */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9570800     4D40  971205 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QCSTCRGM1_h
 #define QCSTCRGM1_h

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qus.h>
 #include <qcst.h>

 /******************************************************************/
 /* Prototype for calling Create Cluster Resource Group API.       */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstCreateClusterResourceGroup,OS,nowiden)
    void QcstCreateClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           int,      /* Cluster Resource Group Type*/
                           void *,   /* Cluster Resource Group
                                        Description Information    */
                           char *,   /* Format Name                */
                           void *,   /* Text Description           */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
 #else
    extern "C"
    void QcstCreateClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           int  *,   /* Cluster Resource Group Type*/
                           void *,   /* Cluster Resource Group
                                        Description Information    */
                           char *,   /* Format Name                */
                           void *,   /* Text Description           */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
 #endif


 /******************************************************************/
 /* Cluster Resource Group Description Information -- RGDI0100     */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDI0100 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Reserved[2];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
} Qcst_RGDI0100_t;

 typedef _Packed struct Qcst_Rcvy_Domain_Array {
     char Node_ID[8];
     int  Node_Role;
} Qcst_Rcvy_Domain_Array_t;

 /******************************************************************/
 /* Cluster Resource Group Description Information -- RGDI0200     */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDI0200 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Reserved[2];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     char TakeOver_IP_Address[16];
     char Job_Name[10];
     char Reserved1[2];
     int  Allow_Application_Restart;
     int  Number_Restarts;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
} Qcst_RGDI0200_t;



/******************************************************************/
/* Allow application restarts Values                              */
/******************************************************************/
enum QcstAppRestart {
     QcstNoAppRestart = 0,
     QcstAllowAppRestart = 1
 };

 /******************************************************************/
 /* Prototype for calling Delete Resilient Group Object API.       */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstDeleteClusterResourceGroup,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstDeleteClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Prototype for calling Change Cluster Resource Group API.       */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstChangeClusterResourceGroup,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstChangeClusterResourceGroup
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Cluster Resource Group
                                        Description Information    */
                           char *,   /* Format Name                */
                           void *,   /* Text Description           */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Cluster Resource Group Description Information -- RGDC0100     */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDC0100 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Action_Rcvy_Domain_Array[10];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
} Qcst_RGDC0100_t;

 /******************************************************************/
 /* Cluster Resource Group Description Information -- RGDC0200     */
 /******************************************************************/

 typedef _Packed struct Qcst_RGDC0200 {
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char Crg_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Action_Rcvy_Domain_Array[10];
     char Exit_Pgm_Data[256];
     int  Offset_Rcvy_Domain;
     int  Number_NodeID_Rcvy_Domain;
     char Takeover_IP_Address[16];
     char Job_Name[10];
     char Reserved1[2];
     int  Allow_Application_Restart;
     int  Number_Restarts;
   /*Qcst_Rcvy_Domain_Array_t Rcvy_Domain_Array[]; */
} Qcst_RGDC0200_t;

 /******************************************************************/
 /* Prototype for calling Add Node To Recovery Domain API.         */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstAddNodeToRcvyDomain,OS,nowiden)
    void QcstAddNodeToRcvyDomain
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           char *,   /* Node ID                    */
                           int   ,   /* Node Role                  */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
 #else
    extern "C"
    void QcstAddNodeToRcvyDomain
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           char *,   /* Node ID                    */
                           int  *,   /* Node Role                  */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
 #endif

 /******************************************************************/
 /* Prototype for calling Remove Node From Recovery Domain API.    */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstRemoveNodeFromRcvyDomain,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstRemoveNodeFromRcvyDomain
                          (char *,   /* Request Handle             */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           char *,   /* Node ID                    */
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */
#endif /* _QCSTCRGM1_h */
