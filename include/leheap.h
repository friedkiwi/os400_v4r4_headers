#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* =================================================================
 |  leheap.h - interfaces to ILE heap services                V3R1M0
 |
 |  Copyright: 5763-CX2 (c) IBM Corp 1989, 1990, 1991, 1992, 1993,
 |             1994
 * =================================================================
*/

#ifndef __leheap_h
#define __leheap_h

  #ifndef __letype_h
    #include <letype.h>
  #endif


  /* The following structure defines the heap allocation */
  /* strategy. It is used by CEE4DAS and CEECRHP.        */
  typedef struct
  {                               /* The size of this is 24 bytes    */
    _INT4 Max_Sngl_Alloc;         /* The maximum allocation size of  */
                                  /* any single allocation from the  */
                                  /* heap. The minimum is 4 bytes.   */
                                  /* The maximum is 16Mg-1K bytes.   */
                                  /* If zero is specified, the       */
                                  /* default value is 16Mg-1K bytes  */
    _INT4 Min_Bdy;                /* The minimum boundary alignment  */
                                  /* associated with any allocation  */
                                  /* from the heap. The minimum is 4 */
                                  /* bytes. The maximum is 512B. If  */
                                  /* zero is specified, the default  */
                                  /* is 16 byte boundary. This value */
                                  /* will be rounded up to a power   */
                                  /* of 2.                           */
    _INT4 Crt_Size;               /* The creation size of initial    */
                                  /* process space in the heap. If   */
                                  /* zero is specified, the system   */
                                  /* will compute a default value.   */
                                  /* The minimum value is 512 bytes  */
                                  /* and the maximum value is 16Mg-  */
                                  /* 1K bytes. The value will be     */
                                  /* rounded up to a 512 byte        */
                                  /* boundary.                       */
    _INT4 Ext_Size;               /* The extension size of implicit  */
                                  /* space of the heap. If zero is   */
                                  /* specified, the default is 4K.   */
                                  /* The minimum value is 512 bytes  */
                                  /* and the maximum value is 16Mg-  */
                                  /* 1K bytes. The value will be     */
                                  /* rounded up to a 512 byte        */
                                  /* boundary.                       */
    _INT2 reserved1;              /* It must be binary zero.         */
    _BITS Alloc_Strat : 1;        /* Allows a choice between:        */
                                  /*  0 - normal allocation strategy */
                                  /*  1 - force process space        */
                                  /*      creation on each allocate  */
    _BITS No_Mark : 1;            /* Allows a choice between:        */
                                  /*  0 - allow group de-allocate    */
                                  /*  1 - do not allow group de-     */
                                  /*      allocate                   */
    _BITS Blk_Xfer : 1;           /* Block transfer on a heap is     */
                                  /* used to increase the perfor-    */
                                  /* mance of a heap based on prior  */
                                  /* knowledge of how the heap will  */
                                  /* be used.                        */
                                  /*  0 - transfer the minimum size  */
                                  /*      (i.e. 1 storage unit)      */
                                  /*  1 - transfer the machine       */
                                  /*      default size (i.e. 8 units)*/
                                  /* This attribute is only used     */
                                  /* when the heap space is not a    */
                                  /* memeber of PAG, ie. PAG = 0     */
    _BITS PAG : 1;                /* A heap can be created as a PAG  */
                                  /* member.                         */
                                  /*  0 - do not put it in the PAG   */
                                  /*  1 - create the heap in the PAG */
    _BITS Alloc_Init : 1;         /* Allocation initialization       */
                                  /*  0 = do not initialize          */
                                  /*      allocations.               */
                                  /*  1 = initialize space created   */
                                  /*      in this heap to Init_Value */
    _UCHAR Init_Value;            /* Initialization value. It's not  */
                                  /* used if Alloc_Init is 0.        */
    _BITS reserved2 : 3;          /* must be binary zero.            */
    _BITS reserved3 : 32;         /* must be binary zero.            */
  } _CEE4ALC;



  /*---------------------------------------------------------------------
   |  CSC Heap AWIs
   *---------------------------------------------------------------------
  */
  void CEEGTST( _INT4 *, _INT4 *, _POINTER *, _FEEDBACK *);
  void CEEFRST( _POINTER *, _FEEDBACK *);
  void CEECZST( _POINTER *, _INT4 *, _FEEDBACK *);
  void CEECRHP( _INT4 *, _INT4 *, _INT4 *, _INT4 *, _FEEDBACK *);
  void CEEDSHP( _INT4 *, _FEEDBACK *);
  void CEEMKHP(_INT4 *, _POINTER *, _FEEDBACK *);
  void CEERLHP(_POINTER *, _FEEDBACK *);

  /*---------------------------------------------------------------------
   |  AS/400 ILE specific Heap AWIs
   *---------------------------------------------------------------------
  */
  void CEE4DAS(_INT4 *, _CEE4ALC *, _CEE4ALC *, _FEEDBACK *);

#endif  /* #ifndef __leheap_h */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
