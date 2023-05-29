 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSCHGPA                                   */
 /*                                                                */
 /* Descriptive Name: Change Pool Attributes API                   */
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
 /* Description: The ChangePool Attributes API changes the size,   */
 /*              activity level, and paging options of system      */
 /*              storage pools.                                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QUSCHGPA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $A1= D9472600     4D20  970226 MJD    :  Add tuning parms.     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSCHGPA_h
 #define QUSCHGPA_h

 /******************************************************************/
 /*  Prototype for QUSCHGPA API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSCHGPA,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSCHGPA(int,              /* System pool identifier         */
               int,              /* New pool size                  */
               int,              /* New pool activity level        */
               ...);             /* Optional Parameter Group 1:
                                      char *   Message logging
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      char *   Paging Option
                                    Optional Parameter Group 3:
                                      int      Priority
                                      int      Minimum size (percent)
                                      int      Maximim size (percent)
                                      int      Minimum fault rate
                                      int      Faults per job
                                      int      Maximum fault rate  */

 #endif
