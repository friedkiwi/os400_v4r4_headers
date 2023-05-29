 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qsydigid.H                                   */
 /*                                                                */
 /* Descriptive Name: Digital Certificate ID interface             */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1997,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Digital Certificate ID include provides       */
 /*              the definitions for working with certificates     */
 /*              for user profiles and validation lists.           */
 /*                                                                */
 /* Header Files Included: sys/types.h                             */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Cert0100_T                                 */
 /*                 Qsy_Cert0200_T                                 */
 /*                 Qsy_Sel_Ctrl_T                                 */
 /*                 Qsy_Sel_Ctrl_Pair_T                            */
 /*                                                                */
 /* Function Prototype List: QsyAddUserCertificate                 */
 /*                          QsyRemoveUserCertificate              */
 /*                          QsyListUserCertificates               */
 /*                          QsyFindCertificateUser                */
 /*                          QsyParseCertificate                   */
 /*                          QsyAddVldlCertificate                 */
 /*                          QsyRemoveVldlCertificate              */
 /*                          QsyListVldlCertificates               */
 /*                          QsyCheckVldlCertificate               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS DATE   PGMR  COMMENTS                    */
 /*    ---- -------- ---- ------ ----  --------------------------- */
 /*    $A0= D9524900 4D20 970723 ROCH: New.                        */
 /*    $A1= P3653249 4D30 981026 ROCH: Add QSY_CERT0210 define.    */
 /*    $A2= P3666281 4D30 980304 ROCH: Add QSY_BASE64_FULL_CERT.   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef _QSYDIGID_H
 #define _QSYDIGID_H

 #ifndef __QBFC_EXTERN
     #ifdef __ILEC400__
         #define QBFC_EXTERN extern
     #else
         #define QBFC_EXTERN extern "C"
     #endif

     #define __QBFC_EXTERN
 #endif

 /********************************************************************/
 /* Includes used                                                    */
 /********************************************************************/
 #include <sys/types.h>

 /********************************************************************/
 /* Defined constants                                                */
 /********************************************************************/

 #define QSY_CERT0100           "CERT0100"     /* ASN.1 format       */
 #define QSY_CERT0200           "CERT0200"     /* text format        */
 #define QSY_CERT0210           "CERT0210"     /* text no xlate $A1a */

 /* The following are for names used in Selection control pairs      */
 #define QSY_SELCTRL_NAME_LEN   20             /* name field length  */
 #define QSY_MAX_SEL_NAMES      7              /* max  unique pairs  */
 #define QSY_COMMONNAME         "COMMONNAME          "
 #define QSY_COUNTRY            "COUNTRY             "
 #define QSY_LOCALITY           "LOCALITY            "
 #define QSY_STATEORPROVINCE    "STATEORPROVINCE     "
 #define QSY_ORGANIZATION       "ORGANIZATION        "
 #define QSY_ORGANIZATIONALUNIT "ORGANIZATIONALUNIT  "
 #define QSY_PUBLICKEY          "PUBLICKEY           "

 #define QSY_CERT_HANDLE_LEN    40       /* handle length            */
 #define QSY_FULL_CERT          1        /* type is full certificate */
 #define QSY_CERT_HANDLE        2        /* type is certif handle    */
 #define QSY_BASE64_FULL_CERT   3        /* base64 full X.509 certif */

 /********************************************************************/
 /* Data type definition for CERT0100 format.                        */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef struct Qsy_Cert0100
 {
   int            Returned_Len;          /* returned length          */
   int            Available_Len;         /* available length         */
   int            Certif_Handle_Ofs;     /* offset to certif handle  */
   int            Certif_Handle_Len;     /* length of certif handle  */
   int            Certif_Ofs;            /* offset to certificate    */
   int            Certif_Len;            /* length of certificate    */
 /*char           fields[];*/            /* array of char for fields */
 } Qsy_Cert0100_T;

 /********************************************************************/
 /* Data type definition for CERT0200 format.                        */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef struct Qsy_Cert0200
 {
   int            Returned_Len;          /* returned length          */
   int            Available_Len;         /* available length         */
   int            Certif_Handle_Ofs;     /* offset to certif hndl    */
   int            Certif_Handle_Len;     /* length of certif hndl    */
   int            Version_Ofs;           /* offset to version        */
   int            Version_Len;           /* length of version        */
   int            Ser_No_Ofs;            /* offset to Serial Number  */
   int            Ser_No_Len;            /* length of Serial Number  */
   int            Iss_Cmn_Nam_Ofs;       /* offset to Issuer Cmn Name*/
   int            Iss_Cmn_Nam_Len;       /* length of Iss Cmn Name   */
   int            Iss_Country_Ofs;       /* offset to Iss Country    */
   int            Iss_Country_Len;       /* length of Iss Country    */
   int            Iss_State_Ofs;         /* offset to State          */
   int            Iss_State_Len;         /* length of State          */
   int            Iss_Locality_Ofs;      /* offset to Locality       */
   int            Iss_Locality_Len;      /* length of Locality       */
   int            Iss_Org_Ofs;           /* offset to Organization   */
   int            Iss_Org_Len;           /* length of Organization   */
   int            Iss_OrgUnit_Ofs;       /* offset to OrgUnit        */
   int            Iss_OrgUnit_Len;       /* length of OrgUnit        */
   int            Iss_Postal_Code_Ofs;   /* offset to Postal Code    */
   int            Iss_Postal_Code_Len;   /* length of Postal Code    */
   int            Valid_Period_Str_Ofs;  /* offset to valid per begin*/
   int            Valid_Period_Str_Len;  /* length of valid per begin*/
   int            Valid_Period_End_Ofs;  /* offset to valid per end  */
   int            Valid_Period_End_Len;  /* length of valid per end  */
   int            Subj_Cmn_Nam_Ofs;      /* offset to Subj Cmn Name  */
   int            Subj_Cmn_Nam_Len;      /* length of Subj Cmn Name  */
   int            Subj_Country_Ofs;      /* offset to Subj Country   */
   int            Subj_Country_Len;      /* length of Subj Country   */
   int            Subj_State_Ofs;        /* offset to Subj State     */
   int            Subj_State_Len;        /* length of Subj State     */
   int            Subj_Locality_Ofs;     /* offset to Subj Locality  */
   int            Subj_Locality_Len;     /* length of Subj Locality  */
   int            Subj_Org_Ofs;          /* offset to Subj Org       */
   int            Subj_Org_Len;          /* length of Subj Org       */
   int            Subj_OrgUnit_Ofs;      /* offset to Subj OrgUnit   */
   int            Subj_OrgUnit_Len;      /* length of Subj OrgUnit   */
   int            Subj_Postal_Code_Ofs;  /* offset to Po