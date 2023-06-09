#ifndef __ILEC400__
  extern "C" {
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLGCASE                                    */
 /*                                                                */
 /* Descriptive Name: Convert Case API                             */
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
 /* Description: The Convert Case API provides a case conversion   */
 /*              function that can be directly called by any       */
 /*              application program.                              */
 /*                                                                */
 /* Macros List: qlg.h                                             */
 /*                                                                */
 /* Structure List: None. (See QLG header file)                    */
 /*                                                                */
 /* Function Prototype List: QlgConvertCase                        */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2827200     3D10  940227 ROCH    : New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef    QLGCASE_h
  #define  QLGCASE_h


#ifndef    QLG_h
  #include <qlg.h>
#endif

/********************************************************************/
/* Prototype                                                        */
/********************************************************************/

#ifdef __ILEC400__
  #pragma argument(QlgConvertCase,OS,nowiden)
  void QlgConvertCase(char *,           /* Request control block    */
                      char *,           /* Input data               */
                      char *,           /* Output data              */
                      long,             /* Length of data           */
                      char *);          /* Error code               */
#else
  void QlgConvertCase(char *,           /* Request control block    */
                      char *,           /* Input data               */
                      char *,           /* Output data              */
                      long *,           /* Length of data           */
                      char *);          /* Error code               */

#endif

#endif      /* #ifndef QLGCASE_h */

#ifndef __ILEC400__
 }
#endif
