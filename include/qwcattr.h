/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QWCATTR                                    */
/*                                                                */
/* Descriptive Name: Common job/thread API information            */
/*                                                                */
/* 5769-SS1  (C) Copyright IBM Corp. 1997,1997                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: Macros, prototypes for use by retrieve and        */
/*              change job/thread APIs.                           */
/*                                                                */
/* Header Files Included: H/QWCATTR                               */
/*                                                                */
/* Macros List:   See belowe                                      */
/*                                                                */
/* Structure List:           none                                 */
/*                                                                */
/* Function Prototype List:  none                                 */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D94779       4D20  970409 ROCHESTER: New part             */
/* $A1= D95604       4D30  971109 ROCHESTER: add several new keys */
/* $A2= D95600       4D30  971109 ROCHESTER: add Svrmode4sql key  */
/* $A3= D95711       4D30  971203 ROCHESTER: add Chrid ctl   key  */
/* $A4= D95604.7     4D30  971217 ROCHESTER: add several new keys */
/* $A5= d95869.1     4D40  980422 ROCHESTER: add Home directory   */
/* $A6= D95998       4D40  980624 ROCHESTER: Add server type      */
/* $A7= D97233       4D40  980902 ROCHESTER: Add new keys         */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QWCATTR_h
#define QWCATTR_h


/******************************************************************/
/* Constants for using Work Management API                        */
/******************************************************************/
/******************************************************************/
/* Key constants                                                  */
/*                                                                */
/*    Refer to API documentation to determine the keys supported  */
/*    by each API.                                                */
/*                                                                */
/*    Keys are listed in numerical order.                         */
/*                                                                */
/******************************************************************/
#define QWCA_KEY_ACTIVEJOBSTATUS           101
#define QWCA_KEY_ALLOWMULTIPLETHREADS      102             /* @A4A*/
#define QWCA_KEY_BRKMSGHDL                 201
#define QWCA_KEY_CANCELKEY                 301
#define QWCA_KEY_CCSID                     302
#define QWCA_KEY_COUNTRYID                 303
#define QWCA_KEY_PROCESSUNITUSED           304
#define QWCA_KEY_CURRENTUSERPROFILE        305
#define QWCA_KEY_COMPLETIONSTATUS          306
#define QWCA_KEY_CURRENTSYSTEMPOOLID       307
#define QWCA_KEY_CURRENTLIBRARY            310
#define QWCA_KEY_CHRIDCONTROL              311             /* @A3A*/
#define QWCA_KEY_DATETIMEACTIVE            401
#define QWCA_KEY_DATETIMEENTEREDSYS        402
#define QWCA_KEY_DATETIMESCHEDULED         403
#define QWCA_KEY_DATETIMEONQUEUE           404
#define QWCA_KEY_DATEFORMAT                405
#define QWCA_KEY_DATESEP                   406
#define QWCA_KEY_DBCSCAPABLE               407
#define QWCA_KEY_DDMCONV                   408
#define QWCA_KEY_DEFAULTWAIT               409
#define QWCA_KEY_DEVICERECOVERYACTION      410
#define QWCA_KEY_DEVICENAME                411
#define QWCA_KEY_DEFAULTCCSID              412
#define QWCA_KEY_DECIMALFORMAT             413
#define QWCA_KEY_ENDSEVERITY               501
#define QWCA_KEY_ENDSTATUS                 502
#define QWCA_KEY_EXITKEY                   503
#define QWCA_KEY_FUNCTIONNAME              601
#define QWCA_KEY_FUNCTIONTYPE              602
#define QWCA_KEY_SIGNEDONJOB               701
#define QWCA_KEY_GROUPPROFILENAME          702
#define QWCA_KEY_GROUPPROFILENAMESUP       703
#define QWCA_KEY_HOMEDIRECTORY             801             /* @A5A*/
#define QWCA_KEY_INQUIRYMESSAGEREPLY       901
#define QWCA_KEY_INTERNALJOBID             902
#define QWCA_KEY_INITIALTHREAD             903             /* @A4A*/
#define QWCA_KEY_INITIALLIBRARYLIST        910
#define QWCA_KEY_JOBACCOUNTINGCODE        1001
#define QWCA_KEY_JOBDATE                  1002
#define QWCA_KEY_JOBDESCNAME              1003
#define QWCA_KEY_JOBQUEUENAME             1004
#define QWCA_KEY_JOBQUEUEPRIORITY         1005
#define QWCA_KEY_JOBSWITCHES              1006
#define QWCA_KEY_JOBMSGQFULL              1007
#define QWCA_KEY_JOBMSGQMAXSIZE           1008
#define QWCA_KEY_JOBNAME                  1009
#define QWCA_KEY_JOBTYPE                  1010             /* @A4A*/
#define QWCA_KEY_JOBSUBTYPE               1011             /* @A4A*/
#define QWCA_KEY_JOBUSERIDENTITY          1012             /* @A4A*/
#define QWCA_KEY_JOBUSERIDENTITYSETTING   1013             /* @A4A*/
#define QWCA_KEY_LANGID                   1201
#define QWCA_KEY_LOGGINGLEVEL             1202
#define QWCA_KEY_LOGGINGCL                1203
#define QWCA_KEY_LOGGINGSEVERITY          1204
#define QWCA_KEY_LOGGINGTEXT              1205
#define QWCA_KEY_LOCALE                   1210
#define QWCA_KEY_LOCALE_JOBATTRIBUTES     1211
#define QWCA_KEY_MODENAME                 1301
#define QWCA_KEY_MAXCPU                   1302
#define QWCA_KEY_MAXTEMPSTORAGE           1303
#define QWCA_KEY_MAXTHREADS               1304             /* @A4A*/
#define QWCA_KEY_MAXTEMPSTORAGEMEGABYTE   1305             /* @A7A*/
#define QWCA_KEY_NBROFAUXIOREQ            1401
#define QWCA_KEY_NBROFINTERTRANS          1402
#define QWCA_KEY_NBROFDBLOCKS             1403
#define QWCA_KEY_NBROFINTERLOCKS          1404
#define QWCA_KEY_NBROFNONDBLOCKS          1405
#define QWCA_KEY_OUTPUTQUEUENAME          1501
#define QWCA_KEY_OUTPUTQUEUEPRIORITY      1502
#define QWCA_KEY_PRINTKEYFORMAT           1601
#define QWCA_KEY_PRINTTEXT                1602
#define QWCA_KEY_PRINTERDEVICENAME        1603
#define QWCA_KEY_PURGE                    1604
#define QWCA_KEY_PRODUCTRETURNCODE        1605
#define QWCA_KEY_PROGRAMRETURNCODE        1606
#define QWCA_KEY_PENDSIGNALSET            1607
#define QWCA_KEY_PROCESSIDNUMBER          1608             /* @A4A*/
#define QWCA_KEY_PRODUCTLIBRARIES         1660
#define QWCA_KEY_RESPONSETIMETOTAL        1801
#define QWCA_KEY_RUNPRIORITY              1802
#define QWCA_KEY_ROUTINGDATA              1803
#define QWCA_KEY_SORTSEQUENCETABLE        1901
#define QWCA_KEY_STATUSMESSAGEHANDLING    1902
#define QWCA_KEY_STATUSONJOBQ             1903
#define QWCA_KEY_SUBMITJOBNAME            1904
#define QWCA_KEY_SUBMITMSGQUEUENAME       1905
#define QWCA_KEY_SUBSYSTEMDESC            1906
#define QWCA_KEY_SYSTEMPOOLID             1907
#define QWCA_KEY_SPECIALENVIRONMENT       1908
#define QWCA_KEY_SIGNALBLOCKINGMASK       1909
#define QWCA_KEY_SIGNALSTATUS             1910
#define QWCA_KEY_SERVERTYPE               1911          /* @A6A*/
#define QWCA_KEY_SCHEDULEDATE             1920
#define QWCA_KEY_SCHEDULETIME             1921
#define QWCA_KEY_SVRMODE4SQL              1922          /* @A2A*/
#define QWCA_KEY_SYSMSGHDL                1923          /* @A2A*/
#define QWCA_KEY_SYSTEMLIBRARYLIST        1980
#define QWCA_KEY_TIMESEP                  2001
#define QWCA_KEY_TIMESLICE                2002
#define QWCA_KEY_TIMESLICEENDPOOL         2003
#define QWCA_KEY_TEMPSTGUSED              2004
#define QWCA_KEY_TIMEDBLOCKWAITS          2005
#define QWCA_KEY_TIMEINTLOCKWAITS         2006
#define QWCA_KEY_TIMENONDBLOCKWAITS       2007
#define QWCA_KEY_THREADCOUNT              2008
#define QWCA_KEY_TEMPSTGUSEDMEGABYTE      2009             /* @A7A*/
#define QWCA_KEY_UNITOFWORKID             2101
#define QWCA_KEY_USERRETURNCODE           2102
#define QWCA_KEY_USERLIBRARYLIST          2110
#define QWCA_KEY_CHGJOB_ALL300            2701
#define QWCA_KEY_RTVCUR_ALL200            2702
#define QWCA_KEY_DUPLICATOPTION           2711              /*@A1A*/

/******************************************************************/
/* Constants for allow multiple threads