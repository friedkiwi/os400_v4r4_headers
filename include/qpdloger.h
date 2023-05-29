 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPDLOGER                                   */
 /*                                                                */
 /* Descriptive Name: Log Software Error.                          */
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
 /* Description: The Log Software Error API allows a program to    */
 /*              report a software problem to the local AS/400     */
 /*              system and provide the data needed to resolve     */
 /*              the problem.                                      */
 /*                                                                */
 /* Header Files Included: H/QPDLOGER                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QPDLOGER                              */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 THANSON:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPDLOGER_h
#define QPDLOGER_h

/********************************************************************/
/*  Prototype for calling Log Software Error API QPDLOGER           */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QPDLOGER, OS,nowiden)
#else
  extern "OS"
#endif
void QPDLOGER (char *,            /* Suspected program name         */
               void *,            /* Detection ID                   */
               char *,            /* Message reference key          */
               int,               /* Point of failure               */
               char *,            /* Print job log                  */
               void *,            /* Data items                     */
               void *,            /* Data item offset and length    */
               int,               /* Number of data items           */
               void *,            /* Object name                    */
               int,               /* Number of object names         */
               void *,            /* Error code                     */
               ...);              /* Optional Parameter:
                                     ILE module name                */

#endif
