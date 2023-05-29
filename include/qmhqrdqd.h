 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHQRDQD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Data Queue Description API.         */
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
 /* Description: The Retrieve Data Queue Description API retrieves */
 /*              the description and attributes of a data queue.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Qrdqd_RDQD0100_t                           */
 /*                 Qmh_Qrdqd_RDQD0200_t                           */
 /*                                                                */
 /* Function Prototype List: QMHQRDQD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 DPOHLSON: New Include           */
 /* $A1= D9719100     4D40  98xxxx LIGGETT:  DDM enhancements      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHQRDQD_h
 #define QMHQRDQD_h

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHQRDQD             */
 /******************************************************************/

 #ifdef __ILEC400__
      #pragma linkage (QMHQRDQD,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QMHQRDQD (void *,          /* Data queue information         */
                int,             /* Size of data queue information */
                char *,          /* Format of data queue info      */
                void *);         /* Data queue name and library    */

 /******************************************************************/
 /* Type Definition for the RDQD0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qmh_Qrdqd_RDQD0100
    {
       int  Bytes_Return;
       int  Bytes_Available;
       int  Message_Length;
       int  Key_Length;
       char Sequence[1];
       char Include_Sender_Id[1];
       char Force_Indicators[1];
       char Text[50];
       char Type[1];
       char Reserved[2];
       int  Number_Messages;
       int  Max_Number_Messages;
       char Data_Queue_Name[10];
       char Data_Queue_Library[10];
    } Qmh_Qrdqd_RDQD0100_t;
 /******************************************************************/
 /* Type Definition for the RDQD0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qmh_Qrdqd_RDQD0200
    {
       int  Bytes_Return;
       int  Bytes_Available;
       char APPC_Device[10];
       char Mode[8];
       char Remote_Location[8];
       char Local_Location[8];
       char Remote_Network_ID[8];
       char Remote_Data_Queue_Name[10];
       char Remote_Data_Queue_Library[10];
       char Data_Queue_Name[10];
       char Data_Queue_Library[10];
    } Qmh_Qrdqd_RDQD0200_t;

 #endif
