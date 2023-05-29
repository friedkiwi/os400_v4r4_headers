 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZLSOLST                                   */
 /*                                                                */
 /* Descriptive Name: List NetServer Information Wrapper           */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the QZLSOLST API.         */
 /*                                                                */
 /* Header Files Included: H/QZLSOLST                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSOLST                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 BRIDGET   New Include           */
 /* $A1= P3678573     4D40  981031 BRIDGET   Add ellipsis for      */
 /*                                          optional parameters.  */
 /* $A2= P3685025     4D40  981209 BAZEY     Add comma after the   */
 /*                                          ErrorCode parameter   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZLSOLST_h
#define QZLSOLST_h

#include <QZLS.H>

/********************************************************************/
/*                     Definitions                                  */
/********************************************************************/
#define START_TIME_LENGTH 13

/********************************************************************/
/*                     API External Structures                      */
/********************************************************************/
typedef _Packed struct Qzls_List_Info {
  int totalRecords;
  int recordsReturned;
  int recordLength;
  int lengthOfInfoReturned;
  char informationComplete;
  char creationDateTime[START_TIME_LENGTH];
  char reserved[34];
} Qzls_List_Info_t;

/*******************************************************************/
/* Prototype for calling QZLSOLST API.                             */
/*******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QZLSOLST,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QZLSOLST(char *ReceiverVar,
               int  *ReceiverVarLength,
               char *ListInformation,
               char *Format,
               char *Qualifier,
               char *ErrorCode,
               ...);

#endif
