 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: SQLPROC                                      */
 /*                                                                */
 /* Descriptive Name: Structured Query Language (SQL)              */
 /*                   Procedures interface.                        */
 /*                                                                */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The SQL procedure interface provides access to    */
 /*              the SQL procedure service program. This is used   */
 /*              by SQL procedures.                                */
 /*                                                                */
 /* Header Files Included: SQLPROC                                 */
 /*                                                                */
 /* Macros List:                                                   */
 /*                                                                */
 /* Structure List:   SQLCA                                        */
 /*                                                                */
 /* Function Prototype List:  SQLInitSQLCA                         */
 /*                           SQLAssignN                           */
 /*                           SQLAssignC                           */
 /*                           SQLAssignD                           */
 /*                           SQLAssignT                           */
 /*                           SQLAssignTS                          */
 /*                           SQLCompareN                          */
 /*                           SQLCompareC                          */
 /*                           SQLCompareD                          */
 /*                           SQLCompareT                          */
 /*                           SQLCompareTS                         */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94943       4d20  970615 KLPASSE   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef SQL_H_SQLPROC
   #define SQL_H_SQLPROC           /* Permit duplicate Includes */

#ifndef __SQL_EXTERN
    #ifdef __cplusplus
        #define SQL_EXTERN extern "C"
    #else
        #define SQL_EXTERN extern
    #endif

    #define __SQL_EXTERN
#endif


/* Standard SQL data types */
#define SQL_CHAR              453
#define SQL_NUMERIC           489
#define SQL_DECIMAL           485
#define SQL_INTEGER           497
#define SQL_SMALLINT          501
#define SQL_FLOAT             481
#define SQL_DATE              385
#define SQL_TIME              389
#define SQL_TIMESTAMP         393
#define SQL_VARCHAR           449
#define SQL_GRAPHIC           469
#define SQL_VARGRAPHIC        465

/* Standard SQL comparisons */
#define SQL_LT       1
#define SQL_LE       2
#define SQL_GT       3
#define SQL_GE       4
#define SQL_EQ       5
#define SQL_NE       6

/* Standard SQL formats for date,time,timestamp */
#define SQL_USA               1
#define SQL_ISO               3
#define SQL_EUR               5
#define SQL_JIS               7
#define SQL_INTERNAL          10
#define SQL_MDY               23
#define SQL_DMY               24
#define SQL_YMD               25
#define SQL_JUL               26
#define SQL_HMS               27
#define SQL_SAA_STAMP         9
#define SQL_INTERNAL_STAMP    12
#define SQL_YYYYMMDDHHMMSS    30

#define SQLP_NULLIND -1

/* Init sqlca */
SQL_EXTERN void SQLInitSQLCA
         (SQLCA* sqlcap);  /* pointer to sqlca           */

/* Modify sqlstate for set */
SQL_EXTERN void SQLModifyState
         (SQLCA* sqlcap);  /* pointer to sqlca           */

/* Assign character values */
SQL_EXTERN void SQLAssignC
         (SQLCA* sqlcap, /* pointer to sqlca            */
            void* op1,    /* pointer to target             */
            long type1,   /* type of target                */
            long len1,    /* length of target              */
            short* i1,    /* indicator variable for target */
            char* op2,    /* pointer to source             */
            short* i2);   /* indicator variable for source */

/* Assign numeric values */
SQL_EXTERN void SQLAssignN
           (SQLCA* sqlcap, /* pointer to sqlca             */
            void* op1,    /* pointer to target             */
            long type1,   /* type of target                */
            short dig1,   /* digits of target              */
            short prec1,  /* precision of target           */
            short* i1,    /* indicator variable for target */
            void* op2,    /* pointer to source             */
            long type2,   /* type of source                */
            short dig2,   /* digits of source              */
            short prec2,  /* precision of source           */
            short* i2);   /* indicator variable for source */

/* Assign date values */
SQL_EXTERN void SQLAssignD
         (SQLCA* sqlcap, /* pointer to sqlca             */
            char* op1,    /* pointer to target             */
            short* i1,    /* indicator variable for target */
            char* op2,    /* pointer to source             */
            short* i2,    /* indicator variable for source */
            char sep,     /* separator for date            */
            short format);/* format for date               */

/* Assign time values */
SQL_EXTERN void SQLAssignT
         (SQLCA* sqlcap, /* pointer to sqlca             */
            char* op1,    /* pointer to target             */
            short* i1,    /* indicator variable for target */
            char* op2,    /* pointer to source             */
            short* i2,    /* indicator variable for source */
            char sep,     /* separator for date            */
            short format);/* format for date               */

/* Assign timestamp values */
SQL_EXTERN void SQLAssignTS
         (SQLCA* sqlcap, /* pointer to sqlca             */
            char* op1,    /* pointer to target             */
            short* i1,    /* indicator variable for target */
            char* op2,    /* pointer to source             */
            short* i2);   /* indicator variable for source */

/* Compare character values */
SQL_EXTERN long SQLCompareC
         (SQLCA* sqlcap,/* pointer to sqlca             */
            char* op1,    /* pointer to target             */
            short* i1,    /* indicator variable for target */
            char sqlop,   /* sql comparison operator       */
            char* op2,    /* pointer to source             */
            short* i2);   /* indicator variable for source */

/* Compare numeric values */
SQL_EXTERN long SQLCompareN
             (SQLCA* sqlcap, /* pointer to sqlca             */
              void* op1,    /* pointer to target             */
              long type1,   /* type of target                */
              short dig