 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QP0LFLOP                                   */
 /*                                                                */
 /* Descriptive Name: Perform File System Operation.               */
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
 /* Description: The Perform File System Operation API             */
 /*              performs miscellaneous operations on objects      */
 /*              in the integrated file system.  See each          */
 /*              individual operation below for details.           */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: QP0L_RETRIEVE_NETGROUP_FILE_ENTRIES               */
 /*              QP0L_WRITE_NETGROUP_FILE_ENTRIES                  */
 /*              QP0L_MEMBER_IS_A_HOST_NAME                        */
 /*              QP0L_MEMBER_IS_A_NETGROUP_NAME                    */
 /*              QP0L_MEMBER_IS_AN_IP_ADDRESS                      */
 /*              QP0L_MEMBER_IS_UNKNOWN                            */
 /*                                                                */
 /* Structure List: Qp0l_FLOP0100_Netgroup_Entry_T                 */
 /*                 Qp0l_FLOP0100_Member_Name_T                    */
 /*                 Qp0l_FLOP0100_Output_T                         */
 /*                 Qp0l_FLOP0200_Input_T                          */
 /*                                                                */
 /* Function Prototype List: QP0LFLOP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9589200     4D30  971115 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


#ifndef QP0LFLOP_h
#define QP0LFLOP_h

 /******************************************************************/
 /* The following values are valid File Ops:                       */
 /*                                                                */
 /* QP0L_RETRIEVE_NETGROUP_FILE_ENTRIES - This will return all of  */
 /*      the netgroup definitions from the /etc/netgroup file.     */
 /*      Invoke the QP0LFLOP API as follows:                       */
 /*                                                                */
 /*      QP0LFLOP(QP0L_RETRIEVE_NETGROUP_FILE_ENTRIES,             */
 /*               (char *)NULL,                                    */
 /*               0,                                               */
 /*               (char *)buffer, --> see Qp0l_FLOP0100_Output_T   */
 /*               buffer_length,                                   */
 /*               (void *)error_buffer);                           */
 /*                                                                */
 /* QP0L_WRITE_NETGROUP_FILE_ENTRIES - This will over-write the    */
 /*      the netgroup definitions in the /etc/netgroup file with   */
 /*      entries you provide.                                      */
 /*      Invoke the QP0LFLOP API as follows:                       */
 /*                                                                */
 /*      QP0LFLOP(QP0L_WRITE_NETGROUP_FILE_ENTRIES,                */
 /*               (char *)buffer, --> see Qp0l_FLOP0200_Input_T    */
 /*               buffer_length,                                   */
 /*               (char *)NULL,                                    */
 /*               0,                                               */
 /*               (void *)error_buffer);                           */
 /*                                                                */
 /******************************************************************/
#define QP0L_RETRIEVE_NETGROUP_FILE_ENTRIES   1
#define QP0L_WRITE_NETGROUP_FILE_ENTRIES      2

 /******************************************************************/
 /*  The following are valid values for Member_Name_Status:        */
 /*                                                                */
 /*  QP0L_MEMBER_IS_A_HOST_NAME - The member name refers to a      */
 /*       host name.                                               */
 /*                                                                */
 /*  QP0L_MEMBER_IS_A_NETGROUP_NAME - The member name refers to a  */
 /*       netgroup name.                                           */
 /*                                                                */
 /*  QP0L_MEMBER_IS_AN_IP_ADDRESS - The member name refers to an   */
 /*       IP address of the form xxx.xxx.xxx.xxx  .                */
 /*                                                                */
 /******************************************************************/
#define QP0L_MEMBER_IS_A_HOST_NAME     1
#define QP0L_MEMBER_IS_A_NETGROUP_NAME 2
#define QP0L_MEMBER_IS_AN_IP_ADDRESS   3
#define QP0L_MEMBER_IS_UNKNOWN         4

typedef _Packed struct Qp0l_FLOP0100_Netgroup_Entry
{
    unsigned int              Length_of_Entry;
    unsigned int              Length_of_Netgroup_Name;
    unsigned int              Displacement_to_Member_Names;
    unsigned int              Number_of_Member_Names;
  /*char                      Netgroup_Name;*/ /* varying len data*/
} Qp0l_FLOP0100_Netgroup_Entry_T;

typedef _Packed struct Qp0l_FLOP0100_Member_Name
{
    unsigned int              Length_of_Member_Name_Entry;
    unsigned int              Member_Name_Status;
    unsigned int              Length_of_Member_Name;
  /*char                      Member_Name;*/ /* varying len data*/
} Qp0l_FLOP0100_Member_Name_T;

typedef _Packed struct Qp0l_FLOP0100_Output
{
    unsigned int              Bytes_Returned;
    unsigned int              Bytes_Available;
    unsigned int              Number_of_Entries;
  /*Qp0l_FLOP0100_Netgroup_Entry  Netgroup_Entry; */ /* vary len data */
  /*Qp0l_FLOP0100_Member_Name     Member_Name_Entry;              */
/*================================================================*/
/*   The format of what is included in the buffer that starts     */
/*   with the Netgroup_Entry is as follows:                       */
/*                                                                */
/*   The first byte of Netgroup_Entry is the first byte of the    */
/*   Qp0l_FLOP0100_Netgroup_Entry structure:                      */
/*             |                                                  */
/*             ---------------------|                             */
/*                                  V                             */
/*  unsigned int              Length_of_Entry;                    */
/*  unsigned int              Length_of_Netgroup_Name;            */
/*  unsigned int         ---- Displacement_to_Member_Names;       */
/*  unsigned int         |    Number_of_Member_Names;             */
/*  char                 |    N