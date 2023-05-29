#ifndef _QGYRHRI_H_
#define _QGYRHRI_H_

/**********************************************************************
//                     Include File Description
//*********************************************************************
//  Header File Name: H/QGYRHRI
//
//  Descriptive Name: Retrieve Hardware Resource Information API
//
//  Description:
//  The Retrieve Hardware Resource Information API retrieves hardware
//  resource information fields that, together with the output from the
//  Retrieve Hardware Resource List API, provide a detailed description
//  of a resource.
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
//    QGYRHRI
//
//  Structure list:
//    none
//
//  End Include File Description
*/

/**********************************************************************
//                          Change Log
//*********************************************************************
//
//  Flag  Reason    Date      Userid    Description
//  ----  --------  --------  --------  -----------
//  $A0   D94532    02/25/96  ROCHESTR  New include file.
//
// End Change Activity
*/


/**********************************************************************
//                          Includes
//********************************************************************/

#ifdef __AIXxiCC__
  #include "qgyrhrcm.cleinc"
#else
  #include <qgyrhrcm.h>
#endif


/**********************************************************************
//                     Function Prototypes
//********************************************************************/

#if   __AIXxiCC__
  #pragma linkage(QGYRHRI,OS,nowiden)
  extern "OS"
#elif __ILEC400__
  #pragma linkage(QGYRHRI,OS,nowiden)
#else
  extern "OS"
#endif

void QGYRHRI(char *,                    /* receiver variable */
             qgyUint32 *,               /* length of rcvr variable */
             char *,                    /* format name */
             char *,                    /* resource name */
             char *);                   /* error code */


#endif /* _QGYRHRI_H_ */
