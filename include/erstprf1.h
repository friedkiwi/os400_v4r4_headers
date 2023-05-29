 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ERSTPRF1                                     */
 /*                                                                */
 /* Descriptive Name: Restore User Profile Exit Program            */
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
 /* Description: The Restore User Profile exit program provides    */
 /*              the notification of profiles being restored.      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Restore_Profile_Info_t                     */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94085.6     3D70  960306 JMN       New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ERSTPRF1_h
 #define ERSTPRF1_h

 /******************************************************************/
 /* Type Definition for the Restore Exit Program information       */
 /******************************************************************/
 typedef _Packed struct Qsy_Restore_Profile_Info
    {
       char Exitpgm_name[20];
       char Exitpgm_fmt[8];
       char User_profile[10];
    } Qsy_Restore_Profile_Info_t;

#endif
