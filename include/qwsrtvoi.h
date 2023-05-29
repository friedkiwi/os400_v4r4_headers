 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWSRTVOI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Last Output Information             */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve Last Output Information API gives    */
 /*              the caller information on the last attempted      */
 /*              output to the requester device                    */
 /*              for the specified job.                            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qws_RTVOI_OINF0100_t                           */
 /*                                                                */
 /* Function Prototype List: QWSRTVOI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D91728       3D60  941201 SHAWNB:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QWSRTVOI_h
 #define QWSRTVOI_h

 /******************************************************************/
 /* Prototype for calling WorkStation API QWSRTVOI                 */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWSRTVOI,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWSRTVOI (void *,          /* Receiver variable              */
                int   ,          /* Length of receiver variable    */
                char *,          /* Format name                    */
                void *,          /* Qualified job name             */
                void *,          /* Internal job identifier        */
                void *);         /* Error code                     */

 /******************************************************************/
 /* User Space Input Section                                       */
 /******************************************************************/
 typedef _Packed struct Qws_RTVOI_OINF0100_t
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Display_File_Name[10];
       char Display_File_Library[10];
       char Display_File_Record_Format[10];
    }  Qws_RTVOI_OINF0100_t;


 #endif
