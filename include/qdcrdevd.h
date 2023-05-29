 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDCRDEVD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Device Description                  */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Device Description (QDCRDEVD) API    */
 /*              retrieves information about a deivce description. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_DEVD0100_t                                 */
 /*                 Qdc_DEVD0200_t                                 */
 /*                 Qdc_DEVD0300_t                                 */
 /*                 Qdc_DEVD0400_t                                 */
 /*                 Qdc_DEVD0500_t                                 */
 /*                 Qdc_DEVD0600_t                                 */
 /*                 Qdc_DEVD0700_t                                 */
 /*                 Qdc_DEVD0800_t                                 */
 /*                 Qdc_DEVD0900_t                                 */
 /*                 Qdc_DEVD1000_t                                 */
 /*                 Qdc_DEVD1100_t                                 */
 /*                 Qdc_DEVD1200_t                                 */
 /*                 Qdc_DEVD1300_t                                 */
 /*                 Qdc_DEVD1400_t                                 */
 /*                 Qdc_DEVD1500_t                                 */
 /*                 Qdc_DEVD1600_t                                 */
 /*                 Qdc_DEVD1700_t                                 */
 /*                 Qdc_DEVD1800_t                                 */
 /*                 Qdc_Mode_Names_t                               */
 /*                 Qdc_Auxiliary_Devices_t                        */
 /*                 Qdc_Switch_Lines_t                             */
 /*                 Qdc_User_Options_t                             */
 /*                 Qdc_User_Data_t                                */
 /*                                                                */
 /* Function Prototype List: QDCRDEVD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862004     3D10  940213 MOREY:    New Include           */
 /* $A1= D2883000     3D60  941211 JAM  :    Add DEV1600 and 1700  */
 /*                                          formats               */
 /* $A2= D9171000     3D60  950210 ALLSEN    Add new fields to     */
 /*                                          DEVD1100 format       */
 /* $a3= p3617122     3d70  960409 muras:    add numerical status  */
 /*                                          for devd1700 MLB drive*/
 /* $A4= D95020       4D10  961030 ZUBAIR:   ACT printer support   */
 /* $A5= D9508400     4D20  970430 CMWOOD:   Add allocated to info */
 /* $A6= D9548600     4D20  970604 ADAFIN:   Add IP info for       */
 /*                                          virtual printer and   */
 /*                                          virtual display       */
 /* $A7= P3649392     4D20  970720 CMWOOD:   Fix problems with     */
 /*                                          formats DEVD0800,     */
 /*                                          DEVD1100, DEVD1300,   */
 /*                                          and DEVD1400.         */
 /* $A8=D9556100      4D30  971010 ZUBAIR:   Add RSCALCPTY,        */
 /*                                          INLMNTWAIT and        */
 /*                                          EOVMNTWAIT  for       */
 /*                                          Tape MLB (devd1700)   */
 /* $A9= P3665843     4D30  980219 KDICK:    Fix problems with     */
 /*                                          formats DEVD0600 and  */
 /*                                          char allocations for  */
 /*                                          job number in all     */
 /*                                          other formats.        */
 /* $AA= D97010       4D40  980615 rbs  :    add crypto support 