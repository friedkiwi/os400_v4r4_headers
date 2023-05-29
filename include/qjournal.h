#ifndef _QJOURNAL_H
#define _QJOURNAL_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QJOURNAL                                      */
/*                                                                   */
/* Descriptive Name: Journal API's                                   */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1999,                           */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Include header file containing the structure         */
/*              definitions and prototypes for the Journal           */
/*              API's for the QJOURNAL service program.              */
/*                                                                   */
/* Header Files Included:                                            */
/*                        H/POINTER                                  */
/*                        H/LIMITS                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:                                                   */
/*                  Qjo_ADRJ0100_t                 | Add Remote      */
/*                                                 | Journal API     */
/*                                                                   */
/*                                                                   */
/*                  Qjo_CJST0100_Req_t             | Change Journal  */
/*                  Qjo_CJST0200_Req_t             | State API       */
/*                  Qjo_CJST0300_Req_t             |                 */
/*                  Qjo_CJST0300_Rcv_t             |                 */
/*                  Qjo_CJST0400_Req_t             |                 */
/*                  Qjo_CJST0500_Req_t             |                 */
/*                                                                   */
/*                                                                   */
/*                  Qjo_RMRJ0100_t                 | Remove Remote   */
/*                                                 | Journal API     */
/*                                                                   */
/*                                                                   */
/*                  Qjo_JN_Jrn_Info_Retrieve_t     | Retrieve Journal*/
/*                  Qjo_JN_Fmt_Var_Len_Rcrd_t      | Information API */
/*                  Qjo_JN_Data_Key_1_t            |                 */
/*                  Qjo_JN_Data_Key_2_t            |                 */
/*                  Qjo_JN_Data_Key_3_t            |                 */
/*                  Qjo_RJRN0100_t                 |                 */
/*                  Qjo_JN_Repeating_Key_Fields_t  |                 */
/*                  Qjo_JN_Key_1_Output_Section_t  |                 */
/*                  Qjo_JN_Repeating_Key_1_Output_t|                 */
/*                  Qjo_JN_Key_2_Output_Section_t  |                 */
/*                  Qjo_JN_Repeating_Key_2_Output_t|                 */
/*                  Qjo_JN_Key_3_Output_Section_t  |                 */
/*                  Qjo_JN_Repeating_Key_3_Output_t|                 */
/*                                                                   */
/*                                                                   */
/*                  Qjo_RRCV0100_t                 | Retrieve Journal*/
/*                                                 | Receiver        */
/*                                                 | Information API */
/*                                                                   */
/*                  Qjo_JE_Fmt_Var_Len_Rcrd_t      | Retrieve Journal*/
/*                  Qjo_JE_Jrn_Info_Retrieve_t     | Entries API     */
/*                  Qjo_JE_Rcv_Range_Fmt_t         |                 */
/*                  Qjo_JE_Data_Key_1_t            |                 */
/*                  Qjo_JE_Data_Key_2_t            |                 */
/*                  Qjo_JE_Data_Key_3_t            |                 */
/*                  Qjo_JE_Data_Key_4_t            |                 */
/*                  Qjo_JE_Data_Key_5_t            |                 */
/*                  Qjo_JE_Data_Key_6_t            |                 */
/*                  Qjo_JE_Jrn_Codes_t             |                 */
/*                  Qjo_JE_Data_Key_7_t            |                 */
/*                  Qjo_JE_Data_Key_8_t            |                 */
/*                  Qjo_JE_Data_Key_9_t            |                 */
/*                  Qjo_JE_Data_Key_10_t           |                 */
/*                  Qjo_JE_Data_Key_11_t           |                 */
/*                  Qjo_JE_Data_Key_12_t           |                 */
/*                  Qjo_JE_Data_Key_13_t           |                 */
/*                  Qjo_JE_Data_Key_14_t           |                 */
/*                  Qjo_JE_Data_Key_15_t           |                 */
/*                  Qjo_JE_File_Members_t          |                 */
/*                  Qjo_JE_Data_Key_16_t           |                 */
/*                  Qjo_RJNE0100_Hdr_t             |                 */
/*                  Qjo_RJNE0100_JE_Hdr_t          |                 */
/*                  Qjo_RJNE0100_JE_NVI_Varlen_t   |                 */
/*                  Qjo_RJNE0100_JE_NVI_Fld_Len_t  |                 */
/*                  Qjo_RJNE0100_JE_ESD_t          |                 */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*                          QjoAddRemoteJournal                      */
/*                          QjoChangeJournalState                    */
/*                          QjoRemoveRemoteJournal                   */
/*                          QjoRetrieveJournalInformation            */
/*                          QjoRtvJrnReceiverInformation             */
/*                          QjoRetrieveJournalEntries                */
/*                          QjoDeletePointerHandle                   */
/*                                                                   */
/*                                                                   */
/* Restrictions:                                                     */
/*    WARNING: Variables that are declared in this include must be   */
/*             no longer than 30 characters in length!!!!!!!!!!!!!   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------   ------------------------ */
/* $A0= D9485900     4D20  970310 VTT       New Include for V4R2     */
/* $01= P3650574     4D20  970728 HVRDFC    D9485900 added changes   */
/* $02= P3650574     4D20  970731 HVRJT     Modify var names, must   */
/*                                          be <= 30 chars in length */
/* $A1= D9714800     4D40  980611 KTH       Add Header Information   */
/*                                          for Retrieve Journal     */
/*                                          Entries and Delete       */
/*                                          Pointer Handle API's     */
/* $A2= D9714800     4D40  980921 KTH       Moved various structure  */
/*                             