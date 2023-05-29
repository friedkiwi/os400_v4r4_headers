#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name:  Qp0lstdi.h                                  */
/*                                                                */
/* Descriptive Name: Integrated File System definitions           */
/*                                                                */
/* 5763-SS1, 5716-SS1, 5769-SS1                                   */
/* (C) Copyright IBM Corp. 1994,1999                              */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: This header file defines the Qp0lRenameKeep,      */
/*              Qp0lRenameUnlink, Qp0lGetPathFromFileID,          */
/*              Qp0lProcessSubtree(), Qp0lGetAttr(),              */
/*              Qp0lSaveStgFree(), and Qp0lCvtPathToQSYSObjName() */
/*              functions.  The rename() function is redirected   */
/*              with a macro.                                     */
/*                                                                */
/* Header Files Included: sys/types.h                             */
/*                        qlg.h                                   */
/*                                                                */
/* Macros List:                                                   */
/*              QP0L_ALWCKPWRT                                @B4A*/
/*              QP0L_ATTR_ACCESS_TIME                         @A5C*/
/*              QP0L_ATTR_ALLOC_SIZE                          @A4A*/
/*              QP0L_ATTR_ALLOC_SIZE_64                       @B1A*/
/*              QP0L_ATTR_ALWCKPWRT                           @B4A*/
/*              QP0L_ATTR_ASP                                 @A9A*/
/*              QP0L_ATTR_AUTH                                @A5C*/
/*              QP0L_ATTR_CHANGE_TIME                         @A5C*/
/*              QP0L_ATTR_CHECKED_OUT                         @A5A*/
/*              QP0L_ATTR_CODEPAGE                            @B2A*/
/*              QP0L_ATTR_CREATE_TIME                         @A5C*/
/*              QP0L_ATTR_DATA_SIZE                           @A4A*/
/*              QP0L_ATTR_DATA_SIZE_64                        @B1A*/
/*              QP0L_ATTR_EXTENDED_ATTR_SIZE                  @A5A*/
/*              QP0L_ATTR_FILE_FORMAT                         @B3A*/
/*              QP0L_ATTR_FILE_ID                             @A8A*/
/*              QP0L_ATTR_JOURNAL_INFORMATION                 @B6A*/
/*              QP0L_ATTR_LOCAL_REMOTE                        @A4A*/
/*              QP0L_ATTR_MODIFY_TIME                         @A5C*/
/*              QP0L_ATTR_OBJTYPE                             @A4A*/
/*              QP0L_ATTR_PC_ARCHIVE                          @B2A*/
/*              QP0L_ATTR_PC_HIDDEN                           @B2A*/
/*              QP0L_ATTR_PC_READ_ONLY                        @B2A*/
/*              QP0L_ATTR_PC_SYSTEM                           @B2A*/
/*              QP0L_ATTR_RESET_DATE                          @B2A*/
/*              QP0L_ATTR_STG_FREE                            @A5C*/
/*              QP0L_ATTR_SYSTEM_ARCHIVE                      @B2A*/
/*              QP0L_ATTR_UDFS_DEFAULT_FORMAT                 @B3A*/
/*              QP0L_ATTR_USAGE_INFORMATION                   @B2A*/
/*              QP0L_BYPASS_NO_ERRORID                        @A4A*/
/*              QP0L_CHECKED_OUT                              @A5A*/
/*              QP0L_DONOT_FOLLOW_SYMLNK                      @A5C*/
/*              QP0L_END_PROCESS_SUBTREE                      @A4A*/
/*              QP0L_EXCLUSION_TYPE                           @A4A*/
/*              QP0L_FILE_FORMAT_TYPE1                        @B3A*/
/*              QP0L_FILE_FORMAT_TYPE2                        @B3A*/
/*              QP0L_FOLLOW_SYMLNK                            @A5C*/
/*              QP0L_INCLUSION_TYPE                           @A4A*/
/*              QP0L_JOBLOG_NO_ERRORID                        @A4A*/
/*              QP0L_JOURNAL_AFTER_IMAGES                     @B6A*/
/*              QP0L_JOURNAL_BEFORE_IMAGES                    @B6A*/
/*              QP0L_JOURNAL_OPTIONAL_ENTRIES                 @B6A*/
/*              QP0L_JOURNALED                                @B6A*/
/*              QP0L_LOCAL_OBJ                                @A4A*/
/*              QP0L_LOCAL_REMOTE_OBJ                         @A4A*/
/*              QP0L_MLTTHDACN_MSG                            @B5A*/
/*              QP0L_MLTTHDACN_NO                             @B5A*/
/*              QP0L_MLTTHDACN_NOMSG                          @B5A*/
/*              QP0L_MLTTHDACN_SYSVAL                         @B5A*/
/*              QP0L_NO                                       @A4A*/
/*              QP0L_NOT_ALWCKPWRT                            @B4A*/
/*              QP0L_NOT_CHECKED_OUT                          @A5A*/
/*              QP0L_NOT_JOURNALED                            @B6A*/
/*              QP0L_NULLNAME_ERRORID                         @A4A*/
/*              QP0L_PASS_WITH_ERRORID                        @A4A*/
/*              QP0L_PC_CHANGED                               @B2A*/
/*              QP0L_PC_HIDDEN                                @B2A*/
/*              QP0L_PC_NOT_CHANGED                           @B2A*/
/*              QP0L_PC_NOT_HIDDEN                            @B2A*/
/*              QP0L_PC_NOT_READONLY                          @B2A*/
/*              QP0L_PC_NOT_SYSTEM                            @B2A*/
/*              QP0L_PC_READONLY                              @B2A*/
/*              QP0L_PC_SYSTEM                                @B2A*/
/*              QP0L_REMOTE_OBJ                               @A4A*/
/*              QP0L_SELECT_DONE                              @A4A*/
/*              QP0L_SELECT_FAILED                            @A4A*/
/*              QP0L_SELECT_NOT_OK                            @A4A*/
/*              QP0L_SELECT_OK                                @A4A*/
/*              QP0L_SUBTREE_NO                               @A4A*/
/*              QP0L_SUBTREE_YES                              @A4A*/
/*              QP0L_SYS_NOT_STG_FREE                         @A5A*/
/*              QP0L_SYS_STG_FREE                             @A5A*/
/*              QP0L_SYSTEM_CHANGED                           @B2A*/
/*              QP0L_SYSTEM_NOT_CHANGED                       @B2A*/
/*              QP0L_UDFS_DEFAULT_TYPE1                       @B3A*/
/*              QP0L_UDFS_DEFAULT_TYPE2                       @B3A*/
/*              QP0L_USER_FUNCTION_PGM                        @A4A*/
/*              QP0L_USER_FUNCTION_PTR                        @A4A*/
/*              QP0L_YES                                      @A4A*/
/*              rename                                            */
/*                                                                */
/* Structure List: Qp0l_AttrTypes_List_t                          */
/*                 Qp0l_Authority_General_t;                      */
/*                 Qp0l_Authority_Users_t;                        */
/*                 Qp0l_Checkout_t;                               */
/*                 Qp0l_IN_EXclusion_List_t                       */
/*                 Qp0l_Objtypes_List_t                           */
/*                 Qp0l_QSYS_Info_t;                              */
/*                 Qp0l_User_Function_t;                          */
/*                                                                */
/* Function Prototype List: Qp0lCvtPathToQSYSObjName              */
/*                          Qp0lGetAttr                           */
/*                          Qp0lGetPathFromFileID                 */
/*                          Qp0lOpen                          @B7A*/
/*                          Qp0lProcessSubtree                    */
/*                          Qp0lRenameKeep                        */
/*                          Qp0lRenameUnlink                      */
/*                          Qp0lSaveStgFree                       */
/*                          Qp0lUnlink                        @B7A*/
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION     */
/* ---- ------------ ----- ------ -------- ---------------------- */
/* $A0= D28253       3D10  940309 ROCH     New Include            */
/* $A1= P3992252     3D60  950522 ROCH     Add __cplusplus #ifdef */
/*                                         and #pragma info(none) */
/* $A2= PTH01765     3D60  950804 ROCH     Need to include types.h*/
/*                                         Correct #pragma info   */
/* $A3= P3624985     4D10  960813 ROCH     Move types.h           */
/* $A4= D9499200     4D30  970625 ROCH:    Add Qp0lProcessSubtree */
/*                                         and Qp0lGetAttr        */
/* $A5= D9499200     4D30  970721 ROCH:    Adding macros for 