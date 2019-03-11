typedef unsigned long size_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_523308800 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_523308800 __mbstate_t;
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
typedef __off_t off_t;
struct obstack;
struct obstack;
struct obstack;
typedef long ptrdiff_t;
typedef int wchar_t;
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
};
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct stat {
   __dev_t st_dev ;
   __ino_t st_ino ;
   __nlink_t st_nlink ;
   __mode_t st_mode ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   int __pad0 ;
   __dev_t st_rdev ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __syscall_slong_t __glibc_reserved[3] ;
};
typedef unsigned long uintmax_t;
struct argv_iterator;
struct argv_iterator;
struct argv_iterator;
enum argv_iter_err;
enum argv_iter_err;
enum argv_iter_err;
enum argv_iter_err {
    AI_ERR_OK = 1,
    AI_ERR_EOF = 2,
    AI_ERR_MEM = 3,
    AI_ERR_READ = 4
} ;
struct _obstack_chunk {
   char *limit ;
   struct _obstack_chunk *prev ;
   char contents[4] ;
};
union __anonunion_temp_267926141 {
   long tempint ;
   void *tempptr ;
};
struct obstack {
   long chunk_size ;
   struct _obstack_chunk *chunk ;
   char *object_base ;
   char *next_free ;
   char *chunk_limit ;
   union __anonunion_temp_267926141 temp ;
   int alignment_mask ;
   struct _obstack_chunk *(*chunkfun)(void * , long  ) ;
   void (*freefun)(void * , struct _obstack_chunk * ) ;
   void *extra_arg ;
   unsigned int use_extra_arg : 1 ;
   unsigned int maybe_empty_object : 1 ;
   unsigned int alloc_failed : 1 ;
};
struct Tokens {
   size_t n_tok ;
   char **tok ;
   size_t *tok_len ;
   struct obstack o_data ;
   struct obstack o_tok ;
   struct obstack o_tok_len ;
};
struct fstatus {
   int failed ;
   struct stat st ;
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
enum argv_iter_err;
struct argv_iterator {
   FILE *fp ;
   size_t item_idx ;
   char *tok ;
   size_t buf_len ;
   char **arg_list ;
   char **p ;
};
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
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
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fclose(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) __assert_fail)(char const   *__assertion ,
                                                                                                   char const   *__file ,
                                                                                                   unsigned int __line ,
                                                                                                   char const   *__function ) ;
extern char *optarg ;
extern int optind ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) mbsinit)(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) mbrtowc)(wchar_t * __restrict  __pwc ,
                                                                                 char const   * __restrict  __s ,
                                                                                 size_t __n ,
                                                                                 mbstate_t * __restrict  __p ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) wcwidth)(wchar_t __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswprint)(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswspace)(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) stat)(char const   * __restrict  __file ,
                                                                                             struct stat * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd ,
                                                                                            struct stat *__buf ) ;
extern  __attribute__((__nothrow__)) __off_t ( __attribute__((__leaf__)) lseek)(int __fd ,
                                                                                __off_t __offset ,
                                                                                int __whence ) ;
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) __ctype_get_mb_cur_max)(void) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memmove)(void *__dest ,
                                                                                                  void const   *__src ,
                                                                                                  size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memchr)(void const   *__s ,
                                                                                               int __c ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file , int __oflag 
                                                   , ...) ;
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
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
char *( __attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i , char *buf___0 ) ;
 __attribute__((__noreturn__)) void usage(int status ) ;
struct argv_iterator *( __attribute__((__nonnull__(1))) argv_iter_init_argv)(char **argv ) ;
struct argv_iterator *( __attribute__((__nonnull__(1))) argv_iter_init_stream)(FILE *fp ) ;
char *( __attribute__((__nonnull__(2), __nonnull__(1))) argv_iter)(struct argv_iterator *ai ,
                                                                   enum argv_iter_err *err ) ;
size_t ( __attribute__((__nonnull__(1))) argv_iter_n_args)(struct argv_iterator  const  *ai ) ;
void ( __attribute__((__nonnull__(1))) argv_iter_free)(struct argv_iterator *ai ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
unsigned int const   is_basic_table[8] ;
__inline static _Bool is_basic(char c ) 
{ 


  {
  return ((_Bool )((is_basic_table[(int )((unsigned char )c) >> 5] >> ((int )((unsigned char )c) & 31)) & 1U));
}
}
double physmem_available(void) ;
char const   *quote(char const   *name ) ;
char *quotearg_colon(char const   *arg ) ;
void readtokens0_init(struct Tokens *t ) ;
void readtokens0_free(struct Tokens *t ) ;
_Bool readtokens0(FILE *in , struct Tokens *t ) ;
size_t safe_read(int fd , void *buf___0 , size_t count ) ;
static uintmax_t total_lines  ;
static uintmax_t total_words  ;
static uintmax_t total_chars  ;
static uintmax_t total_bytes  ;
static uintmax_t max_line_length  ;
static _Bool print_lines  ;
static _Bool print_words  ;
static _Bool print_chars  ;
static _Bool print_bytes  ;
static _Bool print_linelength  ;
static int number_width  ;
static _Bool have_read_stdin  ;
static struct option  const  longopts[9]  = 
  {      {"bytes", 0, (int *)((void *)0), 'c'}, 
        {"chars", 0, (int *)((void *)0), 'm'}, 
        {"lines", 0, (int *)((void *)0), 'l'}, 
        {"words", 0, (int *)((void *)0), 'w'}, 
        {"files0-from", 1, (int *)((void *)0), 128}, 
        {"max-line-length", 0, (int *)((void *)0), 'L'}, 
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
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;

  {
  if (status != 0) {
    {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)tmp),
            program_name);
    }
  } else {
    {
    tmp___0 = gettext("Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name,
           program_name);
    tmp___1 = gettext("Print newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified.  With no FILE, or when FILE is -,\nread standard input.\n  -c, --bytes            print the byte counts\n  -m, --chars            print the character counts\n  -l, --lines            print the newline counts\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___1), (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("      --files0-from=F    read input from the files specified by\n                           NUL-terminated names in file F;\n                           If F is - then read names from standard input\n  -L, --max-line-length  print the length of the longest line\n  -w, --words            print the word counts\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
    }
  }
  {
  exit(status);
  }
}
}
static void write_counts(uintmax_t lines , uintmax_t words , uintmax_t chars , uintmax_t bytes ,
                         uintmax_t linelength , char const   *file ) ;
static char const   format_sp_int[5]  = {      (char const   )' ',      (char const   )'%',      (char const   )'*',      (char const   )'s', 
        (char const   )'\000'};
static void write_counts(uintmax_t lines , uintmax_t words , uintmax_t chars , uintmax_t bytes ,
                         uintmax_t linelength , char const   *file ) 
{ 
  char const   *format_int ;
  char buf___0[(((sizeof(uintmax_t ) * 8UL) * 146UL) / 485UL + 1UL) + 1UL] ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  void *__cil_tmp15 ;

  {
  format_int = format_sp_int + 1;
  if (print_lines) {
    {
    tmp = umaxtostr(lines, buf___0);
    printf((char const   */* __restrict  */)format_int, number_width, tmp);
    format_int = format_sp_int;
    }
  }
  if (print_words) {
    {
    tmp___0 = umaxtostr(words, buf___0);
    printf((char const   */* __restrict  */)format_int, number_width, tmp___0);
    format_int = format_sp_int;
    }
  }
  if (print_chars) {
    {
    tmp___1 = umaxtostr(chars, buf___0);
    printf((char const   */* __restrict  */)format_int, number_width, tmp___1);
    format_int = format_sp_int;
    }
  }
  if (print_bytes) {
    {
    tmp___2 = umaxtostr(bytes, buf___0);
    printf((char const   */* __restrict  */)format_int, number_width, tmp___2);
    format_int = format_sp_int;
    }
  }
  if (print_linelength) {
    {
    tmp___3 = umaxtostr(linelength, buf___0);
    printf((char const   */* __restrict  */)format_int, number_width, tmp___3);
    }
  }
  if (file) {
    {
    printf((char const   */* __restrict  */)" %s", file);
    }
  }
  {
  putchar_unlocked('\n');
  }
  return;
}
}
static _Bool wc(int fd , char const   *file_x , struct fstatus *fstatus ) 
{ 
  _Bool ok ;
  char buf___0[16385] ;
  size_t bytes_read ;
  uintmax_t lines ;
  uintmax_t words ;
  uintmax_t chars ;
  uintmax_t bytes ;
  uintmax_t linelength ;
  _Bool count_bytes ;
  _Bool count_chars ;
  _Bool count_complicated ;
  char const   *file ;
  char *tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;
  int tmp___3 ;
  off_t current_pos ;
  off_t end_pos ;
  int *tmp___4 ;
  char *p ;
  int *tmp___5 ;
  void *tmp___6 ;
  _Bool in_word ;
  uintmax_t linepos ;
  mbstate_t state ;
  _Bool in_shift ;
  size_t prev ;
  char const   *p___0 ;
  mbstate_t backup_state ;
  int *tmp___7 ;
  wchar_t wide_char ;
  size_t n ;
  int tmp___8 ;
  _Bool tmp___9 ;
  int width ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  _Bool in_word___0 ;
  uintmax_t linepos___0 ;
  char const   *p___1 ;
  int *tmp___13 ;
  char const   *tmp___14 ;
  unsigned short const   **tmp___15 ;
  unsigned char tmp___16 ;
  unsigned short const   **tmp___17 ;
  unsigned char tmp___18 ;
  size_t tmp___19 ;
  void *__cil_tmp57 ;
  void *__cil_tmp58 ;
  void *__cil_tmp59 ;
  char *__cil_tmp60 ;

  {
  ok = (_Bool)1;
  if (file_x) {
    tmp___0 = file_x;
  } else {
    {
    tmp = gettext("standard input");
    tmp___0 = (char const   *)tmp;
    }
  }
  {
  file = tmp___0;
  linelength = (uintmax_t )0;
  bytes = linelength;
  chars = bytes;
  words = chars;
  lines = words;
  tmp___2 = __ctype_get_mb_cur_max();
  }
  if (tmp___2 > 1UL) {
    count_bytes = print_bytes;
    count_chars = print_chars;
  } else {
    if (print_bytes) {
      tmp___1 = 1;
    } else
    if (print_chars) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
    count_bytes = (_Bool )tmp___1;
    count_chars = (_Bool)0;
  }
  if (print_words) {
    tmp___3 = 1;
  } else
  if (print_linelength) {
    tmp___3 = 1;
  } else {
    tmp___3 = 0;
  }
  count_complicated = (_Bool )tmp___3;
  if (count_bytes) {
    if (! count_chars) {
      if (! print_lines) {
        if (! count_complicated) {
          if (0 < fstatus->failed) {
            {
            fstatus->failed = fstat(fd, & fstatus->st);
            }
          }
          if (! fstatus->failed) {
            if ((fstatus->st.st_mode & 61440U) == 32768U) {
              {
              current_pos = lseek(fd, (off_t )0, 1);
              }
              if (current_pos != -1L) {
                {
                end_pos = lseek(fd, (off_t )0, 2);
                }
                if (end_pos != -1L) {
                  if (end_pos < current_pos) {
                    bytes = (uintmax_t )0;
                  } else {
                    bytes = (uintmax_t )(end_pos - current_pos);
                  }
                } else {
                  goto _L___1;
                }
              } else {
                goto _L___1;
              }
            } else {
              goto _L___1;
            }
          } else {
            _L___1: 
            {
            while (1) {
              while_continue: /* CIL Label */ ;
              {
              bytes_read = safe_read(fd, (void *)(buf___0), (size_t )16384);
              }
              if (! (bytes_read > 0UL)) {
                goto while_break;
              }
              if (bytes_read == 0xffffffffffffffffUL) {
                {
                tmp___4 = __errno_location();
                error(0, *tmp___4, "%s", file);
                ok = (_Bool)0;
                }
                goto while_break;
              }
              bytes += bytes_read;
            }
            while_break___6: /* CIL Label */ ;
            }
            while_break: ;
          }
        } else {
          goto _L___6;
        }
      } else {
        goto _L___6;
      }
    } else {
      goto _L___6;
    }
  } else
  _L___6: 
  if (! count_chars) {
    if (! count_complicated) {
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;
        {
        bytes_read = safe_read(fd, (void *)(buf___0), (size_t )16384);
        }
        if (! (bytes_read > 0UL)) {
          goto while_break___0;
        }
        p = buf___0;
        if (bytes_read == 0xffffffffffffffffUL) {
          {
          tmp___5 = __errno_location();
          error(0, *tmp___5, "%s", file);
          ok = (_Bool)0;
          }
          goto while_break___0;
        }
        {
        while (1) {
          while_continue___1: /* CIL Label */ ;
          {
          tmp___6 = memchr((void const   *)p, '\n', (size_t )((buf___0 + bytes_read) - p));
          p = (char *)tmp___6;
          }
          if (! p) {
            goto while_break___1;
          }
          p ++;
          lines ++;
        }
        while_break___8: /* CIL Label */ ;
        }
        while_break___1: 
        bytes += bytes_read;
      }
      while_break___7: /* CIL Label */ ;
      }
      while_break___0: ;
    } else {
      goto _L___3;
    }
  } else {
    _L___3: 
    {
    tmp___19 = __ctype_get_mb_cur_max();
    }
    if (tmp___19 > 1UL) {
      in_word = (_Bool)0;
      linepos = (uintmax_t )0;
      state.__count = 0;
      state.__value.__wch = 0U;
      in_shift = (_Bool)0;
      prev = (size_t )0;
      {
      while (1) {
        while_continue___2: /* CIL Label */ ;
        {
        bytes_read = safe_read(fd, (void *)(buf___0 + prev), 16384UL - prev);
        }
        if (! (bytes_read > 0UL)) {
          goto while_break___2;
        }
        if (bytes_read == 0xffffffffffffffffUL) {
          {
          tmp___7 = __errno_location();
          error(0, *tmp___7, "%s", file);
          ok = (_Bool)0;
          }
          goto while_break___2;
        }
        bytes += bytes_read;
        p___0 = (char const   *)(buf___0);
        bytes_read += prev;
        {
        while (1) {
          while_continue___3: /* CIL Label */ ;

          if (! in_shift) {
            {
            tmp___9 = is_basic((char )*p___0);
            }
            if (tmp___9) {
              n = (size_t )1;
              wide_char = (wchar_t )*p___0;
            } else {
              goto _L___2;
            }
          } else {
            _L___2: 
            {
            in_shift = (_Bool)1;
            backup_state = state;
            n = mbrtowc((wchar_t */* __restrict  */)(& wide_char), (char const   */* __restrict  */)p___0,
                        bytes_read, (mbstate_t */* __restrict  */)(& state));
            }
            if (n == 0xfffffffffffffffeUL) {
              state = backup_state;
              goto while_break___3;
            }
            if (n == 0xffffffffffffffffUL) {
              p___0 ++;
              bytes_read --;
              goto __Cont;
            }
            {
            tmp___8 = mbsinit((mbstate_t const   *)(& state));
            }
            if (tmp___8) {
              in_shift = (_Bool)0;
            }
            if (n == 0UL) {
              wide_char = 0;
              n = (size_t )1;
            }
          }
          p___0 += n;
          bytes_read -= n;
          chars ++;
          if (wide_char == 10) {
            goto case_10;
          }
          if (wide_char == 13) {
            goto case_13;
          }
          if (wide_char == 12) {
            goto case_13;
          }
          if (wide_char == 9) {
            goto case_9;
          }
          if (wide_char == 32) {
            goto case_32;
          }
          if (wide_char == 11) {
            goto mb_word_separator;
          }
          goto switch_default;
          case_10: 
          lines ++;
          case_13: 
          if (linepos > linelength) {
            linelength = linepos;
          }
          linepos = (uintmax_t )0;
          goto mb_word_separator;
          case_9: 
          linepos += 8UL - linepos % 8UL;
          goto mb_word_separator;
          case_32: 
          linepos ++;
          mb_word_separator: 
          words += (uintmax_t )in_word;
          in_word = (_Bool)0;
          goto switch_break;
          switch_default: 
          {
          tmp___12 = iswprint((wint_t )wide_char);
          }
          if (tmp___12) {
            {
            tmp___10 = wcwidth(wide_char);
            width = tmp___10;
            }
            if (width > 0) {
              linepos += (uintmax_t )width;
            }
            {
            tmp___11 = iswspace((wint_t )wide_char);
            }
            if (tmp___11) {
              goto mb_word_separator;
            }
            in_word = (_Bool)1;
          }
          goto switch_break;
          switch_break: ;
          __Cont: 
          if (! (bytes_read > 0UL)) {
            goto while_break___3;
          }
        }
        while_break___10: /* CIL Label */ ;
        }
        while_break___3: ;
        if (bytes_read > 0UL) {
          if (bytes_read == 16384UL) {
            p___0 ++;
            bytes_read --;
          }
          {
          memmove((void *)(buf___0), (void const   *)p___0, bytes_read);
          }
        }
        prev = bytes_read;
      }
      while_break___9: /* CIL Label */ ;
      }
      while_break___2: ;
      if (linepos > linelength) {
        linelength = linepos;
      }
      words += (uintmax_t )in_word;
    } else {
      in_word___0 = (_Bool)0;
      linepos___0 = (uintmax_t )0;
      {
      while (1) {
        while_continue___4: /* CIL Label */ ;
        {
        bytes_read = safe_read(fd, (void *)(buf___0), (size_t )16384);
        }
        if (! (bytes_read > 0UL)) {
          goto while_break___4;
        }
        p___1 = (char const   *)(buf___0);
        if (bytes_read == 0xffffffffffffffffUL) {
          {
          tmp___13 = __errno_location();
          error(0, *tmp___13, "%s", file);
          ok = (_Bool)0;
          }
          goto while_break___4;
        }
        bytes += bytes_read;
        {
        while (1) {
          while_continue___5: /* CIL Label */ ;
          tmp___14 = p___1;
          p___1 ++;
          if ((int const   )*tmp___14 == 10) {
            goto case_10___0;
          }
          if ((int const   )*tmp___14 == 13) {
            goto case_13___0;
          }
          if ((int const   )*tmp___14 == 12) {
            goto case_13___0;
          }
          if ((int const   )*tmp___14 == 9) {
            goto case_9___0;
          }
          if ((int const   )*tmp___14 == 32) {
            goto case_32___0;
          }
          if ((int const   )*tmp___14 == 11) {
            goto word_separator;
          }
          goto switch_default___0;
          case_10___0: 
          lines ++;
          case_13___0: 
          if (linepos___0 > linelength) {
            linelength = linepos___0;
          }
          linepos___0 = (uintmax_t )0;
          goto word_separator;
          case_9___0: 
          linepos___0 += 8UL - linepos___0 % 8UL;
          goto word_separator;
          case_32___0: 
          linepos___0 ++;
          word_separator: 
          words += (uintmax_t )in_word___0;
          in_word___0 = (_Bool)0;
          goto switch_break___0;
          switch_default___0: 
          {
          tmp___17 = __ctype_b_loc();
          tmp___18 = to_uchar((char )*(p___1 + -1));
          }
          if ((int const   )*(*tmp___17 + (int )tmp___18) & 16384) {
            {
            linepos___0 ++;
            tmp___15 = __ctype_b_loc();
            tmp___16 = to_uchar((char )*(p___1 + -1));
            }
            if ((int const   )*(*tmp___15 + (int )tmp___16) & 8192) {
              goto word_separator;
            }
            in_word___0 = (_Bool)1;
          }
          goto switch_break___0;
          switch_break___0: 
          bytes_read --;
          if (! bytes_read) {
            goto while_break___5;
          }
        }
        while_break___12: /* CIL Label */ ;
        }
        while_break___5: ;
      }
      while_break___11: /* CIL Label */ ;
      }
      while_break___4: ;
      if (linepos___0 > linelength) {
        linelength = linepos___0;
      }
      words += (uintmax_t )in_word___0;
    }
  }
  if ((int )count_chars < (int )print_chars) {
    chars = bytes;
  }
  {
  write_counts(lines, words, chars, bytes, linelength, file_x);
  total_lines += lines;
  total_words += words;
  total_chars += chars;
  total_bytes += bytes;
  }
  if (linelength > max_line_length) {
    max_line_length = linelength;
  }
  return (ok);
}
}
static _Bool wc_file(char const   *file , struct fstatus *fstatus ) 
{ 
  _Bool tmp___0 ;
  int fd ;
  int tmp___1 ;
  int *tmp___2 ;
  _Bool ok ;
  _Bool tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  if (! file) {
    {
    have_read_stdin = (_Bool)1;
    tmp___0 = wc(0, file, fstatus);
    }
    return (tmp___0);
  } else {
    {
    tmp___6 = strcmp(file, "-");
    }
    if (tmp___6 == 0) {
      {
      have_read_stdin = (_Bool)1;
      tmp___0 = wc(0, file, fstatus);
      }
      return (tmp___0);
    } else {
      {
      tmp___1 = open(file, 0);
      fd = tmp___1;
      }
      if (fd == -1) {
        {
        tmp___2 = __errno_location();
        error(0, *tmp___2, "%s", file);
        }
        return ((_Bool)0);
      } else {
        {
        tmp___3 = wc(fd, file, fstatus);
        ok = tmp___3;
        tmp___5 = close(fd);
        }
        if (tmp___5 != 0) {
          {
          tmp___4 = __errno_location();
          error(0, *tmp___4, "%s", file);
          }
          return ((_Bool)0);
        }
        return (ok);
      }
    }
  }
}
}
static struct fstatus *get_input_fstatus(int nfiles , char * const  *file ) 
{ 
  struct fstatus *fstatus ;
  int tmp ;
  void *tmp___0 ;
  int i ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  if (nfiles) {
    tmp = nfiles;
  } else {
    tmp = 1;
  }
  {
  tmp___0 = xnmalloc((size_t )tmp, sizeof(*fstatus));
  fstatus = (struct fstatus *)tmp___0;
  }
  if (nfiles == 0) {
    (fstatus + 0)->failed = 1;
  } else
  if (nfiles == 1) {
    if (((((int )print_lines + (int )print_words) + (int )print_chars) + (int )print_bytes) + (int )print_linelength == 1) {
      (fstatus + 0)->failed = 1;
    } else {
      goto _L;
    }
  } else {
    _L: 
    i = 0;
    {
    while (1) {
      while_continue: /* CIL Label */ ;

      if (! (i < nfiles)) {
        goto while_break;
      }
      if (! *(file + i)) {
        {
        tmp___2 = fstat(0, & (fstatus + i)->st);
        (fstatus + i)->failed = tmp___2;
        }
      } else {
        {
        tmp___4 = strcmp((char const   *)*(file + i), "-");
        }
        if (tmp___4 == 0) {
          {
          tmp___2 = fstat(0, & (fstatus + i)->st);
          (fstatus + i)->failed = tmp___2;
          }
        } else {
          {
          tmp___3 = stat((char const   */* __restrict  */)((char const   *)*(file + i)),
                         (struct stat */* __restrict  */)(& (fstatus + i)->st));
          (fstatus + i)->failed = tmp___3;
          }
        }
      }
      i ++;
    }
    while_break___0: /* CIL Label */ ;
    }
    while_break: ;
  }
  return (fstatus);
}
}
static int compute_number_width(int nfiles , struct fstatus  const  *fstatus ) 
{ 
  int width ;
  int minimum_width ;
  uintmax_t regular_total ;
  int i ;

  {
  width = 1;
  if (0 < nfiles) {
    if ((fstatus + 0)->failed <= 0) {
      minimum_width = 1;
      regular_total = (uintmax_t )0;
      i = 0;
      {
      while (1) {
        while_continue: /* CIL Label */ ;

        if (! (i < nfiles)) {
          goto while_break;
        }
        if (! (fstatus + i)->failed) {
          if (((fstatus + i)->st.st_mode & 61440U) == 32768U) {
            regular_total += (uintmax_t )(fstatus + i)->st.st_size;
          } else {
            minimum_width = 7;
          }
        }
        i ++;
      }
      while_break___1: /* CIL Label */ ;
      }
      while_break: ;
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;

        if (! (10UL <= regular_total)) {
          goto while_break___0;
        }
        width ++;
        regular_total /= 10UL;
      }
      while_break___2: /* CIL Label */ ;
      }
      while_break___0: ;
      if (width < minimum_width) {
        width = minimum_width;
      }
    }
  }
  return (width);
}
}
int main(int argc , char **argv ) ;
static char *stdin_only[1]  = {      (char *)((void *)0)};
int main(int argc , char **argv ) 
{ 
  _Bool ok ;
  int optc ;
  int nfiles ;
  char **files ;
  char *files_from ;
  struct fstatus *fstatus ;
  struct Tokens tok ;
  _Bool read_tokens ;
  struct argv_iterator *ai ;
  FILE *stream ;
  char const   *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  struct stat st ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  _Bool tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  double tmp___13 ;
  double tmp___14 ;
  double tmp___15 ;
  int i ;
  _Bool skip_file ;
  enum argv_iter_err ai_err ;
  char *file_name___1 ;
  char *tmp___16 ;
  char const   *tmp___17 ;
  char *tmp___18 ;
  int *tmp___19 ;
  char const   *tmp___20 ;
  char *tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  char *tmp___24 ;
  unsigned long file_number ;
  size_t tmp___25 ;
  char *tmp___26 ;
  char *tmp___27 ;
  int tmp___28 ;
  _Bool tmp___29 ;
  _Bool tmp___30 ;
  size_t tmp___31 ;
  char *tmp___32 ;
  size_t tmp___33 ;
  int *tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  void *__cil_tmp71 ;
  char *__cil_tmp72 ;
  char *__cil_tmp73 ;
  char *__cil_tmp74 ;
  char *__cil_tmp75 ;
  char *__cil_tmp76 ;
  char *__cil_tmp77 ;
  char *__cil_tmp78 ;
  char *__cil_tmp79 ;
  char *__cil_tmp80 ;
  char *__cil_tmp81 ;
  char *__cil_tmp82 ;
  char *__cil_tmp83 ;
  char *__cil_tmp84 ;
  char *__cil_tmp85 ;

  {
  {
  files_from = (char *)((void *)0);
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  print_bytes = (_Bool)0;
  print_chars = print_bytes;
  print_words = print_chars;
  print_lines = print_words;
  print_linelength = (_Bool)0;
  max_line_length = (uintmax_t )0;
  total_bytes = max_line_length;
  total_chars = total_bytes;
  total_words = total_chars;
  total_lines = total_words;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    optc = getopt_long(argc, (char * const  *)argv, "clLmw", longopts, (int *)((void *)0));
    }
    if (! (optc != -1)) {
      goto while_break;
    }
    if (optc == 99) {
      goto case_99;
    }
    if (optc == 109) {
      goto case_109;
    }
    if (optc == 108) {
      goto case_108;
    }
    if (optc == 119) {
      goto case_119;
    }
    if (optc == 76) {
      goto case_76;
    }
    if (optc == 128) {
      goto case_128;
    }
    if (optc == -130) {
      goto case_neg_130;
    }
    if (optc == -131) {
      goto case_neg_131;
    }
    goto switch_default;
    case_99: 
    print_bytes = (_Bool)1;
    goto switch_break;
    case_109: 
    print_chars = (_Bool)1;
    goto switch_break;
    case_108: 
    print_lines = (_Bool)1;
    goto switch_break;
    case_119: 
    print_words = (_Bool)1;
    goto switch_break;
    case_76: 
    print_linelength = (_Bool)1;
    goto switch_break;
    case_128: 
    files_from = optarg;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    version_etc(stdout, "wc", "GNU coreutils", Version, "Paul Rubin", "David MacKenzie",
                (char *)((void *)0));
    exit(0);
    }
    goto switch_break;
    switch_default: 
    {
    usage(1);
    }
    switch_break: ;
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
  if (! print_lines) {
    if (! print_words) {
      if (! print_chars) {
        if (! print_bytes) {
          if (! print_linelength) {
            print_bytes = (_Bool)1;
            print_words = print_bytes;
            print_lines = print_words;
          }
        }
      }
    }
  }
  read_tokens = (_Bool)0;
  if (files_from) {
    if (optind < argc) {
      {
      tmp = quote((char const   *)*(argv + optind));
      tmp___0 = gettext("extra operand %s");
      error(0, 0, (char const   *)tmp___0, tmp);
      tmp___1 = gettext("file operands cannot be combined with --files0-from");
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s\n",
              tmp___1);
      usage(1);
      }
    }
    {
    tmp___5 = strcmp((char const   *)files_from, "-");
    }
    if (tmp___5 == 0) {
      stream = stdin;
    } else {
      {
      stream = fopen((char const   */* __restrict  */)((char const   *)files_from),
                     (char const   */* __restrict  */)"r");
      }
      if ((unsigned long )stream == (unsigned long )((void *)0)) {
        {
        tmp___2 = quote((char const   *)files_from);
        tmp___3 = gettext("cannot open %s for reading");
        tmp___4 = __errno_location();
        error(1, *tmp___4, (char const   *)tmp___3, tmp___2);
        }
      }
    }
    {
    tmp___10 = fileno(stream);
    tmp___11 = fstat(tmp___10, & st);
    }
    if (tmp___11 == 0) {
      if ((st.st_mode & 61440U) == 32768U) {
        {
        tmp___15 = physmem_available();
        }
        if ((double )10485760 < tmp___15 / (double )2) {
          tmp___14 = (double )10485760;
        } else {
          {
          tmp___13 = physmem_available();
          tmp___14 = tmp___13 / (double )2;
          }
        }
        if ((double )st.st_size <= tmp___14) {
          {
          read_tokens = (_Bool)1;
          readtokens0_init(& tok);
          tmp___8 = readtokens0(stream, & tok);
          }
          if (tmp___8) {
            {
            tmp___9 = fclose(stream);
            }
            if (tmp___9 != 0) {
              {
              tmp___6 = quote((char const   *)files_from);
              tmp___7 = gettext("cannot read file names from %s");
              error(1, 0, (char const   *)tmp___7, tmp___6);
              }
            }
          } else {
            {
            tmp___6 = quote((char const   *)files_from);
            tmp___7 = gettext("cannot read file names from %s");
            error(1, 0, (char const   *)tmp___7, tmp___6);
            }
          }
          {
          files = tok.tok;
          nfiles = (int )tok.n_tok;
          ai = argv_iter_init_argv(files);
          }
        } else {
          {
          files = (char **)((void *)0);
          nfiles = 0;
          ai = argv_iter_init_stream(stream);
          }
        }
      } else {
        {
        files = (char **)((void *)0);
        nfiles = 0;
        ai = argv_iter_init_stream(stream);
        }
      }
    } else {
      {
      files = (char **)((void *)0);
      nfiles = 0;
      ai = argv_iter_init_stream(stream);
      }
    }
  } else {
    if (optind < argc) {
      files = argv + optind;
    } else {
      files = stdin_only;
    }
    if (optind < argc) {
      nfiles = argc - optind;
    } else {
      nfiles = 1;
    }
    {
    ai = argv_iter_init_argv(files);
    }
  }
  {
  fstatus = get_input_fstatus(nfiles, (char * const  *)files);
  number_width = compute_number_width(nfiles, (struct fstatus  const  *)fstatus);
  ok = (_Bool)1;
  i = 0;
  }
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;
    {
    skip_file = (_Bool)0;
    tmp___16 = argv_iter(ai, & ai_err);
    file_name___1 = tmp___16;
    }
    if ((unsigned int )ai_err == 2U) {
      goto while_break___0;
    }
    if (! file_name___1) {
      if ((unsigned int )ai_err == 4U) {
        goto case_4;
      }
      if ((unsigned int )ai_err == 3U) {
        goto case_3;
      }
      goto switch_default___0;
      case_4: 
      {
      tmp___17 = quote((char const   *)files_from);
      tmp___18 = gettext("%s: read error");
      tmp___19 = __errno_location();
      error(0, *tmp___19, (char const   *)tmp___18, tmp___17);
      skip_file = (_Bool)1;
      }
      goto __Cont;
      case_3: 
      {
      xalloc_die();
      }
      switch_default___0: 
      {
      __assert_fail("!\"unexpected error code from argv_iter\"", "/home/wslee/project/coreutils-8.1/src/wc.c",
                    724U, "main");
      }

    }
    if (files_from) {
      {
      tmp___22 = strcmp((char const   *)files_from, "-");
      }
      if (tmp___22 == 0) {
        {
        tmp___23 = strcmp((char const   *)file_name___1, "-");
        }
        if (tmp___23 == 0) {
          {
          tmp___20 = quote((char const   *)file_name___1);
          tmp___21 = gettext("when reading file names from stdin, no file name of %s allowed");
          error(0, 0, (char const   *)tmp___21, tmp___20);
          skip_file = (_Bool)1;
          }
        }
      }
    }
    if (! *(file_name___1 + 0)) {
      if ((unsigned long )files_from == (unsigned long )((void *)0)) {
        {
        tmp___24 = gettext("invalid zero-length file name");
        error(0, 0, "%s", tmp___24);
        }
      } else {
        {
        tmp___25 = argv_iter_n_args((struct argv_iterator  const  *)ai);
        file_number = tmp___25;
        tmp___26 = gettext("invalid zero-length file name");
        tmp___27 = quotearg_colon((char const   *)files_from);
        error(0, 0, "%s:%lu: %s", tmp___27, file_number, tmp___26);
        }
      }
      skip_file = (_Bool)1;
    }
    if (skip_file) {
      ok = (_Bool)0;
    } else {
      if (nfiles) {
        tmp___28 = i;
      } else {
        tmp___28 = 0;
      }
      {
      tmp___29 = wc_file((char const   *)file_name___1, fstatus + tmp___28);
      ok = (_Bool )((int )ok & (int )tmp___29);
      }
    }
    __Cont: 
    i ++;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: ;
  if (ok) {
    if (! files_from) {
      {
      tmp___31 = argv_iter_n_args((struct argv_iterator  const  *)ai);
      }
      if (tmp___31 == 0UL) {
        {
        tmp___30 = wc_file((char const   *)((void *)0), fstatus + 0);
        ok = (_Bool )((int )ok & (int )tmp___30);
        }
      }
    }
  }
  if (read_tokens) {
    {
    readtokens0_free(& tok);
    }
  }
  {
  tmp___33 = argv_iter_n_args((struct argv_iterator  const  *)ai);
  }
  if (1UL < tmp___33) {
    {
    tmp___32 = gettext("total");
    write_counts(total_lines, total_words, total_chars, total_bytes, max_line_length,
                 (char const   *)tmp___32);
    }
  }
  {
  argv_iter_free(ai);
  free((void *)fstatus);
  }
  if (have_read_stdin) {
    {
    tmp___35 = close(0);
    }
    if (tmp___35 != 0) {
      {
      tmp___34 = __errno_location();
      error(1, *tmp___34, "-");
      }
    }
  }
  if (ok) {
    tmp___36 = 0;
  } else {
    tmp___36 = 1;
  }
  {
  exit(tmp___36);
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
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
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
extern __ssize_t getdelim(char ** __restrict  __lineptr , size_t * __restrict  __n ,
                          int __delimiter , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) feof)(FILE *__stream ) ;
struct argv_iterator *( __attribute__((__nonnull__(1))) argv_iter_init_argv)(char **argv ) 
{ 
  struct argv_iterator *ai ;
  void *tmp ;

  {
  {
  tmp = malloc(sizeof(*ai));
  ai = (struct argv_iterator *)tmp;
  }
  if (! ai) {
    return ((struct argv_iterator *)((void *)0));
  }
  ai->fp = (FILE *)((void *)0);
  ai->arg_list = argv;
  ai->p = argv;
  return (ai);
}
}
struct argv_iterator *( __attribute__((__nonnull__(1))) argv_iter_init_stream)(FILE *fp ) 
{ 
  struct argv_iterator *ai ;
  void *tmp ;

  {
  {
  tmp = malloc(sizeof(*ai));
  ai = (struct argv_iterator *)tmp;
  }
  if (! ai) {
    return ((struct argv_iterator *)((void *)0));
  }
  ai->fp = fp;
  ai->tok = (char *)((void *)0);
  ai->buf_len = (size_t )0;
  ai->item_idx = (size_t )0;
  ai->arg_list = (char **)((void *)0);
  return (ai);
}
}
char *( __attribute__((__nonnull__(2), __nonnull__(1))) argv_iter)(struct argv_iterator *ai ,
                                                                   enum argv_iter_err *err ) 
{ 
  ssize_t len ;
  __ssize_t tmp ;
  int tmp___1 ;
  char **tmp___2 ;

  {
  if (ai->fp) {
    {
    tmp = getdelim((char **/* __restrict  */)(& ai->tok), (size_t */* __restrict  */)(& ai->buf_len),
                   '\000', (FILE */* __restrict  */)ai->fp);
    len = tmp;
    }
    if (len < 0L) {
      {
      tmp___1 = feof(ai->fp);
      }
      if (tmp___1) {
        *err = (enum argv_iter_err )2;
      } else {
        *err = (enum argv_iter_err )4;
      }
      return ((char *)((void *)0));
    }
    *err = (enum argv_iter_err )1;
    (ai->item_idx) ++;
    return (ai->tok);
  } else
  if ((unsigned long )*(ai->p) == (unsigned long )((void *)0)) {
    *err = (enum argv_iter_err )2;
    return ((char *)((void *)0));
  } else {
    *err = (enum argv_iter_err )1;
    tmp___2 = ai->p;
    (ai->p) ++;
    return (*tmp___2);
  }
}
}
size_t ( __attribute__((__nonnull__(1))) argv_iter_n_args)(struct argv_iterator  const  *ai ) 
{ 
  size_t tmp ;

  {
  if (ai->fp) {
    tmp = (size_t )ai->item_idx;
  } else {
    tmp = (size_t )((size_t const   )(ai->p - ai->arg_list));
  }
  return (tmp);
}
}
void ( __attribute__((__nonnull__(1))) argv_iter_free)(struct argv_iterator *ai ) 
{ 


  {
  if (ai->fp) {
    {
    free((void *)ai->tok);
    }
  }
  {
  free((void *)ai);
  }
  return;
}
}
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
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strrchr)(char const   *__s ,
                                                                                                int __c )  __attribute__((__pure__)) ;
int volatile   exit_failure  =    (int volatile   )1;
extern int fgetc(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror)(FILE *__stream ) ;
void version_etc_va(FILE *stream , char const   *command_name , char const   *package ,
                    char const   *version , va_list authors ) ;
unsigned int const   is_basic_table[8]  = {      (unsigned int const   )6656,      (unsigned int const   )4294967279U,      (unsigned int const   )4294967294U,      (unsigned int const   )2147483646};
extern  __attribute__((__nothrow__)) long ( __attribute__((__leaf__)) sysconf)(int __name ) ;
double physmem_total(void) ;
double physmem_total(void) 
{ 
  double pages ;
  long tmp ;
  double pagesize ;
  long tmp___0 ;

  {
  {
  tmp = sysconf(85);
  pages = (double )tmp;
  tmp___0 = sysconf(30);
  pagesize = (double )tmp___0;
  }
  if ((double )0 <= pages) {
    if ((double )0 <= pagesize) {
      return (pages * pagesize);
    }
  }
  return ((double )67108864);
}
}
double physmem_available(void) 
{ 
  double pages ;
  long tmp ;
  double pagesize ;
  long tmp___0 ;
  double tmp___1 ;

  {
  {
  tmp = sysconf(86);
  pages = (double )tmp;
  tmp___0 = sysconf(30);
  pagesize = (double )tmp___0;
  }
  if ((double )0 <= pages) {
    if ((double )0 <= pagesize) {
      return (pages * pagesize);
    }
  }
  {
  tmp___1 = physmem_total();
  }
  return (tmp___1 / (double )4);
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
extern void _obstack_newchunk(struct obstack * , int  ) ;
extern int _obstack_begin(struct obstack * , int  , int  , void *(*)(long  ) , void (*)(void * ) ) ;
extern void obstack_free(struct obstack *obstack , void *block ) ;
void readtokens0_init(struct Tokens *t ) 
{ 


  {
  {
  t->n_tok = (size_t )0;
  t->tok = (char **)((void *)0);
  t->tok_len = (size_t *)((void *)0);
  _obstack_begin(& t->o_data, 0, 0, (void *(*)(long  ))(& malloc), (void (*)(void * ))(& free));
  _obstack_begin(& t->o_tok, 0, 0, (void *(*)(long  ))(& malloc), (void (*)(void * ))(& free));
  _obstack_begin(& t->o_tok_len, 0, 0, (void *(*)(long  ))(& malloc), (void (*)(void * ))(& free));
  }
  return;
}
}
void readtokens0_free(struct Tokens *t ) 
{ 
  struct obstack *__o ;
  void *__obj ;
  char *tmp ;
  struct obstack *__o___0 ;
  void *__obj___0 ;
  char *tmp___0 ;
  struct obstack *__o___1 ;
  void *__obj___1 ;
  char *tmp___1 ;

  {
  __o = & t->o_data;
  __obj = (void *)0;
  if ((unsigned long )__obj > (unsigned long )((void *)__o->chunk)) {
    if ((unsigned long )__obj < (unsigned long )((void *)__o->chunk_limit)) {
      tmp = (char *)__obj;
      __o->object_base = tmp;
      __o->next_free = tmp;
    } else {
      {
      obstack_free(__o, __obj);
      }
    }
  } else {
    {
    obstack_free(__o, __obj);
    }
  }
  __o___0 = & t->o_tok;
  __obj___0 = (void *)0;
  if ((unsigned long )__obj___0 > (unsigned long )((void *)__o___0->chunk)) {
    if ((unsigned long )__obj___0 < (unsigned long )((void *)__o___0->chunk_limit)) {
      tmp___0 = (char *)__obj___0;
      __o___0->object_base = tmp___0;
      __o___0->next_free = tmp___0;
    } else {
      {
      obstack_free(__o___0, __obj___0);
      }
    }
  } else {
    {
    obstack_free(__o___0, __obj___0);
    }
  }
  __o___1 = & t->o_tok_len;
  __obj___1 = (void *)0;
  if ((unsigned long )__obj___1 > (unsigned long )((void *)__o___1->chunk)) {
    if ((unsigned long )__obj___1 < (unsigned long )((void *)__o___1->chunk_limit)) {
      tmp___1 = (char *)__obj___1;
      __o___1->object_base = tmp___1;
      __o___1->next_free = tmp___1;
    } else {
      {
      obstack_free(__o___1, __obj___1);
      }
    }
  } else {
    {
    obstack_free(__o___1, __obj___1);
    }
  }
  return;
}
}
static void save_token(struct Tokens *t ) 
{ 
  size_t len ;
  struct obstack  const  *__o ;
  char const   *s ;
  struct obstack *__o1 ;
  void *__value ;
  char *tmp ;
  char *tmp___0 ;
  struct obstack *__o___0 ;
  struct obstack *__o1___0 ;
  struct obstack *__o___1 ;
  int __len ;

  {
  __o = (struct obstack  const  *)(& t->o_data);
  len = (size_t )((unsigned int )(__o->next_free - __o->object_base) - 1U);
  __o1 = & t->o_data;
  __value = (void *)__o1->object_base;
  if ((unsigned long )__o1->next_free == (unsigned long )__value) {
    __o1->maybe_empty_object = 1U;
  }
  if (sizeof(long ) < sizeof(void *)) {
    tmp = __o1->object_base;
  } else {
    tmp = (char *)0;
  }
  if (sizeof(long ) < sizeof(void *)) {
    tmp___0 = __o1->object_base;
  } else {
    tmp___0 = (char *)0;
  }
  __o1->next_free = tmp + (((__o1->next_free - tmp___0) + (long )__o1->alignment_mask) & (long )(~ __o1->alignment_mask));
  if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) {
    __o1->next_free = __o1->chunk_limit;
  }
  __o1->object_base = __o1->next_free;
  s = (char const   *)__value;
  __o___0 = & t->o_tok;
  if ((unsigned long )(__o___0->next_free + sizeof(void *)) > (unsigned long )__o___0->chunk_limit) {
    {
    _obstack_newchunk(__o___0, (int )sizeof(void *));
    }
  }
  __o1___0 = __o___0;
  *((void const   **)__o1___0->next_free) = (void const   *)s;
  __o1___0->next_free += sizeof(void const   *);
  __o___1 = & t->o_tok_len;
  __len = (int )sizeof(len);
  if ((unsigned long )(__o___1->next_free + __len) > (unsigned long )__o___1->chunk_limit) {
    {
    _obstack_newchunk(__o___1, __len);
    }
  }
  {
  memcpy((void */* __restrict  */)((void *)__o___1->next_free), (void const   */* __restrict  */)((void const   *)(& len)),
         (size_t )__len);
  __o___1->next_free += __len;
  (t->n_tok) ++;
  }
  return;
}
}
_Bool readtokens0(FILE *in , struct Tokens *t ) 
{ 
  int c ;
  int tmp ;
  size_t len ;
  struct obstack  const  *__o ;
  struct obstack *__o___0 ;
  char *tmp___0 ;
  struct obstack *__o___1 ;
  char *tmp___1 ;
  struct obstack *__o___2 ;
  struct obstack *__o1 ;
  struct obstack *__o1___0 ;
  void *__value ;
  char *tmp___2 ;
  char *tmp___3 ;
  struct obstack *__o1___1 ;
  void *__value___0 ;
  char *tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp = fgetc(in);
    c = tmp;
    }
    if (c == -1) {
      __o = (struct obstack  const  *)(& t->o_data);
      len = (size_t )((unsigned int )(__o->next_free - __o->object_base));
      if (len) {
        __o___0 = & t->o_data;
        if ((unsigned long )(__o___0->next_free + 1) > (unsigned long )__o___0->chunk_limit) {
          {
          _obstack_newchunk(__o___0, 1);
          }
        }
        {
        tmp___0 = __o___0->next_free;
        (__o___0->next_free) ++;
        *tmp___0 = (char )'\000';
        save_token(t);
        }
      }
      goto while_break;
    }
    __o___1 = & t->o_data;
    if ((unsigned long )(__o___1->next_free + 1) > (unsigned long )__o___1->chunk_limit) {
      {
      _obstack_newchunk(__o___1, 1);
      }
    }
    tmp___1 = __o___1->next_free;
    (__o___1->next_free) ++;
    *tmp___1 = (char )c;
    if (c == 0) {
      {
      save_token(t);
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  __o___2 = & t->o_tok;
  if ((unsigned long )(__o___2->next_free + sizeof(void *)) > (unsigned long )__o___2->chunk_limit) {
    {
    _obstack_newchunk(__o___2, (int )sizeof(void *));
    }
  }
  __o1 = __o___2;
  *((void const   **)__o1->next_free) = (void const   *)((void *)0);
  __o1->next_free += sizeof(void const   *);
  __o1___0 = & t->o_tok;
  __value = (void *)__o1___0->object_base;
  if ((unsigned long )__o1___0->next_free == (unsigned long )__value) {
    __o1___0->maybe_empty_object = 1U;
  }
  if (sizeof(long ) < sizeof(void *)) {
    tmp___2 = __o1___0->object_base;
  } else {
    tmp___2 = (char *)0;
  }
  if (sizeof(long ) < sizeof(void *)) {
    tmp___3 = __o1___0->object_base;
  } else {
    tmp___3 = (char *)0;
  }
  __o1___0->next_free = tmp___2 + (((__o1___0->next_free - tmp___3) + (long )__o1___0->alignment_mask) & (long )(~ __o1___0->alignment_mask));
  if (__o1___0->next_free - (char *)__o1___0->chunk > __o1___0->chunk_limit - (char *)__o1___0->chunk) {
    __o1___0->next_free = __o1___0->chunk_limit;
  }
  __o1___0->object_base = __o1___0->next_free;
  t->tok = (char **)__value;
  __o1___1 = & t->o_tok_len;
  __value___0 = (void *)__o1___1->object_base;
  if ((unsigned long )__o1___1->next_free == (unsigned long )__value___0) {
    __o1___1->maybe_empty_object = 1U;
  }
  if (sizeof(long ) < sizeof(void *)) {
    tmp___4 = __o1___1->object_base;
  } else {
    tmp___4 = (char *)0;
  }
  if (sizeof(long ) < sizeof(void *)) {
    tmp___5 = __o1___1->object_base;
  } else {
    tmp___5 = (char *)0;
  }
  __o1___1->next_free = tmp___4 + (((__o1___1->next_free - tmp___5) + (long )__o1___1->alignment_mask) & (long )(~ __o1___1->alignment_mask));
  if (__o1___1->next_free - (char *)__o1___1->chunk > __o1___1->chunk_limit - (char *)__o1___1->chunk) {
    __o1___1->next_free = __o1___1->chunk_limit;
  }
  {
  __o1___1->object_base = __o1___1->next_free;
  t->tok_len = (size_t *)__value___0;
  tmp___6 = ferror(in);
  }
  if (tmp___6) {
    tmp___7 = 0;
  } else {
    tmp___7 = 1;
  }
  return ((_Bool )tmp___7);
}
}
reg_syntax_t rpl_re_syntax_options  ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
size_t safe_read(int fd , void *buf___0 , size_t count ) 
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
    tmp = read(fd, buf___0, count);
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
          if (2147475456UL < count) {
            count = (size_t )2147475456;
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
char *( __attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i , char *buf___0 ) 
{ 
  char *p ;

  {
  p = buf___0 + (((sizeof(uintmax_t ) * 8UL) * 146UL) / 485UL + 1UL);
  *p = (char)0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    p --;
    *p = (char )(48UL + i % 10UL);
    i /= 10UL;
    if (! (i != 0UL)) {
      goto while_break;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (p);
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
char const   *Version  =    "8.1";
