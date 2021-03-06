/* Automatically generated by bin/wrappergen
 * Do not edit this file directly! */
#include "c0vm.h"

#ifndef _C0VM_NATIVES_H
#define _C0VM_NATIVES_H

/* native_fn: the type of generic native functions taking
 *            a variable-length array of generic arguments */
typedef c0_value native_fn(c0_value *);

#define NATIVE_FUNCTION_COUNT 98
extern native_fn *native_function_table[NATIVE_FUNCTION_COUNT];

/* 15411 */
#define   NATIVE_FADD                               0
c0_value __c0ffi_fadd(c0_value *);
#define   NATIVE_FDIV                               1
c0_value __c0ffi_fdiv(c0_value *);
#define   NATIVE_FLESS                              2
c0_value __c0ffi_fless(c0_value *);
#define   NATIVE_FMUL                               3
c0_value __c0ffi_fmul(c0_value *);
#define   NATIVE_FSUB                               4
c0_value __c0ffi_fsub(c0_value *);
#define   NATIVE_FTOI                               5
c0_value __c0ffi_ftoi(c0_value *);
#define   NATIVE_ITOF                               6
c0_value __c0ffi_itof(c0_value *);
#define   NATIVE_PRINT_FPT                          7
c0_value __c0ffi_print_fpt(c0_value *);
#define   NATIVE_PRINT_HEX                          8
c0_value __c0ffi_print_hex(c0_value *);
#define   NATIVE_PRINT_INT                          9
c0_value __c0ffi_print_int(c0_value *);

/* args */
#define   NATIVE_ARGS_FLAG                          10
c0_value __c0ffi_args_flag(c0_value *);
#define   NATIVE_ARGS_INT                           11
c0_value __c0ffi_args_int(c0_value *);
#define   NATIVE_ARGS_PARSE                         12
c0_value __c0ffi_args_parse(c0_value *);
#define   NATIVE_ARGS_STRING                        13
c0_value __c0ffi_args_string(c0_value *);

/* conio */
#define   NATIVE_EOF                                14
c0_value __c0ffi_eof(c0_value *);
#define   NATIVE_FLUSH                              15
c0_value __c0ffi_flush(c0_value *);
#define   NATIVE_PRINT                              16
c0_value __c0ffi_print(c0_value *);
#define   NATIVE_PRINTBOOL                          17
c0_value __c0ffi_printbool(c0_value *);
#define   NATIVE_PRINTCHAR                          18
c0_value __c0ffi_printchar(c0_value *);
#define   NATIVE_PRINTINT                           19
c0_value __c0ffi_printint(c0_value *);
#define   NATIVE_PRINTLN                            20
c0_value __c0ffi_println(c0_value *);
#define   NATIVE_READLINE                           21
c0_value __c0ffi_readline(c0_value *);

/* curses */
#define   NATIVE_C_ADDCH                            22
c0_value __c0ffi_c_addch(c0_value *);
#define   NATIVE_C_CBREAK                           23
c0_value __c0ffi_c_cbreak(c0_value *);
#define   NATIVE_C_CURS_SET                         24
c0_value __c0ffi_c_curs_set(c0_value *);
#define   NATIVE_C_DELCH                            25
c0_value __c0ffi_c_delch(c0_value *);
#define   NATIVE_C_ENDWIN                           26
c0_value __c0ffi_c_endwin(c0_value *);
#define   NATIVE_C_ERASE                            27
c0_value __c0ffi_c_erase(c0_value *);
#define   NATIVE_C_GETCH                            28
c0_value __c0ffi_c_getch(c0_value *);
#define   NATIVE_C_INITSCR                          29
c0_value __c0ffi_c_initscr(c0_value *);
#define   NATIVE_C_KEYPAD                           30
c0_value __c0ffi_c_keypad(c0_value *);
#define   NATIVE_C_MOVE                             31
c0_value __c0ffi_c_move(c0_value *);
#define   NATIVE_C_NOECHO                           32
c0_value __c0ffi_c_noecho(c0_value *);
#define   NATIVE_C_REFRESH                          33
c0_value __c0ffi_c_refresh(c0_value *);
#define   NATIVE_C_SUBWIN                           34
c0_value __c0ffi_c_subwin(c0_value *);
#define   NATIVE_C_WADDCH                           35
c0_value __c0ffi_c_waddch(c0_value *);
#define   NATIVE_C_WADDSTR                          36
c0_value __c0ffi_c_waddstr(c0_value *);
#define   NATIVE_C_WCLEAR                           37
c0_value __c0ffi_c_wclear(c0_value *);
#define   NATIVE_C_WERASE                           38
c0_value __c0ffi_c_werase(c0_value *);
#define   NATIVE_C_WMOVE                            39
c0_value __c0ffi_c_wmove(c0_value *);
#define   NATIVE_C_WREFRESH                         40
c0_value __c0ffi_c_wrefresh(c0_value *);
#define   NATIVE_C_WSTANDEND                        41
c0_value __c0ffi_c_wstandend(c0_value *);
#define   NATIVE_C_WSTANDOUT                        42
c0_value __c0ffi_c_wstandout(c0_value *);
#define   NATIVE_CC_GETBEGX                         43
c0_value __c0ffi_cc_getbegx(c0_value *);
#define   NATIVE_CC_GETBEGY                         44
c0_value __c0ffi_cc_getbegy(c0_value *);
#define   NATIVE_CC_GETMAXX                         45
c0_value __c0ffi_cc_getmaxx(c0_value *);
#define   NATIVE_CC_GETMAXY                         46
c0_value __c0ffi_cc_getmaxy(c0_value *);
#define   NATIVE_CC_GETX                            47
c0_value __c0ffi_cc_getx(c0_value *);
#define   NATIVE_CC_GETY                            48
c0_value __c0ffi_cc_gety(c0_value *);
#define   NATIVE_CC_HIGHLIGHT                       49
c0_value __c0ffi_cc_highlight(c0_value *);
#define   NATIVE_CC_KEY_IS_BACKSPACE                50
c0_value __c0ffi_cc_key_is_backspace(c0_value *);
#define   NATIVE_CC_KEY_IS_DOWN                     51
c0_value __c0ffi_cc_key_is_down(c0_value *);
#define   NATIVE_CC_KEY_IS_ENTER                    52
c0_value __c0ffi_cc_key_is_enter(c0_value *);
#define   NATIVE_CC_KEY_IS_LEFT                     53
c0_value __c0ffi_cc_key_is_left(c0_value *);
#define   NATIVE_CC_KEY_IS_RIGHT                    54
c0_value __c0ffi_cc_key_is_right(c0_value *);
#define   NATIVE_CC_KEY_IS_UP                       55
c0_value __c0ffi_cc_key_is_up(c0_value *);
#define   NATIVE_CC_WBOLDOFF                        56
c0_value __c0ffi_cc_wboldoff(c0_value *);
#define   NATIVE_CC_WBOLDON                         57
c0_value __c0ffi_cc_wboldon(c0_value *);
#define   NATIVE_CC_WDIMOFF                         58
c0_value __c0ffi_cc_wdimoff(c0_value *);
#define   NATIVE_CC_WDIMON                          59
c0_value __c0ffi_cc_wdimon(c0_value *);
#define   NATIVE_CC_WREVERSEOFF                     60
c0_value __c0ffi_cc_wreverseoff(c0_value *);
#define   NATIVE_CC_WREVERSEON                      61
c0_value __c0ffi_cc_wreverseon(c0_value *);
#define   NATIVE_CC_WUNDEROFF                       62
c0_value __c0ffi_cc_wunderoff(c0_value *);
#define   NATIVE_CC_WUNDERON                        63
c0_value __c0ffi_cc_wunderon(c0_value *);

/* file */
#define   NATIVE_FILE_CLOSE                         64
c0_value __c0ffi_file_close(c0_value *);
#define   NATIVE_FILE_CLOSED                        65
c0_value __c0ffi_file_closed(c0_value *);
#define   NATIVE_FILE_EOF                           66
c0_value __c0ffi_file_eof(c0_value *);
#define   NATIVE_FILE_READ                          67
c0_value __c0ffi_file_read(c0_value *);
#define   NATIVE_FILE_READLINE                      68
c0_value __c0ffi_file_readline(c0_value *);

/* img */
#define   NATIVE_IMAGE_CLONE                        69
c0_value __c0ffi_image_clone(c0_value *);
#define   NATIVE_IMAGE_CREATE                       70
c0_value __c0ffi_image_create(c0_value *);
#define   NATIVE_IMAGE_DATA                         71
c0_value __c0ffi_image_data(c0_value *);
#define   NATIVE_IMAGE_HEIGHT                       72
c0_value __c0ffi_image_height(c0_value *);
#define   NATIVE_IMAGE_LOAD                         73
c0_value __c0ffi_image_load(c0_value *);
#define   NATIVE_IMAGE_SAVE                         74
c0_value __c0ffi_image_save(c0_value *);
#define   NATIVE_IMAGE_SUBIMAGE                     75
c0_value __c0ffi_image_subimage(c0_value *);
#define   NATIVE_IMAGE_WIDTH                        76
c0_value __c0ffi_image_width(c0_value *);

/* parse */
#define   NATIVE_INT_TOKENS                         77
c0_value __c0ffi_int_tokens(c0_value *);
#define   NATIVE_NUM_TOKENS                         78
c0_value __c0ffi_num_tokens(c0_value *);
#define   NATIVE_PARSE_BOOL                         79
c0_value __c0ffi_parse_bool(c0_value *);
#define   NATIVE_PARSE_INT                          80
c0_value __c0ffi_parse_int(c0_value *);
#define   NATIVE_PARSE_INTS                         81
c0_value __c0ffi_parse_ints(c0_value *);
#define   NATIVE_PARSE_TOKENS                       82
c0_value __c0ffi_parse_tokens(c0_value *);

/* string */
#define   NATIVE_CHAR_CHR                           83
c0_value __c0ffi_char_chr(c0_value *);
#define   NATIVE_CHAR_ORD                           84
c0_value __c0ffi_char_ord(c0_value *);
#define   NATIVE_STRING_CHARAT                      85
c0_value __c0ffi_string_charat(c0_value *);
#define   NATIVE_STRING_COMPARE                     86
c0_value __c0ffi_string_compare(c0_value *);
#define   NATIVE_STRING_EQUAL                       87
c0_value __c0ffi_string_equal(c0_value *);
#define   NATIVE_STRING_FROM_CHARARRAY              88
c0_value __c0ffi_string_from_chararray(c0_value *);
#define   NATIVE_STRING_FROMBOOL                    89
c0_value __c0ffi_string_frombool(c0_value *);
#define   NATIVE_STRING_FROMCHAR                    90
c0_value __c0ffi_string_fromchar(c0_value *);
#define   NATIVE_STRING_FROMINT                     91
c0_value __c0ffi_string_fromint(c0_value *);
#define   NATIVE_STRING_JOIN                        92
c0_value __c0ffi_string_join(c0_value *);
#define   NATIVE_STRING_LENGTH                      93
c0_value __c0ffi_string_length(c0_value *);
#define   NATIVE_STRING_SUB                         94
c0_value __c0ffi_string_sub(c0_value *);
#define   NATIVE_STRING_TERMINATED                  95
c0_value __c0ffi_string_terminated(c0_value *);
#define   NATIVE_STRING_TO_CHARARRAY                96
c0_value __c0ffi_string_to_chararray(c0_value *);
#define   NATIVE_STRING_TOLOWER                     97
c0_value __c0ffi_string_tolower(c0_value *);

#endif /* _C0VM_NATIVES_H */
