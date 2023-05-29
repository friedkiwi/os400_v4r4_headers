#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* =================================================================
 |  ledate.h - interfaces to ILE date and time services       V3R1M0
 |
 |  Copyright: 5763-CX2 (c) IBM Corp 1989, 1990, 1991, 1992, 1993,
 |             1994
 * =================================================================
*/

#ifndef __ledate_h
#define __ledate_h

  #ifndef __letype_h
    #include <letype.h>
  #endif

  /*---------------------------------------------------------------------
   |  CSC LE Date/Time AWIs
   *---------------------------------------------------------------------
  */
  void CEEDAYS( char *, char *, _INT4 *, _FEEDBACK *);
  #pragma descriptor ( void CEEDAYS( "", "", void, void ) )

  void CEEDATE( _INT4 *, char *, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEDATE( void, "", "", void ) )

  void CEESECS( char *, char *, _FLOAT8 *, _FEEDBACK *);
  #pragma descriptor ( void CEESECS( "", "", void, void ) )

  void CEEDATM( _FLOAT8 *, char *, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEDATM( void, "", "", void ) )

  void CEEISEC( _INT4 *, _INT4 *, _INT4 *, _INT4 *, _INT4 *, _INT4 *,
                _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEESECI( _FLOAT8 *, _INT4 *, _INT4 *, _INT4 *, _INT4 *,
                _INT4 *, _INT4 *, _INT4 *, _FEEDBACK *);
  void CEEDYWK( _INT4 *, _INT4 *, _FEEDBACK *);
  void CEEFMTM( _CHAR2, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEFMTM( void, "", void ) )

  void CEEFMDT( _CHAR2, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEFMDT( void, "", void ) )

  void CEEFMDA( _CHAR2, char *, _FEEDBACK *);
  #pragma descriptor ( void CEEFMDA( void, "", void ) )

  void CEEUTC ( _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEEGMT ( _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEEUTCO( _INT4 *, _INT4 *, _FLOAT8 *, _FEEDBACK *);
  void CEELOCT( _INT4 *, _FLOAT8 *, _CHAR23, _FEEDBACK *);
  void CEESCEN( _INT4 *, _FEEDBACK *);
  void CEEQCEN( _INT4 *, _FEEDBACK *);

#endif /* #ifndef __ledate_h */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
