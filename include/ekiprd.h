/*
 *                               PrintManager
 *
 *  ekiprd.h - type and macro definitions for Print
 *             Descriptor programming interface
 *
 *
 *  PrintManager  (program no. 5688-179)
 *
 *  Version:  1.0
 *  Release:  1.0
 *  Level:    0.0
 *
 * 5763-SS1, 5716-SS1, 5769-SS1
 * (C) Copyright IBM Corp. 1993, 1998
 * All rights reserved.
 * US Government Users Restricted Rights -
 * Use, duplication or disclosure restricted
 * by GSA ADP Schedule Contract with IBM Corp.
 *
 * Licensed Materials-Property of IBM
 *
 * CHANGE ACTIVITY:
 *
 * FLAG REASON       LEVEL DATE   PGMR       CHANGE DESCRIPTION
 * ---- ------------ ----- ------ ---------- ------------------------
 * $A1= P3667814     4D30  980316 RKF        Add support for C++
 *
 */

#if !defined (__EKIPRD)
#define __EKIPRD


/*-------------------------------------------------------------------*/
/* Define the handle types for a Print Descriptor edit session.      */
/*-------------------------------------------------------------------*/

typedef LHANDLE   HPRD;                /* hprd- print descriptor sess*/
typedef HPRD     *PHPRD;


/*-------------------------------------------------------------------*/
/* Define constants that identify the maximum lengths of various     */
/* Print Descriptor data fields.  When declaring character strings,  */
/* one additional byte must be included in the length to account for */
/* the NULL terminator.                                              */
/*-------------------------------------------------------------------*/

#define  PRD_DESC_LENGTH    63         /* longest Prd description    */
#define  PRD_STAMP_LENGTH   32         /* time/date stamp length     */

#define  MIN_STRING_LEN     1          /* minimum len for PRD_STRING */
#define  MAX_STRING_LEN     32767      /* maximum len for PRD_STRING */

#define  MIN_PRECISION      0          /* min # of decimal places    */
#define  MAX_PRECISION      10         /* max # of decimal places    */


#define  PRD_NAME_LENGTH    72         /* longest filename length    */


/*-------------------------------------------------------------------*/
/* These are the valid Print Descriptor validation rules.  They, in  */
/* combination with a valid values string, determine the checks that */
/* are used to validate print option values and defaults.            */
/*-------------------------------------------------------------------*/

#define  PRD_NOVALIDATION   0L         /* no validation              */
#define  PRD_STRING         1L         /* any zero terminated string */
#define  PRD_RANGE          2L         /* numeric range              */
#define  PRD_LIST           3L         /* list of valid option values*/


/*-------------------------------------------------------------------*/
/* Define the Prd and Group control constants used by the Prd API.   */
/*-------------------------------------------------------------------*/

#define  PRD_CREATE            10L     /* create Prd only if no exist*/
#define  PRD_UPDATE            11L     /* replace only if exists     */
#define  PRD_CREATE_OR_UPDATE  12L     /* create or replace          */

#define  PRD_AUTO_CREATE       20L     /* create grp only if no exist*/
#define  PRD_NOAUTO_CREATE     21L     /* error if group not exists  */

#define  PRD_AUTO_DELETE       30L     /* delete group if empty      */
#define  PRD_NOAUTO_DELETE     31L     /* leave empty groups around  */


/*-------------------------------------------------------------------*/
/* Define Prd process control constants for use when building Prd    */
/* references into the edit session.                                 */
/*-------------------------------------------------------------------*/

#define  PRD_BUILD             40L     /* build reference into sess  */
#define  PRD_NOBUILD           41L     /* do not build into session. */
#define  PRD_USED              42L     /* it has been built - do not */


/*-------------------------------------------------------------------*/
/* Define Prd search control constants for use when searching for    */
/* Prd's in user's search order group list.                          */
/*-------------------------------------------------------------------*/

#define  PRD_SEARCH            50L     /* search this group for Prd's*/
#define  PRD_NOSEARCH          51L     /* do not search this group.  */


/*-------------------------------------------------------------------*/
/* Define the two Print Descriptor file format identifiers.  These   */
/* constants are used to identify whether a Print Descriptor         */
/* definition is native to the operating system or is in interchange */
/* format.                                                           */
/*-------------------------------------------------------------------*/

#define  PRD_NATIVE       20L          /* Prd is native to local OS  */
#define  PRD_INTERCHANGE  21L          /* Prd in interchange format  */


/*-------------------------------------------------------------------*/
/* Type definition for a Print Descriptor filenames and descriptions.*/
/* Also a definition for a Print Descriptor reference array as used  */
/* in the PrdSetRefs and PrdQryRefs interfaces.                      */
/*-------------------------------------------------------------------*/

typedef  char    PRDNAME[ PRD_NAME_LENGTH + 1 ];
typedef  char    PRDDESCRIPTION[ PRD_DESC_LENGTH + 1 ];


/*-------------------------------------------------------------------*/
/* Type definitions for a Print Descriptor names. +1 for terminator. */
/*-------------------------------------------------------------------*/

typedef  char      OPT_NAME[ MAX_NAME_LEN + 1 ];
typedef  OPT_NAME  FAR  *OPT_NAME_ARR;


/*-------------------------------------------------------------------*/
/* Type definition for a Print Descriptor time/date stamp.  It is in */
/* the format "YYYY.MM.DD hh:mm:ss VVRRLL######" where:              */
/* YYYY   year        MM  month         DD  day                      */
/* hh     hours       mm  minutes       ss  seconds                  */
/* VV     version     RR  release       LL  modification level       */
/* ###### random number generated uniquely for each Prd definition   */
/*-------------------------------------------------------------------*/

typedef  char     PRDLEVELSTAMP [PRD_STAMP_LENGTH+1];


/*-------------------------------------------------------------------*/
/* The following structures are print option definition structures.  */
/* Thy are used to define print options to the Prd API.              */
/*                                                                   */
/* Field flDefType can be set to either PRTMGR_BINARY or PRTMGR_STRL.*/
/* PRTMGR_STRL indicates that pbDef contains a zero-terminated string*/
/* hence cbDefLength is ignored.  PRTMGR_BINARY indicates that pbDef */
/* contains binary data, and its length specified in cbDefLength.    */
/*                                                                   */
/* If flDefType is neither, PRTMGR_STRL is assumed.                  */
/*-------------------------------------------------------------------*/

typedef struct optdefn1                /* option definition #1       */
   {
   PSZ    pszName;                     /* name of the option         */
   ULONG  flDefType;                   /* type of option default     */
   ULONG  cbDefLength;                 /* len in bytes of option def */
   PBYTE  pbDef;                       /* ptr to option default      */
   } OPTDEFN1;

typedef struct optdefn2                /* option definition #2       */
   {
   PSZ    pszName;                     /* name of the option         */
   ULONG  flDefType;                   /* type of option default     */
   ULONG  cbDefLength;                 /* len in bytes of option def */
   PBYTE  pbDef;                       /* ptr to option default      */
   ULONG  flRule;                      /* print opt validation rule  */
   PSZ    pszVv;                       /* print option valid values  */
   } OPTDEFN2;


/*-------------------------------------------------------------------*/
/* This is a Print Descriptor definition structure.  It is used      */
/* to define a print descriptor to the Prd API.                      */
/*-------------------------------------------------------------------*/

typedef struct prddefn2
   {
   PSZ             pszPrdName;         /* Prd name                   */
   PRDDESCRIPTION  szDescription;      /* description                */
   ULONG           idPrdId;            /* id (type) of this Prd      */
   PRDLEVELSTAMP   chLevelStamp;       /* date/time/level stamp      */
   } PRDDEFN2;
typedef  PRDDESCRIPTION  FAR  *PRD_DESC_ARR;


/*-------------------------------------------------------------------*/
/* IBM-defined Prd Id types.                                         */
/*-------------------------------------------------------------------*/

#define  PRD_MEDIA                        10L
#define  PRD_GROUP_LIST                   11L
#define  PRD_PRINTER_DEVICE_DRIVER        12L
#define  PRD_PLOTTER_DEVICE_DRIVER        13L
#define  PRD_DISPLAY_DEVICE_DRIVER        14L
#define  PRD_PRINTER_DEVICE               15L
#define  PRD_PLOTTER_DEVICE               16L
#define  PRD_DISPLAY_DEVICE               17L
#define  PRD_PRESENTATION_DEVICE          18L
#define  PRD_PRESENTATION_SERVER          19L
#define  PRD_PRINT_PROFILE                20L
#define  PRD_PRESENTATION_GROUP_SERVER    99L


/*-------------------------------------------------------------------*/
/* Print Descriptor Group Definition structure.  It is used to       */
/* define a group list item to the Prd API.                          */
/*                                                                   */
/* Field flProcessFlag can be set to ei