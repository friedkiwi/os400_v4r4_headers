 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ECHGPRF1                                     */
 /*                                                                */
 /* Descriptive Name: Change User Profile Exit Program             */
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
 /* Description: The Change User Profile exit program provides     */
 /*              the notification of profiles being changed.       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Change_Profile_Info_t                      */
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

 #ifndef ECHGPRF1_h
 #define ECHGPRF1_h

 /******************************************************************/
 /* Type Definition for the Change profile exit point information  */
 /******************************************************************/
 typedef _Packed struct Qsy_Change_Profile_Info
    {
       char Exitpgm_name[20];
       char Exitpgm_fmt[8];
       char User_profile[10];
    } Qsy_Change_Profile_Info_t;

#endif
