 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EOKDRSP                                    */
 /*                                                                */
 /* Descriptive Name: Directory Supplier Exit Program.             */
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
 /* Description: The supplier program allows the adminstrator to   */
 /*              decide whether operations for directory entries,  */
 /*              departments, and locations should be shadowed to  */
 /*              collector systems.                                */
 /*                                                                */
 /* Header Files Included: h/eok                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qok_Supp_SUPP0100_t                            */
 /*                 Qok_Supp_SUPP0200_t                            */
 /*                 Qok_Supp_SUPP0300_t                            */
 /*                                                                */
 /* Function Prototype List: None                                  */
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
 #ifndef EOKDRSP_h
 #define EOKDRSP_h

 #include <eok.h>

 /******************************************************************/
 /* Directory Entry Format SUPP0100.                               */
 /******************************************************************/

 typedef _Packed struct Qok_Supp_SUPP0100
    {
       Qok_Common_0100_t Common_0100;
    } Qok_Supp_SUPP0100_t;

 /******************************************************************/
 /* Directory Entry Format SUPP0200.                               */
 /******************************************************************/

 typedef _Packed struct Qok_Supp_SUPP0200
    {
       Qok_Common_0200_t Common_0200;
    } Qok_Supp_SUPP0200_t;
 /******************************************************************/
 /* Directory Entry Format SUPP0300.                               */
 /******************************************************************/

 typedef _Packed struct Qok_Supp_SUPP0300
    {
       Qok_Common_0300_t Common_0300;
    } Qok_Supp_SUPP0300_t;
#endif
