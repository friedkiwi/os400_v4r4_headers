#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif
#ifndef _SEMAPHORE_H
#define _SEMAPHORE_H
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: semaphore.h                                     */
/*                                                                   */
/* Descriptive Name: named and unnamed semaphore interfaces          */
/*                                                                   */
/* 5769-SS1                                                          */
/* (C) Copyright IBM Corp. 1998                                      */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: Include header file for named and unnamed            */
/*              semaphores.                                          */
/*                                                                   */
/* Header Files Included:  <sys/types.h>                             */
/*                                                                   */
/* Macros List:                                                      */
/*                 SEM_FAILED                                        */
/*                                                                   */
/* Structure List: sem_t                                             */
/*                 sem_attr_np_t                                     */
/*                 sem_post_options_np_t                             */
/*                 sem_wait_options_np_t                             */
/*                                                                   */
/* Function Prototype List:                                          */
/*                 sem_close                                         */
/*                 sem_destroy                                       */
/*                 sem_getvalue                                      */
/*                 sem_init                                          */
/*                 sem_init_np                                       */
/*                 sem_open                                          */
/*                 sem_open_np                                       */
/*                 sem_post                                          */
/*                 sem_trywait                                       */
/*                 sem_unlink                                        */
/*                 sem_wait                                          */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -----------------------  */
/* $A0= D9560100     4D40  980324 ROCH    : New include              */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/
/*
 *  Includes
 */
#include <sys/types.h>
#include <fcntl.h>


/*
 *  Data types
 */
/* Semaphore */
typedef void * sem_t;

/* Semaphore Attributes */
typedef struct {
  unsigned int reserved1[1];
  unsigned int maxvalue;
  unsigned int reserved2[2];
  char title[16];
  void * reserved3[2];
} sem_attr_np_t;

/* Post options */
typedef struct {
  unsigned int reserved1;
  unsigned int increment;
  unsigned int reserved2[2];
} sem_post_options_np_t;

/* Wait options */
typedef struct {
  unsigned int reserved1[2];
  struct {
     unsigned int  hi;
     unsigned int  lo;
  } timeout;
} sem_wait_options_np_t;

/*
 *  Constants
 */
#define SEM_FAILED        NULL


/*
 * Prototypes
 */
#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
         #define QBFC_EXTERN extern
    #else
         #define QBFC_EXTERN extern "C"
    #endif
    #define __QBFC_EXTERN
#endif


QBFC_EXTERN     int    sem_close(sem_t * sem);
QBFC_EXTERN     int    sem_destroy(sem_t * sem);
QBFC_EXTERN     int    sem_getvalue(sem_t * sem, int * value);
QBFC_EXTERN     int    sem_init(sem_t * sem, int pshared,
                                unsigned int value);
QBFC_EXTERN     int    sem_init_np(sem_t * sem, int pshared,
                                   unsigned int value,
                                   sem_attr_np_t * attr);
QBFC_EXTERN     sem_t *sem_open(const char * name, int oflag, ...);
QBFC_EXTERN     sem_t *sem_open_np(const char * name, int oflag,
                                   mode_t mode, unsigned int value,
                                   sem_attr_np_t * attr);
QBFC_EXTERN     int    sem_post(sem_t * sem);
QBFC_EXTERN     int    sem_post_np(sem_t * sem,
                                   sem_post_options_np_t * options);
QBFC_EXTERN     int    sem_trywait(sem_t * sem);
QBFC_EXTERN     int    sem_unlink(const char * name);
QBFC_EXTERN     int    sem_wait(sem_t * sem);
QBFC_EXTERN     int    sem_wait_np(sem_t * sem,
                                   sem_wait_options_np_t * options);


#endif /* _SEMAPHORE_H */
#ifdef __ILEC400__
  #pragma checkout(resume)
#endif

