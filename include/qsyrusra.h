 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRUSRA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve User Authority to Object.           */
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
 /* Description: The Retrieve User Authority to Object API returns */
 /*              a specific user's authority for an object to the  */
 /*              caller.                                           */
 /*                                                                */
 /* Header Files Included: H/QSYRUSRA                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_RUSRA_USRA0100_t                           */
 /*                                                                */
 /* Function Prototype List: QSYRUSRA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931222 XZY0432:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYRUSRA_h
 #define QSYRUSRA_h

 /******************************************************************/
 /* Prototype for calling Security API QSYRUSRA                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRUSRA,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRUSRA (void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                char *,          /* Format name                    */
                char *,          /* User ID                        */
                void *,          /* Qualified object name          */
                char *,          /* Object type                    */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Record structure for USRA0100 format                           */
 /******************************************************************/
 typedef struct Qsy_RUSRA_USRA0100
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       char  Object_Auth[10];
       char  Autl_Management;
       char  Object_Operational;
       char  Object_Management;
       char  Object_Existence;
       char  Data_Read;
       char  Data_Add;
       char  Data_Update;
       char  Data_Delete;
       char  Autl_Name[10];
       char  Auth_Source[2];
       char  Some_Adopted;
       char  Aobject_Auth[10];
       char  Aautl_Management;
       char  Aobject_Operational;
       char  Aobject_Management;
       char  Aobject_Existence;
       char  Adata_Read;
       char  Adata_Add;
       char  Adata_Update;
       char  Adata_Delete;
       char  Adata_Execute;
       char  Reserved1[10];
       char  Aobject_Alter;
       char  Aobject_Reference;
       char  Reserved2[10];
       char  Data_Execute;
       char  Reserved3[10];
       char  Object_Alter;
       char  Object_Reference;
    } Qsy_RUSRA_USRA0100_t;

 #endif
