 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZLSADFS                                   */
 /*                                                                */
 /* Descriptive Name: Add NetServer File Share                     */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the QZLSADFS API.         */
 /*                                                                */
 /* Header Files Included: H/QZLSADFS                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSADFS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 BRIDGET   New Include           */
 /* $A1= P3678573     4D40  981031 BRIDGET   Add ellipsis for      */
 /*                                          optional parameters.  */
 /* $A2= P3685025     4D40  981209 BAZEY     Add comma after the   */
 /*                                          ErrorCode parameter   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QZLSADFS_h
 #define QZLSADFS_h

 #include <QZLS.H>

 #ifdef __ILEC400__
      #pragma linkage (QZLSADFS,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QZLSADFS API.                            */
 /******************************************************************/
 void QZLSADFS(char *ShareName,
               char *PathName,
               int  *PathNameLen,
               int  *CCSIDEncoding,
               char *TextDescription,
               int  *Permissions,
               int  *MaxUsers,
               char *ErrorCode,
               ...);
 #endif
