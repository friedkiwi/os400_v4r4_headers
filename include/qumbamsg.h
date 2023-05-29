 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUMBAMSG                                   */
 /*                                                                */
 /* Descriptive Name: Ultimedia System Facilities multimedia       */
 /*                   exceptions                                   */
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
 /* Description:                                                   */
 /*    Exception IDs returned by System Facilities multimedia      */
 /*    APIs.                                                       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2508200     3D10  931201           New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _QUMBAMSG_INCLUDED         /* Check if already included */
#define _QUMBAMSG_INCLUDED         /* Set the included flag     */

/* The following exceptions are generated on the workstation: */
#define QUMBRC_MM_MEM_ALLOC_FAILURE             "QMB0801"
#define QUMBRC_MM_MCI_OPEN_FAILURE              "QMB0802"
#define QUMBRC_MM_MCI_CLOSE_FAILURE             "QMB0803"
#define QUMBRC_MM_MCI_CAPSITEM_FAILURE          "QMB0804"
#define QUMBRC_MM_MCI_DEVTYPE_FAILURE           "QMB0805"
#define QUMBRC_MM_MCI_STATUSITEM_FAILURE        "QMB0806"
#define QUMBRC_MM_MCI_CAPSMESSAGE_FAILURE       "QMB0807"
#define QUMBRC_MM_MCI_DEVNAME_FAILURE           "QMB0808"
#define QUMBRC_MM_INTERNAL_ERROR                "QMB0809"
#define QUMBRC_MM_NO_NOTEBOOK_DEFINED           "QMB080A"
#define QUMBRC_MM_NOTEBOOK_INIT_ERROR           "QMB080B"
#define QUMBRC_MM_NOTEBOOKPAGE_INIT_ERROR       "QMB080C"
#define QUMBRC_MM_FORMAT_ERROR                  "QMB080D"
#define QUMBRC_MM_MCI_EXTENSIONS_FAILURE        "QMB080E"
#define QUMBRC_MM_BUFFER_TOO_SMALL              "QMB080F"
#define QUMBRC_MM_MCI_LOAD_FAILURE              "QMB0810"
#define QUMBRC_MM_MCI_CONNECTORINFO_FAILURE     "QMB0811"
#define QUMBRC_MM_MCI_PLAY_FAILURE              "QMB0812"
#define QUMBRC_MM_MCI_PAUSE_FAILURE             "QMB0813"
#define QUMBRC_MM_MCI_STOP_FAILURE              "QMB0814"
#define QUMBRC_MM_MCI_RESUME_FAILURE            "QMB0815"
#define QUMBRC_MM_MCI_SEEK_FAILURE              "QMB0816"
#define QUMBRC_MM_MCI_POS_ADVISE_FAILURE        "QMB0817"
#define QUMBRC_MM_MCI_SET_FAILURE               "QMB0818"
#define QUMBRC_MM_MCI_STATUS_FAILURE            "QMB0819"
#define QUMBRC_MM_MCI_COMMAND_FAILURE           "QMB081A"
#define QUMBRC_MM_MCI_ACQUIRE_DEVICE_FAILURE    "QMB081B"
#define QUMBRC_MM_MMIO_GENERAL_FAILURE          "QMB081C"
#define QUMBRC_MM_MCI_CUE_FAILURE               "QMB081D"
#define QUMBRC_MM_MCI_STEP_FAILURE              "QMB081E"
#define QUMBRC_MM_MCI_REWIND_FAILURE            "QMB081F"
#define QUMBRC_MM_MCI_SET_CUEPOINT_FAILURE      "QMB0820"
#define QUMBRC_MM_LAUNCH_FAILURE                "QMB0821"
#define QUMBRC_MM_UNSUPPORTED_FILE_FORMAT       "QMB0822"
#define QUMBRC_MM_INVALID_ASYNC_ID              "QMB0823"
#define QUMBRC_MM_INVALID_CONTROL_FLAG          "QMB0824"
#define QUMBRC_MM_FAIL                          "QMB0825"
#define QUMBRC_MM_STORY_NOT_LOADED              "QMB0826"
#define QUMBRC_MM_BUILDER_ERROR                 "QMB0827"
#define QUMBRC_MM_INVALID_PATH                  "QMB0828"
#define QUMBRC_MM_INVALID_TYPE                  "QMB0829"
#define QUMBRC_MM_SET_GRANULARITY_ERROR         "QMB082A"
#define QUMBRC_MM_SET_SCALE_TYPE_ERROR          "QMB082B"
#define QUMBRC_MM_INVALID_EUI_FLAG              "QMB082C"
#define QUMBRC_MM_DEV_IDS_NOT_ALLOWED           "QMB082D"
#define QUMBRC_MM_MCI_SET_VOLUME_FAILURE        "QMB082E"
#define QUMBRC_MM_INVALID_LOCAL_DEV_ID          "QMB082F"
#define QUMBRC_MM_DEVICE_IN_USE                 "QMB0830"
#define QUMBRC_MM_STORY_NOT_ACTIVE              "QMB0831"
#define QUMBRC_MM_INVALID_OBJECT_ID             "QMB0832"
#define QUMBRC_MM_INCOMPATIBLE_OBJECT           "QMB0833"
#define QUMBRC_MM_MCI_WINDOW_FAILURE            "QMB0835"
#define QUMBRC_MM_MCI_RESTORE_FAILURE           "QMB0836"
#define QUMBRC_MM_GEN_NOTEBOOK_FAILURE          "QMB0837"
#define QUMBRC_MM_INVALID_CONV_ID               "QMB0838"
#define QUMBRC_MM_MMIO_PROC_FAILURE             "QMB0839"
#define QUMBRC_MM_NO_ASSOC_FILES                "QMB083A"
#define QUMBRC_MM_INVALID_ASYNC_FLAG            "QMB083B"
#define QUMBRC_MM_INVALID_SIZE                  "QMB083C"
#define QUMBRC_MM_FILE_IN_USE                   "QMB083D"
#define QUMBRC_MM_INVALID_FILE_NAME             "QMB083E"
#define QUMBRC_MM_INVALID_INPUT_POINTER         "QMB083F"
#define QUMBRC_MM_INVALID_REQUEST_ID            "QMB0840"
#define QUMBRC_MM_INVALID_HWND                  "QMB0842"
#define QUMBRC_MM_INVALID_NOTIFY_FLAG           "QMB0843"
#define QUMBRC_MM_INVALID_RETURN_POINTER        "QMB0844"
#define QUMBRC_MM_INVALID_INPUT_SIZE            "QMB0845"
#define QUMBRC_MM_INVALID_RETURN_SIZE           "QMB0846"
#define QUMBRC_MM_INVALID_MSG_HANDLE            "QMB0847"
#define QUMBRC_MM_CLIPBOARD_EMPTY               "QMB0848"
#define QUMBRC_MM_MCI_CUT_FAILURE               "QMB0849"
#define QUMBRC_MM_MCI_COPY_FAILURE              "QMB084A"
#define QUMBRC_MM_MCI_PASTE_FAILURE             "QMB084B"
#define QUMBRC_MM_MCI_DELETE_FAILURE            "QMB084C"
#define QUMBRC_MM_MCI_RECORD_FAILURE            "QMB084D"
#define QUMBRC_MM_MCI_CONNECTOR_FAILURE         "QMB084E"
#define QUMBRC_MM_MCI_SAVE_FAILURE              "QMB084F"
#define QUMBRC_MM_MCI_CONNECT_FAILURE           "QMB0850"
#define QUMBRC_MM_HDW_FAILURE                   "QMB0851"
#define QUMBRC_MM_MCI_CAPTURE_FAILURE           "QMB0852"
#define QUMBRC_MM_TEMP_FILE_FAILURE             "QMB0853"
#define QUMBRC_MM_USER_EXITED                   "QMB0854"
#define QUMBRC_MM_INVALID_RESERVED_FIELD        "QMB0855"
#define QUMBRC_MM_INVALID_XORGIN                "QMB0856"
#define QUMBRC_MM_INVALID_YORGIN                "QMB0857"
#define QUMBRC_MM_INVALID_WIDTH                 "QMB0858"
#define QUMBRC_MM_INVALID_HEIGHT                "QMB0859"
#define QUMBRC_MM_NOT_USF_NATIVE_PROCESS        "QMB085A"
#define QUMBRC_MM_NO_ACCEPTABLE_KEY_OBJECT      "QMB085B"
#define QUMBRC_MM_CANT_CAPTURE_KEY_OBJECTS      "QMB085c"
#define QUMBRC_MM_SADC_PWS_INI_ENTRY            "QMB085d"
#define QUMBRC_MM_SADC_RMD_INI_ENTRY            "QMB085e"
#define QUMBRC_MM_SADC_AS400_INI_ENTRY          "QMB085f"
#define QUMBRC_MM_MCI_SPIN_FAILURE              "QMB0860"
#define QUMBRC_MM_INVALID_DEVICE_NAME           "QMB0861"
#define QUMBRC_MM_INVALID_SEQ_MEMBER_INFO       "QMB0862"
#define QUMBRC_MM_EMBEDDED_SEQ_OBJECTS          "QMB0863"
#define QUMBRC_MM_TIMER_FAILURE                 "QMB0864"
#