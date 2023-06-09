 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWVOLAGP                                   */
 /*                                                                */
 /* Descriptive Name: Open List of activation groups               */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1996,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This include is a CUE.                       */
 /*                   This include provides an interface           */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create    */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /******************************************************************/
 /*                                                                */
 /* Description: The QWVOLAGP API generates a list of activation   */
 /*              group attributes.                                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Function Prototype List: QWVOLAGP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95197       4D20  970603 MTN       New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWVOLAGP_h
 #define QWVOLAGP_h

 /******************************************************************/
 /* Prototype for call to QWVOLAGP API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWVOLAGP,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QWVOLAGP (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   void *,     /* List Information                  */
                   int   ,     /* Number of records to return       */
                   char *,     /* Format name                       */
                   char *,     /* Qualified job name                */
                   char *,     /* Internal job identifier           */
                   void *      /* Error code                        */
                  );

 /******************************************************************/
 /* Type Definition for the List Information Format                */
 /******************************************************************/
 typedef _Packed struct Qwv_Olagp_ListInfo
   {
    int  Total_Records;
    int  Records_Retd;
    char Request_Handle[4];
    int  Record_Length;
    char Info_Complete[1];
    char Date_Time[13];
    char List_Status[1];
    char Reserved1[1];
    int  Info_Length;
    int  First_Record;
    char Reserved2[40];
    } Qwv_Olagp_ListInfo_t;

 /*****************************************************************/
 /* Type Definition for the Receiver Variable                     */
 /*   NOTE:  This definition the RAGA0100 format.                 */
 /*****************************************************************/
 typedef _Packed struct Qwv_Olagp_Raga0100
 {
    char  AGP_Name[10];
    char  reserved1[6];
    int   AGP_Number;
    int   Num_of_Activations;
    int   Num_of_Heaps;
    int   Static_Size;
    int   Heap_Size;
    char  Root_Program_Name[10];
    char  Root_Program_Lib[10];
    char  Root_Program_Type[1];
    char  State[1];
    char  Shared[1];
    char  In_use[1];
    char  Reserved[4];
  } Qwv_Olagp_Raga0100_t;

 #endif
