 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUS                                        */
 /*                                                                */
 /* Descriptive Name: Common structures for component US APIs.     */
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
 /* Description: Contains the: - Generic Variable Length format    */
 /*                              headers for the user space.       */
 /*                            - Generic Structure for user        */
 /*                              indexes.                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_Vlen_Rec_3_t                               */
 /*                 Qus_Vlen_Rec_4_t                               */
 /*                 Qus_Entry_t                                    */
 /*                 Qus_Entry_Len_Offset_t                         */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940327 LUPA:     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QUS_h
#define QUS_h

 /******************************************************************/
 /* Type Definition for the 3 Field Variable Length Record.        */
 /******************************************************************/
 typedef _Packed struct Qus_Vlen_Rec_3 {
      int  Key;
      int  Length_Vlen_Record;
    /*char Data[];*/         /* Varying length                     */
 } Qus_Vlen_Rec_3_t;

 /******************************************************************/
 /* Type Definition for the 4 Field Variable Length Record.        */
 /******************************************************************/
 typedef _Packed struct Qus_Vlen_Rec_4 {
      int  Length_Vlen_Record;
      int  Control_Key;
      int  Length_Data;
    /*char Data[];*/         /* Varying length                     */
 } Qus_Vlen_Rec_4_t;

 /******************************************************************/
 /* Type Definitions for the Format for Entry Lengths and Entry    */
 /* Offsets.                                                       */
 /******************************************************************/
 typedef _Packed struct Qus_Entry {
      int  Entry_Length;
      int  Entry_Offset;
 } Qus_Entry_t;

 typedef _Packed struct Qus_Entry_Len_Offset {
      int  Bytes_Returned;
      int  Bytes_Available;
    /*Qus_Entry_t Entries[];*/  /* Varying length                  */
 } Qus_Entry_Len_Offset_t;

 /******************************************************************/
 /* Type Definition for the IDXE0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_IDXE0100 {
      int  Bytes_Returned;
      int  Bytes_Available;
    /*char Entries[];*/         /* Varying length                  */
 } Qus_IDXE0100_t;
#endif
