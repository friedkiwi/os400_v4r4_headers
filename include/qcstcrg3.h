 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCSTCRG3                                   */
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
 /* Description: APIs that are in the QCSTCRG3 service program.    */
 /*                                                                */
 /* Header Files Included: h/qus                                   */
 /*                        h/qcst                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qcst_CRGL0100_Input_t                         */
 /*                  Qcst_CRGL0100_Header_t                        */
 /*                  Qcst_CRGL0100_t                               */
 /*                  Qcst_LRGI0100_Input_t                         */
 /*                  Qcst_LRGI0100_Header_t                        */
 /*                  Qcst_LRGI0100_t                               */
 /*                  Qcst_Rcvy_Domain_Array1_t                     */
 /*                  Qcst_EXTP0100_t                               */
 /*                                                                */
 /* Function Prototype List: QcstListClusterResourceGroups         */
 /*                          QcstListClusterResourceGroupInfo      */
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

#ifndef QCSTCRGM3_h
 #define QCSTCRGM3_h

 /******************************************************************/
 /* Includes for structures used by API's                          */
 /******************************************************************/
 #include <qus.h>
 #include <qcst.h>

 /******************************************************************/
 /* Prototype for calling List Cluster Resource Groups API.        */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstListClusterResourceGroups,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstListClusterResourceGroups
                          (char *,   /* Qualified User Space Name  */
                           char *,   /* Format Name                */
                           char *,   /* Cluster Name               */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Input Parameter Section                                        */
 /******************************************************************/

 typedef _Packed struct Qcst_CRGL0100_Input{
     char User_Space_Name[10];
     char User_Space_Library_Name[10];
     char Format_Name[8];
     char Cluster_Name[10];
} Qcst_CRGL0100_Input_t;

 /******************************************************************/
 /* Header Parameter Section                                       */
 /******************************************************************/

 typedef _Packed struct Qcst_CRGL0100_Header{
     char Information_Status[1];
} Qcst_CRGL0100_Header_t;

 /******************************************************************/
 /* CRGL0100 Format                                                */
 /******************************************************************/

 typedef _Packed struct Qcst_CRGL0100{
     char Cluster_Resource_Group[10];
     char Reserved[2];
     int  Cluster_Resource_Group_Status;
     char Primary_Node_ID[8];
} Qcst_CRGL0100_t;

 /******************************************************************/
 /* Recovery Domain Array 1                                        */
 /******************************************************************/

 typedef _Packed struct Qcst_Rcvy_Domain_Array1{
     char Node_ID[8];
     int  Node_Role;
     int  Membership_Status;
} Qcst_Rcvy_Domain_Array1_t;

 /******************************************************************/
 /* Prototype for calling List Cluster Resource Group Info API.    */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma argument (QcstListClusterResourceGroupIn,OS,nowiden)
 #else
    extern "C"
 #endif
    void QcstListClusterResourceGroupIn
                          (char *,   /* Request Handle             */
                           char *,   /* Qualified User Space       */
                           char *,   /* Format Name                */
                           char *,   /* Cluster Name               */
                           char *,   /* Cluster Resource Group Name*/
                           void *,   /* Results Information        */
                           void *);  /* Error Code                 */

 /******************************************************************/
 /* Cluster Resource Group Information - Input Parameter Section   */
 /******************************************************************/

 typedef _Packed struct Qcst_LRGI0100_Input{
     char User_Space_Name[10];
     char User_Space_Library_Name[10];
     char Format_Name[8];
     char Cluster_Name[10];
     char Cluster_Resource_Group_Name[10];
     char Request_Handle[16];
     Qcst_Results_Info_Parm_t Results_Info;
} Qcst_LRGI0100_Input_t;

 /******************************************************************/
 /* Cluster Resource Group Information - Header Section            */
 /******************************************************************/

 typedef _Packed struct Qcst_LRGI0100_Header{
     char Information_Status[1];
     char Reserved[3];
     int  Cluster_Resource_Group_Type;
     int  Current_CRG_Status;
     char CRG_Exit_Pgm_Name[10];
     char CRG_Exit_Pgm_Lib[10];
     char CRG_Exit_Pgm_Format_Name[8];
     char User_Profile[10];
     char Exit_Program_Data[256];
     char Takeover_IP_Address[16];
     char Job_Name[10];
     int  Allow_Application_Restart;
     int  Number_of_Restarts;
     int  Previous_CRG_Status;
     char Reporting_Node_ID[8];

} Qcst_LRGI0100_Header_t;

 /******************************************************************/
 /* Recovery Domain Entries - LRGI0100 Section                     */
 /******************************************************************/

 typedef _Packed struct Qcst_LRGI0100{
     char Node_ID[8];
     int  Current_Node_Role;
     int  Membership_Status;
     int  Preferred_Node_Role;
} Qcst_LRGI0100_t;

enum QcstCrgActionCode {
     QcstCrgAcInitialize        = 1,
     QcstCrgAcStart             = 2,
     QcstCrgAcRestart           = 3,
     QcstCrgAcEnd               = 4,
     QcstCrgAcDelete 