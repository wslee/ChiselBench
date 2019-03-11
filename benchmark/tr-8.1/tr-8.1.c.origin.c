typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
typedef long ptrdiff_t;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef unsigned long uintmax_t;
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
typedef enum strtol_error strtol_error;
typedef uintmax_t count;
enum Char_class {
    CC_ALNUM = 0,
    CC_ALPHA = 1,
    CC_BLANK = 2,
    CC_CNTRL = 3,
    CC_DIGIT = 4,
    CC_GRAPH = 5,
    CC_LOWER = 6,
    CC_PRINT = 7,
    CC_PUNCT = 8,
    CC_SPACE = 9,
    CC_UPPER = 10,
    CC_XDIGIT = 11,
    CC_NO_CLASS = 9999
} ;
enum Upper_Lower_class {
    UL_LOWER = 0,
    UL_UPPER = 1,
    UL_NONE = 2
} ;
enum Range_element_type {
    RE_NORMAL_CHAR = 0,
    RE_RANGE = 1,
    RE_CHAR_CLASS = 2,
    RE_EQUIV_CLASS = 3,
    RE_REPEATED_CHAR = 4
} ;
struct __anonstruct_range_443125039 {
   unsigned char first_char ;
   unsigned char last_char ;
};
struct __anonstruct_repeated_char_91080125 {
   unsigned char the_repeated_char ;
   count repeat_count ;
};
union __anonunion_u_234953945 {
   unsigned char normal_char ;
   struct __anonstruct_range_443125039 range ;
   enum Char_class char_class ;
   unsigned char equiv_code ;
   struct __anonstruct_repeated_char_91080125 repeated_char ;
};
struct List_element {
   enum Range_element_type type ;
   struct List_element *next ;
   union __anonunion_u_234953945 u ;
};
struct Spec_list {
   struct List_element *head ;
   struct List_element *tail ;
   count state ;
   count length ;
   size_t n_indefinite_repeats ;
   struct List_element *indefinite_repeat_element ;
   _Bool has_equiv_class ;
   _Bool has_char_class ;
   _Bool has_restricted_char_class ;
};
struct E_string {
   char *s ;
   _Bool *escaped ;
   size_t len ;
};
typedef long __ssize_t;
typedef __ssize_t ssize_t;
enum quoting_style {
    literal_quoting_style = 0,
    shell_quoting_style = 1,
    shell_always_quoting_style = 2,
    c_quoting_style = 3,
    c_maybe_quoting_style = 4,
    escape_quoting_style = 5,
    locale_quoting_style = 6,
    clocale_quoting_style = 7,
    custom_quoting_style = 8
} ;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_987823755 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_987823755 __mbstate_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct quoting_options;
struct quoting_options;
struct quoting_options;
struct quoting_options {
   enum quoting_style style ;
   int flags ;
   unsigned int quote_these_too[255UL / (sizeof(int ) * 8UL) + 1UL] ;
   char const   *left_quote ;
   char const   *right_quote ;
};
struct slotvec {
   size_t size ;
   char *val ;
};
typedef unsigned long reg_syntax_t;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                                                 , ...) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size , size_t __n ,
                              FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) __assert_fail)(char const   *__assertion ,
                                                                                                   char const   *__file ,
                                                                                                   unsigned int __line ,
                                                                                                   char const   *__function ) ;
extern int optind ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) stpcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) toupper)(int __c ) ;
__inline static unsigned char to_uchar(char ch ) 
{ 


  {
  return ((unsigned char )ch);
}
}
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) setlocale)(int __category ,
                                                                                  char const   *__locale ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) gettext)(char const   *__msgid )  __attribute__((__format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) textdomain)(char const   *__domainname ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) bindtextdomain)(char const   *__domainname ,
                                                                                       char const   *__dirname ) ;
 __attribute__((__noreturn__)) void xalloc_die(void) ;
void *xmalloc(size_t n )  __attribute__((__malloc__)) ;
void *xcalloc(size_t n , size_t s )  __attribute__((__malloc__)) ;
__inline static void *xnmalloc(size_t n , size_t s )  __attribute__((__malloc__)) ;
__inline static void *xnmalloc(size_t n , size_t s )  __attribute__((__malloc__)) ;
__inline static void *xnmalloc(size_t n , size_t s ) 
{ 
  int tmp ;
  void *tmp___0 ;

  {
  if (sizeof(ptrdiff_t ) <= sizeof(size_t )) {
    tmp = -1;
  } else {
    tmp = -2;
  }
  if ((size_t )tmp / s < n) {
    {
    xalloc_die();
    }
  }
  {
  tmp___0 = xmalloc(n * s);
  }
  return (tmp___0);
}
}
char *last_component(char const   *name ) ;
void close_stdout(void) ;
void version_etc(FILE *stream , char const   *command_name , char const   *package ,
                 char const   *version  , ...)  __attribute__((__sentinel__)) ;
char const   *program_name ;
void set_program_name(char const   *argv0 ) ;
__inline static void emit_ancillary_info(void) 
{ 
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char const   *lc_messages ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;

  {
  {
  tmp = last_component(program_name);
  tmp___0 = gettext("\nReport %s bugs to %s\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___0), tmp, "bug-coreutils@gnu.org");
  tmp___1 = gettext("%s home page: <http://www.gnu.org/software/%s/>\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___1), "GNU coreutils",
         "coreutils");
  tmp___2 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
  fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
  tmp___3 = setlocale(5, (char const   *)((void *)0));
  lc_messages = (char const   *)tmp___3;
  }
  if (lc_messages) {
    {
    tmp___6 = strncmp(lc_messages, "en_", (size_t )3);
    }
    if (tmp___6) {
      {
      tmp___4 = last_component(program_name);
      tmp___5 = gettext("Report %s translation bugs to <http://translationproject.org/team/>\n");
      printf((char const   */* __restrict  */)((char const   *)tmp___5), tmp___4);
      }
    }
  }
  {
  tmp___7 = last_component(program_name);
  tmp___8 = gettext("For complete documentation, run: info coreutils \'%s invocation\'\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___8), tmp___7);
  }
  return;
}
}
 __attribute__((__noreturn__)) void usage(int status ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
char const   *quote(char const   *name ) ;
size_t safe_read(int fd , void *buf___0 , size_t count___0 ) ;
strtol_error xstrtoumax(char const   *s , char **ptr , int strtol_base , uintmax_t *val ,
                        char const   *valid_suffixes ) ;
__inline static _Bool es_match(struct E_string  const  *es , size_t i , char c ) 
{ 
  int tmp ;

  {
  if ((int )*(es->s + i) == (int )c) {
    if (! *(es->escaped + i)) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return ((_Bool )tmp);
}
}
static _Bool squeeze_repeats  =    (_Bool)0;
static _Bool delete  =    (_Bool)0;
static _Bool complement  =    (_Bool)0;
static _Bool truncate_set1  =    (_Bool)0;
static _Bool translating  ;
static char io_buf[8192]  ;
static char const   * const  char_class_name[12]  = 
  {      (char const   */* const  */)"alnum",      (char const   */* const  */)"alpha",      (char const   */* const  */)"blank",      (char const   */* const  */)"cntrl", 
        (char const   */* const  */)"digit",      (char const   */* const  */)"graph",      (char const   */* const  */)"lower",      (char const   */* const  */)"print", 
        (char const   */* const  */)"punct",      (char const   */* const  */)"space",      (char const   */* const  */)"upper",      (char const   */* const  */)"xdigit"};
static _Bool in_squeeze_set[256]  ;
static _Bool in_delete_set[256]  ;
static char xlate[256]  ;
static struct option  const  long_options[7]  = {      {"complement", 0, (int *)((void *)0), 'c'}, 
        {"delete", 0, (int *)((void *)0), 'd'}, 
        {"squeeze-repeats", 0, (int *)((void *)0), 's'}, 
        {"truncate-set1", 0, (int *)((void *)0), 't'}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
 __attribute__((__noreturn__)) void usage(int status ) ;
void usage(int status ) 
{ 
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;
  char *__cil_tmp22 ;
  char *__cil_tmp23 ;
  char *__cil_tmp24 ;
  char *__cil_tmp25 ;
  char *__cil_tmp26 ;
  char *__cil_tmp27 ;
  char *__cil_tmp28 ;

  {
  if (status != 0) {
    {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)tmp),
            program_name);
    }
  } else {
    {
    tmp___0 = gettext("Usage: %s [OPTION]... SET1 [SET2]\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name);
    tmp___1 = gettext("Translate, squeeze, and/or delete characters from standard input,\nwriting to standard output.\n\n  -c, -C, --complement    use the complement of SET1\n  -d, --delete            delete characters in SET1, do not translate\n  -s, --squeeze-repeats   replace each input sequence of a repeated character\n                            that is listed in SET1 with a single occurrence\n                            of that character\n  -t, --truncate-set1     first truncate SET1 to length of SET2\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___1), (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("\nSETs are specified as strings of characters.  Most represent themselves.\nInterpreted sequences are:\n\n  \\NNN            character with octal value NNN (1 to 3 octal digits)\n  \\\\              backslash\n  \\a              audible BEL\n  \\b              backspace\n  \\f              form feed\n  \\n              new line\n  \\r              return\n  \\t              horizontal tab\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  \\v              vertical tab\n  CHAR1-CHAR2     all characters from CHAR1 to CHAR2 in ascending order\n  [CHAR*]         in SET2, copies of CHAR until length of SET1\n  [CHAR*REPEAT]   REPEAT copies of CHAR, REPEAT octal if starting with 0\n  [:alnum:]       all letters and digits\n  [:alpha:]       all letters\n  [:blank:]       all horizontal whitespace\n  [:cntrl:]       all control characters\n  [:digit:]       all digits\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___5), (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("  [:graph:]       all printable characters, not including space\n  [:lower:]       all lower case letters\n  [:print:]       all printable characters, including space\n  [:punct:]       all punctuation characters\n  [:space:]       all horizontal or vertical whitespace\n  [:upper:]       all upper case letters\n  [:xdigit:]      all hexadecimal digits\n  [=CHAR=]        all characters which are equivalent to CHAR\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___6), (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("\nTranslation occurs if -d is not given and both SET1 and SET2 appear.\n-t may be used only when translating.  SET2 is extended to length of\nSET1 by repeating its last character as necessary.  Excess characters\nof SET2 are ignored.  Only [:lower:] and [:upper:] are guaranteed to\nexpand in ascending order; used in SET2 while translating, they may\nonly be used in pairs to specify case conversion.  -s uses SET1 if not\ntranslating nor deleting; else squeezing uses SET2 and occurs after\ntranslation or deletion.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___7), (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
    }
  }
  {
  exit(status);
  }
}
}
__inline static _Bool is_equiv_class_member(unsigned char equiv_class , unsigned char c ) 
{ 


  {
  return ((_Bool )((int )equiv_class == (int )c));
}
}
static _Bool is_char_class_member(enum Char_class char_class , unsigned char c ) 
{ 
  int result ;
  unsigned short const   **tmp ;
  unsigned short const   **tmp___0 ;
  unsigned short const   **tmp___1 ;
  unsigned short const   **tmp___2 ;
  unsigned short const   **tmp___3 ;
  unsigned short const   **tmp___4 ;
  unsigned short const   **tmp___5 ;
  unsigned short const   **tmp___6 ;
  unsigned short const   **tmp___7 ;
  unsigned short const   **tmp___8 ;
  unsigned short const   **tmp___9 ;
  unsigned short const   **tmp___10 ;

  {
  if ((unsigned int )char_class == 0U) {
    goto case_0;
  }
  if ((unsigned int )char_class == 1U) {
    goto case_1;
  }
  if ((unsigned int )char_class == 2U) {
    goto case_2;
  }
  if ((unsigned int )char_class == 3U) {
    goto case_3;
  }
  if ((unsigned int )char_class == 4U) {
    goto case_4;
  }
  if ((unsigned int )char_class == 5U) {
    goto case_5;
  }
  if ((unsigned int )char_class == 6U) {
    goto case_6;
  }
  if ((unsigned int )char_class == 7U) {
    goto case_7;
  }
  if ((unsigned int )char_class == 8U) {
    goto case_8;
  }
  if ((unsigned int )char_class == 9U) {
    goto case_9;
  }
  if ((unsigned int )char_class == 10U) {
    goto case_10;
  }
  if ((unsigned int )char_class == 11U) {
    goto case_11;
  }
  goto switch_default;
  case_0: 
  {
  tmp = __ctype_b_loc();
  result = (int )((int const   )*(*tmp + (int )c) & 8);
  }
  goto switch_break;
  case_1: 
  {
  tmp___0 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___0 + (int )c) & 1024);
  }
  goto switch_break;
  case_2: 
  {
  tmp___1 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___1 + (int )c) & 1);
  }
  goto switch_break;
  case_3: 
  {
  tmp___2 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___2 + (int )c) & 2);
  }
  goto switch_break;
  case_4: 
  {
  tmp___3 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___3 + (int )c) & 2048);
  }
  goto switch_break;
  case_5: 
  {
  tmp___4 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___4 + (int )c) & 32768);
  }
  goto switch_break;
  case_6: 
  {
  tmp___5 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___5 + (int )c) & 512);
  }
  goto switch_break;
  case_7: 
  {
  tmp___6 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___6 + (int )c) & 16384);
  }
  goto switch_break;
  case_8: 
  {
  tmp___7 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___7 + (int )c) & 4);
  }
  goto switch_break;
  case_9: 
  {
  tmp___8 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___8 + (int )c) & 8192);
  }
  goto switch_break;
  case_10: 
  {
  tmp___9 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___9 + (int )c) & 256);
  }
  goto switch_break;
  case_11: 
  {
  tmp___10 = __ctype_b_loc();
  result = (int )((int const   )*(*tmp___10 + (int )c) & 4096);
  }
  goto switch_break;
  switch_default: 
  {
  abort();
  }
  goto switch_break;
  switch_break: ;
  return ((_Bool )(! (! result)));
}
}
static void es_free(struct E_string *es ) 
{ 


  {
  {
  free((void *)es->s);
  free((void *)es->escaped);
  }
  return;
}
}
static _Bool unquote(char const   *s , struct E_string *es ) 
{ 
  size_t i ;
  size_t j ;
  size_t len ;
  size_t tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  unsigned char c ;
  int oct_digit ;
  char *tmp___2 ;
  char *tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;

  {
  {
  tmp = strlen(s);
  len = tmp;
  tmp___0 = xmalloc(len);
  es->s = (char *)tmp___0;
  tmp___1 = xcalloc(len, sizeof(*(es->escaped + 0)));
  es->escaped = (_Bool *)tmp___1;
  j = (size_t )0;
  i = (size_t )0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! *(s + i)) {
      goto while_break;
    }
    if ((int const   )*(s + i) == 92) {
      goto case_92;
    }
    goto switch_default___0;
    case_92: 
    *(es->escaped + j) = (_Bool)1;
    if ((int const   )*(s + (i + 1UL)) == 92) {
      goto case_92___0;
    }
    if ((int const   )*(s + (i + 1UL)) == 97) {
      goto case_97;
    }
    if ((int const   )*(s + (i + 1UL)) == 98) {
      goto case_98;
    }
    if ((int const   )*(s + (i + 1UL)) == 102) {
      goto case_102;
    }
    if ((int const   )*(s + (i + 1UL)) == 110) {
      goto case_110;
    }
    if ((int const   )*(s + (i + 1UL)) == 114) {
      goto case_114;
    }
    if ((int const   )*(s + (i + 1UL)) == 116) {
      goto case_116;
    }
    if ((int const   )*(s + (i + 1UL)) == 118) {
      goto case_118;
    }
    if ((int const   )*(s + (i + 1UL)) == 48) {
      goto case_48;
    }
    if ((int const   )*(s + (i + 1UL)) == 49) {
      goto case_48;
    }
    if ((int const   )*(s + (i + 1UL)) == 50) {
      goto case_48;
    }
    if ((int const   )*(s + (i + 1UL)) == 51) {
      goto case_48;
    }
    if ((int const   )*(s + (i + 1UL)) == 52) {
      goto case_48;
    }
    if ((int const   )*(s + (i + 1UL)) == 53) {
      goto case_48;
    }
    if ((int const   )*(s + (i + 1UL)) == 54) {
      goto case_48;
    }
    if ((int const   )*(s + (i + 1UL)) == 55) {
      goto case_48;
    }
    if ((int const   )*(s + (i + 1UL)) == 0) {
      goto case_0;
    }
    goto switch_default;
    case_92___0: 
    c = (unsigned char )'\\';
    goto switch_break___0;
    case_97: 
    c = (unsigned char )'\a';
    goto switch_break___0;
    case_98: 
    c = (unsigned char )'\b';
    goto switch_break___0;
    case_102: 
    c = (unsigned char )'\f';
    goto switch_break___0;
    case_110: 
    c = (unsigned char )'\n';
    goto switch_break___0;
    case_114: 
    c = (unsigned char )'\r';
    goto switch_break___0;
    case_116: 
    c = (unsigned char )'\t';
    goto switch_break___0;
    case_118: 
    c = (unsigned char )'\v';
    goto switch_break___0;
    case_48: 
    c = (unsigned char )((int const   )*(s + (i + 1UL)) - 48);
    oct_digit = (int )((int const   )*(s + (i + 2UL)) - 48);
    if (0 <= oct_digit) {
      if (oct_digit <= 7) {
        c = (unsigned char )(8 * (int )c + oct_digit);
        i ++;
        oct_digit = (int )((int const   )*(s + (i + 2UL)) - 48);
        if (0 <= oct_digit) {
          if (oct_digit <= 7) {
            if (8 * (int )c + oct_digit < 256) {
              c = (unsigned char )(8 * (int )c + oct_digit);
              i ++;
            } else {
              {
              tmp___2 = gettext("warning: the ambiguous octal escape \\%c%c%c is being\n\tinterpreted as the 2-byte sequence \\0%c%c, %c");
              error(0, 0, (char const   *)tmp___2, (int const   )*(s + i), (int const   )*(s + (i + 1UL)),
                    (int const   )*(s + (i + 2UL)), (int const   )*(s + i), (int const   )*(s + (i + 1UL)),
                    (int const   )*(s + (i + 2UL)));
              }
            }
          }
        }
      }
    }
    goto switch_break___0;
    case_0: 
    {
    tmp___3 = gettext("warning: an unescaped backslash at end of string is not portable");
    error(0, 0, (char const   *)tmp___3);
    *(es->escaped + j) = (_Bool)0;
    i --;
    c = (unsigned char )'\\';
    }
    goto switch_break___0;
    switch_default: 
    c = (unsigned char )*(s + (i + 1UL));
    goto switch_break___0;
    switch_break___0: 
    i ++;
    tmp___4 = j;
    j ++;
    *(es->s + tmp___4) = (char )c;
    goto switch_break;
    switch_default___0: 
    tmp___5 = j;
    j ++;
    *(es->s + tmp___5) = (char )*(s + i);
    goto switch_break;
    switch_break: 
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  es->len = j;
  return ((_Bool)1);
}
}
static enum Char_class look_up_char_class(char const   *class_str , size_t len ) 
{ 
  enum Char_class i ;
  int tmp ;
  size_t tmp___0 ;

  {
  i = (enum Char_class )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((unsigned long )i < sizeof(char_class_name) / sizeof(char_class_name[0]))) {
      goto while_break;
    }
    {
    tmp = strncmp(class_str, (char const   *)char_class_name[i], len);
    }
    if (tmp == 0) {
      {
      tmp___0 = strlen((char const   *)char_class_name[i]);
      }
      if (tmp___0 == len) {
        return (i);
      }
    }
    i = (enum Char_class )((unsigned int )i + 1U);
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((enum Char_class )9999);
}
}
static char *make_printable_char(unsigned char c ) 
{ 
  char *buf___0 ;
  void *tmp ;
  unsigned short const   **tmp___0 ;
  char *__cil_tmp6 ;

  {
  {
  tmp = xmalloc((size_t )5);
  buf___0 = (char *)tmp;
  tmp___0 = __ctype_b_loc();
  }
  if ((int const   )*(*tmp___0 + (int )c) & 16384) {
    *(buf___0 + 0) = (char )c;
    *(buf___0 + 1) = (char )'\000';
  } else {
    {
    sprintf((char */* __restrict  */)buf___0, (char const   */* __restrict  */)"\\%03o",
            (int )c);
    }
  }
  return (buf___0);
}
}
static char *make_printable_str(char const   *s , size_t len ) 
{ 
  char *printable_buf ;
  void *tmp ;
  char *p ;
  size_t i ;
  char buf___0[5] ;
  char const   *tmp___0 ;
  unsigned char c ;
  unsigned short const   **tmp___1 ;
  void *__cil_tmp21 ;
  char *__cil_tmp22 ;
  char *__cil_tmp23 ;
  char *__cil_tmp24 ;
  char *__cil_tmp25 ;
  char *__cil_tmp26 ;
  char *__cil_tmp27 ;
  char *__cil_tmp28 ;
  char *__cil_tmp29 ;
  char *__cil_tmp30 ;

  {
  {
  tmp = xnmalloc(len + 1UL, (size_t )4);
  printable_buf = (char *)tmp;
  p = printable_buf;
  i = (size_t )0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < len)) {
      goto while_break;
    }
    tmp___0 = (char const   *)((void *)0);
    c = (unsigned char )*(s + i);
    if ((int )c == 92) {
      goto case_92;
    }
    if ((int )c == 7) {
      goto case_7;
    }
    if ((int )c == 8) {
      goto case_8;
    }
    if ((int )c == 12) {
      goto case_12;
    }
    if ((int )c == 10) {
      goto case_10;
    }
    if ((int )c == 13) {
      goto case_13;
    }
    if ((int )c == 9) {
      goto case_9;
    }
    if ((int )c == 11) {
      goto case_11;
    }
    goto switch_default;
    case_92: 
    tmp___0 = "\\";
    goto switch_break;
    case_7: 
    tmp___0 = "\\a";
    goto switch_break;
    case_8: 
    tmp___0 = "\\b";
    goto switch_break;
    case_12: 
    tmp___0 = "\\f";
    goto switch_break;
    case_10: 
    tmp___0 = "\\n";
    goto switch_break;
    case_13: 
    tmp___0 = "\\r";
    goto switch_break;
    case_9: 
    tmp___0 = "\\t";
    goto switch_break;
    case_11: 
    tmp___0 = "\\v";
    goto switch_break;
    switch_default: 
    {
    tmp___1 = __ctype_b_loc();
    }
    if ((int const   )*(*tmp___1 + (int )c) & 16384) {
      buf___0[0] = (char )c;
      buf___0[1] = (char )'\000';
    } else {
      {
      sprintf((char */* __restrict  */)(buf___0), (char const   */* __restrict  */)"\\%03o",
              (int )c);
      }
    }
    tmp___0 = (char const   *)(buf___0);
    goto switch_break;
    switch_break: 
    {
    p = stpcpy((char */* __restrict  */)p, (char const   */* __restrict  */)tmp___0);
    i ++;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (printable_buf);
}
}
static void append_normal_char(struct Spec_list *list , unsigned char c ) 
{ 
  struct List_element *new ;
  void *tmp ;

  {
  {
  tmp = xmalloc(sizeof(*new));
  new = (struct List_element *)tmp;
  new->next = (struct List_element *)((void *)0);
  new->type = (enum Range_element_type )0;
  new->u.normal_char = c;
  }
  if (! list->tail) {
    {
    __assert_fail("list->tail", "/home/wslee/project/coreutils-8.1/src/tr.c", 652U,
                  "append_normal_char");
    }
  }
  (list->tail)->next = new;
  list->tail = new;
  return;
}
}
static _Bool append_range(struct Spec_list *list , unsigned char first , unsigned char last ) 
{ 
  struct List_element *new ;
  char *tmp1 ;
  char *tmp ;
  char *tmp2 ;
  char *tmp___0 ;
  char *tmp___1 ;
  void *tmp___2 ;
  char *__cil_tmp12 ;

  {
  if ((int )last < (int )first) {
    {
    tmp = make_printable_char(first);
    tmp1 = tmp;
    tmp___0 = make_printable_char(last);
    tmp2 = tmp___0;
    tmp___1 = gettext("range-endpoints of `%s-%s\' are in reverse collating sequence order");
    error(0, 0, (char const   *)tmp___1, tmp1, tmp2);
    free((void *)tmp1);
    free((void *)tmp2);
    }
    return ((_Bool)0);
  }
  {
  tmp___2 = xmalloc(sizeof(*new));
  new = (struct List_element *)tmp___2;
  new->next = (struct List_element *)((void *)0);
  new->type = (enum Range_element_type )1;
  new->u.range.first_char = first;
  new->u.range.last_char = last;
  }
  if (! list->tail) {
    {
    __assert_fail("list->tail", "/home/wslee/project/coreutils-8.1/src/tr.c", 684U,
                  "append_range");
    }
  }
  (list->tail)->next = new;
  list->tail = new;
  return ((_Bool)1);
}
}
static _Bool append_char_class(struct Spec_list *list , char const   *char_class_str ,
                               size_t len ) 
{ 
  enum Char_class char_class ;
  struct List_element *new ;
  void *tmp ;

  {
  {
  char_class = look_up_char_class(char_class_str, len);
  }
  if ((unsigned int )char_class == 9999U) {
    return ((_Bool)0);
  }
  {
  tmp = xmalloc(sizeof(*new));
  new = (struct List_element *)tmp;
  new->next = (struct List_element *)((void *)0);
  new->type = (enum Range_element_type )2;
  new->u.char_class = char_class;
  }
  if (! list->tail) {
    {
    __assert_fail("list->tail", "/home/wslee/project/coreutils-8.1/src/tr.c", 709U,
                  "append_char_class");
    }
  }
  (list->tail)->next = new;
  list->tail = new;
  return ((_Bool)1);
}
}
static void append_repeated_char(struct Spec_list *list , unsigned char the_char ,
                                 count repeat_count ) 
{ 
  struct List_element *new ;
  void *tmp ;

  {
  {
  tmp = xmalloc(sizeof(*new));
  new = (struct List_element *)tmp;
  new->next = (struct List_element *)((void *)0);
  new->type = (enum Range_element_type )4;
  new->u.repeated_char.the_repeated_char = the_char;
  new->u.repeated_char.repeat_count = repeat_count;
  }
  if (! list->tail) {
    {
    __assert_fail("list->tail", "/home/wslee/project/coreutils-8.1/src/tr.c", 731U,
                  "append_repeated_char");
    }
  }
  (list->tail)->next = new;
  list->tail = new;
  return;
}
}
static _Bool append_equiv_class(struct Spec_list *list , char const   *equiv_class_str ,
                                size_t len ) 
{ 
  struct List_element *new ;
  void *tmp ;

  {
  if (len != 1UL) {
    return ((_Bool)0);
  }
  {
  tmp = xmalloc(sizeof(*new));
  new = (struct List_element *)tmp;
  new->next = (struct List_element *)((void *)0);
  new->type = (enum Range_element_type )3;
  new->u.equiv_code = (unsigned char )*equiv_class_str;
  }
  if (! list->tail) {
    {
    __assert_fail("list->tail", "/home/wslee/project/coreutils-8.1/src/tr.c", 754U,
                  "append_equiv_class");
    }
  }
  (list->tail)->next = new;
  list->tail = new;
  return ((_Bool)1);
}
}
static _Bool find_closing_delim(struct E_string  const  *es , size_t start_idx , char pre_bracket_char ,
                                size_t *result_idx ) 
{ 
  size_t i ;

  {
  i = start_idx;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < (size_t )(es->len - 1UL))) {
      goto while_break;
    }
    if ((int )*(es->s + i) == (int )pre_bracket_char) {
      if ((int )*(es->s + (i + 1UL)) == 93) {
        if (! *(es->escaped + i)) {
          if (! *(es->escaped + (i + 1UL))) {
            *result_idx = i;
            return ((_Bool)1);
          }
        }
      }
    }
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)0);
}
}
static int find_bracketed_repeat(struct E_string  const  *es , size_t start_idx ,
                                 unsigned char *char_to_repeat , count *repeat_count ,
                                 size_t *closing_bracket_idx ) 
{ 
  size_t i ;
  _Bool tmp ;
  size_t digit_str_len ;
  char const   *digit_str ;
  char *d_end ;
  char *tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  strtol_error tmp___5 ;
  char *__cil_tmp18 ;

  {
  if (! (start_idx + 1UL < (size_t )es->len)) {
    {
    __assert_fail("start_idx + 1 < es->len", "/home/wslee/project/coreutils-8.1/src/tr.c",
                  799U, "find_bracketed_repeat");
    }
  }
  {
  tmp = es_match(es, start_idx + 1UL, (char )'*');
  }
  if (! tmp) {
    return (-1);
  }
  i = start_idx + 2UL;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (i < (size_t )es->len) {
      if (! (! *(es->escaped + i))) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    if ((int )*(es->s + i) == 93) {
      digit_str_len = (i - start_idx) - 2UL;
      *char_to_repeat = (unsigned char )*(es->s + start_idx);
      if (digit_str_len == 0UL) {
        *repeat_count = (count )0;
      } else {
        digit_str = (char const   *)(es->s + (start_idx + 2UL));
        if ((int const   )*digit_str == 48) {
          tmp___4 = 8;
        } else {
          tmp___4 = 10;
        }
        {
        tmp___5 = xstrtoumax(digit_str, & d_end, tmp___4, repeat_count, (char const   *)((void *)0));
        }
        if ((unsigned int )tmp___5 != 0U) {
          goto _L;
        } else
        if (0xfffffffffffffffeUL < *repeat_count) {
          goto _L;
        } else
        if ((unsigned long )(digit_str + digit_str_len) != (unsigned long )d_end) {
          _L: 
          {
          tmp___1 = make_printable_str(digit_str, digit_str_len);
          tmp___0 = tmp___1;
          tmp___2 = quote((char const   *)tmp___0);
          tmp___3 = gettext("invalid repeat count %s in [c*n] construct");
          error(0, 0, (char const   *)tmp___3, tmp___2);
          free((void *)tmp___0);
          }
          return (-2);
        }
      }
      *closing_bracket_idx = i;
      return (0);
    }
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (-1);
}
}
static _Bool star_digits_closebracket(struct E_string  const  *es , size_t idx ) 
{ 
  size_t i ;
  _Bool tmp ;
  _Bool tmp___0 ;
  unsigned char tmp___1 ;

  {
  {
  tmp = es_match(es, idx, (char )'*');
  }
  if (! tmp) {
    return ((_Bool)0);
  }
  i = idx + 1UL;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < (size_t )es->len)) {
      goto while_break;
    }
    {
    tmp___1 = to_uchar(*(es->s + i));
    }
    if ((unsigned int )tmp___1 - 48U <= 9U) {
      if (*(es->escaped + i)) {
        {
        tmp___0 = es_match(es, i, (char )']');
        }
        return (tmp___0);
      }
    } else {
      {
      tmp___0 = es_match(es, i, (char )']');
      }
      return (tmp___0);
    }
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)0);
}
}
static _Bool build_spec_list(struct E_string  const  *es , struct Spec_list *result ) 
{ 
  char const   *p ;
  size_t i ;
  _Bool matched_multi_char_construct ;
  size_t closing_bracket_idx ;
  unsigned char char_to_repeat ;
  count repeat_count ;
  int err ;
  size_t closing_delim_idx ;
  size_t opnd_str_len ;
  char const   *opnd_str ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  _Bool tmp___5 ;
  _Bool tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  _Bool tmp___10 ;
  _Bool tmp___11 ;
  _Bool tmp___12 ;
  _Bool tmp___13 ;
  _Bool tmp___14 ;
  _Bool tmp___15 ;
  _Bool tmp___16 ;
  _Bool tmp___17 ;
  char *__cil_tmp36 ;
  char *__cil_tmp37 ;
  char *__cil_tmp38 ;
  char *__cil_tmp39 ;

  {
  p = (char const   *)es->s;
  i = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i + 2UL < (size_t )es->len)) {
      goto while_break;
    }
    {
    tmp___15 = es_match(es, i, (char )'[');
    }
    if (tmp___15) {
      {
      matched_multi_char_construct = (_Bool)1;
      tmp___13 = es_match(es, i + 1UL, (char )':');
      }
      if (tmp___13) {
        goto _L;
      } else {
        {
        tmp___14 = es_match(es, i + 1UL, (char )'=');
        }
        if (tmp___14) {
          _L: 
          {
          tmp___12 = find_closing_delim(es, i + 2UL, (char )*(p + (i + 1UL)), & closing_delim_idx);
          }
          if (tmp___12) {
            opnd_str_len = ((closing_delim_idx - 1UL) - (i + 2UL)) + 1UL;
            opnd_str = (p + i) + 2;
            if (opnd_str_len == 0UL) {
              if ((int const   )*(p + (i + 1UL)) == 58) {
                {
                tmp = gettext("missing character class name `[::]\'");
                error(0, 0, (char const   *)tmp);
                }
              } else {
                {
                tmp___0 = gettext("missing equivalence class character `[==]\'");
                error(0, 0, (char const   *)tmp___0);
                }
              }
              return ((_Bool)0);
            }
            if ((int const   )*(p + (i + 1UL)) == 58) {
              {
              tmp___6 = append_char_class(result, opnd_str, opnd_str_len);
              }
              if (! tmp___6) {
                {
                tmp___5 = star_digits_closebracket(es, i + 2UL);
                }
                if (tmp___5) {
                  goto try_bracketed_repeat;
                } else {
                  {
                  tmp___2 = make_printable_str(opnd_str, opnd_str_len);
                  tmp___1 = tmp___2;
                  tmp___3 = quote((char const   *)tmp___1);
                  tmp___4 = gettext("invalid character class %s");
                  error(0, 0, (char const   *)tmp___4, tmp___3);
                  free((void *)tmp___1);
                  }
                  return ((_Bool)0);
                }
              }
            } else {
              {
              tmp___11 = append_equiv_class(result, opnd_str, opnd_str_len);
              }
              if (! tmp___11) {
                {
                tmp___10 = star_digits_closebracket(es, i + 2UL);
                }
                if (tmp___10) {
                  goto try_bracketed_repeat;
                } else {
                  {
                  tmp___8 = make_printable_str(opnd_str, opnd_str_len);
                  tmp___7 = tmp___8;
                  tmp___9 = gettext("%s: equivalence class operand must be a single character");
                  error(0, 0, (char const   *)tmp___9, tmp___7);
                  free((void *)tmp___7);
                  }
                  return ((_Bool)0);
                }
              }
            }
            i = closing_delim_idx + 2UL;
            goto __Cont;
          }
        }
      }
      try_bracketed_repeat: 
      {
      err = find_bracketed_repeat(es, i + 1UL, & char_to_repeat, & repeat_count, & closing_bracket_idx);
      }
      if (err == 0) {
        {
        append_repeated_char(result, char_to_repeat, repeat_count);
        i = closing_bracket_idx + 1UL;
        }
      } else
      if (err == -1) {
        matched_multi_char_construct = (_Bool)0;
      } else {
        return ((_Bool)0);
      }
      if (matched_multi_char_construct) {
        goto __Cont;
      }
    }
    {
    tmp___17 = es_match(es, i + 1UL, (char )'-');
    }
    if (tmp___17) {
      {
      tmp___16 = append_range(result, (unsigned char )*(p + i), (unsigned char )*(p + (i + 2UL)));
      }
      if (! tmp___16) {
        return ((_Bool)0);
      }
      i += 3UL;
    } else {
      {
      append_normal_char(result, (unsigned char )*(p + i));
      i ++;
      }
    }
    __Cont: ;
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! (i < (size_t )es->len)) {
      goto while_break___0;
    }
    {
    append_normal_char(result, (unsigned char )*(p + i));
    i ++;
    }
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: ;
  return ((_Bool)1);
}
}
static void skip_construct(struct Spec_list *s ) 
{ 


  {
  s->tail = (s->tail)->next;
  s->state = 0xffffffffffffffffUL;
  return;
}
}
static int get_next(struct Spec_list *s , enum Upper_Lower_class *class ) 
{ 
  struct List_element *p ;
  int return_val ;
  int i ;
  _Bool tmp ;
  _Bool tmp___0 ;
  _Bool tmp___1 ;

  {
  if (class) {
    *class = (enum Upper_Lower_class )2;
  }
  if (s->state == 0xfffffffffffffffeUL) {
    s->tail = (s->head)->next;
    s->state = 0xffffffffffffffffUL;
  }
  p = s->tail;
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    return (-1);
  }
  if ((unsigned int )p->type == 0U) {
    goto case_0;
  }
  if ((unsigned int )p->type == 1U) {
    goto case_1;
  }
  if ((unsigned int )p->type == 2U) {
    goto case_2;
  }
  if ((unsigned int )p->type == 3U) {
    goto case_3;
  }
  if ((unsigned int )p->type == 4U) {
    goto case_4;
  }
  goto switch_default___0;
  case_0: 
  return_val = (int )p->u.normal_char;
  s->state = 0xffffffffffffffffUL;
  s->tail = p->next;
  goto switch_break;
  case_1: 
  if (s->state == 0xffffffffffffffffUL) {
    s->state = (count )p->u.range.first_char;
  } else {
    (s->state) ++;
  }
  return_val = (int )s->state;
  if (s->state == (count )p->u.range.last_char) {
    s->tail = p->next;
    s->state = 0xffffffffffffffffUL;
  }
  goto switch_break;
  case_2: 
  if (class) {
    if ((unsigned int )p->u.char_class == 6U) {
      goto case_6;
    }
    if ((unsigned int )p->u.char_class == 10U) {
      goto case_10;
    }
    goto switch_default;
    case_6: 
    *class = (enum Upper_Lower_class )0;
    goto switch_break___0;
    case_10: 
    *class = (enum Upper_Lower_class )1;
    goto switch_break___0;
    switch_default: 
    goto switch_break___0;
    switch_break___0: ;
  }
  if (s->state == 0xffffffffffffffffUL) {
    i = 0;
    {
    while (1) {
      while_continue: /* CIL Label */ ;

      if (! (i < 256)) {
        goto while_break;
      }
      {
      tmp = is_char_class_member(p->u.char_class, (unsigned char )i);
      }
      if (tmp) {
        goto while_break;
      }
      i ++;
    }
    while_break___1: /* CIL Label */ ;
    }
    while_break: ;
    if (! (i < 256)) {
      {
      __assert_fail("i < N_CHARS", "/home/wslee/project/coreutils-8.1/src/tr.c", 1098U,
                    "get_next");
      }
    }
    s->state = (count )i;
  }
  {
  tmp___0 = is_char_class_member(p->u.char_class, (unsigned char )s->state);
  }
  if (! tmp___0) {
    {
    __assert_fail("is_char_class_member (p->u.char_class, s->state)", "/home/wslee/project/coreutils-8.1/src/tr.c",
                  1101U, "get_next");
    }
  }
  return_val = (int )s->state;
  i = (int )(s->state + 1UL);
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! (i < 256)) {
      goto while_break___0;
    }
    {
    tmp___1 = is_char_class_member(p->u.char_class, (unsigned char )i);
    }
    if (tmp___1) {
      goto while_break___0;
    }
    i ++;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: ;
  if (i < 256) {
    s->state = (count )i;
  } else {
    s->tail = p->next;
    s->state = 0xffffffffffffffffUL;
  }
  goto switch_break;
  case_3: 
  return_val = (int )p->u.equiv_code;
  s->state = 0xffffffffffffffffUL;
  s->tail = p->next;
  goto switch_break;
  case_4: 
  if (p->u.repeated_char.repeat_count == 0UL) {
    {
    s->tail = p->next;
    s->state = 0xffffffffffffffffUL;
    return_val = get_next(s, class);
    }
  } else {
    if (s->state == 0xffffffffffffffffUL) {
      s->state = (count )0;
    }
    (s->state) ++;
    return_val = (int )p->u.repeated_char.the_repeated_char;
    if (s->state == p->u.repeated_char.repeat_count) {
      s->tail = p->next;
      s->state = 0xffffffffffffffffUL;
    }
  }
  goto switch_break;
  switch_default___0: 
  {
  abort();
  }
  goto switch_break;
  switch_break: ;
  return (return_val);
}
}
static int card_of_complement(struct Spec_list *s ) 
{ 
  int c ;
  int cardinality ;
  _Bool in_set[256] ;
  unsigned int tmp ;
  void *__cil_tmp7 ;

  {
  cardinality = 256;
  in_set[0] = (_Bool)0;
  tmp = 1U;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (! (tmp >= 256U))) {
      goto while_break;
    }
    in_set[tmp] = (_Bool)0;
    tmp ++;
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: 
  s->state = 0xfffffffffffffffeUL;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;
    {
    c = get_next(s, (enum Upper_Lower_class *)((void *)0));
    }
    if (! (c != -1)) {
      goto while_break___0;
    }
    cardinality -= ! in_set[c];
    in_set[c] = (_Bool)1;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: ;
  return (cardinality);
}
}
static void get_spec_stats(struct Spec_list *s ) 
{ 
  struct List_element *p ;
  count length ;
  int i ;
  count len ;
  count new_length ;
  _Bool tmp ;
  _Bool tmp___0 ;
  char *tmp___1 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;

  {
  length = (count )0;
  s->n_indefinite_repeats = (size_t )0;
  s->has_equiv_class = (_Bool)0;
  s->has_restricted_char_class = (_Bool)0;
  s->has_char_class = (_Bool)0;
  p = (s->head)->next;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! p) {
      goto while_break;
    }
    len = (count )0;
    if ((unsigned int )p->type == 0U) {
      goto case_0;
    }
    if ((unsigned int )p->type == 1U) {
      goto case_1;
    }
    if ((unsigned int )p->type == 2U) {
      goto case_2;
    }
    if ((unsigned int )p->type == 3U) {
      goto case_3;
    }
    if ((unsigned int )p->type == 4U) {
      goto case_4;
    }
    goto switch_default___0;
    case_0: 
    len = (count )1;
    goto switch_break;
    case_1: 
    if (! ((int )p->u.range.last_char >= (int )p->u.range.first_char)) {
      {
      __assert_fail("p->u.range.last_char >= p->u.range.first_char", "/home/wslee/project/coreutils-8.1/src/tr.c",
                    1215U, "get_spec_stats");
      }
    }
    len = (count )(((int )p->u.range.last_char - (int )p->u.range.first_char) + 1);
    goto switch_break;
    case_2: 
    s->has_char_class = (_Bool)1;
    i = 0;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! (i < 256)) {
        goto while_break___0;
      }
      {
      tmp = is_char_class_member(p->u.char_class, (unsigned char )i);
      }
      if (tmp) {
        len ++;
      }
      i ++;
    }
    while_break___3: /* CIL Label */ ;
    }
    while_break___0: ;
    if ((unsigned int )p->u.char_class == 10U) {
      goto case_10;
    }
    if ((unsigned int )p->u.char_class == 6U) {
      goto case_10;
    }
    goto switch_default;
    case_10: 
    goto switch_break___0;
    switch_default: 
    s->has_restricted_char_class = (_Bool)1;
    goto switch_break___0;
    switch_break___0: ;
    goto switch_break;
    case_3: 
    i = 0;
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;

      if (! (i < 256)) {
        goto while_break___1;
      }
      {
      tmp___0 = is_equiv_class_member(p->u.equiv_code, (unsigned char )i);
      }
      if (tmp___0) {
        len ++;
      }
      i ++;
    }
    while_break___4: /* CIL Label */ ;
    }
    while_break___1: 
    s->has_equiv_class = (_Bool)1;
    goto switch_break;
    case_4: 
    if (p->u.repeated_char.repeat_count > 0UL) {
      len = p->u.repeated_char.repeat_count;
    } else {
      s->indefinite_repeat_element = p;
      (s->n_indefinite_repeats) ++;
    }
    goto switch_break;
    switch_default___0: 
    {
    abort();
    }
    goto switch_break;
    switch_break: 
    new_length = length + len;
    if (length <= new_length) {
      if (! (new_length <= 0xfffffffffffffffeUL)) {
        {
        tmp___1 = gettext("too many characters in set");
        error(1, 0, (char const   *)tmp___1);
        }
      }
    } else {
      {
      tmp___1 = gettext("too many characters in set");
      error(1, 0, (char const   *)tmp___1);
      }
    }
    length = new_length;
    p = p->next;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: 
  s->length = length;
  return;
}
}
static void get_s1_spec_stats(struct Spec_list *s1 ) 
{ 
  int tmp ;

  {
  {
  get_spec_stats(s1);
  }
  if (complement) {
    {
    tmp = card_of_complement(s1);
    s1->length = (count )tmp;
    }
  }
  return;
}
}
static void get_s2_spec_stats(struct Spec_list *s2 , count len_s1 ) 
{ 


  {
  {
  get_spec_stats(s2);
  }
  if (len_s1 >= s2->length) {
    if (s2->n_indefinite_repeats == 1UL) {
      (s2->indefinite_repeat_element)->u.repeated_char.repeat_count = len_s1 - s2->length;
      s2->length = len_s1;
    }
  }
  return;
}
}
static void spec_init(struct Spec_list *spec_list ) 
{ 
  struct List_element *new ;
  void *tmp ;
  struct List_element *tmp___0 ;

  {
  {
  tmp = xmalloc(sizeof(*new));
  new = (struct List_element *)tmp;
  tmp___0 = new;
  spec_list->tail = tmp___0;
  spec_list->head = tmp___0;
  (spec_list->head)->next = (struct List_element *)((void *)0);
  }
  return;
}
}
static _Bool parse_str(char const   *s , struct Spec_list *spec_list ) 
{ 
  struct E_string es ;
  _Bool ok ;
  _Bool tmp ;
  _Bool tmp___0 ;
  int tmp___1 ;

  {
  {
  tmp = unquote(s, & es);
  }
  if (tmp) {
    {
    tmp___0 = build_spec_list((struct E_string  const  *)(& es), spec_list);
    }
    if (tmp___0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  {
  ok = (_Bool )tmp___1;
  es_free(& es);
  }
  return (ok);
}
}
static void string2_extend(struct Spec_list  const  *s1 , struct Spec_list *s2 ) 
{ 
  struct List_element *p ;
  unsigned char char_to_repeat ;
  int i ;
  _Bool tmp ;

  {
  if (! translating) {
    {
    __assert_fail("translating", "/home/wslee/project/coreutils-8.1/src/tr.c", 1335U,
                  "string2_extend");
    }
  }
  if (! (s1->length > (count const   )s2->length)) {
    {
    __assert_fail("s1->length > s2->length", "/home/wslee/project/coreutils-8.1/src/tr.c",
                  1336U, "string2_extend");
    }
  }
  if (! (s2->length > 0UL)) {
    {
    __assert_fail("s2->length > 0", "/home/wslee/project/coreutils-8.1/src/tr.c",
                  1337U, "string2_extend");
    }
  }
  p = s2->tail;
  if ((unsigned int )p->type == 0U) {
    goto case_0;
  }
  if ((unsigned int )p->type == 1U) {
    goto case_1;
  }
  if ((unsigned int )p->type == 2U) {
    goto case_2;
  }
  if ((unsigned int )p->type == 4U) {
    goto case_4;
  }
  if ((unsigned int )p->type == 3U) {
    goto case_3;
  }
  goto switch_default;
  case_0: 
  char_to_repeat = p->u.normal_char;
  goto switch_break;
  case_1: 
  char_to_repeat = p->u.range.last_char;
  goto switch_break;
  case_2: 
  i = 255;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i >= 0)) {
      goto while_break;
    }
    {
    tmp = is_char_class_member(p->u.char_class, (unsigned char )i);
    }
    if (tmp) {
      goto while_break;
    }
    i --;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (! (i >= 0)) {
    {
    __assert_fail("i >= 0", "/home/wslee/project/coreutils-8.1/src/tr.c", 1352U, "string2_extend");
    }
  }
  char_to_repeat = (unsigned char )i;
  goto switch_break;
  case_4: 
  char_to_repeat = p->u.repeated_char.the_repeated_char;
  goto switch_break;
  case_3: 
  {
  abort();
  }
  goto switch_break;
  switch_default: 
  {
  abort();
  }
  goto switch_break;
  switch_break: 
  {
  append_repeated_char(s2, char_to_repeat, (count )(s1->length - (count const   )s2->length));
  s2->length = (count )s1->length;
  }
  return;
}
}
static _Bool homogeneous_spec_list(struct Spec_list *s ) 
{ 
  int b ;
  int c ;

  {
  {
  s->state = 0xfffffffffffffffeUL;
  b = get_next(s, (enum Upper_Lower_class *)((void *)0));
  }
  if (b == -1) {
    return ((_Bool)0);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    c = get_next(s, (enum Upper_Lower_class *)((void *)0));
    }
    if (! (c != -1)) {
      goto while_break;
    }
    if (c != b) {
      return ((_Bool)0);
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)1);
}
}
static void validate(struct Spec_list *s1 , struct Spec_list *s2 ) 
{ 
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  _Bool tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;
  char *__cil_tmp22 ;
  char *__cil_tmp23 ;
  char *__cil_tmp24 ;
  char *__cil_tmp25 ;
  char *__cil_tmp26 ;

  {
  {
  get_s1_spec_stats(s1);
  }
  if (s1->n_indefinite_repeats > 0UL) {
    {
    tmp = gettext("the [c*] repeat construct may not appear in string1");
    error(1, 0, (char const   *)tmp);
    }
  }
  if (s2) {
    {
    get_s2_spec_stats(s2, s1->length);
    }
    if (s2->n_indefinite_repeats > 1UL) {
      {
      tmp___0 = gettext("only one [c*] repeat construct may appear in string2");
      error(1, 0, (char const   *)tmp___0);
      }
    }
    if (translating) {
      if (s2->has_equiv_class) {
        {
        tmp___1 = gettext("[=c=] expressions may not appear in string2 when translating");
        error(1, 0, (char const   *)tmp___1);
        }
      }
      if (s1->length > s2->length) {
        if (! truncate_set1) {
          if (s2->length == 0UL) {
            {
            tmp___2 = gettext("when not truncating set1, string2 must be non-empty");
            error(1, 0, (char const   *)tmp___2);
            }
          }
          {
          string2_extend((struct Spec_list  const  *)s1, s2);
          }
        }
      }
      if (complement) {
        if (s1->has_char_class) {
          if (s2->length == s1->length) {
            {
            tmp___4 = homogeneous_spec_list(s2);
            }
            if (! tmp___4) {
              {
              tmp___3 = gettext("when translating with complemented character classes,\nstring2 must map all characters in the domain to one");
              error(1, 0, (char const   *)tmp___3);
              }
            }
          } else {
            {
            tmp___3 = gettext("when translating with complemented character classes,\nstring2 must map all characters in the domain to one");
            error(1, 0, (char const   *)tmp___3);
            }
          }
        }
      }
      if (s2->has_restricted_char_class) {
        {
        tmp___5 = gettext("when translating, the only character classes that may appear in\nstring2 are `upper\' and `lower\'");
        error(1, 0, (char const   *)tmp___5);
        }
      }
    } else
    if (s2->n_indefinite_repeats > 0UL) {
      {
      tmp___6 = gettext("the [c*] construct may appear in string2 only when translating");
      error(1, 0, (char const   *)tmp___6);
      }
    }
  }
  return;
}
}
static void squeeze_filter(char *buf___0 , size_t size , size_t (*reader)(char * ,
                                                                          size_t  ) ) 
{ 
  int char_to_squeeze ;
  size_t i ;
  size_t nr ;
  size_t begin ;
  size_t out_len ;
  unsigned char tmp ;
  unsigned char tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  size_t tmp___3 ;
  char *__cil_tmp15 ;

  {
  char_to_squeeze = 128;
  i = (size_t )0;
  nr = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (i >= nr) {
      {
      nr = (*reader)(buf___0, size);
      }
      if (nr == 0UL) {
        goto while_break;
      }
      i = (size_t )0;
    }
    begin = i;
    if (char_to_squeeze == 128) {
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;

        if (i < nr) {
          {
          tmp = to_uchar(*(buf___0 + i));
          }
          if (in_squeeze_set[tmp]) {
            goto while_break___0;
          }
        } else {
          goto while_break___0;
        }
        goto __Cont;
        __Cont: 
        i += 2UL;
      }
      while_break___3: /* CIL Label */ ;
      }
      while_break___0: ;
      if (i == nr) {
        {
        tmp___0 = to_uchar(*(buf___0 + (i - 1UL)));
        }
        if (in_squeeze_set[tmp___0]) {
          i --;
        }
      }
      if (i >= nr) {
        out_len = nr - begin;
      } else {
        char_to_squeeze = (int )*(buf___0 + i);
        out_len = (i - begin) + 1UL;
        if (i > 0UL) {
          if ((int )*(buf___0 + (i - 1UL)) == char_to_squeeze) {
            out_len --;
          }
        }
        i ++;
      }
      if (out_len > 0UL) {
        {
        tmp___3 = fwrite_unlocked((void const   */* __restrict  */)((void const   *)(buf___0 + begin)),
                                  (size_t )1, out_len, (FILE */* __restrict  */)stdout);
        }
        if (tmp___3 != out_len) {
          {
          tmp___1 = gettext("write error");
          tmp___2 = __errno_location();
          error(1, *tmp___2, (char const   *)tmp___1);
          }
        }
      }
    }
    if (char_to_squeeze != 128) {
      {
      while (1) {
        while_continue___1: /* CIL Label */ ;

        if (i < nr) {
          if (! ((int )*(buf___0 + i) == char_to_squeeze)) {
            goto while_break___1;
          }
        } else {
          goto while_break___1;
        }
        goto __Cont___0;
        __Cont___0: 
        i ++;
      }
      while_break___4: /* CIL Label */ ;
      }
      while_break___1: ;
      if (i < nr) {
        char_to_squeeze = 128;
      }
    }
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: ;
  return;
}
}
static size_t plain_read(char *buf___0 , size_t size ) 
{ 
  size_t nr ;
  size_t tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  char *__cil_tmp8 ;

  {
  {
  tmp = safe_read(0, (void *)buf___0, size);
  nr = tmp;
  }
  if (nr == 0xffffffffffffffffUL) {
    {
    tmp___0 = gettext("read error");
    tmp___1 = __errno_location();
    error(1, *tmp___1, (char const   *)tmp___0);
    }
  }
  return (nr);
}
}
static size_t read_and_delete(char *buf___0 , size_t size ) 
{ 
  size_t n_saved ;
  size_t i ;
  size_t nr ;
  size_t tmp ;
  unsigned char tmp___0 ;
  size_t tmp___1 ;
  unsigned char tmp___2 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp = plain_read(buf___0, size);
    nr = tmp;
    }
    if (nr == 0UL) {
      return ((size_t )0);
    }
    i = (size_t )0;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (i < nr) {
        {
        tmp___0 = to_uchar(*(buf___0 + i));
        }
        if (in_delete_set[tmp___0]) {
          goto while_break___0;
        }
      } else {
        goto while_break___0;
      }
      goto __Cont;
      __Cont: 
      i ++;
    }
    while_break___3: /* CIL Label */ ;
    }
    while_break___0: 
    n_saved = i;
    i ++;
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;

      if (! (i < nr)) {
        goto while_break___1;
      }
      {
      tmp___2 = to_uchar(*(buf___0 + i));
      }
      if (! in_delete_set[tmp___2]) {
        tmp___1 = n_saved;
        n_saved ++;
        *(buf___0 + tmp___1) = *(buf___0 + i);
      }
      i ++;
    }
    while_break___4: /* CIL Label */ ;
    }
    while_break___1: ;
    if (! (n_saved == 0UL)) {
      goto while_break;
    }
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: ;
  return (n_saved);
}
}
static size_t read_and_xlate(char *buf___0 , size_t size ) 
{ 
  size_t bytes_read ;
  size_t tmp ;
  size_t i ;
  unsigned char tmp___0 ;

  {
  {
  tmp = plain_read(buf___0, size);
  bytes_read = tmp;
  i = (size_t )0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < bytes_read)) {
      goto while_break;
    }
    {
    tmp___0 = to_uchar(*(buf___0 + i));
    *(buf___0 + i) = xlate[tmp___0];
    i ++;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (bytes_read);
}
}
static void set_initialize(struct Spec_list *s , _Bool complement_this_set , _Bool *in_set ) 
{ 
  int c ;
  size_t i ;

  {
  s->state = 0xfffffffffffffffeUL;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    c = get_next(s, (enum Upper_Lower_class *)((void *)0));
    }
    if (! (c != -1)) {
      goto while_break;
    }
    *(in_set + c) = (_Bool)1;
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
  if (complement_this_set) {
    i = (size_t )0;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! (i < 256UL)) {
        goto while_break___0;
      }
      *(in_set + i) = (_Bool )(! *(in_set + i));
      i ++;
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: ;
  }
  return;
}
}
int main(int argc , char **argv ) 
{ 
  int c ;
  int non_option_args ;
  int min_operands ;
  int max_operands ;
  struct Spec_list buf1 ;
  struct Spec_list buf2 ;
  struct Spec_list *s1 ;
  struct Spec_list *s2 ;
  int tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  char const   *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  _Bool tmp___8 ;
  _Bool tmp___9 ;
  size_t nr ;
  size_t tmp___12 ;
  char *tmp___13 ;
  int *tmp___14 ;
  size_t tmp___15 ;
  int i ;
  _Bool *in_s1 ;
  int ch ;
  int tmp___16 ;
  int c1 ;
  int c2 ;
  int i___0 ;
  _Bool case_convert ;
  enum Upper_Lower_class class_s1 ;
  enum Upper_Lower_class class_s2 ;
  char *tmp___17 ;
  int tmp___18 ;
  unsigned short const   **tmp___19 ;
  int tmp___20 ;
  unsigned short const   **tmp___21 ;
  size_t bytes_read ;
  size_t tmp___22 ;
  char *tmp___23 ;
  int *tmp___24 ;
  size_t tmp___25 ;
  char *tmp___26 ;
  int *tmp___27 ;
  int tmp___28 ;
  char *__cil_tmp64 ;
  char *__cil_tmp65 ;
  char *__cil_tmp66 ;
  char *__cil_tmp67 ;
  char *__cil_tmp68 ;
  char *__cil_tmp69 ;
  char *__cil_tmp70 ;
  char *__cil_tmp71 ;
  char *__cil_tmp72 ;
  char *__cil_tmp73 ;
  char *__cil_tmp74 ;
  char *__cil_tmp75 ;
  char *__cil_tmp76 ;
  char *__cil_tmp77 ;

  {
  {
  s1 = & buf1;
  s2 = & buf2;
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    c = getopt_long(argc, (char * const  *)argv, "+cCdst", long_options, (int *)((void *)0));
    }
    if (! (c != -1)) {
      goto while_break;
    }
    if (c == 99) {
      goto case_99;
    }
    if (c == 67) {
      goto case_99;
    }
    if (c == 100) {
      goto case_100;
    }
    if (c == 115) {
      goto case_115;
    }
    if (c == 116) {
      goto case_116;
    }
    if (c == -130) {
      goto case_neg_130;
    }
    if (c == -131) {
      goto case_neg_131;
    }
    goto switch_default;
    case_99: 
    complement = (_Bool)1;
    goto switch_break;
    case_100: 
    delete = (_Bool)1;
    goto switch_break;
    case_115: 
    squeeze_repeats = (_Bool)1;
    goto switch_break;
    case_116: 
    truncate_set1 = (_Bool)1;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    version_etc(stdout, "tr", "GNU coreutils", Version, "Jim Meyering", (char *)((void *)0));
    exit(0);
    }
    goto switch_break;
    switch_default: 
    {
    usage(1);
    }
    goto switch_break;
    switch_break: ;
  }
  while_break___8: /* CIL Label */ ;
  }
  while_break: 
  non_option_args = argc - optind;
  if (non_option_args == 2) {
    if (! delete) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  translating = (_Bool )tmp;
  min_operands = 1 + ((int )delete == (int )squeeze_repeats);
  max_operands = 1 + ((int )delete <= (int )squeeze_repeats);
  if (non_option_args < min_operands) {
    if (non_option_args == 0) {
      {
      tmp___0 = gettext("missing operand");
      error(0, 0, (char const   *)tmp___0);
      }
    } else {
      {
      tmp___1 = quote((char const   *)*(argv + (argc - 1)));
      tmp___2 = gettext("missing operand after %s");
      error(0, 0, (char const   *)tmp___2, tmp___1);
      }
      if (squeeze_repeats) {
        tmp___3 = "Two strings must be given when both deleting and squeezing repeats.";
      } else {
        tmp___3 = "Two strings must be given when translating.";
      }
      {
      tmp___4 = gettext(tmp___3);
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s\n",
              tmp___4);
      }
    }
    {
    usage(1);
    }
  }
  if (max_operands < non_option_args) {
    {
    tmp___5 = quote((char const   *)*(argv + (optind + max_operands)));
    tmp___6 = gettext("extra operand %s");
    error(0, 0, (char const   *)tmp___6, tmp___5);
    }
    if (non_option_args == 2) {
      {
      tmp___7 = gettext("Only one string may be given when deleting without squeezing repeats.");
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s\n",
              tmp___7);
      }
    }
    {
    usage(1);
    }
  }
  {
  spec_init(s1);
  tmp___8 = parse_str((char const   *)*(argv + optind), s1);
  }
  if (! tmp___8) {
    {
    exit(1);
    }
  }
  if (non_option_args == 2) {
    {
    spec_init(s2);
    tmp___9 = parse_str((char const   *)*(argv + (optind + 1)), s2);
    }
    if (! tmp___9) {
      {
      exit(1);
      }
    }
  } else {
    s2 = (struct Spec_list *)((void *)0);
  }
  {
  validate(s1, s2);
  }
  if (squeeze_repeats) {
    if (non_option_args == 1) {
      {
      set_initialize(s1, complement, in_squeeze_set);
      squeeze_filter(io_buf, sizeof(io_buf), & plain_read);
      }
    } else {
      goto _L___6;
    }
  } else
  _L___6: 
  if (delete) {
    if (non_option_args == 1) {
      {
      set_initialize(s1, complement, in_delete_set);
      }
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;
        {
        tmp___12 = read_and_delete(io_buf, sizeof(io_buf));
        nr = tmp___12;
        }
        if (nr == 0UL) {
          goto while_break___0;
        }
        {
        tmp___15 = fwrite_unlocked((void const   */* __restrict  */)((void const   *)(io_buf)),
                                   (size_t )1, nr, (FILE */* __restrict  */)stdout);
        }
        if (tmp___15 != nr) {
          {
          tmp___13 = gettext("write error");
          tmp___14 = __errno_location();
          error(1, *tmp___14, (char const   *)tmp___13);
          }
        }
      }
      while_break___9: /* CIL Label */ ;
      }
      while_break___0: ;
    } else {
      goto _L___5;
    }
  } else
  _L___5: 
  if (squeeze_repeats) {
    if (delete) {
      if (non_option_args == 2) {
        {
        set_initialize(s1, complement, in_delete_set);
        set_initialize(s2, (_Bool)0, in_squeeze_set);
        squeeze_filter(io_buf, sizeof(io_buf), & read_and_delete);
        }
      } else {
        goto _L___4;
      }
    } else {
      goto _L___4;
    }
  } else
  _L___4: 
  if (translating) {
    if (complement) {
      {
      in_s1 = in_delete_set;
      set_initialize(s1, (_Bool)0, in_s1);
      s2->state = 0xfffffffffffffffeUL;
      i = 0;
      }
      {
      while (1) {
        while_continue___1: /* CIL Label */ ;

        if (! (i < 256)) {
          goto while_break___1;
        }
        xlate[i] = (char )i;
        i ++;
      }
      while_break___10: /* CIL Label */ ;
      }
      while_break___1: 
      i = 0;
      {
      while (1) {
        while_continue___2: /* CIL Label */ ;

        if (! (i < 256)) {
          goto while_break___2;
        }
        if (! *(in_s1 + i)) {
          {
          tmp___16 = get_next(s2, (enum Upper_Lower_class *)((void *)0));
          ch = tmp___16;
          }
          if (! (ch != -1)) {
            if (! truncate_set1) {
              {
              __assert_fail("ch != -1 || truncate_set1", "/home/wslee/project/coreutils-8.1/src/tr.c",
                            1797U, "main");
              }
            }
          }
          if (ch == -1) {
            goto while_break___2;
          }
          xlate[i] = (char )ch;
        }
        i ++;
      }
      while_break___11: /* CIL Label */ ;
      }
      while_break___2: ;
    } else {
      case_convert = (_Bool)0;
      i___0 = 0;
      {
      while (1) {
        while_continue___3: /* CIL Label */ ;

        if (! (i___0 < 256)) {
          goto while_break___3;
        }
        xlate[i___0] = (char )i___0;
        i___0 ++;
      }
      while_break___12: /* CIL Label */ ;
      }
      while_break___3: 
      s1->state = 0xfffffffffffffffeUL;
      s2->state = 0xfffffffffffffffeUL;
      {
      while (1) {
        while_continue___4: /* CIL Label */ ;

        if (case_convert) {
          {
          skip_construct(s1);
          skip_construct(s2);
          case_convert = (_Bool)0;
          }
        }
        {
        c1 = get_next(s1, & class_s1);
        c2 = get_next(s2, & class_s2);
        }
        if ((unsigned int )class_s1 == 2U) {
          if ((unsigned int )class_s2 == 0U) {
            {
            tmp___17 = gettext("misaligned [:upper:] and/or [:lower:] construct");
            error(1, 0, (char const   *)tmp___17);
            }
          } else
          if ((unsigned int )class_s2 == 1U) {
            {
            tmp___17 = gettext("misaligned [:upper:] and/or [:lower:] construct");
            error(1, 0, (char const   *)tmp___17);
            }
          }
        }
        if ((unsigned int )class_s1 == 0U) {
          if ((unsigned int )class_s2 == 1U) {
            case_convert = (_Bool)1;
            i___0 = 0;
            {
            while (1) {
              while_continue___5: /* CIL Label */ ;

              if (! (i___0 < 256)) {
                goto while_break___5;
              }
              {
              tmp___19 = __ctype_b_loc();
              }
              if ((int const   )*(*tmp___19 + i___0) & 512) {
                {
                tmp___18 = toupper(i___0);
                xlate[i___0] = (char )tmp___18;
                }
              }
              i___0 ++;
            }
            while_break___14: /* CIL Label */ ;
            }
            while_break___5: ;
          } else {
            goto _L___2;
          }
        } else
        _L___2: 
        if ((unsigned int )class_s1 == 1U) {
          if ((unsigned int )class_s2 == 0U) {
            case_convert = (_Bool)1;
            i___0 = 0;
            {
            while (1) {
              while_continue___6: /* CIL Label */ ;

              if (! (i___0 < 256)) {
                goto while_break___6;
              }
              {
              tmp___21 = __ctype_b_loc();
              }
              if ((int const   )*(*tmp___21 + i___0) & 256) {
                {
                tmp___20 = tolower(i___0);
                xlate[i___0] = (char )tmp___20;
                }
              }
              i___0 ++;
            }
            while_break___15: /* CIL Label */ ;
            }
            while_break___6: ;
          } else {
            goto _L___1;
          }
        } else
        _L___1: 
        if ((unsigned int )class_s1 == 0U) {
          if (! ((unsigned int )class_s2 == 0U)) {
            goto _L___0;
          }
        } else
        _L___0: 
        if ((unsigned int )class_s1 == 1U) {
          if (! ((unsigned int )class_s2 == 1U)) {
            goto _L;
          }
        } else {
          _L: 
          if (c1 == -1) {
            goto while_break___4;
          } else
          if (c2 == -1) {
            goto while_break___4;
          }
          xlate[c1] = (char )c2;
        }
      }
      while_break___13: /* CIL Label */ ;
      }
      while_break___4: ;
      if (! (c1 == -1)) {
        if (! truncate_set1) {
          {
          __assert_fail("c1 == -1 || truncate_set1", "/home/wslee/project/coreutils-8.1/src/tr.c",
                        1871U, "main");
          }
        }
      }
    }
    if (squeeze_repeats) {
      {
      set_initialize(s2, (_Bool)0, in_squeeze_set);
      squeeze_filter(io_buf, sizeof(io_buf), & read_and_xlate);
      }
    } else {
      {
      while (1) {
        while_continue___7: /* CIL Label */ ;
        {
        tmp___22 = read_and_xlate(io_buf, sizeof(io_buf));
        bytes_read = tmp___22;
        }
        if (bytes_read == 0UL) {
          goto while_break___7;
        }
        {
        tmp___25 = fwrite_unlocked((void const   */* __restrict  */)((void const   *)(io_buf)),
                                   (size_t )1, bytes_read, (FILE */* __restrict  */)stdout);
        }
        if (tmp___25 != bytes_read) {
          {
          tmp___23 = gettext("write error");
          tmp___24 = __errno_location();
          error(1, *tmp___24, (char const   *)tmp___23);
          }
        }
      }
      while_break___16: /* CIL Label */ ;
      }
      while_break___7: ;
    }
  }
  {
  tmp___28 = close(0);
  }
  if (tmp___28 != 0) {
    {
    tmp___26 = gettext("standard input");
    tmp___27 = __errno_location();
    error(1, *tmp___27, (char const   *)tmp___26);
    }
  }
  {
  exit(0);
  }
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
void (*argmatch_die)(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) memcmp)(void const   *__s1 ,
                                                                                               void const   *__s2 ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
char *quotearg_n_style(int n , enum quoting_style s , char const   *arg ) ;
char const   *quote_n(int n , char const   *name ) ;
#line 60 "/home/wslee/project/coreutils-8.1/lib/argmatch.c"
static void __argmatch_die(void) 
{ 


  {
#line 63
  usage(1);
#line 64
  return;
}
}
void (*argmatch_die)(void)  =    & __argmatch_die;
char const   *simple_backup_suffix ;
void *xrealloc(void *p , size_t n ) ;
char const   *simple_backup_suffix  =    "~";
char *last_component(char const   *name ) 
{ 
  char const   *base ;
  char const   *p ;
  _Bool saw_slash ;

  {
  base = name + 0;
  saw_slash = (_Bool)0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((int const   )*base == 47)) {
      goto while_break;
    }
    base ++;
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: 
  p = base;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! *p) {
      goto while_break___0;
    }
    if ((int const   )*p == 47) {
      saw_slash = (_Bool)1;
    } else
    if (saw_slash) {
      base = p;
      saw_slash = (_Bool)0;
    }
    p ++;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: ;
  return ((char *)base);
}
}
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const   *__s ,
                                                                                               int __c )  __attribute__((__pure__)) ;
extern int fclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror_unlocked)(FILE *__stream ) ;
int close_stream(FILE *stream ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) __fpending)(FILE *__fp ) ;
int close_stream(FILE *stream ) 
{ 
  _Bool some_pending ;
  size_t tmp ;
  _Bool prev_fail ;
  int tmp___0 ;
  _Bool fclose_fail ;
  int tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;

  {
  {
  tmp = __fpending(stream);
  some_pending = (_Bool )(tmp != 0UL);
  tmp___0 = ferror_unlocked(stream);
  prev_fail = (_Bool )(tmp___0 != 0);
  tmp___1 = fclose(stream);
  fclose_fail = (_Bool )(tmp___1 != 0);
  }
  if (prev_fail) {
    goto _L___0;
  } else
  if (fclose_fail) {
    if (some_pending) {
      goto _L___0;
    } else {
      {
      tmp___3 = __errno_location();
      }
      if (*tmp___3 != 9) {
        _L___0: 
        if (! fclose_fail) {
          {
          tmp___2 = __errno_location();
          *tmp___2 = 0;
          }
        }
        return (-1);
      }
    }
  }
  return (0);
}
}
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
int volatile   exit_failure ;
char *quotearg_colon(char const   *arg ) ;
static char const   *file_name___0  ;
static _Bool ignore_EPIPE  ;
void close_stdout(void) 
{ 
  char const   *write_error ;
  char *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  char *__cil_tmp10 ;

  {
  {
  tmp___3 = close_stream(stdout);
  }
  if (tmp___3 != 0) {
    if (ignore_EPIPE) {
      {
      tmp___4 = __errno_location();
      }
      if (! (*tmp___4 == 32)) {
        goto _L;
      }
    } else {
      _L: 
      {
      tmp = gettext("write error");
      write_error = (char const   *)tmp;
      }
      if (file_name___0) {
        {
        tmp___0 = quotearg_colon(file_name___0);
        tmp___1 = __errno_location();
        error(0, *tmp___1, "%s: %s", tmp___0, write_error);
        }
      } else {
        {
        tmp___2 = __errno_location();
        error(0, *tmp___2, "%s", write_error);
        }
      }
      {
      _exit((int )exit_failure);
      }
    }
  }
  {
  tmp___5 = close_stream(stderr);
  }
  if (tmp___5 != 0) {
    {
    _exit((int )exit_failure);
    }
  }
  return;
}
}
char const   diacrit_base[256] ;
char const   diacrit_diac[256] ;
char const   diacrit_base[256]  = 
  {      (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )'A',      (char const   )'B',      (char const   )'C', 
        (char const   )'D',      (char const   )'E',      (char const   )'F',      (char const   )'G', 
        (char const   )'H',      (char const   )'I',      (char const   )'J',      (char const   )'K', 
        (char const   )'L',      (char const   )'M',      (char const   )'N',      (char const   )'O', 
        (char const   )'P',      (char const   )'Q',      (char const   )'R',      (char const   )'S', 
        (char const   )'T',      (char const   )'U',      (char const   )'V',      (char const   )'W', 
        (char const   )'X',      (char const   )'Y',      (char const   )'Z',      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )'a',      (char const   )'b',      (char const   )'c', 
        (char const   )'d',      (char const   )'e',      (char const   )'f',      (char const   )'g', 
        (char const   )'h',      (char const   )'i',      (char const   )'j',      (char const   )'k', 
        (char const   )'l',      (char const   )'m',      (char const   )'n',      (char const   )'o', 
        (char const   )'p',      (char const   )'q',      (char const   )'r',      (char const   )'s', 
        (char const   )'t',      (char const   )'u',      (char const   )'v',      (char const   )'w', 
        (char const   )'x',      (char const   )'y',      (char const   )'z',      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )'A',      (char const   )'A',      (char const   )'A',      (char const   )'A', 
        (char const   )'A',      (char const   )'A',      (char const   )'A',      (char const   )'C', 
        (char const   )'E',      (char const   )'E',      (char const   )'E',      (char const   )'E', 
        (char const   )'I',      (char const   )'I',      (char const   )'I',      (char const   )'I', 
        (char const   )0,      (char const   )'N',      (char const   )'O',      (char const   )'O', 
        (char const   )'O',      (char const   )'O',      (char const   )'O',      (char const   )0, 
        (char const   )'O',      (char const   )'U',      (char const   )'U',      (char const   )'U', 
        (char const   )'U',      (char const   )'Y',      (char const   )0,      (char const   )0, 
        (char const   )'a',      (char const   )'a',      (char const   )'a',      (char const   )'a', 
        (char const   )'a',      (char const   )'a',      (char const   )'a',      (char const   )'c', 
        (char const   )'e',      (char const   )'e',      (char const   )'e',      (char const   )'e', 
        (char const   )'i',      (char const   )'i',      (char const   )'i',      (char const   )'i', 
        (char const   )0,      (char const   )'n',      (char const   )'o',      (char const   )'o', 
        (char const   )'o',      (char const   )'o',      (char const   )'o',      (char const   )0, 
        (char const   )'o',      (char const   )'u',      (char const   )'u',      (char const   )'u', 
        (char const   )'u',      (char const   )'y',      (char const   )0,      (char const   )'y'};
char const   diacrit_diac[256]  = 
  {      (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )4,      (char const   )0, 
        (char const   )3,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )6,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )0,      (char const   )0,      (char const   )0,      (char const   )0, 
        (char const   )3,      (char const   )2,      (char const   )4,      (char const   )6, 
        (char const   )5,      (char const   )8,      (char const   )1,      (char const   )7, 
        (char const   )3,      (char const   )2,      (char const   )4,      (char const   )5, 
        (char const   )3,      (char const   )2,      (char const   )4,      (char const   )5, 
        (char const   )0,      (char const   )6,      (char const   )3,      (char const   )2, 
        (char const   )4,      (char const   )6,      (char const   )5,      (char const   )0, 
        (char const   )9,      (char const   )3,      (char const   )2,      (char const   )4, 
        (char const   )5,      (char const   )2,      (char const   )0,      (char const   )0, 
        (char const   )3,      (char const   )2,      (char const   )4,      (char const   )6, 
        (char const   )5,      (char const   )8,      (char const   )1,      (char const   )7, 
        (char const   )3,      (char const   )2,      (char const   )4,      (char const   )5, 
        (char const   )3,      (char const   )2,      (char const   )4,      (char const   )5, 
        (char const   )0,      (char const   )6,      (char const   )3,      (char const   )2, 
        (char const   )4,      (char const   )6,      (char const   )5,      (char const   )0, 
        (char const   )9,      (char const   )3,      (char const   )2,      (char const   )4, 
        (char const   )5,      (char const   )2,      (char const   )0,      (char const   )0};
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) __ctype_get_mb_cur_max)(void) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strrchr)(char const   *__s ,
                                                                                                int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) mbsinit)(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) mbrtowc)(wchar_t * __restrict  __pwc ,
                                                                                 char const   * __restrict  __s ,
                                                                                 size_t __n ,
                                                                                 mbstate_t * __restrict  __p ) ;
unsigned int const   is_basic_table[8] ;
int volatile   exit_failure  =    (int volatile   )1;
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) calloc)(size_t __nmemb ,
                                                                               size_t __size )  __attribute__((__malloc__)) ;
void version_etc_va(FILE *stream , char const   *command_name , char const   *package ,
                    char const   *version , va_list authors ) ;
unsigned int const   is_basic_table[8]  = {      (unsigned int const   )6656,      (unsigned int const   )4294967279U,      (unsigned int const   )4294967294U,      (unsigned int const   )2147483646};
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswprint)(wint_t __wc ) ;
extern char *program_invocation_name ;
extern char *program_invocation_short_name ;
char const   *program_name  =    (char const   *)((void *)0);
void set_program_name(char const   *argv0 ) 
{ 
  char const   *slash ;
  char const   *base ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  tmp = strrchr(argv0, '/');
  slash = (char const   *)tmp;
  }
  if ((unsigned long )slash != (unsigned long )((void *)0)) {
    base = slash + 1;
  } else {
    base = argv0;
  }
  if (base - argv0 >= 7L) {
    {
    tmp___1 = strncmp(base - 7, "/.libs/", (size_t )7);
    }
    if (tmp___1 == 0) {
      {
      argv0 = base;
      tmp___0 = strncmp(base, "lt-", (size_t )3);
      }
      if (tmp___0 == 0) {
        argv0 = base + 3;
        program_invocation_short_name = (char *)argv0;
      }
    }
  }
  program_name = argv0;
  program_invocation_name = (char *)argv0;
  return;
}
}
char const   *quote_n(int n , char const   *name ) 
{ 
  char *tmp ;

  {
  {
  tmp = quotearg_n_style(n, (enum quoting_style )6, name);
  }
  return ((char const   *)tmp);
}
}
char const   *quote(char const   *name ) 
{ 
  char const   *tmp ;

  {
  {
  tmp = quote_n(0, name);
  }
  return (tmp);
}
}
char const   * const  quoting_style_args[9] ;
enum quoting_style  const  quoting_style_vals[8] ;
int set_char_quoting(struct quoting_options *o , char c , int i ) ;
char *quotearg_char(char const   *arg , char ch ) ;
char *quotearg_char_mem(char const   *arg , size_t argsize , char ch ) ;
__inline static char *xcharalloc(size_t n )  __attribute__((__malloc__)) ;
__inline static char *xcharalloc(size_t n )  __attribute__((__malloc__)) ;
__inline static char *xcharalloc(size_t n ) 
{ 
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  if (sizeof(char ) == 1UL) {
    {
    tmp = xmalloc(n);
    tmp___1 = tmp;
    }
  } else {
    {
    tmp___0 = xnmalloc(n, sizeof(char ));
    tmp___1 = tmp___0;
    }
  }
  return ((char *)tmp___1);
}
}
char const   * const  quoting_style_args[9]  = 
  {      (char const   */* const  */)"literal",      (char const   */* const  */)"shell",      (char const   */* const  */)"shell-always",      (char const   */* const  */)"c", 
        (char const   */* const  */)"c-maybe",      (char const   */* const  */)"escape",      (char const   */* const  */)"locale",      (char const   */* const  */)"clocale", 
        (char const   */* const  */)((char const   *)0)};
enum quoting_style  const  quoting_style_vals[8]  = 
  {      (enum quoting_style  const  )0,      (enum quoting_style  const  )1,      (enum quoting_style  const  )2,      (enum quoting_style  const  )3, 
        (enum quoting_style  const  )4,      (enum quoting_style  const  )5,      (enum quoting_style  const  )6,      (enum quoting_style  const  )7};
static struct quoting_options default_quoting_options  ;
int set_char_quoting(struct quoting_options *o , char c , int i ) 
{ 
  unsigned char uc ;
  unsigned int *p ;
  struct quoting_options *tmp ;
  int shift ;
  int r ;

  {
  uc = (unsigned char )c;
  if (o) {
    tmp = o;
  } else {
    tmp = & default_quoting_options;
  }
  p = tmp->quote_these_too + (unsigned long )uc / (sizeof(int ) * 8UL);
  shift = (int )((unsigned long )uc % (sizeof(int ) * 8UL));
  r = (int )((*p >> shift) & 1U);
  *p ^= (unsigned int )(((i & 1) ^ r) << shift);
  return (r);
}
}
static struct quoting_options quoting_options_from_style(enum quoting_style style ) 
{ 
  struct quoting_options o ;
  void *__cil_tmp4 ;

  {
  {
  o.style = style;
  o.flags = 0;
  memset((void *)(o.quote_these_too), 0, sizeof(o.quote_these_too));
  }
  return (o);
}
}
static char const   *gettext_quote(char const   *msgid , enum quoting_style s ) 
{ 
  char const   *translation ;
  char *tmp ;
  char *__cil_tmp6 ;

  {
  {
  tmp = gettext(msgid);
  translation = (char const   *)tmp;
  }
  if ((unsigned long )translation == (unsigned long )msgid) {
    if ((unsigned int )s == 7U) {
      translation = "\"";
    }
  }
  return (translation);
}
}
static size_t quotearg_buffer_restyled(char *buffer , size_t buffersize , char const   *arg ,
                                       size_t argsize , enum quoting_style quoting_style ,
                                       int flags , unsigned int const   *quote_these_too ,
                                       char const   *left_quote , char const   *right_quote ) 
{ 
  size_t i ;
  size_t len ;
  char const   *quote_string ;
  size_t quote_string_len ;
  _Bool backslash_escapes ;
  _Bool unibyte_locale ;
  size_t tmp ;
  _Bool elide_outer_quotes ;
  unsigned char c ;
  unsigned char esc ;
  _Bool is_right_quote ;
  int tmp___0 ;
  int tmp___1 ;
  size_t m ;
  _Bool printable ;
  unsigned short const   **tmp___2 ;
  mbstate_t mbstate ;
  wchar_t w ;
  size_t bytes ;
  size_t tmp___3 ;
  size_t j ;
  int tmp___4 ;
  int tmp___5 ;
  size_t ilim ;
  int tmp___6 ;
  size_t tmp___7 ;
  void *__cil_tmp41 ;
  char *__cil_tmp42 ;
  char *__cil_tmp43 ;
  char *__cil_tmp44 ;
  char *__cil_tmp45 ;

  {
  {
  len = (size_t )0;
  quote_string = (char const   *)0;
  quote_string_len = (size_t )0;
  backslash_escapes = (_Bool)0;
  tmp = __ctype_get_mb_cur_max();
  unibyte_locale = (_Bool )(tmp == 1UL);
  elide_outer_quotes = (_Bool )((flags & 2) != 0);
  }
  if ((unsigned int )quoting_style == 4U) {
    goto case_4;
  }
  if ((unsigned int )quoting_style == 3U) {
    goto case_3;
  }
  if ((unsigned int )quoting_style == 5U) {
    goto case_5;
  }
  if ((unsigned int )quoting_style == 6U) {
    goto case_6;
  }
  if ((unsigned int )quoting_style == 7U) {
    goto case_6;
  }
  if ((unsigned int )quoting_style == 8U) {
    goto case_6;
  }
  if ((unsigned int )quoting_style == 1U) {
    goto case_1;
  }
  if ((unsigned int )quoting_style == 2U) {
    goto case_2;
  }
  if ((unsigned int )quoting_style == 0U) {
    goto case_0;
  }
  goto switch_default;
  case_4: 
  quoting_style = (enum quoting_style )3;
  elide_outer_quotes = (_Bool)1;
  case_3: 
  if (! elide_outer_quotes) {
    {
    while (1) {
      while_continue: /* CIL Label */ ;

      if (len < buffersize) {
        *(buffer + len) = (char )'\"';
      }
      len ++;
      goto while_break;
    }
    while_break___27: /* CIL Label */ ;
    }
    while_break: ;
  }
  backslash_escapes = (_Bool)1;
  quote_string = "\"";
  quote_string_len = (size_t )1;
  goto switch_break;
  case_5: 
  backslash_escapes = (_Bool)1;
  elide_outer_quotes = (_Bool)0;
  goto switch_break;
  case_6: 
  if ((unsigned int )quoting_style != 8U) {
    {
    left_quote = gettext_quote("`", quoting_style);
    right_quote = gettext_quote("\'", quoting_style);
    }
  }
  if (! elide_outer_quotes) {
    quote_string = left_quote;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! *quote_string) {
        goto while_break___0;
      }
      {
      while (1) {
        while_continue___1: /* CIL Label */ ;

        if (len < buffersize) {
          *(buffer + len) = (char )*quote_string;
        }
        len ++;
        goto while_break___1;
      }
      while_break___29: /* CIL Label */ ;
      }
      while_break___1: 
      quote_string ++;
    }
    while_break___28: /* CIL Label */ ;
    }
    while_break___0: ;
  }
  {
  backslash_escapes = (_Bool)1;
  quote_string = right_quote;
  quote_string_len = strlen(quote_string);
  }
  goto switch_break;
  case_1: 
  quoting_style = (enum quoting_style )2;
  elide_outer_quotes = (_Bool)1;
  case_2: 
  if (! elide_outer_quotes) {
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;

      if (len < buffersize) {
        *(buffer + len) = (char )'\'';
      }
      len ++;
      goto while_break___2;
    }
    while_break___30: /* CIL Label */ ;
    }
    while_break___2: ;
  }
  quote_string = "\'";
  quote_string_len = (size_t )1;
  goto switch_break;
  case_0: 
  elide_outer_quotes = (_Bool)0;
  goto switch_break;
  switch_default: 
  {
  abort();
  }
  switch_break: 
  i = (size_t )0;
  {
  while (1) {
    while_continue___3: /* CIL Label */ ;

    if (argsize == 0xffffffffffffffffUL) {
      tmp___6 = (int const   )*(arg + i) == 0;
    } else {
      tmp___6 = i == argsize;
    }
    if (tmp___6) {
      goto while_break___3;
    }
    is_right_quote = (_Bool)0;
    if (backslash_escapes) {
      if (quote_string_len) {
        if (i + quote_string_len <= argsize) {
          {
          tmp___0 = memcmp((void const   *)(arg + i), (void const   *)quote_string,
                           quote_string_len);
          }
          if (tmp___0 == 0) {
            if (elide_outer_quotes) {
              goto force_outer_quoting_style;
            }
            is_right_quote = (_Bool)1;
          }
        }
      }
    }
    c = (unsigned char )*(arg + i);
    if ((int )c == 0) {
      goto case_0___0;
    }
    if ((int )c == 63) {
      goto case_63;
    }
    if ((int )c == 7) {
      goto case_7___0;
    }
    if ((int )c == 8) {
      goto case_8___0;
    }
    if ((int )c == 12) {
      goto case_12;
    }
    if ((int )c == 10) {
      goto case_10;
    }
    if ((int )c == 13) {
      goto case_13;
    }
    if ((int )c == 9) {
      goto case_9;
    }
    if ((int )c == 11) {
      goto case_11;
    }
    if ((int )c == 92) {
      goto case_92;
    }
    if ((int )c == 123) {
      goto case_123;
    }
    if ((int )c == 125) {
      goto case_123;
    }
    if ((int )c == 35) {
      goto case_35;
    }
    if ((int )c == 126) {
      goto case_35;
    }
    if ((int )c == 32) {
      goto case_32;
    }
    if ((int )c == 33) {
      goto case_32;
    }
    if ((int )c == 34) {
      goto case_32;
    }
    if ((int )c == 36) {
      goto case_32;
    }
    if ((int )c == 38) {
      goto case_32;
    }
    if ((int )c == 40) {
      goto case_32;
    }
    if ((int )c == 41) {
      goto case_32;
    }
    if ((int )c == 42) {
      goto case_32;
    }
    if ((int )c == 59) {
      goto case_32;
    }
    if ((int )c == 60) {
      goto case_32;
    }
    if ((int )c == 61) {
      goto case_32;
    }
    if ((int )c == 62) {
      goto case_32;
    }
    if ((int )c == 91) {
      goto case_32;
    }
    if ((int )c == 94) {
      goto case_32;
    }
    if ((int )c == 96) {
      goto case_32;
    }
    if ((int )c == 124) {
      goto case_32;
    }
    if ((int )c == 39) {
      goto case_39___0;
    }
    if ((int )c == 37) {
      goto case_37;
    }
    if ((int )c == 43) {
      goto case_37;
    }
    if ((int )c == 44) {
      goto case_37;
    }
    if ((int )c == 45) {
      goto case_37;
    }
    if ((int )c == 46) {
      goto case_37;
    }
    if ((int )c == 47) {
      goto case_37;
    }
    if ((int )c == 48) {
      goto case_37;
    }
    if ((int )c == 49) {
      goto case_37;
    }
    if ((int )c == 50) {
      goto case_37;
    }
    if ((int )c == 51) {
      goto case_37;
    }
    if ((int )c == 52) {
      goto case_37;
    }
    if ((int )c == 53) {
      goto case_37;
    }
    if ((int )c == 54) {
      goto case_37;
    }
    if ((int )c == 55) {
      goto case_37;
    }
    if ((int )c == 56) {
      goto case_37;
    }
    if ((int )c == 57) {
      goto case_37;
    }
    if ((int )c == 58) {
      goto case_37;
    }
    if ((int )c == 65) {
      goto case_37;
    }
    if ((int )c == 66) {
      goto case_37;
    }
    if ((int )c == 67) {
      goto case_37;
    }
    if ((int )c == 68) {
      goto case_37;
    }
    if ((int )c == 69) {
      goto case_37;
    }
    if ((int )c == 70) {
      goto case_37;
    }
    if ((int )c == 71) {
      goto case_37;
    }
    if ((int )c == 72) {
      goto case_37;
    }
    if ((int )c == 73) {
      goto case_37;
    }
    if ((int )c == 74) {
      goto case_37;
    }
    if ((int )c == 75) {
      goto case_37;
    }
    if ((int )c == 76) {
      goto case_37;
    }
    if ((int )c == 77) {
      goto case_37;
    }
    if ((int )c == 78) {
      goto case_37;
    }
    if ((int )c == 79) {
      goto case_37;
    }
    if ((int )c == 80) {
      goto case_37;
    }
    if ((int )c == 81) {
      goto case_37;
    }
    if ((int )c == 82) {
      goto case_37;
    }
    if ((int )c == 83) {
      goto case_37;
    }
    if ((int )c == 84) {
      goto case_37;
    }
    if ((int )c == 85) {
      goto case_37;
    }
    if ((int )c == 86) {
      goto case_37;
    }
    if ((int )c == 87) {
      goto case_37;
    }
    if ((int )c == 88) {
      goto case_37;
    }
    if ((int )c == 89) {
      goto case_37;
    }
    if ((int )c == 90) {
      goto case_37;
    }
    if ((int )c == 93) {
      goto case_37;
    }
    if ((int )c == 95) {
      goto case_37;
    }
    if ((int )c == 97) {
      goto case_37;
    }
    if ((int )c == 98) {
      goto case_37;
    }
    if ((int )c == 99) {
      goto case_37;
    }
    if ((int )c == 100) {
      goto case_37;
    }
    if ((int )c == 101) {
      goto case_37;
    }
    if ((int )c == 102) {
      goto case_37;
    }
    if ((int )c == 103) {
      goto case_37;
    }
    if ((int )c == 104) {
      goto case_37;
    }
    if ((int )c == 105) {
      goto case_37;
    }
    if ((int )c == 106) {
      goto case_37;
    }
    if ((int )c == 107) {
      goto case_37;
    }
    if ((int )c == 108) {
      goto case_37;
    }
    if ((int )c == 109) {
      goto case_37;
    }
    if ((int )c == 110) {
      goto case_37;
    }
    if ((int )c == 111) {
      goto case_37;
    }
    if ((int )c == 112) {
      goto case_37;
    }
    if ((int )c == 113) {
      goto case_37;
    }
    if ((int )c == 114) {
      goto case_37;
    }
    if ((int )c == 115) {
      goto case_37;
    }
    if ((int )c == 116) {
      goto case_37;
    }
    if ((int )c == 117) {
      goto case_37;
    }
    if ((int )c == 118) {
      goto case_37;
    }
    if ((int )c == 119) {
      goto case_37;
    }
    if ((int )c == 120) {
      goto case_37;
    }
    if ((int )c == 121) {
      goto case_37;
    }
    if ((int )c == 122) {
      goto case_37;
    }
    goto switch_default___2;
    case_0___0: 
    if (backslash_escapes) {
      if (elide_outer_quotes) {
        goto force_outer_quoting_style;
      }
      {
      while (1) {
        while_continue___4: /* CIL Label */ ;

        if (len < buffersize) {
          *(buffer + len) = (char )'\\';
        }
        len ++;
        goto while_break___4;
      }
      while_break___32: /* CIL Label */ ;
      }
      while_break___4: ;
      if (i + 1UL < argsize) {
        if (48 <= (int )*(arg + (i + 1UL))) {
          if ((int const   )*(arg + (i + 1UL)) <= 57) {
            {
            while (1) {
              while_continue___5: /* CIL Label */ ;

              if (len < buffersize) {
                *(buffer + len) = (char )'0';
              }
              len ++;
              goto while_break___5;
            }
            while_break___33: /* CIL Label */ ;
            }
            while_break___5: ;
            {
            while (1) {
              while_continue___6: /* CIL Label */ ;

              if (len < buffersize) {
                *(buffer + len) = (char )'0';
              }
              len ++;
              goto while_break___6;
            }
            while_break___34: /* CIL Label */ ;
            }
            while_break___6: ;
          }
        }
      }
      c = (unsigned char )'0';
    } else
    if (flags & 1) {
      goto __Cont;
    }
    goto switch_break___0;
    case_63: 
    if ((unsigned int )quoting_style == 2U) {
      goto case_2___0;
    }
    if ((unsigned int )quoting_style == 3U) {
      goto case_3___0;
    }
    goto switch_default___1;
    case_2___0: 
    if (elide_outer_quotes) {
      goto force_outer_quoting_style;
    }
    goto switch_break___1;
    case_3___0: 
    if (flags & 4) {
      if (i + 2UL < argsize) {
        if ((int const   )*(arg + (i + 1UL)) == 63) {
          if ((int const   )*(arg + (i + 2UL)) == 33) {
            goto case_33;
          }
          if ((int const   )*(arg + (i + 2UL)) == 39) {
            goto case_33;
          }
          if ((int const   )*(arg + (i + 2UL)) == 40) {
            goto case_33;
          }
          if ((int const   )*(arg + (i + 2UL)) == 41) {
            goto case_33;
          }
          if ((int const   )*(arg + (i + 2UL)) == 45) {
            goto case_33;
          }
          if ((int const   )*(arg + (i + 2UL)) == 47) {
            goto case_33;
          }
          if ((int const   )*(arg + (i + 2UL)) == 60) {
            goto case_33;
          }
          if ((int const   )*(arg + (i + 2UL)) == 61) {
            goto case_33;
          }
          if ((int const   )*(arg + (i + 2UL)) == 62) {
            goto case_33;
          }
          goto switch_default___0;
          case_33: 
          if (elide_outer_quotes) {
            goto force_outer_quoting_style;
          }
          c = (unsigned char )*(arg + (i + 2UL));
          i += 2UL;
          {
          while (1) {
            while_continue___7: /* CIL Label */ ;

            if (len < buffersize) {
              *(buffer + len) = (char )'?';
            }
            len ++;
            goto while_break___7;
          }
          while_break___35: /* CIL Label */ ;
          }
          while_break___7: ;
          {
          while (1) {
            while_continue___8: /* CIL Label */ ;

            if (len < buffersize) {
              *(buffer + len) = (char )'\"';
            }
            len ++;
            goto while_break___8;
          }
          while_break___36: /* CIL Label */ ;
          }
          while_break___8: ;
          {
          while (1) {
            while_continue___9: /* CIL Label */ ;

            if (len < buffersize) {
              *(buffer + len) = (char )'\"';
            }
            len ++;
            goto while_break___9;
          }
          while_break___37: /* CIL Label */ ;
          }
          while_break___9: ;
          {
          while (1) {
            while_continue___10: /* CIL Label */ ;

            if (len < buffersize) {
              *(buffer + len) = (char )'?';
            }
            len ++;
            goto while_break___10;
          }
          while_break___38: /* CIL Label */ ;
          }
          while_break___10: ;
          goto switch_break___2;
          switch_default___0: 
          goto switch_break___2;
          switch_break___2: ;
        }
      }
    }
    goto switch_break___1;
    switch_default___1: 
    goto switch_break___1;
    switch_break___1: ;
    goto switch_break___0;
    case_7___0: 
    esc = (unsigned char )'a';
    goto c_escape;
    case_8___0: 
    esc = (unsigned char )'b';
    goto c_escape;
    case_12: 
    esc = (unsigned char )'f';
    goto c_escape;
    case_10: 
    esc = (unsigned char )'n';
    goto c_and_shell_escape;
    case_13: 
    esc = (unsigned char )'r';
    goto c_and_shell_escape;
    case_9: 
    esc = (unsigned char )'t';
    goto c_and_shell_escape;
    case_11: 
    esc = (unsigned char )'v';
    goto c_escape;
    case_92: 
    esc = c;
    if (backslash_escapes) {
      if (elide_outer_quotes) {
        if (quote_string_len) {
          goto store_c;
        }
      }
    }
    c_and_shell_escape: 
    if ((unsigned int )quoting_style == 2U) {
      if (elide_outer_quotes) {
        goto force_outer_quoting_style;
      }
    }
    c_escape: 
    if (backslash_escapes) {
      c = esc;
      goto store_escape;
    }
    goto switch_break___0;
    case_123: 
    if (argsize == 0xffffffffffffffffUL) {
      tmp___1 = (int const   )*(arg + 1) == 0;
    } else {
      tmp___1 = argsize == 1UL;
    }
    if (! tmp___1) {
      goto switch_break___0;
    }
    case_35: 
    if (i != 0UL) {
      goto switch_break___0;
    }
    case_32: 
    if ((unsigned int )quoting_style == 2U) {
      if (elide_outer_quotes) {
        goto force_outer_quoting_style;
      }
    }
    goto switch_break___0;
    case_39___0: 
    if ((unsigned int )quoting_style == 2U) {
      if (elide_outer_quotes) {
        goto force_outer_quoting_style;
      }
      {
      while (1) {
        while_continue___11: /* CIL Label */ ;

        if (len < buffersize) {
          *(buffer + len) = (char )'\'';
        }
        len ++;
        goto while_break___11;
      }
      while_break___39: /* CIL Label */ ;
      }
      while_break___11: ;
      {
      while (1) {
        while_continue___12: /* CIL Label */ ;

        if (len < buffersize) {
          *(buffer + len) = (char )'\\';
        }
        len ++;
        goto while_break___12;
      }
      while_break___40: /* CIL Label */ ;
      }
      while_break___12: ;
      {
      while (1) {
        while_continue___13: /* CIL Label */ ;

        if (len < buffersize) {
          *(buffer + len) = (char )'\'';
        }
        len ++;
        goto while_break___13;
      }
      while_break___41: /* CIL Label */ ;
      }
      while_break___13: ;
    }
    goto switch_break___0;
    case_37: 
    goto switch_break___0;
    switch_default___2: 
    if (unibyte_locale) {
      {
      m = (size_t )1;
      tmp___2 = __ctype_b_loc();
      printable = (_Bool )(((int const   )*(*tmp___2 + (int )c) & 16384) != 0);
      }
    } else {
      {
      memset((void *)(& mbstate), 0, sizeof(mbstate));
      m = (size_t )0;
      printable = (_Bool)1;
      }
      if (argsize == 0xffffffffffffffffUL) {
        {
        argsize = strlen(arg);
        }
      }
      {
      while (1) {
        while_continue___14: /* CIL Label */ ;
        {
        tmp___3 = mbrtowc((wchar_t */* __restrict  */)(& w), (char const   */* __restrict  */)(arg + (i + m)),
                          argsize - (i + m), (mbstate_t */* __restrict  */)(& mbstate));
        bytes = tmp___3;
        }
        if (bytes == 0UL) {
          goto while_break___14;
        } else
        if (bytes == 0xffffffffffffffffUL) {
          printable = (_Bool)0;
          goto while_break___14;
        } else
        if (bytes == 0xfffffffffffffffeUL) {
          printable = (_Bool)0;
          {
          while (1) {
            while_continue___15: /* CIL Label */ ;

            if (i + m < argsize) {
              if (! *(arg + (i + m))) {
                goto while_break___15;
              }
            } else {
              goto while_break___15;
            }
            m ++;
          }
          while_break___43: /* CIL Label */ ;
          }
          while_break___15: ;
          goto while_break___14;
        } else {
          if (elide_outer_quotes) {
            if ((unsigned int )quoting_style == 2U) {
              j = (size_t )1;
              {
              while (1) {
                while_continue___16: /* CIL Label */ ;

                if (! (j < bytes)) {
                  goto while_break___16;
                }
                if ((int const   )*(arg + ((i + m) + j)) == 91) {
                  goto case_91___0;
                }
                if ((int const   )*(arg + ((i + m) + j)) == 92) {
                  goto case_91___0;
                }
                if ((int const   )*(arg + ((i + m) + j)) == 94) {
                  goto case_91___0;
                }
                if ((int const   )*(arg + ((i + m) + j)) == 96) {
                  goto case_91___0;
                }
                if ((int const   )*(arg + ((i + m) + j)) == 124) {
                  goto case_91___0;
                }
                goto switch_default___3;
                case_91___0: 
                goto force_outer_quoting_style;
                switch_default___3: 
                goto switch_break___3;
                switch_break___3: 
                j ++;
              }
              while_break___44: /* CIL Label */ ;
              }
              while_break___16: ;
            }
          }
          {
          tmp___4 = iswprint((wint_t )w);
          }
          if (! tmp___4) {
            printable = (_Bool)0;
          }
          m += bytes;
        }
        {
        tmp___5 = mbsinit((mbstate_t const   *)(& mbstate));
        }
        if (tmp___5) {
          goto while_break___14;
        }
      }
      while_break___42: /* CIL Label */ ;
      }
      while_break___14: ;
    }
    if (1UL < m) {
      goto _L___0;
    } else
    if (backslash_escapes) {
      if (! printable) {
        _L___0: 
        ilim = i + m;
        {
        while (1) {
          while_continue___17: /* CIL Label */ ;

          if (backslash_escapes) {
            if (! printable) {
              if (elide_outer_quotes) {
                goto force_outer_quoting_style;
              }
              {
              while (1) {
                while_continue___18: /* CIL Label */ ;

                if (len < buffersize) {
                  *(buffer + len) = (char )'\\';
                }
                len ++;
                goto while_break___18;
              }
              while_break___46: /* CIL Label */ ;
              }
              while_break___18: ;
              {
              while (1) {
                while_continue___19: /* CIL Label */ ;

                if (len < buffersize) {
                  *(buffer + len) = (char )(48 + ((int )c >> 6));
                }
                len ++;
                goto while_break___19;
              }
              while_break___47: /* CIL Label */ ;
              }
              while_break___19: ;
              {
              while (1) {
                while_continue___20: /* CIL Label */ ;

                if (len < buffersize) {
                  *(buffer + len) = (char )(48 + (((int )c >> 3) & 7));
                }
                len ++;
                goto while_break___20;
              }
              while_break___48: /* CIL Label */ ;
              }
              while_break___20: 
              c = (unsigned char )(48 + ((int )c & 7));
            } else {
              goto _L;
            }
          } else
          _L: 
          if (is_right_quote) {
            {
            while (1) {
              while_continue___21: /* CIL Label */ ;

              if (len < buffersize) {
                *(buffer + len) = (char )'\\';
              }
              len ++;
              goto while_break___21;
            }
            while_break___49: /* CIL Label */ ;
            }
            while_break___21: 
            is_right_quote = (_Bool)0;
          }
          if (ilim <= i + 1UL) {
            goto while_break___17;
          }
          {
          while (1) {
            while_continue___22: /* CIL Label */ ;

            if (len < buffersize) {
              *(buffer + len) = (char )c;
            }
            len ++;
            goto while_break___22;
          }
          while_break___50: /* CIL Label */ ;
          }
          while_break___22: 
          i ++;
          c = (unsigned char )*(arg + i);
        }
        while_break___45: /* CIL Label */ ;
        }
        while_break___17: ;
        goto store_c;
      }
    }
    switch_break___0: ;
    if (backslash_escapes) {
      goto _L___3;
    } else
    if (elide_outer_quotes) {
      _L___3: 
      if (quote_these_too) {
        if (! (*(quote_these_too + (unsigned long )c / (sizeof(int ) * 8UL)) & (unsigned int const   )(1 << (unsigned long )c % (sizeof(int ) * 8UL)))) {
          goto _L___2;
        }
      } else {
        goto _L___2;
      }
    } else
    _L___2: 
    if (! is_right_quote) {
      goto store_c;
    }
    store_escape: 
    if (elide_outer_quotes) {
      goto force_outer_quoting_style;
    }
    {
    while (1) {
      while_continue___23: /* CIL Label */ ;

      if (len < buffersize) {
        *(buffer + len) = (char )'\\';
      }
      len ++;
      goto while_break___23;
    }
    while_break___51: /* CIL Label */ ;
    }
    while_break___23: ;
    store_c: 
    {
    while (1) {
      while_continue___24: /* CIL Label */ ;

      if (len < buffersize) {
        *(buffer + len) = (char )c;
      }
      len ++;
      goto while_break___24;
    }
    while_break___52: /* CIL Label */ ;
    }
    while_break___24: ;
    __Cont: 
    i ++;
  }
  while_break___31: /* CIL Label */ ;
  }
  while_break___3: ;
  if (len == 0UL) {
    if ((unsigned int )quoting_style == 2U) {
      if (elide_outer_quotes) {
        goto force_outer_quoting_style;
      }
    }
  }
  if (quote_string) {
    if (! elide_outer_quotes) {
      {
      while (1) {
        while_continue___25: /* CIL Label */ ;

        if (! *quote_string) {
          goto while_break___25;
        }
        {
        while (1) {
          while_continue___26: /* CIL Label */ ;

          if (len < buffersize) {
            *(buffer + len) = (char )*quote_string;
          }
          len ++;
          goto while_break___26;
        }
        while_break___54: /* CIL Label */ ;
        }
        while_break___26: 
        quote_string ++;
      }
      while_break___53: /* CIL Label */ ;
      }
      while_break___25: ;
    }
  }
  if (len < buffersize) {
    *(buffer + len) = (char )'\000';
  }
  return (len);
  force_outer_quoting_style: 
  {
  tmp___7 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize, quoting_style,
                                     flags & -3, (unsigned int const   *)((void *)0),
                                     left_quote, right_quote);
  }
  return (tmp___7);
}
}
static char slot0[256]  ;
static unsigned int nslots  =    1U;
static struct slotvec slotvec0  =    {sizeof(slot0), slot0};
static struct slotvec *slotvec  =    & slotvec0;
static char *quotearg_n_options(int n , char const   *arg , size_t argsize , struct quoting_options  const  *options ) 
{ 
  int e ;
  int *tmp ;
  unsigned int n0 ;
  struct slotvec *sv ;
  size_t n1 ;
  _Bool preallocated ;
  int tmp___0 ;
  struct slotvec *tmp___1 ;
  void *tmp___2 ;
  size_t size ;
  char *val ;
  int flags ;
  size_t qsize ;
  size_t tmp___3 ;
  int *tmp___4 ;

  {
  {
  tmp = __errno_location();
  e = *tmp;
  n0 = (unsigned int )n;
  sv = slotvec;
  }
  if (n < 0) {
    {
    abort();
    }
  }
  if (nslots <= n0) {
    n1 = (size_t )(n0 + 1U);
    preallocated = (_Bool )((unsigned long )sv == (unsigned long )(& slotvec0));
    if (sizeof(ptrdiff_t ) <= sizeof(size_t )) {
      tmp___0 = -1;
    } else {
      tmp___0 = -2;
    }
    if ((size_t )tmp___0 / sizeof(*sv) < n1) {
      {
      xalloc_die();
      }
    }
    if (preallocated) {
      tmp___1 = (struct slotvec *)((void *)0);
    } else {
      tmp___1 = sv;
    }
    {
    tmp___2 = xrealloc((void *)tmp___1, n1 * sizeof(*sv));
    sv = (struct slotvec *)tmp___2;
    slotvec = sv;
    }
    if (preallocated) {
      *sv = slotvec0;
    }
    {
    memset((void *)(sv + nslots), 0, (n1 - (size_t )nslots) * sizeof(*sv));
    nslots = (unsigned int )n1;
    }
  }
  {
  size = (sv + n)->size;
  val = (sv + n)->val;
  flags = (int )(options->flags | 1);
  tmp___3 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style )options->style,
                                     flags, (unsigned int const   *)(options->quote_these_too),
                                     (char const   *)options->left_quote, (char const   *)options->right_quote);
  qsize = tmp___3;
  }
  if (size <= qsize) {
    size = qsize + 1UL;
    (sv + n)->size = size;
    if ((unsigned long )val != (unsigned long )(slot0)) {
      {
      free((void *)val);
      }
    }
    {
    val = xcharalloc(size);
    (sv + n)->val = val;
    quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style )options->style,
                             flags, (unsigned int const   *)(options->quote_these_too),
                             (char const   *)options->left_quote, (char const   *)options->right_quote);
    }
  }
  {
  tmp___4 = __errno_location();
  *tmp___4 = e;
  }
  return (val);
}
}
char *quotearg_n_style(int n , enum quoting_style s , char const   *arg ) 
{ 
  struct quoting_options o ;
  struct quoting_options tmp ;
  char *tmp___0 ;
  void *__cil_tmp9 ;
  void *__cil_tmp10 ;

  {
  {
  tmp = quoting_options_from_style(s);
  o = tmp;
  tmp___0 = quotearg_n_options(n, arg, (size_t )-1, (struct quoting_options  const  *)(& o));
  }
  return (tmp___0);
}
}
char *quotearg_char_mem(char const   *arg , size_t argsize , char ch ) 
{ 
  struct quoting_options options ;
  char *tmp ;
  void *__cil_tmp7 ;

  {
  {
  options = default_quoting_options;
  set_char_quoting(& options, ch, 1);
  tmp = quotearg_n_options(0, arg, argsize, (struct quoting_options  const  *)(& options));
  }
  return (tmp);
}
}
char *quotearg_char(char const   *arg , char ch ) 
{ 
  char *tmp ;

  {
  {
  tmp = quotearg_char_mem(arg, (size_t )-1, ch);
  }
  return (tmp);
}
}
char *quotearg_colon(char const   *arg ) 
{ 
  char *tmp ;

  {
  {
  tmp = quotearg_char(arg, (char )':');
  }
  return (tmp);
}
}
reg_syntax_t rpl_re_syntax_options  ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
size_t safe_read(int fd , void *buf___0 , size_t count___0 ) 
{ 
  ssize_t result ;
  ssize_t tmp ;
  int *tmp___0 ;
  int *tmp___1 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp = read(fd, buf___0, count___0);
    result = tmp;
    }
    if (0L <= result) {
      return ((size_t )result);
    } else {
      {
      tmp___1 = __errno_location();
      }
      if (*tmp___1 == 4) {
        goto __Cont;
      } else {
        {
        tmp___0 = __errno_location();
        }
        if (*tmp___0 == 22) {
          if (2147475456UL < count___0) {
            count___0 = (size_t )2147475456;
          } else {
            return ((size_t )result);
          }
        } else {
          return ((size_t )result);
        }
      }
    }
    __Cont: ;
  }
  while_break: /* CIL Label */ ;
  }

  return (0UL);
}
}
char const   version_etc_copyright[47] ;
char const   version_etc_copyright[47]  = 
  {      (char const   )'C',      (char const   )'o',      (char const   )'p',      (char const   )'y', 
        (char const   )'r',      (char const   )'i',      (char const   )'g',      (char const   )'h', 
        (char const   )'t',      (char const   )' ',      (char const   )'%',      (char const   )'s', 
        (char const   )' ',      (char const   )'%',      (char const   )'d',      (char const   )' ', 
        (char const   )'F',      (char const   )'r',      (char const   )'e',      (char const   )'e', 
        (char const   )' ',      (char const   )'S',      (char const   )'o',      (char const   )'f', 
        (char const   )'t',      (char const   )'w',      (char const   )'a',      (char const   )'r', 
        (char const   )'e',      (char const   )' ',      (char const   )'F',      (char const   )'o', 
        (char const   )'u',      (char const   )'n',      (char const   )'d',      (char const   )'a', 
        (char const   )'t',      (char const   )'i',      (char const   )'o',      (char const   )'n', 
        (char const   )',',      (char const   )' ',      (char const   )'I',      (char const   )'n', 
        (char const   )'c',      (char const   )'.',      (char const   )'\000'};
void version_etc_arn(FILE *stream , char const   *command_name , char const   *package ,
                     char const   *version , char const   * const  *authors , size_t n_authors ) ;
void version_etc_arn(FILE *stream , char const   *command_name , char const   *package ,
                     char const   *version , char const   * const  *authors , size_t n_authors ) 
{ 
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *__cil_tmp31 ;
  char *__cil_tmp32 ;
  char *__cil_tmp33 ;
  char *__cil_tmp34 ;
  char *__cil_tmp35 ;
  char *__cil_tmp36 ;
  char *__cil_tmp37 ;
  char *__cil_tmp38 ;
  char *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char *__cil_tmp41 ;
  char *__cil_tmp42 ;

  {
  if (command_name) {
    {
    fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)"%s (%s) %s\n",
            command_name, package, version);
    }
  } else {
    {
    fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)"%s %s\n",
            package, version);
    }
  }
  {
  tmp = gettext("(C)");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)(version_etc_copyright),
          tmp, 2009);
  tmp___0 = gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
  fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___0), (FILE */* __restrict  */)stream);
  }
  if (n_authors == 0UL) {
    goto case_0;
  }
  if (n_authors == 1UL) {
    goto case_1;
  }
  if (n_authors == 2UL) {
    goto case_2;
  }
  if (n_authors == 3UL) {
    goto case_3;
  }
  if (n_authors == 4UL) {
    goto case_4;
  }
  if (n_authors == 5UL) {
    goto case_5;
  }
  if (n_authors == 6UL) {
    goto case_6;
  }
  if (n_authors == 7UL) {
    goto case_7;
  }
  if (n_authors == 8UL) {
    goto case_8;
  }
  if (n_authors == 9UL) {
    goto case_9;
  }
  goto switch_default;
  case_0: 
  {
  abort();
  }
  case_1: 
  {
  tmp___1 = gettext("Written by %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___1),
          *(authors + 0));
  }
  goto switch_break;
  case_2: 
  {
  tmp___2 = gettext("Written by %s and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___2),
          *(authors + 0), *(authors + 1));
  }
  goto switch_break;
  case_3: 
  {
  tmp___3 = gettext("Written by %s, %s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___3),
          *(authors + 0), *(authors + 1), *(authors + 2));
  }
  goto switch_break;
  case_4: 
  {
  tmp___4 = gettext("Written by %s, %s, %s,\nand %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___4),
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3));
  }
  goto switch_break;
  case_5: 
  {
  tmp___5 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___5),
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4));
  }
  goto switch_break;
  case_6: 
  {
  tmp___6 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___6),
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5));
  }
  goto switch_break;
  case_7: 
  {
  tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___7),
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5), *(authors + 6));
  }
  goto switch_break;
  case_8: 
  {
  tmp___8 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___8),
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5), *(authors + 6), *(authors + 7));
  }
  goto switch_break;
  case_9: 
  {
  tmp___9 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___9),
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));
  }
  goto switch_break;
  switch_default: 
  {
  tmp___10 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)((char const   *)tmp___10),
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));
  }
  goto switch_break;
  switch_break: ;
  return;
}
}
void version_etc_va(FILE *stream , char const   *command_name , char const   *package ,
                    char const   *version , va_list authors ) 
{ 
  size_t n_authors ;
  char const   *authtab[10] ;
  char const   *tmp ;
  char const   *tmp___0 ;
  void *__cil_tmp11 ;

  {
  n_authors = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (n_authors < 10UL) {
      {
      tmp___0 = __builtin_va_arg(authors, char const   *);
      tmp = tmp___0;
      authtab[n_authors] = tmp;
      }
      if (! ((unsigned long )tmp != (unsigned long )((void *)0))) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    n_authors ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
  version_etc_arn(stream, command_name, package, version, (char const   * const  *)(authtab),
                  n_authors);
  }
  return;
}
}
void version_etc(FILE *stream , char const   *command_name , char const   *package ,
                 char const   *version  , ...)  __attribute__((__sentinel__)) ;
void version_etc(FILE *stream , char const   *command_name , char const   *package ,
                 char const   *version  , ...) 
{ 
  va_list authors ;

  {
  {
  __builtin_va_start(authors, version);
  version_etc_va(stream, command_name, package, version, authors);
  __builtin_va_end(authors);
  }
  return;
}
}
 __attribute__((__noreturn__)) void xalloc_die(void) ;
void xalloc_die(void) 
{ 
  char *tmp ;
  char *__cil_tmp3 ;

  {
  {
  tmp = gettext("memory exhausted");
  error((int )exit_failure, 0, "%s", tmp);
  abort();
  }
}
}
void *xmalloc(size_t n )  __attribute__((__malloc__)) ;
void *xmalloc(size_t n ) 
{ 
  void *p ;
  void *tmp ;

  {
  {
  tmp = malloc(n);
  p = tmp;
  }
  if (! p) {
    if (n != 0UL) {
      {
      xalloc_die();
      }
    }
  }
  return (p);
}
}
void *xrealloc(void *p , size_t n ) 
{ 


  {
  {
  p = realloc(p, n);
  }
  if (! p) {
    if (n != 0UL) {
      {
      xalloc_die();
      }
    }
  }
  return (p);
}
}
void *xcalloc(size_t n , size_t s )  __attribute__((__malloc__)) ;
void *xcalloc(size_t n , size_t s ) 
{ 
  void *p ;

  {
  {
  p = calloc(n, s);
  }
  if (! p) {
    {
    xalloc_die();
    }
  }
  return (p);
}
}
extern  __attribute__((__nothrow__)) uintmax_t ( __attribute__((__leaf__)) strtoumax)(char const   * __restrict  __nptr ,
                                                                                      char ** __restrict  __endptr ,
                                                                                      int __base ) ;
static strtol_error bkm_scale___2(uintmax_t *x , int scale_factor ) 
{ 


  {
  if (0xffffffffffffffffUL / (unsigned long )scale_factor < *x) {
    *x = 0xffffffffffffffffUL;
    return ((strtol_error )1);
  }
  *x *= (uintmax_t )scale_factor;
  return ((strtol_error )0);
}
}
static strtol_error bkm_scale_by_power___2(uintmax_t *x , int base , int power ) 
{ 
  strtol_error err ;
  strtol_error tmp ;
  int tmp___0 ;

  {
  err = (strtol_error )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    tmp___0 = power;
    power --;
    if (! tmp___0) {
      goto while_break;
    }
    {
    tmp = bkm_scale___2(x, base);
    err = (strtol_error )((unsigned int )err | (unsigned int )tmp);
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (err);
}
}
strtol_error xstrtoumax(char const   *s , char **ptr , int strtol_base , uintmax_t *val ,
                        char const   *valid_suffixes ) 
{ 
  char *t_ptr ;
  char **p ;
  uintmax_t tmp ;
  strtol_error err ;
  char const   *q ;
  unsigned char ch ;
  unsigned short const   **tmp___0 ;
  int *tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  int base ;
  int suffixes ;
  strtol_error overflow ;
  char *tmp___5 ;
  char *tmp___6 ;

  {
  err = (strtol_error )0;
  if (0 <= strtol_base) {
    if (! (strtol_base <= 36)) {
      {
      __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/wslee/project/coreutils-8.1/lib/xstrtol.c",
                    83U, "xstrtoumax");
      }
    }
  } else {
    {
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/wslee/project/coreutils-8.1/lib/xstrtol.c",
                  83U, "xstrtoumax");
    }
  }
  if (ptr) {
    p = ptr;
  } else {
    p = & t_ptr;
  }
  q = s;
  ch = (unsigned char )*q;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp___0 = __ctype_b_loc();
    }
    if (! ((int const   )*(*tmp___0 + (int )ch) & 8192)) {
      goto while_break;
    }
    q ++;
    ch = (unsigned char )*q;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if ((int )ch == 45) {
    return ((strtol_error )4);
  }
  {
  tmp___1 = __errno_location();
  *tmp___1 = 0;
  tmp = strtoumax((char const   */* __restrict  */)s, (char **/* __restrict  */)p,
                  strtol_base);
  }
  if ((unsigned long )*p == (unsigned long )s) {
    if (valid_suffixes) {
      if (*(*p)) {
        {
        tmp___2 = strchr(valid_suffixes, (int )*(*p));
        }
        if (tmp___2) {
          tmp = (uintmax_t )1;
        } else {
          return ((strtol_error )4);
        }
      } else {
        return ((strtol_error )4);
      }
    } else {
      return ((strtol_error )4);
    }
  } else {
    {
    tmp___4 = __errno_location();
    }
    if (*tmp___4 != 0) {
      {
      tmp___3 = __errno_location();
      }
      if (*tmp___3 != 34) {
        return ((strtol_error )4);
      }
      err = (strtol_error )1;
    }
  }
  if (! valid_suffixes) {
    *val = tmp;
    return (err);
  }
  if ((int )*(*p) != 0) {
    {
    base = 1024;
    suffixes = 1;
    tmp___5 = strchr(valid_suffixes, (int )*(*p));
    }
    if (! tmp___5) {
      *val = tmp;
      return ((strtol_error )((unsigned int )err | 2U));
    }
    {
    tmp___6 = strchr(valid_suffixes, '0');
    }
    if (tmp___6) {
      if ((int )*(*(p + 0) + 1) == 105) {
        goto case_105;
      }
      if ((int )*(*(p + 0) + 1) == 66) {
        goto case_66;
      }
      if ((int )*(*(p + 0) + 1) == 68) {
        goto case_66;
      }
      goto switch_break;
      case_105: 
      if ((int )*(*(p + 0) + 2) == 66) {
        suffixes += 2;
      }
      goto switch_break;
      case_66: 
      base = 1000;
      suffixes ++;
      goto switch_break;
      switch_break: ;
    }
    if ((int )*(*p) == 98) {
      goto case_98;
    }
    if ((int )*(*p) == 66) {
      goto case_66___0;
    }
    if ((int )*(*p) == 99) {
      goto case_99;
    }
    if ((int )*(*p) == 69) {
      goto case_69;
    }
    if ((int )*(*p) == 71) {
      goto case_71;
    }
    if ((int )*(*p) == 103) {
      goto case_71;
    }
    if ((int )*(*p) == 107) {
      goto case_107;
    }
    if ((int )*(*p) == 75) {
      goto case_107;
    }
    if ((int )*(*p) == 77) {
      goto case_77;
    }
    if ((int )*(*p) == 109) {
      goto case_77;
    }
    if ((int )*(*p) == 80) {
      goto case_80;
    }
    if ((int )*(*p) == 84) {
      goto case_84;
    }
    if ((int )*(*p) == 116) {
      goto case_84;
    }
    if ((int )*(*p) == 119) {
      goto case_119;
    }
    if ((int )*(*p) == 89) {
      goto case_89;
    }
    if ((int )*(*p) == 90) {
      goto case_90;
    }
    goto switch_default;
    case_98: 
    {
    overflow = bkm_scale___2(& tmp, 512);
    }
    goto switch_break___0;
    case_66___0: 
    {
    overflow = bkm_scale___2(& tmp, 1024);
    }
    goto switch_break___0;
    case_99: 
    overflow = (strtol_error )0;
    goto switch_break___0;
    case_69: 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 6);
    }
    goto switch_break___0;
    case_71: 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 3);
    }
    goto switch_break___0;
    case_107: 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 1);
    }
    goto switch_break___0;
    case_77: 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 2);
    }
    goto switch_break___0;
    case_80: 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 5);
    }
    goto switch_break___0;
    case_84: 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 4);
    }
    goto switch_break___0;
    case_119: 
    {
    overflow = bkm_scale___2(& tmp, 2);
    }
    goto switch_break___0;
    case_89: 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 8);
    }
    goto switch_break___0;
    case_90: 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 7);
    }
    goto switch_break___0;
    switch_default: 
    *val = tmp;
    return ((strtol_error )((unsigned int )err | 2U));
    switch_break___0: 
    err = (strtol_error )((unsigned int )err | (unsigned int )overflow);
    *p += suffixes;
    if (*(*p)) {
      err = (strtol_error )((unsigned int )err | 2U);
    }
  }
  *val = tmp;
  return (err);
}
}
char const   *Version  =    "8.1";
