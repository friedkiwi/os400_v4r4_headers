#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

#ifndef QP0W_PTHREAD_H
#define QP0W_PTHREAD_H

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name: pthread.h                                        */
/*                                                                    */
/* Descriptive Name: Pthread structures and definitions               */
/*                                                                    */
/* 5769-SS1        (C) Copyright IBM Corp. 1996,1997                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication, or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* This header file is an external product interface, all             */
/* modifications must be upward compatible.                           */
/*                                                                    */
/* Macros List:                                                       */
/*                                                                    */
/* Structure/Type List:                                               */
/*                                                                    */
/* Function Prototype List:                                           */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* FLAG REASON    LEVEL      DATE        CHANGE DESCRIPTION           */
/* ---- --------- ---------- ------      -------------------          */
/* $A0= D94778    v4r2m0.xpf 08/26/1996  New include                  */
/* $A1= D95599    v4r3m0.xpf 10/30/1997  Changes required to GA the   */
/*      kernel threads support                                        */
/* $A2= D97059    v4r4m0.xpf 07/15/1998  Add the function             */
/*      pthread_is_initialthread_np()                                 */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/
#ifndef _MULTI_THREADED
  /* Old threads program, compiling for CPA threads                   */
  #include "QCPA/H(pthread)"
  #if !defined QP0Z_CPA_THREADS_PRESENT
    /************************************************************
    // You attempted to use threads and probably have one of the
    // following problems:
    // EITHER You haven't defined _MULTI_THREADED to compile for
    //        OS/400 kernel threads. Define _MULTI_THREADED and
    //        retry the compilation.
    // OR     The Common Programming APIs toolkit (option 15) of
    //        OS/400 is not installed. Install CPA and retry the
    //        CPA threads compilation again.
    *************************************************************/
    #error "#ifndef _MULTI_THREADED"
    #error "#ifndef QP0Z_CPA_THREADS_PRESENT"
  #endif /* QP0Z_CPA_THREADS_PRESENT */
#else
  /* Continue and define all kernel threads definitions               */
  #define _PTHREAD_H

/* Feature Test Macros ************************************************/
#define _POSIX_THREADS
#define _POSIX_THREAD_PROCESS_SHARED
#define _THREAD_SAFE

#include <errno.h>
#include <sys/types.h>
#include <sched.h>
#include <except.h>
#include <time.h>
#include <sys/signal.h>
#include <sys/time.h>

/**********************************************************************/
/* Constants                                                          */
/**********************************************************************/

/* Standard Defined Thread Limits *************************************/
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS     4
#define _POSIX_THREAD_KEYS_MAX                  128
#define _POSIX_THREAD_THREADS_MAX               64

/* Thread Management **************************************************/
#define PTHREAD_THREADS_MAX             (pthread_threads_max_np())
#define PTHREAD_ONCE_INIT               0x00

#define PTHREAD_CANCELED                (_pthread_canceled_np())
#define PTHREAD_EXCEPTION_NP            (_pthread_exception_np())

#define PTHREAD_STATUS_ACTIVE_NP        0
#define PTHREAD_STATUS_EXIT_NP          1

#define PTHREAD_CANCEL_ENABLE           0
#define PTHREAD_CANCEL_DISABLE          1

#define PTHREAD_CANCEL_DEFERRED         0
#define PTHREAD_CANCEL_ASYNCHRONOUS     1

#define PTHREAD_CREATE_JOINABLE         0
#define PTHREAD_CREATE_DETACHED         1

#define PTHREAD_PRIO_MAX_NP             PRIORITY_MAX_NP
#define PTHREAD_PRIO_MIN_NP             PRIORITY_MIN_NP

#define PTHREAD_SCOPE_SYSTEM            0
#define PTHREAD_SCOPE_PROCESS           1

#define PTHREAD_EXPLICIT_SCHED          0
#define PTHREAD_INHERIT_SCHED           1

/* Thread Private Storage *********************************************/
#define PTHREAD_DESTRUCTOR_ITERATIONS   4
#define PTHREAD_KEYS_MAX                256

/* Synchronization ****************************************************/
#define PTHREAD_PROCESS_PRIVATE         0
#define PTHREAD_PROCESS_SHARED          1

#define PTHREAD_DEFAULT_MUTEX_NAME_NP   "QP0WMTX UNNAMED"
#define PTHREAD_RWL_TAG_NP              0xD7D9E6D3

#define PTHREAD_MUTEX_NORMAL            0
#define PTHREAD_MUTEX_RECURSIVE         1
#define PTHREAD_MUTEX_ERRORCHECK        2
#define PTHREAD_MUTEX_OWNERTERM_NP      3
#define PTHREAD_MUTEX_DEFAULT           PTHREAD_MUTEX_NORMAL

#define PTHREAD_MUTEX_NONRECURSIVE_NP   PTHREAD_MUTEX_NORMAL
#define PTHREAD_MUTEX_RECURSIVE_NP      PTHREAD_MUTEX_RECURSIVE

#define PTHREAD_MUTEX_INITIALIZER {NULL, PTHREAD_DEFAULT_MUTEX_NAME_NP}
#define PTHREAD_COND_INITIALIZER  {NULL, PTHREAD_DEFAULT_MUTEX_NAME_NP,\
                                   {NULL, NULL, NULL}}
#define PTHREAD_RWLOCK_INITIALIZER {{PTHREAD_RWL_TAG_NP,0,0,0,0,0,0,0},\
                                    {NULL, NULL, NULL}}

/* Pthread Tracing ****************************************************/
#define PTHREAD_TRACE_NONE_NP           0
#define PTHREAD_TRACE_ERROR_NP          1
#define PTHREAD_TRACE_INFO_NP           2
#define PTHREAD_TRACE_VERBOSE_NP        3

/* Pthread library option constants ***********************************/
#define PTHREAD_OPTION_POOL_NP            1
#define PTHREAD_OPTION_POOL_CURRENT_NP    2
#define PTHREAD_OPTION_THREAD_CAPABLE_NP  3

/**********************************************************************/
/* User Types                                                         */
/**********************************************************************/

/* Thread Management **************************************************/
typedef union  {
  struct {
    int          hi;
    int          lo;
  }              intId;
} pthread_id_np_t;

typedef struct {
    unsigned int reserved[4];
    void        *reserved1;
} pthread_attr_t;

typedef struct {
  void         *reserved;
  unsigned int  reservedHiId;
  unsigned int  reservedLoId;
  unsigned int  reservedHandle;
  unsigned int  reservedC;
  void         *reserved1;
} pthread_t;

typedef unsigned char pthread_once_t;

typedef struct {
  int           option;
  int           optionValue;
  int           reserved1[2];
  pthread_t     target;
  void         *reserved2[8];
} pthread_option_np_t;

typedef struct {
  struct timespec deltatime;
  int             leaveThreadAllocated:1;
  int             reserved:31;
  int             reserved1;
  void           *reserved2[3];
} pthread_joinoption_np_t;

/* Thread Private Storage *********************************************/
typedef int pthread_key_t;

/* Synchronization ****************************************************/
typedef struct {
   unsigned int     reserved[4];
   char             reserved1[16];
   void            *reserved2;
} pthread_mutexattr_t;

typedef struct {
     void        *reserved;
     char         reserved1[16];
} pthread_mutex_t;

typedef struct {
    unsigned int reserved[4];
    void        *reserved1;
} pthread_condattr_t;

typedef struct {
    void      *reserved;
    char      reserved1[16];
    void      *reserved2[3];
} pthread_cond_t;

typedef struct {
    int       reserved[4];
    void     *reserved1[2];
} pthread_rwlockattr_t;

typedef struct {
    int       reserved[8];
    void     *reserved1[3];
} pthread_rwlock_t;

/* Cancelation Cleanup ************************************************/
typedef struct {
  void (*handler)(void *);
  void  *arg;
} pthread_cleanup_entry_np_t;


/* Integer to Pointer Conversions *************************************/
#define __VOID(i)  Qp0wIntAsPVoid(i)
#define __INT(p)   Qp0wPVoidAsInt(p)

/* Pthread Tracing ****************************************************/
extern int Qp0wTraceLevel;

/**********************************************************************/
/* Macro: PTHREAD_TRACE_NP()                                          */
/*                                                                    */
/* Purpose: Allow the generation of code that runs only at specified  */
/*   tracelevels. Define PTHREAD_TRACE_NDEBUG when compiling to       */
/*   completely remove all generated tracepoint code                  */
/*                                                                 