/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:   qzhbcgi.h                                     */
/*                                                                   */
/* Header File Description:  CGI interface module header file        */
/*                                                                   */
/* 5769-DG1                                                          */
/* (C) Copyright IBM Corp. 1998                                      */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/* Description: This CGI interface module header provides interfaces */
/*              for CGI scripts (user programs that can be called by */
/*              the HTTP server) to meet the HTTP-defined "Common    */
/*              Gateway Interface."                                  */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None                                              */
/*                                                                   */
/* Function Prototype List: QtmhGetEnv   - get environment variable  */
/*                          QtmhRdStin   - read from stdin           */
/*                          QtmhWrStout  - write to stdout           */
/*                          QtmhCvtDB    - convert from CGI string to*/
/*                                         structure according to DDS*/
/*                                         data definition.          */
/*                          QtmhPutEnv   - put environment variable  */
/*                          QtmhCgiUtils - generate full response    */
/*                                         for non-parsed header CGI */
/*                                         programs                  */
/*                          QtmhCgiParse - Parse the QUERY_STRING    */
/*                                         environment variable or   */
/*                                         STDIN for CGI programs    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $B0= D95742       4D30  980310 Rochester: New for DGO             */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QZHBCGI_H
#define _QZHBCGI_H

#ifndef __QTMH_EXTERN
    #ifdef __ILEC400__
        #define QTMH_EXTERN extern
    #else
        #define QTMH_EXTERN extern "C"
    #endif

    #define __QTMH_EXTERN
#endif


/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/

/*********************************************************************/
/*  Macros                                                           */
/*********************************************************************/

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/

/*********************************************************************/
/*  Function Prototypes                                              */
/*********************************************************************/

/*********************************************************************/
/* HTTP CGI Get Environment Variable API prototype.                  */
/*********************************************************************/
QTMH_EXTERN void QtmhGetEnv(char *, /* env. variable value receiver */
                            int *,   /* env. variable receiver length*/
                            int *,   /* length of env. variable value*/
                            char *,  /* env. variable name           */
                            int *,   /* env. variable name length    */
                            void *); /* error code.                  */

#pragma argument(QtmhGetEnv, OS)

/*********************************************************************/
/* HTTP CGI Read from Standard Input (stdin) API prototype.          */
/*********************************************************************/
QTMH_EXTERN void QtmhRdStin(void *,  /* stdin data receiver         */
                            int *,   /* stdin data receiver length   */
                            int *,  /* length of data read from stdin*/
                            void *); /* error code.                  */

#pragma argument(QtmhRdStin, OS)

/*********************************************************************/
/* HTTP CGI Write to Standard Output (stdout) API prototype.         */
/*********************************************************************/
QTMH_EXTERN void QtmhWrStout(void *, /* stdout data receiver        */
                            int *,   /* data length                  */
                            void *); /* error code.                  */

#pragma argument(QtmhWrStout, OS)

/*********************************************************************/
/* HTTP CGI Convert CGI keyword parms to structure using DDS file    */
/*  API prototype.                                                   */
/*********************************************************************/
QTMH_EXTERN void QtmhCvtDb(void *, /* qualified DDS file name.      */
                           char *, /* buffer containing the string of
                                      CGI keyword parameters to be
                                      parsed.                        */
                           int *,  /* length of the string of CGI
                                      keyword parameters to be parsed*/
                           void *, /* output buffer into which the
                                      parsed parameter values will be
                                      stored.                        */
                           int *,  /* length of buffer provided for
                                      parsed parameter values.       */
                           int *,  /* response length .              */
                           int *,  /* response code   .              */

                           void *); /* error code.                   */

#pragma argument(QtmhCvtDb, OS)

/*********************************************************************/
/* HTTP CGI Put Environment Variable API prototype.              @A1A*/
/*********************************************************************/
QT