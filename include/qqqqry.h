 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QQQQRY                                     */
 /*                                                                */
 /* Descriptive Name: Database Query API                      @A2A */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: QQQQRY API gets a set of database records that    */
 /*              satisfies a database query request.               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: QDB_QATTR_T                                    */
 /*                 QDBQDT_7_T                                     */
 /*                 QDBQFBK_T                                      */
 /*                 QDBQDT_13_T                                    */
 /*                 QDBQ_POSNOPTS_T                                */
 /*                 QDBQ_EXT_BITS_T                                */
 /*                 QDBQ_EXT_BITS2_T                               */
 /*                 QDBQ_EXT_BITS3_T                               */
 /*                 QDBQH_T                                        */
 /*                 QDBQDT_21_T                                    */
 /*                 QDBQFHDR_T                                     */
 /*                 QDBQFLMF_T                                     */
 /*                 QDBQFFLG_T                                     */
 /*                 QDBQN_T                                        */
 /*                 QDBQF_T                                        */
 /*                 QDBQJHDR_T                                     */
 /*                 QDBQJ_T                                        */
 /*                 QDBQ_JREF_ENTRY_T                          @A7A*/
 /*                 QDBQ_JREF_OPERAND_T                        @A7A*/
 /*                 QDBQ_JREF_OPERATOR_T                       @A7A*/
 /*                 QDBQS_T                                        */
 /*                 QDBQSIT_T                                      */
 /*                 QDBQSOPEF_T                                    */
 /*                 QDBQSOPES_T                                    */
 /*                 QDBQDT_32_T                                    */
 /*                 QDBQDT_36_T                                    */
 /*                 QDBQSOCH_T                                     */
 /*                 QDBQSOPC_T                                     */
 /*                 QDBQDT_55_T                                    */
 /*                 QDBQSOPR_T                                     */
 /*                 QDBQSOP2_T                                     */
 /*                 QDBQSOP3_T                                 @UIA*/
 /*                 QDBQKH_T                                       */
 /*                 QDBQKSQ_T                                      */
 /*                 QDBQK_T                                        */
 /*                 QDBQGH_T                                       */
 /*                 QDBQGF_T                                       */
 /*                 QDBQG_T                                        */
 /*                 QDBQT_T                                        */
 /*                 QDBQTOPC_T                                     */
 /*                 QDBQTOPR_T                                     */
 /*                 QDBQTIT_T                                      */
 /*                 QDBQQHDR_T                                     */
 /*                 QDBQQDT_T                                      */
 /*                 QDBQQDTS_T                                     */
 /*                 QQQVALEN_T                                     */
 /*                 QQQVAARY_T                                     */
 /*                 QQQVATTR_T                                     */
 /*                 QQQVALS_3_T                                    */
 /*                 QQQVALS_T                                      */
 /*                 _flg0                                          */
 /*                 _flg1                                          */
 /*                 _rlbr                                          */
 /*                 _flg2                                          */
 /*                 _flg3                                          */
 /*                 _flg4                                          */
 /*                 _formatid                                      */
 /*                 _pcmt                                          */
 /*                 QDBUFCB_T                                      */
 /*                 QQQSRTSEQ_T                                    */
 /*                 QQQSTB1_T                                      */
 /*                 QQQSTB2_T                                      */
 /*                 QQQSTBE1_T                                     */
 /*                 QQQNLSS_T                                      */
 /*                                                                */
 /* Function Prototype List: QQQQRY                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940426 RYG       New Include           */
 /* $A1= P3954948     3D10  940527 47SAMR:   Declaration changes.  */
 /* $OJ= D28342       3D60  950116 47SRDD:   Add support for SQL   */
 /*                                          Outer Join.           */
 /* $A2= P3979529     3D60  950301 511LKD:   Remove variable       */
 /*                                          declarations.  Make   */
 /*                                          them typedefs.        */
 /* $A3= P3621720     3D70  960606 HRGJCL:   Added fields to QDT   */
 /* $UI= D94960       4D10  970205 ALDRICH:  Add support for UCS-2 */
 /*                                          literals & new fields */
 /*                                          for the CCSID of      */
 /*                                          wildcard characters.  */
 /* $A4= P3651248     4D20  970729 RAMLER:   Add V4R2 support      */
 /* $A5= P3665850     4D20  980220 HRGJCL:   Add V4R3 support      */
 /* $A6= P3682797     4D40  981030 Ramler:   Add derived table     */
 /* $A7= P3682797     4D40  981103 RYG:      Add Full Left Outer   */
 /*                                          Join support.         */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QQQQRY_h
 #define QQQQRY_h

 #include <pointer.h>

 #endif

 /******************************************************************/
 /* Prototype for calling Retrieve Controller Description API      */
 /*   QQQQRY OPM                                                   */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QQQQRY,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QQQQRY (char *,            /* Query option                   */
              void *,            /* UFCB                           */
              void *,            /* Query definition template      */
              void *,            /* Literal values                 */
              void *,            /* Access plan control block      */
              void *);           /* Error code                     */


 #ifndef _QDBQDT_H
 #define _QDBQDT_H
 /********************************************************************/
 /*                                                                  */
 /* INCLUDE NAME:  QDBQDT                                            */
 /* DESCRIPTIVE NAME:  Query definition template (QDT).              */
 /*                                                                  */
 /* FUNCTION:                                                        */
 /*    Describes the interface to XPF Query.                         */
 /*                                                                  */
 /*    The QDT contains all information required to create structures*/
 /*    necessary to perform the query.  It is a set of internal      */
 /*    structures which define the query and its implementation.     */
 /*    Feedback information from the creation of the query objects   */
 /*   