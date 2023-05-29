#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/*  qsnapi.h  - IBM Dynamic Screen Manager header file      V3R1M0   */
/*                                                                   */
/*  This header contains declarations and definitions used by        */
/*  callers of the Dynamic Screen Manager APIs.                      */
/*                                                                   */
/*  Copyright: 5763-SS1 (c) IBM Corp 1993, 1994                      */
/*===================================================================*/
#ifndef _qsnapi_h

#define _qsnapi_h

/* ================================================================= */
/*                                                                   */
/*  Declarations and definitions for the DSM low-level services      */
/*                                                                   */
/* ================================================================= */

    typedef long Q_Bin4;
    typedef unsigned long Q_UBin4;
    typedef short Q_Bin2;
    typedef unsigned short Q_UBin2;
    typedef unsigned char Q_Uchar;

    typedef Q_Bin4 Q_Handle_T;
    #define Q_NO_HANDLE         ((Q_Handle_T)0)

    typedef _Packed struct {
        Q_Bin4 provided;
        Q_Bin4 available;
        char exception_id[7];
        char reserved;
        char exception_data[1];
    } Q_Fdbk_T;

    static const Q_Bin4 QSN_FAIL=-1;

    typedef Q_Handle_T Qsn_Cmd_Buf_T;
    typedef Q_Handle_T Qsn_Inp_Buf_T;
    typedef Q_Handle_T Qsn_Env_T;

    typedef _Packed struct {
        char color_support;
        char CDRA;
        char CDRA_3F;
        char DBCS_support;
        char coexist;
        char alt_help;
        char tgt_dev[10];
        char disp_file[20];
        char invite_active;
        char prevent_override;
    } Qsn_Env_Desc_T;

    typedef _Packed struct {
        Q_Bin4 bytes_returned;
        Q_Bin4 bytes_available;
        char color_support;
        char CDRA;
        char CDRA_3F;
        char DBCS_support;
        char coexist;
        char alt_help;
        char tgt_dev[10];
        char disp_file[20];
        char invite_active;
        char prevent_override;
    } Qsn_Env_Rtv_Desc_T;

    typedef void (*Qsn_Env_Chg_FP) (const Qsn_Env_T *);
    typedef void (*Qsn_Env_Dlt_FP) (const Qsn_Env_T *);

    typedef _Packed struct {
        void *usr_dta_p;
        Qsn_Env_Chg_FP chg_fp;
        Qsn_Env_Dlt_FP dlt_fp;
    } Qsn_Env_Ext_Inf_T;

    typedef enum {
        QSN_ENV_SAME = '0'
    } Qsn_Env_Fld_T;

    typedef enum {
        QSN_COLOR_NO = '1', QSN_COLOR_YES  = '2', QSN_COLOR_SELECT = '3'
    }  Qsn_Env_Color_Sup_T;

    typedef enum {
        QSN_CDRA_STD = '1', QSN_CDRA_CNVT= '2'
    } Qsn_Env_CDRA_T;

    typedef enum {
        QSN_DBCS_STD    = '1', QSN_DBCS_ONLY  = '2',
        QSN_DBCS_EITHER = '3', QSN_DBCS_MIXED = '4'
    } Qsn_Env_DBCS_T;

    typedef enum {
        QSN_COEXIST_YES = '1', QSN_COEXIST_NO = '2'
    } Qsn_Env_Coexist_T;

    typedef enum {
        QSN_ALTHELP_NO = '1'
    } Qsn_Env_Alt_Help_T;

    typedef enum {
        QSN_DSP03 = '3', QSN_DSP04 = '4'
    } Qsn_Modes_T;

    typedef enum {
        QSN_INVITE_NO = '1', QSN_INVITE_YES = '2'
    } Qsn_Invite_T;

    typedef enum {
        QSN_DISPLAY_FILE = 1
    } Qsn_File_Type_T;

    typedef enum {
        QSN_PREVENT_OVERRIDE_NO = '1', QSN_PREVENT_OVERRIDE_YES = '2'
    } Qsn_Override_T;

    typedef _Packed struct {
        char atr_col;
        Q_Bin4 upper_left_row;
        Q_Bin4 upper_left_col;
        Q_Bin4 num_rows;
        Q_Bin4 num_cols;
    } Qsn_Env_Win_Desc_T;


    typedef _Packed struct {
        Q_Bin4 bytes_returned;
        Q_Bin4 bytes_available;
        char win_mode;
        char atr_col;
        Q_Bin4 upper_left_row;
        Q_Bin4 upper_left_col;
        Q_Bin4 num_rows;
        Q_Bin4 num_cols;
    } Qsn_Env_Win_Rtv_Desc_T;


    typedef enum {
        QSN_5250Q_YES  = '1', QSN_5250Q_NO   = '2', QSN_5250Q_FAIL = '3'
    } QSN_5250q_T;

    typedef _Packed struct Qsn_Qry_5250 {
        Q_Bin4  bytes_returned;
        Q_Bin4  bytes_available;
        char    query_status;
        Q_Bin2  hardware_class;
        char    WSC_code_level[3];
        char    reserved[16];
        char    device_type1;
        char    device_type2[4];
        char    device_model[3];
        char    keyboard_id;
        char    ext_keyboard_id;
        char    PC_keyboard_id;
        char    serial_number[4];
        Q_Bin2  num_input_capable;
        char    WSC_support[2];
        char    reserved3[1];
        char    WSC_display[5];    /* use Qsn_WSC_Display_T to overlay */
        char    reserved4[5];
        char    WSC_printer;
        char    reserved5[1];
        char    grid_buffers;
        char    reserved6[9];
        /* Note: this may be expanded in the future */
    } Qsn_Qry_5250_T;

    typedef _Packed struct {
        /* byte 1 */
        int row1_col1           : 2;
        int Read_MDT_Alt        : 1;
        int PA1_PA2             : 1;
        int PA3                 : 1;
        int csr_select          : 1;
        int move_csr_order      : 1;
        int Read_MDT_Imm_Alt    : 1;
        /* byte 2 */
        int scr_size            : 4;
        int light_pen           : 1;
        int mag_stripe          : 1;
        int color               : 2;
        /* byte 3 */
        int text_symbols        : 1;
        int extended_text_atr   : 1;
        int office_editor       : 3;
        int extended_pri_atr_DP : 1;
        int reserved1           : 2;
        /* byte 4 */
        int DBCS                : 3;
        int bi_directional      : 3;
        int SO_SI_storage       : 1;
        int reserved2           : 1;
        /* byte 5 */
        int graphics            : 3;
        int extended_3270       : 1;
        int pointing_device     : 1;
        int GUI_display         : 1;
        int GUI_support         : 1;
        int window_error        : 1;
        /* end of WSC_display */
        int                     : 0;
    } Qsn_WSC_display_T;

    typedef enum {
        QSN_NO_DBCS=0x00, QSN_SCREEN_DBCS=0x01, QSN_PURE_DBCS=0x02
    } Qsn_DBCS_Supp;

    typedef enum {
        QSN_24x80=0x01, QSN_27x132=0x03
    } Qsn_Scr_Sizes;

    typedef _Packed struct {
        Q_Bin4  bytes_returned;
        Q_Bin4  bytes_available;
        char reserved[8];
        char *dta;
        char *fld_dta;
        Q_Bin4 dta_len;
        Q_Bin4 fld_dta_len;
        Q_Bin4 num_flds;
        Q_Bin4 read_len;
        Q_Bin4 read_row;
        Q_Bin4 read_col;
        Q_Uchar AID;
        char reserved2[7];
    } Qsn_Read_Inf_T;

    typedef enum {
        QSN_FLDQ_NORM = '1', QSN_FLDQ_TRANS = '2'
    } Qsn_Fld_Q;

    typedef _Packed struct {
        Q_Bin4  bytes_returned;
        Q_Bin4  bytes_available;
        char type;
        Q_Bin4 row;
        Q_Bin4 col;
        Q_Bin4 len;
        char reserved[11];
        char *data;
    } Qsn_Fld_Inf_T;


    typedef enum {
        QSN_F1=0x31,   QSN_F2=0x32,    QSN_F3=0x33,    QSN_F4=0x34,
        QSN_F5=0x35,   QSN_F6=0x36,    QSN_F7=0x37,    QSN_F8=0x38,
        QSN_F9=0x39,   QSN_F10=0x3A,   QSN_F11=0x3B,   QSN_F12=0x3C,
        QSN_F13=0xB1,  QSN_F14=0xB2,   QSN_F15=0xB3,   QSN_F16=0xB4,
        QSN_F17=0xB5,  QSN_F18=0xB6,   QSN_F19=0xB7,   QSN_F20=0xB8,
        QSN_F21=0xB9,  QSN_F22=0xBA,   QSN_F23=0xBB,   QSN_F24=0xBC,
        QSN_SLP=0x3F,  QSN_FET=0x50,   QSN_PA1=0x6C,   QSN_PA2=0x6E,
        QSN_PA3=0x6B,  QSN_CLEAR=0xBD, QSN_ENTER=0xF1, QSN_HELP=0xF3,
        QSN_ROLLDOWN=0xF4, QSN_ROLLUP=0xF5, QSN_PRINT=0xF6,
        QSN_RECBS=0xF8
    } Qsn_AID_Codes_T;

    #define QSN_PAGEUP              QSN_ROLLDOWN
    #define QSN_PAGEDOWN            QSN_ROLLUP

    #define QSN_CC1_NULL            0x00
    #define QSN_CC1_LOCKBD          0x20
    #define QSN_CC1_MDTNBY          0x40
    #define QSN_CC1_MDTALL          0x60
    #define QSN_CC1_CLRMOD          0x80
    #define QSN_CC1_MDTNBY_CLRALL   0xA0
    #define QSN_CC1_MDTNBY_CLRMOD   0xC0
    #define QSN_CC1_MDTALL_CLRALL   0xE0

    #define QSN_CC2_NULL            0x00
    #define QSN_CC2_NO_IC           0x40
    #define QSN_CC2_RST_CSR_BL      0x20
    #define QSN_CC2_SET_CSR_BL      0x10
    #define QSN_CC2_UNLOCKBD        0x08
    #define QSN_CC2_ALARM           0x04
    #define QSN_CC2_MSG_OFF         0x02
    #define QSN_CC2_MSG_ON          0x01

    #define QSN_NO_SA               0x00
    #define QSN_SA_NORM             0x20
    #define QSN_SA_CS               0x30
    #define QSN_SA_BL               0x28
    #define QSN_SA_UL               0x24
    #define QSN_SA_HI               0x22
    #define QSN_SA_RI               0x21
    #define QSN_SA_ND               0x27

    #define QSN_SA_GRN              0x20
    #define QSN_SA_GRN_RI           0x21
    #define QSN_SA_WHT              0x22
    #define QSN_SA_WHT_RI           0x23
    #define QSN_SA_GRN_UL           0x24
    #define QSN_SA_GRN_UL_RI        0x25
    #define QSN_SA_WHT_UL           0x26
    #define QSN_SA_RED              0x28
    #define QSN_SA_RED_RI           0x29
    #define QSN_SA_RED_BL           0x2A
    #define QSN_SA_RED_RI_BL        0x2B
    #define QSN_SA_RED_UL           0x2C
    #define QSN_SA_RED_UL_RI        0x2D
    #define QSN_SA_RED_UL_BL        0x2E
    #define QSN_SA_ND_2F            0x2F
    #define QSN_SA_TRQ_CS           0x30
    #define QSN_SA_TRQ_CS_RI        0x31
    #define QSN_SA_YLW_CS           0x32
    #define QSN_SA_YLW_CS_RI        0x33
    #define QSN_SA_TRQ_UL           0x34
    #define QSN_SA_TRQ_UL_RI        0x35
    #define QSN_SA_YLW_