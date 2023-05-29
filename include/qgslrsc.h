 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGSLRSC                                    */
 /*                                                                */
 /* Descriptive Name: List Spooled File AFPDS Resources            */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Spooled File AFPDS Resources             */
 /*              - Generates a list of the AFPDS resources found   */
 /*                in the specified spooled file and returns the   */
 /*                list in a user space.                           */
 /*                                                                */
 /* Header Files Included: H/QGSLRSC                               */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qgs_LRSC0100_t                                 */
 /*                 Qgs_LRSC0200_t                                 */
 /*                 Qgs_LRSC0300_t                                 */
 /*                 Qgs_LRSC_I_t                                   */
 /*                 Qgs_LRSC_H_t                                   */
 /*                                                                */
 /* Function Prototype List: QGSLRSC                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D91710.1     3D70  941202 RJOHNSON: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QGSLRSC_h
#define QGSLRSC_h

  #ifdef __ILEC400__
       #pragma linkage (QGSLRSC,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QGSLRSC                                   */
/********************************************************************/

void QGSLRSC(void *,                /* User space qualified name.    */
             char *,                /* Format of information returned*/
             void *,                /* Qualified job name.           */
             char *,                /* Internal job identifier.      */
             char *,                /* Internal spooled file id.     */
             char *,                /* Spooled file name             */
             int,                   /* Spooled file number           */
             char *,                /* Resource name                 */
             char *,                /* Resource object type          */
             char *,                /* Pel Density                   */
             void *);               /* Error code                    */

/********************************************************************/
/*  Structure for Input parameter section.                          */
/********************************************************************/

typedef _Packed struct Qgs_LRSC_I {
        char User_Space_Name[10];
        char User_Space_Library[10];
        char Format[8];
        char Qualified_Job_Name[26];
        char Internal_Job_Identifier[16];
        char Internal_Spool_Identifier[16];
        char Spool_File_Name[10];
        int  Spool_File_Number;
        char Resource_Name[10];
        char Resource_Object_Type[10];
        char Pel_Density;
      } Qgs_LRSC_I_t;

/********************************************************************/
/*  Structure for Header Section.                                   */
/********************************************************************/

typedef _Packed struct Qgs_LRSC_H {
        char User_Space_Name[10];
        char User_Space_Library[10];
        char Qualified_Job_Name[26];
        char Spool_File_Name[10];
        int  Spool_File_Number;
      } Qgs_LRSC_H_t;

/********************************************************************/
/*  Structure for LRSC0100.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSC0100 {
        char Resource_Name[10];
        char Resource_Library[10];
        char Resource_Object_Type[10];
        char Where_Resource_Referenced;
        char Resource_Availability;
        char Source_Object[10];
        char Source_Object_Library[10];
        char Source_Object_Type[10];
      } Qgs_LRSC0100_t;

/********************************************************************/
/*  Structure for LRSC0200.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSC0200 {
        char Resource_Library[10];
      } Qgs_LRSC0200_t;

/********************************************************************/
/*  Structure for LRSC0300.                                         */
/********************************************************************/

typedef _Packed struct Qgs_LRSC0300 {
        char Resource_Name[10];
        char Resource_Library[10];
        char Resource_Object_Type[10];
        char Reserved;
        char Resource_Availability;
      } Qgs_LRSC0300_t;
#endif
