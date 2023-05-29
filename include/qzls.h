 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZLS                                       */
 /*                                                                */
 /* Descriptive Name: General NetServer API Header File.           */
 /* This is a generic default base file for Create Part of  IDSS   */
 /* part development.  There is also the capability to have a      */
 /* default base that is specific for a given type.  For example   */
 /* if you want a default base for all the parts created with      */
 /* the type PL8 then you need a file with the name $TEMPLAT PL8   */
 /* that contains the default file.                                */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the QZLS APIs.            */
 /*                                                                */
 /* Header Files Included: H/QZLS                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLS                                  */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97125       4D40  970805 BRIDGET   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZLS_h
#define QZLS_h

/********************************************************************/
/*                     API External Structures                      */
/********************************************************************/

typedef _Packed struct Qzls_Extension_Table_Entry {
  int  extensionLen;
  char extension[46];
} Qzls_Extension_Table_Entry_t;

#endif

