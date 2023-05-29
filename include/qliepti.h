 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLIEPTI                                    */
 /*                                                                */
 /* Descriptive Name: Indexes into entry point table.              */
 /*                                                                */
 /* 5763-SS1, 5716-SS1, 5769-SS1                                   */
 /* (C) Copyright IBM Corp. 1994,1998                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* This header file is an external product interface, all         */
 /* modifications must be upward compatible.                       */
 /*                                                                */
 /* Description: Include header file for indexes into the entry    */
 /*              point table (EPT) for APIs.                       */
 /*                                                                */
 /*              This header file is included into header file     */
 /*              QLIEPT, Access to entry point table.              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28436       3D10  940522 SPATEL  : New include           */
 /* $A1= D91693.1     3D60  941030 CEM     : 1st EPT driver changes*/
 /* $A2= D91693.2     3D60  941211 CEM     : 2nd EPT driver changes*/
 /* $A3= D91693       3D60  950317 CEM     : 3rd EPT driver changes*/
 /* $A4= P3993745     3D60  950616 CEM     : 6th EPT driver changes*/
 /* $A5= D94203.2     3D70  960110 CEM     : EPT driver changes.   */
 /* $A6= D94203.3     3D70  960306 CEM     : EPT driver changes.   */
 /* $A7= D94203.4     3D70  960501 CEM     : EPT driver changes.   */
 /* $A8= D94203       3D70  960515 CEM     : EPT driver changes.   */
 /* $A9= D94751.1     4D10  960911 CEM     : EPT driver changes.   */
 /* $AA= D94751.2     4D10  961106 CEM     : EPT driver changes.   */
 /* $AB= D94751.3     4D10  961204 CEM     : EPT driver changes.   */
 /* $AC= D94751       4D10  970108 CEM     : EPT driver changes.   */
 /* $AD= D95003.2     4D20  970312 CEM     : EPT driver changes.   */
 /* $AE= D95003.3     4D20  970521 CEM     : EPT driver changes.   */
 /* $AF= D95003       4D20  970618 CEM     : EPT driver changes.   */
 /* $AG= D95003.4     4D20  970723 CEM     : EPT driver changes.   */
 /* $AH= D95371.1     4D30  971008 CEM     : EPT driver changes.   */
 /* $AI= D95371.2     4D30  971022 CEM     : EPT driver changes.   */
 /* $AJ= D95371.4     4D30  971217 CEM     : EPT driver changes.   */
 /* $AK= D95371       4D30  980204 CEM     : EPT driver changes.   */
 /* $AL= D95728.1     4D40  980506 CEM     : 1st EPT driver changes*/
 /* $AM= D95728.2     4D40  980617 CEM     : 2nd EPT driver changes*/
 /* $AN= D95728.3     4D40  980805 CEM     : 3rd EPT driver changes*/
 /* $AO= D95728       4D40  980902 CEM     : 4th EPT driver changes*/
 /* $AP= D95728.4     4D40  981007 CEM     : 5th EPT driver changes*/
 /* $AQ= D95728.5     4D40  981021 CEM     : 6th EPT driver changes*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

   #ifndef   QLIEPTI_h
   #define   QLIEPTI_h

   #define   LIBDIM           1
   /* Total number of entries in the Entry Point Table. */
   #define   WLISRHNMTBL_DIM  6440
   #define   WLI_QDMCLOSE     10
   #define   WLI_QDMCOPEN     11
   #define   WLI_QDMNODEV     62
   #define   WLI_QDMIFERR     68
   #define   WLI_QDMRLSDV     70
   #define   WLI_QWCSCVDR     76
   #define   WLI_QWCSCVTR     77
   #define   WLI_QWCSRTLR     78
   #define   WLI_QWCCCRVC     83
   #define   WLI_QWCCCHVC     84
   #define   WLI_QWCCRCRC     85
   #define   WLI_QDMROUTE     109
   #define   WLI_QMHRTNEX     113
   #define   WLI_QDBCLRPF     175
   #define   WLI_QMHSNSTQ     252
   #define   WLI_QDCXLATE     409
   #define   WLI_QTNROLLB     1101
   #define   WLI_QTNCMT       1102
   #define   WLI_QWSSETWS     1157
   #define   WLI_QWSQRYWS     1603
   #define   WLI_QUSCMDLN     1851
   #define   WLI_QDMGETST     1950
   #define   WLI_QCMDCHK      1987
   #define   WLI_QCMDEXC      1988
   #define   WLI_QOLELINK     2180
   #define   WLI_QOLDLINK     2181
   #define   WLI_QOLSEND      2185
   #define   WLI_QOLRECV      2186
   #define   WLI_QOLSETF      2187
   #define   WLI_QOLQLIND     2188
   #define   WLI_QOLTIMER     2210
   #define   WLI_QMHRTVRQ     2444
   #define   WLI_QSQROUTE     2642
   #define   WLI_QEXFPGM      2795
   #define   WLI_QEZMAIN      2895
   #define   WLI_QRCVDTAQ     2896
   #define   WLI_QSNDDTAQ     2897
   #define   WLI_QCLRDTAQ     2898
   #define   WLI_QCLSCAN      2925
   #define   WLI_QCACHECK     2926
   #define   WLI_QAESTUB      2984
   #define   WLI_QEZSAVIN     3208
   #define   WLI_QMHQRDQD     3209
   #define   WLI_QSRSAVO      3248
   #define   WLI_QAESTUB3     3768
   #define   WLI_QMHRTMSS     3796
   #define   WLI_QMHSNSTA     3797
   #define   WLI_QMHSNINQ     3798
   #define   WLI_QWCSRTVR     3799
   #define   WLI_QECCVTEC     3895
   #define   WLI_QECCVTEW     3896
   #define   WLI_QECEDT       3897
   #define   WLI_QHFOPNSF     3976
   #define   WLI_QHFRDSF      3977
   #define   WLI_QHFWRTSF     3978
   #define   WLI_QHFCHGFP     3979
   #define   WLI_QHFCLOSF     3980
   #define   WLI_QHFRTVAT     3981
   #define   WLI_QHFCHGAT     3982
   #define   WLI_QHFDLTSF     3983
   #define   WLI_QOKDSPDP     4022
   #define   WLI_QOCCTLOF     4028
   #define   WLI_QLYSETS      4041
   #define   WLI_QLYGETS      4042
   #define   WLI_QLYWRTBI     4043
   #define   WLI_QLYRDBI      4044
   #define   WLI_QD0STRTS     4095
   #define   WLI_QD0ENDTS     4096
   #define   WLI_QD0TRNDS     4098
   #define   WLI_QSXFTRPB     4099
   #define   WLI_QPDLOGER     4148
   #define   WLI_QLGRTVSS     4170
   #define   WLI_QLGVLID      4172
   #define   WLI_QEZSNDMG     4251
   #define   WLI_QPDWRKPB     4258
   #define   WLI_QMHRMVM      4260
   #define   WLI_QMHRMVPM     4261
   #define   WLI_QMHRCVM      4262
   #define   WLI_QMHRCVPM     4263
   #define   WLI_QMHMOVPM     4264
   #define   WLI_QMHRSNEM     4265
   #define   WLI_QMHSNDM      4267
   #define   WLI_QMHSNDPM     4268
   #define   WLI_QMHSNDRM     4269
   #define   WLI_QFVLSTNL     4331
   #define   WLI_QWVPDAGE     4416
   #define   WLI_QLZAREQ      4458
   #define   WLI_QLZARLS      4459
   #define   WLI_QLZARTV      4460
   #define   WLI_QLEDAGE      4462
   #define   WLI_QFVADDA      4539
   #define   WLI_QFVLSTA      4544
   #define   WLI_QFVRMVA      4545
   #define   WLI_QFVRTVCD     4546
   #define   WLI_QLICVTTP     4551
   #define   WLI_QLICOBJD     4552
   #define   WLI_QSQLOPEN     4665
   #define   WLI_QSQLCLSE     4666
   #define   WLI_QSQLCMIT     4667
   #define   WLI_QESRSRVA     4831
   #define   WLI_QMHCHGEM     4834
   #define   WLI_QMHLJOBL     4835
   #define   WLI_QMHLSTM      4836
   #define   WLI_QMHPRMM      4837
   #define   WLI_QMHRTVM      4838
   #define   WLI_QMHRMQAT     4839
   #define   WLI_QMHSNDBM     4840
   #define   WLI_QMHRMFAT     4841
   #define   WLI_QUHDSPH      4842
   #define   WLI_QUHPRTH      4843
   #define   WLI_QUIADDLE     4844
   #define   WLI_QUIADDLM     4845
   #define   WLI_QUIADDPA     4846
   #define   WLI_QUIADDPW     4847
   #define   WLI_QUICLOA      4848
   #define   WLI_QUIDLTL      4849
   #define   WLI_QUIDSPP      4850
   #define   WLI_QUIGETLE     4851
   #define   WLI_QUIGETLM     4852
   #define   WLI_QUIGETV      4853
   #define   WLI_QUIOPNDA     4854
   #define   WLI_QUIOPNPA     4855
   #define   WLI_QUIPRTP      4856
   #define   WLI_QUIRMVLE     4857
   #define   WLI_QUIRMVPA     4858
   #define   WLI_QUIRMVPW     4859
   #define   WLI_QUISETLA     4860
   #define   WLI_QUISETSC     4861
   #define   WLI_QUIUPDLE     4862
   #define   WLI_QSYCHGPR     4864
   #define   WLI_QSYCHGPW     4865
   #define   WLI_QSYCUSRA     4866
   #define   WLI_QSYCVTA      4867
   #define   WLI_QSYGETPH     4868
   #define   WLI_QSYLAUTU     486