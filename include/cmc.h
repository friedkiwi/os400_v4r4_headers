 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/OPM-API-name or Service-pgm-name           */
 /*                                                                */
 /* Descriptive Name: Your description here.                       */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Describe your function here.                      */
 /*                                                                */
 /* Header Files Included: H/OPM-API-name or Service-pgm-name      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: List any typedef's here.                       */
 /*                                                                */
 /* Function Prototype List: List any prototypes here.             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Describe your function here.                      */
 /*                                                                */
 /* Header Files Included: H/OPM-API-name or Service-pgm-name      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: List any typedef's here.                       */
 /*                                                                */
 /* Function Prototype List: List any prototypes here.             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= Dxxxxx00     3D10  940504 KEECH     Updated for ILE-C     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/


#ifndef __cmc_h
  #define __cmc_h

/*********************************************************************/
/*            CPI Communications Enumerated Constants                */
/*********************************************************************/

#ifdef  __ILEC400__
  #define CM_ENTRY extern void

  #pragma linkage (CMACCP, OS,NOWIDEN)
  #pragma linkage (CMALLC, OS,NOWIDEN)
  #pragma linkage (CMCFM,  OS,NOWIDEN)
  #pragma linkage (CMCFMD, OS,NOWIDEN)
  #pragma linkage (CMCNVI, OS,NOWIDEN)
  #pragma linkage (CMCNVO, OS,NOWIDEN)
  #pragma linkage (CMDEAL, OS,NOWIDEN)
  #pragma linkage (CMECS,  OS,NOWIDEN)
  #pragma linkage (CMECT,  OS,NOWIDEN)
  #pragma linkage (CMEMBS, OS,NOWIDEN)
  #pragma linkage (CMEMN,  OS,NOWIDEN)
  #pragma linkage (CMEPLN, OS,NOWIDEN)
  #pragma linkage (CMESL,  OS,NOWIDEN)
  #pragma linkage (CMESUI, OS,NOWIDEN)
  #pragma linkage (CMFLUS, OS,NOWIDEN)
  #pragma linkage (CMINIT, OS,NOWIDEN)
  #pragma linkage (CMPTR,  OS,NOWIDEN)
  #pragma linkage (CMRCV,  OS,NOWIDEN)
  #pragma linkage (CMRTS,  OS,NOWIDEN)
  #pragma linkage (CMSEND, OS,NOWIDEN)
  #pragma linkage (CMSERR, OS,NOWIDEN)
  #pragma linkage (CMSCSP, OS,NOWIDEN)
  #pragma linkage (CMSCST, OS,NOWIDEN)
  #pragma linkage (CMSCSU, OS,NOWIDEN)
  #pragma linkage (CMSCT,  OS,NOWIDEN)
  #pragma linkage (CMSDT,  OS,NOWIDEN)
  #pragma linkage (CMSED,  OS,NOWIDEN)
  #pragma linkage (CMSF,   OS,NOWIDEN)
  #pragma linkage (CMSLD,  OS,NOWIDEN)
  #pragma linkage (CMSMN,  OS,NOWIDEN)
  #pragma linkage (CMSPLN, OS,NOWIDEN)
  #pragma linkage (CMSPTR, OS,NOWIDEN)
  #pragma linkage (CMSRT,  OS,NOWIDEN)
  #pragma linkage (CMSRC,  OS,NOWIDEN)
  #pragma linkage (CMSST,  OS,NOWIDEN)
  #pragma linkage (CMSSL,  OS,NOWIDEN)
  #pragma linkage (CMSTPN, OS,NOWIDEN)
  #pragma linkage (CMTRTS, OS,NOWIDEN)
#else
  #define CM_ENTRY extern "OS" void
#endif

#define CM_INT32 signed long int


#define CM_PTR *

typedef CM_INT32 CM_CONVERSATION_SECURITY_TYPE;
typedef CM_INT32 CM_CONVERSATION_STATE;
typedef CM_INT32 CM_CONVERSATION_TYPE;
typedef CM_INT32 CM_DATA_RECEIVED_TYPE;
typedef CM_INT32 CM_DEALLOCATE_TYPE;
typedef CM_INT32 CM_ERROR_DIRECTION;
typedef CM_INT32 CM_FILL;
typedef CM_INT32 CM_PREPARE_TO_RECEIVE_TYPE;
typedef CM_INT32 CM_RECEIVE_TYPE;
typedef CM_INT32 CM_REQUEST_TO_SEND_RECEIVED;
typedef CM_INT32 CM_RETURN_CODE;
typedef CM_INT32 CM_RETURN_CONTROL;
typedef CM_INT32 CM_SEND_TYPE;
typedef CM_INT32 CM_STATUS_RECEIVED;
typedef CM_INT32 CM_SYNC_LEVEL;

/*  conversation_state values  */

#define CM_INITIALIZE_STATE              (CM_CONVERSATION_STATE) 2
#define CM_SEND_STATE                    (CM_CONVERSATION_STATE) 3
#define CM_RECEIVE_STATE                 (CM_CONVERSATION_STATE) 4
#define CM_CONFIRM_STATE                 (CM_CONVERSATION_STATE) 6
#define CM_CONFIRM_SEND_STATE            (CM_CONVERSATION_STATE) 7
#define CM_CONFIRM_DEALLOCATE_STATE      (CM_CONVERSATION_STATE) 8
#define CM_DEFER_RECEIVE_STATE           (CM_CONVERSATION_STATE) 9
#define CM_DEFER_DEALLOCATE_STATE        (CM_CONVERSATION_STATE) 10
#define CM_SYNC_POINT_STATE              (CM_CONVERSATION_STATE) 11
#define CM_SYNC_POINT_SEND_STATE         (CM_CONVERSATION_STATE) 12
#define CM_SYNC_POINT_DEALLOCATE_STATE   (CM_CONVERSATION_STATE) 13

/*  conversation_type values  */

#define CM_BASIC_CONVERSATION            (CM_CONVERSATION_TYPE) 0
#define CM_MAPPED_CONVERSATION           (CM_CONVERSATION_TYPE) 1


/*  data_received values  */

#define CM_NO_DATA_RECEIVED              (CM_DATA_RECEIVED_TYPE) 0
#define CM_DATA_RECEIVED                 (CM_DATA_RECEIVED_TYPE) 1
#define CM_COMPLETE_DATA_RECEIVED        (CM_DATA_RECEIVED_TYPE) 2
#define CM_INCOMPLETE_DATA_RECEIVED      (CM_DATA_RECEIVED_TYPE) 3


/*  deallocate_type values  */

#define CM_DEALLOCATE_SYNC_LEVEL         (CM_DEALLOCATE_TYPE) 0
#define CM_DEALLOCATE_FLUSH              (CM_DEALLOCATE_TYPE) 1
#define CM_DEALLOCATE_CONFIRM            (CM_DEALLOCATE_TYPE) 2
#define CM_DEALLOCATE_ABEND              (CM_DEALLOCATE_TYPE) 3


/*  error_direction values  */

#define CM_RECEIVE_ERROR                 (CM_ERROR_DIRECTION) 0
#define CM_SEND_ERROR                    (CM_ERROR_DIRECTION) 1


/*  fill values  */

#define CM_FILL_LL                       (CM_FILL) 0
#define CM_FILL_BUFFER                   (CM_FILL) 1


/*  prepare_to_receive_type values  */

#define CM_PREP_TO_RECEIVE_SYNC_LEVEL    (CM_PREPARE_TO_RECEIVE_TYPE) 0
#define CM_PREP_TO_RECEIVE_FLUSH         (CM_PREPARE_TO_RECEIVE_TYPE) 1
#define CM_PREP_TO_RECEIVE_CONFIRM       (CM_PREPARE_TO_RECEIVE_TYPE) 2


/*  receive_type values  */

#define CM_RECEIVE_AND_WAIT              (CM_RECEIVE_TYPE) 0
#define CM_RECEIVE_IMMEDIATE             (CM_RECEIVE_TYPE) 1


/*  request_to_send_received values  */

#define CM_REQ_TO_SEND_NOT_RECEIVED      (CM_REQUEST_TO_SEND_RECEIVED) 0
#define CM_REQ_TO_SEND_RECEIVED          (CM_REQUEST_TO_SEND_RECEIVED) 1


/*  return_code values  */

#define CM_OK                            (CM_RETURN_CODE) 0
#define CM_ALLOCATE_FAILURE_NO_RETRY     (CM_RETURN_CODE) 1
#define CM_ALLOCATE_FAILURE_RETRY        (CM_RETURN_CODE) 2
#define CM_CONVERSATION_TYPE_MISMATCH    (CM_RETURN_CODE) 3
#define CM_PIP_NOT_SPECIFIED_CORRECTLY   (CM_RETURN_CODE) 5
#define CM_SECURITY_NOT_VALID            (CM_RETURN_CODE) 6
#define CM_SYNC_LVL_NOT_SUPPORTED_LU     (CM_RETURN_CODE) 7
#define CM_SYNC_LVL_NOT_SUPPORTED_PGM    (CM_RETURN_CODE) 8
#define CM_TPN_NOT_RECOGNIZED            (CM_RETURN_CODE) 9
#define CM_TP_NOT_AVAILABLE_NO_RETRY     (CM_RETURN_CODE) 10
#define CM_TP_NOT_AVAILABLE_RETRY        (CM_RETURN_CODE) 11
#define CM_DEALLOCATED_ABEND             (CM_RETURN_CODE) 17
#define CM_DEALLOCATED_NORMAL            (CM_RETURN_CODE) 18
#define CM_PARAMETER_ERROR               (CM_RETURN_CODE) 19
#define CM_PRODUCT_SPECI