#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATION *********************************/
/*                                                                   */
/*  Header File Name:   unistd.h                                     */
/*                                                                   */
/*  Descriptive Name:   File system API definition.                  */
/*                                                                   */
/*  5763-SS1, 5716-SS1, 5769-SS1                                     */
/*  (C) Copyright IBM Corp. 1993, 1999                               */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: Defines prototypes, macros, variables, and          */
/*               data types to be used with the File System API.     */
/*                                                                   */
/*                                                                   */
/*  Header Files Included: sys/types.h                               */
/*                                                                   */
/*  Macros List: F_OK                                                */
/*               NULL                                                */
/*               R_OK                                                */
/*               SEEK_CUR                                            */
/*               SEEK_END                                            */
/*               SEEK_SET                                            */
/*               W_OK                                                */
/*               X_OK                                                */
/*               _PC_CHOWN_RESTRICTED                                */
/*               _PC_LINK_MAX                                        */
/*               _PC_MAX_CANON                                       */
/*               _PC_MAX_INPUT                                       */
/*               _PC_NAME_MAX                                        */
/*               _PC_NO_TRUNC                                        */
/*               _PC_PATH_MAX                                        */
/*               _PC_PIPE_BUF                                        */
/*               _PC_THREAD_SAFE                                 @C1A*/
/*               _PC_VDISABLE                                        */
/*               _SC_ARG_MAX                                         */
/*               _SC_CHILD_MAX                                       */
/*               _SC_CLK_TCK                                         */
/*               _SC_JOB_CONTROL                                     */
/*               _SC_NGROUPS_MAX                                     */
/*               _SC_OPEN_MAX                                        */
/*               _SC_SAVED_IDS                                       */
/*               _SC_STREAM_MAX                                      */
/*               _SC_TZNAME_MAX                                      */
/*               _SC_VERSION                                         */
/*               STDIN_FILENO                                    @C3A*/
/*               STDOUT_FILENO                                   @C3A*/
/*               STDERR_FILENO                                   @C3A*/
/*                                                                   */
/*                                                                   */
/*  Structure List : None                                            */
/*                                                                   */
/*  Function Prototype List :                                        */
/*           access                                                  */
/*           alarm                                                   */
/*           chdir                                                   */
/*           chown                                                   */
/*           close                                                   */
/*           dup                                                     */
/*           dup2                                                    */
/*           fchown                                                  */
/*           fpathconf                                               */
/*           fsync                                                   */
/*           ftruncate                                               */
/*           getcwd                                                  */
/*           getegid                                                 */
/*           geteuid                                                 */
/*           getgid                                                  */
/*           getgroups                                               */
/*           getdomainname                                           */
/*           gethostid                                               */
/*           gethostname                                             */
/*           getopt                                              @B4A*/
/*           getpgrp                                                 */
/*           getpid                                                  */
/*           getppid                                                 */
/*           getuid                                                  */
/*           link                                                    */
/*           lseek                                                   */
/*           pathconf                                                */
/*           pause                                                   */
/*           read                                                    */
/*           readlink                                                */
/*           rmdir                                                   */
/*           setdomainname                                           */
/*           sethostid                                               */
/*           sethostname                                             */
/*           setpgid                                                 */
/*           sleep                                                   */
/*           symlink                                                 */
/*           sysconf                                                 */
/*           unlink                                                  */
/*           usleep                                                  */
/*           write                                                   */
/*           ftruncate64                                         @C4A*/
/*           lseek64                                             @C4A*/
/*                                                                   */
/*  Change Activity :                                                */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D28418       3D10  940307  ROCH      New Include            */
/*  $B0= P3977661     3D60  950105  ROCH      Changes to             */
/*                                            documentation          */
/*  $B1= P3985331     3D60  950427  ROCH      Add alarm(), getpgrp() */
/*                                            getpid(), getppid(),   */
/*                                            pause(), setpgid()     */
/*                                            and sleep() function   */
/*                                            prototypes             */
/*  $B2= P3992252     3D60  950522  ROCH      Add __cplusplus #ifdef */
/*                                            and #pragma info(none) */
/*  $B3= P3995957     3D60  950717  ROCH      Fix __cplusplus #ifdef */
/*  $B4= P3996475     3D60  950717  ROCH      Add getopt()           */
/*  $B5= PTH01765     3D60  950804  ROCH      Correct #pragma info   */
/*  $C1= D9477905     4D20  961203  ROCH      Add _PC_THREAD_SAFE    */
/*  $C2= D9477900     4D20  970604  ROCH      Add usleep() function  */
/*  $C3= P3649745     4D20  970709  ROCH      Add std stm fileno     */
/*  $C4= D9588102     4D40  980603  ROCH      Add 64 bit APIs        */
/*  $C5= D9588105     4D40  980626  ROCH      Fix #pragma map        */
/*  $C6= P3682997     4D40  981102  ROCH      Large Files support for*/
/*                                            *IFS64IO               */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/*  End Change Activity.                                             */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __unistd_h
  #define __unistd_h  1

#ifndef __QBFC_EXTERN
    #