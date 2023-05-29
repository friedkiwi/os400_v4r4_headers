 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSEC                                      */
 /*                                                                */
 /* Descriptive Name: Error Code Parameter.                        */
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
 /* Description: Include header file for the error code parameter. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_EC_t                                       */
 /*                 Qus_ERRC0200_t                                 */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 DPOHLSON: New Include           */
 /* $B1= D9179400     4D10  940904 MBAILEY : Add Qus_ERRC0200_t    */
 /*                                          structure.            */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSEC_h
 #define QUSEC_h

 /******************************************************************/
 /* Record structure for Error Code Parameter                      */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Varying length field Exception   */
 /*       Data will not be defined here.                           */
 /******************************************************************/
 typedef struct Qus_EC
    {
       int  Bytes_Provided;
       int  Bytes_Available;
       char Exception_Id[7];
       char Reserved;
     /*char Exception_Data[];*/           /* Varying length        */
    } Qus_EC_t;

 typedef struct Qus_ERRC0200
    {
       int Key;
       int Bytes_Provided;
       int Bytes_Available;
       char Exception_Id[7];
       char Reserved;
       int CCSID;
       int Offset_Exc_Data;
       int Length_Exc_Data;
     /*char *Reserved2;*/
     /*char Exception_Data[];*/           /* Varying Length    @B1A*/
    } Qus_ERRC0200_t;


 #endif
