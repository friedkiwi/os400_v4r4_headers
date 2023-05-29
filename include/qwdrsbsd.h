 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWDRSBSD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Subsystem Information API           */
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
 /* Description: The Retrieve Subsystem Information API retrieves  */
 /*              information about a specific subsystem.           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwd_Rsbsd_Pool_t                              */
 /*                  Qwd_SBSI0100_t                                */
 /*                                                                */
 /* Function Prototype List: QWDRSBSD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWDRSBSD_h
 #define QWDRSBSD_h

 /******************************************************************/
 /*  Prototype for QWDRSBSD API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWDRSBSD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWDRSBSD(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Subsystem and library name     */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the SBSI0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qwd_Rsbsd_Pool
    {
       int  Pool_Id;
       char Pool_Name[10];
       char Reserved[6];
       int  Pool_Size;
       int  Pool_Activity_Level;
    } Qwd_Rsbsd_Pool_t;

 typedef _Packed struct Qwd_SBSI0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Subsystem_Desc_Name[10];
       char Subsystem_Desc_Lib_Name[10];
       char Subsystem_Status[10];
       char Sign_On_Device_File_Name[10];
       char Sign_On_Device_File_Lib_Name[10];
       char Secondary_Lang_Lib[10];
       int  Maximum_Active_Jobs;
       int  Current_Active_Jobs;
       int  Number_Storage_Pools;
     /*Qwd_Rsbsd_Pool_t Pools[];*//* Varying length                */
    } Qwd_SBSI0100_t;

 #endif
