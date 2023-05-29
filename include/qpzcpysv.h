 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPZCPYSV                                   */
 /*                                                                */
 /* Descriptive Name: PZ include                                   */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The List PTF API returns a list of PTFs for the   */
 /*              specified product, option, load, release.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*       Qpz_Cpysv_Prd_Info_t                                     */
 /*       Qpz_PTFL0100_t                                           */
 /*       Qpz_INPUT_parm_section                                   */
 /*       Qpz_Header_Sect                                          */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97005       4d40  980520 ROCH      New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QPZCPYSV_h
 #define QPZCPYSV_h

/********************************************************************/
/*  Prototype for calling Software Product API QPZCPYSV             */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QPZCPYSV, OS, nowiden)
#else
  extern "OS"
#endif
void QPZCPYSV(void *,             /* Product information            */
              char *,             /* Product information format name*/
              char *,             /* Device name                    */
              void *);            /* Error code                     */


/********************************************************************/
/*  Structure for Product Information Format                        */
/********************************************************************/

typedef _Packed struct Qpz_PTFV0100
   {
                 int  Prdinfo_Len;
                 char PID[7];
                 char Rls[6];
                 char Auto_Support[1];
               } Qpz_PTFV0100_t;


#endif                            /* #ifndef QPZCPYSV_h             */
