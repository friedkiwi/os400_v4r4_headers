/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSRSAVO                                       */
/*                                                                   */
/* Descriptive Name: Save Object List                                */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Save Object List API saves a list of objects     */
/*              specified by the user.                               */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qsr_Record_t                                      */
/*                 Qsr_User_Space_t                                  */
/*                                                                   */
/* Function Prototype List: QSRSAVO                                  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940406 ROCH     :New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSRSAVO_h
 #define QSRSAVO_h


 /******************************************************************/
 /*  Prototype for calling QSRSAVO                                 */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QSRSAVO,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QSRSAVO(void *,                /* Qualified user space name  */
              void *);               /* Error code                 */

 /******************************************************************/
 /* Type Definition for the User Space Format.                     */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qsr_Record {
       long Record_Length;
       int Key_Number;
       long Data_Length;
     /*char Key_Data[];*/                 /* Varying length field  */
 } Qsr_Record_t;

 typedef _Packed struct Qsr_User_Space {
       long Number_Records;
     /*Qsr_Record_t Array[];*/            /* Varying length field  */
 } Qsr_User_Space_t;


#endif
