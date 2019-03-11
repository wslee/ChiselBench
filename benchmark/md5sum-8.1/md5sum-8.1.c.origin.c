typedef long __off_t;
typedef long __off64_t;
typedef long __ssize_t;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef __ssize_t ssize_t;
typedef unsigned long size_t;
typedef unsigned long uintmax_t;
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
struct __anonstruct___mbstate_t_45536052 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_45536052 __mbstate_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
typedef unsigned int uint32_t;
struct md5_ctx {
   uint32_t A ;
   uint32_t B ;
   uint32_t C ;
   uint32_t D ;
   uint32_t total[2] ;
   uint32_t buflen ;
   uint32_t buffer[32] ;
};
struct __anonstruct_833865290 {
   char c ;
   uint32_t x ;
};
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
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
extern int optind ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const   *__s ,
                                                                                               int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) setlocale)(int __category ,
                                                                                  char const   *__locale ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) gettext)(char const   *__msgid )  __attribute__((__format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) ngettext)(char const   *__msgid1 ,
                                                                                 char const   *__msgid2 ,
                                                                                 unsigned long __n )  __attribute__((__format_arg__(2),
__format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) textdomain)(char const   *__domainname ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) bindtextdomain)(char const   *__domainname ,
                                                                                       char const   *__dirname ) ;
__inline static unsigned long select_plural(uintmax_t n ) 
{ 
  uintmax_t tmp ;

  {
  if (n <= 0xffffffffffffffffUL) {
    tmp = n;
  } else {
    tmp = n % 1000000UL + 1000000UL;
  }
  return (tmp);
}
}
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) setvbuf)(FILE * __restrict  __stream ,
                                                                              char * __restrict  __buf ,
                                                                              int __modes ,
                                                                              size_t __n ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern __ssize_t getline(char ** __restrict  __lineptr , size_t * __restrict  __n ,
                         FILE * __restrict  __stream ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) feof_unlocked)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror_unlocked)(FILE *__stream ) ;
char *last_component(char const   *name ) ;
void close_stdout(void) ;
void version_etc(FILE *stream , char const   *command_name , char const   *package ,
                 char const   *version  , ...)  __attribute__((__sentinel__)) ;
char const   *program_name ;
void set_program_name(char const   *argv0 ) ;
__inline static void *ptr_align(void const   *ptr , size_t alignment ) 
{ 
  char const   *p0 ;
  char const   *p1 ;

  {
  p0 = (char const   *)ptr;
  p1 = (p0 + alignment) - 1;
  return ((void *)(p1 - (size_t )p1 % alignment));
}
}
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
__inline static char *bad_cast(char const   *s ) 
{ 


  {
  return ((char *)s);
}
}
 __attribute__((__noreturn__)) void usage(int status ) ;
 __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) md5_stream)(FILE *stream ,
                                                                          void *resblock ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
FILE *fopen_safer(char const   *file , char const   *mode ) ;
static _Bool have_read_stdin  ;
static size_t min_digest_line_length  ;
static size_t digest_hex_bytes  ;
static _Bool status_only  =    (_Bool)0;
static _Bool warn  =    (_Bool)0;
static _Bool quiet  =    (_Bool)0;
static struct option  const  long_options[9]  = 
  {      {"binary", 0, (int *)((void *)0), 'b'}, 
        {"check", 0, (int *)((void *)0), 'c'}, 
        {"quiet", 0, (int *)((void *)0), 129}, 
        {"status", 0, (int *)((void *)0), 128}, 
        {"text", 0, (int *)((void *)0), 't'}, 
        {"warn", 0, (int *)((void *)0), 'w'}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
 __attribute__((__noreturn__)) void usage(int status ) ;
void usage(int status ) 
{ 
  char *tmp ;
  char *tmp___0 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
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
    tmp___0 = gettext("Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\nWith no FILE, or when FILE is -, read standard input.\n\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name,
           "MD5", 128);
    tmp___2 = gettext("  -b, --binary            read in binary mode\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -c, --check             read %s sums from the FILEs and check them\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___3), "MD5");
    tmp___5 = gettext("  -t, --text              read in text mode (default)\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___5), (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("\nThe following three options are useful only when verifying checksums:\n      --quiet             don\'t print OK for each successfully verified file\n      --status            don\'t output anything, status code shows success\n  -w, --warn              warn about improperly formatted checksum lines\n\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___6), (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___7), (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___8), (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("\nThe sums are computed as described in %s.  When checking, the input\nshould be a former output of this program.  The default mode is to print\na line with checksum, a character indicating type (`*\' for binary, ` \' for\ntext), and name for each FILE.\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___9), "RFC 1321");
    emit_ancillary_info();
    }
  }
  {
  exit(status);
  }
}
}
static _Bool bsd_split_3(char *s , size_t s_len , unsigned char **hex_digest , char **file_name___1 ) 
{ 
  size_t i ;
  size_t tmp ;

  {
  if (s_len == 0UL) {
    return ((_Bool)0);
  }
  *file_name___1 = s;
  i = s_len - 1UL;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (i) {
      if (! ((int )*(s + i) != 41)) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    i --;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: ;
  if ((int )*(s + i) != 41) {
    return ((_Bool)0);
  }
  tmp = i;
  i ++;
  *(s + tmp) = (char )'\000';
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! ((int )*(s + i) == 32)) {
      if (! ((int )*(s + i) == 9)) {
        goto while_break___0;
      }
    }
    i ++;
  }
  while_break___3: /* CIL Label */ ;
  }
  while_break___0: ;
  if ((int )*(s + i) != 61) {
    return ((_Bool)0);
  }
  i ++;
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;

    if (! ((int )*(s + i) == 32)) {
      if (! ((int )*(s + i) == 9)) {
        goto while_break___1;
      }
    }
    i ++;
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break___1: 
  *hex_digest = (unsigned char *)(s + i);
  return ((_Bool)1);
}
}
static _Bool split_3(char *s , size_t s_len , unsigned char **hex_digest , int *binary ,
                     char **file_name___1 ) 
{ 
  _Bool escaped_filename ;
  size_t algo_name_len ;
  size_t i ;
  _Bool tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  char *dst ;
  size_t tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  size_t tmp___7 ;
  char *__cil_tmp20 ;

  {
  escaped_filename = (_Bool)0;
  i = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((int )*(s + i) == 32)) {
      if (! ((int )*(s + i) == 9)) {
        goto while_break;
      }
    }
    i ++;
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: 
  {
  algo_name_len = strlen("MD5");
  tmp___0 = strncmp((char const   *)(s + i), "MD5", algo_name_len);
  }
  if (tmp___0 == 0) {
    if ((int )*(s + (i + algo_name_len)) == 32) {
      i ++;
    }
    if ((int )*(s + (i + algo_name_len)) == 40) {
      {
      *binary = 0;
      tmp = bsd_split_3(((s + i) + algo_name_len) + 1, s_len - ((i + algo_name_len) + 1UL),
                        hex_digest, file_name___1);
      }
      return (tmp);
    }
  }
  if (s_len - i < min_digest_line_length + (size_t )((int )*(s + i) == 92)) {
    return ((_Bool)0);
  }
  if ((int )*(s + i) == 92) {
    i ++;
    escaped_filename = (_Bool)1;
  }
  *hex_digest = (unsigned char *)(s + i);
  i += digest_hex_bytes;
  if (! ((int )*(s + i) == 32)) {
    if (! ((int )*(s + i) == 9)) {
      return ((_Bool)0);
    }
  }
  tmp___1 = i;
  i ++;
  *(s + tmp___1) = (char )'\000';
  if ((int )*(s + i) != 32) {
    if ((int )*(s + i) != 42) {
      return ((_Bool)0);
    }
  }
  tmp___2 = i;
  i ++;
  *binary = (int )*(s + tmp___2) == 42;
  *file_name___1 = s + i;
  if (escaped_filename) {
    dst = s + i;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! (i < s_len)) {
        goto while_break___0;
      }
      if ((int )*(s + i) == 92) {
        goto case_92;
      }
      if ((int )*(s + i) == 0) {
        goto case_0;
      }
      goto switch_default___0;
      case_92: 
      if (i == s_len - 1UL) {
        return ((_Bool)0);
      }
      i ++;
      tmp___3 = i;
      i ++;
      if ((int )*(s + tmp___3) == 110) {
        goto case_110;
      }
      if ((int )*(s + tmp___3) == 92) {
        goto case_92___0;
      }
      goto switch_default;
      case_110: 
      tmp___4 = dst;
      dst ++;
      *tmp___4 = (char )'\n';
      goto switch_break___0;
      case_92___0: 
      tmp___5 = dst;
      dst ++;
      *tmp___5 = (char )'\\';
      goto switch_break___0;
      switch_default: 
      return ((_Bool)0);
      switch_break___0: ;
      goto switch_break;
      case_0: 
      return ((_Bool)0);
      goto switch_break;
      switch_default___0: 
      tmp___6 = dst;
      dst ++;
      tmp___7 = i;
      i ++;
      *tmp___6 = *(s + tmp___7);
      goto switch_break;
      switch_break: ;
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: 
    *dst = (char )'\000';
  }
  return ((_Bool)1);
}
}
static _Bool hex_digits(unsigned char const   *s ) 
{ 
  unsigned int i ;
  unsigned short const   **tmp ;

  {
  i = 0U;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((size_t )i < digest_hex_bytes)) {
      goto while_break;
    }
    {
    tmp = __ctype_b_loc();
    }
    if (! ((int const   )*(*tmp + (int )*s) & 4096)) {
      return ((_Bool)0);
    }
    s ++;
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool )((int const   )*s == 0));
}
}
static _Bool digest_file(char const   *filename , int *binary , unsigned char *bin_result ) 
{ 
  FILE *fp ;
  int err ;
  _Bool is_stdin ;
  int tmp ;
  int *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  char *__cil_tmp13 ;

  {
  {
  tmp = strcmp(filename, "-");
  is_stdin = (_Bool )(tmp == 0);
  }
  if (is_stdin) {
    have_read_stdin = (_Bool)1;
    fp = stdin;
  } else {
    {
    fp = fopen_safer(filename, "r");
    }
    if ((unsigned long )fp == (unsigned long )((void *)0)) {
      {
      tmp___2 = __errno_location();
      error(0, *tmp___2, "%s", filename);
      }
      return ((_Bool)0);
    }
  }
  {
  err = md5_stream(fp, (void *)bin_result);
  }
  if (err) {
    {
    tmp___3 = __errno_location();
    error(0, *tmp___3, "%s", filename);
    }
    if ((unsigned long )fp != (unsigned long )stdin) {
      {
      fclose(fp);
      }
    }
    return ((_Bool)0);
  }
  if (! is_stdin) {
    {
    tmp___5 = fclose(fp);
    }
    if (tmp___5 != 0) {
      {
      tmp___4 = __errno_location();
      error(0, *tmp___4, "%s", filename);
      }
      return ((_Bool)0);
    }
  }
  return ((_Bool)1);
}
}
static _Bool digest_check(char const   *checkfile_name ) ;
static char const   bin2hex[16]  = 
  {      (char const   )'0',      (char const   )'1',      (char const   )'2',      (char const   )'3', 
        (char const   )'4',      (char const   )'5',      (char const   )'6',      (char const   )'7', 
        (char const   )'8',      (char const   )'9',      (char const   )'a',      (char const   )'b', 
        (char const   )'c',      (char const   )'d',      (char const   )'e',      (char const   )'f'};
static _Bool digest_check(char const   *checkfile_name ) 
{ 
  FILE *checkfile_stream ;
  uintmax_t n_properly_formatted_lines ;
  uintmax_t n_mismatched_checksums ;
  uintmax_t n_open_or_read_failures ;
  unsigned char bin_buffer_unaligned[20] ;
  unsigned char *bin_buffer ;
  void *tmp ;
  uintmax_t line_number ;
  char *line ;
  size_t line_chars_allocated ;
  _Bool is_stdin ;
  int tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  char *filename ;
  int binary ;
  unsigned char *hex_digest ;
  ssize_t line_length ;
  char *tmp___3 ;
  char *tmp___4 ;
  _Bool ok ;
  char *tmp___5 ;
  size_t digest_bin_bytes ;
  size_t cnt ;
  int tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  _Bool tmp___10 ;
  int tmp___11 ;
  _Bool tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  char *tmp___15 ;
  int tmp___16 ;
  int *tmp___17 ;
  int tmp___18 ;
  char *tmp___19 ;
  unsigned long tmp___20 ;
  char *tmp___21 ;
  uintmax_t n_computed_checksums ;
  unsigned long tmp___22 ;
  char *tmp___23 ;
  int tmp___24 ;
  void *__cil_tmp56 ;
  char *__cil_tmp57 ;
  char *__cil_tmp58 ;
  char *__cil_tmp59 ;
  char *__cil_tmp60 ;
  char *__cil_tmp61 ;
  char *__cil_tmp62 ;
  char *__cil_tmp63 ;
  char *__cil_tmp64 ;
  char *__cil_tmp65 ;

  {
  {
  n_properly_formatted_lines = (uintmax_t )0;
  n_mismatched_checksums = (uintmax_t )0;
  n_open_or_read_failures = (uintmax_t )0;
  tmp = ptr_align((void const   *)(bin_buffer_unaligned), (size_t )4);
  bin_buffer = (unsigned char *)tmp;
  tmp___0 = strcmp(checkfile_name, "-");
  is_stdin = (_Bool )(tmp___0 == 0);
  }
  if (is_stdin) {
    {
    have_read_stdin = (_Bool)1;
    tmp___1 = gettext("standard input");
    checkfile_name = (char const   *)tmp___1;
    checkfile_stream = stdin;
    }
  } else {
    {
    checkfile_stream = fopen_safer(checkfile_name, "r");
    }
    if ((unsigned long )checkfile_stream == (unsigned long )((void *)0)) {
      {
      tmp___2 = __errno_location();
      error(0, *tmp___2, "%s", checkfile_name);
      }
      return ((_Bool)0);
    }
  }
  line_number = (uintmax_t )0;
  line = (char *)((void *)0);
  line_chars_allocated = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    line_number ++;
    if (line_number == 0UL) {
      {
      tmp___3 = gettext("%s: too many checksum lines");
      error(1, 0, (char const   *)tmp___3, checkfile_name);
      }
    }
    {
    line_length = getline((char **/* __restrict  */)(& line), (size_t */* __restrict  */)(& line_chars_allocated),
                          (FILE */* __restrict  */)checkfile_stream);
    }
    if (line_length <= 0L) {
      goto while_break;
    }
    if ((int )*(line + 0) == 35) {
      goto __Cont;
    }
    if ((int )*(line + (line_length - 1L)) == 10) {
      line_length --;
      *(line + line_length) = (char )'\000';
    }
    {
    tmp___10 = split_3(line, (size_t )line_length, & hex_digest, & binary, & filename);
    }
    if (tmp___10) {
      if (is_stdin) {
        {
        tmp___11 = strcmp((char const   *)filename, "-");
        }
        if (tmp___11 == 0) {
          goto _L___0;
        } else {
          goto _L___1;
        }
      } else {
        _L___1: 
        {
        tmp___12 = hex_digits((unsigned char const   *)hex_digest);
        }
        if (tmp___12) {
          {
          n_properly_formatted_lines ++;
          ok = digest_file((char const   *)filename, & binary, bin_buffer);
          }
          if (! ok) {
            n_open_or_read_failures ++;
            if (! status_only) {
              {
              tmp___5 = gettext("%s: FAILED open or read\n");
              printf((char const   */* __restrict  */)((char const   *)tmp___5), filename);
              }
            }
          } else {
            digest_bin_bytes = digest_hex_bytes / 2UL;
            cnt = (size_t )0;
            {
            while (1) {
              while_continue___0: /* CIL Label */ ;

              if (! (cnt < digest_bin_bytes)) {
                goto while_break___0;
              }
              {
              tmp___6 = tolower((int )*(hex_digest + 2UL * cnt));
              }
              if (tmp___6 != (int )bin2hex[(int )*(bin_buffer + cnt) >> 4]) {
                goto while_break___0;
              } else {
                {
                tmp___7 = tolower((int )*(hex_digest + (2UL * cnt + 1UL)));
                }
                if (tmp___7 != (int )bin2hex[(int )*(bin_buffer + cnt) & 15]) {
                  goto while_break___0;
                }
              }
              cnt ++;
            }
            while_break___2: /* CIL Label */ ;
            }
            while_break___0: ;
            if (cnt != digest_bin_bytes) {
              n_mismatched_checksums ++;
            }
            if (! status_only) {
              if (cnt != digest_bin_bytes) {
                {
                tmp___8 = gettext("FAILED");
                printf((char const   */* __restrict  */)"%s: %s\n", filename, tmp___8);
                }
              } else
              if (! quiet) {
                {
                tmp___9 = gettext("OK");
                printf((char const   */* __restrict  */)"%s: %s\n", filename, tmp___9);
                }
              }
            }
          }
        } else {
          goto _L___0;
        }
      }
    } else
    _L___0: 
    if (warn) {
      {
      tmp___4 = gettext("%s: %lu: improperly formatted %s checksum line");
      error(0, 0, (char const   *)tmp___4, checkfile_name, line_number, "MD5");
      }
    }
    __Cont: 
    {
    tmp___13 = feof_unlocked(checkfile_stream);
    }
    if (tmp___13) {
      goto while_break;
    } else {
      {
      tmp___14 = ferror_unlocked(checkfile_stream);
      }
      if (tmp___14) {
        goto while_break;
      }
    }
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: 
  {
  free((void *)line);
  tmp___16 = ferror_unlocked(checkfile_stream);
  }
  if (tmp___16) {
    {
    tmp___15 = gettext("%s: read error");
    error(0, 0, (char const   *)tmp___15, checkfile_name);
    }
    return ((_Bool)0);
  }
  if (! is_stdin) {
    {
    tmp___18 = fclose(checkfile_stream);
    }
    if (tmp___18 != 0) {
      {
      tmp___17 = __errno_location();
      error(0, *tmp___17, "%s", checkfile_name);
      }
      return ((_Bool)0);
    }
  }
  if (n_properly_formatted_lines == 0UL) {
    {
    tmp___19 = gettext("%s: no properly formatted %s checksum lines found");
    error(0, 0, (char const   *)tmp___19, checkfile_name, "MD5");
    }
  } else
  if (! status_only) {
    if (n_open_or_read_failures != 0UL) {
      {
      tmp___20 = select_plural(n_properly_formatted_lines);
      tmp___21 = ngettext("WARNING: %lu of %lu listed file could not be read", "WARNING: %lu of %lu listed files could not be read",
                          tmp___20);
      error(0, 0, (char const   *)tmp___21, n_open_or_read_failures, n_properly_formatted_lines);
      }
    }
    if (n_mismatched_checksums != 0UL) {
      {
      n_computed_checksums = n_properly_formatted_lines - n_open_or_read_failures;
      tmp___22 = select_plural(n_computed_checksums);
      tmp___23 = ngettext("WARNING: %lu of %lu computed checksum did NOT match", "WARNING: %lu of %lu computed checksums did NOT match",
                          tmp___22);
      error(0, 0, (char const   *)tmp___23, n_mismatched_checksums, n_computed_checksums);
      }
    }
  }
  if (n_properly_formatted_lines != 0UL) {
    if (n_mismatched_checksums == 0UL) {
      if (n_open_or_read_failures == 0UL) {
        tmp___24 = 1;
      } else {
        tmp___24 = 0;
      }
    } else {
      tmp___24 = 0;
    }
  } else {
    tmp___24 = 0;
  }
  return ((_Bool )tmp___24);
}
}
int main(int argc , char **argv ) 
{ 
  unsigned char bin_buffer_unaligned[20] ;
  unsigned char *bin_buffer ;
  void *tmp ;
  _Bool do_check ;
  int opt ;
  _Bool ok ;
  int binary ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  char *file ;
  _Bool tmp___5 ;
  int file_is_binary ;
  size_t i ;
  char *tmp___6 ;
  char *tmp___7 ;
  size_t tmp___8 ;
  _Bool tmp___9 ;
  char *tmp___10 ;
  int *tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  void *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char *__cil_tmp41 ;
  char *__cil_tmp42 ;
  char *__cil_tmp43 ;
  char *__cil_tmp44 ;
  char *__cil_tmp45 ;
  char *__cil_tmp46 ;
  char *__cil_tmp47 ;
  char *__cil_tmp48 ;
  char *__cil_tmp49 ;
  char *__cil_tmp50 ;

  {
  {
  tmp = ptr_align((void const   *)(bin_buffer_unaligned), (size_t )4);
  bin_buffer = (unsigned char *)tmp;
  do_check = (_Bool)0;
  ok = (_Bool)1;
  binary = -1;
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  setvbuf((FILE */* __restrict  */)stdout, (char */* __restrict  */)((char *)((void *)0)),
          1, (size_t )0);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    opt = getopt_long(argc, (char * const  *)argv, "bctw", long_options, (int *)((void *)0));
    }
    if (! (opt != -1)) {
      goto while_break;
    }
    if (opt == 98) {
      goto case_98;
    }
    if (opt == 99) {
      goto case_99;
    }
    if (opt == 128) {
      goto case_128;
    }
    if (opt == 116) {
      goto case_116;
    }
    if (opt == 119) {
      goto case_119;
    }
    if (opt == 129) {
      goto case_129;
    }
    if (opt == -130) {
      goto case_neg_130;
    }
    if (opt == -131) {
      goto case_neg_131;
    }
    goto switch_default;
    case_98: 
    binary = 1;
    goto switch_break;
    case_99: 
    do_check = (_Bool)1;
    goto switch_break;
    case_128: 
    status_only = (_Bool)1;
    warn = (_Bool)0;
    quiet = (_Bool)0;
    goto switch_break;
    case_116: 
    binary = 0;
    goto switch_break;
    case_119: 
    status_only = (_Bool)0;
    warn = (_Bool)1;
    quiet = (_Bool)0;
    goto switch_break;
    case_129: 
    status_only = (_Bool)0;
    warn = (_Bool)0;
    quiet = (_Bool)1;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    version_etc(stdout, "md5sum", "GNU coreutils", Version, "Ulrich Drepper", "Scott Miller",
                "David Madore", (char *)((void *)0));
    exit(0);
    }
    goto switch_break;
    switch_default: 
    {
    usage(1);
    }
    switch_break: ;
  }
  while_break___3: /* CIL Label */ ;
  }
  while_break: 
  min_digest_line_length = (size_t )35;
  digest_hex_bytes = (size_t )32;
  if (0 <= binary) {
    if (do_check) {
      {
      tmp___0 = gettext("the --binary and --text options are meaningless when verifying checksums");
      error(0, 0, (char const   *)tmp___0);
      usage(1);
      }
    }
  }
  if (status_only) {
    if (! do_check) {
      {
      tmp___1 = gettext("the --status option is meaningful only when verifying checksums");
      error(0, 0, (char const   *)tmp___1);
      usage(1);
      }
    }
  }
  if (warn) {
    if (! do_check) {
      {
      tmp___2 = gettext("the --warn option is meaningful only when verifying checksums");
      error(0, 0, (char const   *)tmp___2);
      usage(1);
      }
    }
  }
  if (quiet) {
    if (! do_check) {
      {
      tmp___3 = gettext("the --quiet option is meaningful only when verifying checksums");
      error(0, 0, (char const   *)tmp___3);
      usage(1);
      }
    }
  }
  if (binary < 0) {
    binary = 0;
  }
  if (optind == argc) {
    {
    tmp___4 = argc;
    argc ++;
    *(argv + tmp___4) = bad_cast("-");
    }
  }
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! (optind < argc)) {
      goto while_break___0;
    }
    file = *(argv + optind);
    if (do_check) {
      {
      tmp___5 = digest_check((char const   *)file);
      ok = (_Bool )((int )ok & (int )tmp___5);
      }
    } else {
      {
      file_is_binary = binary;
      tmp___9 = digest_file((char const   *)file, & file_is_binary, bin_buffer);
      }
      if (tmp___9) {
        {
        tmp___6 = strchr((char const   *)file, '\n');
        }
        if (tmp___6) {
          {
          putchar_unlocked('\\');
          }
        } else {
          {
          tmp___7 = strchr((char const   *)file, '\\');
          }
          if (tmp___7) {
            {
            putchar_unlocked('\\');
            }
          }
        }
        i = (size_t )0;
        {
        while (1) {
          while_continue___1: /* CIL Label */ ;

          if (! (i < digest_hex_bytes / 2UL)) {
            goto while_break___1;
          }
          {
          printf((char const   */* __restrict  */)"%02x", (int )*(bin_buffer + i));
          i ++;
          }
        }
        while_break___5: /* CIL Label */ ;
        }
        while_break___1: 
        {
        putchar_unlocked(' ');
        }
        if (file_is_binary) {
          {
          putchar_unlocked('*');
          }
        } else {
          {
          putchar_unlocked(' ');
          }
        }
        i = (size_t )0;
        {
        while (1) {
          while_continue___2: /* CIL Label */ ;
          {
          tmp___8 = strlen((char const   *)file);
          }
          if (! (i < tmp___8)) {
            goto while_break___2;
          }
          if ((int )*(file + i) == 10) {
            goto case_10;
          }
          if ((int )*(file + i) == 92) {
            goto case_92;
          }
          goto switch_default___0;
          case_10: 
          {
          fputs_unlocked((char const   */* __restrict  */)"\\n", (FILE */* __restrict  */)stdout);
          }
          goto switch_break___0;
          case_92: 
          {
          fputs_unlocked((char const   */* __restrict  */)"\\\\", (FILE */* __restrict  */)stdout);
          }
          goto switch_break___0;
          switch_default___0: 
          {
          putchar_unlocked((int )*(file + i));
          }
          goto switch_break___0;
          switch_break___0: 
          i ++;
        }
        while_break___6: /* CIL Label */ ;
        }
        while_break___2: 
        {
        putchar_unlocked('\n');
        }
      } else {
        ok = (_Bool)0;
      }
    }
    optind ++;
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break___0: ;
  if (have_read_stdin) {
    {
    tmp___12 = fclose(stdin);
    }
    if (tmp___12 == -1) {
      {
      tmp___10 = gettext("standard input");
      tmp___11 = __errno_location();
      error(1, *tmp___11, (char const   *)tmp___10);
      }
    }
  }
  if (ok) {
    tmp___13 = 0;
  } else {
    tmp___13 = 1;
  }
  {
  exit(tmp___13);
  }
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
void (*argmatch_die)(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) memcmp)(void const   *__s1 ,
                                                                                               void const   *__s2 ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
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
 __attribute__((__noreturn__)) void xalloc_die(void) ;
void *xmalloc(size_t n )  __attribute__((__malloc__)) ;
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
extern int close(int __fd ) ;
extern int fcntl(int __fd , int __cmd  , ...) ;
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
int dup_safer(int fd ) ;
int dup_safer(int fd ) 
{ 
  int tmp ;

  {
  {
  tmp = fcntl(fd, 0, 3);
  }
  return (tmp);
}
}
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) __ctype_get_mb_cur_max)(void) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
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
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) fdopen)(int __fd ,
                                                                               char const   *__modes ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
FILE *fopen_safer(char const   *file , char const   *mode ) 
{ 
  FILE *fp ;
  FILE *tmp ;
  int fd ;
  int tmp___0 ;
  int f ;
  int tmp___1 ;
  int e ;
  int *tmp___2 ;
  int *tmp___3 ;
  int e___0 ;
  int *tmp___4 ;
  int *tmp___5 ;
  int tmp___6 ;

  {
  {
  tmp = fopen((char const   */* __restrict  */)file, (char const   */* __restrict  */)mode);
  fp = tmp;
  }
  if (fp) {
    {
    tmp___0 = fileno(fp);
    fd = tmp___0;
    }
    if (0 <= fd) {
      if (fd <= 2) {
        {
        tmp___1 = dup_safer(fd);
        f = tmp___1;
        }
        if (f < 0) {
          {
          tmp___2 = __errno_location();
          e = *tmp___2;
          fclose(fp);
          tmp___3 = __errno_location();
          *tmp___3 = e;
          }
          return ((FILE *)((void *)0));
        }
        {
        tmp___6 = fclose(fp);
        }
        if (tmp___6 != 0) {
          goto _L;
        } else {
          {
          fp = fdopen(f, mode);
          }
          if (! fp) {
            _L: 
            {
            tmp___4 = __errno_location();
            e___0 = *tmp___4;
            close(f);
            tmp___5 = __errno_location();
            *tmp___5 = e___0;
            }
            return ((FILE *)((void *)0));
          }
        }
      }
    }
  }
  return (fp);
}
}
void version_etc_va(FILE *stream , char const   *command_name , char const   *package ,
                    char const   *version , va_list authors ) ;
unsigned int const   is_basic_table[8]  = {      (unsigned int const   )6656,      (unsigned int const   )4294967279U,      (unsigned int const   )4294967294U,      (unsigned int const   )2147483646};
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswprint)(wint_t __wc ) ;
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size , size_t __n ,
                             FILE * __restrict  __stream ) ;
 __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) md5_init_ctx)(struct md5_ctx *ctx ) ;
 __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) md5_process_block)(void const   *buffer ,
                                                                                  size_t len ,
                                                                                  struct md5_ctx *ctx ) ;
 __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) md5_process_bytes)(void const   *buffer ,
                                                                                  size_t len ,
                                                                                  struct md5_ctx *ctx ) ;
 __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) md5_finish_ctx)(struct md5_ctx *ctx ,
                                                                                void *resbuf ) ;
 __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) md5_read_ctx)(struct md5_ctx  const  *ctx ,
                                                                              void *resbuf ) ;
static unsigned char const   fillbuf[64]  = {      (unsigned char const   )128,      (unsigned char const   )0};
 __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) md5_init_ctx)(struct md5_ctx *ctx ) ;
void ( __attribute__((__leaf__)) md5_init_ctx)(struct md5_ctx *ctx ) 
{ 
  uint32_t tmp ;

  {
  ctx->A = (uint32_t )1732584193;
  ctx->B = 4023233417U;
  ctx->C = 2562383102U;
  ctx->D = (uint32_t )271733878;
  tmp = (uint32_t )0;
  ctx->total[1] = tmp;
  ctx->total[0] = tmp;
  ctx->buflen = (uint32_t )0;
  return;
}
}
__inline static void set_uint32(char *cp , uint32_t v ) 
{ 


  {
  {
  memcpy((void */* __restrict  */)((void *)cp), (void const   */* __restrict  */)((void const   *)(& v)),
         sizeof(v));
  }
  return;
}
}
 __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) md5_read_ctx)(struct md5_ctx  const  *ctx ,
                                                                              void *resbuf ) ;
void *( __attribute__((__leaf__)) md5_read_ctx)(struct md5_ctx  const  *ctx , void *resbuf ) 
{ 
  char *r ;

  {
  {
  r = (char *)resbuf;
  set_uint32(r + 0UL, (uint32_t )ctx->A);
  set_uint32(r + sizeof(ctx->B), (uint32_t )ctx->B);
  set_uint32(r + 2UL * sizeof(ctx->C), (uint32_t )ctx->C);
  set_uint32(r + 3UL * sizeof(ctx->D), (uint32_t )ctx->D);
  }
  return (resbuf);
}
}
 __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) md5_finish_ctx)(struct md5_ctx *ctx ,
                                                                                void *resbuf ) ;
void *( __attribute__((__leaf__)) md5_finish_ctx)(struct md5_ctx *ctx , void *resbuf ) 
{ 
  uint32_t bytes ;
  size_t size ;
  int tmp ;
  void *tmp___0 ;

  {
  bytes = ctx->buflen;
  if (bytes < 56U) {
    tmp = 16;
  } else {
    tmp = 32;
  }
  size = (size_t )tmp;
  ctx->total[0] += bytes;
  if (ctx->total[0] < bytes) {
    (ctx->total[1]) ++;
  }
  {
  ctx->buffer[size - 2UL] = ctx->total[0] << 3;
  ctx->buffer[size - 1UL] = (ctx->total[1] << 3) | (ctx->total[0] >> 29);
  memcpy((void */* __restrict  */)((void *)((char *)(ctx->buffer) + bytes)), (void const   */* __restrict  */)((void const   *)(fillbuf)),
         (size - 2UL) * 4UL - (size_t )bytes);
  md5_process_block((void const   *)(ctx->buffer), size * 4UL, ctx);
  tmp___0 = md5_read_ctx((struct md5_ctx  const  *)ctx, resbuf);
  }
  return (tmp___0);
}
}
 __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) md5_stream)(FILE *stream ,
                                                                          void *resblock ) ;
int ( __attribute__((__leaf__)) md5_stream)(FILE *stream , void *resblock ) 
{ 
  struct md5_ctx ctx ;
  size_t sum ;
  char *buffer ;
  void *tmp ;
  size_t n ;
  int tmp___0 ;
  int tmp___1 ;
  void *__cil_tmp12 ;
  void *__cil_tmp13 ;

  {
  {
  tmp = malloc((size_t )32840);
  buffer = (char *)tmp;
  }
  if (! buffer) {
    return (1);
  }
  {
  md5_init_ctx(& ctx);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    sum = (size_t )0;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      {
      n = fread_unlocked((void */* __restrict  */)((void *)(buffer + sum)), (size_t )1,
                         32768UL - sum, (FILE */* __restrict  */)stream);
      sum += n;
      }
      if (sum == 32768UL) {
        goto while_break___0;
      }
      if (n == 0UL) {
        {
        tmp___0 = ferror_unlocked(stream);
        }
        if (tmp___0) {
          {
          free((void *)buffer);
          }
          return (1);
        }
        goto process_partial_block;
      }
      {
      tmp___1 = feof_unlocked(stream);
      }
      if (tmp___1) {
        goto process_partial_block;
      }
    }
    while_break___1: /* CIL Label */ ;
    }
    while_break___0: 
    {
    md5_process_block((void const   *)buffer, (size_t )32768, & ctx);
    }
  }
  while_break: /* CIL Label */ ;
  }

  process_partial_block: 
  if (sum > 0UL) {
    {
    md5_process_bytes((void const   *)buffer, sum, & ctx);
    }
  }
  {
  md5_finish_ctx(& ctx, resblock);
  free((void *)buffer);
  }
  return (0);
}
}
 __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) md5_process_bytes)(void const   *buffer ,
                                                                                  size_t len ,
                                                                                  struct md5_ctx *ctx ) ;
void ( __attribute__((__leaf__)) md5_process_bytes)(void const   *buffer , size_t len ,
                                                    struct md5_ctx *ctx ) 
{ 
  size_t left_over ;
  size_t add ;
  size_t tmp ;
  void *tmp___0 ;
  size_t left_over___0 ;

  {
  if (ctx->buflen != 0U) {
    left_over = (size_t )ctx->buflen;
    if (128UL - left_over > len) {
      tmp = len;
    } else {
      tmp = 128UL - left_over;
    }
    {
    add = tmp;
    memcpy((void */* __restrict  */)((void *)((char *)(ctx->buffer) + left_over)),
           (void const   */* __restrict  */)buffer, add);
    ctx->buflen = (uint32_t )((size_t )ctx->buflen + add);
    }
    if (ctx->buflen > 64U) {
      {
      md5_process_block((void const   *)(ctx->buffer), (size_t )(ctx->buflen & 4294967232U),
                        ctx);
      ctx->buflen &= 63U;
      memcpy((void */* __restrict  */)((void *)(ctx->buffer)), (void const   */* __restrict  */)((void const   *)((char *)(ctx->buffer) + ((left_over + add) & 0xffffffffffffffc0UL))),
             (size_t )ctx->buflen);
      }
    }
    buffer = (void const   *)((char const   *)buffer + add);
    len -= add;
  }
  if (len >= 64UL) {
    if ((size_t )buffer % (unsigned long )(& ((struct __anonstruct_833865290 *)0)->x) != 0UL) {
      {
      while (1) {
        while_continue: /* CIL Label */ ;

        if (! (len > 64UL)) {
          goto while_break;
        }
        {
        tmp___0 = memcpy((void */* __restrict  */)((void *)(ctx->buffer)), (void const   */* __restrict  */)buffer,
                         (size_t )64);
        md5_process_block((void const   *)tmp___0, (size_t )64, ctx);
        buffer = (void const   *)((char const   *)buffer + 64);
        len -= 64UL;
        }
      }
      while_break___0: /* CIL Label */ ;
      }
      while_break: ;
    } else {
      {
      md5_process_block(buffer, len & 0xffffffffffffffc0UL, ctx);
      buffer = (void const   *)((char const   *)buffer + (len & 0xffffffffffffffc0UL));
      len &= 63UL;
      }
    }
  }
  if (len > 0UL) {
    {
    left_over___0 = (size_t )ctx->buflen;
    memcpy((void */* __restrict  */)((void *)((char *)(ctx->buffer) + left_over___0)),
           (void const   */* __restrict  */)buffer, len);
    left_over___0 += len;
    }
    if (left_over___0 >= 64UL) {
      {
      md5_process_block((void const   *)(ctx->buffer), (size_t )64, ctx);
      left_over___0 -= 64UL;
      memcpy((void */* __restrict  */)((void *)(ctx->buffer)), (void const   */* __restrict  */)((void const   *)(& ctx->buffer[16])),
             left_over___0);
      }
    }
    ctx->buflen = (uint32_t )left_over___0;
  }
  return;
}
}
 __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) md5_process_block)(void const   *buffer ,
                                                                                  size_t len ,
                                                                                  struct md5_ctx *ctx ) ;
void ( __attribute__((__leaf__)) md5_process_block)(void const   *buffer , size_t len ,
                                                    struct md5_ctx *ctx ) 
{ 
  uint32_t correct_words[16] ;
  uint32_t const   *words ;
  size_t nwords ;
  uint32_t const   *endp ;
  uint32_t A ;
  uint32_t B ;
  uint32_t C ;
  uint32_t D ;
  uint32_t *cwp ;
  uint32_t A_save ;
  uint32_t B_save ;
  uint32_t C_save ;
  uint32_t D_save ;
  uint32_t *tmp ;
  uint32_t tmp___0 ;
  uint32_t *tmp___1 ;
  uint32_t tmp___2 ;
  uint32_t *tmp___3 ;
  uint32_t tmp___4 ;
  uint32_t *tmp___5 ;
  uint32_t tmp___6 ;
  uint32_t *tmp___7 ;
  uint32_t tmp___8 ;
  uint32_t *tmp___9 ;
  uint32_t tmp___10 ;
  uint32_t *tmp___11 ;
  uint32_t tmp___12 ;
  uint32_t *tmp___13 ;
  uint32_t tmp___14 ;
  uint32_t *tmp___15 ;
  uint32_t tmp___16 ;
  uint32_t *tmp___17 ;
  uint32_t tmp___18 ;
  uint32_t *tmp___19 ;
  uint32_t tmp___20 ;
  uint32_t *tmp___21 ;
  uint32_t tmp___22 ;
  uint32_t *tmp___23 ;
  uint32_t tmp___24 ;
  uint32_t *tmp___25 ;
  uint32_t tmp___26 ;
  uint32_t *tmp___27 ;
  uint32_t tmp___28 ;
  uint32_t *tmp___29 ;
  uint32_t tmp___30 ;
  void *__cil_tmp50 ;

  {
  words = (uint32_t const   *)buffer;
  nwords = len / sizeof(uint32_t );
  endp = words + nwords;
  A = ctx->A;
  B = ctx->B;
  C = ctx->C;
  D = ctx->D;
  ctx->total[0] = (uint32_t )((size_t )ctx->total[0] + len);
  if ((size_t )ctx->total[0] < len) {
    (ctx->total[1]) ++;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((unsigned long )words < (unsigned long )endp)) {
      goto while_break;
    }
    cwp = correct_words;
    A_save = A;
    B_save = B;
    C_save = C;
    D_save = D;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      tmp = cwp;
      cwp ++;
      tmp___0 = (uint32_t )*words;
      *tmp = tmp___0;
      A += ((D ^ (B & (C ^ D))) + tmp___0) + 3614090360U;
      words ++;
      A = (A << 7) | (A >> 25);
      A += B;
      goto while_break___0;
    }
    while_break___65: /* CIL Label */ ;
    }
    while_break___0: ;
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;
      tmp___1 = cwp;
      cwp ++;
      tmp___2 = (uint32_t )*words;
      *tmp___1 = tmp___2;
      D += ((C ^ (A & (B ^ C))) + tmp___2) + 3905402710U;
      words ++;
      D = (D << 12) | (D >> 20);
      D += A;
      goto while_break___1;
    }
    while_break___66: /* CIL Label */ ;
    }
    while_break___1: ;
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;
      tmp___3 = cwp;
      cwp ++;
      tmp___4 = (uint32_t )*words;
      *tmp___3 = tmp___4;
      C += ((B ^ (D & (A ^ B))) + tmp___4) + 606105819U;
      words ++;
      C = (C << 17) | (C >> 15);
      C += D;
      goto while_break___2;
    }
    while_break___67: /* CIL Label */ ;
    }
    while_break___2: ;
    {
    while (1) {
      while_continue___3: /* CIL Label */ ;
      tmp___5 = cwp;
      cwp ++;
      tmp___6 = (uint32_t )*words;
      *tmp___5 = tmp___6;
      B += ((A ^ (C & (D ^ A))) + tmp___6) + 3250441966U;
      words ++;
      B = (B << 22) | (B >> 10);
      B += C;
      goto while_break___3;
    }
    while_break___68: /* CIL Label */ ;
    }
    while_break___3: ;
    {
    while (1) {
      while_continue___4: /* CIL Label */ ;
      tmp___7 = cwp;
      cwp ++;
      tmp___8 = (uint32_t )*words;
      *tmp___7 = tmp___8;
      A += ((D ^ (B & (C ^ D))) + tmp___8) + 4118548399U;
      words ++;
      A = (A << 7) | (A >> 25);
      A += B;
      goto while_break___4;
    }
    while_break___69: /* CIL Label */ ;
    }
    while_break___4: ;
    {
    while (1) {
      while_continue___5: /* CIL Label */ ;
      tmp___9 = cwp;
      cwp ++;
      tmp___10 = (uint32_t )*words;
      *tmp___9 = tmp___10;
      D += ((C ^ (A & (B ^ C))) + tmp___10) + 1200080426U;
      words ++;
      D = (D << 12) | (D >> 20);
      D += A;
      goto while_break___5;
    }
    while_break___70: /* CIL Label */ ;
    }
    while_break___5: ;
    {
    while (1) {
      while_continue___6: /* CIL Label */ ;
      tmp___11 = cwp;
      cwp ++;
      tmp___12 = (uint32_t )*words;
      *tmp___11 = tmp___12;
      C += ((B ^ (D & (A ^ B))) + tmp___12) + 2821735955U;
      words ++;
      C = (C << 17) | (C >> 15);
      C += D;
      goto while_break___6;
    }
    while_break___71: /* CIL Label */ ;
    }
    while_break___6: ;
    {
    while (1) {
      while_continue___7: /* CIL Label */ ;
      tmp___13 = cwp;
      cwp ++;
      tmp___14 = (uint32_t )*words;
      *tmp___13 = tmp___14;
      B += ((A ^ (C & (D ^ A))) + tmp___14) + 4249261313U;
      words ++;
      B = (B << 22) | (B >> 10);
      B += C;
      goto while_break___7;
    }
    while_break___72: /* CIL Label */ ;
    }
    while_break___7: ;
    {
    while (1) {
      while_continue___8: /* CIL Label */ ;
      tmp___15 = cwp;
      cwp ++;
      tmp___16 = (uint32_t )*words;
      *tmp___15 = tmp___16;
      A += ((D ^ (B & (C ^ D))) + tmp___16) + 1770035416U;
      words ++;
      A = (A << 7) | (A >> 25);
      A += B;
      goto while_break___8;
    }
    while_break___73: /* CIL Label */ ;
    }
    while_break___8: ;
    {
    while (1) {
      while_continue___9: /* CIL Label */ ;
      tmp___17 = cwp;
      cwp ++;
      tmp___18 = (uint32_t )*words;
      *tmp___17 = tmp___18;
      D += ((C ^ (A & (B ^ C))) + tmp___18) + 2336552879U;
      words ++;
      D = (D << 12) | (D >> 20);
      D += A;
      goto while_break___9;
    }
    while_break___74: /* CIL Label */ ;
    }
    while_break___9: ;
    {
    while (1) {
      while_continue___10: /* CIL Label */ ;
      tmp___19 = cwp;
      cwp ++;
      tmp___20 = (uint32_t )*words;
      *tmp___19 = tmp___20;
      C += ((B ^ (D & (A ^ B))) + tmp___20) + 4294925233U;
      words ++;
      C = (C << 17) | (C >> 15);
      C += D;
      goto while_break___10;
    }
    while_break___75: /* CIL Label */ ;
    }
    while_break___10: ;
    {
    while (1) {
      while_continue___11: /* CIL Label */ ;
      tmp___21 = cwp;
      cwp ++;
      tmp___22 = (uint32_t )*words;
      *tmp___21 = tmp___22;
      B += ((A ^ (C & (D ^ A))) + tmp___22) + 2304563134U;
      words ++;
      B = (B << 22) | (B >> 10);
      B += C;
      goto while_break___11;
    }
    while_break___76: /* CIL Label */ ;
    }
    while_break___11: ;
    {
    while (1) {
      while_continue___12: /* CIL Label */ ;
      tmp___23 = cwp;
      cwp ++;
      tmp___24 = (uint32_t )*words;
      *tmp___23 = tmp___24;
      A += ((D ^ (B & (C ^ D))) + tmp___24) + 1804603682U;
      words ++;
      A = (A << 7) | (A >> 25);
      A += B;
      goto while_break___12;
    }
    while_break___77: /* CIL Label */ ;
    }
    while_break___12: ;
    {
    while (1) {
      while_continue___13: /* CIL Label */ ;
      tmp___25 = cwp;
      cwp ++;
      tmp___26 = (uint32_t )*words;
      *tmp___25 = tmp___26;
      D += ((C ^ (A & (B ^ C))) + tmp___26) + 4254626195U;
      words ++;
      D = (D << 12) | (D >> 20);
      D += A;
      goto while_break___13;
    }
    while_break___78: /* CIL Label */ ;
    }
    while_break___13: ;
    {
    while (1) {
      while_continue___14: /* CIL Label */ ;
      tmp___27 = cwp;
      cwp ++;
      tmp___28 = (uint32_t )*words;
      *tmp___27 = tmp___28;
      C += ((B ^ (D & (A ^ B))) + tmp___28) + 2792965006U;
      words ++;
      C = (C << 17) | (C >> 15);
      C += D;
      goto while_break___14;
    }
    while_break___79: /* CIL Label */ ;
    }
    while_break___14: ;
    {
    while (1) {
      while_continue___15: /* CIL Label */ ;
      tmp___29 = cwp;
      cwp ++;
      tmp___30 = (uint32_t )*words;
      *tmp___29 = tmp___30;
      B += ((A ^ (C & (D ^ A))) + tmp___30) + 1236535329U;
      words ++;
      B = (B << 22) | (B >> 10);
      B += C;
      goto while_break___15;
    }
    while_break___80: /* CIL Label */ ;
    }
    while_break___15: ;
    {
    while (1) {
      while_continue___16: /* CIL Label */ ;
      A += ((C ^ (D & (B ^ C))) + correct_words[1]) + 4129170786U;
      A = (A << 5) | (A >> 27);
      A += B;
      goto while_break___16;
    }
    while_break___81: /* CIL Label */ ;
    }
    while_break___16: ;
    {
    while (1) {
      while_continue___17: /* CIL Label */ ;
      D += ((B ^ (C & (A ^ B))) + correct_words[6]) + 3225465664U;
      D = (D << 9) | (D >> 23);
      D += A;
      goto while_break___17;
    }
    while_break___82: /* CIL Label */ ;
    }
    while_break___17: ;
    {
    while (1) {
      while_continue___18: /* CIL Label */ ;
      C += ((A ^ (B & (D ^ A))) + correct_words[11]) + 643717713U;
      C = (C << 14) | (C >> 18);
      C += D;
      goto while_break___18;
    }
    while_break___83: /* CIL Label */ ;
    }
    while_break___18: ;
    {
    while (1) {
      while_continue___19: /* CIL Label */ ;
      B += ((D ^ (A & (C ^ D))) + correct_words[0]) + 3921069994U;
      B = (B << 20) | (B >> 12);
      B += C;
      goto while_break___19;
    }
    while_break___84: /* CIL Label */ ;
    }
    while_break___19: ;
    {
    while (1) {
      while_continue___20: /* CIL Label */ ;
      A += ((C ^ (D & (B ^ C))) + correct_words[5]) + 3593408605U;
      A = (A << 5) | (A >> 27);
      A += B;
      goto while_break___20;
    }
    while_break___85: /* CIL Label */ ;
    }
    while_break___20: ;
    {
    while (1) {
      while_continue___21: /* CIL Label */ ;
      D += ((B ^ (C & (A ^ B))) + correct_words[10]) + 38016083U;
      D = (D << 9) | (D >> 23);
      D += A;
      goto while_break___21;
    }
    while_break___86: /* CIL Label */ ;
    }
    while_break___21: ;
    {
    while (1) {
      while_continue___22: /* CIL Label */ ;
      C += ((A ^ (B & (D ^ A))) + correct_words[15]) + 3634488961U;
      C = (C << 14) | (C >> 18);
      C += D;
      goto while_break___22;
    }
    while_break___87: /* CIL Label */ ;
    }
    while_break___22: ;
    {
    while (1) {
      while_continue___23: /* CIL Label */ ;
      B += ((D ^ (A & (C ^ D))) + correct_words[4]) + 3889429448U;
      B = (B << 20) | (B >> 12);
      B += C;
      goto while_break___23;
    }
    while_break___88: /* CIL Label */ ;
    }
    while_break___23: ;
    {
    while (1) {
      while_continue___24: /* CIL Label */ ;
      A += ((C ^ (D & (B ^ C))) + correct_words[9]) + 568446438U;
      A = (A << 5) | (A >> 27);
      A += B;
      goto while_break___24;
    }
    while_break___89: /* CIL Label */ ;
    }
    while_break___24: ;
    {
    while (1) {
      while_continue___25: /* CIL Label */ ;
      D += ((B ^ (C & (A ^ B))) + correct_words[14]) + 3275163606U;
      D = (D << 9) | (D >> 23);
      D += A;
      goto while_break___25;
    }
    while_break___90: /* CIL Label */ ;
    }
    while_break___25: ;
    {
    while (1) {
      while_continue___26: /* CIL Label */ ;
      C += ((A ^ (B & (D ^ A))) + correct_words[3]) + 4107603335U;
      C = (C << 14) | (C >> 18);
      C += D;
      goto while_break___26;
    }
    while_break___91: /* CIL Label */ ;
    }
    while_break___26: ;
    {
    while (1) {
      while_continue___27: /* CIL Label */ ;
      B += ((D ^ (A & (C ^ D))) + correct_words[8]) + 1163531501U;
      B = (B << 20) | (B >> 12);
      B += C;
      goto while_break___27;
    }
    while_break___92: /* CIL Label */ ;
    }
    while_break___27: ;
    {
    while (1) {
      while_continue___28: /* CIL Label */ ;
      A += ((C ^ (D & (B ^ C))) + correct_words[13]) + 2850285829U;
      A = (A << 5) | (A >> 27);
      A += B;
      goto while_break___28;
    }
    while_break___93: /* CIL Label */ ;
    }
    while_break___28: ;
    {
    while (1) {
      while_continue___29: /* CIL Label */ ;
      D += ((B ^ (C & (A ^ B))) + correct_words[2]) + 4243563512U;
      D = (D << 9) | (D >> 23);
      D += A;
      goto while_break___29;
    }
    while_break___94: /* CIL Label */ ;
    }
    while_break___29: ;
    {
    while (1) {
      while_continue___30: /* CIL Label */ ;
      C += ((A ^ (B & (D ^ A))) + correct_words[7]) + 1735328473U;
      C = (C << 14) | (C >> 18);
      C += D;
      goto while_break___30;
    }
    while_break___95: /* CIL Label */ ;
    }
    while_break___30: ;
    {
    while (1) {
      while_continue___31: /* CIL Label */ ;
      B += ((D ^ (A & (C ^ D))) + correct_words[12]) + 2368359562U;
      B = (B << 20) | (B >> 12);
      B += C;
      goto while_break___31;
    }
    while_break___96: /* CIL Label */ ;
    }
    while_break___31: ;
    {
    while (1) {
      while_continue___32: /* CIL Label */ ;
      A += (((B ^ C) ^ D) + correct_words[5]) + 4294588738U;
      A = (A << 4) | (A >> 28);
      A += B;
      goto while_break___32;
    }
    while_break___97: /* CIL Label */ ;
    }
    while_break___32: ;
    {
    while (1) {
      while_continue___33: /* CIL Label */ ;
      D += (((A ^ B) ^ C) + correct_words[8]) + 2272392833U;
      D = (D << 11) | (D >> 21);
      D += A;
      goto while_break___33;
    }
    while_break___98: /* CIL Label */ ;
    }
    while_break___33: ;
    {
    while (1) {
      while_continue___34: /* CIL Label */ ;
      C += (((D ^ A) ^ B) + correct_words[11]) + 1839030562U;
      C = (C << 16) | (C >> 16);
      C += D;
      goto while_break___34;
    }
    while_break___99: /* CIL Label */ ;
    }
    while_break___34: ;
    {
    while (1) {
      while_continue___35: /* CIL Label */ ;
      B += (((C ^ D) ^ A) + correct_words[14]) + 4259657740U;
      B = (B << 23) | (B >> 9);
      B += C;
      goto while_break___35;
    }
    while_break___100: /* CIL Label */ ;
    }
    while_break___35: ;
    {
    while (1) {
      while_continue___36: /* CIL Label */ ;
      A += (((B ^ C) ^ D) + correct_words[1]) + 2763975236U;
      A = (A << 4) | (A >> 28);
      A += B;
      goto while_break___36;
    }
    while_break___101: /* CIL Label */ ;
    }
    while_break___36: ;
    {
    while (1) {
      while_continue___37: /* CIL Label */ ;
      D += (((A ^ B) ^ C) + correct_words[4]) + 1272893353U;
      D = (D << 11) | (D >> 21);
      D += A;
      goto while_break___37;
    }
    while_break___102: /* CIL Label */ ;
    }
    while_break___37: ;
    {
    while (1) {
      while_continue___38: /* CIL Label */ ;
      C += (((D ^ A) ^ B) + correct_words[7]) + 4139469664U;
      C = (C << 16) | (C >> 16);
      C += D;
      goto while_break___38;
    }
    while_break___103: /* CIL Label */ ;
    }
    while_break___38: ;
    {
    while (1) {
      while_continue___39: /* CIL Label */ ;
      B += (((C ^ D) ^ A) + correct_words[10]) + 3200236656U;
      B = (B << 23) | (B >> 9);
      B += C;
      goto while_break___39;
    }
    while_break___104: /* CIL Label */ ;
    }
    while_break___39: ;
    {
    while (1) {
      while_continue___40: /* CIL Label */ ;
      A += (((B ^ C) ^ D) + correct_words[13]) + 681279174U;
      A = (A << 4) | (A >> 28);
      A += B;
      goto while_break___40;
    }
    while_break___105: /* CIL Label */ ;
    }
    while_break___40: ;
    {
    while (1) {
      while_continue___41: /* CIL Label */ ;
      D += (((A ^ B) ^ C) + correct_words[0]) + 3936430074U;
      D = (D << 11) | (D >> 21);
      D += A;
      goto while_break___41;
    }
    while_break___106: /* CIL Label */ ;
    }
    while_break___41: ;
    {
    while (1) {
      while_continue___42: /* CIL Label */ ;
      C += (((D ^ A) ^ B) + correct_words[3]) + 3572445317U;
      C = (C << 16) | (C >> 16);
      C += D;
      goto while_break___42;
    }
    while_break___107: /* CIL Label */ ;
    }
    while_break___42: ;
    {
    while (1) {
      while_continue___43: /* CIL Label */ ;
      B += (((C ^ D) ^ A) + correct_words[6]) + 76029189U;
      B = (B << 23) | (B >> 9);
      B += C;
      goto while_break___43;
    }
    while_break___108: /* CIL Label */ ;
    }
    while_break___43: ;
    {
    while (1) {
      while_continue___44: /* CIL Label */ ;
      A += (((B ^ C) ^ D) + correct_words[9]) + 3654602809U;
      A = (A << 4) | (A >> 28);
      A += B;
      goto while_break___44;
    }
    while_break___109: /* CIL Label */ ;
    }
    while_break___44: ;
    {
    while (1) {
      while_continue___45: /* CIL Label */ ;
      D += (((A ^ B) ^ C) + correct_words[12]) + 3873151461U;
      D = (D << 11) | (D >> 21);
      D += A;
      goto while_break___45;
    }
    while_break___110: /* CIL Label */ ;
    }
    while_break___45: ;
    {
    while (1) {
      while_continue___46: /* CIL Label */ ;
      C += (((D ^ A) ^ B) + correct_words[15]) + 530742520U;
      C = (C << 16) | (C >> 16);
      C += D;
      goto while_break___46;
    }
    while_break___111: /* CIL Label */ ;
    }
    while_break___46: ;
    {
    while (1) {
      while_continue___47: /* CIL Label */ ;
      B += (((C ^ D) ^ A) + correct_words[2]) + 3299628645U;
      B = (B << 23) | (B >> 9);
      B += C;
      goto while_break___47;
    }
    while_break___112: /* CIL Label */ ;
    }
    while_break___47: ;
    {
    while (1) {
      while_continue___48: /* CIL Label */ ;
      A += ((C ^ (B | ~ D)) + correct_words[0]) + 4096336452U;
      A = (A << 6) | (A >> 26);
      A += B;
      goto while_break___48;
    }
    while_break___113: /* CIL Label */ ;
    }
    while_break___48: ;
    {
    while (1) {
      while_continue___49: /* CIL Label */ ;
      D += ((B ^ (A | ~ C)) + correct_words[7]) + 1126891415U;
      D = (D << 10) | (D >> 22);
      D += A;
      goto while_break___49;
    }
    while_break___114: /* CIL Label */ ;
    }
    while_break___49: ;
    {
    while (1) {
      while_continue___50: /* CIL Label */ ;
      C += ((A ^ (D | ~ B)) + correct_words[14]) + 2878612391U;
      C = (C << 15) | (C >> 17);
      C += D;
      goto while_break___50;
    }
    while_break___115: /* CIL Label */ ;
    }
    while_break___50: ;
    {
    while (1) {
      while_continue___51: /* CIL Label */ ;
      B += ((D ^ (C | ~ A)) + correct_words[5]) + 4237533241U;
      B = (B << 21) | (B >> 11);
      B += C;
      goto while_break___51;
    }
    while_break___116: /* CIL Label */ ;
    }
    while_break___51: ;
    {
    while (1) {
      while_continue___52: /* CIL Label */ ;
      A += ((C ^ (B | ~ D)) + correct_words[12]) + 1700485571U;
      A = (A << 6) | (A >> 26);
      A += B;
      goto while_break___52;
    }
    while_break___117: /* CIL Label */ ;
    }
    while_break___52: ;
    {
    while (1) {
      while_continue___53: /* CIL Label */ ;
      D += ((B ^ (A | ~ C)) + correct_words[3]) + 2399980690U;
      D = (D << 10) | (D >> 22);
      D += A;
      goto while_break___53;
    }
    while_break___118: /* CIL Label */ ;
    }
    while_break___53: ;
    {
    while (1) {
      while_continue___54: /* CIL Label */ ;
      C += ((A ^ (D | ~ B)) + correct_words[10]) + 4293915773U;
      C = (C << 15) | (C >> 17);
      C += D;
      goto while_break___54;
    }
    while_break___119: /* CIL Label */ ;
    }
    while_break___54: ;
    {
    while (1) {
      while_continue___55: /* CIL Label */ ;
      B += ((D ^ (C | ~ A)) + correct_words[1]) + 2240044497U;
      B = (B << 21) | (B >> 11);
      B += C;
      goto while_break___55;
    }
    while_break___120: /* CIL Label */ ;
    }
    while_break___55: ;
    {
    while (1) {
      while_continue___56: /* CIL Label */ ;
      A += ((C ^ (B | ~ D)) + correct_words[8]) + 1873313359U;
      A = (A << 6) | (A >> 26);
      A += B;
      goto while_break___56;
    }
    while_break___121: /* CIL Label */ ;
    }
    while_break___56: ;
    {
    while (1) {
      while_continue___57: /* CIL Label */ ;
      D += ((B ^ (A | ~ C)) + correct_words[15]) + 4264355552U;
      D = (D << 10) | (D >> 22);
      D += A;
      goto while_break___57;
    }
    while_break___122: /* CIL Label */ ;
    }
    while_break___57: ;
    {
    while (1) {
      while_continue___58: /* CIL Label */ ;
      C += ((A ^ (D | ~ B)) + correct_words[6]) + 2734768916U;
      C = (C << 15) | (C >> 17);
      C += D;
      goto while_break___58;
    }
    while_break___123: /* CIL Label */ ;
    }
    while_break___58: ;
    {
    while (1) {
      while_continue___59: /* CIL Label */ ;
      B += ((D ^ (C | ~ A)) + correct_words[13]) + 1309151649U;
      B = (B << 21) | (B >> 11);
      B += C;
      goto while_break___59;
    }
    while_break___124: /* CIL Label */ ;
    }
    while_break___59: ;
    {
    while (1) {
      while_continue___60: /* CIL Label */ ;
      A += ((C ^ (B | ~ D)) + correct_words[4]) + 4149444226U;
      A = (A << 6) | (A >> 26);
      A += B;
      goto while_break___60;
    }
    while_break___125: /* CIL Label */ ;
    }
    while_break___60: ;
    {
    while (1) {
      while_continue___61: /* CIL Label */ ;
      D += ((B ^ (A | ~ C)) + correct_words[11]) + 3174756917U;
      D = (D << 10) | (D >> 22);
      D += A;
      goto while_break___61;
    }
    while_break___126: /* CIL Label */ ;
    }
    while_break___61: ;
    {
    while (1) {
      while_continue___62: /* CIL Label */ ;
      C += ((A ^ (D | ~ B)) + correct_words[2]) + 718787259U;
      C = (C << 15) | (C >> 17);
      C += D;
      goto while_break___62;
    }
    while_break___127: /* CIL Label */ ;
    }
    while_break___62: ;
    {
    while (1) {
      while_continue___63: /* CIL Label */ ;
      B += ((D ^ (C | ~ A)) + correct_words[9]) + 3951481745U;
      B = (B << 21) | (B >> 11);
      B += C;
      goto while_break___63;
    }
    while_break___128: /* CIL Label */ ;
    }
    while_break___63: 
    A += A_save;
    B += B_save;
    C += C_save;
    D += D_save;
  }
  while_break___64: /* CIL Label */ ;
  }
  while_break: 
  ctx->A = A;
  ctx->B = B;
  ctx->C = C;
  ctx->D = D;
  return;
}
}
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
char const   *Version  =    "8.1";
