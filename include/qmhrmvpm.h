 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRMVPM                                   */
 /*                                                                */
 /* Descriptive Name: Remove Program Message.                      */
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
 /* Description: The Remove Program Messages API removes messages  */
 /*              from call message queues and the external message */
 /*              queue.                                            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHRMVPM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 DPOHLSON  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRMVPM_h
 #define QMHRMVPM_h

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRMVPM             */
 /******************************************************************/
#ifdef __ILEC400__
    #pragma linkage (QMHRMVPM,OS,nowiden)
#else
    extern "OS"
#endif
 void QMHRMVPM (void *,          /* Call stack entry               */
                int,             /* Call stack counter             */
                void *,          /* Message key                    */
                char *,          /* Messages to remove             */
                void *,          /* Error code                     */
                ...);            /* Group 1 Optionals:
                                       Length of call stack entry.
                                       Call stack entry
                                          qualification.
                                       Remove unhandled exceptions.
                                    Group 2 Optionals:
                                       Call stack entry data type  */

 #endif
