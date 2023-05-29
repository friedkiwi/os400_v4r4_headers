 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSEPT                                     */
 /*                                                                */
 /* Descriptive Name: API Function Prototypes                      */
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
 /* Description: Include header file for access to APIs found      */
 /*              in System Entry Point Table                       */
 /*                                                                */
 /* Restriction: This header file should never be included         */
 /*              directly.  Its intended use is via header file    */
 /*              QLIEPT.                                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: All AS/400 APIs which can be located  */
 /*                          via System Entry Point Table          */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #define QUSEPT_h
 #ifndef __ILEC400__
   #include <bcd.h>
 #endif
 #include <pointer.h>

#define QALGENA EPT_CALL(QALGENA)
#ifdef __ILEC400__
 #pragma linkage(QALGENA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QALGENA_T(
               void *,         /* Receiver Variable                 */
               int   ,         /* Receiver Variable Length          */
               int  *,         /* Size of Alert                     */
               void *,         /* Qualified Alert Table Name        */
               char *,         /* Message ID                        */
               void *,         /* Message Data                      */
               int   ,         /* Message Data Length               */
               void *);        /* Error Code                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QALRTVA EPT_CALL(QALRTVA)
#ifdef __ILEC400__
 #pragma linkage(QALRTVA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QALRTVA_T(
               void *,              /* Receiver Variable             */
               int   ,              /* Length of Receiver Variable   */
               char *,              /* Format                        */
               char *,              /* Alert Log Identifier          */
               void *);             /* Error Code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QALSNDA EPT_CALL(QALSNDA)
#ifdef __ILEC400__
 #pragma linkage(QALSNDA_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QALSNDA_T(
              void *,           /* Alert Major Vector              */
              int   ,           /* Alert Major Vector Length       */
              char *,           /* Local / Received indicator      */
              char *,           /* Origin                          */
              void *);          /* Error Code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QBNLPGMI EPT_CALL(QBNLPGMI)
#ifdef __ILEC400__
 #pragma linkage(QBNLPGMI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QBNLPGMI_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified ILE program name     */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QBNLSPGM EPT_CALL(QBNLSPGM)
#ifdef __ILEC400__
 #pragma linkage(QBNLSPGM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QBNLSPGM_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified service program name */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QBNRSPGM EPT_CALL(QBNRSPGM)
#ifdef __ILEC400__
 #pragma linkage(QBNRSPGM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QBNRSPGM_T(
               void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified service program name       */
               void *);   /* Error code                           */
#ifdef __ILEC400__
#else
 }
#endif
#define QCAPCMD EPT_CALL(QCAPCMD)
#ifdef __ILEC400__
 #pragma linkage(QCAPCMD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCAPCMD_T(
               void *,          /* Source command string          */
               int,             /* Length of source command string*/
               void *,          /* Options control block          */
               int,             /* Options control block length   */
               char *,          /* Options control block format   */
               void *,          /* Changed command string         */
               int,             /* Length available for changed   */
                                /* command string                 */
               int *,           /* Length changed for changed     */
                                /* command string                 */
               void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QCDRCMDI EPT_CALL(QCDRCMDI)
#ifdef __ILEC400__
 #pragma linkage(QCDRCMDI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCDRCMDI_T(
               void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified command name               */
               void *);   /* Error code                           */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLRDTAQ EPT_CALL(QCLRDTAQ)
#ifdef __ILEC400__
 #pragma linkage(QCLRDTAQ_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLRDTAQ_T(
               char *,           /* Data queue name                */
               ...);             /* Optional parameter group 1:
                                     char *        Key order
                                     _Decimal(3,0)  Length of key
                                                      data
                                     void *        Key data
                                     void *        Error code      */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLRPGAS EPT_CALL(QCLRPGAS)
#ifdef __ILEC400__
 #pragma linkage(QCLRPGAS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLRPGAS_T(
                void *,        /* Output Data Buffer                */
                int   ,        /* Length of Output Data Buffer      */
                void *,        /* Qualified Program Name            */
                int   ,        /* Call Stack Counter                */
                void *,        /* Data Handle                       */
                int  *,        /* Length of Data Available          */
                void *);       /* Error Code                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLRPGMI EPT_CALL(QCLRPGMI)
#ifdef __ILEC400__
 #pragma linkage(QCLRPGMI_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLRPGMI_T(
               void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified program name               */
               void *);   /* Error code                           */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLSCAN EPT_CALL(QCLSCAN)
#ifdef __ILEC400__
 #pragma linkage(QCLSCAN_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLSCAN_T(
                  void *,        /* Character string               */
                  _Decimal(3,0), /* Length of character string     */
                  _Decimal(3,0), /* Start position                 */
                  void *,        /* Character pattern              */
                  _Decimal(3,0), /* Length of character pattern    */
                  char *,        /* Translate                      */
                  char *,        /* Trim                           */
                  char *,        /* Wild card                      */
                  _Decimal(3,0) *); /* Character string result     */
#ifdef __ILEC400__
#else
 }
#endif
#define QCLSPGAS EPT_CALL(QCLSPGAS)
#ifdef __ILEC400__
 #pragma linkage(QCLSPGAS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCLSPGAS_T(
                void *,        /* Input Data Buffer                 */
                int   ,        /* Length of Input Data Buffer       */
                void *,        /* Qualified Program Name            */
                int   ,        /* Call Stack Counter                */
                void *,        /* Data Handle                       */
                void *);       /* Error Code                        */
#ifdef __ILEC400__
#else
 }
#endif
#define QCMDCHK EPT_CALL(QCMDCHK)
#ifdef __ILEC400__
 #pragma linkage(QCMDCHK_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCMDCHK_T(
                  void *,        /* Command string                 */
                  _Decimal(15, 5),/* Length of command string      */
                  ...);          /* Optional parameter:
                                      IGC process control          */
#ifdef __ILEC400__
#else
 }
#endif
#define QCMDEXC EPT_CALL(QCMDEXC)
#ifdef __ILEC400__
 #pragma linkage(QCMDEXC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QCMDEXC_T(
                  void *,        /* Command string                 */
                  _Decimal(15, 5),/* Length of command string      */
                  ...);          /* Optional Parameter:
                                      IGC process control          */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBLDBR EPT_CALL(QDBLDBR)
#ifdef __ILEC400__
 #pragma linkage(QDBLDBR_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBLDBR_T(
             void *,               /* Qualified user space name     */
             char *,               /* Format name                   */
             void *,               /* File and library name         */
             char *,               /* Member name                   */
             char *,               /* Record format name            */
             void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QDBRTVFD EPT_CALL(QDBRTVFD)
#ifdef __ILEC400__
 #pragma linkage(QDBRTVFD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDBRTVFD_T(
              void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              void *,               /* Returned file and library name*/
              char *,               /* Format name                   */
              void *,               /* File and library name         */
              char *,               /* Record format name            */
              char *,               /* Overrride processing          */
              char *,               /* System                        */
              char *,               /* Format type                   */
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCLCFGD EPT_CALL(QDCLCFGD)
#ifdef __ILEC400__
 #pragma linkage(QDCLCFGD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCLCFGD_T(
                void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* Configuration description type */
                void *,          /* Object qualifier               */
                void *,          /* Status qualifier               */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRCFGS EPT_CALL(QDCRCFGS)
#ifdef __ILEC400__
 #pragma linkage(QDCRCFGS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRCFGS_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Configuration description type */
                char *,          /* Configuration description name */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRCTLD EPT_CALL(QDCRCTLD)
#ifdef __ILEC400__
 #pragma linkage(QDCRCTLD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRCTLD_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Controller name                */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRDEVD EPT_CALL(QDCRDEVD)
#ifdef __ILEC400__
 #pragma linkage(QDCRDEVD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRDEVD_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Line name                      */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCRLIND EPT_CALL(QDCRLIND)
#ifdef __ILEC400__
 #pragma linkage(QDCRLIND_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCRLIND_T(
                void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Line name                      */
                void *);         /* Error code                     */
#ifdef __ILEC400__
#else
 }
#endif
#define QDCXLATE EPT_CALL(QDCXLATE)
#ifdef __ILEC400__
 #pragma linkage(QDCXLATE_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDCXLATE_T(
               _Decimal(5,0) *,/* Length of data being converted  */
               char *,         /* Conversion data                 */
               char *,         /* SBCS conversion table name      */
               ...);           /* Optionals:
                                    SBCS conversion table library
                                    Output data
                                    Length of output buffer
                                    Length of converted data
                                    DBCS Language
                                    Shift-out and shift-in chars
                                    Type of conversion            */
#ifdef __ILEC400__
#else
 }
#endif
#define QDFRTVFD EPT_CALL(QDFRTVFD)
#ifdef __ILEC400__
 #pragma linkage(QDFRTVFD_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDFRTVFD_T(
               void *,           /* Receiver Variable            */
               int   ,           /* Length of receiver variable  */
               char *,           /* Format name                  */
               void *,           /* Qualified file name          */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QDMRTVFO EPT_CALL(QDMRTVFO)
#ifdef __ILEC400__
 #pragma linkage(QDMRTVFO_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QDMRTVFO_T(
              void *,               /* Override information          */
              int,                  /* Length of override information*/
              char *,               /* Override information format   */
              char *,               /* Override information file name*/
              void *);              /* Error code                    */
#ifdef __ILEC400__
#else
 }
#endif
#define QD0ENDTS EPT_CALL(QD0ENDTS)
#ifdef __ILEC400__
 #pragma linkage(QD0ENDTS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QD0ENDTS_T(
               void *,           /* Translation session handle   */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QD0STRTS EPT_CALL(QD0STRTS)
#ifdef __ILEC400__
 #pragma linkage(QD0STRTS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QD0STRTS_T(
               void *,           /* Translation session handle   */
               char *,           /* Display device name          */
               char *,           /* Default screen size          */
               char *,           /* Alternate screen size        */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QD0TRNDS EPT_CALL(QD0TRNDS)
#ifdef __ILEC400__
 #pragma linkage(QD0TRNDS_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QD0TRNDS_T(
               void *,           /* Translation session handle   */
               void *,           /* To buffer                    */
               int   ,           /* To buffer output length      */
               int   ,           /* To buffer length             */
               char *,           /* To buffer type               */
               void *,           /* From buffer                  */
               int   ,           /* From buffer length           */
               char *,           /* From buffer type             */
               char * ,          /* Operation                    */
               void *);          /* Error code                   */
#ifdef __ILEC400__
#else
 }
#endif
#define QEARMVBM EPT_CALL(QEARMVBM)
#ifdef __ILEC400__
 #pragma linkage(QEARMVBM_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QEARMVBM_T(
                char *,        /* Course ID                        */
                void *);       /* Error code                       */
#ifdef __ILEC400__
#else
 }
#endif
#define QECCVTEC EPT_CALL(QECCVTEC)
#ifdef __ILEC400__
 #pragma linkage(QECCVTEC_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QECCVTEC_T(
               void *,          /* Edit mask                       */
               int  *,          /* Edit mask length                */
               int  *,          /* Receiver variable length        */
               char *,          /* Zero balance fill character     */
               char *,          /* Edit code                       */
               char *,          /* Fill or floating currency indic */
               int,             /* Source variable precision       */
               int,             /* Source variable decimal position*/
               void *);         /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QECCVTEW EPT_CALL(QECCVTEW)
#ifdef __ILEC400__
 #pragma linkage(QECCVTEW_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QECCVTEW_T(
               void *,          /* Edit mask                       */
               int  *,          /* Edit mask length                */
               int  *,          /* Receiver variable length        */
               void *,          /* Edit word                       */
               int,             /* Edit word length                */
               void *);         /* Error code                      */
#ifdef __ILEC400__
#else
 }
#endif
#define QECEDT EPT_CALL(QECEDT)
#ifdef __ILEC400__
 #pragma linkage(QECEDT_T,OS,nowiden)
#else
 extern "OS"
 {
#endif
  typedef void QECEDT_T(
             void *,            /* Receiver variable               */
             int,               /* Receiver variable length        */
             void *,            /* source variable                 */
             char *,            /* Source variable class           */
             int,               /* Source variable precision       */
             void *,            /* Edit mask                       */
             int,               /* 