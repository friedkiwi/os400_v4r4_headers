#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* =================================================================
 |  lecond.h - interfaces to ILE synchronous condition        V3R1M0
 |             handling, and message services
 |
 |  Copyright: 5763-CX2 (c) IBM Corp 1989, 1990, 1991, 1992, 1993,
 |             1994
 * =================================================================
*/

#ifndef __lecond_h
#define __lecond_h

  #ifndef __letype_h
    #include <letype.h>
  #endif

  /*---------------------------------------------------------------------
   |  CSC LE condition handling and message AWIs
   *---------------------------------------------------------------------
  */

  /* Condition handling result codes */
  #define CEE_HDLR_RESUME      10
  #define CEE_HDLR_PERC        20
  #define CEE_HDLR_PERC_PREV   21
  #define CEE_HDLR_PROM        30
  #define CEE_HDLR_PROM_PREV   31
  #define CEE_HDLR_PROM_RETRY  32

  #define CEE_MRCR_CURRENT     0
  #define CEE_MRCR_PREV        1

  #define CEE_PID_OS2          2
  #define CEE_PID_S370         3
  #define CEE_PID_AS400        4

  /* Condition handling services */
  /* The following AWIs are builtins */
  #ifdef __cplusplus
    extern "builtin"  {
  #else
    #pragma linkage(CEEHDLR, builtin)
    #pragma linkage(CEEHDLU, builtin)
  #endif
  void CEEHDLR( _HDLR_ENTRY *, _POINTER *, _FEEDBACK *);
  void CEEHDLU( _HDLR_ENTRY *, _FEEDBACK *);
  #ifdef __cplusplus
    }
  #endif
  void CEEMRCR( _INT4 *, _FEEDBACK *);
  void CEESGL ( _FEEDBACK *, _INT4 *, _FEEDBACK *);
  void CEEGPID( _INT4 *, _INT4 *, _FEEDBACK *);

  /* Condition representation */
  void CEENCOD( _INT2 *, _INT2 *, _INT2 *, _INT2 *, _INT2 *,
                _CHAR3, _INT4 *,_FEEDBACK *,_FEEDBACK *);
  void CEEDCOD( _FEEDBACK *, _INT2 *, _INT2 *, _INT2 *, _INT2 *,
                _INT2 *, _CHAR3, _INT4 *, _FEEDBACK *);

  /* Message services */
  void CEEMOUT( _CHAR80,     _INT4 *, _FEEDBACK *);
  void CEEMSG ( _FEEDBACK *, _INT4 *, _FEEDBACK *);
  void CEEMGET( _FEEDBACK *, _CHAR80, _INT4 *, _FEEDBACK *);

  /* Make sure calls provide the required descriptors */
  #pragma descriptor( void CEEMOUT("", void, void) )
  #pragma descriptor( void CEEMGET(void, "", void, void) )

  /*-------------------------------------------------------------------
   |  AS/400 ILE Specific program management AWIs
   *-------------------------------------------------------------------
  */
  #define CEE_HC_DEFAULT        0
  #define CEE_HC_REMOVE         1
  #define CEE_HC_LOG            2

  void CEE4RIN( _INT4 *, _INVPTR *, _FEEDBACK *);
  void CEE4HC ( _UINT4 *, _INVPTR *, _UINT4 *, _FEEDBACK *);

#endif /* #ifndef __lecond_h */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
