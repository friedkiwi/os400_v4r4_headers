/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QSQPRCED                                     */
/*                                                                  */
/* Descriptive Name: Process Extended Dynamic SQL                   */
/*                                                                  */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                      */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licenced Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: The Process Extended Dynamic SQL API provides       */
/*              functions to process extended dynamic SQL statements*/
/*              in an SQL package object.                           */
/*                                                                  */
/* Header Files Included: None.                                     */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qsq_sqlca_t                                      */
/*                 Qsq_sqlda_t                                      */
/*                 Qsq_SQLP0100_t                                   */
/*                 Qsq_SQLP0200_t                                   */
/*                 Qsq_SQLP0300_t                               @A2A*/
/*                 Qsq_SQLP0400_t                               @A5A*/
/*                                                                  */
/* Function Prototype List: QSQPRCED                                */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------- -------------------------*/
/* $A0= D2862000     3D10  940316 TIRZAMAN:New Include              */
/* $A1= P3978934     3D60  950316 MEGERIAN:Fixed the statement len  */
/* $A2= D9185300     3D60  950322 TOMANEK :New format SQLP0300 to   */
/*                                         support new options.     */
/*                                          - Direct map   : Y|N    */
/*                                          - Reuse SQLDA  : Y|N    */
/*                                          - Name check   : Y|N    */
/*                                          - Use pointers : Y|N    */
/*                                          - With hold    : Y|N    */
/*                                          - User Defined Field    */
/*                                         Added for R/3 port.      */
/* $A3= D94510       3D70  960509 TOMANEK :Reopen option and        */
/*                                         fields for function B.   */
/* $A4= D94960       4D10  961108 HPTMJA  :Add CCSID option         */
/* $A5= Pxxxxxxx     4D40  980706 KARELS  :New format SQLP0400 to   */
/*                                         support new options.     */
/*                                         - Use performance areaY|N*/
/*                                         - Revalidate         Y|N */
/*                                         - sort seqence table     */
/*                                         - sort sequence library  */
/*                                         - language id            */
/*                                         - allow copy of data Y|N */
/*                                         - allow blocking     Y|N */
/*                                                                  */
/* $A6= PSA79188     4P40  990301 45XRGK  :Remove nested declares   */
/*                                         top stop C++ compiler    */
/*                                         problem                  */
/* End CFD List.                                                    */
/*                                                                  */
/* Additional notes about the Change Activity                       */
/* End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS *********************************/

#ifndef QSQPRCED_h
#define QSQPRCED_h

/********************************************************************/
/* Prototype for calling Message Handler API QSQPRCED               */
/********************************************************************/

#ifdef __ILEC400__
     #pragma linkage(QSQPRCED,OS,nowiden)
#else
     extern "OS"
#endif
void QSQPRCED( void *,      /* SQL communications area              */
               void *,      /* SQL descriptor area                  */
               char *,      /* format name                          */
               void *,      /* function template                    */
               void *);     /* error code                           */

/********************************************************************/
/* Type Definition for the SQL Description Area.                    */
/********************************************************************/
typedef _Packed struct Qsq_sqlca
      {
         unsigned char   sqldaid[8];
                  long   sqlcabc;
                  long   sqlcode;
                  short  sqlerrml;
         unsigned char   sqlerrmc[70];
         unsigned char   sqlerrp[8];
                  long   sqlerrd[6];
         unsigned char   sqlwarn[11];
         unsigned char   sqlstate[5];
      }Qsq_sqlca_t;

struct sqlname
      {        short length;
               unsigned char data[30];
      };                                 /* Took declare out of
                                            Qsq_sqlda      @A6A*/
struct sqlvar
      {
               short  sqltype;
               short   sqllen;
      unsigned char   sqlres[12];
      unsigned char   *sqldata;
               short  *sqlind;
               struct sqlname sqlname;
       };                                /* Took declare out of
                                            Qsq_sqlda      @A6A*/





typedef _Packed struct Qsq_sqlda
      {
         unsigned char   sqldaid[8];
                  long   sqldabc;
                  short  sqln;
                  short  sqld;
                  struct sqlvar sqlvar[1];
      }Qsq_sqlda_t;
                                         /* Took nested declares
                                            out            @A6A*/





/********************************************************************/
/* Type Definition for the SQLP0100 format of the userspace in the  */
/* QSQPRCED API.                                                    */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qsq_SQLP0100
      {
         char Function;
         char SQL_Package_Name[10];
         char Library_Name[10];
         char Main_Pgm[10];
         char Main_Lib[10];
         char Statement_Name[18];
         char Cursor_Name[18];
         char Open_Options;
         char Clause_For_Describe;
         char Commitment_Control;
         char Date_Format[3];
         char Date_Separator;
         char Time_Format[3];
         char Time_Separator;
         char Naming_Option[3];
         char Decimal_Point;
         short Blocking_Factor;
         short Statement_Length;
       /*char Statement_Text[];*//* Varying length                 */
      }Qsq_SQLP0100_t;



/********************************************************************/
/* Type Definition for the SQLP0200 format of the userspace in the  */
/* QSQPRCED API.                                                    */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qsq_SQLP0200
      {
         char Function;
         char SQL_Package_Name[10];
         char Library_Name[10];
         char Main_Pgm[10];
         char Main_Lib[10];
         char Statement_Name[18];
         char Cursor_Name[18];
         char Open_Options;
         char Clause_For_Describe;
         char Commitment_Control;
         char Date_Format[3];
         char Date_Separator;
         char Time_Format[3];
         char Time_Separator;
         char Naming_Option[3];
         char Decimal_Point;
         short  Blocking_Factor;
         short  Scrollable_Option;
         short  Position_Option;
         int  Relative_Record;
         int  Rows_To_Insert;
         short  Statement_Length;
       /*char Statement_Text[];*//* Varying length                  