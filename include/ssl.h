#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  ssl.h                                          */
/*                                                                   */
/* Descriptive Name: Secure Sockets Layer (SSL) API Definition       */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* 5769-SS1                                                          */
/* (C) Copyright IBM Corp. 1997, 1999                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Copyright (c) 1995.  Netscape Communications Corporation.  All    */
/* rights reserved.  This use of this Secure Sockets Layer Reference */
/* Implementation (the "Software") is governed by the terms of the   */
/* SSL Reference Implementation License Agreement.  Please read the  */
/* accompanying "License" file for a description of the rights       */
/* granted.  Any other third party materials you use with this       */
/* Software may be subject to additional license restrictions from   */
/* the licensors of such third party software and/or additional      */
/* export restrictions.  The SSL Implementation License Agreement    */
/* grants you no rights to any such third party material.            */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the SSL API                   */
/*                                                                   */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          SSLHandleStr                                             */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          SSL_Create                                               */
/*          SSL_Destroy                                              */
/*          SSL_Handshake                                            */
/*          SSL_Init                                                 */
/*          SSL_Read                                                 */
/*          SSL_Write                                                */
/*          SSL_Init_Application                                     */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= Dxxxxxxx     4D40  960828  ROCH     New include.           */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __ssl_h
  #define __ssl_h

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

/*********************************************************************/
/* Macros to set flags parameter of SSL_Create()                     */
/*********************************************************************/

#define SSL_ENCRYPT_MASK  (1<<0)      /* Encrypt the connection mask */
#define SSL_ENCRYPT       (1<<0)      /* Encrypt the connection      */
#define SSL_DONT_ENCRYPT  (0)         /* Don't encrypt the connection*/

/*********************************************************************/
/* Macros to set how parameter of SSL_Handshake()                    */
/*********************************************************************/

#define SSL_HANDSHAKE_AS_CLIENT                               0
#define SSL_HANDSHAKE_AS_SERVER                               1
#define SSL_HANDSHAKE_AS_SERVER_WITH_CLIENT_AUTH              2
#define SSL_HANDSHAKE_AS_SERVER_WITH_OPTIONAL_CLIENT_AUTH     3

/*********************************************************************/
/* Macros for protocol field in SSLHandle                            */
/*********************************************************************/

#define SSL_VERSION_CURRENT   0       /* V3.0 with V2.0 compatibility*/
#define SSL_VERSION_2 2               /* SSL Version 2.0             */
#define SSL_VERSION_3 3               /* SSL Version 3.0             */

/*********************************************************************/
/* Macros for return code from SSL functions                         */
/*********************************************************************/

#define SSL_ERROR_NO_CIPHERS                    -1
#define SSL_ERROR_NO_CERTIFICATE                -2
#define SSL_ERROR_BAD_CERTIFICATE               -4
#define SSL_ERROR_UNSUPPORTED_CERTIFICATE_TYPE  -6
#define SSL_ERROR_IO                            -10
#define SSL_ERROR_BAD_MESSAGE                   -11
#define SSL_ERROR_BAD_MAC                       -12
#define SSL_ERROR_UNSUPPORTED                   -13
#define SSL_ERROR_BAD_CERT_SIG                  -14
#define SSL_ERROR_BAD_CERT                      -15
#define SSL_ERROR_BAD_PEER                      -16
#define SSL_ERROR_PERMISSION_DENIED             -17
#define SSL_ERROR_SELF_SIGNED                   -18
#define SSL_ERROR_BAD_MALLOC                    -20
#define SSL_ERROR_BAD_STATE                     -21
#define SSL_ERROR_SOCKET_CLOSED                 -22
#define SSL_ERROR_NOT_TRUSTED_ROOT              -23
#define SSL_ERROR_CERT_EXPIRED                  -24
#define SSL_ERROR_BAD_DATE                      -25
#define SSL_ERROR_BAD_KEY_LEN_FOR_EXPORT        -26
#define SSL_ERROR_NOT_KEYRING                   -90
#define SSL_ERROR_KEYPASSWORD_EXPIRED           -91
#define SSL_ERROR_CERTIFICATE_REJECTED          -92
#define SSL_ERROR_SSL_NOT_AVAILABLE             -93
#define SSL_ERROR_NO_INIT                       -94
#define SSL_ERROR_NO_KEYRING                    -95
#define SSL_ERROR_NOT_ENABLED                   -96
#define SSL_ERROR_BAD_CIPHER_SUITE              -97
#define SSL_ERROR_CLOSED                        -98
#define SSL_ERROR_UNKNOWN                       -99
#define SSL_ERROR_NOT_REGISTERED                -1009

/*********************************************************************/
/* Macros for cipherKind                                             */
/*********************************************************************/

#define SSL_CK_RC4_128_WITH_MD5                0x01,0x00,0x80
#define SSL_CK_RC4_128_EXPORT40_WITH_MD5       0x02,0x00,0x80
#define SSL_CK_RC2_128_CBC_WITH_MD5            0x03,0x00,0x80
#define SSL_CK_RC2_128_CBC_EXPORT40_WITH_MD5   0x04,0x00,0x80
#define SSL_CK_DES_64_CBC_WITH_MD5             0x06,0x00,0x40
#define SSL_CK_DES192_EDE3_CBC_WITH_MD5        0x07,0x00,0xC0

/*********************************************************************/
/* Macros for cipherSuiteList                                        */
/*********************************************************************/
/* All of these ciphersuites will work when interoperating from      */
/* AS/400 to AS/400 SSL implementation.                              */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/* The following cipher suites will work when using version 3.0 to   */
/* version 3.0 SSL implementations                                   */
/*********************************************************************/
#define              SSL_NULL_WI