#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* =================================================================
 |  leawi.h - interfaces to the LE services                   V3R1M0
 |
 |  Copyright: 5763-CX2 (c) IBM Corp 1989, 1990, 1991, 1992, 1993,
 |             1994
 * =================================================================
*/

#ifndef __leawi_h
#define __leawi_h

  #ifndef __letype_h
    #include <letype.h>
  #endif

  #ifndef __leheap_h
    #include <leheap.h>
  #endif

  #ifndef __leenv_h
    #include <leenv.h>
  #endif

  #ifndef __lecond_h
    #include <lecond.h>
  #endif

  #ifndef __lemath_h
    #include <lemath.h>
  #endif

  #ifndef __leod_h
    #include <leod.h>
  #endif

  #ifndef __ledate_h
    #include <ledate.h>
  #endif

  #ifndef __lemsg_h
    #include <lemsg.h>
  #endif

#endif /* #ifndef __leawi_h */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
