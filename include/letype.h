#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* =================================================================
 |  letype.h - Datatype definitions for ILE services          V3R1M0
 |
 |  Copyright: 5763-CX2 (c) IBM Corp 1989, 1990, 1991, 1992, 1993,
 |             1994
 * =================================================================
*/

#ifndef __letype_h
#define __letype_h

  #ifndef __pointer_h
    #include <pointer.h>
  #endif

  typedef signed short     _INT2;
  typedef signed int       _INT4;
  typedef unsigned short   _UINT2;
  typedef unsigned int     _UINT4;
  typedef char             _INT8[  8];
  typedef unsigned char    _CHAR;
  typedef unsigned char    _UCHAR;
  typedef signed char      _SCHAR;
  typedef float            _FLOAT4;
  typedef double           _FLOAT8;
  typedef long double      _FLOAT16;
  typedef unsigned int     _BITS;
  typedef void *           _POINTER;
  typedef char             _CHAR1   [  1];
  typedef char             _CHAR2   [  2];
  typedef char             _CHAR3   [  3];
  typedef char             _CHAR17  [ 17];
  typedef char             _CHAR23  [ 23];
  typedef char             _CHAR80  [ 80];
  typedef char             _CHAR255 [255];

  typedef struct {
     float  real,
            imaginary;
  } _COMPLEX8;

  typedef struct {
     double real,
            imaginary;
  } _COMPLEX16;

  typedef volatile struct {
     _UINT2 MsgSev;
     _UINT2 MsgNo;
     _BITS Case     :2;
     _BITS Severity :3;
     _BITS Control  :3;
     _CHAR Facility_ID[3];
     _UINT4 I_S_Info;
  } _FEEDBACK;

  typedef union {
     float TypeFloat4;
     double TypeFloat8;
     long double TypeFloat16;
  } _VFLOAT;

  typedef union {
      struct {
         _INT2    length;
         _CHAR255 string;
      } l2pstring;
      struct {
         _INT4    length;
         _CHAR255 string;
      } l4pstring;
      _CHAR1 stringz;
  } _VSTRING;

  typedef volatile struct {
      _INVPTR invocation;
      _LBLPTR label;
  } _CEELABEL;

  #ifndef   NULL
    #ifdef __cplusplus
      #define NULL (0)
    #else
      #define NULL ((void *)0)
    #endif
  #endif

  typedef void (*_HDLR_ENTRY)( _FEEDBACK *, _POINTER *, _INT4 *, _FEEDBACK * );
  typedef void (*_RTX_ENTRY)( _POINTER *);
  typedef void (*_RAGE_ENTRY)( _UINT4 *, _UINT4 *, _UINT4 *, _UINT4 * );

#endif /* #ifndef __letype_h */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
