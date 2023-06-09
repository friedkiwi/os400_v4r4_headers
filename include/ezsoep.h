/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/EZSOEP                                */
/*                                                                   */
/* Descriptive Name       :  Socket SIGNON server                    */
/*                           Exit Program Structure                  */
/*                                                                   */
/* 5716-SS1  (C) Copyright IBM Corp. 1994,1995                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: This include defines the parameter structures for    */
/*              the exit point defined for the socket signon         */
/*              server.                                              */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qzso_Signon_Format_t                              */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= P3978167     3D60  950201 DMK:      New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef EZSOEP_h
 #define EZSOEP_h

  /* Application name constants */
 #define Signon_Server_ID    "*SIGNON   "

  /* Format name constants */
 #define SignonSrv_Format    "ZSOY0100"

  /* Function Id constants */
 #define Retrieve_Signon      0x7004    /* Retrieve signon info req */
 #define Change_Password      0x7005    /* Change password request  */


 /*******************************************************************/
 /* Typedef for signon server exit program structure                */
 /*******************************************************************/

 typedef _Packed struct Qzso_Signon_Format_t
  {
   char UsrPrf[10];                /* User profile                  */
   char AppName[10];               /* Application name              */
   char FmtName[8];                /* Format name                   */
   int Function;                   /* Requested function            */
  }Qzso_Signon_Format_t;

#endif
