#ifndef _QGYRHRL_H_
#define _QGYRHRL_H_

/***********************************************************************
//                     Include File Description
//**********************************************************************
//  Header File Name: H/QGYRHRL
//
//  Descriptive Name: Retrieve Hardware Resource List API
//
//  Description:
//  The Retrieve Hardware Resource List API retrieves a list of hardware
//  resource names, and other hardware resource information fields, that
//  provide a summary description for each resource.
//
//  (C) Copyright IBM Corp. 1996
//  Refer to copyright instructions form no. G120-2083
//
//  Header files included:
//    h/qgyrhrcm
//
//  Macros list:
//    none
//
//  Function prototype list:
//    QGYRHRL
//
//  Structure list:
//    none
//
//  End Include File Description
*/

/***********************************************************************
//                          Change Log
//**********************************************************************
//
//  Flag  Reason    Date      Userid    Description
//  ----  --------  --------  --------  -----------
//  $A0   D94532    02/25/96  ROCHESTR  New include file.
//
// End Change Activity
*/


/***********************************************************************
//                          Includes
//*********************************************************************/

#ifdef __AIXxiCC__
  #include "qgyrhrcm.cleinc"
#else
  #include <qgyrhrcm.h>
#endif


/***********************************************************************
//                     Function Prototypes
//*********************************************************************/

#if   __AIXxiCC__
  #pragma linkage(QGYRHRL,OS,nowiden)
  extern "OS"
#elif __ILEC400__
  #pragma linkage(QGYRHRL,OS,nowiden)
#else
  extern "OS"
#endif

void QGYRHRL(char *,                    /* receiver variable */
             qgyUint32 *,               /* length of receiver variable */
             char *,                    /* format name */
             qgyUint32 *,               /* resource category */
             char *);                   /* error code */


#endif /* _QGYRHRL_H_ */
