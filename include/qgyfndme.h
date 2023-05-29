 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYFNDME                                   */
 /*                                                                */
 /* Descriptive Name: Find Entry Number in Message List            */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYFNDME API returns the number of the entry  */
 /*              in a list of message information for a given key  */
 /*              value.                                            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QGYFNDME                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960531 DPW       New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYFNDME_h
 #define QGYFNDME_h

 /******************************************************************/
 /* Prototype for call to QGYFNDME API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYFNDME,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYFNDME  (char *,     /* Request handle                    */
                   int   ,     /* Number of keys                    */
                   void *,     /* Key field information             */
                   void *,     /* Key field values                  */
                   int   ,     /* Entry number                      */
                   char *,     /* Key found                         */
                   char *,     /* Message type information          */
                   void *      /* Error code                        */
                  );
 #endif

