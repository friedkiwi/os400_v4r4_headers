 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EUIILEX                                    */
 /*                                                                */
 /* Descriptive Name: Incomplete List Exit Program                 */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the UIM call parms for    */
 /*              an EXIT program for incomplete list processing    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qui_ILX_t                                      */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940412 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EUIILEX_h
 #define EUIILEX_h

 /******************************************************************/
 /* Parm structure for a UIM EXIT program for a incomplete list    */
 /* processing                                                     */
 /******************************************************************/
 typedef _Packed struct Qui_ILX
    {
       int StrucLevel;
       char Reserv1[8];
       int CallType;
       char ApplHandle[8];
       char Reserv2[10];
       char ListName[10];
       int  Direction;
       int  Entries;
    } Qui_ILX_t;

 #endif
