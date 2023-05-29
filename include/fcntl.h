#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name: fcntl.h                                        */
/*                                                                   */
/*  Descriptive Name: File system file control definitions.          */
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
/*  Description: Defines prototypes, macros, and structures to be    */
/*               used with the file system file control API.         */
/*                                                                   */
/*  Header Files Included: sys/stat.h                                */
/*                         unistd.h                                  */
/*                                                                   */
/*  Macros list: F_DUPFD                                             */
/*               F_GETFD                                         @A9A*/
/*               F_GETFL                                             */
/*               F_GETLK                                             */
/*               F_GETOWN                                            */
/*               F_RDLCK                                             */
/*               F_SETFD                                         @A9A*/
/*               F_SETFL                                             */
/*               F_SETLK                                             */
/*               F_SETLKW                                            */
/*               F_SETOWN                                            */
/*               F_UNLCK                                             */
/*               F_WRLCK                                             */
/*               F_GETLK64                                       @B1A*/
/*               F_SETLK64                                       @B1A*/
/*               F_SETLKW64                                      @B1A*/
/*               FASYNC                                              */
/*               FD_CLOEXEC                                      @A9A*/
/*               FNDELAY                                             */
/*               O_ACCMODE                                           */
/*               O_APPEND                                            */
/*               O_CREAT                                             */
/*               O_CODEPAGE                                          */
/*               O_EXCL                                              */
/*               O_INHERITMODE                                       */
/*               O_NDELAY                                            */
/*               O_NONBLOCK                                          */
/*               O_RDONLY                                            */
/*               O_RDWR                                              */
/*               O_SHARE_NONE                                    @A8A*/
/*               O_SHARE_RDONLY                                  @A8A*/
/*               O_SHARE_RDWR                                    @A8A*/
/*               O_SHARE_WRONLY                                  @A8A*/
/*               O_TEXTDATA                                          */
/*               O_TRUNC                                             */
/*               O_WRONLY                                            */
/*               O_LARGEFILE                                     @B1A*/
/*      The following macros come from the included file sys/stat.h  */
/*               S_IRGRP                                             */
/*               S_IROTH                                             */
/*               S_IRUSR                                             */
/*               S_IRWXG                                             */
/*               S_IRWXO                                             */
/*               S_IRWXU                                             */
/*               S_IWGRP                                             */
/*               S_IWOTH                                             */
/*               S_IWUSR                                             */
/*               S_IXGRP                                             */
/*               S_IXOTH                                             */
/*               S_IXUSR                                             */
/*               SEEK_CUR                                            */
/*               SEEK_END                                            */
/*               SEEK_SET                                            */
/*                                                                   */
/*  Structure List: flock                                            */
/*                  flock64                                      @B1A*/
/*                                                                   */
/*  Function prototype list :  creat()                               */
/*                             fcntl()                               */
/*                             open()                                */
/*                             creat64()                         @B1A*/
/*                             open64()                          @B1A*/
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/*  ---- ------------ ----- ------ -------- ------------------------ */
/*  $A0= D28418       3D10  940307 ROCH     New Include              */
/*  $A1= P3964382     3D60  941202 ROCH     Add O_INHERITMODE flag   */
/*  $A3= P3977661     3D60  950105 ROCH     Changes to               */
/*                                          documentation            */
/*  $A4= P3992252     3D60  950522 ROCH     Add __cplusplus #ifdef   */
/*                                          and #pragma info(none)   */
/*  $A5= P3994310     3D60  950615 ROCH     Add O_SET_FILE_SIZE flag */
/*  $A6= PTH01765     3D60  950804 ROCH     Correct #pragma info     */
/*  $A7= P3603776     3Q60  951021 ROCH     Add signals constants:   */
/*                                          F_GETOWN, F_SETOWN       */
/*                                          and FASYNC               */
/*  $A8= D9512801     4D10  961015 ROCH     Add share mode flags:    */
/*                                          O_SHARE_NONE             */
/*                                          O_SHARE_RDONLY           */
/*                                          O_SHARE_RDWR             */
/*                                          O_SHARE_WRONLY           */
/*                                                                   */
/*  $A9= D9497400     4D20  970124 ROCH     Add file descriptor flag */
/*                                          FD_CLOEXEC               */
/*                                          Add fcntl() cmd values   */
/*                                          F_GETFD, F_SETFD         */
/*  $B1= D9588102     4D40  980603 ROCH     Add open64(), creat64()  */
/*                                          APIs.                    */
/*                                          Add O_LARGEFILE value    */
/*                                          for oflag.               */
/*                                          Add flock64 structure.   */
/*                                          Add fcntl flags:         */
/*                                          F_GETLK64, F_SETLK64,    */
/*                                          and F_SETLKW64.          */
/*  $B2= P3670424     4D40  980603 ROCH     Remove O_SET_FILE_SIZE   */
/*  $B3= D9588105     4D40  980626 ROCH     Fix #pragma map          */
/*  $B4= P3682997     4D40  981102 ROCH     Large Files support for  */
/*                                          *IFS64IO                 */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Changed Activity.                                            */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#ifndef __fcntl_h
  #define __fcntl_h  1

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif


#include <sys/stat.h>           /* Include 'S_' macros              */
#include <unistd.h>             /* Include 'SEEK_' macros
                                   and primitive system data types  */

/********************************************************************/
/*  Turn on the Large File Support when *IFS64IO is specified   @B4A*/
/*