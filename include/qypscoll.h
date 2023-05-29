 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYPSCOLL                                   */
 /*                                                                */
 /* Descriptive Name: YPS Collector ILE APIs                       */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
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
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QypsAddCollectorNotification          */
 /*                          QypsChgCollectorCatAttributes         */
 /*                          QypsChgSysCollectorAttributes         */
 /*                          QypsCycleCollector                    */
 /*                          QypsEndCollector                      */
 /*                          QypsRmvCollectorNotification          */
 /*                          QypsRtvCollectorCatAttributes         */
 /*                          QypsRtvSysCollectorAttributes         */
 /*                          QypsStartCollector                    */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D            4D40  980901 ROCH:     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  QYPSCOLL_h
#define  QYPSCOLL_h

/*******************************************************************/
/*  Prototype for calling YPS Collector APIs (QYPSCOLL).           */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma argument (QypsAddCollectorNotification,OS,nowiden)
     #pragma argument (QypsChgCollectorCatAttributes,OS,nowiden)
     #pragma argument (QypsChgSysCollectorAttributes,OS,nowiden)
     #pragma argument (QypsCycleCollector,OS,nowiden)
     #pragma argument (QypsEndCollector,OS,nowiden)
     #pragma argument (QypsRmvCollectorNotification,OS,nowiden)
     #pragma argument (QypsRtvCollectorCatAttributes,OS,nowiden)
     #pragma argument (QypsRtvSysCollectorAttributes,OS,nowiden)
     #pragma argument (QypsAddStartCollector,OS,nowiden)
#else
     extern "C" {
#endif

void QypsAddCollectorNotification(char *,   /* Collector name      */
                                  char *,   /* Data queue name     */
                                  int *,    /* Notification type   */
                                  void *);  /* Error code          */

void QypsChgCollectorCatAttributes(char *,  /* Collector name      */
                                   char *,  /* Category name       */
                                   int *,   /* State               */
                                   int *,   /* Collection interval */
                                   int *,   /* Collect at beginning*/
                                   int *,   /* Collect at ending   */
                                   void *,  /* Beginning parameters*/
                                   void *); /* Error code          */

void QypsChgSysCollectorAttributes(char *,  /* Collector name      */
                                   int  *,  /* Default interval    */
                                   char *,  /* Library             */
                                   int *,   /* Retention period    */
                                   int *,   /* Cycle time          */
                                   int *,   /* Cycle interval      */
                                   int *,   /* Companion user job  */
                                   char *,  /* Default definition  */
                                   void *); /* Error code          */

void QypsCycleCollector(char *,             /* Collector name      */
                        void *);            /* Error code          */

void QypsEndCollector(char *,               /* Collector name      */
                      void *);              /* Error code          */

void QypsRmvCollectorNotification(char *,   /* Collector name      */
                                  char *,   /* Data queue name     */
                                  int *,    /* Notification type   */
                                  void *);  /* Error code          */

void QypsRtvCollectorCatAttributes(char *,  /* Collector name      */
                                   char *,  /* Definition name     */
                                   char *,  /* Category name       */
                                   int *,   /* State               */
                                   int *,   /* Collection interval */
                                   int *,   /* Collect at beginning*/
                                   int *,   /* Collect at ending   */
                                   void *,  /* Beginning parameters*/
                                   void *); /* Error code          */

void QypsRtvSysCollectorAttributes(char *,  /* Collector name      */
                                   int  *,  /* Default interval    */
                                   char *,  /* Library             */
                                   int *,   /* Retention period    */
                                   int *,   /* Cycle time          */
                                   int *,   /* Cycle interval      */
                                   int *,   /* Companion user job  */
                                   char *,  /* Default definition  */
                                   char *,  /* Current definition  */
                                   void *); /* Error code          */

void QypsStartCollector(char *,             /* Collector name      */
                        char *,             /* Collector definition*/
                        void *);            /* Error code          */

/*******************************************************************/
/* Typedefs for APIs.                                              */
/*******************************************************************/
typedef struct Qyps_DTAQ
{
    char entryType[10];          /* Entry type: "*COLNOT   "       */
    char entryId[2];             /* Entry identifier               */
    char collectorObject[10];    /* Collector object name          */
    char collectorLibrary[10];   /* Collector object library       */
    char sequence[8];            /* Sequence number                */
    char reserved[40];           /* Reserved                       */
} Qyps_STAQ_t;                   /* Data Queue Notification Record */

typedef struct Qyps_BEGIN_PARMS
{
    int  length;                 /* Length of character data       */
 /* char data,length[]            * Begining parameters data 