 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPSETWI                                   */
 /*                                                                */
 /* Descriptive Name: Set Writer Status                            */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Set Writer Status API:                        */
 /*              - Is used by a driver exit program to update      */
 /*                information about a spooled file that a writer  */
 /*                is processing.  This information is used on     */
 /*                certain spooled file displays.  For example,    */
 /*                the Work with Spooled File (WRKSPLF) command    */
 /*                will display the correct status, current page   */
 /*                and total number of copies.                     */
 /*                                                                */
 /* Header Files Included: H/QSPSETWI                              */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qsp_SETW0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QSPSETWI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710       3D60  950110 RJOHNSON: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSPSETWI_h
#define QSPSETWI_h

  #ifdef __ILEC400__
       #pragma linkage (QSPSETWI,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QSPSETWI                                  */
/********************************************************************/

void QSPSETWI(void *,               /* Status changes.               */
              int,                  /* Length of status changes.     */
              char *,               /* Format name                   */
              char *,               /* Writer handle.                */
              char *,               /* Spooled file handle.          */
              void *);              /* Error code                    */

/********************************************************************/
/*  Structure for SETW0100 format                                   */
/********************************************************************/

typedef _Packed struct Qsp_SETW0100
{
     char Change_Status;
     char Change_Current_Page;
     char Change_Convert_Page;
     char Change_Copies;
     char Change_Accounting_Pages;
     char Change_Accounting_Lines;
     char Change_Accounting_Bytes;
     char Reserved[5];
     int  Status;
     int  Current_Page;
     int  Convert_Page;
     int  Copies;
     int  Number_Of_Pages_For_Accounting;
     int  Number_Of_Lines_For_Accounting;
     _Decimal(15,0) Number_Of_Bytes_For_Accounting;
} Qsp_SETW0100_t;
#endif
