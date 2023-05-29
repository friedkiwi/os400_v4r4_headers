/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  dtwle.h                                        */
/*                                                                   */
/* Descriptive Name:  Net.Data language environment definitions      */
/*                                                                   */
/*                                                                   */
/* 5716-TC1                                                          */
/* (C) Copyright IBM Corp. 1996, 1996                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and structures    */
/*          to be used by Net.Data language environments.            */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          N/A                                                      */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          DTW_USAGE                                                */
/*          DTW_IN                                                   */
/*          DTW_OUT                                                  */
/*          DTW_INOUT                                                */
/*                                                                   */
/*          DTW_TYPE                                                 */
/*          DTW_STRING                                               */
/*          DTW_TABLE                                                */
/*                                                                   */
/*          DTW_STMT_EXEC                                            */
/*          DTW_END_ABNORMAL                                         */
/*          DTW_LE_FATAL_ERROR                                       */
/*          DTW_LE_MSG_KEEP                                          */
/*          DTW_LE_CONTINUE                                          */
/*          DTW_PERSISTENT                                      @A1A */
/*                                                                   */
/*          DTW_TABLEERR_RANGE                                       */
/*          DTW_TABLEERR_NOMEMORY                                    */
/*          DTW_TABLEERR_INVALID                                     */
/*          DTW_TABLEERR_TOOBIG                                      */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          dtw_parm_data_t                                          */
/*          dtw_lei_t                                                */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          dtw_initialize                                           */
/*          dtw_execute                                              */
/*          dtw_getNextRow                                           */
/*          dtw_cleanup                                              */
/*                                                                   */
/*          dtw_table_New                                            */
/*          dtw_table_Delete                                         */
/*          dtw_table_SetCols                                        */
/*          dtw_table_GetV                                           */
/*          dtw_table_SetV                                           */
/*          dtw_table_GetN                                           */
/*          dtw_table_SetN                                           */
/*          dtw_table_Rows                                           */
/*          dtw_table_Cols                                           */
/*          dtw_table_MaxRows                                        */
/*          dtw_table_QueryColnoNj                                   */
/*          dtw_table_AppendRow                                      */
/*          dtw_table_InsertRow                                      */
/*          dtw_table_DeleteRow                                      */
/*          dtw_table_InsertCol                                      */
/*          dtw_table_DeleteCol                                      */
/*                                                                   */
/*          dtw_row_SetCols                                          */
/*          dtw_row_SetV                                             */
/*                                                                   */
/*          dtw_malloc                                               */
/*          dtw_free                                                 */
/*          dtw_strdup                                               */
/*                                                                   */
/*          dtw_getvar                                               */
/*          dtw_setvar                                               */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= P3188200     3D70  960528  ROCH     New include.           */
/*   $A1= D95247       4D30  971217  ROCH     Persistent CGI support.*/
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __DTWLE_H
  #define __DTWLE_H

#ifndef __DTW_EXTERN
    #ifdef __cplusplus
        #define DTW_EXTERN extern "C"
    #else
        #define DTW_EXTERN extern
    #endif

    #define __DTW_EXTERN
#endif



/*********************************************************************/
/* Macros for parm_descriptor field in dtw_parm_data structure.      */
/*********************************************************************/

/* Parameter usage flags */

#define DTW_USAGE           0x0000FFFF /* Usage mask for usage flags */
#define DTW_IN              0x00000001 /* Input parameter            */
#define DTW_OUT             0x00000002 /* Output parameter           */
#define DTW_INOUT           0x00000003 /* Input/output parameter     */

/* Parameter type flags */

#define DTW_TYPE            0xFFFF0000 /* Type mask for type flags   */
#define DTW_STRING          0x00010000 /* NULL terminated string     */
#define DTW_TABLE           0x00020000 /* DTW table object           */

/*********************************************************************/
/* Macros for flag parameter in dtw_lei structure                    */
/*********************************************************************/

/* following set by Net.Data */

#define DTW_STMT_EXEC       0x00000001 /* %exec statement            */
#define DTW_END_ABNORMAL    0x00000002 /* Cleanup abnormal           */
#define DTW_PERSISTENT      0x00000004 /* Persistent macro       @A1A*/

/* following set by language environments */

#define DTW_LE_FATAL_ERROR  0x00010000 /* Lang. Env. has fatal error */
#define DTW_LE_MSG_KEEP     0x00020000 /* Do not free default msg.   */
#define DTW_LE_CONTINUE     0x00040000 /* Call GetNextRow()          */

/*********************************************************************/
/* Macros for return codes returned by the DTW table object routines.*/
/*********************************************************************/

#define DTW_TABLEERR_RANGE     -1      /* Invalid index specified    */
#define DTW_TABLEERR_NOMEMORY  -2      /* Unable to allocate memory  */
#define DTW_TABLEERR_INVALID   -3      /* Table not in a valid state */
#define DTW_TABLEERR_TOOBIG    -4      /* Table size limit exceeded  */


/*********************************************************************/
/* Structures                                                        */
/************************