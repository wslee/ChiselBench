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
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
enum canonicalize_mode_t {
    CAN_EXISTING = 0,
    CAN_ALL_BUT_LAST = 1,
    CAN_MISSING = 2
} ;
typedef enum canonicalize_mode_t canonicalize_mode_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
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
typedef unsigned long __ino_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
};
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
struct hash_tuning {
   float shrink_threshold ;
   float shrink_factor ;
   float growth_threshold ;
   float growth_factor ;
   _Bool is_n_buckets ;
};
typedef struct hash_tuning Hash_tuning;
struct hash_table;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_270562735 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_270562735 __mbstate_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct mbchar {
   char const   *ptr ;
   size_t bytes ;
   _Bool wc_valid ;
   wchar_t wc ;
   char buf[24] ;
};
struct mbuiter_multi {
   _Bool in_shift ;
   mbstate_t state ;
   _Bool next_done ;
   struct mbchar cur ;
};
typedef struct mbuiter_multi mbui_iterator_t;
struct F_triple {
   char *name ;
   ino_t st_ino ;
   dev_t st_dev ;
};
struct hash_entry {
   void *data ;
   struct hash_entry *next ;
};
struct hash_table {
   struct hash_entry *bucket ;
   struct hash_entry  const  *bucket_limit ;
   size_t n_buckets ;
   size_t n_buckets_used ;
   size_t n_entries ;
   Hash_tuning const   *tuning ;
   size_t (*hasher)(void const   * , size_t  ) ;
   _Bool (*comparator)(void const   * , void const   * ) ;
   void (*data_freer)(void * ) ;
   struct hash_entry *free_entry_list ;
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
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern int optind ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) setlocale)(int __category ,
                                                                                  char const   *__locale ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) gettext)(char const   *__msgid )  __attribute__((__format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) textdomain)(char const   *__domainname ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) bindtextdomain)(char const   *__domainname ,
                                                                                       char const   *__dirname ) ;
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
char *canonicalize_filename_mode(char const   *name , canonicalize_mode_t can_mode ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
char *areadlink_with_size(char const   *file , size_t size ) ;
char const   *quote(char const   *name ) ;
static _Bool no_newline  ;
static _Bool verbose  ;
static struct option  const  longopts[10]  = 
  {      {"canonicalize", 0, (int *)((void *)0), 'f'}, 
        {"canonicalize-existing", 0, (int *)((void *)0), 'e'}, 
        {"canonicalize-missing", 0, (int *)((void *)0), 'm'}, 
        {"no-newline", 0, (int *)((void *)0), 'n'}, 
        {"quiet", 0, (int *)((void *)0), 'q'}, 
        {"silent", 0, (int *)((void *)0), 's'}, 
        {"verbose", 0, (int *)((void *)0), 'v'}, 
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
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;
  char *__cil_tmp22 ;

  {
  if (status != 0) {
    {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)tmp),
            program_name);
    }
  } else {
    {
    tmp___0 = gettext("Usage: %s [OPTION]... FILE\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name);
    tmp___1 = gettext("Print value of a symbolic link or canonical file name\n\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___1), (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("  -f, --canonicalize            canonicalize by following every symlink in\n                                every component of the given name recursively;\n                                all but the last component must exist\n  -e, --canonicalize-existing   canonicalize by following every symlink in\n                                every component of the given name recursively,\n                                all components must exist\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -m, --canonicalize-missing    canonicalize by following every symlink in\n                                every component of the given name recursively,\n                                without requirements on components existence\n  -n, --no-newline              do not output the trailing newline\n  -q, --quiet,\n  -s, --silent                  suppress most error messages\n  -v, --verbose                 report error messages\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___5), (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
    }
  }
  {
  exit(status);
  }
}
}
int main(int argc , char **argv ) 
{ 
  int can_mode ;
  char const   *fname ;
  char *value ;
  int optc ;
  char *tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char const   *tmp___5 ;
  int *tmp___6 ;
  char *__cil_tmp22 ;
  char *__cil_tmp23 ;
  char *__cil_tmp24 ;
  char *__cil_tmp25 ;
  char *__cil_tmp26 ;
  char *__cil_tmp27 ;
  char *__cil_tmp28 ;

  {
  {
  can_mode = -1;
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
    optc = getopt_long(argc, (char * const  *)argv, "efmnqsv", longopts, (int *)((void *)0));
    }
    if (! (optc != -1)) {
      goto while_break;
    }
    if (optc == 101) {
      goto case_101;
    }
    if (optc == 102) {
      goto case_102;
    }
    if (optc == 109) {
      goto case_109;
    }
    if (optc == 110) {
      goto case_110;
    }
    if (optc == 113) {
      goto case_113;
    }
    if (optc == 115) {
      goto case_113;
    }
    if (optc == 118) {
      goto case_118;
    }
    if (optc == -130) {
      goto case_neg_130;
    }
    if (optc == -131) {
      goto case_neg_131;
    }
    goto switch_default;
    case_101: 
    can_mode = 0;
    goto switch_break;
    case_102: 
    can_mode = 1;
    goto switch_break;
    case_109: 
    can_mode = 2;
    goto switch_break;
    case_110: 
    no_newline = (_Bool)1;
    goto switch_break;
    case_113: 
    verbose = (_Bool)0;
    goto switch_break;
    case_118: 
    verbose = (_Bool)1;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    version_etc(stdout, "readlink", "GNU coreutils", Version, "Dmitry V. Levin", (char *)((void *)0));
    exit(0);
    }
    goto switch_break;
    switch_default: 
    {
    usage(1);
    }
    switch_break: ;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (optind >= argc) {
    {
    tmp = gettext("missing operand");
    error(0, 0, (char const   *)tmp);
    usage(1);
    }
  }
  tmp___0 = optind;
  optind ++;
  fname = (char const   *)*(argv + tmp___0);
  if (optind < argc) {
    {
    tmp___1 = quote((char const   *)*(argv + optind));
    tmp___2 = gettext("extra operand %s");
    error(0, 0, (char const   *)tmp___2, tmp___1);
    usage(1);
    }
  }
  if (can_mode != -1) {
    {
    tmp___3 = canonicalize_filename_mode(fname, (canonicalize_mode_t )can_mode);
    value = tmp___3;
    }
  } else {
    {
    tmp___4 = areadlink_with_size(fname, (size_t )63);
    value = tmp___4;
    }
  }
  if (value) {
    if (no_newline) {
      tmp___5 = "";
    } else {
      tmp___5 = "\n";
    }
    {
    printf((char const   */* __restrict  */)"%s%s", value, tmp___5);
    free((void *)value);
    }
    return (0);
  }
  if (verbose) {
    {
    tmp___6 = __errno_location();
    error(1, *tmp___6, "%s", fname);
    }
  }
  return (1);
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(1,2), __leaf__)) readlink)(char const   * __restrict  __path ,
                                                                                                     char * __restrict  __buf ,
                                                                                                     size_t __len ) ;
char *areadlink_with_size(char const   *file , size_t size ) 
{ 
  size_t symlink_max ;
  size_t INITIAL_LIMIT_BOUND ;
  size_t initial_limit ;
  size_t tmp ;
  size_t buf_size ;
  size_t tmp___0 ;
  ssize_t r ;
  size_t link_length ;
  char *buffer ;
  void *tmp___1 ;
  int saved_errno ;
  int *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  int *tmp___5 ;

  {
  symlink_max = (size_t )1024;
  INITIAL_LIMIT_BOUND = (size_t )8192;
  if (symlink_max < INITIAL_LIMIT_BOUND) {
    tmp = symlink_max + 1UL;
  } else {
    tmp = INITIAL_LIMIT_BOUND;
  }
  initial_limit = tmp;
  if (size < initial_limit) {
    tmp___0 = size + 1UL;
  } else {
    tmp___0 = initial_limit;
  }
  buf_size = tmp___0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp___1 = malloc(buf_size);
    buffer = (char *)tmp___1;
    }
    if ((unsigned long )buffer == (unsigned long )((void *)0)) {
      return ((char *)((void *)0));
    }
    {
    r = readlink((char const   */* __restrict  */)file, (char */* __restrict  */)buffer,
                 buf_size);
    link_length = (size_t )r;
    }
    if (r < 0L) {
      {
      tmp___4 = __errno_location();
      }
      if (*tmp___4 != 34) {
        {
        tmp___2 = __errno_location();
        saved_errno = *tmp___2;
        free((void *)buffer);
        tmp___3 = __errno_location();
        *tmp___3 = saved_errno;
        }
        return ((char *)((void *)0));
      }
    }
    if (link_length < buf_size) {
      *(buffer + link_length) = (char)0;
      return (buffer);
    }
    {
    free((void *)buffer);
    }
    if (buf_size <= 4611686018427387903UL) {
      buf_size *= 2UL;
    } else
    if (buf_size < 9223372036854775807UL) {
      buf_size = 9223372036854775807UL;
    } else {
      {
      tmp___5 = __errno_location();
      *tmp___5 = 12;
      }
      return ((char *)((void *)0));
    }
  }
  while_break: /* CIL Label */ ;
  }

  return ((char *)0);
}
}
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
char const   *simple_backup_suffix ;
 __attribute__((__noreturn__)) void xalloc_die(void) ;
void *xmalloc(size_t n )  __attribute__((__malloc__)) ;
void *xrealloc(void *p , size_t n ) ;
char const   *simple_backup_suffix  =    "~";
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memchr)(void const   *__s ,
                                                                                               int __c ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
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
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memmove)(void *__dest ,
                                                                                                  void const   *__src ,
                                                                                                  size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const   *__s ,
                                                                                               int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2), __leaf__)) strspn)(char const   *__s ,
                                                                                                  char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) lstat)(char const   * __restrict  __file ,
                                                                                              struct stat * __restrict  __buf ) ;
Hash_table *( __attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate ,
                                                                       Hash_tuning const   *tuning ,
                                                                       size_t (*hasher)(void const   * ,
                                                                                        size_t  ) ,
                                                                       _Bool (*comparator)(void const   * ,
                                                                                           void const   * ) ,
                                                                       void (*data_freer)(void * ) ) ;
void hash_free(Hash_table *table___0 ) ;
void ( __attribute__((__nonnull__(2,3))) record_file)(Hash_table *ht___0 , char const   *file ,
                                                      struct stat  const  *stats ) ;
_Bool seen_file(Hash_table const   *ht___0 , char const   *file , struct stat  const  *stats ) ;
size_t triple_hash(void const   *x , size_t table_size ) ;
_Bool triple_compare_ino_str(void const   *x , void const   *y ) ;
void triple_free(void *x ) ;
char *xgetcwd(void) ;
static _Bool seen_triple(Hash_table **ht___0 , char const   *filename , struct stat  const  *st ) 
{ 
  size_t initial_capacity ;
  _Bool tmp ;

  {
  if ((unsigned long )*ht___0 == (unsigned long )((void *)0)) {
    {
    initial_capacity = (size_t )7;
    *ht___0 = hash_initialize(initial_capacity, (Hash_tuning const   *)((void *)0),
                              & triple_hash, & triple_compare_ino_str, & triple_free);
    }
    if ((unsigned long )*ht___0 == (unsigned long )((void *)0)) {
      {
      xalloc_die();
      }
    }
  }
  {
  tmp = seen_file((Hash_table const   *)*ht___0, filename, st);
  }
  if (tmp) {
    return ((_Bool)1);
  }
  {
  record_file(*ht___0, filename, st);
  }
  return ((_Bool)0);
}
}
char *canonicalize_filename_mode(char const   *name , canonicalize_mode_t can_mode ) 
{ 
  char *rname ;
  char *dest ;
  char *extra_buf ;
  char const   *start ;
  char const   *end ;
  char const   *rname_limit ;
  size_t extra_len ;
  Hash_table *ht___0 ;
  int saved_errno ;
  int *tmp ;
  int *tmp___0 ;
  char *p ;
  void *tmp___1 ;
  void *tmp___2 ;
  struct stat st ;
  char *tmp___4 ;
  ptrdiff_t dest_offset ;
  size_t new_size ;
  void *tmp___5 ;
  void *tmp___6 ;
  int *tmp___7 ;
  size_t tmp___8 ;
  int tmp___9 ;
  char *buf___0 ;
  size_t n ;
  size_t len ;
  _Bool tmp___10 ;
  int *tmp___11 ;
  int *tmp___12 ;
  void *tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  int *tmp___17 ;
  void *__cil_tmp37 ;

  {
  extra_buf = (char *)((void *)0);
  extra_len = (size_t )0;
  ht___0 = (Hash_table *)((void *)0);
  if ((unsigned long )name == (unsigned long )((void *)0)) {
    {
    tmp = __errno_location();
    *tmp = 22;
    }
    return ((char *)((void *)0));
  }
  if ((int const   )*(name + 0) == 0) {
    {
    tmp___0 = __errno_location();
    *tmp___0 = 2;
    }
    return ((char *)((void *)0));
  }
  if ((int const   )*(name + 0) != 47) {
    {
    rname = xgetcwd();
    }
    if (! rname) {
      return ((char *)((void *)0));
    }
    {
    dest = strchr((char const   *)rname, '\000');
    }
    if (dest - rname < 4096L) {
      {
      tmp___1 = xrealloc((void *)rname, (size_t )4096);
      p = (char *)tmp___1;
      dest = p + (dest - rname);
      rname = p;
      rname_limit = (char const   *)(rname + 4096);
      }
    } else {
      rname_limit = (char const   *)dest;
    }
  } else {
    {
    tmp___2 = xmalloc((size_t )4096);
    rname = (char *)tmp___2;
    rname_limit = (char const   *)(rname + 4096);
    *(rname + 0) = (char )'/';
    dest = rname + 1;
    }
  }
  start = name;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! *start) {
      goto while_break;
    }
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! ((int const   )*start == 47)) {
        goto while_break___0;
      }
      start ++;
    }
    while_break___5: /* CIL Label */ ;
    }
    while_break___0: 
    end = start;
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;

      if (*end) {
        if (! ((int const   )*end != 47)) {
          goto while_break___1;
        }
      } else {
        goto while_break___1;
      }
      end ++;
    }
    while_break___6: /* CIL Label */ ;
    }
    while_break___1: ;
    if (end - start == 0L) {
      goto while_break;
    } else
    if (end - start == 1L) {
      if (! ((int const   )*(start + 0) == 46)) {
        goto _L___1;
      }
    } else
    _L___1: 
    if (end - start == 2L) {
      if ((int const   )*(start + 0) == 46) {
        if ((int const   )*(start + 1) == 46) {
          if ((unsigned long )dest > (unsigned long )(rname + 1)) {
            {
            while (1) {
              while_continue___2: /* CIL Label */ ;
              dest --;
              if (! ((int )*(dest + -1) != 47)) {
                goto while_break___2;
              }
            }
            while_break___7: /* CIL Label */ ;
            }
            while_break___2: ;
          }
        } else {
          goto _L___0;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      if ((int )*(dest + -1) != 47) {
        tmp___4 = dest;
        dest ++;
        *tmp___4 = (char )'/';
      }
      if ((unsigned long )(dest + (end - start)) >= (unsigned long )rname_limit) {
        dest_offset = dest - rname;
        new_size = (size_t )(rname_limit - (char const   *)rname);
        if ((end - start) + 1L > 4096L) {
          new_size += (size_t )((end - start) + 1L);
        } else {
          new_size += 4096UL;
        }
        {
        tmp___5 = xrealloc((void *)rname, new_size);
        rname = (char *)tmp___5;
        rname_limit = (char const   *)(rname + new_size);
        dest = rname + dest_offset;
        }
      }
      {
      tmp___6 = memcpy((void */* __restrict  */)((void *)dest), (void const   */* __restrict  */)((void const   *)start),
                       (size_t )(end - start));
      dest = (char *)tmp___6;
      dest += end - start;
      *dest = (char )'\000';
      tmp___9 = lstat((char const   */* __restrict  */)((char const   *)rname), (struct stat */* __restrict  */)(& st));
      }
      if (tmp___9 != 0) {
        {
        tmp___7 = __errno_location();
        saved_errno = *tmp___7;
        }
        if ((unsigned int )can_mode == 0U) {
          goto error;
        }
        if ((unsigned int )can_mode == 1U) {
          {
          tmp___8 = strspn(end, "/");
          }
          if (*(end + tmp___8)) {
            goto error;
          } else
          if (saved_errno != 2) {
            goto error;
          }
          goto __Cont;
        }
        st.st_mode = (__mode_t )0;
      }
      if ((st.st_mode & 61440U) == 40960U) {
        {
        tmp___10 = seen_triple(& ht___0, name, (struct stat  const  *)(& st));
        }
        if (tmp___10) {
          if ((unsigned int )can_mode == 2U) {
            goto __Cont;
          }
          saved_errno = 40;
          goto error;
        }
        {
        buf___0 = areadlink_with_size((char const   *)rname, (size_t )st.st_size);
        }
        if (! buf___0) {
          if ((unsigned int )can_mode == 2U) {
            {
            tmp___11 = __errno_location();
            }
            if (*tmp___11 != 12) {
              goto __Cont;
            }
          }
          {
          tmp___12 = __errno_location();
          saved_errno = *tmp___12;
          }
          goto error;
        }
        {
        n = strlen((char const   *)buf___0);
        len = strlen(end);
        }
        if (! extra_len) {
          if ((n + len) + 1UL > 4096UL) {
            extra_len = (n + len) + 1UL;
          } else {
            extra_len = (size_t )4096;
          }
          {
          tmp___13 = xmalloc(extra_len);
          extra_buf = (char *)tmp___13;
          }
        } else
        if ((n + len) + 1UL > extra_len) {
          {
          extra_len = (n + len) + 1UL;
          tmp___14 = xrealloc((void *)extra_buf, extra_len);
          extra_buf = (char *)tmp___14;
          }
        }
        {
        memmove((void *)(extra_buf + n), (void const   *)end, len + 1UL);
        tmp___15 = memcpy((void */* __restrict  */)((void *)extra_buf), (void const   */* __restrict  */)((void const   *)buf___0),
                          n);
        end = (char const   *)tmp___15;
        name = end;
        }
        if ((int )*(buf___0 + 0) == 47) {
          dest = rname + 1;
        } else
        if ((unsigned long )dest > (unsigned long )(rname + 1)) {
          {
          while (1) {
            while_continue___3: /* CIL Label */ ;
            dest --;
            if (! ((int )*(dest + -1) != 47)) {
              goto while_break___3;
            }
          }
          while_break___8: /* CIL Label */ ;
          }
          while_break___3: ;
        }
        {
        free((void *)buf___0);
        }
      } else
      if (! ((st.st_mode & 61440U) == 16384U)) {
        if (*end) {
          if ((unsigned int )can_mode != 2U) {
            saved_errno = 20;
            goto error;
          }
        }
      }
    }
    __Cont: 
    start = end;
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break: ;
  if ((unsigned long )dest > (unsigned long )(rname + 1)) {
    if ((int )*(dest + -1) == 47) {
      dest --;
    }
  }
  {
  *dest = (char )'\000';
  free((void *)extra_buf);
  }
  if (ht___0) {
    {
    hash_free(ht___0);
    }
  }
  return (rname);
  error: 
  {
  free((void *)extra_buf);
  free((void *)rname);
  }
  if (ht___0) {
    {
    hash_free(ht___0);
    }
  }
  {
  tmp___17 = __errno_location();
  *tmp___17 = saved_errno;
  }
  return ((char *)((void *)0));
}
}
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) __assert_fail)(char const   *__assertion ,
                                                                                                   char const   *__file ,
                                                                                                   unsigned int __line ,
                                                                                                   char const   *__function ) ;
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
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) __ctype_get_mb_cur_max)(void) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strrchr)(char const   *__s ,
                                                                                                int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wint_t ( __attribute__((__leaf__)) towlower)(wint_t __wc ) ;
void *hash_lookup(Hash_table const   *table___0 , void const   *entry ) ;
void *( __attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table___0 ,
                                                             void const   *entry ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) mbsinit)(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) mbrtowc)(wchar_t * __restrict  __pwc ,
                                                                                 char const   * __restrict  __s ,
                                                                                 size_t __n ,
                                                                                 mbstate_t * __restrict  __p ) ;
unsigned int const   is_basic_table[8] ;
char *xstrdup(char const   *string )  __attribute__((__malloc__)) ;
int volatile   exit_failure  =    (int volatile   )1;
void ( __attribute__((__nonnull__(2,3))) record_file)(Hash_table *ht___0 , char const   *file ,
                                                      struct stat  const  *stats ) 
{ 
  struct F_triple *ent ;
  void *tmp ;
  struct F_triple *ent_from_table ;
  void *tmp___0 ;

  {
  if ((unsigned long )ht___0 == (unsigned long )((void *)0)) {
    return;
  }
  {
  tmp = xmalloc(sizeof(*ent));
  ent = (struct F_triple *)tmp;
  ent->name = xstrdup(file);
  ent->st_ino = (ino_t )stats->st_ino;
  ent->st_dev = (dev_t )stats->st_dev;
  tmp___0 = hash_insert(ht___0, (void const   *)ent);
  ent_from_table = (struct F_triple *)tmp___0;
  }
  if ((unsigned long )ent_from_table == (unsigned long )((void *)0)) {
    {
    xalloc_die();
    }
  }
  if ((unsigned long )ent_from_table != (unsigned long )ent) {
    {
    triple_free((void *)ent);
    }
  }
  return;
}
}
_Bool seen_file(Hash_table const   *ht___0 , char const   *file , struct stat  const  *stats ) 
{ 
  struct F_triple new_ent ;
  void *tmp ;
  int tmp___0 ;

  {
  if ((unsigned long )ht___0 == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  }
  {
  new_ent.name = (char *)file;
  new_ent.st_ino = (ino_t )stats->st_ino;
  new_ent.st_dev = (dev_t )stats->st_dev;
  tmp = hash_lookup(ht___0, (void const   *)(& new_ent));
  }
  if (tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  return ((_Bool )tmp___0);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
void *xmemdup(void const   *p , size_t s )  __attribute__((__malloc__)) ;
size_t hash_pjw(void const   *x , size_t tablesize ) ;
size_t hash_pjw(void const   *x , size_t tablesize ) 
{ 
  char const   *s ;
  size_t h ;

  {
  h = (size_t )0;
  s = (char const   *)x;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! *s) {
      goto while_break;
    }
    h = (unsigned long )*s + ((h << 9) | (h >> (sizeof(size_t ) * 8UL - 9UL)));
    s ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (h % tablesize);
}
}
size_t triple_hash(void const   *x , size_t table_size ) 
{ 
  struct F_triple  const  *p ;
  size_t tmp ;
  size_t tmp___0 ;

  {
  {
  p = (struct F_triple  const  *)x;
  tmp___0 = hash_pjw((void const   *)p->name, table_size);
  tmp = tmp___0;
  }
  return ((tmp ^ (unsigned long )p->st_ino) % table_size);
}
}
_Bool triple_compare_ino_str(void const   *x , void const   *y ) 
{ 
  struct F_triple  const  *a ;
  struct F_triple  const  *b ;
  int tmp___0 ;
  int tmp___1 ;

  {
  a = (struct F_triple  const  *)x;
  b = (struct F_triple  const  *)y;
  if (a->st_ino == b->st_ino) {
    if (a->st_dev == b->st_dev) {
      {
      tmp___1 = strcmp((char const   *)a->name, (char const   *)b->name);
      }
      if (tmp___1 == 0) {
        tmp___0 = 1;
      } else {
        tmp___0 = 0;
      }
    } else {
      tmp___0 = 0;
    }
  } else {
    tmp___0 = 0;
  }
  return ((_Bool )tmp___0);
}
}
void triple_free(void *x ) 
{ 
  struct F_triple *a ;

  {
  {
  a = (struct F_triple *)x;
  free((void *)a->name);
  free((void *)a);
  }
  return;
}
}
_Bool ( __attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table___0 ,
                                                             size_t candidate ) ;
__inline static size_t rotr_sz(size_t x , int n ) 
{ 


  {
  return (((x >> n) | (x << (8UL * sizeof(x) - (unsigned long )n))) & 0xffffffffffffffffUL);
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) calloc)(size_t __nmemb ,
                                                                               size_t __size )  __attribute__((__malloc__)) ;
static struct hash_tuning  const  default_tuning  =    {(float )0.0, (float )1.0, (float )0.8, (float )1.414, (_Bool)0};
void *hash_lookup(Hash_table const   *table___0 , void const   *entry ) 
{ 
  struct hash_entry  const  *bucket ;
  size_t tmp ;
  struct hash_entry  const  *cursor ;
  _Bool tmp___0 ;

  {
  {
  tmp = (*(table___0->hasher))(entry, (size_t )table___0->n_buckets);
  bucket = (struct hash_entry  const  *)(table___0->bucket + tmp);
  }
  if (! ((unsigned long )bucket < (unsigned long )table___0->bucket_limit)) {
    {
    abort();
    }
  }
  if ((unsigned long )bucket->data == (unsigned long )((void *)0)) {
    return ((void *)0);
  }
  cursor = bucket;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! cursor) {
      goto while_break;
    }
    if ((unsigned long )entry == (unsigned long )cursor->data) {
      return ((void *)cursor->data);
    } else {
      {
      tmp___0 = (*(table___0->comparator))(entry, (void const   *)cursor->data);
      }
      if (tmp___0) {
        return ((void *)cursor->data);
      }
    }
    cursor = (struct hash_entry  const  *)cursor->next;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((void *)0);
}
}
static _Bool is_prime(size_t candidate ) 
{ 
  size_t divisor ;
  size_t square ;
  int tmp ;

  {
  divisor = (size_t )3;
  square = divisor * divisor;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (square < candidate) {
      if (! (candidate % divisor)) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    divisor ++;
    square += 4UL * divisor;
    divisor ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (candidate % divisor) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  return ((_Bool )tmp);
}
}
static size_t next_prime(size_t candidate ) 
{ 
  _Bool tmp ;

  {
  if (candidate < 10UL) {
    candidate = (size_t )10;
  }
  candidate |= 1UL;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (0xffffffffffffffffUL != candidate) {
      {
      tmp = is_prime(candidate);
      }
      if (tmp) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    candidate += 2UL;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (candidate);
}
}
static size_t raw_hasher(void const   *data , size_t n ) 
{ 
  size_t val ;
  size_t tmp ;

  {
  {
  tmp = rotr_sz((size_t )data, 3);
  val = tmp;
  }
  return (val % n);
}
}
static _Bool raw_comparator(void const   *a , void const   *b ) 
{ 


  {
  return ((_Bool )((unsigned long )a == (unsigned long )b));
}
}
static _Bool check_tuning(Hash_table *table___0 ) 
{ 
  Hash_tuning const   *tuning ;
  float epsilon ;

  {
  tuning = table___0->tuning;
  if ((unsigned long )tuning == (unsigned long )(& default_tuning)) {
    return ((_Bool)1);
  }
  epsilon = 0.1f;
  if (epsilon < (float )tuning->growth_threshold) {
    if (tuning->growth_threshold < (float const   )((float )1 - epsilon)) {
      if ((float )1 + epsilon < (float )tuning->growth_factor) {
        if ((float const   )0 <= tuning->shrink_threshold) {
          if (tuning->shrink_threshold + (float const   )epsilon < tuning->shrink_factor) {
            if (tuning->shrink_factor <= (float const   )1) {
              if (tuning->shrink_threshold + (float const   )epsilon < tuning->growth_threshold) {
                return ((_Bool)1);
              }
            }
          }
        }
      }
    }
  }
  table___0->tuning = & default_tuning;
  return ((_Bool)0);
}
}
static size_t compute_bucket_size(size_t candidate , Hash_tuning const   *tuning ) 
{ 
  float new_candidate ;
  int tmp ;

  {
  if (! tuning->is_n_buckets) {
    new_candidate = (float )((float const   )candidate / tuning->growth_threshold);
    if ((float )0xffffffffffffffffUL <= new_candidate) {
      return ((size_t )0);
    }
    candidate = (size_t )new_candidate;
  }
  {
  candidate = next_prime(candidate);
  }
  if (sizeof(ptrdiff_t ) <= sizeof(size_t )) {
    tmp = -1;
  } else {
    tmp = -2;
  }
  if ((size_t )tmp / sizeof(struct hash_entry *) < candidate) {
    return ((size_t )0);
  }
  return (candidate);
}
}
Hash_table *( __attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate ,
                                                                       Hash_tuning const   *tuning ,
                                                                       size_t (*hasher)(void const   * ,
                                                                                        size_t  ) ,
                                                                       _Bool (*comparator)(void const   * ,
                                                                                           void const   * ) ,
                                                                       void (*data_freer)(void * ) ) 
{ 
  Hash_table *table___0 ;
  void *tmp ;
  _Bool tmp___0 ;
  void *tmp___1 ;

  {
  if ((unsigned long )hasher == (unsigned long )((void *)0)) {
    hasher = & raw_hasher;
  }
  if ((unsigned long )comparator == (unsigned long )((void *)0)) {
    comparator = & raw_comparator;
  }
  {
  tmp = malloc(sizeof(*table___0));
  table___0 = (Hash_table *)tmp;
  }
  if ((unsigned long )table___0 == (unsigned long )((void *)0)) {
    return ((Hash_table *)((void *)0));
  }
  if (! tuning) {
    tuning = & default_tuning;
  }
  {
  table___0->tuning = tuning;
  tmp___0 = check_tuning(table___0);
  }
  if (! tmp___0) {
    goto fail;
  }
  {
  table___0->n_buckets = compute_bucket_size(candidate, tuning);
  }
  if (! table___0->n_buckets) {
    goto fail;
  }
  {
  tmp___1 = calloc(table___0->n_buckets, sizeof(*(table___0->bucket)));
  table___0->bucket = (struct hash_entry *)tmp___1;
  }
  if ((unsigned long )table___0->bucket == (unsigned long )((void *)0)) {
    goto fail;
  }
  table___0->bucket_limit = (struct hash_entry  const  *)(table___0->bucket + table___0->n_buckets);
  table___0->n_buckets_used = (size_t )0;
  table___0->n_entries = (size_t )0;
  table___0->hasher = hasher;
  table___0->comparator = comparator;
  table___0->data_freer = data_freer;
  table___0->free_entry_list = (struct hash_entry *)((void *)0);
  return (table___0);
  fail: 
  {
  free((void *)table___0);
  }
  return ((Hash_table *)((void *)0));
}
}
void hash_free(Hash_table *table___0 ) 
{ 
  struct hash_entry *bucket ;
  struct hash_entry *cursor ;
  struct hash_entry *next ;

  {
  if (table___0->data_freer) {
    if (table___0->n_entries) {
      bucket = table___0->bucket;
      {
      while (1) {
        while_continue: /* CIL Label */ ;

        if (! ((unsigned long )bucket < (unsigned long )table___0->bucket_limit)) {
          goto while_break;
        }
        if (bucket->data) {
          cursor = bucket;
          {
          while (1) {
            while_continue___0: /* CIL Label */ ;

            if (! cursor) {
              goto while_break___0;
            }
            {
            (*(table___0->data_freer))(cursor->data);
            cursor = cursor->next;
            }
          }
          while_break___5: /* CIL Label */ ;
          }
          while_break___0: ;
        }
        bucket ++;
      }
      while_break___4: /* CIL Label */ ;
      }
      while_break: ;
    }
  }
  bucket = table___0->bucket;
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;

    if (! ((unsigned long )bucket < (unsigned long )table___0->bucket_limit)) {
      goto while_break___1;
    }
    cursor = bucket->next;
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;

      if (! cursor) {
        goto while_break___2;
      }
      {
      next = cursor->next;
      free((void *)cursor);
      cursor = next;
      }
    }
    while_break___7: /* CIL Label */ ;
    }
    while_break___2: 
    bucket ++;
  }
  while_break___6: /* CIL Label */ ;
  }
  while_break___1: 
  cursor = table___0->free_entry_list;
  {
  while (1) {
    while_continue___3: /* CIL Label */ ;

    if (! cursor) {
      goto while_break___3;
    }
    {
    next = cursor->next;
    free((void *)cursor);
    cursor = next;
    }
  }
  while_break___8: /* CIL Label */ ;
  }
  while_break___3: 
  {
  free((void *)table___0->bucket);
  free((void *)table___0);
  }
  return;
}
}
static struct hash_entry *allocate_entry(Hash_table *table___0 ) 
{ 
  struct hash_entry *new ;
  void *tmp ;

  {
  if (table___0->free_entry_list) {
    new = table___0->free_entry_list;
    table___0->free_entry_list = new->next;
  } else {
    {
    tmp = malloc(sizeof(*new));
    new = (struct hash_entry *)tmp;
    }
  }
  return (new);
}
}
static void free_entry(Hash_table *table___0 , struct hash_entry *entry ) 
{ 


  {
  entry->data = (void *)0;
  entry->next = table___0->free_entry_list;
  table___0->free_entry_list = entry;
  return;
}
}
static void *hash_find_entry(Hash_table *table___0 , void const   *entry , struct hash_entry **bucket_head ,
                             _Bool delete ) 
{ 
  struct hash_entry *bucket ;
  size_t tmp ;
  struct hash_entry *cursor ;
  void *data ;
  struct hash_entry *next ;
  _Bool tmp___0 ;
  void *data___0 ;
  struct hash_entry *next___0 ;
  _Bool tmp___1 ;

  {
  {
  tmp = (*(table___0->hasher))(entry, table___0->n_buckets);
  bucket = table___0->bucket + tmp;
  }
  if (! ((unsigned long )bucket < (unsigned long )table___0->bucket_limit)) {
    {
    abort();
    }
  }
  *bucket_head = bucket;
  if ((unsigned long )bucket->data == (unsigned long )((void *)0)) {
    return ((void *)0);
  }
  if ((unsigned long )entry == (unsigned long )bucket->data) {
    goto _L;
  } else {
    {
    tmp___0 = (*(table___0->comparator))(entry, (void const   *)bucket->data);
    }
    if (tmp___0) {
      _L: 
      data = bucket->data;
      if (delete) {
        if (bucket->next) {
          {
          next = bucket->next;
          *bucket = *next;
          free_entry(table___0, next);
          }
        } else {
          bucket->data = (void *)0;
        }
      }
      return (data);
    }
  }
  cursor = bucket;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! cursor->next) {
      goto while_break;
    }
    if ((unsigned long )entry == (unsigned long )(cursor->next)->data) {
      goto _L___0;
    } else {
      {
      tmp___1 = (*(table___0->comparator))(entry, (void const   *)(cursor->next)->data);
      }
      if (tmp___1) {
        _L___0: 
        data___0 = (cursor->next)->data;
        if (delete) {
          {
          next___0 = cursor->next;
          cursor->next = next___0->next;
          free_entry(table___0, next___0);
          }
        }
        return (data___0);
      }
    }
    cursor = cursor->next;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((void *)0);
}
}
static _Bool transfer_entries(Hash_table *dst , Hash_table *src , _Bool safe ) 
{ 
  struct hash_entry *bucket ;
  struct hash_entry *cursor ;
  struct hash_entry *next ;
  void *data ;
  struct hash_entry *new_bucket ;
  size_t tmp ;
  size_t tmp___0 ;
  struct hash_entry *new_entry ;
  struct hash_entry *tmp___1 ;

  {
  bucket = src->bucket;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((unsigned long )bucket < (unsigned long )src->bucket_limit)) {
      goto while_break;
    }
    if (bucket->data) {
      cursor = bucket->next;
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;

        if (! cursor) {
          goto while_break___0;
        }
        {
        data = cursor->data;
        tmp = (*(dst->hasher))((void const   *)data, dst->n_buckets);
        new_bucket = dst->bucket + tmp;
        }
        if (! ((unsigned long )new_bucket < (unsigned long )dst->bucket_limit)) {
          {
          abort();
          }
        }
        next = cursor->next;
        if (new_bucket->data) {
          cursor->next = new_bucket->next;
          new_bucket->next = cursor;
        } else {
          {
          new_bucket->data = data;
          (dst->n_buckets_used) ++;
          free_entry(dst, cursor);
          }
        }
        cursor = next;
      }
      while_break___2: /* CIL Label */ ;
      }
      while_break___0: 
      data = bucket->data;
      bucket->next = (struct hash_entry *)((void *)0);
      if (safe) {
        goto __Cont;
      }
      {
      tmp___0 = (*(dst->hasher))((void const   *)data, dst->n_buckets);
      new_bucket = dst->bucket + tmp___0;
      }
      if (! ((unsigned long )new_bucket < (unsigned long )dst->bucket_limit)) {
        {
        abort();
        }
      }
      if (new_bucket->data) {
        {
        tmp___1 = allocate_entry(dst);
        new_entry = tmp___1;
        }
        if ((unsigned long )new_entry == (unsigned long )((void *)0)) {
          return ((_Bool)0);
        }
        new_entry->data = data;
        new_entry->next = new_bucket->next;
        new_bucket->next = new_entry;
      } else {
        new_bucket->data = data;
        (dst->n_buckets_used) ++;
      }
      bucket->data = (void *)0;
      (src->n_buckets_used) --;
    }
    __Cont: 
    bucket ++;
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)1);
}
}
_Bool ( __attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table___0 ,
                                                             size_t candidate ) 
{ 
  Hash_table storage ;
  Hash_table *new_table ;
  size_t new_size ;
  size_t tmp ;
  void *tmp___0 ;
  _Bool tmp___1 ;
  _Bool tmp___2 ;
  _Bool tmp___3 ;

  {
  {
  tmp = compute_bucket_size(candidate, table___0->tuning);
  new_size = tmp;
  }
  if (! new_size) {
    return ((_Bool)0);
  }
  if (new_size == table___0->n_buckets) {
    return ((_Bool)1);
  }
  {
  new_table = & storage;
  tmp___0 = calloc(new_size, sizeof(*(new_table->bucket)));
  new_table->bucket = (struct hash_entry *)tmp___0;
  }
  if ((unsigned long )new_table->bucket == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  }
  {
  new_table->n_buckets = new_size;
  new_table->bucket_limit = (struct hash_entry  const  *)(new_table->bucket + new_size);
  new_table->n_buckets_used = (size_t )0;
  new_table->n_entries = (size_t )0;
  new_table->tuning = table___0->tuning;
  new_table->hasher = table___0->hasher;
  new_table->comparator = table___0->comparator;
  new_table->data_freer = table___0->data_freer;
  new_table->free_entry_list = table___0->free_entry_list;
  tmp___1 = transfer_entries(new_table, table___0, (_Bool)0);
  }
  if (tmp___1) {
    {
    free((void *)table___0->bucket);
    table___0->bucket = new_table->bucket;
    table___0->bucket_limit = new_table->bucket_limit;
    table___0->n_buckets = new_table->n_buckets;
    table___0->n_buckets_used = new_table->n_buckets_used;
    table___0->free_entry_list = new_table->free_entry_list;
    }
    return ((_Bool)1);
  }
  {
  table___0->free_entry_list = new_table->free_entry_list;
  tmp___2 = transfer_entries(table___0, new_table, (_Bool)1);
  }
  if (tmp___2) {
    {
    tmp___3 = transfer_entries(table___0, new_table, (_Bool)0);
    }
    if (! tmp___3) {
      {
      abort();
      }
    }
  } else {
    {
    abort();
    }
  }
  {
  free((void *)new_table->bucket);
  }
  return ((_Bool)0);
}
}
void *( __attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table___0 ,
                                                             void const   *entry ) 
{ 
  void *data ;
  struct hash_entry *bucket ;
  Hash_tuning const   *tuning ;
  float candidate ;
  float tmp ;
  _Bool tmp___0 ;
  void *tmp___1 ;
  struct hash_entry *new_entry ;
  struct hash_entry *tmp___2 ;

  {
  if (! entry) {
    {
    abort();
    }
  }
  {
  data = hash_find_entry(table___0, entry, & bucket, (_Bool)0);
  }
  if ((unsigned long )data != (unsigned long )((void *)0)) {
    return (data);
  }
  if ((float const   )table___0->n_buckets_used > (table___0->tuning)->growth_threshold * (float const   )table___0->n_buckets) {
    {
    check_tuning(table___0);
    }
    if ((float const   )table___0->n_buckets_used > (table___0->tuning)->growth_threshold * (float const   )table___0->n_buckets) {
      tuning = table___0->tuning;
      if (tuning->is_n_buckets) {
        tmp = (float )((float const   )table___0->n_buckets * tuning->growth_factor);
      } else {
        tmp = (float )(((float const   )table___0->n_buckets * tuning->growth_factor) * tuning->growth_threshold);
      }
      candidate = tmp;
      if ((float )0xffffffffffffffffUL <= candidate) {
        return ((void *)0);
      }
      {
      tmp___0 = hash_rehash(table___0, (size_t )candidate);
      }
      if (! tmp___0) {
        return ((void *)0);
      }
      {
      tmp___1 = hash_find_entry(table___0, entry, & bucket, (_Bool)0);
      }
      if ((unsigned long )tmp___1 != (unsigned long )((void *)0)) {
        {
        abort();
        }
      }
    }
  }
  if (bucket->data) {
    {
    tmp___2 = allocate_entry(table___0);
    new_entry = tmp___2;
    }
    if ((unsigned long )new_entry == (unsigned long )((void *)0)) {
      return ((void *)0);
    }
    new_entry->data = (void *)entry;
    new_entry->next = bucket->next;
    bucket->next = new_entry;
    (table___0->n_entries) ++;
    return ((void *)entry);
  }
  bucket->data = (void *)entry;
  (table___0->n_entries) ++;
  (table___0->n_buckets_used) ++;
  return ((void *)entry);
}
}
void version_etc_va(FILE *stream , char const   *command_name , char const   *package ,
                    char const   *version , va_list authors ) ;
unsigned int const   is_basic_table[8]  = {      (unsigned int const   )6656,      (unsigned int const   )4294967279U,      (unsigned int const   )4294967294U,      (unsigned int const   )2147483646};
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswprint)(wint_t __wc ) ;
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
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) getcwd)(char *__buf ,
                                                                               size_t __size ) ;
char *xgetcwd(void) 
{ 
  char *cwd ;
  char *tmp ;
  int *tmp___0 ;

  {
  {
  tmp = getcwd((char *)((void *)0), (size_t )0);
  cwd = tmp;
  }
  if (! cwd) {
    {
    tmp___0 = __errno_location();
    }
    if (*tmp___0 == 12) {
      {
      xalloc_die();
      }
    }
  }
  return (cwd);
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
void *xmemdup(void const   *p , size_t s )  __attribute__((__malloc__)) ;
void *xmemdup(void const   *p , size_t s ) 
{ 
  void *tmp ;
  void *tmp___0 ;

  {
  {
  tmp = xmalloc(s);
  tmp___0 = memcpy((void */* __restrict  */)tmp, (void const   */* __restrict  */)p,
                   s);
  }
  return (tmp___0);
}
}
char *xstrdup(char const   *string )  __attribute__((__malloc__)) ;
char *xstrdup(char const   *string ) 
{ 
  size_t tmp ;
  void *tmp___0 ;

  {
  {
  tmp = strlen(string);
  tmp___0 = xmemdup((void const   *)string, tmp + 1UL);
  }
  return ((char *)tmp___0);
}
}
char const   *Version  =    "8.1";
