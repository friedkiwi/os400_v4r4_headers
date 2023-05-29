 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYCHGDS                                   */
 /*                                                                */
 /* Descriptive Name: Change DST Profiles.                         */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998.                        */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: This module provides a callable API interface that*/
 /*          can be invoked by user programs to change the user    */
 /*          ids or passwords (or both) of the three DST profiles  */
 /*          (security, full, or basic).                           */
 /*                                                                */
 /* Header Files Included: H/QSYCHGDS                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None                                           */
 /*                                                                */
 /* Function Prototype List: QSYCHGDS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3652324     4D20  970820 BUDNIK:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYCHGDS_h
 #define QSYCHGDS_h

 /******************************************************************/
 /* Prototype for calling Security API QSYCHGDS                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYCHGDS,OS,nowiden)
  #else
       extern "OS"
  #endif

 void QSYCHGDS (char *,          /* DST security capability user id*/
                char *,          /* DST security capability pwd    */
                char *,          /* Type of DST profile to be      */
                                 /* changed                        */
                char *,          /* New user id                    */
                char *,          /* New password                   */
                void *);         /* Error code                     */

 #endif
