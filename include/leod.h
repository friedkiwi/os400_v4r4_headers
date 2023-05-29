#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* =================================================================
 |  leod.h - interfaces to ILE program management services    V3R1M0
 |
 |  Copyright: 5763-CX2 (c) IBM Corp 1989, 1990, 1991, 1992, 1993,
 |             1994
 * =================================================================
*/

#ifndef __leod_h
#define __leod_h


  #ifndef __letype_h
    #include <letype.h>
  #endif


  /*-------------------------------------------------------------------
   | Descriptor type constants
   *-------------------------------------------------------------------
  */

  #define descEsc            0x01   /* escape                            */
  #define descElmt           0x02   /* element descriptor                */
  #define descArray          0x03   /* array descriptor                  */
  #define descStruct         0x04   /* structure descriptor              */

  /* Descriptor data type constants */
  #define typeEsc            0x01   /* an element descriptor type which  */
                                    /* is not one of the data types      */
                                    /* defined below                     */
  #define typeChar           0x02   /* a string of SBCS characters       */
  #define typeCharZ          0x03   /* a 0x00 terminated string of SBCS  */
                                    /* characters                        */
  #define typeCharV2         0x04   /* a string of SBCS characters       */
                                    /* prefixed by an unsigned 2-byte    */
                                    /* binary length                     */
  #define typeCharV4         0x05   /* a string of SBCS characters       */
                                    /* prefixed by an unsigned 4-byte    */
                                    /* binary length                     */
  #define typeBit            0x06   /* a string of bits                  */
  #define typeBitV2          0x07   /* a string of bits prefixed by an   */
                                    /* unsigned 2-byte binary length     */
  #define typeBitV4          0x08   /* a string of bits prefixed by an   */
                                    /* unsigned 4-byte binary length     */
  #define typeGChar          0x09   /* a string of DBCS characters       */
  #define typeGCharZ         0x0A   /* a 0x0000 terminated string of     */
                                    /* DBCS characters                   */
  #define typeGCharV2        0x0B   /* a string of DBCS characters       */
                                    /* prefixed by an unsigned 2-byte    */
                                    /* binary length                     */
  #define typeGCharV4        0x0C   /* a string of DBCS characters       */
                                    /* prefixed by an unsigned 4-byte    */
                                    /* binary length                     */
  #define typeSCharV2        0x5C   /* only used in struct descriptors   */
                                    /* for approximating VSTRING.        */
  #define typeSCharV4        0x5E   /* only used in struct descriptors   */
                                    /* for approximating VSTRING.        */


  /*-------------------------------------------------------------------
   |  CSC LE Operational Descriptor AWIs
   *-------------------------------------------------------------------
  */

  #ifdef __cplusplus
    extern "builtin"  {
  #else
    #pragma linkage(CEETSTA, builtin)
    #pragma linkage(CEEDOD, builtin)
    #pragma linkage(CEEGSI, builtin)
  #endif
  /* Test omitted parameters */
  void CEETSTA(_INT4 *, _INT4 *, _FEEDBACK *);

  /* Retrieve first five common fields of an OD */
  void CEEDOD(_INT4 *, _INT4 *, _INT4 *, _INT4 *, _INT4 *,
              _INT4 *, _FEEDBACK *);

  /* Retrieve string information */
  void CEEGSI(_INT4 *, _INT4 *, _INT4 *, _INT4 *, _FEEDBACK *);
  #ifdef __cplusplus
    }
  #endif

#endif /* #ifndef __leod_h */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
