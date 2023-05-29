 /*** START HEADER FILE SPECIFICATIONS *************************/
 /*                                                            */
 /* Header File Name: H/QUSRSPLA                               */
 /*                                                            */
 /* Descriptive Name: Retrieve spool file attributes.          */
 /*                                                            */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1998                */
 /* All rights reserved.                                       */
 /* US Government Users Restricted Rights -                    */
 /* Use, duplication or disclosure restricted                  */
 /* by GSA ADP Schedule Contract with IBM Corp.                */
 /*                                                            */
 /* Licensed Materials-Property of IBM                         */
 /*                                                            */
 /*                                                            */
 /* Description: The Retrieve Spooled File Attributes APi      */
 /*              returns specific information about a spooled  */
 /*              file into a receiver variable.                */
 /*                                                            */
 /* Header Files Included: h/decimal                           */
 /*                                                            */
 /* Macros List: None.                                         */
 /*                                                            */
 /* Structure List: Qus_SPLA0100_t                             */
 /*                 Qus_SPLA0200_t                             */
 /*                 Qus_UDOPTENT_t                             */
 /*                 Qus_Usr_Lib_E_t                            */
 /*                 Qus_Edge_Stitch_Stpl_Pos_E_t               */
 /*                 Qus_Sadl_Stitch_Stpl_Off_E_t               */
 /*                                                            */
 /* Function Prototype List: QUSRSPLA                          */
 /*                                                            */
 /* Change Activity:                                           */
 /*                                                            */
 /* CFD List:                                                  */
 /*                                                            */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION*/
 /* ---- ------------ ----- ------ --------- ------------------*/
 /* $A0= D2862000     3D10  940213 LUPA:     New Include       */
 /* $A1= D9171000     3D60  950117 AGLENSKI: Print openness.   */
 /* $A3= D94979       4D20  970111 DWIGHT:   Decimal Format    */
 /*                                          support.          */
 /* $A4= D95075       4D20  970205 DWIGHT:   Support for Point */
 /*                                          Sizes on DBCS     */
 /*                                          Coded Font, Coded */
 /*                                          Font, and Font    */
 /*                                          Character Set     */
 /* $A5= D94929       4D30  970722 DWIGHT:   Support for Date  */
 /*                                          file was last     */
 /*                                          accessed, Spooled */
 /*                                          file size, and    */
 /*                                          ASP number.       */
 /* $A6= D95677       4D30  970722 DWIGHT:   Support for       */
 /*                                          IPDS pass through,*/
 /*                                          User resource     */
 /*                                          library list,     */
 /*                                          Corner stapling,  */
 /*                                          Edge stitching and*/
 /*                                          Font resolution.  */
 /* $A7= D95712       4D30  971105           Support ACIF      */
 /*                                          attributes        */
 /* $A8= D95966       4D40  980326 RJOHNSON: Add total number  */
 /*                                          of bytes of data  */
 /*                                          stream for spooled*/
 /*                                          file.             */
 /* $A9= D95864       4D40  980514           Support for Saddle*/
 /*                                          stitching and     */
 /*                                          Constant Back OVL */
 /*                                                            */
 /* End CFD List.                                              */
 /*                                                            */
 /*  Additional notes about the Change Activity                */
 /* End Change Activity.                                       */
 /*** END HEADER FILE SPECIFICATIONS ***************************/

#ifndef QUSRSPLA_h
 #define QUSRSPLA_h

 #include <decimal.h>
 /*****************************************************************/
 /*  Prototype for calling Spooled File and Print API QUSRSPLA    */
 /*****************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSRSPLA,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QUSRSPLA(void *,           /* Receiver variable            */
               int,              /* Length of receiver variable  */
               char *,           /* Format name                  */
               void *,           /* Qualified job name           */
               void *,           /* Internal job identifier      */
               void *,           /* Internal spooled file id     */
               char *,           /* Spooled file name            */
               int,              /* Spooled file number          */
               ...);             /* Optional Parameter:
                                      Error Code                 */

 /*****************************************************************/

/*****************************************************************/
/* Structure for User Defined Options                            */
/****                                                            */
/*  The following describes the user defined option entries in   */
/*   format SPLA0200 and SPLA0100.                               */
/*                                                               */
/*  Usr_Def_Options_Offset       provides the offset             */
/*  Usr_Def_Option_Number        provides the number of repeated */
/*                               option entries.                 */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qus_UDOPTENT
{
     char Usr_Def_Option_One[10];
     char Usr_Def_Option_Two[10];
     char Usr_Def_Option_Three[10];
     char Usr_Def_Option_Four[10];
} Qus_UDOPTENT_t;

/*****************************************************************/
/* Structure for User Resource Libraries                         */
/****                                                            */
/*  The following describes the user resource library entries in */
/*   format SPLA0200.                                            */
/*                                                               */
/*  Usr_Rsc_Libl_Off             provides the offset             */
/*  Usr_Rsc_Libl_Nbr             provides the number of repeated */
/*                               library entries.                */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qus_Usr_Lib_E
{
     char Usr_Resource_Lib_Name[10];
} Qus_Usr_Lib_E_t;

/*****************************************************************/
/* Structure for Edge Stitch Staple Positions                    */
/****                                                            */
/*  The following describes the edge stitch staple position      */
/*   entries in format SPLA0200.                                 */
/*                                                               */
/*  Staple_Position_Offset       provides the offset             */
/*  Nbr_of_Staple_Positions      provides the number of repeated */
/*                               staple position entries.        */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qus_Edge_Stitch_Stpl_Pos_E
{
     _Decimal(15,5) Staple_Position;
} Qus_Edge_Stitch_Stpl_Pos_E_t;

/*****************************************************************/
/* Structure for Saddle Stitch Staple Offsets                    */
/****                                                            */
/*  The following describes the saddle stitch staple offset      */
/*   entries in format SPLA0200.                                 */
/*                                                               */
/*  Off_Saddle_Staple_Off        provides the offset             */
/*  Nbr_of_Saddle_Stpl_Off       provides the number of repeated */
/*                               staple offset entries.          */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qus_Sadl_Stitch_Stpl_Off_E
{
     _Decimal(15,5) Staple_Offset;
} Qus_Sadl_Stitch_Stpl_Off_E_t;

/*****************************************************************/
/* Structure for SPLA0100 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defi