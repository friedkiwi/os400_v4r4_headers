 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QZLSLSTI                                   */
 /*                                                                */
 /* Descriptive Name: List NetServer Information                   */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1999                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the QZLSLSTI API.         */
 /*                                                                */
 /* Header Files Included: H/QZLSLSTI                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSLSTI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 BRIDGET   New Include           */
 /* $A1= D95445       4D30  970807 V2KEA155  Added new structures: */
 /* $A2= D97125       4D40  980708 BAZEY     Add small share info  */
 /*                                          structure. Changes to */
 /*                                          0100 format.          */
 /* $A3= P3678573     4D40  981031 BRIDGET   Add ellipsis for      */
 /*                                          optional parameters.  */
 /* $A3= P3678573     4D40  981007 BAZEY     Add formats 0101 and  */
 /*                                          0201.                 */
 /* $A4= P3685025     4D40  981209 BAZEY     Add comma after the   */
 /*                                          ErrorCode parameter   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZLSLSTI_h
#define QZLSLSTI_h

#include <QZLS.H>

/********************************************************************/
/*                     Definitions                                  */
/********************************************************************/
#define SERVER_NAME_LENGTH 15
#define DOMAIN_NAME_LENGTH 15
#define TEXT_DESC_LENGTH 50
#define USER_PROFILE_LENGTH 10
#define WINS_ADDRESS_LENGTH 15
#define SCOPE_LENGTH 224
#define MAX_PATH_NAME  1024
#define NNLEN 12
#define WORKSTATION_LENGTH 15
#define OBJECT_LENGTH 10
#define PRINT_DRIVER_TYPE_LENGTH 50
#define FORMAT_LENGTH 8
#define QUALIFIER_LENGTH 15

/********************************************************************/
/*                     API External Structures                      */
/********************************************************************/

typedef _Packed struct Qzls_Input_Parameter {
  char userSpaceName[OBJECT_LENGTH];
  char userSpaceLibrary[OBJECT_LENGTH];
  char format[FORMAT_LENGTH];
  char informationQualifier[QUALIFIER_LENGTH];
} Qzls_Input_Parameter_t;

typedef _Packed struct Qzls_Format_ZLSL0100 {
  int sizeOfThisEntry;
  char shareName[NNLEN];
  int deviceType;
  int permissions;
  int maxUsers;
  int currentUsers;
  int spoolFileType;
  int pathNameOffset;
  int pathNameLength;
  char qualifiedOutputQueue[2*OBJECT_LENGTH];
  char printerDriverType[PRINT_DRIVER_TYPE_LENGTH];
  char textDescription[TEXT_DESC_LENGTH];
  /*char path[MAX_PATH_NAME]; */
} Qzls_Format_ZLSL0100_t;

typedef _Packed struct Qzls_Format_ZLSL0101 {
  int sizeOfThisEntry;
  char shareName[NNLEN];
  int deviceType;
  int permissions;
  int maxUsers;
  int currentUsers;
  int spoolFileType;
  int pathNameOffset;
  int pathNameLength;
  char qualifiedOutputQueue[2*OBJECT_LENGTH];
  char printerDriverType[PRINT_DRIVER_TYPE_LENGTH];
  char textDescription[TEXT_DESC_LENGTH];
  char qualifiedPrinterFile[2*OBJECT_LENGTH];
  int textConversionCCSID;
  int extensionOffset;
  int numberOfExtensions;
  char textConvertingFlag;
  /* char path[MAX_PATH_NAME]; */
  /* Qzls_Extension_Table_Entry_t extEntries[numberOfExtensions]; */
} Qzls_Format_ZLSL0101_t;

typedef _Packed struct Qzls_Format_ZLSL0200 {
  int codePage;
  int pendingCodePage;
  int idleTimeOut;
  int pendingIdleTimeOut;
  int oplockTimeOut;
  int pendingOplockTimeOut;
  int browsingInterval;
  int pendingBrowseInterval;
  int WINSProxyEnablement;
  int pendingWINSProxyEnablement;
  int guestLogonSupport;
  int pendingGuestLogonSupport;
  char guestLogonUserProfile[USER_PROFILE_LENGTH];
  char pendingGuestLogonUserProfile[USER_PROFILE_LENGTH];
  char serverName[SERVER_NAME_LENGTH];
  char pendingServerName[SERVER_NAME_LENGTH];
  char domainName[DOMAIN_NAME_LENGTH];
  char pendingDomainName[DOMAIN_NAME_LENGTH];
  char textDescription[TEXT_DESC_LENGTH];
  char pendingTextDescription[TEXT_DESC_LENGTH];
  char WINSPrimaryServer[WINS_ADDRESS_LENGTH];
  char pendingWINSPrimaryServer[WINS_ADDRESS_LENGTH];
  char WINSSecondaryServer[WINS_ADDRESS_LENGTH];
  char pendingWINSSecondaryServer[WINS_ADDRESS_LENGTH];
  char scopeId[SCOPE_LENGTH];
  char pendingScopeId[SCOPE_LENGTH];
} Qzls_Format_ZLSL0200_t;

typedef _Packed struct Qzls_Format_ZLSL0201 {
  int codePage;
  int pendingCodePage;
  int idleTimeOut;
  int pendingIdleTimeOut;
  int oplockTimeOut;
  int pendingOplockTimeOut;
  int browsingInterval;
  int pendingBrowseInterval;
  int WINSProxyEnablement;
  int pendingWINSProxyEnablement;
  int guestLogonSupport;
  int pendingGuestLogonSupport;
  char guestLogonUserProfile[USER_PROFILE_LENGTH];
  char pendingGuestLogonUserProfile[USER_PROFILE_LENGTH];
  char serverName[SERVER_NAME_LENGTH];
  char pendingServerName[SERVER_NAME_LENGTH];
  char domainName[DOMAIN_NAME_LENGTH];
  char pendingDomainName[DOMAIN_NAME_LENGTH];
  char textDescription[TEXT_DESC_LENGTH];
  char pendingTextDescription[TEXT_DESC_LENGTH];
  char WINSPrimaryServer[WINS_ADDRESS_LENGTH];
  char pendingWINSPrimaryServer[WINS_ADDRESS_LENGTH];
  char WINSSecondaryServer[WINS_ADDRESS_LENGTH];
  char pendingWINSSecondaryServer[WINS_ADDRESS_LENGTH];
  char scopeId[SCOPE_LENGTH];
  char pendingScopeId[SCOPE_LENGTH];
  char systemNameAccess;
  char pendingSystemNameAccess;
} Qzls_Format_ZLSL0201_t;

typedef _Packed struct Qzls_Format_ZLSL0300 {
  char workstationName[WORKSTATION_LENGTH];
  char userName[USER_PROFILE_LENGTH];
  char reserved1[3];
  int numberOfConnections;
  int numberOfOpens;
  int numberOfSessions;
  int sessionTime;
  int sessionIdleTime;
  char logonType;
  char encryptedPasswordUsed;
  char reserved2[14];
} Qzls_Format_ZLSL0300_t;

typedef _Packed struct Qzls_Format_ZLSL0400 {
  int numberOfOpens;
  int printJobsQueued;
  int sessionStarts;
  int sessionAutoDisconnects;
  int sessionRegDisconnects;
  int duplicateSessions;
  int sessionErrors;
  int passwordViolations;
  int guestLogonSupport;
  int unknownUserConnected;
  int serverBytesSentLow;
  int serverBytesSentHigh;
  int serverBytesReceivedLow;
  int serverBytesReceivedHigh;
  int averageResponseTime;
  char serverStartTime[13];
  char serverResetTime[13];
  char