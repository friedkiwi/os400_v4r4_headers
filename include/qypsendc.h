 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYPSENDC                                   */
 /*                                                                */
 /* Descriptive Name: End Collector API                            */
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
 /* Function Prototype List: QYPSENDC.                             */
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
#ifndef  QYPSENDC_h
#define  QYPSENDC_h

/*******************************************************************/
/*  Prototype for calling End Collector API (QYPSENDC).            */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QYPSENDC,OS,nowiden)
#elif  __AIXxiCC__
     #pragma linkage (QYPSENDC,OS,nowiden)
     extern "OS"
#else
     extern "OS"
#endif

void QYPSENDC(char *,            /* Collector name                 */
              void *);           /* Error code                     */

#endif
