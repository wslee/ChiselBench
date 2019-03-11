typedef unsigned long size_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
typedef long __time_t;
typedef long __suseconds_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
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
typedef __off_t off_t;
typedef long ptrdiff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __mode_t mode_t;
typedef __pid_t pid_t;
typedef __time_t time_t;
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
};
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef long __fd_mask;
struct __anonstruct_fd_set_356711149 {
   __fd_mask fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_356711149 fd_set;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
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
typedef unsigned int uint32_t;
typedef unsigned long uintmax_t;
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
typedef enum strtol_error strtol_error;
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
struct inotify_event {
   int wd ;
   uint32_t mask ;
   uint32_t cookie ;
   uint32_t len ;
   char name[] ;
};
enum Follow_mode {
    Follow_name = 1,
    Follow_descriptor = 2
} ;
struct File_spec {
   char *name ;
   int fd ;
   off_t size ;
   struct timespec mtime ;
   dev_t dev ;
   ino_t ino ;
   mode_t mode ;
   int blocking ;
   _Bool ignore ;
   uintmax_t n_unchanged_stats ;
   _Bool tailable ;
   int errnum ;
   int wd ;
   int parent_wd ;
   size_t basename_start ;
};
enum header_mode {
    multiple_files = 0,
    always = 1,
    never = 2
} ;
struct linebuffer {
   char buffer[8192] ;
   size_t nbytes ;
   size_t nlines ;
   struct linebuffer *next ;
};
typedef struct linebuffer LBUFFER;
struct charbuffer {
   char buffer[8192] ;
   size_t nbytes ;
   struct charbuffer *next ;
};
typedef struct charbuffer CBUFFER;
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
struct __locale_data;
struct __locale_data;
struct __locale_data;
struct __locale_struct {
   struct __locale_data *__locales[13] ;
   unsigned short const   *__ctype_b ;
   int const   *__ctype_tolower ;
   int const   *__ctype_toupper ;
   char const   *__names[13] ;
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_408955830 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_408955830 __mbstate_t;
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
typedef int __clockid_t;
typedef __clockid_t clockid_t;
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
typedef struct timezone * __restrict  __timezone_ptr_t;
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
extern int fflush_unlocked(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size , size_t __n ,
                              FILE * __restrict  __stream ) ;
extern int select(int __nfds , fd_set * __restrict  __readfds , fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds , struct timeval * __restrict  __timeout ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) kill)(__pid_t __pid ,
                                                                           int __sig ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd ,
                                                                                            struct stat *__buf ) ;
extern  __attribute__((__nothrow__)) __off_t ( __attribute__((__leaf__)) lseek)(int __fd ,
                                                                                __off_t __offset ,
                                                                                int __whence ) ;
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isatty)(int __fd ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memchr)(void const   *__s ,
                                                                                               int __c ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memrchr)(void const   *__s ,
                                                                                                int __c ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
extern int fcntl(int __fd , int __cmd  , ...) ;
__inline static int timespec_cmp(struct timespec a , struct timespec b ) 
{ 
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  if (a.tv_sec < b.tv_sec) {
    tmp___2 = -1;
  } else {
    if (a.tv_sec > b.tv_sec) {
      tmp___1 = 1;
    } else {
      if (a.tv_nsec < b.tv_nsec) {
        tmp___0 = -1;
      } else {
        if (a.tv_nsec > b.tv_nsec) {
          tmp = 1;
        } else {
          tmp = 0;
        }
        tmp___0 = tmp;
      }
      tmp___1 = tmp___0;
    }
    tmp___2 = tmp___1;
  }
  return (tmp___2);
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
void *xrealloc(void *p , size_t n ) ;
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
size_t dir_len(char const   *file ) ;
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
char *( __attribute__((__warn_unused_result__)) offtostr)(off_t i , char *buf___0 ) ;
 __attribute__((__noreturn__)) void usage(int status ) ;
void (*argmatch_die)(void) ;
ptrdiff_t __xargmatch_internal(char const   *context , char const   *arg , char const   * const  *arglist ,
                               char const   *vallist , size_t valsize , void (*exit_fn)(void) ) ;
double c_strtod(char const   *nptr , char **endptr ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
int open_safer(char const   *file , int flags  , ...) ;
int posix2_version(void) ;
char const   *quote(char const   *name ) ;
size_t safe_read(int fd , void *buf___0 , size_t count ) ;
__inline static struct timespec get_stat_mtime(struct stat  const  *st ) 
{ 


  {
  return ((struct timespec )st->st_mtim);
}
}
int xnanosleep(double seconds ) ;
strtol_error xstrtoul(char const   *s , char **ptr , int strtol_base , unsigned long *val ,
                      char const   *valid_suffixes ) ;
strtol_error xstrtoumax(char const   *s , char **ptr , int strtol_base , uintmax_t *val ,
                        char const   *valid_suffixes ) ;
_Bool xstrtod(char const   *str , char const   **ptr , double *result , double (*convert)(char const   * ,
                                                                                          char ** ) ) ;
void *hash_lookup(Hash_table const   *table___0 , void const   *entry ) ;
Hash_table *( __attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate ,
                                                                       Hash_tuning const   *tuning ,
                                                                       size_t (*hasher)(void const   * ,
                                                                                        size_t  ) ,
                                                                       _Bool (*comparator)(void const   * ,
                                                                                           void const   * ) ,
                                                                       void (*data_freer)(void * ) ) ;
void *( __attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table___0 ,
                                                             void const   *entry ) ;
void *hash_delete(Hash_table *table___0 , void const   *entry ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) inotify_init)(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) inotify_add_watch)(int __fd ,
                                                                                        char const   *__name ,
                                                                                        uint32_t __mask ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) inotify_rm_watch)(int __fd ,
                                                                                       int __wd ) ;
static char const   * const  follow_mode_string[3]  = {      (char const   */* const  */)"descriptor",      (char const   */* const  */)"name",      (char const   */* const  */)((char const   *)((void *)0))};
static enum Follow_mode  const  follow_mode_map[2]  = {      (enum Follow_mode  const  )2,      (enum Follow_mode  const  )1};
unsigned int const   inotify_wd_mask  =    (uint32_t const   )3078;
static _Bool reopen_inaccessible_files  ;
static _Bool count_lines  ;
static enum Follow_mode follow_mode  =    (enum Follow_mode )2;
static _Bool forever  ;
static _Bool from_start  ;
static _Bool print_headers  ;
static uintmax_t max_n_unchanged_stats_between_opens  =    (uintmax_t )5;
static pid_t pid  ;
static _Bool have_read_stdin  ;
static _Bool presume_input_pipe  ;
static _Bool disable_inotify  ;
static struct option  const  long_options[15]  = 
  {      {"bytes", 1, (int *)((void *)0), 'c'}, 
        {"follow", 2, (int *)((void *)0), 132}, 
        {"lines", 1, (int *)((void *)0), 'n'}, 
        {"max-unchanged-stats", 1, (int *)((void *)0), 129}, 
        {"-disable-inotify", 0, (int *)((void *)0), 133}, 
        {"pid", 1, (int *)((void *)0), 130}, 
        {"-presume-input-pipe", 0, (int *)((void *)0), 131}, 
        {"quiet", 0, (int *)((void *)0), 'q'}, 
        {"retry", 0, (int *)((void *)0), 128}, 
        {"silent", 0, (int *)((void *)0), 'q'}, 
        {"sleep-interval", 1, (int *)((void *)0), 's'}, 
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
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *__cil_tmp30 ;
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
  char *__cil_tmp43 ;

  {
  if (status != 0) {
    {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)tmp),
            program_name);
    }
  } else {
    {
    tmp___0 = gettext("Usage: %s [OPTION]... [FILE]...\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name);
    tmp___1 = gettext("Print the last %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\nWith no FILE, or when FILE is -, read standard input.\n\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___1), 10);
    tmp___2 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -c, --bytes=K            output the last K bytes; alternatively, use -c +K\n                           to output bytes starting with the Kth of each file\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("  -f, --follow[={name|descriptor}]\n                           output appended data as the file grows;\n                           -f, --follow, and --follow=descriptor are\n                           equivalent\n  -F                       same as --follow=name --retry\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  -n, --lines=K            output the last K lines, instead of the last %d;\n                           or use -n +K to output lines starting with the Kth\n      --max-unchanged-stats=N\n                           with --follow=name, reopen a FILE which has not\n                           changed size after N (default %d) iterations\n                           to see if it has been unlinked or renamed\n                           (this is the usual case of rotated log files)\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___5), 10, 5);
    tmp___6 = gettext("      --pid=PID            with -f, terminate after process ID, PID dies\n  -q, --quiet, --silent    never output headers giving file names\n      --retry              keep trying to open a file even when it is or\n                             becomes inaccessible; useful when following by\n                             name, i.e., with --follow=name\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___6), (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n                             (default 1.0) between iterations\n  -v, --verbose            always output headers giving file names\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___7), (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___8), (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___9), (FILE */* __restrict  */)stdout);
    tmp___10 = gettext("\nIf the first character of K (the number of bytes or lines) is a `+\',\nprint beginning with the Kth item from the start of each file, otherwise,\nprint the last K items in the file.  K may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___10), (FILE */* __restrict  */)stdout);
    tmp___11 = gettext("With --follow (-f), tail defaults to following the file descriptor, which\nmeans that even if a tail\'ed file is renamed, tail will continue to track\nits end.  ");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___11), (FILE */* __restrict  */)stdout);
    tmp___12 = gettext("This default behavior is not desirable when you really want to\ntrack the actual name of the file, not the file descriptor (e.g., log\nrotation).  Use --follow=name in that case.  That causes tail to track the\nnamed file by reopening it periodically to see if it has been removed and\nrecreated by some other program.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___12), (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
    }
  }
  {
  exit(status);
  }
}
}
static _Bool valid_file_spec(struct File_spec  const  *f ) 
{ 


  {
  return ((_Bool )((f->fd == -1) ^ (f->errnum == 0)));
}
}
static char const   *pretty_name(struct File_spec  const  *f ) 
{ 
  char *tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *__cil_tmp6 ;

  {
  {
  tmp___2 = strcmp((char const   *)f->name, "-");
  }
  if (tmp___2 == 0) {
    {
    tmp___0 = gettext("standard input");
    tmp___1 = tmp___0;
    }
  } else {
    tmp___1 = (char *)f->name;
  }
  return ((char const   *)tmp___1);
}
}
static void xwrite_stdout(char const   *buffer , size_t n_bytes ) 
{ 
  char *tmp ;
  int *tmp___0 ;
  size_t tmp___1 ;
  char *__cil_tmp7 ;

  {
  if (n_bytes > 0UL) {
    {
    tmp___1 = fwrite_unlocked((void const   */* __restrict  */)((void const   *)buffer),
                              (size_t )1, n_bytes, (FILE */* __restrict  */)stdout);
    }
    if (tmp___1 == 0UL) {
      {
      tmp = gettext("write error");
      tmp___0 = __errno_location();
      error(1, *tmp___0, (char const   *)tmp);
      }
    }
  }
  return;
}
}
static void record_open_fd(struct File_spec *f , int fd , off_t size , struct stat  const  *st ,
                           int blocking ) 
{ 


  {
  {
  f->fd = fd;
  f->size = size;
  f->mtime = get_stat_mtime(st);
  f->dev = (dev_t )st->st_dev;
  f->ino = (ino_t )st->st_ino;
  f->mode = (mode_t )st->st_mode;
  f->blocking = blocking;
  f->n_unchanged_stats = (uintmax_t )0;
  f->ignore = (_Bool)0;
  }
  return;
}
}
static void close_fd(int fd , char const   *filename ) 
{ 
  char *tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  char *__cil_tmp7 ;

  {
  if (fd != -1) {
    if (fd != 0) {
      {
      tmp___1 = close(fd);
      }
      if (tmp___1) {
        {
        tmp = gettext("closing %s (fd=%d)");
        tmp___0 = __errno_location();
        error(0, *tmp___0, (char const   *)tmp, filename, fd);
        }
      }
    }
  }
  return;
}
}
static void write_header(char const   *pretty_filename ) ;
static _Bool first_file  =    (_Bool)1;
static void write_header(char const   *pretty_filename ) 
{ 
  char const   *tmp ;
  char *__cil_tmp5 ;
  char *__cil_tmp6 ;

  {
  if (first_file) {
    tmp = "";
  } else {
    tmp = "\n";
  }
  {
  printf((char const   */* __restrict  */)"%s==> %s <==\n", tmp, pretty_filename);
  first_file = (_Bool)0;
  }
  return;
}
}
static uintmax_t dump_remainder(char const   *pretty_filename , int fd , uintmax_t n_bytes ) 
{ 
  uintmax_t n_written ;
  uintmax_t n_remaining ;
  char buffer[8192] ;
  size_t n ;
  uintmax_t tmp ;
  size_t bytes_read ;
  size_t tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  void *__cil_tmp17 ;
  char *__cil_tmp18 ;

  {
  n_remaining = n_bytes;
  n_written = (uintmax_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (n_remaining < 8192UL) {
      tmp = n_remaining;
    } else {
      tmp = (uintmax_t )8192;
    }
    {
    n = tmp;
    tmp___0 = safe_read(fd, (void *)(buffer), n);
    bytes_read = tmp___0;
    }
    if (bytes_read == 0xffffffffffffffffUL) {
      {
      tmp___4 = __errno_location();
      }
      if (*tmp___4 != 11) {
        {
        tmp___1 = quote(pretty_filename);
        tmp___2 = gettext("error reading %s");
        tmp___3 = __errno_location();
        error(1, *tmp___3, (char const   *)tmp___2, tmp___1);
        }
      }
      goto while_break;
    }
    if (bytes_read == 0UL) {
      goto while_break;
    }
    {
    xwrite_stdout((char const   *)(buffer), bytes_read);
    n_written += bytes_read;
    }
    if (n_bytes != 0xffffffffffffffffUL) {
      n_remaining -= bytes_read;
      if (n_remaining == 0UL) {
        goto while_break;
      } else
      if (n_bytes == 0xfffffffffffffffeUL) {
        goto while_break;
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (n_written);
}
}
static off_t xlseek(int fd , off_t offset , int whence , char const   *filename ) 
{ 
  off_t new_offset ;
  __off_t tmp ;
  char buf___0[((((sizeof(off_t ) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL) + 1UL] ;
  char *s ;
  char *tmp___0 ;
  int *tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  void *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;
  char *__cil_tmp22 ;

  {
  {
  tmp = lseek(fd, offset, whence);
  new_offset = tmp;
  }
  if (0L <= new_offset) {
    return (new_offset);
  }
  {
  s = offtostr(offset, buf___0);
  }
  if (whence == 0) {
    goto case_0;
  }
  if (whence == 1) {
    goto case_1;
  }
  if (whence == 2) {
    goto case_2;
  }
  goto switch_default;
  case_0: 
  {
  tmp___0 = gettext("%s: cannot seek to offset %s");
  tmp___1 = __errno_location();
  error(0, *tmp___1, (char const   *)tmp___0, filename, s);
  }
  goto switch_break;
  case_1: 
  {
  tmp___2 = gettext("%s: cannot seek to relative offset %s");
  tmp___3 = __errno_location();
  error(0, *tmp___3, (char const   *)tmp___2, filename, s);
  }
  goto switch_break;
  case_2: 
  {
  tmp___4 = gettext("%s: cannot seek to end-relative offset %s");
  tmp___5 = __errno_location();
  error(0, *tmp___5, (char const   *)tmp___4, filename, s);
  }
  goto switch_break;
  switch_default: 
  {
  abort();
  }
  switch_break: 
  {
  exit(1);
  }
}
}
static _Bool file_lines(char const   *pretty_filename , int fd , uintmax_t n_lines ,
                        off_t start_pos , off_t end_pos , uintmax_t *read_pos ) 
{ 
  char buffer[8192] ;
  size_t bytes_read ;
  off_t pos ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  size_t n ;
  char const   *nl ;
  void *tmp___2 ;
  uintmax_t tmp___3 ;
  uintmax_t tmp___4 ;
  uintmax_t tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  void *__cil_tmp25 ;
  char *__cil_tmp26 ;
  char *__cil_tmp27 ;

  {
  pos = end_pos;
  if (n_lines == 0UL) {
    return ((_Bool)1);
  }
  bytes_read = (size_t )((pos - start_pos) % 8192L);
  if (bytes_read == 0UL) {
    bytes_read = (size_t )8192;
  }
  {
  pos = (off_t )((size_t )pos - bytes_read);
  xlseek(fd, pos, 0, pretty_filename);
  bytes_read = safe_read(fd, (void *)(buffer), bytes_read);
  }
  if (bytes_read == 0xffffffffffffffffUL) {
    {
    tmp = quote(pretty_filename);
    tmp___0 = gettext("error reading %s");
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char const   *)tmp___0, tmp);
    }
    return ((_Bool)0);
  }
  *read_pos = (size_t )pos + bytes_read;
  if (bytes_read) {
    if ((int )buffer[bytes_read - 1UL] != 10) {
      n_lines --;
    }
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    n = bytes_read;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! n) {
        goto while_break___0;
      }
      {
      tmp___2 = memrchr((void const   *)(buffer), '\n', n);
      nl = (char const   *)tmp___2;
      }
      if ((unsigned long )nl == (unsigned long )((void *)0)) {
        goto while_break___0;
      }
      n = (size_t )(nl - (char const   *)(buffer));
      tmp___4 = n_lines;
      n_lines --;
      if (tmp___4 == 0UL) {
        if (n != bytes_read - 1UL) {
          {
          xwrite_stdout(nl + 1, bytes_read - (n + 1UL));
          }
        }
        {
        tmp___3 = dump_remainder(pretty_filename, fd, (size_t )end_pos - ((size_t )pos + bytes_read));
        *read_pos += tmp___3;
        }
        return ((_Bool)1);
      }
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: ;
    if (pos == start_pos) {
      {
      xlseek(fd, start_pos, 0, pretty_filename);
      tmp___5 = dump_remainder(pretty_filename, fd, (uintmax_t )end_pos);
      *read_pos = (uintmax_t )start_pos + tmp___5;
      }
      return ((_Bool)1);
    }
    {
    pos -= 8192L;
    xlseek(fd, pos, 0, pretty_filename);
    bytes_read = safe_read(fd, (void *)(buffer), (size_t )8192);
    }
    if (bytes_read == 0xffffffffffffffffUL) {
      {
      tmp___6 = quote(pretty_filename);
      tmp___7 = gettext("error reading %s");
      tmp___8 = __errno_location();
      error(0, *tmp___8, (char const   *)tmp___7, tmp___6);
      }
      return ((_Bool)0);
    }
    *read_pos = (size_t )pos + bytes_read;
    if (! (bytes_read > 0UL)) {
      goto while_break;
    }
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)1);
}
}
static _Bool pipe_lines(char const   *pretty_filename , int fd , uintmax_t n_lines ,
                        uintmax_t *read_pos ) 
{ 
  LBUFFER *first ;
  LBUFFER *last ;
  LBUFFER *tmp ;
  size_t total_lines ;
  _Bool ok ;
  size_t n_read ;
  void *tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  char const   *buffer_end ;
  char const   *p ;
  void *tmp___3 ;
  struct linebuffer *tmp___4 ;
  void *tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  char const   *beg ;
  char const   *buffer_end___0 ;
  size_t j ;
  void *tmp___9 ;
  char *__cil_tmp27 ;

  {
  {
  total_lines = (size_t )0;
  ok = (_Bool)1;
  tmp___0 = xmalloc(sizeof(LBUFFER ));
  last = (LBUFFER *)tmp___0;
  first = last;
  tmp___1 = (size_t )0;
  first->nlines = tmp___1;
  first->nbytes = tmp___1;
  first->next = (struct linebuffer *)((void *)0);
  tmp___2 = xmalloc(sizeof(LBUFFER ));
  tmp = (LBUFFER *)tmp___2;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    n_read = safe_read(fd, (void *)(tmp->buffer), (size_t )8192);
    }
    if (n_read == 0UL) {
      goto while_break;
    } else
    if (n_read == 0xffffffffffffffffUL) {
      goto while_break;
    }
    tmp->nbytes = n_read;
    *read_pos += n_read;
    tmp->nlines = (size_t )0;
    tmp->next = (struct linebuffer *)((void *)0);
    buffer_end = (char const   *)(tmp->buffer + n_read);
    p = (char const   *)(tmp->buffer);
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      {
      tmp___3 = memchr((void const   *)p, '\n', (size_t )(buffer_end - p));
      p = (char const   *)tmp___3;
      }
      if (! p) {
        goto while_break___0;
      }
      p ++;
      (tmp->nlines) ++;
    }
    while_break___6: /* CIL Label */ ;
    }
    while_break___0: 
    total_lines += tmp->nlines;
    if (tmp->nbytes + last->nbytes < 8192UL) {
      {
      memcpy((void */* __restrict  */)((void *)(& last->buffer[last->nbytes])), (void const   */* __restrict  */)((void const   *)(tmp->buffer)),
             tmp->nbytes);
      last->nbytes += tmp->nbytes;
      last->nlines += tmp->nlines;
      }
    } else {
      tmp___4 = tmp;
      last->next = tmp___4;
      last = tmp___4;
      if (total_lines - first->nlines > n_lines) {
        tmp = first;
        total_lines -= first->nlines;
        first = first->next;
      } else {
        {
        tmp___5 = xmalloc(sizeof(LBUFFER ));
        tmp = (LBUFFER *)tmp___5;
        }
      }
    }
  }
  while_break___5: /* CIL Label */ ;
  }
  while_break: 
  {
  free((void *)tmp);
  }
  if (n_read == 0xffffffffffffffffUL) {
    {
    tmp___6 = quote(pretty_filename);
    tmp___7 = gettext("error reading %s");
    tmp___8 = __errno_location();
    error(0, *tmp___8, (char const   *)tmp___7, tmp___6);
    ok = (_Bool)0;
    }
    goto free_lbuffers;
  }
  if (last->nbytes == 0UL) {
    goto free_lbuffers;
  }
  if (n_lines == 0UL) {
    goto free_lbuffers;
  }
  if ((int )last->buffer[last->nbytes - 1UL] != 10) {
    (last->nlines) ++;
    total_lines ++;
  }
  tmp = first;
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;

    if (! (total_lines - tmp->nlines > n_lines)) {
      goto while_break___1;
    }
    total_lines -= tmp->nlines;
    tmp = tmp->next;
  }
  while_break___7: /* CIL Label */ ;
  }
  while_break___1: 
  beg = (char const   *)(tmp->buffer);
  buffer_end___0 = (char const   *)(tmp->buffer + tmp->nbytes);
  if (total_lines > n_lines) {
    j = total_lines - n_lines;
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;

      if (! j) {
        goto while_break___2;
      }
      {
      tmp___9 = memchr((void const   *)beg, '\n', (size_t )(buffer_end___0 - beg));
      beg = (char const   *)tmp___9;
      }
      if (! beg) {
        {
        __assert_fail("beg", "/home/wslee/project/coreutils-8.1/src/tail.c", 671U,
                      "pipe_lines");
        }
      }
      beg ++;
      j --;
    }
    while_break___8: /* CIL Label */ ;
    }
    while_break___2: ;
  }
  {
  xwrite_stdout(beg, (size_t )(buffer_end___0 - beg));
  tmp = tmp->next;
  }
  {
  while (1) {
    while_continue___3: /* CIL Label */ ;

    if (! tmp) {
      goto while_break___3;
    }
    {
    xwrite_stdout((char const   *)(tmp->buffer), tmp->nbytes);
    tmp = tmp->next;
    }
  }
  while_break___9: /* CIL Label */ ;
  }
  while_break___3: ;
  free_lbuffers: 
  {
  while (1) {
    while_continue___4: /* CIL Label */ ;

    if (! first) {
      goto while_break___4;
    }
    {
    tmp = first->next;
    free((void *)first);
    first = tmp;
    }
  }
  while_break___10: /* CIL Label */ ;
  }
  while_break___4: ;
  return (ok);
}
}
static _Bool pipe_bytes(char const   *pretty_filename , int fd , uintmax_t n_bytes ,
                        uintmax_t *read_pos ) 
{ 
  CBUFFER *first ;
  CBUFFER *last ;
  CBUFFER *tmp ;
  size_t i ;
  size_t total_bytes ;
  _Bool ok ;
  size_t n_read ;
  void *tmp___0 ;
  void *tmp___1 ;
  struct charbuffer *tmp___2 ;
  void *tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  char *__cil_tmp20 ;

  {
  {
  total_bytes = (size_t )0;
  ok = (_Bool)1;
  tmp___0 = xmalloc(sizeof(CBUFFER ));
  last = (CBUFFER *)tmp___0;
  first = last;
  first->nbytes = (size_t )0;
  first->next = (struct charbuffer *)((void *)0);
  tmp___1 = xmalloc(sizeof(CBUFFER ));
  tmp = (CBUFFER *)tmp___1;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    n_read = safe_read(fd, (void *)(tmp->buffer), (size_t )8192);
    }
    if (n_read == 0UL) {
      goto while_break;
    } else
    if (n_read == 0xffffffffffffffffUL) {
      goto while_break;
    }
    *read_pos += n_read;
    tmp->nbytes = n_read;
    tmp->next = (struct charbuffer *)((void *)0);
    total_bytes += tmp->nbytes;
    if (tmp->nbytes + last->nbytes < 8192UL) {
      {
      memcpy((void */* __restrict  */)((void *)(& last->buffer[last->nbytes])), (void const   */* __restrict  */)((void const   *)(tmp->buffer)),
             tmp->nbytes);
      last->nbytes += tmp->nbytes;
      }
    } else {
      tmp___2 = tmp;
      last->next = tmp___2;
      last = tmp___2;
      if (total_bytes - first->nbytes > n_bytes) {
        tmp = first;
        total_bytes -= first->nbytes;
        first = first->next;
      } else {
        {
        tmp___3 = xmalloc(sizeof(CBUFFER ));
        tmp = (CBUFFER *)tmp___3;
        }
      }
    }
  }
  while_break___3: /* CIL Label */ ;
  }
  while_break: 
  {
  free((void *)tmp);
  }
  if (n_read == 0xffffffffffffffffUL) {
    {
    tmp___4 = quote(pretty_filename);
    tmp___5 = gettext("error reading %s");
    tmp___6 = __errno_location();
    error(0, *tmp___6, (char const   *)tmp___5, tmp___4);
    ok = (_Bool)0;
    }
    goto free_cbuffers;
  }
  tmp = first;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! (total_bytes - tmp->nbytes > n_bytes)) {
      goto while_break___0;
    }
    total_bytes -= tmp->nbytes;
    tmp = tmp->next;
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break___0: ;
  if (total_bytes > n_bytes) {
    i = total_bytes - n_bytes;
  } else {
    i = (size_t )0;
  }
  {
  xwrite_stdout((char const   *)(& tmp->buffer[i]), tmp->nbytes - i);
  tmp = tmp->next;
  }
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;

    if (! tmp) {
      goto while_break___1;
    }
    {
    xwrite_stdout((char const   *)(tmp->buffer), tmp->nbytes);
    tmp = tmp->next;
    }
  }
  while_break___5: /* CIL Label */ ;
  }
  while_break___1: ;
  free_cbuffers: 
  {
  while (1) {
    while_continue___2: /* CIL Label */ ;

    if (! first) {
      goto while_break___2;
    }
    {
    tmp = first->next;
    free((void *)first);
    first = tmp;
    }
  }
  while_break___6: /* CIL Label */ ;
  }
  while_break___2: ;
  return (ok);
}
}
static int start_bytes(char const   *pretty_filename , int fd , uintmax_t n_bytes ,
                       uintmax_t *read_pos ) 
{ 
  char buffer[8192] ;
  size_t bytes_read ;
  size_t tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  size_t n_remaining ;
  void *__cil_tmp14 ;
  char *__cil_tmp15 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (0UL < n_bytes)) {
      goto while_break;
    }
    {
    tmp = safe_read(fd, (void *)(buffer), (size_t )8192);
    bytes_read = tmp;
    }
    if (bytes_read == 0UL) {
      return (-1);
    }
    if (bytes_read == 0xffffffffffffffffUL) {
      {
      tmp___0 = quote(pretty_filename);
      tmp___1 = gettext("error reading %s");
      tmp___2 = __errno_location();
      error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
      }
      return (1);
    }
    read_pos += bytes_read;
    if (bytes_read <= n_bytes) {
      n_bytes -= bytes_read;
    } else {
      n_remaining = bytes_read - n_bytes;
      if (n_remaining) {
        {
        xwrite_stdout((char const   *)(& buffer[n_bytes]), n_remaining);
        }
      }
      goto while_break;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (0);
}
}
static int start_lines(char const   *pretty_filename , int fd , uintmax_t n_lines ,
                       uintmax_t *read_pos ) 
{ 
  char buffer[8192] ;
  char *p ;
  size_t bytes_read ;
  size_t tmp ;
  char *buffer_end ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  void *tmp___3 ;
  void *__cil_tmp16 ;
  char *__cil_tmp17 ;

  {
  if (n_lines == 0UL) {
    return (0);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    p = buffer;
    tmp = safe_read(fd, (void *)(buffer), (size_t )8192);
    bytes_read = tmp;
    buffer_end = buffer + bytes_read;
    }
    if (bytes_read == 0UL) {
      return (-1);
    }
    if (bytes_read == 0xffffffffffffffffUL) {
      {
      tmp___0 = quote(pretty_filename);
      tmp___1 = gettext("error reading %s");
      tmp___2 = __errno_location();
      error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
      }
      return (1);
    }
    *read_pos += bytes_read;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      {
      tmp___3 = memchr((void const   *)p, '\n', (size_t )(buffer_end - p));
      p = (char *)tmp___3;
      }
      if (! p) {
        goto while_break___0;
      }
      p ++;
      n_lines --;
      if (n_lines == 0UL) {
        if ((unsigned long )p < (unsigned long )buffer_end) {
          {
          xwrite_stdout((char const   *)p, (size_t )(buffer_end - p));
          }
        }
        return (0);
      }
    }
    while_break___1: /* CIL Label */ ;
    }
    while_break___0: ;
  }
  while_break: /* CIL Label */ ;
  }

  return (0);
}
}
static void recheck(struct File_spec *f , _Bool blocking ) 
{ 
  struct stat new_stats ;
  _Bool ok ;
  _Bool is_stdin ;
  int tmp ;
  _Bool was_tailable ;
  int prev_errnum ;
  _Bool new_file ;
  int fd ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  _Bool tmp___3 ;
  int tmp___4 ;
  int *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  char const   *tmp___9 ;
  int *tmp___10 ;
  int *tmp___11 ;
  char const   *tmp___12 ;
  char const   *tmp___13 ;
  char *tmp___14 ;
  int tmp___15 ;
  char const   *tmp___16 ;
  char const   *tmp___17 ;
  char const   *tmp___18 ;
  char const   *tmp___19 ;
  char *tmp___20 ;
  char const   *tmp___21 ;
  char const   *tmp___22 ;
  char *tmp___23 ;
  char const   *tmp___24 ;
  char const   *tmp___25 ;
  char const   *tmp___26 ;
  char *tmp___27 ;
  char const   *tmp___28 ;
  int tmp___29 ;
  char const   *tmp___30 ;
  void *__cil_tmp48 ;
  char *__cil_tmp49 ;
  char *__cil_tmp50 ;
  char *__cil_tmp51 ;
  char *__cil_tmp52 ;
  char *__cil_tmp53 ;

  {
  {
  ok = (_Bool)1;
  tmp = strcmp((char const   *)f->name, "-");
  is_stdin = (_Bool )(tmp == 0);
  was_tailable = f->tailable;
  prev_errnum = f->errnum;
  }
  if (is_stdin) {
    tmp___2 = 0;
  } else {
    if (blocking) {
      tmp___0 = 0;
    } else {
      tmp___0 = 2048;
    }
    {
    tmp___1 = open_safer((char const   *)f->name, tmp___0);
    tmp___2 = tmp___1;
    }
  }
  {
  fd = tmp___2;
  tmp___3 = valid_file_spec((struct File_spec  const  *)f);
  }
  if (! tmp___3) {
    {
    __assert_fail("valid_file_spec (f)", "/home/wslee/project/coreutils-8.1/src/tail.c",
                  884U, "recheck");
    }
  }
  if (reopen_inaccessible_files) {
    if (fd == -1) {
      tmp___4 = 0;
    } else {
      tmp___4 = 1;
    }
  } else {
    tmp___4 = 1;
  }
  f->tailable = (_Bool )tmp___4;
  if (fd == -1) {
    goto _L;
  } else {
    {
    tmp___15 = fstat(fd, & new_stats);
    }
    if (tmp___15 < 0) {
      _L: 
      {
      ok = (_Bool)0;
      tmp___5 = __errno_location();
      f->errnum = *tmp___5;
      }
      if (! f->tailable) {
        if (was_tailable) {
          {
          tmp___6 = pretty_name((struct File_spec  const  *)f);
          tmp___7 = quote(tmp___6);
          tmp___8 = gettext("%s has become inaccessible");
          error(0, f->errnum, (char const   *)tmp___8, tmp___7);
          }
        }
      } else {
        {
        tmp___11 = __errno_location();
        }
        if (prev_errnum != *tmp___11) {
          {
          tmp___9 = pretty_name((struct File_spec  const  *)f);
          tmp___10 = __errno_location();
          error(0, *tmp___10, "%s", tmp___9);
          }
        }
      }
    } else
    if ((new_stats.st_mode & 61440U) == 32768U) {
      f->errnum = 0;
    } else
    if ((new_stats.st_mode & 61440U) == 4096U) {
      f->errnum = 0;
    } else
    if ((new_stats.st_mode & 61440U) == 49152U) {
      f->errnum = 0;
    } else
    if ((new_stats.st_mode & 61440U) == 8192U) {
      f->errnum = 0;
    } else {
      {
      ok = (_Bool)0;
      f->errnum = -1;
      tmp___12 = pretty_name((struct File_spec  const  *)f);
      tmp___13 = quote(tmp___12);
      tmp___14 = gettext("%s has been replaced with an untailable file; giving up on this name");
      error(0, 0, (char const   *)tmp___14, tmp___13);
      f->ignore = (_Bool)1;
      }
    }
  }
  new_file = (_Bool)0;
  if (! ok) {
    {
    tmp___16 = pretty_name((struct File_spec  const  *)f);
    close_fd(fd, tmp___16);
    tmp___17 = pretty_name((struct File_spec  const  *)f);
    close_fd(f->fd, tmp___17);
    f->fd = -1;
    }
  } else
  if (prev_errnum) {
    if (prev_errnum != 2) {
      new_file = (_Bool)1;
      if (! (f->fd == -1)) {
        {
        __assert_fail("f->fd == -1", "/home/wslee/project/coreutils-8.1/src/tail.c",
                      939U, "recheck");
        }
      }
      {
      tmp___18 = pretty_name((struct File_spec  const  *)f);
      tmp___19 = quote(tmp___18);
      tmp___20 = gettext("%s has become accessible");
      error(0, 0, (char const   *)tmp___20, tmp___19);
      }
    } else {
      goto _L___1;
    }
  } else
  _L___1: 
  if (f->ino != new_stats.st_ino) {
    goto _L___0;
  } else
  if (f->dev != new_stats.st_dev) {
    _L___0: 
    new_file = (_Bool)1;
    if (f->fd == -1) {
      {
      tmp___21 = pretty_name((struct File_spec  const  *)f);
      tmp___22 = quote(tmp___21);
      tmp___23 = gettext("%s has appeared;  following end of new file");
      error(0, 0, (char const   *)tmp___23, tmp___22);
      }
    } else {
      {
      tmp___24 = pretty_name((struct File_spec  const  *)f);
      close_fd(f->fd, tmp___24);
      tmp___25 = pretty_name((struct File_spec  const  *)f);
      tmp___26 = quote(tmp___25);
      tmp___27 = gettext("%s has been replaced;  following end of new file");
      error(0, 0, (char const   *)tmp___27, tmp___26);
      }
    }
  } else
  if (f->fd == -1) {
    new_file = (_Bool)1;
  } else {
    {
    tmp___28 = pretty_name((struct File_spec  const  *)f);
    close_fd(fd, tmp___28);
    }
  }
  if (new_file) {
    if (is_stdin) {
      tmp___29 = -1;
    } else {
      tmp___29 = (int )blocking;
    }
    {
    record_open_fd(f, fd, (off_t )0, (struct stat  const  *)(& new_stats), tmp___29);
    tmp___30 = pretty_name((struct File_spec  const  *)f);
    xlseek(fd, (off_t )0, 0, tmp___30);
    }
  }
  return;
}
}
static _Bool any_live_files(struct File_spec  const  *f , size_t n_files ) 
{ 
  size_t i ;

  {
  i = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < n_files)) {
      goto while_break;
    }
    if (0 <= (int )(f + i)->fd) {
      return ((_Bool)1);
    }
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)0);
}
}
static void tail_forever(struct File_spec *f , size_t n_files , double sleep_interval ) 
{ 
  _Bool blocking ;
  int tmp ;
  size_t last ;
  _Bool writer_is_dead ;
  size_t i ;
  _Bool any_input ;
  int fd ;
  char const   *name ;
  mode_t mode ;
  struct stat stats ;
  uintmax_t bytes_read ;
  int old_flags ;
  int tmp___0 ;
  int new_flags ;
  int tmp___1 ;
  char *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  int *tmp___6 ;
  int *tmp___7 ;
  int tmp___8 ;
  uintmax_t tmp___9 ;
  struct timespec tmp___10 ;
  int tmp___11 ;
  char *tmp___12 ;
  unsigned long tmp___13 ;
  char *tmp___14 ;
  _Bool tmp___15 ;
  char *tmp___16 ;
  int *tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int *tmp___20 ;
  int tmp___21 ;
  char *tmp___22 ;
  int *tmp___23 ;
  int tmp___24 ;
  void *__cil_tmp49 ;
  char *__cil_tmp50 ;
  char *__cil_tmp51 ;
  char *__cil_tmp52 ;
  char *__cil_tmp53 ;
  char *__cil_tmp54 ;
  char *__cil_tmp55 ;

  {
  if (pid == 0) {
    if ((unsigned int )follow_mode == 2U) {
      if (n_files == 1UL) {
        if (! (((f + 0)->mode & 61440U) == 32768U)) {
          tmp = 1;
        } else {
          tmp = 0;
        }
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  blocking = (_Bool )tmp;
  writer_is_dead = (_Bool)0;
  last = n_files - 1UL;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    any_input = (_Bool)0;
    i = (size_t )0;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! (i < n_files)) {
        goto while_break___0;
      }
      if ((f + i)->ignore) {
        goto __Cont;
      }
      if ((f + i)->fd < 0) {
        {
        recheck(f + i, blocking);
        }
        goto __Cont;
      }
      {
      fd = (f + i)->fd;
      name = pretty_name((struct File_spec  const  *)(f + i));
      mode = (f + i)->mode;
      }
      if ((f + i)->blocking != (int )blocking) {
        {
        tmp___0 = fcntl(fd, 3);
        old_flags = tmp___0;
        }
        if (blocking) {
          tmp___1 = 0;
        } else {
          tmp___1 = 2048;
        }
        new_flags = old_flags | tmp___1;
        if (old_flags < 0) {
          goto _L;
        } else
        if (new_flags != old_flags) {
          {
          tmp___5 = fcntl(fd, 4, new_flags);
          }
          if (tmp___5 == -1) {
            _L: 
            if (((f + i)->mode & 61440U) == 32768U) {
              {
              tmp___4 = __errno_location();
              }
              if (! (*tmp___4 == 1)) {
                {
                tmp___2 = gettext("%s: cannot change nonblocking mode");
                tmp___3 = __errno_location();
                error(1, *tmp___3, (char const   *)tmp___2, name);
                }
              }
            } else {
              {
              tmp___2 = gettext("%s: cannot change nonblocking mode");
              tmp___3 = __errno_location();
              error(1, *tmp___3, (char const   *)tmp___2, name);
              }
            }
          } else {
            (f + i)->blocking = (int )blocking;
          }
        } else {
          (f + i)->blocking = (int )blocking;
        }
      }
      if (! (f + i)->blocking) {
        {
        tmp___8 = fstat(fd, & stats);
        }
        if (tmp___8 != 0) {
          {
          (f + i)->fd = -1;
          tmp___6 = __errno_location();
          (f + i)->errnum = *tmp___6;
          tmp___7 = __errno_location();
          error(0, *tmp___7, "%s", name);
          }
          goto __Cont;
        }
        if ((f + i)->mode == stats.st_mode) {
          if (! ((stats.st_mode & 61440U) == 32768U)) {
            goto _L___0;
          } else
          if ((f + i)->size == stats.st_size) {
            _L___0: 
            {
            tmp___10 = get_stat_mtime((struct stat  const  *)(& stats));
            tmp___11 = timespec_cmp((f + i)->mtime, tmp___10);
            }
            if (tmp___11 == 0) {
              tmp___9 = (f + i)->n_unchanged_stats;
              ((f + i)->n_unchanged_stats) ++;
              if (max_n_unchanged_stats_between_opens <= tmp___9) {
                if ((unsigned int )follow_mode == 1U) {
                  {
                  recheck(f + i, (_Bool )(f + i)->blocking);
                  (f + i)->n_unchanged_stats = (uintmax_t )0;
                  }
                }
              }
              goto __Cont;
            }
          }
        }
        {
        (f + i)->mtime = get_stat_mtime((struct stat  const  *)(& stats));
        (f + i)->mode = stats.st_mode;
        (f + i)->n_unchanged_stats = (uintmax_t )0;
        }
        if ((mode & 61440U) == 32768U) {
          if (stats.st_size < (f + i)->size) {
            {
            tmp___12 = gettext("%s: file truncated");
            error(0, 0, (char const   *)tmp___12, name);
            last = i;
            xlseek(fd, stats.st_size, 0, name);
            (f + i)->size = stats.st_size;
            }
            goto __Cont;
          }
        }
        if (i != last) {
          if (print_headers) {
            {
            write_header(name);
            }
          }
          last = i;
        }
      }
      if ((f + i)->blocking) {
        tmp___13 = 0xfffffffffffffffeUL;
      } else {
        tmp___13 = 0xffffffffffffffffUL;
      }
      {
      bytes_read = dump_remainder(name, fd, tmp___13);
      any_input = (_Bool )((int )any_input | (bytes_read != 0UL));
      (f + i)->size = (off_t )((uintmax_t )(f + i)->size + bytes_read);
      }
      __Cont: 
      i ++;
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: 
    {
    tmp___15 = any_live_files((struct File_spec  const  *)f, n_files);
    }
    if (! tmp___15) {
      if (! reopen_inaccessible_files) {
        {
        tmp___14 = gettext("no files remaining");
        error(0, 0, (char const   *)tmp___14);
        }
        goto while_break;
      }
    }
    if (! any_input) {
      goto _L___1;
    } else
    if (blocking) {
      _L___1: 
      {
      tmp___18 = fflush_unlocked(stdout);
      }
      if (tmp___18 != 0) {
        {
        tmp___16 = gettext("write error");
        tmp___17 = __errno_location();
        error(1, *tmp___17, (char const   *)tmp___16);
        }
      }
    }
    if (! any_input) {
      if (writer_is_dead) {
        goto while_break;
      }
      if (pid != 0) {
        {
        tmp___19 = kill(pid, 0);
        }
        if (tmp___19 != 0) {
          {
          tmp___20 = __errno_location();
          }
          if (*tmp___20 != 1) {
            tmp___21 = 1;
          } else {
            tmp___21 = 0;
          }
        } else {
          tmp___21 = 0;
        }
      } else {
        tmp___21 = 0;
      }
      writer_is_dead = (_Bool )tmp___21;
      if (! writer_is_dead) {
        {
        tmp___24 = xnanosleep(sleep_interval);
        }
        if (tmp___24) {
          {
          tmp___22 = gettext("cannot read realtime clock");
          tmp___23 = __errno_location();
          error(1, *tmp___23, (char const   *)tmp___22);
          }
        }
      }
    }
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
  return;
}
}
static size_t wd_hasher(void const   *entry , size_t tabsize ) 
{ 
  struct File_spec  const  *spec ;

  {
  spec = (struct File_spec  const  *)entry;
  return ((unsigned long )spec->wd % tabsize);
}
}
static _Bool wd_comparator(void const   *e1 , void const   *e2 ) 
{ 
  struct File_spec  const  *spec1 ;
  struct File_spec  const  *spec2 ;

  {
  spec1 = (struct File_spec  const  *)e1;
  spec2 = (struct File_spec  const  *)e2;
  return ((_Bool )(spec1->wd == spec2->wd));
}
}
static void check_fspec(struct File_spec *fspec , int wd , int *prev_wd ) 
{ 
  struct stat stats ;
  char const   *name ;
  char const   *tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  struct timespec tmp___3 ;
  int tmp___4 ;
  uintmax_t bytes_read ;
  uintmax_t tmp___5 ;
  char *tmp___6 ;
  int *tmp___7 ;
  int tmp___8 ;
  void *__cil_tmp20 ;
  char *__cil_tmp21 ;
  char *__cil_tmp22 ;

  {
  {
  tmp = pretty_name((struct File_spec  const  *)fspec);
  name = tmp;
  tmp___1 = fstat(fspec->fd, & stats);
  }
  if (tmp___1 != 0) {
    {
    close_fd(fspec->fd, name);
    fspec->fd = -1;
    tmp___0 = __errno_location();
    fspec->errnum = *tmp___0;
    }
    return;
  }
  if ((fspec->mode & 61440U) == 32768U) {
    if (stats.st_size < fspec->size) {
      {
      tmp___2 = gettext("%s: file truncated");
      error(0, 0, (char const   *)tmp___2, name);
      *prev_wd = wd;
      xlseek(fspec->fd, stats.st_size, 0, name);
      fspec->size = stats.st_size;
      }
    } else {
      goto _L;
    }
  } else
  _L: 
  if ((fspec->mode & 61440U) == 32768U) {
    if (stats.st_size == fspec->size) {
      {
      tmp___3 = get_stat_mtime((struct stat  const  *)(& stats));
      tmp___4 = timespec_cmp(fspec->mtime, tmp___3);
      }
      if (tmp___4 == 0) {
        return;
      }
    }
  }
  if (wd != *prev_wd) {
    if (print_headers) {
      {
      write_header(name);
      }
    }
    *prev_wd = wd;
  }
  {
  tmp___5 = dump_remainder(name, fspec->fd, 0xffffffffffffffffUL);
  bytes_read = tmp___5;
  fspec->size = (off_t )((uintmax_t )fspec->size + bytes_read);
  tmp___8 = fflush_unlocked(stdout);
  }
  if (tmp___8 != 0) {
    {
    tmp___6 = gettext("write error");
    tmp___7 = __errno_location();
    error(1, *tmp___7, (char const   *)tmp___6);
    }
  }
  return;
}
}
static void tail_forever_inotify(int wd , struct File_spec *f , size_t n_files , double sleep_interval ) 
{ 
  size_t i ;
  unsigned int max_realloc ;
  Hash_table *wd_table ;
  _Bool found_watchable ;
  _Bool writer_is_dead ;
  int prev_wd ;
  size_t evlen ;
  char *evbuf ;
  size_t evbuf_off ;
  size_t len ;
  size_t fnlen ;
  size_t tmp ;
  size_t dirlen ;
  size_t tmp___0 ;
  char prev ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  int *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  struct File_spec *fspec ;
  struct inotify_event *ev ;
  int tmp___12 ;
  int *tmp___13 ;
  int tmp___14 ;
  struct timeval delay ;
  fd_set rfd ;
  int __d0 ;
  int __d1 ;
  int file_change ;
  int tmp___15 ;
  char *tmp___16 ;
  int *tmp___17 ;
  void *tmp___18 ;
  int *tmp___19 ;
  unsigned int tmp___20 ;
  char *tmp___21 ;
  int *tmp___22 ;
  int tmp___23 ;
  char const   *tmp___24 ;
  char *tmp___25 ;
  int *tmp___26 ;
  void *tmp___27 ;
  struct File_spec key ;
  void *tmp___28 ;
  void *__cil_tmp64 ;
  char *__cil_tmp65 ;
  char *__cil_tmp66 ;
  char *__cil_tmp67 ;
  char *__cil_tmp68 ;
  char *__cil_tmp69 ;
  char *__cil_tmp70 ;
  char *__cil_tmp71 ;

  {
  {
  max_realloc = 3U;
  found_watchable = (_Bool)0;
  writer_is_dead = (_Bool)0;
  evlen = (size_t )0;
  evbuf_off = (size_t )0;
  len = (size_t )0;
  wd_table = hash_initialize(n_files, (Hash_tuning const   *)((void *)0), & wd_hasher,
                             & wd_comparator, (void (*)(void * ))((void *)0));
  }
  if (! wd_table) {
    {
    xalloc_die();
    }
  }
  i = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < n_files)) {
      goto while_break;
    }
    if (! (f + i)->ignore) {
      {
      tmp = strlen((char const   *)(f + i)->name);
      fnlen = tmp;
      }
      if (evlen < fnlen) {
        evlen = fnlen;
      }
      (f + i)->wd = -1;
      if ((unsigned int )follow_mode == 1U) {
        {
        tmp___0 = dir_len((char const   *)(f + i)->name);
        dirlen = tmp___0;
        prev = *((f + i)->name + dirlen);
        tmp___1 = last_component((char const   *)(f + i)->name);
        (f + i)->basename_start = (size_t )(tmp___1 - (f + i)->name);
        *((f + i)->name + dirlen) = (char )'\000';
        }
        if (dirlen) {
          tmp___2 = (char const   *)(f + i)->name;
        } else {
          tmp___2 = ".";
        }
        {
        (f + i)->parent_wd = inotify_add_watch(wd, tmp___2, (uint32_t )388);
        *((f + i)->name + dirlen) = prev;
        }
        if ((f + i)->parent_wd < 0) {
          {
          tmp___3 = quote((char const   *)(f + i)->name);
          tmp___4 = gettext("cannot watch parent directory of %s");
          tmp___5 = __errno_location();
          error(0, *tmp___5, (char const   *)tmp___4, tmp___3);
          }
          goto __Cont;
        }
      }
      {
      (f + i)->wd = inotify_add_watch(wd, (char const   *)(f + i)->name, (uint32_t )inotify_wd_mask);
      }
      if ((f + i)->wd < 0) {
        {
        tmp___9 = __errno_location();
        }
        if (*tmp___9 != (f + i)->errnum) {
          {
          tmp___6 = quote((char const   *)(f + i)->name);
          tmp___7 = gettext("cannot watch %s");
          tmp___8 = __errno_location();
          error(0, *tmp___8, (char const   *)tmp___7, tmp___6);
          }
        }
        goto __Cont;
      }
      {
      tmp___10 = hash_insert(wd_table, (void const   *)(f + i));
      }
      if ((unsigned long )tmp___10 == (unsigned long )((void *)0)) {
        {
        xalloc_die();
        }
      }
      found_watchable = (_Bool)1;
    }
    __Cont: 
    i ++;
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break: ;
  if ((unsigned int )follow_mode == 2U) {
    if (! found_watchable) {
      return;
    }
  }
  prev_wd = (f + (n_files - 1UL))->wd;
  i = (size_t )0;
  {
  while (1) {
    while_continue___2: /* CIL Label */ ;

    if (! (i < n_files)) {
      goto while_break___0;
    }
    if (! (f + i)->ignore) {
      {
      check_fspec(f + i, (f + i)->wd, & prev_wd);
      }
    }
    i ++;
  }
  while_break___5: /* CIL Label */ ;
  }
  while_break___0: 
  {
  evlen += sizeof(struct inotify_event ) + 1UL;
  tmp___11 = xmalloc(evlen);
  evbuf = (char *)tmp___11;
  }
  {
  while (1) {
    while_continue___3: /* CIL Label */ ;
    while_continue___1: ;
    if (pid) {
      if (writer_is_dead) {
        {
        exit(0);
        }
      }
      {
      tmp___12 = kill(pid, 0);
      }
      if (tmp___12 != 0) {
        {
        tmp___13 = __errno_location();
        }
        if (*tmp___13 != 1) {
          tmp___14 = 1;
        } else {
          tmp___14 = 0;
        }
      } else {
        tmp___14 = 0;
      }
      writer_is_dead = (_Bool )tmp___14;
      if (writer_is_dead) {
        delay.tv_usec = (__suseconds_t )0;
        delay.tv_sec = delay.tv_usec;
      } else {
        delay.tv_sec = (time_t )sleep_interval;
        delay.tv_usec = (__suseconds_t )((double )1000000 * (sleep_interval - (double )delay.tv_sec));
      }
      {
      while (1) {
        while_continue___4: /* CIL Label */ ;
        __asm__  volatile   ("cld; rep; "
                             "stosq": "=c" (__d0), "=D" (__d1): "a" (0), "0" (sizeof(fd_set ) / sizeof(__fd_mask )),
                             "1" (& rfd.fds_bits[0]): "memory");
        goto while_break___2;
      }
      while_break___7: /* CIL Label */ ;
      }
      while_break___2: 
      {
      rfd.fds_bits[wd / (8 * (int )sizeof(__fd_mask ))] |= (__fd_mask )(1UL << wd % (8 * (int )sizeof(__fd_mask )));
      tmp___15 = select(wd + 1, (fd_set */* __restrict  */)(& rfd), (fd_set */* __restrict  */)((fd_set *)((void *)0)),
                        (fd_set */* __restrict  */)((fd_set *)((void *)0)), (struct timeval */* __restrict  */)(& delay));
      file_change = tmp___15;
      }
      if (file_change == 0) {
        goto while_continue___1;
      } else
      if (file_change == -1) {
        {
        tmp___16 = gettext("error monitoring inotify event");
        tmp___17 = __errno_location();
        error(1, *tmp___17, (char const   *)tmp___16);
        }
      }
    }
    if (len <= evbuf_off) {
      {
      len = safe_read(wd, (void *)evbuf, evlen);
      evbuf_off = (size_t )0;
      }
      if (len == 0UL) {
        goto _L;
      } else
      if (len == 0xffffffffffffffffUL) {
        {
        tmp___19 = __errno_location();
        }
        if (*tmp___19 == 22) {
          _L: 
          tmp___20 = max_realloc;
          max_realloc --;
          if (tmp___20) {
            {
            len = (size_t )0;
            evlen *= 2UL;
            tmp___18 = xrealloc((void *)evbuf, evlen);
            evbuf = (char *)tmp___18;
            }
            goto while_continue___1;
          }
        }
      }
      if (len == 0UL) {
        {
        tmp___21 = gettext("error reading inotify event");
        tmp___22 = __errno_location();
        error(1, *tmp___22, (char const   *)tmp___21);
        }
      } else
      if (len == 0xffffffffffffffffUL) {
        {
        tmp___21 = gettext("error reading inotify event");
        tmp___22 = __errno_location();
        error(1, *tmp___22, (char const   *)tmp___21);
        }
      }
    }
    ev = (struct inotify_event *)(evbuf + evbuf_off);
    evbuf_off += sizeof(*ev) + (unsigned long )ev->len;
    if (ev->len) {
      i = (size_t )0;
      {
      while (1) {
        while_continue___5: /* CIL Label */ ;

        if (! (i < n_files)) {
          goto while_break___3;
        }
        if ((f + i)->parent_wd == ev->wd) {
          {
          tmp___23 = strcmp((char const   *)(ev->name), (char const   *)((f + i)->name + (f + i)->basename_start));
          }
          if (tmp___23 == 0) {
            goto while_break___3;
          }
        }
        i ++;
      }
      while_break___8: /* CIL Label */ ;
      }
      while_break___3: ;
      if (i == n_files) {
        goto while_continue___1;
      }
      {
      (f + i)->wd = inotify_add_watch(wd, (char const   *)(f + i)->name, (uint32_t )inotify_wd_mask);
      }
      if ((f + i)->wd < 0) {
        {
        tmp___24 = quote((char const   *)(f + i)->name);
        tmp___25 = gettext("cannot watch %s");
        tmp___26 = __errno_location();
        error(0, *tmp___26, (char const   *)tmp___25, tmp___24);
        }
        goto while_continue___1;
      }
      {
      fspec = f + i;
      tmp___27 = hash_insert(wd_table, (void const   *)fspec);
      }
      if ((unsigned long )tmp___27 == (unsigned long )((void *)0)) {
        {
        xalloc_die();
        }
      }
      if ((unsigned int )follow_mode == 1U) {
        {
        recheck(f + i, (_Bool)0);
        }
      }
    } else {
      {
      key.wd = ev->wd;
      tmp___28 = hash_lookup((Hash_table const   *)wd_table, (void const   *)(& key));
      fspec = (struct File_spec *)tmp___28;
      }
    }
    if (! fspec) {
      goto while_continue___1;
    }
    if (ev->mask & 3076U) {
      if (ev->mask & 1024U) {
        {
        inotify_rm_watch(wd, (f + i)->wd);
        hash_delete(wd_table, (void const   *)(f + i));
        }
      } else
      if (ev->mask & 2048U) {
        if ((unsigned int )follow_mode == 2U) {
          {
          inotify_rm_watch(wd, (f + i)->wd);
          hash_delete(wd_table, (void const   *)(f + i));
          }
        }
      }
      if ((unsigned int )follow_mode == 1U) {
        {
        recheck(fspec, (_Bool)0);
        }
      }
      goto while_continue___1;
    }
    {
    check_fspec(fspec, ev->wd, & prev_wd);
    }
  }
  while_break___6: /* CIL Label */ ;
  }

  return;
}
}
static _Bool tail_bytes(char const   *pretty_filename , int fd , uintmax_t n_bytes ,
                        uintmax_t *read_pos ) 
{ 
  struct stat stats ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int t ;
  int tmp___3 ;
  uintmax_t tmp___4 ;
  off_t current_pos ;
  off_t tmp___5 ;
  off_t end_pos ;
  off_t tmp___6 ;
  off_t diff ;
  off_t bytes_remaining ;
  off_t tmp___7 ;
  off_t nb ;
  off_t tmp___8 ;
  off_t tmp___9 ;
  uintmax_t tmp___10 ;
  _Bool tmp___11 ;
  void *__cil_tmp27 ;
  char *__cil_tmp28 ;

  {
  {
  tmp___2 = fstat(fd, & stats);
  }
  if (tmp___2) {
    {
    tmp = quote(pretty_filename);
    tmp___0 = gettext("cannot fstat %s");
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char const   *)tmp___0, tmp);
    }
    return ((_Bool)0);
  }
  if (from_start) {
    if (! presume_input_pipe) {
      if ((stats.st_mode & 61440U) == 32768U) {
        if (n_bytes <= (uintmax_t )(~ (-1L << (sizeof(off_t ) * 8UL - 1UL)))) {
          {
          xlseek(fd, (off_t )n_bytes, 1, pretty_filename);
          *read_pos += n_bytes;
          }
        } else {
          goto _L___0;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      {
      tmp___3 = start_bytes(pretty_filename, fd, n_bytes, read_pos);
      t = tmp___3;
      }
      if (t) {
        return ((_Bool )(t < 0));
      }
    }
    {
    tmp___4 = dump_remainder(pretty_filename, fd, 0xffffffffffffffffUL);
    *read_pos += tmp___4;
    }
  } else
  if (! presume_input_pipe) {
    if ((stats.st_mode & 61440U) == 32768U) {
      if (n_bytes <= (uintmax_t )(~ (-1L << (sizeof(off_t ) * 8UL - 1UL)))) {
        {
        tmp___5 = xlseek(fd, (off_t )0, 1, pretty_filename);
        current_pos = tmp___5;
        tmp___6 = xlseek(fd, (off_t )0, 2, pretty_filename);
        end_pos = tmp___6;
        diff = end_pos - current_pos;
        }
        if (diff < 0L) {
          tmp___7 = (off_t )0;
        } else {
          tmp___7 = diff;
        }
        bytes_remaining = tmp___7;
        nb = (off_t )n_bytes;
        if (bytes_remaining <= nb) {
          {
          tmp___8 = xlseek(fd, current_pos, 0, pretty_filename);
          *read_pos = (uintmax_t )tmp___8;
          }
        } else {
          {
          tmp___9 = xlseek(fd, - nb, 2, pretty_filename);
          *read_pos = (uintmax_t )tmp___9;
          }
        }
        {
        tmp___10 = dump_remainder(pretty_filename, fd, n_bytes);
        *read_pos += tmp___10;
        }
      } else {
        {
        tmp___11 = pipe_bytes(pretty_filename, fd, n_bytes, read_pos);
        }
        return (tmp___11);
      }
    } else {
      {
      tmp___11 = pipe_bytes(pretty_filename, fd, n_bytes, read_pos);
      }
      return (tmp___11);
    }
  } else {
    {
    tmp___11 = pipe_bytes(pretty_filename, fd, n_bytes, read_pos);
    }
    return (tmp___11);
  }
  return ((_Bool)1);
}
}
static _Bool tail_lines(char const   *pretty_filename , int fd , uintmax_t n_lines ,
                        uintmax_t *read_pos ) 
{ 
  struct stat stats ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int t ;
  int tmp___3 ;
  uintmax_t tmp___4 ;
  off_t start_pos ;
  off_t end_pos ;
  _Bool tmp___5 ;
  _Bool tmp___6 ;
  void *__cil_tmp19 ;
  char *__cil_tmp20 ;

  {
  {
  tmp___2 = fstat(fd, & stats);
  }
  if (tmp___2) {
    {
    tmp = quote(pretty_filename);
    tmp___0 = gettext("cannot fstat %s");
    tmp___1 = __errno_location();
    error(0, *tmp___1, (char const   *)tmp___0, tmp);
    }
    return ((_Bool)0);
  }
  if (from_start) {
    {
    tmp___3 = start_lines(pretty_filename, fd, n_lines, read_pos);
    t = tmp___3;
    }
    if (t) {
      return ((_Bool )(t < 0));
    }
    {
    tmp___4 = dump_remainder(pretty_filename, fd, 0xffffffffffffffffUL);
    *read_pos += tmp___4;
    }
  } else {
    start_pos = (off_t )-1;
    if (! presume_input_pipe) {
      if ((stats.st_mode & 61440U) == 32768U) {
        {
        start_pos = lseek(fd, (__off_t )0, 1);
        }
        if (start_pos != -1L) {
          {
          end_pos = lseek(fd, (__off_t )0, 2);
          }
          if (start_pos < end_pos) {
            *read_pos = (uintmax_t )end_pos;
            if (end_pos != 0L) {
              {
              tmp___5 = file_lines(pretty_filename, fd, n_lines, start_pos, end_pos,
                                   read_pos);
              }
              if (! tmp___5) {
                return ((_Bool)0);
              }
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
      if (start_pos != -1L) {
        {
        xlseek(fd, start_pos, 0, pretty_filename);
        }
      }
      {
      tmp___6 = pipe_lines(pretty_filename, fd, n_lines, read_pos);
      }
      return (tmp___6);
    }
  }
  return ((_Bool)1);
}
}
static _Bool tail(char const   *filename , int fd , uintmax_t n_units , uintmax_t *read_pos ) 
{ 
  _Bool tmp ;
  _Bool tmp___0 ;

  {
  *read_pos = (uintmax_t )0;
  if (count_lines) {
    {
    tmp = tail_lines(filename, fd, n_units, read_pos);
    }
    return (tmp);
  } else {
    {
    tmp___0 = tail_bytes(filename, fd, n_units, read_pos);
    }
    return (tmp___0);
  }
}
}
static _Bool tail_file(struct File_spec *f , uintmax_t n_units ) 
{ 
  int fd ;
  _Bool ok ;
  _Bool is_stdin ;
  int tmp ;
  int tmp___1 ;
  int *tmp___2 ;
  char const   *tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  uintmax_t read_pos ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  struct stat stats ;
  int *tmp___9 ;
  char const   *tmp___10 ;
  char const   *tmp___11 ;
  char *tmp___12 ;
  int *tmp___13 ;
  char const   *tmp___14 ;
  char *tmp___15 ;
  int tmp___16 ;
  char const   *tmp___17 ;
  int tmp___18 ;
  char const   *tmp___19 ;
  char const   *tmp___20 ;
  char *tmp___21 ;
  int *tmp___22 ;
  int tmp___23 ;
  void *__cil_tmp37 ;
  char *__cil_tmp38 ;
  char *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char *__cil_tmp41 ;

  {
  {
  tmp = strcmp((char const   *)f->name, "-");
  is_stdin = (_Bool )(tmp == 0);
  }
  if (is_stdin) {
    have_read_stdin = (_Bool)1;
    fd = 0;
  } else {
    {
    fd = open_safer((char const   *)f->name, 0);
    }
  }
  if (reopen_inaccessible_files) {
    if (fd == -1) {
      tmp___1 = 0;
    } else {
      tmp___1 = 1;
    }
  } else {
    tmp___1 = 1;
  }
  f->tailable = (_Bool )tmp___1;
  if (fd == -1) {
    if (forever) {
      {
      f->fd = -1;
      tmp___2 = __errno_location();
      f->errnum = *tmp___2;
      f->ignore = (_Bool)0;
      f->ino = (ino_t )0;
      f->dev = (dev_t )0;
      }
    }
    {
    tmp___3 = pretty_name((struct File_spec  const  *)f);
    tmp___4 = quote(tmp___3);
    tmp___5 = gettext("cannot open %s for reading");
    tmp___6 = __errno_location();
    error(0, *tmp___6, (char const   *)tmp___5, tmp___4);
    ok = (_Bool)0;
    }
  } else {
    if (print_headers) {
      {
      tmp___7 = pretty_name((struct File_spec  const  *)f);
      write_header(tmp___7);
      }
    }
    {
    tmp___8 = pretty_name((struct File_spec  const  *)f);
    ok = tail(tmp___8, fd, n_units, & read_pos);
    }
    if (forever) {
      {
      f->errnum = (int )ok - 1;
      tmp___16 = fstat(fd, & stats);
      }
      if (tmp___16 < 0) {
        {
        ok = (_Bool)0;
        tmp___9 = __errno_location();
        f->errnum = *tmp___9;
        tmp___10 = pretty_name((struct File_spec  const  *)f);
        tmp___11 = quote(tmp___10);
        tmp___12 = gettext("error reading %s");
        tmp___13 = __errno_location();
        error(0, *tmp___13, (char const   *)tmp___12, tmp___11);
        }
      } else
      if (! ((stats.st_mode & 61440U) == 32768U)) {
        if (! ((stats.st_mode & 61440U) == 4096U)) {
          if (! ((stats.st_mode & 61440U) == 49152U)) {
            if (! ((stats.st_mode & 61440U) == 8192U)) {
              {
              tmp___14 = pretty_name((struct File_spec  const  *)f);
              tmp___15 = gettext("%s: cannot follow end of this type of file; giving up on this name");
              error(0, 0, (char const   *)tmp___15, tmp___14);
              ok = (_Bool)0;
              f->errnum = -1;
              f->ignore = (_Bool)1;
              }
            }
          }
        }
      }
      if (! ok) {
        {
        tmp___17 = pretty_name((struct File_spec  const  *)f);
        close_fd(fd, tmp___17);
        f->fd = -1;
        }
      } else {
        if (is_stdin) {
          tmp___18 = -1;
        } else {
          tmp___18 = 1;
        }
        {
        record_open_fd(f, fd, (off_t )read_pos, (struct stat  const  *)(& stats),
                       tmp___18);
        }
      }
    } else
    if (! is_stdin) {
      {
      tmp___23 = close(fd);
      }
      if (tmp___23) {
        {
        tmp___19 = pretty_name((struct File_spec  const  *)f);
        tmp___20 = quote(tmp___19);
        tmp___21 = gettext("error reading %s");
        tmp___22 = __errno_location();
        error(0, *tmp___22, (char const   *)tmp___21, tmp___20);
        ok = (_Bool)0;
        }
      }
    }
  }
  return (ok);
}
}
static _Bool parse_obsolete_option(int argc , char * const  *argv , uintmax_t *n_units ) 
{ 
  char const   *p ;
  char const   *n_string ;
  char const   *n_string_end ;
  _Bool obsolete_usage ;
  int default_count ;
  _Bool t_from_start ;
  _Bool t_count_lines ;
  _Bool t_forever ;
  int tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  strtol_error tmp___4 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;

  {
  default_count = 10;
  t_count_lines = (_Bool)1;
  t_forever = (_Bool)0;
  if (! (argc == 2)) {
    if (argc == 3) {
      if ((int )*(*(argv + 2) + 0) == 45) {
        if (*(*(argv + 2) + 1)) {
          goto _L;
        }
      }
    } else
    _L: 
    if (3 <= argc) {
      if (argc <= 4) {
        {
        tmp = strcmp((char const   *)*(argv + 2), "--");
        }
        if (! (tmp == 0)) {
          return ((_Bool)0);
        }
      } else {
        return ((_Bool)0);
      }
    } else {
      return ((_Bool)0);
    }
  }
  {
  tmp___0 = posix2_version();
  obsolete_usage = (_Bool )(tmp___0 < 200112);
  p = (char const   *)*(argv + 1);
  tmp___1 = p;
  p ++;
  }
  if ((int const   )*tmp___1 == 43) {
    goto case_43;
  }
  if ((int const   )*tmp___1 == 45) {
    goto case_45;
  }
  goto switch_default;
  switch_default: 
  return ((_Bool)0);
  case_43: 
  if (! obsolete_usage) {
    return ((_Bool)0);
  }
  t_from_start = (_Bool)1;
  goto switch_break;
  case_45: 
  if (! obsolete_usage) {
    if (! *(p + ((int const   )*(p + 0) == 99))) {
      return ((_Bool)0);
    }
  }
  t_from_start = (_Bool)0;
  goto switch_break;
  switch_break: 
  n_string = p;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((unsigned int )*p - 48U <= 9U)) {
      goto while_break;
    }
    p ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  n_string_end = p;
  if ((int const   )*p == 98) {
    goto case_98;
  }
  if ((int const   )*p == 99) {
    goto case_99;
  }
  if ((int const   )*p == 108) {
    goto case_108;
  }
  goto switch_break___0;
  case_98: 
  default_count *= 512;
  case_99: 
  t_count_lines = (_Bool)0;
  case_108: 
  p ++;
  goto switch_break___0;
  switch_break___0: ;
  if ((int const   )*p == 102) {
    t_forever = (_Bool)1;
    p ++;
  }
  if (*p) {
    return ((_Bool)0);
  }
  if ((unsigned long )n_string == (unsigned long )n_string_end) {
    *n_units = (uintmax_t )default_count;
  } else {
    {
    tmp___4 = xstrtoumax(n_string, (char **)((void *)0), 10, n_units, "b");
    }
    if (((unsigned int )tmp___4 & 4294967293U) != 0U) {
      {
      tmp___2 = quote((char const   *)*(argv + 1));
      tmp___3 = gettext("number in %s is too large");
      error(1, 0, (char const   *)tmp___3, tmp___2);
      }
    }
  }
  from_start = t_from_start;
  count_lines = t_count_lines;
  forever = t_forever;
  return ((_Bool)1);
}
}
static void parse_options(int argc , char **argv , uintmax_t *n_units , enum header_mode *header_mode ,
                          double *sleep_interval ) 
{ 
  int c ;
  strtol_error s_err ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  ptrdiff_t tmp___2 ;
  char *tmp___3 ;
  strtol_error tmp___4 ;
  strtol_error s_err___0 ;
  unsigned long tmp_ulong ;
  char *tmp___5 ;
  double s ;
  char *tmp___6 ;
  _Bool tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  int tmp___12 ;
  int *tmp___13 ;
  char *__cil_tmp47 ;
  char *__cil_tmp48 ;
  char *__cil_tmp49 ;
  char *__cil_tmp50 ;
  char *__cil_tmp51 ;
  char *__cil_tmp52 ;
  char *__cil_tmp53 ;
  char *__cil_tmp54 ;
  char *__cil_tmp55 ;
  char *__cil_tmp56 ;
  char *__cil_tmp57 ;
  char *__cil_tmp58 ;
  char *__cil_tmp59 ;
  char *__cil_tmp60 ;
  char *__cil_tmp61 ;
  char *__cil_tmp62 ;
  char *__cil_tmp63 ;
  char *__cil_tmp64 ;
  char *__cil_tmp65 ;
  char *__cil_tmp66 ;
  char *__cil_tmp67 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    c = getopt_long(argc, (char * const  *)argv, "c:n:fFqs:v0123456789", long_options,
                    (int *)((void *)0));
    }
    if (! (c != -1)) {
      goto while_break;
    }
    if (c == 70) {
      goto case_70;
    }
    if (c == 99) {
      goto case_99;
    }
    if (c == 110) {
      goto case_99;
    }
    if (c == 102) {
      goto case_102;
    }
    if (c == 132) {
      goto case_102;
    }
    if (c == 128) {
      goto case_128;
    }
    if (c == 129) {
      goto case_129;
    }
    if (c == 133) {
      goto case_133;
    }
    if (c == 130) {
      goto case_130;
    }
    if (c == 131) {
      goto case_131;
    }
    if (c == 113) {
      goto case_113;
    }
    if (c == 115) {
      goto case_115;
    }
    if (c == 118) {
      goto case_118;
    }
    if (c == -130) {
      goto case_neg_130;
    }
    if (c == -131) {
      goto case_neg_131;
    }
    if (c == 48) {
      goto case_48;
    }
    if (c == 49) {
      goto case_48;
    }
    if (c == 50) {
      goto case_48;
    }
    if (c == 51) {
      goto case_48;
    }
    if (c == 52) {
      goto case_48;
    }
    if (c == 53) {
      goto case_48;
    }
    if (c == 54) {
      goto case_48;
    }
    if (c == 55) {
      goto case_48;
    }
    if (c == 56) {
      goto case_48;
    }
    if (c == 57) {
      goto case_48;
    }
    goto switch_default;
    case_70: 
    forever = (_Bool)1;
    follow_mode = (enum Follow_mode )1;
    reopen_inaccessible_files = (_Bool)1;
    goto switch_break;
    case_99: 
    count_lines = (_Bool )(c == 110);
    if ((int )*optarg == 43) {
      from_start = (_Bool)1;
    } else
    if ((int )*optarg == 45) {
      optarg ++;
    }
    {
    s_err = xstrtoumax((char const   *)optarg, (char **)((void *)0), 10, n_units,
                       "bkKmMGTPEZY0");
    }
    if ((unsigned int )s_err != 0U) {
      if (c == 110) {
        {
        tmp = gettext("invalid number of lines");
        tmp___1 = tmp;
        }
      } else {
        {
        tmp___0 = gettext("invalid number of bytes");
        tmp___1 = tmp___0;
        }
      }
      {
      error(1, 0, "%s: %s", optarg, tmp___1);
      }
    }
    goto switch_break;
    case_102: 
    forever = (_Bool)1;
    if ((unsigned long )optarg == (unsigned long )((void *)0)) {
      follow_mode = (enum Follow_mode )2;
    } else {
      {
      tmp___2 = __xargmatch_internal("--follow", (char const   *)optarg, follow_mode_string,
                                     (char const   *)(follow_mode_map), sizeof(follow_mode_map[0]),
                                     argmatch_die);
      follow_mode = (enum Follow_mode )follow_mode_map[tmp___2];
      }
    }
    goto switch_break;
    case_128: 
    reopen_inaccessible_files = (_Bool)1;
    goto switch_break;
    case_129: 
    {
    tmp___4 = xstrtoumax((char const   *)optarg, (char **)((void *)0), 10, & max_n_unchanged_stats_between_opens,
                         "");
    }
    if ((unsigned int )tmp___4 != 0U) {
      {
      tmp___3 = gettext("%s: invalid maximum number of unchanged stats between opens");
      error(1, 0, (char const   *)tmp___3, optarg);
      }
    }
    goto switch_break;
    case_133: 
    disable_inotify = (_Bool)1;
    goto switch_break;
    case_130: 
    {
    s_err___0 = xstrtoul((char const   *)optarg, (char **)((void *)0), 10, & tmp_ulong,
                         "");
    }
    if ((unsigned int )s_err___0 != 0U) {
      {
      tmp___5 = gettext("%s: invalid PID");
      error(1, 0, (char const   *)tmp___5, optarg);
      }
    } else
    if (tmp_ulong > (unsigned long )(~ (-1 << (sizeof(pid_t ) * 8UL - 1UL)))) {
      {
      tmp___5 = gettext("%s: invalid PID");
      error(1, 0, (char const   *)tmp___5, optarg);
      }
    }
    pid = (pid_t )tmp_ulong;
    goto switch_break;
    case_131: 
    presume_input_pipe = (_Bool)1;
    goto switch_break;
    case_113: 
    *header_mode = (enum header_mode )2;
    goto switch_break;
    case_115: 
    {
    tmp___7 = xstrtod((char const   *)optarg, (char const   **)((void *)0), & s, & c_strtod);
    }
    if (tmp___7) {
      if (! ((double )0 <= s)) {
        {
        tmp___6 = gettext("%s: invalid number of seconds");
        error(1, 0, (char const   *)tmp___6, optarg);
        }
      }
    } else {
      {
      tmp___6 = gettext("%s: invalid number of seconds");
      error(1, 0, (char const   *)tmp___6, optarg);
      }
    }
    *sleep_interval = s;
    goto switch_break;
    case_118: 
    *header_mode = (enum header_mode )1;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    version_etc(stdout, "tail", "GNU coreutils", Version, "Paul Rubin", "David MacKenzie",
                "Ian Lance Taylor", "Jim Meyering", (char *)((void *)0));
    exit(0);
    }
    goto switch_break;
    case_48: 
    {
    tmp___8 = gettext("option used in invalid context -- %c");
    error(1, 0, (char const   *)tmp___8, c);
    }
    switch_default: 
    {
    usage(1);
    }
    switch_break: ;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (reopen_inaccessible_files) {
    if ((unsigned int )follow_mode != 1U) {
      {
      tmp___9 = gettext("warning: --retry is useful mainly when following by name");
      error(0, 0, (char const   *)tmp___9);
      }
    }
  }
  if (pid) {
    if (! forever) {
      {
      tmp___10 = gettext("warning: PID ignored; --pid=PID is useful only when following");
      error(0, 0, (char const   *)tmp___10);
      }
    } else {
      goto _L;
    }
  } else
  _L: 
  if (pid) {
    {
    tmp___12 = kill(pid, 0);
    }
    if (tmp___12 != 0) {
      {
      tmp___13 = __errno_location();
      }
      if (*tmp___13 == 38) {
        {
        tmp___11 = gettext("warning: --pid=PID is not supported on this system");
        error(0, 0, (char const   *)tmp___11);
        pid = 0;
        }
      }
    }
  }
  return;
}
}
int main(int argc , char **argv ) ;
static char *dummy_stdin  =    (char *)"-";
int main(int argc , char **argv ) 
{ 
  enum header_mode header_mode ;
  _Bool ok ;
  uintmax_t n_units ;
  size_t n_files ;
  char **file ;
  struct File_spec *F ;
  size_t i ;
  _Bool obsolete_option ;
  double sleep_interval ;
  _Bool found_hyphen ;
  int tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  void *tmp___4 ;
  _Bool tmp___6 ;
  size_t n_viable ;
  _Bool is_a_fifo_or_pipe ;
  int tmp___7 ;
  int tmp___9 ;
  _Bool stdin_cmdline_arg ;
  int tmp___10 ;
  int wd ;
  int tmp___11 ;
  char *tmp___12 ;
  int *tmp___13 ;
  char *tmp___14 ;
  int *tmp___15 ;
  int tmp___16 ;
  int *tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  char *__cil_tmp41 ;
  char *__cil_tmp42 ;
  char *__cil_tmp43 ;
  char *__cil_tmp44 ;
  char *__cil_tmp45 ;

  {
  {
  header_mode = (enum header_mode )0;
  ok = (_Bool)1;
  n_units = (uintmax_t )10;
  sleep_interval = 1.0;
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  have_read_stdin = (_Bool)0;
  count_lines = (_Bool)1;
  print_headers = (_Bool)0;
  from_start = print_headers;
  forever = from_start;
  obsolete_option = parse_obsolete_option(argc, (char * const  *)argv, & n_units);
  argc -= (int )obsolete_option;
  argv += (int )obsolete_option;
  parse_options(argc, argv, & n_units, & header_mode, & sleep_interval);
  }
  if (from_start) {
    if (n_units) {
      n_units --;
    }
  }
  if (optind < argc) {
    n_files = (size_t )(argc - optind);
    file = argv + optind;
  } else {
    n_files = (size_t )1;
    file = & dummy_stdin;
  }
  found_hyphen = (_Bool)0;
  i = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < n_files)) {
      goto while_break;
    }
    {
    tmp = strcmp((char const   *)*(file + i), "-");
    }
    if (tmp == 0) {
      found_hyphen = (_Bool)1;
    }
    i ++;
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break: ;
  if (found_hyphen) {
    if ((unsigned int )follow_mode == 1U) {
      {
      tmp___0 = quote("-");
      tmp___1 = gettext("cannot follow %s by name");
      error(1, 0, (char const   *)tmp___1, tmp___0);
      }
    }
  }
  if (forever) {
    if (found_hyphen) {
      {
      tmp___3 = isatty(0);
      }
      if (tmp___3) {
        {
        tmp___2 = gettext("warning: following standard input indefinitely is ineffective");
        error(0, 0, (char const   *)tmp___2);
        }
      }
    }
  }
  {
  tmp___4 = xnmalloc(n_files, sizeof(*F));
  F = (struct File_spec *)tmp___4;
  i = (size_t )0;
  }
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! (i < n_files)) {
      goto while_break___0;
    }
    (F + i)->name = *(file + i);
    i ++;
  }
  while_break___5: /* CIL Label */ ;
  }
  while_break___0: ;
  if ((unsigned int )header_mode == 1U) {
    print_headers = (_Bool)1;
  } else
  if ((unsigned int )header_mode == 0U) {
    if (n_files > 1UL) {
      print_headers = (_Bool)1;
    }
  }
  i = (size_t )0;
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;

    if (! (i < n_files)) {
      goto while_break___1;
    }
    {
    tmp___6 = tail_file(F + i, n_units);
    ok = (_Bool )((int )ok & (int )tmp___6);
    i ++;
    }
  }
  while_break___6: /* CIL Label */ ;
  }
  while_break___1: 
  n_viable = (size_t )0;
  i = (size_t )0;
  {
  while (1) {
    while_continue___2: /* CIL Label */ ;

    if (! (i < n_files)) {
      goto while_break___2;
    }
    {
    tmp___7 = strcmp((char const   *)(F + i)->name, "-");
    }
    if (tmp___7 == 0) {
      if (! (F + i)->ignore) {
        if (0 <= (F + i)->fd) {
          if (((F + i)->mode & 61440U) == 4096U) {
            tmp___9 = 1;
          } else {
            tmp___9 = 0;
          }
        } else {
          tmp___9 = 0;
        }
      } else {
        tmp___9 = 0;
      }
    } else {
      tmp___9 = 0;
    }
    is_a_fifo_or_pipe = (_Bool )tmp___9;
    if (is_a_fifo_or_pipe) {
      (F + i)->ignore = (_Bool)1;
    } else {
      n_viable ++;
    }
    i ++;
  }
  while_break___7: /* CIL Label */ ;
  }
  while_break___2: ;
  if (forever) {
    if (n_viable) {
      stdin_cmdline_arg = (_Bool)0;
      i = (size_t )0;
      {
      while (1) {
        while_continue___3: /* CIL Label */ ;

        if (! (i < n_files)) {
          goto while_break___3;
        }
        if (! (F + i)->ignore) {
          {
          tmp___10 = strcmp((char const   *)(F + i)->name, "-");
          }
          if (tmp___10 == 0) {
            stdin_cmdline_arg = (_Bool)1;
          }
        }
        i ++;
      }
      while_break___8: /* CIL Label */ ;
      }
      while_break___3: ;
      if (! disable_inotify) {
        if (! stdin_cmdline_arg) {
          {
          tmp___11 = inotify_init();
          wd = tmp___11;
          }
          if (wd < 0) {
            {
            tmp___12 = gettext("inotify cannot be used, reverting to polling");
            tmp___13 = __errno_location();
            error(0, *tmp___13, (char const   *)tmp___12);
            }
          } else {
            {
            tmp___16 = fflush_unlocked(stdout);
            }
            if (tmp___16 != 0) {
              {
              tmp___14 = gettext("write error");
              tmp___15 = __errno_location();
              error(1, *tmp___15, (char const   *)tmp___14);
              }
            }
            {
            tail_forever_inotify(wd, F, n_files, sleep_interval);
            exit(1);
            }
          }
        }
      }
      {
      tail_forever(F, n_files, sleep_interval);
      }
    }
  }
  if (have_read_stdin) {
    {
    tmp___18 = close(0);
    }
    if (tmp___18 < 0) {
      {
      tmp___17 = __errno_location();
      error(1, *tmp___17, "-");
      }
    }
  }
  if (ok) {
    tmp___19 = 0;
  } else {
    tmp___19 = 1;
  }
  {
  exit(tmp___19);
  }
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
ptrdiff_t argmatch(char const   *arg , char const   * const  *arglist , char const   *vallist ,
                   size_t valsize ) ;
void argmatch_invalid(char const   *context , char const   *value , ptrdiff_t problem ) ;
void argmatch_valid(char const   * const  *arglist , char const   *vallist , size_t valsize ) ;
extern int putc_unlocked(int __c , FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) memcmp)(void const   *__s1 ,
                                                                                               void const   *__s2 ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
char *quotearg_n_style(int n , enum quoting_style s , char const   *arg ) ;
char const   *quote_n(int n , char const   *name ) ;
static void __argmatch_die(void) 
{ 


  {
  {
  usage(1);
  }
  return;
}
}
void (*argmatch_die)(void)  =    & __argmatch_die;
ptrdiff_t argmatch(char const   *arg , char const   * const  *arglist , char const   *vallist ,
                   size_t valsize ) 
{ 
  size_t i ;
  size_t arglen ;
  ptrdiff_t matchind ;
  _Bool ambiguous ;
  int tmp ;
  size_t tmp___0 ;
  int tmp___1 ;

  {
  {
  matchind = (ptrdiff_t )-1;
  ambiguous = (_Bool)0;
  arglen = strlen(arg);
  i = (size_t )0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! *(arglist + i)) {
      goto while_break;
    }
    {
    tmp___1 = strncmp((char const   *)*(arglist + i), arg, arglen);
    }
    if (! tmp___1) {
      {
      tmp___0 = strlen((char const   *)*(arglist + i));
      }
      if (tmp___0 == arglen) {
        return ((ptrdiff_t )i);
      } else
      if (matchind == -1L) {
        matchind = (ptrdiff_t )i;
      } else
      if ((unsigned long )vallist == (unsigned long )((void *)0)) {
        ambiguous = (_Bool)1;
      } else {
        {
        tmp = memcmp((void const   *)(vallist + valsize * (size_t )matchind), (void const   *)(vallist + valsize * i),
                     valsize);
        }
        if (tmp) {
          ambiguous = (_Bool)1;
        }
      }
    }
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (ambiguous) {
    return ((ptrdiff_t )-2);
  } else {
    return (matchind);
  }
}
}
void argmatch_invalid(char const   *context , char const   *value , ptrdiff_t problem ) 
{ 
  char const   *format ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;

  {
  if (problem == -1L) {
    {
    tmp = gettext("invalid argument %s for %s");
    tmp___1 = tmp;
    }
  } else {
    {
    tmp___0 = gettext("ambiguous argument %s for %s");
    tmp___1 = tmp___0;
    }
  }
  {
  format = (char const   *)tmp___1;
  tmp___2 = quote_n(1, context);
  tmp___3 = quotearg_n_style(0, (enum quoting_style )6, value);
  error(0, 0, format, tmp___3, tmp___2);
  }
  return;
}
}
void argmatch_valid(char const   * const  *arglist , char const   *vallist , size_t valsize ) 
{ 
  size_t i ;
  char const   *last_val ;
  char *tmp ;
  int tmp___0 ;
  char *__cil_tmp9 ;

  {
  {
  last_val = (char const   *)((void *)0);
  tmp = gettext("Valid arguments are:");
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)tmp));
  i = (size_t )0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! *(arglist + i)) {
      goto while_break;
    }
    if (i == 0UL) {
      {
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"\n  - `%s\'",
              *(arglist + i));
      last_val = vallist + valsize * i;
      }
    } else {
      {
      tmp___0 = memcmp((void const   *)last_val, (void const   *)(vallist + valsize * i),
                       valsize);
      }
      if (tmp___0) {
        {
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"\n  - `%s\'",
                *(arglist + i));
        last_val = vallist + valsize * i;
        }
      } else {
        {
        fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)", `%s\'",
                *(arglist + i));
        }
      }
    }
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
  putc_unlocked('\n', stderr);
  }
  return;
}
}
ptrdiff_t __xargmatch_internal(char const   *context , char const   *arg , char const   * const  *arglist ,
                               char const   *vallist , size_t valsize , void (*exit_fn)(void) ) 
{ 
  ptrdiff_t res ;
  ptrdiff_t tmp ;

  {
  {
  tmp = argmatch(arg, arglist, vallist, valsize);
  res = tmp;
  }
  if (res >= 0L) {
    return (res);
  }
  {
  argmatch_invalid(context, arg, res);
  argmatch_valid(arglist, vallist, valsize);
  (*exit_fn)();
  }
  return ((ptrdiff_t )-1);
}
}
char const   *simple_backup_suffix ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) getenv)(char const   *__name ) ;
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
extern  __attribute__((__nothrow__)) __locale_t ( __attribute__((__leaf__)) newlocale)(int __category_mask ,
                                                                                       char const   *__locale ,
                                                                                       __locale_t __base ) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1,3), __leaf__)) strtod_l)(char const   * __restrict  __nptr ,
                                                                                                    char ** __restrict  __endptr ,
                                                                                                    __locale_t __loc ) ;
static locale_t volatile   c_locale_cache  ;
__inline static locale_t c_locale(void) 
{ 
  __locale_t tmp ;

  {
  if (! c_locale_cache) {
    {
    tmp = newlocale(((((((((((1 | (1 << 1)) | (1 << 2)) | (1 << 3)) | (1 << 4)) | (1 << 5)) | (1 << 7)) | (1 << 8)) | (1 << 9)) | (1 << 10)) | (1 << 11)) | (1 << 12),
                    "C", (locale_t )0);
    c_locale_cache = (locale_t volatile   )tmp;
    }
  }
  return ((locale_t )c_locale_cache);
}
}
double c_strtod(char const   *nptr , char **endptr ) 
{ 
  double r ;
  locale_t locale ;
  locale_t tmp ;

  {
  {
  tmp = c_locale();
  locale = tmp;
  }
  if (! locale) {
    if (endptr) {
      *endptr = (char *)nptr;
    }
    return ((double )0);
  }
  {
  r = strtod_l((char const   */* __restrict  */)nptr, (char **/* __restrict  */)endptr,
               locale);
  }
  return (r);
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
int fd_safer(int fd ) ;
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
size_t dir_len(char const   *file ) 
{ 
  size_t prefix_length ;
  size_t length ;
  int tmp ;
  int tmp___0 ;
  char *tmp___1 ;

  {
  prefix_length = (size_t )0;
  if (prefix_length != 0UL) {
    tmp___0 = 0;
  } else {
    if ((int const   )*(file + 0) == 47) {
      tmp = 1;
    } else {
      tmp = 0;
    }
    tmp___0 = tmp;
  }
  {
  prefix_length += (size_t )tmp___0;
  tmp___1 = last_component(file);
  length = (size_t )(tmp___1 - (char *)file);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (prefix_length < length)) {
      goto while_break;
    }
    if (! ((int const   )*(file + (length - 1UL)) == 47)) {
      goto while_break;
    }
    length --;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (length);
}
}
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
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) __ctype_get_mb_cur_max)(void) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strrchr)(char const   *__s ,
                                                                                                int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wint_t ( __attribute__((__leaf__)) towlower)(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) mbsinit)(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) mbrtowc)(wchar_t * __restrict  __pwc ,
                                                                                 char const   * __restrict  __s ,
                                                                                 size_t __n ,
                                                                                 mbstate_t * __restrict  __p ) ;
unsigned int const   is_basic_table[8] ;
int volatile   exit_failure  =    (int volatile   )1;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file , int __oflag 
                                                   , ...) ;
int fd_safer(int fd ) 
{ 
  int f ;
  int tmp ;
  int e ;
  int *tmp___0 ;
  int *tmp___1 ;

  {
  if (0 <= fd) {
    if (fd <= 2) {
      {
      tmp = dup_safer(fd);
      f = tmp;
      tmp___0 = __errno_location();
      e = *tmp___0;
      close(fd);
      tmp___1 = __errno_location();
      *tmp___1 = e;
      fd = f;
      }
    }
  }
  return (fd);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
void gettime(struct timespec *ts ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) clock_gettime)(clockid_t __clock_id ,
                                                                                    struct timespec *__tp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) gettimeofday)(struct timeval * __restrict  __tv ,
                                                                                                   __timezone_ptr_t __tz ) ;
void gettime(struct timespec *ts ) 
{ 
  int tmp ;
  struct timeval tv ;

  {
  {
  tmp = clock_gettime(0, ts);
  }
  if (tmp == 0) {
    return;
  }
  {
  gettimeofday((struct timeval */* __restrict  */)(& tv), (__timezone_ptr_t )((void *)0));
  ts->tv_sec = tv.tv_sec;
  ts->tv_nsec = tv.tv_usec * 1000L;
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
void *hash_delete(Hash_table *table___0 , void const   *entry ) 
{ 
  void *data ;
  struct hash_entry *bucket ;
  Hash_tuning const   *tuning ;
  size_t candidate ;
  float tmp ;
  struct hash_entry *cursor ;
  struct hash_entry *next ;
  _Bool tmp___0 ;

  {
  {
  data = hash_find_entry(table___0, entry, & bucket, (_Bool)1);
  }
  if (! data) {
    return ((void *)0);
  }
  (table___0->n_entries) --;
  if (! bucket->data) {
    (table___0->n_buckets_used) --;
    if ((float const   )table___0->n_buckets_used < (table___0->tuning)->shrink_threshold * (float const   )table___0->n_buckets) {
      {
      check_tuning(table___0);
      }
      if ((float const   )table___0->n_buckets_used < (table___0->tuning)->shrink_threshold * (float const   )table___0->n_buckets) {
        tuning = table___0->tuning;
        if (tuning->is_n_buckets) {
          tmp = (float )((float const   )table___0->n_buckets * tuning->shrink_factor);
        } else {
          tmp = (float )(((float const   )table___0->n_buckets * tuning->shrink_factor) * tuning->growth_threshold);
        }
        {
        candidate = (size_t )tmp;
        tmp___0 = hash_rehash(table___0, candidate);
        }
        if (! tmp___0) {
          cursor = table___0->free_entry_list;
          {
          while (1) {
            while_continue: /* CIL Label */ ;

            if (! cursor) {
              goto while_break;
            }
            {
            next = cursor->next;
            free((void *)cursor);
            cursor = next;
            }
          }
          while_break___0: /* CIL Label */ ;
          }
          while_break: 
          table___0->free_entry_list = (struct hash_entry *)((void *)0);
        }
      }
    }
  }
  return (data);
}
}
void version_etc_va(FILE *stream , char const   *command_name , char const   *package ,
                    char const   *version , va_list authors ) ;
unsigned int const   is_basic_table[8]  = {      (unsigned int const   )6656,      (unsigned int const   )4294967279U,      (unsigned int const   )4294967294U,      (unsigned int const   )2147483646};
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswprint)(wint_t __wc ) ;
extern int nanosleep(struct timespec  const  *__requested_time , struct timespec *__remaining ) ;
int rpl_nanosleep(struct timespec  const  *requested_delay , struct timespec *remaining_delay ) ;
static void getnow(struct timespec *t ) 
{ 
  int tmp ;

  {
  {
  tmp = clock_gettime(1, t);
  }
  if (tmp == 0) {
    return;
  }
  {
  gettime(t);
  }
  return;
}
}
int rpl_nanosleep(struct timespec  const  *requested_delay , struct timespec *remaining_delay ) 
{ 
  struct timespec delay ;
  struct timespec t0 ;
  int r ;
  int tmp ;
  time_t secs_sofar ;
  struct timespec now ;

  {
  {
  delay = (struct timespec )*requested_delay;
  getnow(& t0);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp = nanosleep((struct timespec  const  *)(& delay), remaining_delay);
    r = tmp;
    }
    if (r == 0) {
      {
      getnow(& now);
      secs_sofar = now.tv_sec - t0.tv_sec;
      }
      if (requested_delay->tv_sec < (__time_t const   )secs_sofar) {
        return (0);
      }
      delay.tv_sec = (__time_t )(requested_delay->tv_sec - (__time_t const   )secs_sofar);
      delay.tv_nsec = (__syscall_slong_t )(requested_delay->tv_nsec - (__syscall_slong_t const   )(now.tv_nsec - t0.tv_nsec));
      if (delay.tv_nsec < 0L) {
        if (delay.tv_sec == 0L) {
          return (0);
        }
        delay.tv_nsec += 1000000000L;
        (delay.tv_sec) --;
      } else
      if (1000000000L <= delay.tv_nsec) {
        delay.tv_nsec -= 1000000000L;
        (delay.tv_sec) ++;
      }
    }
  }
  while_break: /* CIL Label */ ;
  }

  return (0);
}
}
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1),
__leaf__)) strtoul)(char const   * __restrict  __nptr , char ** __restrict  __endptr ,
                    int __base ) ;
char *( __attribute__((__warn_unused_result__)) offtostr)(off_t i , char *buf___0 ) 
{ 
  char *p ;

  {
  p = buf___0 + ((((sizeof(off_t ) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL);
  *p = (char)0;
  if (i < 0L) {
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      p --;
      *p = (char )(48L - i % 10L);
      i /= 10L;
      if (! (i != 0L)) {
        goto while_break;
      }
    }
    while_break___1: /* CIL Label */ ;
    }
    while_break: 
    p --;
    *p = (char )'-';
  } else {
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      p --;
      *p = (char )(48L + i % 10L);
      i /= 10L;
      if (! (i != 0L)) {
        goto while_break___0;
      }
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: ;
  }
  return (p);
}
}
int open_safer(char const   *file , int flags  , ...) 
{ 
  mode_t mode ;
  va_list ap ;
  mode_t tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  mode = (mode_t )0;
  if (flags & 64) {
    {
    __builtin_va_start(ap, flags);
    tmp = __builtin_va_arg(ap, mode_t );
    mode = tmp;
    __builtin_va_end(ap);
    }
  }
  {
  tmp___0 = open(file, flags, mode);
  tmp___1 = fd_safer(tmp___0);
  }
  return (tmp___1);
}
}
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1), __leaf__)) strtol)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ,
                                                                                              int __base ) ;
int posix2_version(void) 
{ 
  long v ;
  char const   *s ;
  char *tmp ;
  char *e ;
  long i ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  char *__cil_tmp10 ;

  {
  {
  v = 200809L;
  tmp = getenv("_POSIX2_VERSION");
  s = (char const   *)tmp;
  }
  if (s) {
    if (*s) {
      {
      tmp___0 = strtol((char const   */* __restrict  */)s, (char **/* __restrict  */)(& e),
                       10);
      i = tmp___0;
      }
      if (! *e) {
        v = i;
      }
    }
  }
  if (v < (-0x7FFFFFFF-1)) {
    tmp___2 = (-0x7FFFFFFF-1);
  } else {
    if (v < 2147483647L) {
      tmp___1 = v;
    } else {
      tmp___1 = 2147483647L;
    }
    tmp___2 = tmp___1;
  }
  return ((int )tmp___2);
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
int xnanosleep(double seconds ) 
{ 
  _Bool overflow ;
  int tmp ;
  int tmp___0 ;
  struct timespec ts_sleep ;
  time_t floor_seconds ;
  double ns ;
  int *tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;

  {
  if ((time_t )((double )(~ (-1L << (sizeof(time_t ) * 8UL - 1UL))) / (double )2) == ~ (-1L << (sizeof(time_t ) * 8UL - 1UL)) / 2L) {
    tmp___0 = (double )(~ (-1L << (sizeof(time_t ) * 8UL - 1UL))) < seconds;
  } else {
    if ((time_t )((long double )(~ (-1L << (sizeof(time_t ) * 8UL - 1UL))) / (long double )2) == ~ (-1L << (sizeof(time_t ) * 8UL - 1UL)) / 2L) {
      tmp = (long double )(~ (-1L << (sizeof(time_t ) * 8UL - 1UL))) < (long double )seconds;
    } else {
      tmp = (long double )(~ (-1L << (sizeof(time_t ) * 8UL - 1UL))) <= (long double )seconds;
    }
    tmp___0 = tmp;
  }
  overflow = (_Bool )tmp___0;
  if (! ((double )0 <= seconds)) {
    {
    __assert_fail("0 <= seconds", "/home/wslee/project/coreutils-8.1/lib/xnanosleep.c",
                  67U, "xnanosleep");
    }
  }
  if (! overflow) {
    floor_seconds = (time_t )seconds;
    ns = (double )1000000000 * (seconds - (double )floor_seconds);
    ts_sleep.tv_sec = floor_seconds;
    ts_sleep.tv_nsec = (__syscall_slong_t )ns;
    ts_sleep.tv_nsec += (__syscall_slong_t )((double )ts_sleep.tv_nsec < ns);
    if (1000000000L <= ts_sleep.tv_nsec) {
      if (ts_sleep.tv_sec == ~ (-1L << (sizeof(time_t ) * 8UL - 1UL))) {
        overflow = (_Bool)1;
      } else {
        (ts_sleep.tv_sec) ++;
        ts_sleep.tv_nsec -= 1000000000L;
      }
    }
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (overflow) {
      ts_sleep.tv_sec = ~ (-1L << (sizeof(time_t ) * 8UL - 1UL));
      ts_sleep.tv_nsec = (__syscall_slong_t )999999999;
    }
    {
    tmp___1 = __errno_location();
    *tmp___1 = 0;
    tmp___2 = rpl_nanosleep((struct timespec  const  *)(& ts_sleep), (struct timespec *)((void *)0));
    }
    if (tmp___2 == 0) {
      goto while_break;
    }
    {
    tmp___3 = __errno_location();
    }
    if (*tmp___3 != 4) {
      {
      tmp___4 = __errno_location();
      }
      if (*tmp___4 != 0) {
        return (-1);
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (0);
}
}
_Bool xstrtod(char const   *str , char const   **ptr , double *result , double (*convert)(char const   * ,
                                                                                          char ** ) ) 
{ 
  double val ;
  char *terminator ;
  _Bool ok ;
  int *tmp ;
  int *tmp___0 ;

  {
  {
  ok = (_Bool)1;
  tmp = __errno_location();
  *tmp = 0;
  val = (*convert)(str, & terminator);
  }
  if ((unsigned long )terminator == (unsigned long )str) {
    ok = (_Bool)0;
  } else
  if ((unsigned long )ptr == (unsigned long )((void *)0)) {
    if ((int )*terminator != 0) {
      ok = (_Bool)0;
    } else {
      goto _L;
    }
  } else
  _L: 
  if (val != (double )0) {
    {
    tmp___0 = __errno_location();
    }
    if (*tmp___0 == 34) {
      ok = (_Bool)0;
    }
  }
  if ((unsigned long )ptr != (unsigned long )((void *)0)) {
    *ptr = (char const   *)terminator;
  }
  *result = val;
  return (ok);
}
}
static strtol_error bkm_scale___1(unsigned long *x , int scale_factor ) 
{ 


  {
  if (0xffffffffffffffffUL / (unsigned long )scale_factor < *x) {
    *x = 0xffffffffffffffffUL;
    return ((strtol_error )1);
  }
  *x *= (unsigned long )scale_factor;
  return ((strtol_error )0);
}
}
static strtol_error bkm_scale_by_power___1(unsigned long *x , int base , int power ) 
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
    tmp = bkm_scale___1(x, base);
    err = (strtol_error )((unsigned int )err | (unsigned int )tmp);
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (err);
}
}
strtol_error xstrtoul(char const   *s , char **ptr , int strtol_base , unsigned long *val ,
                      char const   *valid_suffixes ) 
{ 
  char *t_ptr ;
  char **p ;
  unsigned long tmp ;
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
                    83U, "xstrtoul");
      }
    }
  } else {
    {
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/wslee/project/coreutils-8.1/lib/xstrtol.c",
                  83U, "xstrtoul");
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
  tmp = strtoul((char const   */* __restrict  */)s, (char **/* __restrict  */)p, strtol_base);
  }
  if ((unsigned long )*p == (unsigned long )s) {
    if (valid_suffixes) {
      if (*(*p)) {
        {
        tmp___2 = strchr(valid_suffixes, (int )*(*p));
        }
        if (tmp___2) {
          tmp = 1UL;
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
    overflow = bkm_scale___1(& tmp, 512);
    }
    goto switch_break___0;
    case_66___0: 
    {
    overflow = bkm_scale___1(& tmp, 1024);
    }
    goto switch_break___0;
    case_99: 
    overflow = (strtol_error )0;
    goto switch_break___0;
    case_69: 
    {
    overflow = bkm_scale_by_power___1(& tmp, base, 6);
    }
    goto switch_break___0;
    case_71: 
    {
    overflow = bkm_scale_by_power___1(& tmp, base, 3);
    }
    goto switch_break___0;
    case_107: 
    {
    overflow = bkm_scale_by_power___1(& tmp, base, 1);
    }
    goto switch_break___0;
    case_77: 
    {
    overflow = bkm_scale_by_power___1(& tmp, base, 2);
    }
    goto switch_break___0;
    case_80: 
    {
    overflow = bkm_scale_by_power___1(& tmp, base, 5);
    }
    goto switch_break___0;
    case_84: 
    {
    overflow = bkm_scale_by_power___1(& tmp, base, 4);
    }
    goto switch_break___0;
    case_119: 
    {
    overflow = bkm_scale___1(& tmp, 2);
    }
    goto switch_break___0;
    case_89: 
    {
    overflow = bkm_scale_by_power___1(& tmp, base, 8);
    }
    goto switch_break___0;
    case_90: 
    {
    overflow = bkm_scale_by_power___1(& tmp, base, 7);
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
