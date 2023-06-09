 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYPSRSCA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve System Collector Attributes API     */
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
 /* Function Prototype List: QYPSRSCA.                             */
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
#ifndef  QYPSRSCA_h
#define  QYPSRSCA_h

/*******************************************************************/
/*  Prototype for calling Retrieve System Collector Attributes API */
/*  (QYPSRSCA).                                                    */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QYPSRSCA,OS,nowiden)
#elif  __AIXxiCC__
     #pragma linkage (QYPSRSCA,OS,nowiden)
     extern "OS"
#else
     extern "OS"
#endif

void QYPSRSCA(char *,            /* Collector name                 */
              int,               /* Default collection interval    */
              char *,            /* Library                        */
              int,               /* Retention period               */
              int,               /* Cycle time                     */
              int,               /* Cycle interval                 */
              int,               /* Companion user job             */
              char *,            /* Default collector definition   */
              char *,            /* Current collector definition   */
              void *);           /* Error code                     */

#endif
