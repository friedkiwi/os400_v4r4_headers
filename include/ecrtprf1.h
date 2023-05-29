 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ECRTPRF1                                     */
 /*                                                                */
 /* Descriptive Name: Create User Profile Exit Program             */
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
 /* Description: The Create User Profile exit program provides     */
 /*              the notification of profiles being created.       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Create_Profile_Info_t                      */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94085.6     3D70  960214 JMN       New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ECRTPRF1_h
 #define ECRTPRF1_h

 /******************************************************************/
 /* Type Definition for the Create profile exit point information  */
 /******************************************************************/
 typedef _Packed struct Qsy_Create_Profile_Info
    {
       char Exitpgm_name[20];
       char Exitpgm_fmt[8];
       char User_profile[10];
    } Qsy_Create_Profile_Info_t;

#endif
