 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/ANE                                        */
 /*                                                                */
 /* Descriptive Name: ANE include                                  */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1997,1997                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description:                                                   */
 /*                                                                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*          Qane_SVRS0100_t;                                      */
 /*          Qane_SRST0100_t;                                      */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94987       4D30  970716 KLG       New Include           */
 /* $B0= P3671657     4D40  980529 SPH       Changed Reserved to   */
 /*                                          Target Release        */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QANE_h
 #define QANE_h

 #ifdef __cplusplus
   extern "C" {
   #pragma info(none)
 #endif



/********************************************************************/
/*  Structure for SVRS0100 format                                   */
/*                                                                  */
/*  NOTE:  The following type definition only defines the fixed     */
/*         portion of the format.  Any varying length fields must   */
/*         be defined by the user.                                  */
/********************************************************************/

typedef _Packed struct Qane_SVRS0100
   {
                 int  Struct_Len;
                 int  CmdParm_Off;
                 int  CmdParm_Len;
                 int  AppDta_Off;
                 int  AppDta_Len;
                 int  Cmd_Type;
                 char Exit_Pgm[10];
                 char Exit_Lib[10];
                 char Tgt_Rls[8];                             /*@B0B*/
               /*char SR_Parms[];*/          /* Varying length      */
               /*char APP_Dta[]; */          /* Varying length      */
               } Qane_SVRS0100_t;


/********************************************************************/
/*  Structure for SRST0100 format                                   */
/********************************************************************/

typedef _Packed struct Qane_SRST0100
   {
                 int  Bytes_Ret;
                 int  Bytes_Avl;
                 int  Trans_Time;
                 int  Blck_Size;
                 int  Blck_Mult;
                 int  Last_BlckSiz;
                 char Usrsp_Lib[10];
               } Qane_SRST0100_t;




#ifdef __cplusplus
  #pragma info(restore)
 }
#endif

#endif                            /* #ifndef QANE_h                 */
