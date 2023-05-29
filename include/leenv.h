#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* =================================================================
 |  leenv.h - interfaces to ILE program management services   V3R1M0
 |
 |  Copyright: 5763-CX2 (c) IBM Corp 1989, 1990, 1991, 1992, 1993,
 |             1994
 * =================================================================
*/

#ifndef __leenv_h
#define __leenv_h

  #ifndef __letype_h
    #include <letype.h>
  #endif

  /*-------------------------------------------------------------------
   |  CSC LE Program management AWIs
   *-------------------------------------------------------------------
  */

  /* Exit services */
  /* The following AWIs are builtins */
  #ifdef __cplusplus
    extern "builtin"  {
  #else
    #pragma linkage( CEERTX, builtin )
    #pragma linkage( CEEUTX, builtin )
  #endif
  void CEERTX ( _RTX_ENTRY *, _POINTER *, _FEEDBACK * );
  void CEEUTX ( _RTX_ENTRY *, _FEEDBACK * );
  #ifdef __cplusplus
    }
  #endif
  void CEETREC( _INT4 *, _INT4 * );

  /*-------------------------------------------------------------------
   |  AS/400 ILE Specific program management AWIs
   *-------------------------------------------------------------------
  */
  #define CEE_ABN_NO_TI      0 /* Do not raise TI prior to termination */
  #define CEE_ABN_RAISE_TI   1 /* Raise TI prior to termination        */

  #define CEE_RAGE_DEFAULT   0 /* Use the current value                */
  #define CEE_RAGE_NO_FAIL  10 /* Do not send CEEFAIL when done        */
  #define CEE_RAGE_FAIL     20 /* Send CEEFAIL when done               */
  #define CEE_RAGE_FAIL_END 21 /* Send CEEFAIL when done, do not call  */
                               /* remaining exit routines              */

  #define CEE_FCB_TERM       0 /* AG may terminate at this boundary    */
  #define CEE_FCB_NOTERM     1 /* AG will not terminate at this bdry   */

  void CEE4ABN ( _INT4 *, _INT4 *, _INT4 * );
  void CEE4RAGE( _RAGE_ENTRY *, _FEEDBACK * );
  void CEE4FCB ( _INT4 *, _INT4 *, _FEEDBACK *);

#endif /* #ifndef __leenv_h */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
