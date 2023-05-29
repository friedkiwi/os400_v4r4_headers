 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EOKDRVF                                    */
 /*                                                                */
 /* Descriptive Name: Directory Verification Exit Program.         */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The verifcation program allows the administrator  */
 /*              to define additional security or syntax checking  */
 /*              on the data.                                      */
 /*                                                                */
 /* Header Files Included: h/eok                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qok_Chkp_CHKP0100_t                            */
 /*                 Qok_Chkp_CHKP0200_t                            */
 /*                 Qok_Chkp_CHKP0300_t                            */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940415 DWC:      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef EOKDRVF_h
 #define EOKDRVF_h

 #include <eok.h>

 /*******************************************************************/
 /* Stucture for Directory Entry Format 0100                        */
 /*******************************************************************/

 typedef _Packed struct Qok_Chkp_CHKP0100
    {
       Qok_Common_0100_t Common_0100;
    } Qok_Chkp_CHKP0100_t;

 /*******************************************************************/
 /* Stucture for Directory Entry Format 0200                        */
 /*******************************************************************/

 typedef _Packed struct Qok_Chkp_CHKP0200
    {
       Qok_Common_0200_t Common_0200;
    } Qok_Chkp_CHKP0200_t;

 /*******************************************************************/
 /* Stucture for Directory Entry Format 0300                        */
 /*******************************************************************/

 typedef _Packed struct Qok_Chkp_CHKP0300
    {
       Qok_Common_0300_t Common_0300;
    } Qok_Chkp_CHKP0300_t;

#endif
