#pragma nomargins nosequence
#pragma checkout(suspend)
/*********************************************************************/
/*                                                                   */
/* Header File Name:  qtossapi.h                                     */
/*                                                                   */
/* Descriptive Name:  SNMP Subagent API declarations                 */
/*                                                                   */
/*                                                                   */
/* 5716-SS1 (C) Copyright IBM Corp. 1993, 1995                       */
/* All rights reserved.                                              */
/* US Goverment Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used by the SNMP subagent developer     */
/*          to create a SNMP subagent.                               */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          (none)                                                   */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          DPI_PACKET_LEN()                                         */
/*                                                                   */
/*                                                                   */
/* Function list:                                                    */
/*                                                                   */
/*          connectSNMP()                                            */
/*          disconnectSNMP()                                         */
/*          debugDPI()                                               */
/*          fDPIparse()                                              */
/*          fDPIset()                                                */
/*          mkDPIAreYouThere()                                       */
/*          mkDPIclose()                                             */
/*          mkDPIopen()                                              */
/*          mkDPIregister()                                          */
/*          mkDPIresponse()                                          */
/*          mkDPIset()                                               */
/*          mkDPItrap()                                              */
/*          mkDPIunregister()                                        */
/*          pDPIpacket()                                             */
/*          receiveDPIpacket()                                       */
/*          sendDPIpacket()                                          */
/*          waitDPIpacket()                                          */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          snmp_dpi_hdr                                             */
/*          snmp_dpi_open_packet                                     */
/*          snmp_dpi_close_packet                                    */
/*          snmp_dpi_reg_packet                                      */
/*          snmp_dpi_ureg_packet                                     */
/*          snmp_dpi_get_packet                                      */
/*          snmp_dpi_next_packet                                     */
/*          snmp_dpi_bulk_packet                                     */
/*          snmp_dpi_set_packet                                      */
/*          snmp_dpi_resp_packet                                     */
/*          snmp_dpi_trap_packet                                     */
/*          sa_dataq_msg                                             */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D91705       3D60  930818  ROCH     New include.           */
/*                                                                   */
/*                                                                   */
/*   End CFD List.                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*********************************************************************/

#ifndef QTOSSAPI_h
#define QTOSSAPI_h


/*---------------------------------------------------------------------
|
|   constants used in subagent API
|
*/
#ifndef SNMP_DPI_BUFSIZE
#define SNMP_DPI_BUFSIZE    32768     /* max size of a DPI packet   */
#endif



/* These are the codes for the SNMP_DPI packet types. */
#define SNMP_DPI_GET            1
#define SNMP_DPI_GETNEXT        2
#define SNMP_DPI_SET            3
#define SNMP_DPI_TRAP           4
#define SNMP_DPI_RESPONSE       5
#define SNMP_DPI_REGISTER       6
#define SNMP_DPI_UNREGISTER     7
#define SNMP_DPI_OPEN           8
#define SNMP_DPI_CLOSE          9
#define SNMP_DPI_COMMIT        10
#define SNMP_DPI_UNDO          11
#define SNMP_DPI_GETBULK       12
#define SNMP_DPI_TRAPV2        13
#define SNMP_DPI_INFORM        14
#define SNMP_DPI_ARE_YOU_THERE 15


/* We support DPI Version 2 Release 0. */
#define SNMP_DPI_PROTOCOL   2
#ifndef SNMP_DPI_VERSION
#define SNMP_DPI_VERSION    2
#endif
#ifndef SNMP_DPI_RELEASE
#define SNMP_DPI_RELEASE    0
#endif


/* DPI types */
#define SNMP_TYPE_MASK           0x7f
#define SNMP_TYPE_Integer32    (128|1)
#define SNMP_TYPE_OCTET_STRING      2
#define SNMP_TYPE_OBJECT_IDENTIFIER 3
#define SNMP_TYPE_NULL              4
#define SNMP_TYPE_IpAddress         5
#define SNMP_TYPE_Counter32    (128|6)
#define SNMP_TYPE_Gauge32      (128|7)
#define SNMP_TYPE_TimeTicks    (128|8)
#define SNMP_TYPE_DisplayString     9
#define SNMP_TYPE_BIT_STRING        10
#define SNMP_TYPE_NsapAddress       11
#define SNMP_TYPE_UInteger32   (128|12)
#define SNMP_TYPE_Counter64         13
#define SNMP_TYPE_Opaque            14
#define SNMP_TYPE_noSuchObject      15
#define SNMP_TYPE_noSuchInstance    16
#define SNMP_TYPE_endOfMibView      17

/* Codes for the ret_code field of DPI response packet */
#ifndef snmp_baseH
#define SNMP_ERROR_noError             0
#define SNMP_ERROR_tooBig              1
#define SNMP_ERROR_noSuchName          2
#define SNMP_ERROR_badValue            3
#define SNMP_ERROR_readOnly            4
#define SNMP_ERROR_genErr              5
#define SNMP_ERROR_noAccess            6
#define SNMP_ERROR_wrongType           7
#define SNMP_ERROR_wrongLength         8
#define SNMP_ERROR_wrongEncoding       9
#define SNMP_ERROR_wrongValue          10
#define SNMP_ERROR_noCreation          11
#define SNMP_ERROR_inconsistentValue   12
#define SNMP_ERROR_resourceUnavailable 13
#define SNMP_ERROR_commitFailed        14
#define SNMP_ERROR_undoFailed          15
#define SNMP_ERROR_authorizationError  16
#define SNMP_ERROR_notWritable         17
#define SNMP_ERROR_inconsistentName    18
#endif /* ndef snmp_baseH */

#define SNMP_ERROR_DPI_noError                             0
#define SNMP_ERROR_DPI_otherError                        101
#define SNMP_ERROR_DPI_notFound                          102
#define SNMP_ERROR_DPI_alreadyRegistered                 103
#define SNMP_ERROR_DPI_higherPriorityRegistered          104
#define SNMP_ERROR_DPI_mustOpenFirst                     105
#define SNMP_ERROR_DPI_notAuthorized                     106
#define SNMP_ERROR_DPI_viewSelectionNotSupported         107
#define SNMP_ERROR_DPI_getBulkSelectionNotSupported      108
#define SNMP_ERROR_DPI_duplicateSubAgentIdentifier       109
#define SNMP_ERROR_DPI_invalidDisplayString              110
#define SNMP_ERROR_DPI_characterSetSelectionNotSupported 111

/* SNMP DPI UNREGISTER reason codes */
#define SNMP_UNREGISTER_otherReason                1
#define SNMP_UNREGISTER_goingDown                  2
#define SNMP_UNREGISTER_justUnregister             3
#define SNMP_UNREGISTER_newRegistration            4
#define SNMP_UNREGISTER_higherPriorityRegistered   5
#define SNMP_UNREGISTER_byManager                  6
#define SNMP_UNREGISTER_timeout                    7

/* SNMP DPI CLOSE reason codes */
#define SNM