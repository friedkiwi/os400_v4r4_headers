 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: iconv.h                                      */
 /*                                                                */
 /* Descriptive Name: Codeset Conversion APIs.                     */
 /*                                                                */
 /* Description: Include header file for the iconv APIs.           */
 /*                                                                */
 /* Header Files Included: stddef.h                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: iconv_t                                        */
 /*                                                                */
 /* Function Prototype List: iconv_open()                          */
 /*                          iconv()                               */
 /*                          iconv_close()                         */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2871400     3D10  940227 BRINKER:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef    __iconv_h
  #define  __iconv_h

#include <stddef.h>              /* contains declaration for size_t */

/* definition of iconv_t type */
typedef struct {
 int return_value;    /* return value to indicate if error occurred */
 int cd[12];
} iconv_t;

#ifndef __ILEC400__
  extern "C" {
#endif

size_t  iconv(iconv_t cd,
              char   **inbuf,
              size_t *inbytesleft,
              char   **outbuf,
              size_t *outbytesleft);

iconv_t iconv_open(char *tocode,
                   char *fromcode);

int     iconv_close (iconv_t cd);

#ifndef __ILEC400__
  }
#endif

#endif                                         /* #ifndef __iconv_h */
