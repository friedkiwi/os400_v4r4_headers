 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYLOBJP                                   */
 /*                                                                */
 /* Descriptive Name: List Objects That Adopt Owner Authority.     */
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
 /* Description: The List Objects That Adopt Owner Authority API   */
 /*              puts a list of objects that adopt an object       */
 /*              owner's authority into a user space.              */
 /*                                                                */
 /* Header Files Included: H/QSY                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_OBJP0100_List_T                            */
 /*                 Qsy_OBJP0200_List_T                            */
 /*                 Qsy_OBJP_Header_T                              */
 /*                 Qsy_OBJP_Input_T                               */
 /*                                                                */
 /* Function Prototype List: QSYLOBJP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931222 XZY0432:  New Include           */
 /* $01= P3985077     3D60  950317 SUDARMAN: Change header file    */
 /*                                          declaration           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYLOBJP_h
 #define QSYLOBJP_h

  #include <qsy.h>                                          /* @01C*/

 /******************************************************************/
 /* Prototype for calling Security API QSYLOBJP                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYLOBJP,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYLOBJP (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* User name                      */
                char *,          /* Object type                    */
                void *,          /* Continuation handle            */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Input Parm structure for QSYLOBJP                              */
 /******************************************************************/
 typedef struct Qsy_OBJP_Input
    {
       Qsy_Qual_Name_T Object;
       char  Format[8];
       char  User_Name[10];
       char  Object_Type[10];
       char  Continuation_Handle[20];
    } Qsy_OBJP_Input_T;

 /******************************************************************/
 /* Header structure for QSYLOBJP                                  */
 /******************************************************************/
 typedef struct Qsy_OBJP_Header
    {
       char  User_Name[10];
       char  Continue_Value[20];
    } Qsy_OBJP_Header_T;

 /******************************************************************/
 /* Record structure for OBJP0100 format                           */
 /******************************************************************/
 typedef struct Qsy_OBJP0100_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Object_In_Use;
    } Qsy_OBJP0100_List_T;

 /******************************************************************/
 /* Record structure for OBJP0200 format                           */
 /******************************************************************/
 typedef struct Qsy_OBJP0200_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Object_In_Use;
       char  Object_Attribute[10];
       char  Object_Text[50];
    } Qsy_OBJP0200_List_T;

 #endif
