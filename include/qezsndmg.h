/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QEZSNDMG                                  */
/*                                                               */
/* Descriptive Name: Send Message API.                           */
/*                                                               */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                   */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Send Message API sends a message to one or   */
/*              more users or display stations and optionally    */
/*              shows the Operation Assistant Send a Message     */
/*              display before sending the message.              */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QEZSNDMG                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940317 XZS0786:  New Include          */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

#ifndef QEZSNDMG_h
#define QEZSNDMG_h

#ifdef __ILEC400__
    #pragma linkage (QEZSNDMG,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for calling Operational Assistant API QEZSNMG      */
/*****************************************************************/
void QEZSNDMG();                 /* No required parameters.
                                    Optional Parameter Group 1:
                                      Message type
                                      Delivery mode
                                      Message text
                                      Length of message text
                                      List of user profiles
                                      Number of user profiles
                                      Message sent indicator
                                      Function requested
                                      Error code
                                    Optional Parameter Group 2:
                                      Show send a message disp
                                      Qualified message queue
                                      Name type indicator        */
#endif
