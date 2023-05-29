 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZLSCHSI                                   */
 /*                                                                */
 /* Descriptive Name: Change NetServer Information                 */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the QZLSCHSI API.         */
 /*                                                                */
 /* Header Files Included: H/QZLSCHSI                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSCHSI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 BRIDGET   New Include           */
 /* $B0= D95445       4D30  970807 V2KEA155  New Structure Member  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZLSCHSI_h
#define QZLSCHSI_h

/********************************************************************/
/*                     Definitions                                  */
/********************************************************************/
#define WINS_ADDRESS_LENGTH 15
#define SCOPE_LENGTH 224

/********************************************************************/
/*                     API External Structures                      */
/********************************************************************/
typedef _Packed struct Qzls_Format_ZLSS0100 {
  int codePage;
  int idleTimeOut;
  int oplockTimeOut;
  int browseInterval;
  char WINSPrimary[WINS_ADDRESS_LENGTH];
  char WINSSecondary[WINS_ADDRESS_LENGTH];
  char scope[SCOPE_LENGTH];
  char reserved[2];
  int domainLogonSupport; //@B0A
} Qzls_Format_ZLSS0100_t;

/*******************************************************************/
/* Prototype for calling QZLSCHSI API.                             */
/*******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QZLSCHSI,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QZLSCHSI(char *RequestVar,
               int  *RequestVarLen,
               char *Format,
               char *ErrorCode);

#endif
