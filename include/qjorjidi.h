 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QJORJIDI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve JID Information.                    */
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
 /* Description: The Retrieve Journal Identifier Information API   */
 /*              retrieves the current name and type of the object */
 /*              associated with the specifiec journal identifier, */
 /*              for the specified journal.                        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qjo_RJID0100_Retrieve_t                        */
 /*                                                                */
 /* Function Prototype List: QJORJIDI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3945203     3D10  940215 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QJORJIDI_h
 #define QJORJIDI_h

 /******************************************************************/
 /* Prototype for calling Journal API QJORJIDI                     */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QJORJIDI,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QJORJIDI (void *,          /* Receiver variable              */
                int,             /* Receiver variable length       */
                void *,          /* Qualified journal name         */
                char *,          /* Journal identifier (JID) value */
                char *,          /* Format name                    */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Record structure for RJID0100 format                           */
 /******************************************************************/
 typedef struct Qjo_RJID0100_Retrieve
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       char  Journal_Name[10];
       char  Journal_Library[10];
       char  Jid_Value[10];
       char  Object_Name[10];
       char  Object_Library[10];
       char  Member_Name[10];
       char  Object_Type[10];
    } Qjo_RJID0100_Retrieve_T;

 #endif
