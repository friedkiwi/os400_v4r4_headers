 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDBRTVFD.h                                 */
 /*                                                                */
 /* Descriptive Name: Retrieve file description API.               */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1994,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve File Description (QDBRTVFD) API      */
 /*              allows the user to get complete and specific      */
 /*              information about a file on a local or remote     */
 /*              system.                                           */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None                                              */
 /*                                                                */
 /* Structure List: Qdb_Rfd_Input_Parms_t                          */
 /*                 Qdb_Qdbfh_t                                    */
 /*                 Qdb_Qdbfphys_t                                 */
 /*                 Qdb_Qdbftrg_t                                  */
 /*                 Qdb_Qdbf_Constraint_t                          */
 /*                 Qdb_Qdbf_Keyn_t                                */
 /*                 Qdb_Qdbf_Riafk_Afkd_t                          */
 /*                 Qdb_Qdbf_Chk_Cst_t                             */
 /*                 Qdb_Qdbfdtalnk_t                               */
 /*                 Qdb_Qdbfdlcole_t                               */
 /*                 Qdb_Qdbfdrae_t                                 */
 /*                 Qdb_Qdbfdrtb_t                                 */
 /*                 Qdb_Qdbflogl_t                                 */
 /*                 Qdb_Qdbfv_t                                    */
 /*                 Qdb_Qdbfj_t                                    */
 /*                 Qdb_Qdbfjfld_t                                 */
 /*                 Qdb_Qdbfjdup_t                                 */
 /*                 Qdb_Qdbfacs_t                                  */
 /*                 Qdb_Qdbfdic_t                                  */
 /*                 Qdb_Qdbflngn_t                                 */
 /*                 Qdb_Qdbfb_t                                    */
 /*                 Qdb_Qdbfss_t                                   */
 /*                 Qdb_Qdbfsp_t                                   */
 /*                 Qdb_Qdbfk_t                                    */
 /*                 Qdb_Qdbf_dis_t                                 */
 /*                 Qdb_Qdbfjoal_t                                 */
 /*                 Qdb_Qddfmt_t                                   */
 /*                 Qdb_Qddffld_t                                  */
 /*                 Qdb_Qddfrefi_t                                 */
 /*                 Qdb_Qddfedcw_t                                 */
 /*                 Qdb_Qddfdfne_t                                 */
 /*                 Qdb_Qddfcolh_t                                 */
 /*                 Qdb_Qddfvchk_t                                 */
 /*                 Qdb_Qddfvcst_t                                 */
 /*                 Qdb_Qddfvcpr_t                                 */
 /*                 Qdb_Qddfcpli_t                                 */
 /*                 Qdb_Qddfftxt_t                                 */
 /*                 Qdb_Qddfalis_t                                 */
 /*                 Qdb_Qddfdft_t                                  */
 /*                 Qdb_Qddfdicf_t                                 */
 /*                 Qdb_Qddfdvof_t                                 */
 /*                 Qdb_Qddfdvoc_t                                 */
 /*                 Qdb_Qddfdvo_t                                  */
 /*                 Qdb_Qddfderv_t                                 */
 /*                 Qdb_Qddfdvst_t                                 */
 /*                 Qdb_Qddfdvtx_t                                 */
 /*                 Qdb_Qddfxl_t                                   */
 /*                 Qdb_qddfcsl_t                                  */
 /*                 Qdb_Qddfdic_t                                  */
 /*                 Qdb_Qdbwhrec_t                                 */
 /*                 Qdb_Qdbwh_t                                    */
 /*                 Qdb_Qdbwhkattr_t                               */
 /*                 Qdb_Qdbwhkatt1_t                               */
 /*                 Qdb_Qdbwhkey_t                                 */
 /*                                                                */
 /* Function Prototype List: QDBRTVFD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   DEPT/PGMR CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940102 45H R P:  New Include           */
 /* $01= PTH01678     3P10  940818 45H JRA:  Correct ALWNULL flag  */
 /*                                            definition.         */
 /* $A2= D9196200     3D60  941104 45H JRA:  Large Access Path     */
 /*                                            support.            */
 /* $A3= D2871000     3D60  941104 45H JRA:  UCS2 support.         */
 /* $02= P3979527     3P10  950119 45H JRA:  Correct field text    */
 /*                                            definition.         */
 /* $03= PSA42574     3P10  950411 45H JRA:  Correct ACST/SST      */
 /*                                            definition and      */
 /*                                            separate Record ID  */
 /*                                            Code array.         */
 /* $04= P            3D60  950630 45H PSN: Add Default for Date,  */
 /*                                         Time, Timestamp of     */
 /*                                         CURRENT_xxxx           */
 /* $A4= D9410100     3D70  950713 45H KRB:  Distributed File      */
 /*                                            support.            */
 /* $05= P3617238     3D70  960430 45H KRS: Add missing operands   */
 /*                                         to derived operator    */
 /*                                         comments.              */
 /* $06= P3629488     4D10  960930 45H KLW: Add missing comments   */
 /*                                         for concatenated       */
 /*                                         fields and number of   */
 /*                                         digits.                */
 /* $A5= D28540       4D20  970127 45H randy: Add Check Constraint */
 /*                                           support              */
 /* $A6= D9495801     4D20  970215 45H KRS: UCS2 sort sequence     */
 /* $07= P3640846     4D20  970227 45H KRS: Fix comment.           */
 /* $08= P3651248     4D20  970729 RAMLER : Add v4r2 QQ support    */
 /*                                         CAST, CASE             */
 /* $09= P3652103     4D20  970811 45H KRS: Add "Allow Repeated    */
 /*                                         Change" flag to        */
 /*                                         trigger section.       */
 /* $A7= d9491500     4D30  971215 45H DMK: Add EVI support.       */
 /* $A8= P3663202     4D30  980302 SBURRICH: Add comment for V4R3  */
 /*                                          QQ FLOOR support.     */
 /* $A9= D9586707     4D40  980713 45H KRS: Add THDSAFE and        */
 /*                                         MLTTHDACN support.     */
 /* $AA= D9703200     4D40  980713 45H MWT: Complex Objects.       */
 /* $AB= P3684590     4D40  981117 45H KRS: Add Qddfsqfd.          */
 /* $AC= P3684760     4D40  981209 Bestgen: UDF support.           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QDBRTVFD_h
   #define QDBRTVFD_h

/*********************************************************************/
/* Prototypes for calling Retrieve File Description API QDBRTVFD     */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QDBRTVFD,OS,nowiden)
#else
     extern "OS"
#endif

void QDBRTVFD(void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              void *,               /* Returned file and library name*/
              char *,               /* Format name                   */
              void *,               /* File and library name         */
              char *,               /* Record format name            */
              char *,               /* Overrride processing          */
              char *,               /* System                        */
              char *,               /* Format type                   */
              void *);              /* Error code                    */









/*******************************************************************/
/* Input structure for QDBRTVFD API header section                 */
/*******************************************************************/

typedef _Packed struct
                Qdb_Rfd_Input_Parms {
                /*char Receiver_Var[];*/         /* varying length */
                  long Length_Of_Receiver_Var;
                  char Returned_File_And_Library[20];
                  char Format_Name[8];
                  char File_And_Library_Name[20];
                  char Record_Format_Name[10];
                  char File_Override_Flag[1];
                  char System[10];
                  char Format_Type[10];
                /*char Error_Code[];*/           /* varying length */
              } Qdb_Rfd_Input_Parms_t;

    /*****************************************************************/
    /*  Record Structure for QDBRTVFD FILD0100 format                */
    /*****************************************************************/
/*********************************************************************/
/*                      FDT HEADER DECLARATIONS                      */
/*********************************************************************/
    /*  The following typedef structs are pointed to by the header   */
    /*  typedef struct.  They are defined outside of the header for  */
    /*  LAN/DE compatibility and to ensure alignment on a 16-byte    */
    /*  boundary.                                                    */
    /*****************************************************************/

    /**  Attribute Bytes  ********************************************/
     typedef _Packed struct
                     Qdb_Qdbfhflg { /* Attribute Bytes               */

          unsigned  Reserved_1:2;   /* Reserved.                     */


          unsigned  Qdbfhfpl:1;     /* Type Of File
                                       0 = The file is a physical
                                           Database file.
                                       1 = The file is a logical
                                           Database file.            */

          unsigned  Reserved_2:1;   /* Reserved.                     */

          unsigned  Qdbfhfsu:1;     /* File Type (FILETYPE)
                                       0 = The file is a data file
                                           (*DATA).
                                       1 = The file is a source
                                           file (*SRC).              */

          unsigned  Reserved_3:1;   /* Reserved.                     */

          unsigned  Qdbfhfky:1;     /* Access Path
                                       0 = The file has an arrival
                                           sequence access path
                                       1 = The file has a keyed
                                           sequence access path      */

          unsigned  Reserved_4:1;   /* Reserved.                     */

          unsigned  Qdbfhflc:1;     /* Record Format Level Check
                                       (LVLCHK)
                                       0 = The level identifiers of
                                           the record formats are
                                           NOT checked when the file
                                           is opened (*NO).
                                       1 = The level identifiers of
                                           the record formats are
                                           checked when the file
                                           is opened (*YES).         */

          unsigned  Qdbfkfso:1;     /* Select/Omit
                                       0 = The file is NOT a
                                           select/omit logical file.
                                       1 = The file is a select/omit
                                           logical file.             */

          unsigned  Reserved_5:1;   /* Reserved.                     */

          unsigned  Qdbfhshr:1;     /* Reserved.                     */

          unsigned  Reserved_6:2;   /* Reserved.                     */


          unsigned  Qdbfigcd:1;     /* Double-Byte Character Set
                                       (DBCS) and/or Graphic Data
                                       0 = The record format(s) for
                                           the file does NOT contain
                                           any DBCS or Graphic data
                                           fields.
                                       1 = The record format(s) for
                                           the file does contain
                                           DBCS or Graphic data
                                           fields.                   */

          unsigned  Qdbfigcl:1;     /* Double-Byte Character Set
                                       (DBCS) and/or Graphic
                                       Literals
                              