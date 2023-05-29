#ifndef _QTQUSF_CLEINC
#define _QTQUSF_CLEINC

/****   Start of Specifications   ************************************/
/*                                                                   */
/*  File Name qtqusf.cleinc                                          */
/*                                                                   */
/*                                                                   */
/*  Description:  TQ User-state Functions                            */
/*                                                                   */
/* Service Program Name:  QTQUSF                                     */
/*                                                                   */
/*                        Domain: USER                               */
/*                        State: SYSTEM                              */
/*                                                                   */
/*                                                                   */
/* IBM Confidential                                                  */
/*                                                                   */
/* OCO Source Materials                                              */
/*                                                                   */
/* The Source code for this program is not published or otherwise    */
/* divested of its trade secrets, irrespective of what has been      */
/* deposited with the U.S. Copyright Office                          */
/*                                                                   */
/* 5716-SS1                                                          */
/* (C) Copyright IBM Corp. 1996,1996                                 */
/*                                                                   */
/* NOTE:                                                             */
/*  5716-SS1 is the product ID for V3R6.  If the code is writen      */
/*    for another Version the correct product id must be used.       */
/*  When the code is changed for another version or product          */
/*     add the new product id for that version or product            */
/*     to the existing one(s):                                       */
/*     5716-SS1, 57xx-SS1    or   5716-SS1, 5716-xxx                 */
/*  First date is the original year the source code is written.      */
/*  Second date is the year any changes to the source code is made.  */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/****   End of Specifications   **************************************/


/*********************************************************************/
/*  #includes                                                        */
/*********************************************************************/
#include <qtqcvt.H>

/*********************************************************************/
/*  #defines & typedefs                                              */
/*********************************************************************/


/*********************************************************************/
/*  Externalized Functions:                                          */
/*                                                                   */
/*********************************************************************/
/*                                                                   */
/*  int QtqValidateCCSID(int inCCSID);                               */
/*                                                                   */
/*  Description:  Validate input CCSID.  Determines if the input     */
/*                CCSID is supported.  If so, the encoding scheme    */
/*                for the passed CCSID is returned.                  */
/*                                                                   */
/*                                                                   */
/*  Inputs:  Integer representing the CCSID to be validated.         */
/*                                                                   */
/*  Returns:  If the CCSID is supported, the encoding scheme type    */
/*             is returned as a value greater than zero (rc > 0).    */
/*            Otherwise, one of these error codes is returned:       */
/*                                                                   */
/*             -2      Input CCSIS is out of range (1 - 65535)       */
/*             -1      CCSID not found                               */
/*              0      CCSID is a Special-purpose CCSID, as defined  */
/*                      by CORBA.                                    */
/*                                                                   */
/*                                                                   */
/*  Notes:  Encoding schemes are found in the NLS documentation.     */
/*                                                                   */
/*          If the user only desires to determine if the passed      */
/*          CCSID is supported, then check the returned integer for  */
/*          a value greater than zero.                               */
/*                                                                   */
/*********************************************************************/

#ifndef __ILEC400___
   extern "C"
#endif

 int QtqValidateCCSID(int inCCSID);  /* Note: Pass inCCSID by VALUE. */


#endif /* _QTQUSF_CLEINC */
