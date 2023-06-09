 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYPSCYCC                                   */
 /*                                                                */
 /* Descriptive Name: Cycle Collector API                          */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Describe your function here.                      */
 /*                                                                */
 /* Header Files Included: H/OPM-API-name or Service-pgm-name      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QYPSCYCC.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D            4D40  980901 ROCH:     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  QYPSCYCC_h
#define  QYPSCYCC_h

/*******************************************************************/
/*  Prototype for calling Cycle Collector API (QYPSCYCC).          */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QYPSCYCC,OS,nowiden)
#elif  __AIXxiCC__
     #pragma linkage (QYPSCYCC,OS,nowiden)
     extern "OS"
#else
     extern "OS"
#endif

void QYPSCYCC(char *,            /* Collector name                 */
              void *);           /* Error code                     */

#endif
