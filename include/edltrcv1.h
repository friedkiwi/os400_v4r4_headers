 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: EDLTRCV1                                     */
 /*                                                                */
 /* Descriptive Name: Delete Journal Receiver Exit Program         */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1997                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Delete Journal Receiver exit program allows   */
 /*              code to determine whether a journal receiver can  */
 /*              be deleted or not.  See exit point                */
 /*              QIBM_QJO_DLT_JRNRCV.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qjo_Dlt_JrnRcv_Info_DRCV0100_t                 */
 /*                 Qjo_Dlt_JrnRcv_Status_t                        */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9485900     4D20  970311 HVRJT     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EDLTRCV1_h
 #define EDLTRCV1_h

 /******************************************************************/
 /* Type Definition for the Delete Journal Receiver Exit Program   */
 /*  information for format DRCV0100                               */
 /******************************************************************/
 typedef _Packed struct Qjo_Dlt_JrnRcv_Info_DRCV0100
    {
       long int Exitinfo_Length;
       char Exitpt_Name[20];
       char Exitpt_Fmt[8];
       char JrnRcv_Name[10];
       char JrnRcv_Lib[10];
       char Jrn_Name[10];
       char Jrn_Lib[10];
       char Call_Sys_Job;
       char Call_IPL;
       char Proc_End;
       char Jrn_Type;
       char Rmt_Jrn_Type;
       char Save_Status;
       char Partial_Status;
       char Detach_Timestamp[13];
    } Qjo_Dlt_JrnRcv_Info_DRCV0100_t;

 /******************************************************************/
 /* Type Definition for the Delete Journal Receiver Exit Program   */
 /*  returned Status Information                                   */
 /******************************************************************/
 typedef _Packed struct Qjo_Dlt_JrnRcv_Status
    {
       long int Statusinfo_Length;
       char Dlt_Status;
    } Qjo_Dlt_JrnRcv_Status_t;

#endif
