 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDCRNWSD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve NWSD Description                    */
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
 /* Description: The Retrieve NWSD Description (QDCRNWSD) API      */
 /*              retrieves information about a server description. */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This macro/include is a CUE.                 */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_NWSD0100_t          (Basic info)           */
 /*                 Qdc_NWSD0200_t          (*LANSERVER)           */
 /*                 Qdc_NWSD0300_t          (*NETWARE)             */
 /*                 Qdc_NWSD0400_t          (*BASE)                */
 /*                 Qdc_NWSD0500