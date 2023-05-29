 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QCAPCMD                                    */
 /*                                                                */
 /* Descriptive Name: Process Commands API.                        */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Process Commands API is used to perform       */
 /*              command analyzer processing on command strings.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qca_PCMD_CPOP0100_t                            */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D28620       3D10  940403 SHAWNB:   New Include           */
 /* $A1  P3976955     3P10  941215 MOREY:    Change "C" to "OS"    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QCAPCMD_h
  #define QCAPCMD_h

  /*****************************************************************/
  /* Prototype for calling Command Analyzer API QCAPCMD            */
  /*****************************************************************/
  #ifdef  __ILEC400__
     #pragma linkage(QCAPCMD,OS,nowiden)
  #else
     extern "OS"
  #endif
 void QCAPCMD (void *,          /* Source command string          */
               int,             /* Length of source command string*/
               void *,          /* Options control block          */
               int,             /* Options control block length   */
               char *,          /* Options control block format   */
               void *,          /* Changed command string         */
               int,             /* Length available for changed   */
                                /* command string                 */
               int *,           /* Length changed for changed     */
                                /* command string                 */
               void *);         /* Error code                     */

 /******************************************************************/
 /* Type definition for the CPOP0100                               */
 /******************************************************************/
 typedef _Packed struct Qca_PCMD_CPOP0100
    {
       int  Command_Process_Type;
       char DBCS_Data_Handling;
       char Prompter_Action;
       char Command_String_Syntax;
       char Message_Key[4];
       char Reserved[9];
    }  Qca_PCMD_CPOP0100_t;


 #endif
