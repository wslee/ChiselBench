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
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __nlink_t nlink_t;
typedef __time_t time_t;
typedef unsigned long size_t;
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
};
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const   *tm_zone ;
};
typedef long ptrdiff_t;
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
typedef long intmax_t;
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
struct exclude;
struct exclude;
struct exclude;
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
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
typedef enum strtol_error strtol_error;
struct I_ring {
   int ir_data[4] ;
   int ir_default_val ;
   unsigned int ir_front ;
   unsigned int ir_back ;
   _Bool ir_empty ;
};
typedef struct I_ring I_ring;
struct _ftsent;
struct _ftsent;
struct _ftsent;
struct cycle_check_state;
struct cycle_check_state;
struct cycle_check_state;
union __anonunion_fts_cycle_698394876 {
   struct hash_table *ht ;
   struct cycle_check_state *state ;
};
struct __anonstruct_FTS_210876612 {
   struct _ftsent *fts_cur ;
   struct _ftsent *fts_child ;
   struct _ftsent **fts_array ;
   dev_t fts_dev ;
   char *fts_path ;
   int fts_rfd ;
   int fts_cwd_fd ;
   size_t fts_pathlen ;
   size_t fts_nitems ;
   int (*fts_compar)(struct _ftsent  const  ** , struct _ftsent  const  ** ) ;
   int fts_options ;
   struct hash_table *fts_leaf_optimization_works_ht ;
   union __anonunion_fts_cycle_698394876 fts_cycle ;
   I_ring fts_fd_ring ;
};
typedef struct __anonstruct_FTS_210876612 FTS;
struct _ftsent {
   struct _ftsent *fts_cycle ;
   struct _ftsent *fts_parent ;
   struct _ftsent *fts_link ;
   long fts_number ;
   void *fts_pointer ;
   char *fts_accpath ;
   char *fts_path ;
   int fts_errno ;
   int fts_symfd ;
   size_t fts_pathlen ;
   FTS *fts_fts ;
   ptrdiff_t fts_level ;
   size_t fts_namelen ;
   nlink_t fts_n_dirs_remaining ;
   unsigned short fts_info ;
   unsigned short fts_flags ;
   unsigned short fts_instr ;
   struct stat fts_statp[1] ;
   char fts_name[1] ;
};
typedef struct _ftsent FTSENT;
struct entry {
   ino_t st_ino ;
   dev_t st_dev ;
};
struct duinfo {
   uintmax_t size ;
   struct timespec tmax ;
};
struct dulevel {
   struct duinfo ent ;
   struct duinfo subdir ;
};
enum time_type {
    time_mtime = 0,
    time_ctime = 1,
    time_atime = 2
} ;
enum time_style {
    full_iso_time_style = 0,
    long_iso_time_style = 1,
    iso_time_style = 2
} ;
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
struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef __mode_t mode_t;
struct dev_ino {
   ino_t st_ino ;
   dev_t st_dev ;
};
struct cycle_check_state {
   struct dev_ino dev_ino ;
   uintmax_t chdir_counter ;
   int magic ;
};
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_204422684 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_204422684 __mbstate_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct mbchar {
   char const   *ptr ;
   size_t bytes ;
   _Bool wc_valid ;
   wchar_t wc ;
   char buf[24] ;
};
typedef struct mbchar mbchar_t;
struct mbuiter_multi {
   _Bool in_shift ;
   mbstate_t state ;
   _Bool next_done ;
   struct mbchar cur ;
};
typedef struct mbuiter_multi mbui_iterator_t;
struct patopts {
   char const   *pattern ;
   int options ;
};
struct exclude_pattern {
   struct patopts *exclude ;
   size_t exclude_alloc ;
   size_t exclude_count ;
};
enum exclude_type {
    exclude_hash = 0,
    exclude_pattern = 1
} ;
union __anonunion_v_510793701 {
   Hash_table *table ;
   struct exclude_pattern pat ;
};
struct exclude_segment {
   struct exclude_segment *next ;
   enum exclude_type type ;
   int options ;
   union __anonunion_v_510793701 v ;
};
struct exclude {
   struct exclude_segment *head ;
   struct exclude_segment *tail ;
};
struct F_triple {
   char *name ;
   ino_t st_ino ;
   dev_t st_dev ;
};
struct __anonstruct___fsid_t_109580352 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_109580352 __fsid_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
struct statfs {
   __fsword_t f_type ;
   __fsword_t f_bsize ;
   __fsblkcnt_t f_blocks ;
   __fsblkcnt_t f_bfree ;
   __fsblkcnt_t f_bavail ;
   __fsfilcnt_t f_files ;
   __fsfilcnt_t f_ffree ;
   __fsid_t f_fsid ;
   __fsword_t f_namelen ;
   __fsword_t f_frsize ;
   __fsword_t f_flags ;
   __fsword_t f_spare[4] ;
};
struct Active_dir {
   dev_t dev ;
   ino_t ino ;
   FTSENT *fts_ent ;
};
struct LCO_ent {
   dev_t st_dev ;
   _Bool opt_ok ;
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
struct lconv {
   char *decimal_point ;
   char *thousands_sep ;
   char *grouping ;
   char *int_curr_symbol ;
   char *currency_symbol ;
   char *mon_decimal_point ;
   char *mon_thousands_sep ;
   char *mon_grouping ;
   char *positive_sign ;
   char *negative_sign ;
   char int_frac_digits ;
   char frac_digits ;
   char p_cs_precedes ;
   char p_sep_by_space ;
   char n_cs_precedes ;
   char n_sep_by_space ;
   char p_sign_posn ;
   char n_sign_posn ;
   char int_p_cs_precedes ;
   char int_p_sep_by_space ;
   char int_n_cs_precedes ;
   char int_n_sep_by_space ;
   char int_p_sign_posn ;
   char int_n_sign_posn ;
};
typedef int nl_item;
struct preliminary_header {
   void *next ;
   char room[sizeof(int )] ;
};
struct header {
   void *next ;
   char room[((((sizeof(struct preliminary_header ) + 16UL) - 1UL) / 16UL) * 16UL - sizeof(struct preliminary_header )) + sizeof(int )] ;
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
typedef void *iconv_t;
struct mbiter_multi {
   char const   *limit ;
   _Bool in_shift ;
   mbstate_t state ;
   _Bool next_done ;
   struct mbchar cur ;
};
typedef struct mbiter_multi mbi_iterator_t;
extern char *optarg ;
extern int optind ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) __assert_fail)(char const   *__assertion ,
                                                                                                   char const   *__file ,
                                                                                                   unsigned int __line ,
                                                                                                   char const   *__function ) ;
extern  __attribute__((__nothrow__)) struct tm *( __attribute__((__leaf__)) localtime)(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const   *__s ,
                                                                                               int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
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
void *xcalloc(size_t n , size_t s )  __attribute__((__malloc__)) ;
void *xrealloc(void *p , size_t n ) ;
__inline static void *xnrealloc(void *p , size_t n , size_t s ) 
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
  tmp___0 = xrealloc(p, n * s);
  }
  return (tmp___0);
}
}
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fclose(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror_unlocked)(FILE *__stream ) ;
char *last_component(char const   *name ) ;
void close_stdout(void) ;
void version_etc(FILE *stream , char const   *command_name , char const   *package ,
                 char const   *version  , ...)  __attribute__((__sentinel__)) ;
char const   *proper_name_utf8(char const   *name_ascii , char const   *name_utf8 ) ;
char const   *program_name ;
void set_program_name(char const   *argv0 ) ;
__inline static void emit_size_note(void) 
{ 
  char *tmp ;
  char *__cil_tmp3 ;

  {
  {
  tmp = gettext("\nSIZE may be (or may be an integer optionally followed by) one of following:\nKB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n");
  fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp), (FILE */* __restrict  */)stdout);
  }
  return;
}
}
__inline static void emit_blocksize_note(char const   *program ) 
{ 
  char *tmp ;
  char *__cil_tmp4 ;

  {
  {
  tmp = gettext("\nDisplay values are in units of the first available SIZE from --block-size,\nand the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n");
  printf((char const   */* __restrict  */)((char const   *)tmp), program);
  }
  return;
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
char *( __attribute__((__warn_unused_result__)) imaxtostr)(intmax_t i , char *buf___0 ) ;
__inline static char *timetostr(time_t t , char *buf___0 ) 
{ 
  char *tmp ;

  {
  {
  tmp = imaxtostr(t, buf___0);
  }
  return (tmp);
}
}
__inline static char *bad_cast(char const   *s ) 
{ 


  {
  return ((char *)s);
}
}
 __attribute__((__noreturn__)) void usage(int status ) ;
void (*argmatch_die)(void) ;
ptrdiff_t __xargmatch_internal(char const   *context , char const   *arg , char const   * const  *arglist ,
                               char const   *vallist , size_t valsize , void (*exit_fn)(void) ) ;
struct argv_iterator *( __attribute__((__nonnull__(1))) argv_iter_init_argv)(char **argv ) ;
struct argv_iterator *( __attribute__((__nonnull__(1))) argv_iter_init_stream)(FILE *fp ) ;
char *( __attribute__((__nonnull__(2), __nonnull__(1))) argv_iter)(struct argv_iterator *ai ,
                                                                   enum argv_iter_err *err ) ;
size_t ( __attribute__((__nonnull__(1))) argv_iter_n_args)(struct argv_iterator  const  *ai ) ;
void ( __attribute__((__nonnull__(1))) argv_iter_free)(struct argv_iterator *ai ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
struct exclude *new_exclude(void) ;
void add_exclude(struct exclude *ex , char const   *pattern , int options ) ;
int add_exclude_file(void (*add_func)(struct exclude * , char const   * , int  ) ,
                     struct exclude *ex , char const   *file_name___1 , int options ,
                     char line_end ) ;
_Bool excluded_file_name(struct exclude  const  *ex , char const   *f ) ;
size_t fprintftime(FILE *s , char const   *format , struct tm  const  *tp , int ut ,
                   int ns ) ;
Hash_table *( __attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate ,
                                                                       Hash_tuning const   *tuning ,
                                                                       size_t (*hasher)(void const   * ,
                                                                                        size_t  ) ,
                                                                       _Bool (*comparator)(void const   * ,
                                                                                           void const   * ) ,
                                                                       void (*data_freer)(void * ) ) ;
void hash_free(Hash_table *table___0 ) ;
void *( __attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table___0 ,
                                                             void const   *entry ) ;
strtol_error xstrtoul(char const   *s , char **ptr , int strtol_base , unsigned long *val ,
                      char const   *valid_suffixes ) ;
 __attribute__((__noreturn__)) void xstrtol_fatal(enum strtol_error err , int opt_idx ,
                                                  char c , struct option  const  *long_options___1 ,
                                                  char const   *arg ) ;
char *human_readable(uintmax_t n , char *buf___0 , int opts , uintmax_t from_block_size ,
                     uintmax_t to_block_size ) ;
enum strtol_error human_options(char const   *spec , int *opts , uintmax_t *block_size ) ;
char const   *quote(char const   *name ) ;
char *quotearg_colon(char const   *arg ) ;
__inline static struct timespec get_stat_atime(struct stat  const  *st ) 
{ 


  {
  return ((struct timespec )st->st_atim);
}
}
__inline static struct timespec get_stat_ctime(struct stat  const  *st ) 
{ 


  {
  return ((struct timespec )st->st_ctim);
}
}
__inline static struct timespec get_stat_mtime(struct stat  const  *st ) 
{ 


  {
  return ((struct timespec )st->st_mtim);
}
}
FILE *freopen_safer(char const   *name , char const   *mode , FILE *f ) ;
 __attribute__((__nothrow__)) int ( __attribute__((__warn_unused_result__, __leaf__)) fts_close)(FTS *sp ) ;
 __attribute__((__nothrow__)) FTSENT *( __attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp ) ;
 __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fts_set)(FTS *sp  __attribute__((__unused__)) ,
                                                                       FTSENT *p ,
                                                                       int instr ) ;
FTS *xfts_open(char * const  *argv , int options , int (*compar)(FTSENT const   ** ,
                                                                 FTSENT const   ** ) ) ;
_Bool cycle_warning_required(FTS const   *fts , FTSENT const   *ent ) ;
static Hash_table *htab  ;
__inline static void duinfo_init(struct duinfo *a ) 
{ 


  {
  a->size = (uintmax_t )0;
  a->tmax.tv_sec = -1L << (sizeof(time_t ) * 8UL - 1UL);
  a->tmax.tv_nsec = (__syscall_slong_t )-1;
  return;
}
}
__inline static void duinfo_set(struct duinfo *a , uintmax_t size , struct timespec tmax ) 
{ 


  {
  a->size = size;
  a->tmax = tmax;
  return;
}
}
__inline static void duinfo_add(struct duinfo *a , struct duinfo  const  *b ) 
{ 
  int tmp ;

  {
  {
  a->size += (uintmax_t )b->size;
  tmp = timespec_cmp(a->tmax, (struct timespec )b->tmax);
  }
  if (tmp < 0) {
    a->tmax = (struct timespec )b->tmax;
  }
  return;
}
}
static _Bool opt_all  =    (_Bool)0;
static _Bool apparent_size  =    (_Bool)0;
static _Bool opt_count_all  =    (_Bool)0;
static _Bool opt_nul_terminate_output  =    (_Bool)0;
static _Bool print_grand_total  =    (_Bool)0;
static _Bool opt_separate_dirs  =    (_Bool)0;
static size_t max_depth  =    0xffffffffffffffffUL;
static int human_output_opts  ;
static _Bool opt_time  =    (_Bool)0;
static enum time_type time_type  =    (enum time_type )0;
static char const   *time_style  =    (char const   *)((void *)0);
static char const   *time_format  =    (char const   *)((void *)0);
static uintmax_t output_block_size  ;
static struct exclude *exclude  ;
static struct duinfo tot_dui  ;
static struct option  const  long_options[24]  = 
  {      {"all", 0, (int *)((void *)0), 'a'}, 
        {"apparent-size", 0, (int *)((void *)0), 128}, 
        {"block-size", 1, (int *)((void *)0), 'B'}, 
        {"bytes", 0, (int *)((void *)0), 'b'}, 
        {"count-links", 0, (int *)((void *)0), 'l'}, 
        {"dereference", 0, (int *)((void *)0), 'L'}, 
        {"dereference-args", 0, (int *)((void *)0), 'D'}, 
        {"exclude", 1, (int *)((void *)0), 129}, 
        {"exclude-from", 1, (int *)((void *)0), 'X'}, 
        {"files0-from", 1, (int *)((void *)0), 130}, 
        {"human-readable", 0, (int *)((void *)0), 'h'}, 
        {"si", 0, (int *)((void *)0), 131}, 
        {"max-depth", 1, (int *)((void *)0), 132}, 
        {"null", 0, (int *)((void *)0), '0'}, 
        {"no-dereference", 0, (int *)((void *)0), 'P'}, 
        {"one-file-system", 0, (int *)((void *)0), 'x'}, 
        {"separate-dirs", 0, (int *)((void *)0), 'S'}, 
        {"summarize", 0, (int *)((void *)0), 's'}, 
        {"total", 0, (int *)((void *)0), 'c'}, 
        {"time", 2, (int *)((void *)0), 133}, 
        {"time-style", 1, (int *)((void *)0), 134}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
static char const   * const  time_args[6]  = {      (char const   */* const  */)"atime",      (char const   */* const  */)"access",      (char const   */* const  */)"use",      (char const   */* const  */)"ctime", 
        (char const   */* const  */)"status",      (char const   */* const  */)((char const   *)((void *)0))};
static enum time_type  const  time_types[5]  = {      (enum time_type  const  )2,      (enum time_type  const  )2,      (enum time_type  const  )2,      (enum time_type  const  )1, 
        (enum time_type  const  )1};
static char const   * const  time_style_args[4]  = {      (char const   */* const  */)"full-iso",      (char const   */* const  */)"long-iso",      (char const   */* const  */)"iso",      (char const   */* const  */)((char const   *)((void *)0))};
static enum time_style  const  time_style_types[3]  = {      (enum time_style  const  )0,      (enum time_style  const  )1,      (enum time_style  const  )2};
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
  char *__cil_tmp29 ;
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
    tmp___1 = gettext("Summarize disk usage of each FILE, recursively for directories.\n\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___1), (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -a, --all             write counts for all files, not just directories\n      --apparent-size   print apparent sizes, rather than disk usage; although\n                          the apparent size is usually smaller, it may be\n                          larger due to holes in (`sparse\') files, internal\n                          fragmentation, indirect blocks, and the like\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("  -B, --block-size=SIZE  use SIZE-byte blocks\n  -b, --bytes           equivalent to `--apparent-size --block-size=1\'\n  -c, --total           produce a grand total\n  -D, --dereference-args  dereference only symlinks that are listed on the\n                          command line\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("      --files0-from=F   summarize disk usage of the NUL-terminated file\n                          names specified in file F;\n                          If F is - then read names from standard input\n  -H                    equivalent to --dereference-args (-D)\n  -h, --human-readable  print sizes in human readable format (e.g., 1K 234M 2G)\n      --si              like -h, but use powers of 1000 not 1024\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___5), (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("  -k                    like --block-size=1K\n  -l, --count-links     count sizes many times if hard linked\n  -m                    like --block-size=1M\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___6), (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("  -L, --dereference     dereference all symbolic links\n  -P, --no-dereference  don\'t follow any symbolic links (this is the default)\n  -0, --null            end each output line with 0 byte rather than newline\n  -S, --separate-dirs   do not include size of subdirectories\n  -s, --summarize       display only a total for each argument\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___7), (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("  -x, --one-file-system    skip directories on different file systems\n  -X, --exclude-from=FILE  exclude files that match any pattern in FILE\n      --exclude=PATTERN    exclude files that match PATTERN\n      --max-depth=N     print the total for a directory (or file, with --all)\n                          only if it is N or fewer levels below the command\n                          line argument;  --max-depth=0 is the same as\n                          --summarize\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___8), (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("      --time            show time of the last modification of any file in the\n                          directory, or any of its subdirectories\n      --time=WORD       show time as WORD instead of modification time:\n                          atime, access, use, ctime or status\n      --time-style=STYLE  show times using style STYLE:\n                          full-iso, long-iso, iso, +FORMAT\n                          FORMAT is interpreted like `date\'\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___9), (FILE */* __restrict  */)stdout);
    tmp___10 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___10), (FILE */* __restrict  */)stdout);
    tmp___11 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___11), (FILE */* __restrict  */)stdout);
    emit_blocksize_note("DU");
    emit_size_note();
    emit_ancillary_info();
    }
  }
  {
  exit(status);
  }
}
}
static size_t entry_hash(void const   *x , size_t table_size ) 
{ 
  struct entry  const  *p ;

  {
  p = (struct entry  const  *)x;
  return ((uintmax_t )p->st_ino % table_size);
}
}
static _Bool entry_compare(void const   *x , void const   *y ) 
{ 
  struct entry  const  *a ;
  struct entry  const  *b ;
  int tmp ;

  {
  a = (struct entry  const  *)x;
  b = (struct entry  const  *)y;
  if (a->st_ino == b->st_ino) {
    if (a->st_dev == b->st_dev) {
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
static _Bool hash_ins(ino_t ino , dev_t dev ) 
{ 
  struct entry *ent ;
  struct entry *ent_from_table ;
  void *tmp ;
  void *tmp___0 ;

  {
  {
  tmp = xmalloc(sizeof(*ent));
  ent = (struct entry *)tmp;
  ent->st_ino = ino;
  ent->st_dev = dev;
  tmp___0 = hash_insert(htab, (void const   *)ent);
  ent_from_table = (struct entry *)tmp___0;
  }
  if ((unsigned long )ent_from_table == (unsigned long )((void *)0)) {
    {
    xalloc_die();
    }
  }
  if ((unsigned long )ent_from_table == (unsigned long )ent) {
    return ((_Bool)1);
  }
  {
  free((void *)ent);
  }
  return ((_Bool)0);
}
}
static void hash_init(void) 
{ 


  {
  {
  htab = hash_initialize((size_t )103, (Hash_tuning const   *)((void *)0), & entry_hash,
                         & entry_compare, (void (*)(void * ))(& free));
  }
  if ((unsigned long )htab == (unsigned long )((void *)0)) {
    {
    xalloc_die();
    }
  }
  return;
}
}
static void show_date(char const   *format , struct timespec when ) 
{ 
  struct tm *tm ;
  struct tm *tmp ;
  char buf___0[((((sizeof(intmax_t ) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL) + 1UL] ;
  char *tmp___0 ;
  char *tmp___1 ;
  void *__cil_tmp10 ;
  char *__cil_tmp11 ;

  {
  {
  tmp = localtime((time_t const   *)(& when.tv_sec));
  tm = tmp;
  }
  if (! tm) {
    {
    tmp___0 = timetostr(when.tv_sec, buf___0);
    tmp___1 = gettext("time %s is out of range");
    error(0, 0, (char const   *)tmp___1, tmp___0);
    fputs_unlocked((char const   */* __restrict  */)((char const   *)(buf___0)), (FILE */* __restrict  */)stdout);
    }
    return;
  }
  {
  fprintftime(stdout, format, (struct tm  const  *)tm, 0, (int )when.tv_nsec);
  }
  return;
}
}
static void print_only_size(uintmax_t n_bytes ) 
{ 
  char buf___0[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char *tmp ;
  void *__cil_tmp5 ;

  {
  {
  tmp = human_readable(n_bytes, buf___0, human_output_opts, (uintmax_t )1, output_block_size);
  fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp), (FILE */* __restrict  */)stdout);
  }
  return;
}
}
static void print_size(struct duinfo  const  *pdui , char const   *string ) 
{ 
  int tmp ;

  {
  {
  print_only_size((uintmax_t )pdui->size);
  }
  if (opt_time) {
    {
    putchar_unlocked('\t');
    show_date(time_format, (struct timespec )pdui->tmax);
    }
  }
  if (opt_nul_terminate_output) {
    tmp = '\000';
  } else {
    tmp = '\n';
  }
  {
  printf((char const   */* __restrict  */)"\t%s%c", string, tmp);
  fflush_unlocked(stdout);
  }
  return;
}
}
static size_t prev_level  ;
static size_t n_alloc  ;
static struct dulevel *dulvl  ;
static _Bool process_file(FTS *fts , FTSENT *ent ) 
{ 
  _Bool ok ;
  struct duinfo dui ;
  struct duinfo dui_to_print ;
  size_t level ;
  _Bool print ;
  char const   *file ;
  struct stat  const  *sb ;
  _Bool skip ;
  char const   *tmp ;
  char *tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  char const   *tmp___5 ;
  char *tmp___6 ;
  _Bool tmp___7 ;
  struct timespec tmp___8 ;
  struct timespec tmp___9 ;
  struct timespec tmp___10 ;
  struct timespec tmp___11 ;
  struct timespec tmp___12 ;
  uintmax_t tmp___13 ;
  _Bool tmp___14 ;
  void *tmp___15 ;
  size_t i ;
  void *tmp___16 ;
  char *__cil_tmp34 ;
  char *__cil_tmp35 ;
  char *__cil_tmp36 ;
  char *__cil_tmp37 ;

  {
  {
  print = (_Bool)1;
  file = (char const   *)ent->fts_path;
  sb = (struct stat  const  *)(ent->fts_statp);
  skip = excluded_file_name((struct exclude  const  *)exclude, file);
  }
  if (skip) {
    {
    fts_set(fts, ent, 4);
    }
  }
  if ((int )ent->fts_info == 10) {
    goto case_10;
  }
  if ((int )ent->fts_info == 7) {
    goto case_7;
  }
  if ((int )ent->fts_info == 4) {
    goto case_4;
  }
  if ((int )ent->fts_info == 2) {
    goto case_2;
  }
  goto switch_default;
  case_10: 
  {
  tmp = quote(file);
  tmp___0 = gettext("cannot access %s");
  error(0, ent->fts_errno, (char const   *)tmp___0, tmp);
  }
  return ((_Bool)0);
  case_7: 
  {
  tmp___1 = quote(file);
  tmp___2 = gettext("%s");
  error(0, ent->fts_errno, (char const   *)tmp___2, tmp___1);
  }
  return ((_Bool)0);
  case_4: 
  {
  tmp___3 = quote(file);
  tmp___4 = gettext("cannot read directory %s");
  error(0, ent->fts_errno, (char const   *)tmp___4, tmp___3);
  ok = (_Bool)0;
  }
  goto switch_break;
  case_2: 
  {
  tmp___7 = cycle_warning_required((FTS const   *)fts, (FTSENT const   *)ent);
  }
  if (tmp___7) {
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      tmp___5 = quote(file);
      tmp___6 = gettext("WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n");
      error(0, 0, (char const   *)tmp___6, tmp___5);
      }
      goto while_break;
    }
    while_break___1: /* CIL Label */ ;
    }
    while_break: ;
    return ((_Bool)0);
  }
  ok = (_Bool)1;
  goto switch_break;
  switch_default: 
  ok = (_Bool)1;
  goto switch_break;
  switch_break: ;
  if ((int )ent->fts_info == 1) {
    return (ok);
  } else
  if (skip) {
    return (ok);
  }
  if (skip) {
    {
    duinfo_init(& dui);
    print = (_Bool)0;
    }
  } else
  if (! opt_count_all) {
    if (! ((sb->st_mode & 61440U) == 16384U)) {
      if (1UL < (unsigned long )sb->st_nlink) {
        {
        tmp___14 = hash_ins((ino_t )sb->st_ino, (dev_t )sb->st_dev);
        }
        if (tmp___14) {
          goto _L___1;
        } else {
          {
          duinfo_init(& dui);
          print = (_Bool)0;
          }
        }
      } else {
        goto _L___1;
      }
    } else {
      goto _L___1;
    }
  } else {
    _L___1: 
    if ((unsigned int )time_type == 0U) {
      {
      tmp___8 = get_stat_mtime(sb);
      tmp___12 = tmp___8;
      }
    } else {
      if ((unsigned int )time_type == 2U) {
        {
        tmp___9 = get_stat_atime(sb);
        tmp___11 = tmp___9;
        }
      } else {
        {
        tmp___10 = get_stat_ctime(sb);
        tmp___11 = tmp___10;
        }
      }
      tmp___12 = tmp___11;
    }
    if (apparent_size) {
      tmp___13 = (uintmax_t )sb->st_size;
    } else {
      tmp___13 = (uintmax_t )sb->st_blocks * 512UL;
    }
    {
    duinfo_set(& dui, tmp___13, tmp___12);
    }
  }
  level = (size_t )ent->fts_level;
  dui_to_print = dui;
  if (n_alloc == 0UL) {
    {
    n_alloc = level + 10UL;
    tmp___15 = xcalloc(n_alloc, sizeof(*dulvl));
    dulvl = (struct dulevel *)tmp___15;
    }
  } else
  if (! (level == prev_level)) {
    if (level > prev_level) {
      if (n_alloc <= level) {
        {
        tmp___16 = xnrealloc((void *)dulvl, level, 2UL * sizeof(*dulvl));
        dulvl = (struct dulevel *)tmp___16;
        n_alloc = level * 2UL;
        }
      }
      i = prev_level + 1UL;
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;

        if (! (i <= level)) {
          goto while_break___0;
        }
        {
        duinfo_init(& (dulvl + i)->ent);
        duinfo_init(& (dulvl + i)->subdir);
        i ++;
        }
      }
      while_break___2: /* CIL Label */ ;
      }
      while_break___0: ;
    } else {
      if (! (level == prev_level - 1UL)) {
        {
        __assert_fail("level == prev_level - 1", "/home/wslee/project/coreutils-8.1/src/du.c",
                      583U, "process_file");
        }
      }
      {
      duinfo_add(& dui_to_print, (struct duinfo  const  *)(& (dulvl + prev_level)->ent));
      }
      if (! opt_separate_dirs) {
        {
        duinfo_add(& dui_to_print, (struct duinfo  const  *)(& (dulvl + prev_level)->subdir));
        }
      }
      {
      duinfo_add(& (dulvl + level)->subdir, (struct duinfo  const  *)(& (dulvl + prev_level)->ent));
      duinfo_add(& (dulvl + level)->subdir, (struct duinfo  const  *)(& (dulvl + prev_level)->subdir));
      }
    }
  }
  prev_level = level;
  if (opt_separate_dirs) {
    if (! ((int )ent->fts_info == 6)) {
      if (! ((int )ent->fts_info == 4)) {
        {
        duinfo_add(& (dulvl + level)->ent, (struct duinfo  const  *)(& dui));
        }
      }
    }
  } else {
    {
    duinfo_add(& (dulvl + level)->ent, (struct duinfo  const  *)(& dui));
    }
  }
  {
  duinfo_add(& tot_dui, (struct duinfo  const  *)(& dui));
  }
  if (! print) {
    return (ok);
  }
  if ((int )ent->fts_info == 6) {
    goto _L___4;
  } else
  if ((int )ent->fts_info == 4) {
    _L___4: 
    if (level <= max_depth) {
      {
      print_size((struct duinfo  const  *)(& dui_to_print), file);
      }
    } else {
      goto _L___3;
    }
  } else
  _L___3: 
  if (opt_all) {
    if (level <= max_depth) {
      {
      print_size((struct duinfo  const  *)(& dui_to_print), file);
      }
    } else {
      goto _L___2;
    }
  } else
  _L___2: 
  if (level == 0UL) {
    {
    print_size((struct duinfo  const  *)(& dui_to_print), file);
    }
  }
  return (ok);
}
}
static _Bool du_files(char **files , int bit_flags ) 
{ 
  _Bool ok ;
  FTS *fts ;
  FTS *tmp ;
  FTSENT *ent ;
  char *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  _Bool tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  int tmp___6 ;
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;

  {
  ok = (_Bool)1;
  if (*files) {
    {
    tmp = xfts_open((char * const  *)files, bit_flags, (int (*)(FTSENT const   ** ,
                                                                FTSENT const   ** ))((void *)0));
    fts = tmp;
    }
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      ent = fts_read(fts);
      }
      if ((unsigned long )ent == (unsigned long )((void *)0)) {
        {
        tmp___2 = __errno_location();
        }
        if (*tmp___2 != 0) {
          {
          tmp___0 = gettext("fts_read failed");
          tmp___1 = __errno_location();
          error(0, *tmp___1, (char const   *)tmp___0);
          ok = (_Bool)0;
          }
        }
        goto while_break;
      }
      {
      tmp___3 = process_file(fts, ent);
      ok = (_Bool )((int )ok & (int )tmp___3);
      }
    }
    while_break___0: /* CIL Label */ ;
    }
    while_break: 
    {
    tmp___6 = fts_close(fts);
    }
    if (tmp___6 != 0) {
      {
      tmp___4 = gettext("fts_close failed");
      tmp___5 = __errno_location();
      error(0, *tmp___5, (char const   *)tmp___4);
      ok = (_Bool)0;
      }
    }
  }
  return (ok);
}
}
int main(int argc , char **argv ) ;
static char const   posix_prefix[7]  = {      (char const   )'p',      (char const   )'o',      (char const   )'s',      (char const   )'i', 
        (char const   )'x',      (char const   )'-',      (char const   )'\000'};
static char *temp_argv[2]  = {      (char *)((void *)0),      (char *)((void *)0)};
int main(int argc , char **argv ) 
{ 
  char *cwd_only[2] ;
  _Bool max_depth_specified ;
  _Bool ok ;
  char *files_from ;
  int bit_flags ;
  int symlink_deref_bits ;
  _Bool opt_summarize_only ;
  char *tmp ;
  int oi ;
  int c ;
  int tmp___0 ;
  unsigned long tmp_ulong ;
  char const   *tmp___1 ;
  char *tmp___2 ;
  strtol_error tmp___3 ;
  enum strtol_error e ;
  enum strtol_error tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;
  ptrdiff_t tmp___8 ;
  char const   *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  unsigned long d ;
  char *tmp___12 ;
  char *tmp___13 ;
  char *p ;
  char *tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  ptrdiff_t tmp___17 ;
  struct argv_iterator *ai ;
  char const   *tmp___18 ;
  char *tmp___19 ;
  char *tmp___20 ;
  char const   *tmp___21 ;
  char *tmp___22 ;
  int *tmp___23 ;
  int tmp___24 ;
  FILE *tmp___25 ;
  char **files ;
  char **tmp___26 ;
  _Bool skip_file ;
  enum argv_iter_err ai_err ;
  char *file_name___1 ;
  char *tmp___27 ;
  char const   *tmp___28 ;
  char *tmp___29 ;
  int *tmp___30 ;
  char const   *tmp___31 ;
  char *tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  char *tmp___35 ;
  unsigned long file_number ;
  size_t tmp___36 ;
  char *tmp___37 ;
  char *tmp___38 ;
  _Bool tmp___39 ;
  char const   *tmp___40 ;
  char *tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  char *tmp___44 ;
  int tmp___45 ;
  void *__cil_tmp103 ;
  char *__cil_tmp104 ;
  char *__cil_tmp105 ;
  char *__cil_tmp106 ;
  char *__cil_tmp107 ;
  char *__cil_tmp108 ;
  char *__cil_tmp109 ;
  char *__cil_tmp110 ;
  char *__cil_tmp111 ;
  char *__cil_tmp112 ;
  char *__cil_tmp113 ;
  char *__cil_tmp114 ;
  char *__cil_tmp115 ;
  char *__cil_tmp116 ;
  char *__cil_tmp117 ;
  char *__cil_tmp118 ;
  char *__cil_tmp119 ;
  char *__cil_tmp120 ;
  char *__cil_tmp121 ;
  char *__cil_tmp122 ;
  char *__cil_tmp123 ;
  char *__cil_tmp124 ;
  char *__cil_tmp125 ;
  char *__cil_tmp126 ;
  char *__cil_tmp127 ;
  char *__cil_tmp128 ;
  char *__cil_tmp129 ;
  char *__cil_tmp130 ;
  char *__cil_tmp131 ;
  char *__cil_tmp132 ;
  char *__cil_tmp133 ;
  char *__cil_tmp134 ;
  char *__cil_tmp135 ;
  char *__cil_tmp136 ;

  {
  {
  max_depth_specified = (_Bool)0;
  ok = (_Bool)1;
  files_from = (char *)((void *)0);
  bit_flags = 1280;
  symlink_deref_bits = 16;
  opt_summarize_only = (_Bool)0;
  cwd_only[0] = bad_cast(".");
  cwd_only[1] = (char *)((void *)0);
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  exclude = new_exclude();
  tmp = getenv("DU_BLOCK_SIZE");
  human_options((char const   *)tmp, & human_output_opts, & output_block_size);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    oi = -1;
    tmp___0 = getopt_long(argc, (char * const  *)argv, "0abchHklmsxB:DLPSX:", long_options,
                          & oi);
    c = tmp___0;
    }
    if (c == -1) {
      goto while_break;
    }
    if (c == 48) {
      goto case_48;
    }
    if (c == 97) {
      goto case_97;
    }
    if (c == 128) {
      goto case_128;
    }
    if (c == 98) {
      goto case_98;
    }
    if (c == 99) {
      goto case_99;
    }
    if (c == 104) {
      goto case_104;
    }
    if (c == 131) {
      goto case_131;
    }
    if (c == 107) {
      goto case_107;
    }
    if (c == 132) {
      goto case_132;
    }
    if (c == 109) {
      goto case_109;
    }
    if (c == 108) {
      goto case_108;
    }
    if (c == 115) {
      goto case_115;
    }
    if (c == 120) {
      goto case_120;
    }
    if (c == 66) {
      goto case_66;
    }
    if (c == 72) {
      goto case_72;
    }
    if (c == 68) {
      goto case_72;
    }
    if (c == 76) {
      goto case_76;
    }
    if (c == 80) {
      goto case_80;
    }
    if (c == 83) {
      goto case_83;
    }
    if (c == 88) {
      goto case_88;
    }
    if (c == 130) {
      goto case_130;
    }
    if (c == 129) {
      goto case_129;
    }
    if (c == 133) {
      goto case_133;
    }
    if (c == 134) {
      goto case_134;
    }
    if (c == -130) {
      goto case_neg_130;
    }
    if (c == -131) {
      goto case_neg_131;
    }
    goto switch_default;
    case_48: 
    opt_nul_terminate_output = (_Bool)1;
    goto switch_break;
    case_97: 
    opt_all = (_Bool)1;
    goto switch_break;
    case_128: 
    apparent_size = (_Bool)1;
    goto switch_break;
    case_98: 
    apparent_size = (_Bool)1;
    human_output_opts = 0;
    output_block_size = (uintmax_t )1;
    goto switch_break;
    case_99: 
    print_grand_total = (_Bool)1;
    goto switch_break;
    case_104: 
    human_output_opts = 176;
    output_block_size = (uintmax_t )1;
    goto switch_break;
    case_131: 
    human_output_opts = 144;
    output_block_size = (uintmax_t )1;
    goto switch_break;
    case_107: 
    human_output_opts = 0;
    output_block_size = (uintmax_t )1024;
    goto switch_break;
    case_132: 
    {
    tmp___3 = xstrtoul((char const   *)optarg, (char **)((void *)0), 0, & tmp_ulong,
                       (char const   *)((void *)0));
    }
    if ((unsigned int )tmp___3 == 0U) {
      if (tmp_ulong <= 0xffffffffffffffffUL) {
        max_depth_specified = (_Bool)1;
        max_depth = tmp_ulong;
      } else {
        {
        tmp___1 = quote((char const   *)optarg);
        tmp___2 = gettext("invalid maximum depth %s");
        error(0, 0, (char const   *)tmp___2, tmp___1);
        ok = (_Bool)0;
        }
      }
    } else {
      {
      tmp___1 = quote((char const   *)optarg);
      tmp___2 = gettext("invalid maximum depth %s");
      error(0, 0, (char const   *)tmp___2, tmp___1);
      ok = (_Bool)0;
      }
    }
    goto switch_break;
    case_109: 
    human_output_opts = 0;
    output_block_size = (uintmax_t )1048576;
    goto switch_break;
    case_108: 
    opt_count_all = (_Bool)1;
    goto switch_break;
    case_115: 
    opt_summarize_only = (_Bool)1;
    goto switch_break;
    case_120: 
    bit_flags |= 64;
    goto switch_break;
    case_66: 
    {
    tmp___4 = human_options((char const   *)optarg, & human_output_opts, & output_block_size);
    e = tmp___4;
    }
    if ((unsigned int )e != 0U) {
      {
      xstrtol_fatal(e, oi, (char )c, long_options, (char const   *)optarg);
      }
    }
    goto switch_break;
    case_72: 
    symlink_deref_bits = 17;
    goto switch_break;
    case_76: 
    symlink_deref_bits = 2;
    goto switch_break;
    case_80: 
    symlink_deref_bits = 16;
    goto switch_break;
    case_83: 
    opt_separate_dirs = (_Bool)1;
    goto switch_break;
    case_88: 
    {
    tmp___7 = add_exclude_file(& add_exclude, exclude, (char const   *)optarg, 1 << 28,
                               (char )'\n');
    }
    if (tmp___7) {
      {
      tmp___5 = quotearg_colon((char const   *)optarg);
      tmp___6 = __errno_location();
      error(0, *tmp___6, "%s", tmp___5);
      ok = (_Bool)0;
      }
    }
    goto switch_break;
    case_130: 
    files_from = optarg;
    goto switch_break;
    case_129: 
    {
    add_exclude(exclude, (char const   *)optarg, 1 << 28);
    }
    goto switch_break;
    case_133: 
    opt_time = (_Bool)1;
    if (optarg) {
      {
      tmp___8 = __xargmatch_internal("--time", (char const   *)optarg, time_args,
                                     (char const   *)(time_types), sizeof(time_types[0]),
                                     argmatch_die);
      time_type = (enum time_type )time_types[tmp___8];
      }
    } else {
      time_type = (enum time_type )0;
    }
    goto switch_break;
    case_134: 
    time_style = (char const   *)optarg;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    tmp___9 = proper_name_utf8("Torbjorn Granlund", "Torbj\303\266rn Granlund");
    version_etc(stdout, "du", "GNU coreutils", Version, tmp___9, "David MacKenzie",
                "Paul Eggert", "Jim Meyering", (char *)((void *)0));
    exit(0);
    }
    goto switch_break;
    switch_default: 
    ok = (_Bool)0;
    switch_break: ;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: ;
  if (! ok) {
    {
    usage(1);
    }
  }
  if (opt_all) {
    if (opt_summarize_only) {
      {
      tmp___10 = gettext("cannot both summarize and show all entries");
      error(0, 0, (char const   *)tmp___10);
      usage(1);
      }
    }
  }
  if (opt_summarize_only) {
    if (max_depth_specified) {
      if (max_depth == 0UL) {
        {
        tmp___11 = gettext("warning: summarizing is the same as using --max-depth=0");
        error(0, 0, (char const   *)tmp___11);
        }
      }
    }
  }
  if (opt_summarize_only) {
    if (max_depth_specified) {
      if (max_depth != 0UL) {
        {
        d = max_depth;
        tmp___12 = gettext("warning: summarizing conflicts with --max-depth=%lu");
        error(0, 0, (char const   *)tmp___12, d);
        usage(1);
        }
      }
    }
  }
  if (opt_summarize_only) {
    max_depth = (size_t )0;
  }
  if (opt_time) {
    if (! time_style) {
      {
      tmp___13 = getenv("TIME_STYLE");
      time_style = (char const   *)tmp___13;
      }
      if (! time_style) {
        time_style = "long-iso";
      } else {
        {
        tmp___16 = strcmp(time_style, "locale");
        }
        if (tmp___16 == 0) {
          time_style = "long-iso";
        } else
        if ((int const   )*time_style == 43) {
          {
          tmp___14 = strchr(time_style, '\n');
          p = tmp___14;
          }
          if (p) {
            *p = (char )'\000';
          }
        } else {
          {
          while (1) {
            while_continue___2: /* CIL Label */ ;
            {
            tmp___15 = strncmp(time_style, posix_prefix, sizeof(posix_prefix) - 1UL);
            }
            if (! (tmp___15 == 0)) {
              goto while_break___0;
            }
            time_style += sizeof(posix_prefix) - 1UL;
          }
          while_break___3: /* CIL Label */ ;
          }
          while_break___0: ;
        }
      }
    }
    if ((int const   )*time_style == 43) {
      time_format = time_style + 1;
    } else {
      {
      tmp___17 = __xargmatch_internal("time style", time_style, time_style_args, (char const   *)(time_style_types),
                                      sizeof(time_style_types[0]), argmatch_die);
      }
      if ((unsigned int const   )time_style_types[tmp___17] == 0U) {
        goto case_0;
      }
      if ((unsigned int const   )time_style_types[tmp___17] == 1U) {
        goto case_1;
      }
      if ((unsigned int const   )time_style_types[tmp___17] == 2U) {
        goto case_2;
      }
      goto switch_break___0;
      case_0: 
      time_format = "%Y-%m-%d %H:%M:%S.%N %z";
      goto switch_break___0;
      case_1: 
      time_format = "%Y-%m-%d %H:%M";
      goto switch_break___0;
      case_2: 
      time_format = "%Y-%m-%d";
      goto switch_break___0;
      switch_break___0: ;
    }
  }
  if (files_from) {
    if (optind < argc) {
      {
      tmp___18 = quote((char const   *)*(argv + optind));
      tmp___19 = gettext("extra operand %s");
      error(0, 0, (char const   *)tmp___19, tmp___18);
      tmp___20 = gettext("file operands cannot be combined with --files0-from");
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s\n",
              tmp___20);
      usage(1);
      }
    }
    {
    tmp___24 = strcmp((char const   *)files_from, "-");
    }
    if (! (tmp___24 == 0)) {
      {
      tmp___25 = freopen_safer((char const   *)files_from, "r", stdin);
      }
      if (! tmp___25) {
        {
        tmp___21 = quote((char const   *)files_from);
        tmp___22 = gettext("cannot open %s for reading");
        tmp___23 = __errno_location();
        error(1, *tmp___23, (char const   *)tmp___22, tmp___21);
        }
      }
    }
    {
    ai = argv_iter_init_stream(stdin);
    }
  } else {
    if (optind < argc) {
      tmp___26 = argv + optind;
    } else {
      tmp___26 = cwd_only;
    }
    {
    files = tmp___26;
    ai = argv_iter_init_argv(files);
    }
  }
  if (! ai) {
    {
    xalloc_die();
    }
  }
  {
  hash_init();
  bit_flags |= symlink_deref_bits;
  }
  {
  while (1) {
    while_continue___3: /* CIL Label */ ;
    while_continue___1: 
    {
    skip_file = (_Bool)0;
    tmp___27 = argv_iter(ai, & ai_err);
    file_name___1 = tmp___27;
    }
    if ((unsigned int )ai_err == 2U) {
      goto while_break___1;
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
      tmp___28 = quote((char const   *)files_from);
      tmp___29 = gettext("%s: read error");
      tmp___30 = __errno_location();
      error(0, *tmp___30, (char const   *)tmp___29, tmp___28);
      }
      goto while_continue___1;
      case_3: 
      {
      xalloc_die();
      }
      switch_default___0: 
      {
      __assert_fail("!\"unexpected error code from argv_iter\"", "/home/wslee/project/coreutils-8.1/src/du.c",
                    974U, "main");
      }

    }
    if (files_from) {
      {
      tmp___33 = strcmp((char const   *)files_from, "-");
      }
      if (tmp___33 == 0) {
        {
        tmp___34 = strcmp((char const   *)file_name___1, "-");
        }
        if (tmp___34 == 0) {
          {
          tmp___31 = quote((char const   *)file_name___1);
          tmp___32 = gettext("when reading file names from stdin, no file name of %s allowed");
          error(0, 0, (char const   *)tmp___32, tmp___31);
          skip_file = (_Bool)1;
          }
        }
      }
    }
    if (! *(file_name___1 + 0)) {
      if ((unsigned long )files_from == (unsigned long )((void *)0)) {
        {
        tmp___35 = gettext("invalid zero-length file name");
        error(0, 0, "%s", tmp___35);
        }
      } else {
        {
        tmp___36 = argv_iter_n_args((struct argv_iterator  const  *)ai);
        file_number = tmp___36;
        tmp___37 = gettext("invalid zero-length file name");
        tmp___38 = quotearg_colon((char const   *)files_from);
        error(0, 0, "%s:%lu: %s", tmp___38, file_number, tmp___37);
        }
      }
      skip_file = (_Bool)1;
    }
    if (skip_file) {
      ok = (_Bool)0;
    } else {
      {
      temp_argv[0] = file_name___1;
      tmp___39 = du_files(temp_argv, bit_flags);
      ok = (_Bool )((int )ok & (int )tmp___39);
      }
    }
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break___1: 
  {
  argv_iter_free(ai);
  }
  if (files_from) {
    {
    tmp___42 = ferror_unlocked(stdin);
    }
    if (tmp___42) {
      {
      tmp___40 = quote((char const   *)files_from);
      tmp___41 = gettext("error reading %s");
      error(1, 0, (char const   *)tmp___41, tmp___40);
      }
    } else {
      {
      tmp___43 = fclose(stdin);
      }
      if (tmp___43 != 0) {
        {
        tmp___40 = quote((char const   *)files_from);
        tmp___41 = gettext("error reading %s");
        error(1, 0, (char const   *)tmp___41, tmp___40);
        }
      }
    }
  }
  if (print_grand_total) {
    {
    tmp___44 = gettext("total");
    print_size((struct duinfo  const  *)(& tot_dui), (char const   *)tmp___44);
    }
  }
  {
  hash_free(htab);
  }
  if (ok) {
    tmp___45 = 0;
  } else {
    tmp___45 = 1;
  }
  {
  exit(tmp___45);
  }
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
ptrdiff_t argmatch(char const   *arg , char const   * const  *arglist , char const   *vallist ,
                   size_t valsize ) ;
void argmatch_invalid(char const   *context , char const   *value , ptrdiff_t problem ) ;
void argmatch_valid(char const   * const  *arglist , char const   *vallist , size_t valsize ) ;
extern int putc_unlocked(int __c , FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) memcmp)(void const   *__s1 ,
                                                                                               void const   *__s2 ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
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
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
extern int ( __attribute__((__nonnull__(1))) closedir)(DIR *__dirp ) ;
extern struct dirent *( __attribute__((__nonnull__(1))) readdir)(DIR *__dirp ) ;
DIR *opendir_safer(char const   *name ) ;
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
int c_tolower(int c ) ;
int c_tolower(int c ) 
{ 
  int tmp ;

  {
  if (c >= 65) {
    if (c <= 90) {
      tmp = (c - 65) + 97;
    } else {
      tmp = c;
    }
  } else {
    tmp = c;
  }
  return (tmp);
}
}
int c_strcasecmp(char const   *s1 , char const   *s2 ) ;
int c_strcasecmp(char const   *s1 , char const   *s2 ) 
{ 
  register unsigned char const   *p1 ;
  register unsigned char const   *p2 ;
  unsigned char c1 ;
  unsigned char c2 ;
  int tmp ;
  int tmp___0 ;

  {
  p1 = (unsigned char const   *)s1;
  p2 = (unsigned char const   *)s2;
  if ((unsigned long )p1 == (unsigned long )p2) {
    return (0);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp = c_tolower((int )*p1);
    c1 = (unsigned char )tmp;
    tmp___0 = c_tolower((int )*p2);
    c2 = (unsigned char )tmp___0;
    }
    if ((int )c1 == 0) {
      goto while_break;
    }
    p1 ++;
    p2 ++;
    if (! ((int )c1 == (int )c2)) {
      goto while_break;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((int )c1 - (int )c2);
}
}
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memmove)(void *__dest ,
                                                                                                  void const   *__src ,
                                                                                                  size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) lstat)(char const   * __restrict  __file ,
                                                                                              struct stat * __restrict  __buf ) ;
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fchdir)(int __fd ) ;
extern int ( __attribute__((__nonnull__(2))) openat)(int __fd , char const   *__file ,
                                                     int __oflag  , ...) ;
int set_cloexec_flag(int desc , _Bool value ) ;
extern int fcntl(int __fd , int __cmd  , ...) ;
int set_cloexec_flag(int desc , _Bool value ) 
{ 
  int flags ;
  int tmp ;
  int newflags ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  tmp = fcntl(desc, 1, 0);
  flags = tmp;
  }
  if (0 <= flags) {
    if (value) {
      tmp___0 = flags | 1;
    } else {
      tmp___0 = flags & -2;
    }
    newflags = tmp___0;
    if (flags == newflags) {
      return (0);
    } else {
      {
      tmp___1 = fcntl(desc, 2, newflags);
      }
      if (tmp___1 != -1) {
        return (0);
      }
    }
  }
  return (-1);
}
}
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
int fd_safer(int fd ) ;
void cycle_check_init(struct cycle_check_state *state ) ;
_Bool cycle_check(struct cycle_check_state *state , struct stat  const  *sb ) ;
__inline static _Bool is_zero_or_power_of_two(uintmax_t i ) 
{ 


  {
  return ((_Bool )((i & (i - 1UL)) == 0UL));
}
}
void cycle_check_init(struct cycle_check_state *state ) 
{ 


  {
  state->chdir_counter = (uintmax_t )0;
  state->magic = 9827862;
  return;
}
}
_Bool cycle_check(struct cycle_check_state *state , struct stat  const  *sb ) 
{ 
  _Bool tmp ;

  {
  if (! (state->magic == 9827862)) {
    {
    __assert_fail("state->magic == CC_MAGIC", "/home/wslee/project/coreutils-8.1/lib/cycle-check.c",
                  60U, "cycle_check");
    }
  }
  if (state->chdir_counter) {
    if (sb->st_ino == (__ino_t const   )state->dev_ino.st_ino) {
      if (sb->st_dev == (__dev_t const   )state->dev_ino.st_dev) {
        return ((_Bool)1);
      }
    }
  }
  {
  (state->chdir_counter) ++;
  tmp = is_zero_or_power_of_two(state->chdir_counter);
  }
  if (tmp) {
    if (state->chdir_counter == 0UL) {
      return ((_Bool)1);
    }
    state->dev_ino.st_dev = (dev_t )sb->st_dev;
    state->dev_ino.st_ino = (ino_t )sb->st_ino;
  }
  return ((_Bool)0);
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) stat)(char const   * __restrict  __file ,
                                                                                             struct stat * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd ,
                                                                                            struct stat *__buf ) ;
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
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern int getc_unlocked(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) __ctype_get_mb_cur_max)(void) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strrchr)(char const   *__s ,
                                                                                                int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2), __leaf__)) strcspn)(char const   *__s ,
                                                                                                   char const   *__reject )  __attribute__((__pure__)) ;
int mbscasecmp(char const   *s1 , char const   *s2 ) ;
extern  __attribute__((__nothrow__)) wint_t ( __attribute__((__leaf__)) towlower)(wint_t __wc ) ;
_Bool fnmatch_pattern_has_wildcards(char const   *str , int options ) ;
_Bool exclude_fnmatch(char const   *pattern , char const   *f , int options ) ;
void *hash_lookup(Hash_table const   *table___0 , void const   *entry ) ;
size_t hash_string(char const   *string , size_t n_buckets ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) mbsinit)(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) mbrtowc)(wchar_t * __restrict  __pwc ,
                                                                                 char const   * __restrict  __s ,
                                                                                 size_t __n ,
                                                                                 mbstate_t * __restrict  __p ) ;
unsigned int const   is_basic_table[8] ;
__inline static _Bool is_basic(char c ) 
{ 


  {
  return ((_Bool )((is_basic_table[(int )((unsigned char )c) >> 5] >> ((int )((unsigned char )c) & 31)) & 1U));
}
}
size_t strnlen1(char const   *string , size_t maxlen ) ;
__inline static void mbuiter_multi_next(struct mbuiter_multi *iter ) 
{ 
  int tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  int tmp___2 ;
  _Bool tmp___3 ;

  {
  if (iter->next_done) {
    return;
  }
  if (iter->in_shift) {
    goto with_shift;
  }
  {
  tmp___3 = is_basic((char )*(iter->cur.ptr));
  }
  if (tmp___3) {
    iter->cur.bytes = (size_t )1;
    iter->cur.wc = (wchar_t )*(iter->cur.ptr);
    iter->cur.wc_valid = (_Bool)1;
  } else {
    {
    tmp = mbsinit((mbstate_t const   *)(& iter->state));
    }
    if (! tmp) {
      {
      __assert_fail("mbsinit (&iter->state)", "/home/wslee/project/coreutils-8.1/lib/mbuiter.h",
                    142U, "mbuiter_multi_next");
      }
    }
    iter->in_shift = (_Bool)1;
    with_shift: 
    {
    tmp___0 = __ctype_get_mb_cur_max();
    tmp___1 = strnlen1(iter->cur.ptr, tmp___0);
    iter->cur.bytes = mbrtowc((wchar_t */* __restrict  */)(& iter->cur.wc), (char const   */* __restrict  */)iter->cur.ptr,
                              tmp___1, (mbstate_t */* __restrict  */)(& iter->state));
    }
    if (iter->cur.bytes == 0xffffffffffffffffUL) {
      iter->cur.bytes = (size_t )1;
      iter->cur.wc_valid = (_Bool)0;
    } else
    if (iter->cur.bytes == 0xfffffffffffffffeUL) {
      {
      iter->cur.bytes = strlen(iter->cur.ptr);
      iter->cur.wc_valid = (_Bool)0;
      }
    } else {
      if (iter->cur.bytes == 0UL) {
        iter->cur.bytes = (size_t )1;
        if (! ((int const   )*(iter->cur.ptr) == 0)) {
          {
          __assert_fail("*iter->cur.ptr == \'\\0\'", "/home/wslee/project/coreutils-8.1/lib/mbuiter.h",
                        170U, "mbuiter_multi_next");
          }
        }
        if (! (iter->cur.wc == 0)) {
          {
          __assert_fail("iter->cur.wc == 0", "/home/wslee/project/coreutils-8.1/lib/mbuiter.h",
                        171U, "mbuiter_multi_next");
          }
        }
      }
      {
      iter->cur.wc_valid = (_Bool)1;
      tmp___2 = mbsinit((mbstate_t const   *)(& iter->state));
      }
      if (tmp___2) {
        iter->in_shift = (_Bool)0;
      }
    }
  }
  iter->next_done = (_Bool)1;
  return;
}
}
extern int fnmatch(char const   *__pattern , char const   *__name , int __flags ) ;
void *xzalloc(size_t s )  __attribute__((__malloc__)) ;
void *x2realloc(void *p , size_t *pn ) ;
char *xstrdup(char const   *string )  __attribute__((__malloc__)) ;
__inline static void *x2nrealloc(void *p , size_t *pn , size_t s ) 
{ 
  size_t n ;
  void *tmp ;

  {
  n = *pn;
  if (! p) {
    if (! n) {
      n = 64UL / s;
      n += (size_t )(! n);
    }
  } else {
    if (0xaaaaaaaaaaaaaaaaUL / s <= n) {
      {
      xalloc_die();
      }
    }
    n += (n + 1UL) / 2UL;
  }
  {
  *pn = n;
  tmp = xrealloc(p, n * s);
  }
  return (tmp);
}
}
_Bool fnmatch_pattern_has_wildcards(char const   *str , int options ) 
{ 
  char const   *cset ;
  size_t n ;
  size_t tmp ;
  char *__cil_tmp7 ;

  {
  cset = "\\?*[]";
  if (options & (1 << 1)) {
    cset ++;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! *str) {
      goto while_break;
    }
    {
    tmp = strcspn(str, cset);
    n = tmp;
    }
    if ((int const   )*(str + n) == 0) {
      goto while_break;
    } else
    if ((int const   )*(str + n) == 92) {
      str += n + 1UL;
      if (*str) {
        str ++;
      }
    } else {
      return ((_Bool)1);
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)0);
}
}
struct exclude *new_exclude(void) 
{ 
  struct exclude *tmp ;
  void *tmp___0 ;

  {
  {
  tmp___0 = xzalloc(sizeof(*tmp));
  }
  return ((struct exclude *)tmp___0);
}
}
static size_t string_hasher(void const   *data , size_t n_buckets ) 
{ 
  char const   *p ;
  size_t tmp ;

  {
  {
  p = (char const   *)data;
  tmp = hash_string(p, n_buckets);
  }
  return (tmp);
}
}
static size_t string_hasher_ci(void const   *data , size_t n_buckets ) 
{ 
  char const   *p ;
  mbui_iterator_t iter ;
  size_t value ;
  mbchar_t m ;
  wchar_t wc ;
  wint_t tmp ;
  int tmp___0 ;
  void *__cil_tmp13 ;
  void *__cil_tmp14 ;
  void *__cil_tmp15 ;

  {
  {
  p = (char const   *)data;
  value = (size_t )0;
  iter.cur.ptr = p;
  iter.in_shift = (_Bool)0;
  memset((void *)(& iter.state), '\000', sizeof(mbstate_t ));
  iter.next_done = (_Bool)0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    mbuiter_multi_next(& iter);
    }
    if (iter.cur.wc_valid) {
      if (iter.cur.wc == 0) {
        tmp___0 = 0;
      } else {
        tmp___0 = 1;
      }
    } else {
      tmp___0 = 1;
    }
    if (! tmp___0) {
      goto while_break;
    }
    m = iter.cur;
    if (m.wc_valid) {
      {
      tmp = towlower((wint_t )m.wc);
      wc = (wchar_t )tmp;
      }
    } else {
      wc = (wchar_t )*(m.ptr);
    }
    value = (value * 31UL + (size_t )wc) % n_buckets;
    iter.cur.ptr += iter.cur.bytes;
    iter.next_done = (_Bool)0;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (value);
}
}
static _Bool string_compare(void const   *data1 , void const   *data2 ) 
{ 
  char const   *p1 ;
  char const   *p2 ;
  int tmp ;

  {
  {
  p1 = (char const   *)data1;
  p2 = (char const   *)data2;
  tmp = strcmp(p1, p2);
  }
  return ((_Bool )(tmp == 0));
}
}
static _Bool string_compare_ci(void const   *data1 , void const   *data2 ) 
{ 
  char const   *p1 ;
  char const   *p2 ;
  int tmp ;

  {
  {
  p1 = (char const   *)data1;
  p2 = (char const   *)data2;
  tmp = mbscasecmp(p1, p2);
  }
  return ((_Bool )(tmp == 0));
}
}
static void string_free(void *data ) 
{ 


  {
  {
  free(data);
  }
  return;
}
}
static struct exclude_segment *new_exclude_segment(struct exclude *ex , enum exclude_type type ,
                                                   int options ) 
{ 
  struct exclude_segment *sp ;
  void *tmp ;
  _Bool (*tmp___0)(void const   *data1 , void const   *data2 ) ;
  size_t (*tmp___1)(void const   *data , size_t n_buckets ) ;

  {
  {
  tmp = xzalloc(sizeof(struct exclude_segment ));
  sp = (struct exclude_segment *)tmp;
  sp->type = type;
  sp->options = options;
  }
  if ((unsigned int )type == 1U) {
    goto case_1;
  }
  if ((unsigned int )type == 0U) {
    goto case_0;
  }
  goto switch_break;
  case_1: 
  goto switch_break;
  case_0: 
  if (options & (1 << 4)) {
    tmp___0 = & string_compare_ci;
  } else {
    tmp___0 = & string_compare;
  }
  if (options & (1 << 4)) {
    tmp___1 = & string_hasher_ci;
  } else {
    tmp___1 = & string_hasher;
  }
  {
  sp->v.table = hash_initialize((size_t )0, (Hash_tuning const   *)((void *)0), tmp___1,
                                tmp___0, & string_free);
  }
  goto switch_break;
  switch_break: ;
  if (ex->tail) {
    (ex->tail)->next = sp;
  } else {
    ex->head = sp;
  }
  ex->tail = sp;
  return (sp);
}
}
static int fnmatch_no_wildcards(char const   *pattern , char const   *f , int options ) 
{ 
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  size_t patlen ;
  size_t tmp___2 ;
  int r ;
  int tmp___3 ;
  char *fcopy ;
  char *tmp___4 ;
  char *p ;
  int r___0 ;
  char *tmp___5 ;

  {
  if (! (options & (1 << 3))) {
    if (options & (1 << 4)) {
      {
      tmp = mbscasecmp(pattern, f);
      tmp___1 = tmp;
      }
    } else {
      {
      tmp___0 = strcmp(pattern, f);
      tmp___1 = tmp___0;
      }
    }
    return (tmp___1);
  } else
  if (! (options & (1 << 4))) {
    {
    tmp___2 = strlen(pattern);
    patlen = tmp___2;
    tmp___3 = strncmp(pattern, f, patlen);
    r = tmp___3;
    }
    if (! r) {
      r = (int )*(f + patlen);
      if (r == 47) {
        r = 0;
      }
    }
    return (r);
  } else {
    {
    tmp___4 = xstrdup(f);
    fcopy = tmp___4;
    p = fcopy;
    }
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      p = strchr((char const   *)p, '/');
      }
      if (p) {
        *p = (char )'\000';
      }
      {
      r___0 = mbscasecmp(pattern, (char const   *)fcopy);
      }
      if (! p) {
        goto while_break;
      } else
      if (r___0 <= 0) {
        goto while_break;
      }
      tmp___5 = p;
      p ++;
      *tmp___5 = (char )'/';
    }
    while_break___0: /* CIL Label */ ;
    }
    while_break: 
    {
    free((void *)fcopy);
    }
    return (r___0);
  }
}
}
_Bool exclude_fnmatch(char const   *pattern , char const   *f , int options ) 
{ 
  int (*matcher)(char const   * , char const   * , int  ) ;
  int (*tmp)(char const   *__pattern , char const   *__name , int __flags ) ;
  _Bool matched ;
  int tmp___0 ;
  char const   *p ;
  int tmp___1 ;

  {
  if (options & (1 << 28)) {
    tmp = & fnmatch;
  } else {
    tmp = & fnmatch_no_wildcards;
  }
  {
  matcher = tmp;
  tmp___0 = (*matcher)(pattern, f, options);
  matched = (_Bool )(tmp___0 == 0);
  }
  if (! (options & (1 << 30))) {
    p = f;
    {
    while (1) {
      while_continue: /* CIL Label */ ;

      if (*p) {
        if (! (! matched)) {
          goto while_break;
        }
      } else {
        goto while_break;
      }
      if ((int const   )*p == 47) {
        if ((int const   )*(p + 1) != 47) {
          {
          tmp___1 = (*matcher)(pattern, p + 1, options);
          matched = (_Bool )(tmp___1 == 0);
          }
        }
      }
      p ++;
    }
    while_break___0: /* CIL Label */ ;
    }
    while_break: ;
  }
  return (matched);
}
}
static _Bool excluded_file_pattern_p(struct exclude_segment  const  *seg , char const   *f ) 
{ 
  size_t exclude_count ;
  struct patopts  const  *exclude___0 ;
  size_t i ;
  _Bool excluded ;
  char const   *pattern ;
  int options ;
  _Bool tmp ;

  {
  exclude_count = (size_t )seg->v.pat.exclude_count;
  exclude___0 = (struct patopts  const  *)seg->v.pat.exclude;
  excluded = (_Bool )(! (! ((exclude___0 + 0)->options & (int const   )(1 << 29))));
  i = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < exclude_count)) {
      goto while_break;
    }
    {
    pattern = (char const   *)(exclude___0 + i)->pattern;
    options = (int )(exclude___0 + i)->options;
    tmp = exclude_fnmatch(pattern, f, options);
    }
    if ((int )excluded != (int )tmp) {
      return ((_Bool )(! excluded));
    }
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (excluded);
}
}
static _Bool excluded_file_name_p(struct exclude_segment  const  *seg , char const   *f ,
                                  char *buffer ) 
{ 
  int options ;
  _Bool excluded ;
  Hash_table *table___0 ;
  void *tmp ;
  char *p ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  options = (int )seg->options;
  excluded = (_Bool )(! (! (options & (1 << 29))));
  table___0 = (Hash_table *)seg->v.table;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    strcpy((char */* __restrict  */)buffer, (char const   */* __restrict  */)f);
    }
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;
      while_continue___0: 
      {
      tmp = hash_lookup((Hash_table const   *)table___0, (void const   *)buffer);
      }
      if (tmp) {
        return ((_Bool )(! excluded));
      }
      if (options & (1 << 3)) {
        {
        tmp___0 = strrchr((char const   *)buffer, '/');
        p = tmp___0;
        }
        if (p) {
          *p = (char)0;
          goto while_continue___0;
        }
      }
      goto while_break___0;
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: ;
    if (! (options & (1 << 30))) {
      {
      tmp___1 = strchr(f, '/');
      f = (char const   *)tmp___1;
      }
      if (f) {
        f ++;
      }
    } else {
      goto while_break;
    }
    if (! f) {
      goto while_break;
    }
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
  return (excluded);
}
}
_Bool excluded_file_name(struct exclude  const  *ex , char const   *f ) 
{ 
  struct exclude_segment *seg ;
  _Bool excluded ;
  char *filename ;
  _Bool rc ;
  size_t tmp ;
  void *tmp___0 ;

  {
  filename = (char *)((void *)0);
  if (! ex->head) {
    return ((_Bool)0);
  }
  excluded = (_Bool )(! (! ((ex->head)->options & (1 << 29))));
  seg = (struct exclude_segment *)ex->head;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! seg) {
      goto while_break;
    }
    if ((unsigned int )seg->type == 1U) {
      goto case_1;
    }
    if ((unsigned int )seg->type == 0U) {
      goto case_0;
    }
    goto switch_default;
    case_1: 
    {
    rc = excluded_file_pattern_p((struct exclude_segment  const  *)seg, f);
    }
    goto switch_break;
    case_0: 
    if (! filename) {
      {
      tmp = strlen(f);
      tmp___0 = xmalloc(tmp + 1UL);
      filename = (char *)tmp___0;
      }
    }
    {
    rc = excluded_file_name_p((struct exclude_segment  const  *)seg, f, filename);
    }
    goto switch_break;
    switch_default: 
    {
    abort();
    }
    switch_break: ;
    if ((int )rc != (int )excluded) {
      excluded = rc;
      goto while_break;
    }
    seg = seg->next;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
  free((void *)filename);
  }
  return (excluded);
}
}
void add_exclude(struct exclude *ex , char const   *pattern , int options ) 
{ 
  struct exclude_segment *seg ;
  struct exclude_pattern *pat ;
  struct patopts *patopts ;
  void *tmp ;
  size_t tmp___0 ;
  char *str ;
  char *p ;
  void *tmp___1 ;
  _Bool tmp___2 ;

  {
  if (options & (1 << 28)) {
    {
    tmp___2 = fnmatch_pattern_has_wildcards(pattern, options);
    }
    if (tmp___2) {
      if (ex->tail) {
        if ((unsigned int )(ex->tail)->type == 1U) {
          if (((ex->tail)->options & (1 << 29)) == (options & (1 << 29))) {
            seg = ex->tail;
          } else {
            {
            seg = new_exclude_segment(ex, (enum exclude_type )1, options);
            }
          }
        } else {
          {
          seg = new_exclude_segment(ex, (enum exclude_type )1, options);
          }
        }
      } else {
        {
        seg = new_exclude_segment(ex, (enum exclude_type )1, options);
        }
      }
      pat = & seg->v.pat;
      if (pat->exclude_count == pat->exclude_alloc) {
        {
        tmp = x2nrealloc((void *)pat->exclude, & pat->exclude_alloc, sizeof(*(pat->exclude)));
        pat->exclude = (struct patopts *)tmp;
        }
      }
      tmp___0 = pat->exclude_count;
      (pat->exclude_count) ++;
      patopts = pat->exclude + tmp___0;
      patopts->pattern = pattern;
      patopts->options = options;
    } else {
      goto _L;
    }
  } else {
    _L: 
    if (ex->tail) {
      if ((unsigned int )(ex->tail)->type == 0U) {
        if (((ex->tail)->options & ((((1 << 29) | (1 << 30)) | (1 << 3)) | (1 << 4))) == (options & ((((1 << 29) | (1 << 30)) | (1 << 3)) | (1 << 4)))) {
          seg = ex->tail;
        } else {
          {
          seg = new_exclude_segment(ex, (enum exclude_type )0, options);
          }
        }
      } else {
        {
        seg = new_exclude_segment(ex, (enum exclude_type )0, options);
        }
      }
    } else {
      {
      seg = new_exclude_segment(ex, (enum exclude_type )0, options);
      }
    }
    {
    str = xstrdup(pattern);
    tmp___1 = hash_insert(seg->v.table, (void const   *)str);
    p = (char *)tmp___1;
    }
    if ((unsigned long )p != (unsigned long )str) {
      {
      free((void *)str);
      }
    }
  }
  return;
}
}
int add_exclude_file(void (*add_func)(struct exclude * , char const   * , int  ) ,
                     struct exclude *ex , char const   *file_name___1 , int options ,
                     char line_end ) 
{ 
  _Bool use_stdin ;
  int tmp ;
  FILE *in ;
  char *buf___0 ;
  char *p ;
  char const   *pattern ;
  char const   *lim ;
  size_t buf_alloc ;
  size_t buf_count ;
  int c ;
  int e ;
  void *tmp___0 ;
  size_t tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  void *tmp___6 ;
  int tmp___7 ;
  char *pattern_end ;
  unsigned short const   **tmp___8 ;
  unsigned short const   **tmp___9 ;
  int *tmp___10 ;
  int tmp___11 ;

  {
  if ((int const   )*(file_name___1 + 0) == 45) {
    if (! *(file_name___1 + 1)) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  use_stdin = (_Bool )tmp;
  buf___0 = (char *)((void *)0);
  buf_alloc = (size_t )0;
  buf_count = (size_t )0;
  e = 0;
  if (use_stdin) {
    in = stdin;
  } else {
    {
    in = fopen((char const   */* __restrict  */)file_name___1, (char const   */* __restrict  */)"r");
    }
    if (! in) {
      return (-1);
    }
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    c = getc_unlocked(in);
    }
    if (! (c != -1)) {
      goto while_break;
    }
    if (buf_count == buf_alloc) {
      {
      tmp___0 = x2realloc((void *)buf___0, & buf_alloc);
      buf___0 = (char *)tmp___0;
      }
    }
    tmp___1 = buf_count;
    buf_count ++;
    *(buf___0 + tmp___1) = (char )c;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: 
  {
  tmp___3 = ferror_unlocked(in);
  }
  if (tmp___3) {
    {
    tmp___2 = __errno_location();
    e = *tmp___2;
    }
  }
  if (! use_stdin) {
    {
    tmp___5 = fclose(in);
    }
    if (tmp___5 != 0) {
      {
      tmp___4 = __errno_location();
      e = *tmp___4;
      }
    }
  }
  {
  tmp___6 = xrealloc((void *)buf___0, buf_count + 1UL);
  buf___0 = (char *)tmp___6;
  *(buf___0 + buf_count) = line_end;
  }
  if (buf_count == 0UL) {
    tmp___7 = 0;
  } else
  if ((int )*(buf___0 + (buf_count - 1UL)) == (int )line_end) {
    tmp___7 = 0;
  } else {
    tmp___7 = 1;
  }
  lim = (char const   *)((buf___0 + buf_count) + tmp___7);
  pattern = (char const   *)buf___0;
  p = buf___0;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! ((unsigned long )p < (unsigned long )lim)) {
      goto while_break___0;
    }
    if ((int )*p == (int )line_end) {
      {
      pattern_end = p;
      tmp___9 = __ctype_b_loc();
      }
      if ((int const   )*(*tmp___9 + (int )((unsigned char )line_end)) & 8192) {
        {
        while (1) {
          while_continue___1: /* CIL Label */ ;

          if ((unsigned long )pattern_end == (unsigned long )pattern) {
            goto next_pattern;
          } else {
            {
            tmp___8 = __ctype_b_loc();
            }
            if (! ((int const   )*(*tmp___8 + (int )((unsigned char )*(pattern_end + -1))) & 8192)) {
              goto while_break___1;
            }
          }
          pattern_end --;
        }
        while_break___4: /* CIL Label */ ;
        }
        while_break___1: ;
      }
      {
      *pattern_end = (char )'\000';
      (*add_func)(ex, pattern, options);
      }
      next_pattern: 
      pattern = (char const   *)(p + 1);
    }
    p ++;
  }
  while_break___3: /* CIL Label */ ;
  }
  while_break___0: 
  {
  tmp___10 = __errno_location();
  *tmp___10 = e;
  }
  if (e) {
    tmp___11 = -1;
  } else {
    tmp___11 = 0;
  }
  return (tmp___11);
}
}
int volatile   exit_failure  =    (int volatile   )1;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) dup2)(int __fd ,
                                                                           int __fd2 ) ;
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
extern DIR *fdopendir(int __fd ) ;
DIR *rpl_fdopendir(int fd ) ;
DIR *rpl_fdopendir(int fd ) 
{ 
  struct stat st ;
  int tmp ;
  int *tmp___0 ;
  DIR *tmp___1 ;
  void *__cil_tmp7 ;

  {
  {
  tmp = fstat(fd, & st);
  }
  if (tmp) {
    return ((DIR *)((void *)0));
  }
  if (! ((st.st_mode & 61440U) == 16384U)) {
    {
    tmp___0 = __errno_location();
    *tmp___0 = 20;
    }
    return ((DIR *)((void *)0));
  }
  {
  tmp___1 = fdopendir(fd);
  }
  return (tmp___1);
}
}
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) fdopen)(int __fd ,
                                                                               char const   *__modes ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
__inline static void ignore_value(int i ) 
{ 


  {
  return;
}
}
extern int fputc(int __c , FILE *__stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size , size_t __n ,
                     FILE * __restrict  __s ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) mktime)(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) strftime)(char * __restrict  __s ,
                                                                                  size_t __maxsize ,
                                                                                  char const   * __restrict  __format ,
                                                                                  struct tm  const  * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) toupper)(int __c ) ;
static void fwrite_lowcase(FILE *fp , char const   *src , size_t len ) 
{ 
  int tmp ;
  size_t tmp___0 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    tmp___0 = len;
    len --;
    if (! (tmp___0 > 0UL)) {
      goto while_break;
    }
    {
    tmp = tolower((int )((unsigned char )*src));
    fputc(tmp, fp);
    src ++;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return;
}
}
static void fwrite_uppcase(FILE *fp , char const   *src , size_t len ) 
{ 
  int tmp ;
  size_t tmp___0 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    tmp___0 = len;
    len --;
    if (! (tmp___0 > 0UL)) {
      goto while_break;
    }
    {
    tmp = toupper((int )((unsigned char )*src));
    fputc(tmp, fp);
    src ++;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return;
}
}
__inline static int iso_week_days(int yday , int wday ) 
{ 
  int big_enough_multiple_of_7 ;

  {
  big_enough_multiple_of_7 = 378;
  return (((yday - (((yday - wday) + 4) + big_enough_multiple_of_7) % 7) + 4) - 1);
}
}
static size_t strftime_case_(_Bool upcase , FILE *s , char const   *format , struct tm  const  *tp ,
                             int ut , int ns ) 
{ 
  size_t maxsize ;
  int hour12 ;
  char const   *zone ;
  size_t i ;
  FILE *p ;
  char const   *f ;
  int pad ;
  int modifier ;
  int digits ;
  int number_value ;
  unsigned int u_number_value ;
  _Bool negative_number ;
  _Bool always_output_a_sign ;
  int tz_colon_mask ;
  char const   *subfmt ;
  char sign_char ;
  char *bufp ;
  char buf___0[3UL + (((sizeof(time_t ) * 8UL - 1UL) * 146UL) / 485UL + 2UL)] ;
  int width ;
  _Bool to_lowcase ;
  _Bool to_uppcase ;
  size_t colons ;
  _Bool change_case ;
  int format_char ;
  int _n ;
  int _delta ;
  int _incr ;
  int tmp ;
  size_t _i ;
  size_t _i___0 ;
  char const   *tmp___0 ;
  int _n___0 ;
  int _delta___0 ;
  int _incr___0 ;
  int tmp___1 ;
  size_t _i___1 ;
  size_t _i___2 ;
  size_t len ;
  size_t tmp___2 ;
  int _n___1 ;
  int _delta___1 ;
  int _incr___1 ;
  int tmp___3 ;
  size_t _i___3 ;
  size_t _i___4 ;
  char ufmt[5] ;
  char *u ;
  char ubuf[1024] ;
  size_t len___0 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  int _n___2 ;
  int _delta___2 ;
  int _incr___2 ;
  int tmp___8 ;
  size_t _i___5 ;
  size_t _i___6 ;
  size_t tmp___9 ;
  int century ;
  int tmp___10 ;
  int tmp___11 ;
  int _n___3 ;
  int _delta___3 ;
  int _incr___3 ;
  int tmp___12 ;
  size_t _i___7 ;
  size_t _i___8 ;
  int padding ;
  size_t _i___9 ;
  int _n___4 ;
  int _delta___4 ;
  int _incr___4 ;
  int tmp___13 ;
  size_t _i___10 ;
  size_t _i___11 ;
  int _n___5 ;
  int _delta___5 ;
  int _incr___5 ;
  int tmp___14 ;
  size_t _i___12 ;
  size_t _i___13 ;
  size_t _i___14 ;
  int _n___6 ;
  int _delta___6 ;
  int _incr___6 ;
  int tmp___15 ;
  size_t _i___15 ;
  size_t _i___16 ;
  int _n___7 ;
  int _delta___7 ;
  int _incr___7 ;
  int tmp___16 ;
  size_t _i___17 ;
  size_t _i___18 ;
  size_t tmp___17 ;
  int j ;
  int _n___8 ;
  int _delta___8 ;
  int _incr___8 ;
  int tmp___18 ;
  size_t _i___19 ;
  size_t _i___20 ;
  struct tm ltm ;
  time_t t ;
  int d ;
  int tmp___19 ;
  int _n___9 ;
  int _delta___9 ;
  int _incr___9 ;
  int tmp___20 ;
  size_t _i___21 ;
  size_t _i___22 ;
  int year___0 ;
  int tmp___21 ;
  int year_adjust ;
  int days ;
  int tmp___22 ;
  int tmp___23 ;
  int d___0 ;
  int tmp___24 ;
  int tmp___25 ;
  int yy ;
  int tmp___26 ;
  int yy___0 ;
  int _n___10 ;
  size_t tmp___27 ;
  int _delta___10 ;
  int _incr___10 ;
  int tmp___28 ;
  size_t _i___23 ;
  size_t _i___24 ;
  size_t tmp___29 ;
  int diff ;
  int hour_diff ;
  int min_diff ;
  int sec_diff ;
  int flen ;
  int _n___11 ;
  int _delta___11 ;
  int _incr___11 ;
  int tmp___30 ;
  size_t _i___25 ;
  size_t _i___26 ;
  size_t tmp___31 ;
  void *__cil_tmp161 ;
  void *__cil_tmp162 ;
  void *__cil_tmp163 ;
  char *__cil_tmp164 ;
  char *__cil_tmp165 ;
  char *__cil_tmp166 ;
  char *__cil_tmp167 ;
  char *__cil_tmp168 ;

  {
  maxsize = (size_t )-1;
  hour12 = (int )tp->tm_hour;
  i = (size_t )0;
  p = s;
  zone = (char const   *)((void *)0);
  zone = (char const   *)tp->tm_zone;
  if (hour12 > 12) {
    hour12 -= 12;
  } else
  if (hour12 == 0) {
    hour12 = 12;
  }
  f = format;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((int const   )*f != 0)) {
      goto while_break;
    }
    pad = 0;
    digits = 0;
    width = -1;
    to_lowcase = (_Bool)0;
    to_uppcase = upcase;
    change_case = (_Bool)0;
    if ((int const   )*f != 37) {
      {
      while (1) {
        while_continue___6: /* CIL Label */ ;
        _n = 1;
        _delta = width - _n;
        if (_delta > 0) {
          tmp = _delta;
        } else {
          tmp = 0;
        }
        _incr = _n + tmp;
        if ((size_t )_incr >= maxsize - i) {
          return ((size_t )0);
        }
        if (p) {
          if (digits == 0) {
            if (_delta > 0) {
              if (pad == 48) {
                {
                while (1) {
                  while_continue___7: /* CIL Label */ ;
                  _i = (size_t )0;
                  {
                  while (1) {
                    while_continue___8: /* CIL Label */ ;

                    if (! (_i < (size_t )_delta)) {
                      goto while_break___2;
                    }
                    {
                    fputc('0', p);
                    _i ++;
                    }
                  }
                  while_break___83: /* CIL Label */ ;
                  }
                  while_break___2: ;
                  goto while_break___1;
                }
                while_break___82: /* CIL Label */ ;
                }
                while_break___1: ;
              } else {
                {
                while (1) {
                  while_continue___9: /* CIL Label */ ;
                  _i___0 = (size_t )0;
                  {
                  while (1) {
                    while_continue___10: /* CIL Label */ ;

                    if (! (_i___0 < (size_t )_delta)) {
                      goto while_break___4;
                    }
                    {
                    fputc(' ', p);
                    _i___0 ++;
                    }
                  }
                  while_break___85: /* CIL Label */ ;
                  }
                  while_break___4: ;
                  goto while_break___3;
                }
                while_break___84: /* CIL Label */ ;
                }
                while_break___3: ;
              }
            }
          }
          {
          fputc((int )*f, p);
          }
        }
        i += (size_t )_incr;
        goto while_break___0;
      }
      while_break___81: /* CIL Label */ ;
      }
      while_break___0: ;
      goto __Cont;
    }
    {
    while (1) {
      while_continue___11: /* CIL Label */ ;
      while_continue___5: 
      f ++;
      if ((int const   )*f == 95) {
        goto case_95;
      }
      if ((int const   )*f == 45) {
        goto case_95;
      }
      if ((int const   )*f == 48) {
        goto case_95;
      }
      if ((int const   )*f == 94) {
        goto case_94;
      }
      if ((int const   )*f == 35) {
        goto case_35;
      }
      goto switch_default;
      case_95: 
      pad = (int )*f;
      goto while_continue___5;
      case_94: 
      to_uppcase = (_Bool)1;
      goto while_continue___5;
      case_35: 
      change_case = (_Bool)1;
      goto while_continue___5;
      switch_default: 
      goto switch_break;
      switch_break: ;
      goto while_break___5;
    }
    while_break___86: /* CIL Label */ ;
    }
    while_break___5: ;
    if ((unsigned int )*f - 48U <= 9U) {
      width = 0;
      {
      while (1) {
        while_continue___12: /* CIL Label */ ;

        if (width > 214748364) {
          width = 2147483647;
        } else
        if (width == 214748364) {
          if ((int const   )*f - 48 > 7) {
            width = 2147483647;
          } else {
            width *= 10;
            width += (int )((int const   )*f - 48);
          }
        } else {
          width *= 10;
          width += (int )((int const   )*f - 48);
        }
        f ++;
        if (! ((unsigned int )*f - 48U <= 9U)) {
          goto while_break___6;
        }
      }
      while_break___87: /* CIL Label */ ;
      }
      while_break___6: ;
    }
    if ((int const   )*f == 69) {
      goto case_69;
    }
    if ((int const   )*f == 79) {
      goto case_69;
    }
    goto switch_default___0;
    case_69: 
    tmp___0 = f;
    f ++;
    modifier = (int )*tmp___0;
    goto switch_break___0;
    switch_default___0: 
    modifier = 0;
    goto switch_break___0;
    switch_break___0: 
    format_char = (int )*f;
    if (format_char == 37) {
      goto case_37;
    }
    if (format_char == 97) {
      goto case_97;
    }
    if (format_char == 65) {
      goto case_65;
    }
    if (format_char == 98) {
      goto case_98;
    }
    if (format_char == 104) {
      goto case_98;
    }
    if (format_char == 66) {
      goto case_66;
    }
    if (format_char == 99) {
      goto case_99;
    }
    if (format_char == 67) {
      goto case_67;
    }
    if (format_char == 120) {
      goto case_120;
    }
    if (format_char == 68) {
      goto case_68;
    }
    if (format_char == 100) {
      goto case_100;
    }
    if (format_char == 101) {
      goto case_101;
    }
    if (format_char == 70) {
      goto case_70;
    }
    if (format_char == 72) {
      goto case_72;
    }
    if (format_char == 73) {
      goto case_73;
    }
    if (format_char == 107) {
      goto case_107;
    }
    if (format_char == 108) {
      goto case_108;
    }
    if (format_char == 106) {
      goto case_106;
    }
    if (format_char == 77) {
      goto case_77;
    }
    if (format_char == 109) {
      goto case_109;
    }
    if (format_char == 78) {
      goto case_78;
    }
    if (format_char == 110) {
      goto case_110;
    }
    if (format_char == 80) {
      goto case_80;
    }
    if (format_char == 112) {
      goto case_112;
    }
    if (format_char == 82) {
      goto case_82;
    }
    if (format_char == 114) {
      goto case_114;
    }
    if (format_char == 83) {
      goto case_83;
    }
    if (format_char == 115) {
      goto case_115;
    }
    if (format_char == 88) {
      goto case_88;
    }
    if (format_char == 84) {
      goto case_84;
    }
    if (format_char == 116) {
      goto case_116;
    }
    if (format_char == 117) {
      goto case_117;
    }
    if (format_char == 85) {
      goto case_85;
    }
    if (format_char == 86) {
      goto case_86;
    }
    if (format_char == 103) {
      goto case_86;
    }
    if (format_char == 71) {
      goto case_86;
    }
    if (format_char == 87) {
      goto case_87;
    }
    if (format_char == 119) {
      goto case_119;
    }
    if (format_char == 89) {
      goto case_89;
    }
    if (format_char == 121) {
      goto case_121;
    }
    if (format_char == 90) {
      goto case_90;
    }
    if (format_char == 58) {
      goto case_58;
    }
    if (format_char == 122) {
      goto case_122;
    }
    if (format_char == 0) {
      goto case_0___0;
    }
    goto bad_format;
    case_37: 
    if (modifier != 0) {
      goto bad_format;
    }
    {
    while (1) {
      while_continue___13: /* CIL Label */ ;
      _n___0 = 1;
      _delta___0 = width - _n___0;
      if (_delta___0 > 0) {
        tmp___1 = _delta___0;
      } else {
        tmp___1 = 0;
      }
      _incr___0 = _n___0 + tmp___1;
      if ((size_t )_incr___0 >= maxsize - i) {
        return ((size_t )0);
      }
      if (p) {
        if (digits == 0) {
          if (_delta___0 > 0) {
            if (pad == 48) {
              {
              while (1) {
                while_continue___14: /* CIL Label */ ;
                _i___1 = (size_t )0;
                {
                while (1) {
                  while_continue___15: /* CIL Label */ ;

                  if (! (_i___1 < (size_t )_delta___0)) {
                    goto while_break___9;
                  }
                  {
                  fputc('0', p);
                  _i___1 ++;
                  }
                }
                while_break___90: /* CIL Label */ ;
                }
                while_break___9: ;
                goto while_break___8;
              }
              while_break___89: /* CIL Label */ ;
              }
              while_break___8: ;
            } else {
              {
              while (1) {
                while_continue___16: /* CIL Label */ ;
                _i___2 = (size_t )0;
                {
                while (1) {
                  while_continue___17: /* CIL Label */ ;

                  if (! (_i___2 < (size_t )_delta___0)) {
                    goto while_break___11;
                  }
                  {
                  fputc(' ', p);
                  _i___2 ++;
                  }
                }
                while_break___92: /* CIL Label */ ;
                }
                while_break___11: ;
                goto while_break___10;
              }
              while_break___91: /* CIL Label */ ;
              }
              while_break___10: ;
            }
          }
        }
        {
        fputc((int )*f, p);
        }
      }
      i += (size_t )_incr___0;
      goto while_break___7;
    }
    while_break___88: /* CIL Label */ ;
    }
    while_break___7: ;
    goto switch_break___1;
    case_97: 
    if (modifier != 0) {
      goto bad_format;
    }
    if (change_case) {
      to_uppcase = (_Bool)1;
      to_lowcase = (_Bool)0;
    }
    goto underlying_strftime;
    case_65: 
    if (modifier != 0) {
      goto bad_format;
    }
    if (change_case) {
      to_uppcase = (_Bool)1;
      to_lowcase = (_Bool)0;
    }
    goto underlying_strftime;
    case_98: 
    if (change_case) {
      to_uppcase = (_Bool)1;
      to_lowcase = (_Bool)0;
    }
    if (modifier != 0) {
      goto bad_format;
    }
    goto underlying_strftime;
    case_66: 
    if (modifier != 0) {
      goto bad_format;
    }
    if (change_case) {
      to_uppcase = (_Bool)1;
      to_lowcase = (_Bool)0;
    }
    goto underlying_strftime;
    case_99: 
    if (modifier == 79) {
      goto bad_format;
    }
    goto underlying_strftime;
    subformat: 
    {
    tmp___2 = strftime_case_(to_uppcase, (FILE *)((void *)0), subfmt, tp, ut, ns);
    len = tmp___2;
    }
    {
    while (1) {
      while_continue___18: /* CIL Label */ ;
      _n___1 = (int )len;
      _delta___1 = width - _n___1;
      if (_delta___1 > 0) {
        tmp___3 = _delta___1;
      } else {
        tmp___3 = 0;
      }
      _incr___1 = _n___1 + tmp___3;
      if ((size_t )_incr___1 >= maxsize - i) {
        return ((size_t )0);
      }
      if (p) {
        if (digits == 0) {
          if (_delta___1 > 0) {
            if (pad == 48) {
              {
              while (1) {
                while_continue___19: /* CIL Label */ ;
                _i___3 = (size_t )0;
                {
                while (1) {
                  while_continue___20: /* CIL Label */ ;

                  if (! (_i___3 < (size_t )_delta___1)) {
                    goto while_break___14;
                  }
                  {
                  fputc('0', p);
                  _i___3 ++;
                  }
                }
                while_break___95: /* CIL Label */ ;
                }
                while_break___14: ;
                goto while_break___13;
              }
              while_break___94: /* CIL Label */ ;
              }
              while_break___13: ;
            } else {
              {
              while (1) {
                while_continue___21: /* CIL Label */ ;
                _i___4 = (size_t )0;
                {
                while (1) {
                  while_continue___22: /* CIL Label */ ;

                  if (! (_i___4 < (size_t )_delta___1)) {
                    goto while_break___16;
                  }
                  {
                  fputc(' ', p);
                  _i___4 ++;
                  }
                }
                while_break___97: /* CIL Label */ ;
                }
                while_break___16: ;
                goto while_break___15;
              }
              while_break___96: /* CIL Label */ ;
              }
              while_break___15: ;
            }
          }
        }
        {
        strftime_case_(to_uppcase, p, subfmt, tp, ut, ns);
        }
      }
      i += (size_t )_incr___1;
      goto while_break___12;
    }
    while_break___93: /* CIL Label */ ;
    }
    while_break___12: ;
    goto switch_break___1;
    underlying_strftime: 
    u = ufmt;
    tmp___4 = u;
    u ++;
    *tmp___4 = (char )' ';
    tmp___5 = u;
    u ++;
    *tmp___5 = (char )'%';
    if (modifier != 0) {
      tmp___6 = u;
      u ++;
      *tmp___6 = (char )modifier;
    }
    {
    tmp___7 = u;
    u ++;
    *tmp___7 = (char )format_char;
    *u = (char )'\000';
    len___0 = strftime((char */* __restrict  */)(ubuf), sizeof(ubuf), (char const   */* __restrict  */)((char const   *)(ufmt)),
                       (struct tm  const  */* __restrict  */)tp);
    }
    if (len___0 != 0UL) {
      {
      while (1) {
        while_continue___23: /* CIL Label */ ;
        _n___2 = (int )(len___0 - 1UL);
        _delta___2 = width - _n___2;
        if (_delta___2 > 0) {
          tmp___8 = _delta___2;
        } else {
          tmp___8 = 0;
        }
        _incr___2 = _n___2 + tmp___8;
        if ((size_t )_incr___2 >= maxsize - i) {
          return ((size_t )0);
        }
        if (p) {
          if (digits == 0) {
            if (_delta___2 > 0) {
              if (pad == 48) {
                {
                while (1) {
                  while_continue___24: /* CIL Label */ ;
                  _i___5 = (size_t )0;
                  {
                  while (1) {
                    while_continue___25: /* CIL Label */ ;

                    if (! (_i___5 < (size_t )_delta___2)) {
                      goto while_break___19;
                    }
                    {
                    fputc('0', p);
                    _i___5 ++;
                    }
                  }
                  while_break___100: /* CIL Label */ ;
                  }
                  while_break___19: ;
                  goto while_break___18;
                }
                while_break___99: /* CIL Label */ ;
                }
                while_break___18: ;
              } else {
                {
                while (1) {
                  while_continue___26: /* CIL Label */ ;
                  _i___6 = (size_t )0;
                  {
                  while (1) {
                    while_continue___27: /* CIL Label */ ;

                    if (! (_i___6 < (size_t )_delta___2)) {
                      goto while_break___21;
                    }
                    {
                    fputc(' ', p);
                    _i___6 ++;
                    }
                  }
                  while_break___102: /* CIL Label */ ;
                  }
                  while_break___21: ;
                  goto while_break___20;
                }
                while_break___101: /* CIL Label */ ;
                }
                while_break___20: ;
              }
            }
          }
          {
          while (1) {
            while_continue___28: /* CIL Label */ ;

            if (to_lowcase) {
              {
              fwrite_lowcase(p, (char const   *)(ubuf + 1), (size_t )_n___2);
              }
            } else
            if (to_uppcase) {
              {
              fwrite_uppcase(p, (char const   *)(ubuf + 1), (size_t )_n___2);
              }
            } else {
              {
              tmp___9 = fwrite((void const   */* __restrict  */)((void const   *)(ubuf + 1)),
                               (size_t )_n___2, (size_t )1, (FILE */* __restrict  */)p);
              ignore_value((int )tmp___9);
              }
            }
            goto while_break___22;
          }
          while_break___103: /* CIL Label */ ;
          }
          while_break___22: ;
        }
        i += (size_t )_incr___2;
        goto while_break___17;
      }
      while_break___98: /* CIL Label */ ;
      }
      while_break___17: ;
    }
    goto switch_break___1;
    case_67: 
    if (modifier == 79) {
      goto bad_format;
    }
    if (modifier == 69) {
      goto underlying_strftime;
    }
    century = (int )(tp->tm_year / 100 + 19);
    if (tp->tm_year % 100 < 0) {
      if (0 < century) {
        tmp___10 = 1;
      } else {
        tmp___10 = 0;
      }
    } else {
      tmp___10 = 0;
    }
    century -= tmp___10;
    digits = 2;
    negative_number = (_Bool )(tp->tm_year < -1900);
    u_number_value = (unsigned int )century;
    goto do_signed_number;
    case_120: 
    if (modifier == 79) {
      goto bad_format;
    }
    goto underlying_strftime;
    case_68: 
    if (modifier != 0) {
      goto bad_format;
    }
    subfmt = "%m/%d/%y";
    goto subformat;
    case_100: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = (int )tp->tm_mday;
    goto do_number;
    case_101: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = (int )tp->tm_mday;
    goto do_number_spacepad;
    do_tz_offset: 
    always_output_a_sign = (_Bool)1;
    goto do_number_body;
    do_number_spacepad: 
    if (pad != 48) {
      if (pad != 45) {
        pad = '_';
      }
    }
    do_number: 
    negative_number = (_Bool )(number_value < 0);
    u_number_value = (unsigned int )number_value;
    do_signed_number: 
    always_output_a_sign = (_Bool)0;
    tz_colon_mask = 0;
    do_number_body: 
    if (modifier == 79) {
      if (! negative_number) {
        goto underlying_strftime;
      }
    }
    bufp = buf___0 + sizeof(buf___0) / sizeof(buf___0[0]);
    if (negative_number) {
      u_number_value = - u_number_value;
    }
    {
    while (1) {
      while_continue___29: /* CIL Label */ ;

      if (tz_colon_mask & 1) {
        bufp --;
        *bufp = (char )':';
      }
      tz_colon_mask >>= 1;
      bufp --;
      *bufp = (char )(u_number_value % 10U + 48U);
      u_number_value /= 10U;
      if (! (u_number_value != 0U)) {
        if (! (tz_colon_mask != 0)) {
          goto while_break___23;
        }
      }
    }
    while_break___104: /* CIL Label */ ;
    }
    while_break___23: ;
    do_number_sign_and_padding: 
    if (digits < width) {
      digits = width;
    }
    if (negative_number) {
      sign_char = (char )'-';
    } else {
      if (always_output_a_sign) {
        tmp___11 = '+';
      } else {
        tmp___11 = 0;
      }
      sign_char = (char )tmp___11;
    }
    if (pad == 45) {
      if (sign_char) {
        {
        while (1) {
          while_continue___30: /* CIL Label */ ;
          _n___3 = 1;
          _delta___3 = width - _n___3;
          if (_delta___3 > 0) {
            tmp___12 = _delta___3;
          } else {
            tmp___12 = 0;
          }
          _incr___3 = _n___3 + tmp___12;
          if ((size_t )_incr___3 >= maxsize - i) {
            return ((size_t )0);
          }
          if (p) {
            if (digits == 0) {
              if (_delta___3 > 0) {
                if (pad == 48) {
                  {
                  while (1) {
                    while_continue___31: /* CIL Label */ ;
                    _i___7 = (size_t )0;
                    {
                    while (1) {
                      while_continue___32: /* CIL Label */ ;

                      if (! (_i___7 < (size_t )_delta___3)) {
                        goto while_break___26;
                      }
                      {
                      fputc('0', p);
                      _i___7 ++;
                      }
                    }
                    while_break___107: /* CIL Label */ ;
                    }
                    while_break___26: ;
                    goto while_break___25;
                  }
                  while_break___106: /* CIL Label */ ;
                  }
                  while_break___25: ;
                } else {
                  {
                  while (1) {
                    while_continue___33: /* CIL Label */ ;
                    _i___8 = (size_t )0;
                    {
                    while (1) {
                      while_continue___34: /* CIL Label */ ;

                      if (! (_i___8 < (size_t )_delta___3)) {
                        goto while_break___28;
                      }
                      {
                      fputc(' ', p);
                      _i___8 ++;
                      }
                    }
                    while_break___109: /* CIL Label */ ;
                    }
                    while_break___28: ;
                    goto while_break___27;
                  }
                  while_break___108: /* CIL Label */ ;
                  }
                  while_break___27: ;
                }
              }
            }
            {
            fputc((int )sign_char, p);
            }
          }
          i += (size_t )_incr___3;
          goto while_break___24;
        }
        while_break___105: /* CIL Label */ ;
        }
        while_break___24: ;
      }
    } else {
      padding = (int )(((long )digits - ((buf___0 + sizeof(buf___0) / sizeof(buf___0[0])) - bufp)) - (long )(! (! sign_char)));
      if (padding > 0) {
        if (pad == 95) {
          if ((size_t )padding >= maxsize - i) {
            return ((size_t )0);
          }
          if (p) {
            {
            while (1) {
              while_continue___35: /* CIL Label */ ;
              _i___9 = (size_t )0;
              {
              while (1) {
                while_continue___36: /* CIL Label */ ;

                if (! (_i___9 < (size_t )padding)) {
                  goto while_break___30;
                }
                {
                fputc(' ', p);
                _i___9 ++;
                }
              }
              while_break___111: /* CIL Label */ ;
              }
              while_break___30: ;
              goto while_break___29;
            }
            while_break___110: /* CIL Label */ ;
            }
            while_break___29: ;
          }
          i += (size_t )padding;
          if (width > padding) {
            width -= padding;
          } else {
            width = 0;
          }
          if (sign_char) {
            {
            while (1) {
              while_continue___37: /* CIL Label */ ;
              _n___4 = 1;
              _delta___4 = width - _n___4;
              if (_delta___4 > 0) {
                tmp___13 = _delta___4;
              } else {
                tmp___13 = 0;
              }
              _incr___4 = _n___4 + tmp___13;
              if ((size_t )_incr___4 >= maxsize - i) {
                return ((size_t )0);
              }
              if (p) {
                if (digits == 0) {
                  if (_delta___4 > 0) {
                    if (pad == 48) {
                      {
                      while (1) {
                        while_continue___38: /* CIL Label */ ;
                        _i___10 = (size_t )0;
                        {
                        while (1) {
                          while_continue___39: /* CIL Label */ ;

                          if (! (_i___10 < (size_t )_delta___4)) {
                            goto while_break___33;
                          }
                          {
                          fputc('0', p);
                          _i___10 ++;
                          }
                        }
                        while_break___114: /* CIL Label */ ;
                        }
                        while_break___33: ;
                        goto while_break___32;
                      }
                      while_break___113: /* CIL Label */ ;
                      }
                      while_break___32: ;
                    } else {
                      {
                      while (1) {
                        while_continue___40: /* CIL Label */ ;
                        _i___11 = (size_t )0;
                        {
                        while (1) {
                          while_continue___41: /* CIL Label */ ;

                          if (! (_i___11 < (size_t )_delta___4)) {
                            goto while_break___35;
                          }
                          {
                          fputc(' ', p);
                          _i___11 ++;
                          }
                        }
                        while_break___116: /* CIL Label */ ;
                        }
                        while_break___35: ;
                        goto while_break___34;
                      }
                      while_break___115: /* CIL Label */ ;
                      }
                      while_break___34: ;
                    }
                  }
                }
                {
                fputc((int )sign_char, p);
                }
              }
              i += (size_t )_incr___4;
              goto while_break___31;
            }
            while_break___112: /* CIL Label */ ;
            }
            while_break___31: ;
          }
        } else {
          if ((size_t )digits >= maxsize - i) {
            return ((size_t )0);
          }
          if (sign_char) {
            {
            while (1) {
              while_continue___42: /* CIL Label */ ;
              _n___5 = 1;
              _delta___5 = width - _n___5;
              if (_delta___5 > 0) {
                tmp___14 = _delta___5;
              } else {
                tmp___14 = 0;
              }
              _incr___5 = _n___5 + tmp___14;
              if ((size_t )_incr___5 >= maxsize - i) {
                return ((size_t )0);
              }
              if (p) {
                if (digits == 0) {
                  if (_delta___5 > 0) {
                    if (pad == 48) {
                      {
                      while (1) {
                        while_continue___43: /* CIL Label */ ;
                        _i___12 = (size_t )0;
                        {
                        while (1) {
                          while_continue___44: /* CIL Label */ ;

                          if (! (_i___12 < (size_t )_delta___5)) {
                            goto while_break___38;
                          }
                          {
                          fputc('0', p);
                          _i___12 ++;
                          }
                        }
                        while_break___119: /* CIL Label */ ;
                        }
                        while_break___38: ;
                        goto while_break___37;
                      }
                      while_break___118: /* CIL Label */ ;
                      }
                      while_break___37: ;
                    } else {
                      {
                      while (1) {
                        while_continue___45: /* CIL Label */ ;
                        _i___13 = (size_t )0;
                        {
                        while (1) {
                          while_continue___46: /* CIL Label */ ;

                          if (! (_i___13 < (size_t )_delta___5)) {
                            goto while_break___40;
                          }
                          {
                          fputc(' ', p);
                          _i___13 ++;
                          }
                        }
                        while_break___121: /* CIL Label */ ;
                        }
                        while_break___40: ;
                        goto while_break___39;
                      }
                      while_break___120: /* CIL Label */ ;
                      }
                      while_break___39: ;
                    }
                  }
                }
                {
                fputc((int )sign_char, p);
                }
              }
              i += (size_t )_incr___5;
              goto while_break___36;
            }
            while_break___117: /* CIL Label */ ;
            }
            while_break___36: ;
          }
          if (p) {
            {
            while (1) {
              while_continue___47: /* CIL Label */ ;
              _i___14 = (size_t )0;
              {
              while (1) {
                while_continue___48: /* CIL Label */ ;

                if (! (_i___14 < (size_t )padding)) {
                  goto while_break___42;
                }
                {
                fputc('0', p);
                _i___14 ++;
                }
              }
              while_break___123: /* CIL Label */ ;
              }
              while_break___42: ;
              goto while_break___41;
            }
            while_break___122: /* CIL Label */ ;
            }
            while_break___41: ;
          }
          i += (size_t )padding;
          width = 0;
        }
      } else
      if (sign_char) {
        {
        while (1) {
          while_continue___49: /* CIL Label */ ;
          _n___6 = 1;
          _delta___6 = width - _n___6;
          if (_delta___6 > 0) {
            tmp___15 = _delta___6;
          } else {
            tmp___15 = 0;
          }
          _incr___6 = _n___6 + tmp___15;
          if ((size_t )_incr___6 >= maxsize - i) {
            return ((size_t )0);
          }
          if (p) {
            if (digits == 0) {
              if (_delta___6 > 0) {
                if (pad == 48) {
                  {
                  while (1) {
                    while_continue___50: /* CIL Label */ ;
                    _i___15 = (size_t )0;
                    {
                    while (1) {
                      while_continue___51: /* CIL Label */ ;

                      if (! (_i___15 < (size_t )_delta___6)) {
                        goto while_break___45;
                      }
                      {
                      fputc('0', p);
                      _i___15 ++;
                      }
                    }
                    while_break___126: /* CIL Label */ ;
                    }
                    while_break___45: ;
                    goto while_break___44;
                  }
                  while_break___125: /* CIL Label */ ;
                  }
                  while_break___44: ;
                } else {
                  {
                  while (1) {
                    while_continue___52: /* CIL Label */ ;
                    _i___16 = (size_t )0;
                    {
                    while (1) {
                      while_continue___53: /* CIL Label */ ;

                      if (! (_i___16 < (size_t )_delta___6)) {
                        goto while_break___47;
                      }
                      {
                      fputc(' ', p);
                      _i___16 ++;
                      }
                    }
                    while_break___128: /* CIL Label */ ;
                    }
                    while_break___47: ;
                    goto while_break___46;
                  }
                  while_break___127: /* CIL Label */ ;
                  }
                  while_break___46: ;
                }
              }
            }
            {
            fputc((int )sign_char, p);
            }
          }
          i += (size_t )_incr___6;
          goto while_break___43;
        }
        while_break___124: /* CIL Label */ ;
        }
        while_break___43: ;
      }
    }
    {
    while (1) {
      while_continue___54: /* CIL Label */ ;
      _n___7 = (int )((buf___0 + sizeof(buf___0) / sizeof(buf___0[0])) - bufp);
      _delta___7 = width - _n___7;
      if (_delta___7 > 0) {
        tmp___16 = _delta___7;
      } else {
        tmp___16 = 0;
      }
      _incr___7 = _n___7 + tmp___16;
      if ((size_t )_incr___7 >= maxsize - i) {
        return ((size_t )0);
      }
      if (p) {
        if (digits == 0) {
          if (_delta___7 > 0) {
            if (pad == 48) {
              {
              while (1) {
                while_continue___55: /* CIL Label */ ;
                _i___17 = (size_t )0;
                {
                while (1) {
                  while_continue___56: /* CIL Label */ ;

                  if (! (_i___17 < (size_t )_delta___7)) {
                    goto while_break___50;
                  }
                  {
                  fputc('0', p);
                  _i___17 ++;
                  }
                }
                while_break___131: /* CIL Label */ ;
                }
                while_break___50: ;
                goto while_break___49;
              }
              while_break___130: /* CIL Label */ ;
              }
              while_break___49: ;
            } else {
              {
              while (1) {
                while_continue___57: /* CIL Label */ ;
                _i___18 = (size_t )0;
                {
                while (1) {
                  while_continue___58: /* CIL Label */ ;

                  if (! (_i___18 < (size_t )_delta___7)) {
                    goto while_break___52;
                  }
                  {
                  fputc(' ', p);
                  _i___18 ++;
                  }
                }
                while_break___133: /* CIL Label */ ;
                }
                while_break___52: ;
                goto while_break___51;
              }
              while_break___132: /* CIL Label */ ;
              }
              while_break___51: ;
            }
          }
        }
        {
        while (1) {
          while_continue___59: /* CIL Label */ ;

          if (to_lowcase) {
            {
            fwrite_lowcase(p, (char const   *)bufp, (size_t )_n___7);
            }
          } else
          if (to_uppcase) {
            {
            fwrite_uppcase(p, (char const   *)bufp, (size_t )_n___7);
            }
          } else {
            {
            tmp___17 = fwrite((void const   */* __restrict  */)((void const   *)bufp),
                              (size_t )_n___7, (size_t )1, (FILE */* __restrict  */)p);
            ignore_value((int )tmp___17);
            }
          }
          goto while_break___53;
        }
        while_break___134: /* CIL Label */ ;
        }
        while_break___53: ;
      }
      i += (size_t )_incr___7;
      goto while_break___48;
    }
    while_break___129: /* CIL Label */ ;
    }
    while_break___48: ;
    goto switch_break___1;
    case_70: 
    if (modifier != 0) {
      goto bad_format;
    }
    subfmt = "%Y-%m-%d";
    goto subformat;
    case_72: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = (int )tp->tm_hour;
    goto do_number;
    case_73: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = hour12;
    goto do_number;
    case_107: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = (int )tp->tm_hour;
    goto do_number_spacepad;
    case_108: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = hour12;
    goto do_number_spacepad;
    case_106: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 3;
    negative_number = (_Bool )(tp->tm_yday < -1);
    u_number_value = (unsigned int )tp->tm_yday + 1U;
    goto do_signed_number;
    case_77: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = (int )tp->tm_min;
    goto do_number;
    case_109: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    negative_number = (_Bool )(tp->tm_mon < -1);
    u_number_value = (unsigned int )tp->tm_mon + 1U;
    goto do_signed_number;
    case_78: 
    if (modifier == 69) {
      goto bad_format;
    }
    number_value = ns;
    if (width == -1) {
      width = 9;
    } else {
      j = width;
      {
      while (1) {
        while_continue___60: /* CIL Label */ ;

        if (! (j < 9)) {
          goto while_break___54;
        }
        number_value /= 10;
        j ++;
      }
      while_break___135: /* CIL Label */ ;
      }
      while_break___54: ;
    }
    digits = width;
    number_value = number_value;
    goto do_number;
    case_110: 
    {
    while (1) {
      while_continue___61: /* CIL Label */ ;
      _n___8 = 1;
      _delta___8 = width - _n___8;
      if (_delta___8 > 0) {
        tmp___18 = _delta___8;
      } else {
        tmp___18 = 0;
      }
      _incr___8 = _n___8 + tmp___18;
      if ((size_t )_incr___8 >= maxsize - i) {
        return ((size_t )0);
      }
      if (p) {
        if (digits == 0) {
          if (_delta___8 > 0) {
            if (pad == 48) {
              {
              while (1) {
                while_continue___62: /* CIL Label */ ;
                _i___19 = (size_t )0;
                {
                while (1) {
                  while_continue___63: /* CIL Label */ ;

                  if (! (_i___19 < (size_t )_delta___8)) {
                    goto while_break___57;
                  }
                  {
                  fputc('0', p);
                  _i___19 ++;
                  }
                }
                while_break___138: /* CIL Label */ ;
                }
                while_break___57: ;
                goto while_break___56;
              }
              while_break___137: /* CIL Label */ ;
              }
              while_break___56: ;
            } else {
              {
              while (1) {
                while_continue___64: /* CIL Label */ ;
                _i___20 = (size_t )0;
                {
                while (1) {
                  while_continue___65: /* CIL Label */ ;

                  if (! (_i___20 < (size_t )_delta___8)) {
                    goto while_break___59;
                  }
                  {
                  fputc(' ', p);
                  _i___20 ++;
                  }
                }
                while_break___140: /* CIL Label */ ;
                }
                while_break___59: ;
                goto while_break___58;
              }
              while_break___139: /* CIL Label */ ;
              }
              while_break___58: ;
            }
          }
        }
        {
        fputc('\n', p);
        }
      }
      i += (size_t )_incr___8;
      goto while_break___55;
    }
    while_break___136: /* CIL Label */ ;
    }
    while_break___55: ;
    goto switch_break___1;
    case_80: 
    to_lowcase = (_Bool)1;
    format_char = 'p';
    case_112: 
    if (change_case) {
      to_uppcase = (_Bool)0;
      to_lowcase = (_Bool)1;
    }
    goto underlying_strftime;
    case_82: 
    subfmt = "%H:%M";
    goto subformat;
    case_114: 
    goto underlying_strftime;
    case_83: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = (int )tp->tm_sec;
    goto do_number;
    case_115: 
    {
    ltm = (struct tm )*tp;
    t = mktime(& ltm);
    bufp = buf___0 + sizeof(buf___0) / sizeof(buf___0[0]);
    negative_number = (_Bool )(t < 0L);
    }
    {
    while (1) {
      while_continue___66: /* CIL Label */ ;
      d = (int )(t % 10L);
      t /= 10L;
      bufp --;
      if (negative_number) {
        tmp___19 = - d;
      } else {
        tmp___19 = d;
      }
      *bufp = (char )(tmp___19 + 48);
      if (! (t != 0L)) {
        goto while_break___60;
      }
    }
    while_break___141: /* CIL Label */ ;
    }
    while_break___60: 
    digits = 1;
    always_output_a_sign = (_Bool)0;
    goto do_number_sign_and_padding;
    case_88: 
    if (modifier == 79) {
      goto bad_format;
    }
    goto underlying_strftime;
    case_84: 
    subfmt = "%H:%M:%S";
    goto subformat;
    case_116: 
    {
    while (1) {
      while_continue___67: /* CIL Label */ ;
      _n___9 = 1;
      _delta___9 = width - _n___9;
      if (_delta___9 > 0) {
        tmp___20 = _delta___9;
      } else {
        tmp___20 = 0;
      }
      _incr___9 = _n___9 + tmp___20;
      if ((size_t )_incr___9 >= maxsize - i) {
        return ((size_t )0);
      }
      if (p) {
        if (digits == 0) {
          if (_delta___9 > 0) {
            if (pad == 48) {
              {
              while (1) {
                while_continue___68: /* CIL Label */ ;
                _i___21 = (size_t )0;
                {
                while (1) {
                  while_continue___69: /* CIL Label */ ;

                  if (! (_i___21 < (size_t )_delta___9)) {
                    goto while_break___63;
                  }
                  {
                  fputc('0', p);
                  _i___21 ++;
                  }
                }
                while_break___144: /* CIL Label */ ;
                }
                while_break___63: ;
                goto while_break___62;
              }
              while_break___143: /* CIL Label */ ;
              }
              while_break___62: ;
            } else {
              {
              while (1) {
                while_continue___70: /* CIL Label */ ;
                _i___22 = (size_t )0;
                {
                while (1) {
                  while_continue___71: /* CIL Label */ ;

                  if (! (_i___22 < (size_t )_delta___9)) {
                    goto while_break___65;
                  }
                  {
                  fputc(' ', p);
                  _i___22 ++;
                  }
                }
                while_break___146: /* CIL Label */ ;
                }
                while_break___65: ;
                goto while_break___64;
              }
              while_break___145: /* CIL Label */ ;
              }
              while_break___64: ;
            }
          }
        }
        {
        fputc('\t', p);
        }
      }
      i += (size_t )_incr___9;
      goto while_break___61;
    }
    while_break___142: /* CIL Label */ ;
    }
    while_break___61: ;
    goto switch_break___1;
    case_117: 
    digits = 1;
    number_value = (int )(((tp->tm_wday - 1) + 7) % 7 + 1);
    goto do_number;
    case_85: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = (int )(((tp->tm_yday - tp->tm_wday) + 7) / 7);
    goto do_number;
    case_86: 
    if (modifier == 69) {
      goto bad_format;
    }
    if (tp->tm_year < 0) {
      tmp___21 = 300;
    } else {
      tmp___21 = -100;
    }
    {
    year___0 = (int )(tp->tm_year + (int const   )tmp___21);
    year_adjust = 0;
    tmp___22 = iso_week_days((int )tp->tm_yday, (int )tp->tm_wday);
    days = tmp___22;
    }
    if (days < 0) {
      year_adjust = -1;
      if ((year___0 - 1) % 4 == 0) {
        if ((year___0 - 1) % 100 != 0) {
          tmp___23 = 1;
        } else
        if ((year___0 - 1) % 400 == 0) {
          tmp___23 = 1;
        } else {
          tmp___23 = 0;
        }
      } else {
        tmp___23 = 0;
      }
      {
      days = iso_week_days((int )(tp->tm_yday + (int const   )(365 + tmp___23)), (int )tp->tm_wday);
      }
    } else {
      if (year___0 % 4 == 0) {
        if (year___0 % 100 != 0) {
          tmp___24 = 1;
        } else
        if (year___0 % 400 == 0) {
          tmp___24 = 1;
        } else {
          tmp___24 = 0;
        }
      } else {
        tmp___24 = 0;
      }
      {
      tmp___25 = iso_week_days((int )(tp->tm_yday - (int const   )(365 + tmp___24)),
                               (int )tp->tm_wday);
      d___0 = tmp___25;
      }
      if (0 <= d___0) {
        year_adjust = 1;
        days = d___0;
      }
    }
    if ((int const   )*f == 103) {
      goto case_103___0;
    }
    if ((int const   )*f == 71) {
      goto case_71___0;
    }
    goto switch_default___1;
    case_103___0: 
    yy = (int )((tp->tm_year % 100 + (int const   )year_adjust) % 100);
    digits = 2;
    if (0 <= yy) {
      number_value = yy;
    } else {
      if (tp->tm_year < (int const   )(-1900 - year_adjust)) {
        tmp___26 = - yy;
      } else {
        tmp___26 = yy + 100;
      }
      number_value = tmp___26;
    }
    goto do_number;
    case_71___0: 
    digits = 4;
    negative_number = (_Bool )(tp->tm_year < (int const   )(-1900 - year_adjust));
    u_number_value = ((unsigned int )tp->tm_year + 1900U) + (unsigned int )year_adjust;
    goto do_signed_number;
    switch_default___1: 
    digits = 2;
    number_value = days / 7 + 1;
    goto do_number;

    case_87: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 2;
    number_value = (int )(((tp->tm_yday - ((tp->tm_wday - 1) + 7) % 7) + 7) / 7);
    goto do_number;
    case_119: 
    if (modifier == 69) {
      goto bad_format;
    }
    digits = 1;
    number_value = (int )tp->tm_wday;
    goto do_number;
    case_89: 
    if (modifier == 69) {
      goto underlying_strftime;
    }
    if (modifier == 79) {
      goto bad_format;
    } else {
      digits = 4;
    }
    negative_number = (_Bool )(tp->tm_year < -1900);
    u_number_value = (unsigned int )tp->tm_year + 1900U;
    goto do_signed_number;
    case_121: 
    if (modifier == 69) {
      goto underlying_strftime;
    }
    yy___0 = (int )(tp->tm_year % 100);
    if (yy___0 < 0) {
      if (tp->tm_year < -1900) {
        yy___0 = - yy___0;
      } else {
        yy___0 += 100;
      }
    }
    digits = 2;
    number_value = yy___0;
    goto do_number;
    case_90: 
    if (change_case) {
      to_uppcase = (_Bool)0;
      to_lowcase = (_Bool)1;
    }
    if (! zone) {
      zone = "";
    }
    {
    while (1) {
      while_continue___72: /* CIL Label */ ;
      {
      tmp___27 = strlen(zone);
      _n___10 = (int )tmp___27;
      _delta___10 = width - _n___10;
      }
      if (_delta___10 > 0) {
        tmp___28 = _delta___10;
      } else {
        tmp___28 = 0;
      }
      _incr___10 = _n___10 + tmp___28;
      if ((size_t )_incr___10 >= maxsize - i) {
        return ((size_t )0);
      }
      if (p) {
        if (digits == 0) {
          if (_delta___10 > 0) {
            if (pad == 48) {
              {
              while (1) {
                while_continue___73: /* CIL Label */ ;
                _i___23 = (size_t )0;
                {
                while (1) {
                  while_continue___74: /* CIL Label */ ;

                  if (! (_i___23 < (size_t )_delta___10)) {
                    goto while_break___68;
                  }
                  {
                  fputc('0', p);
                  _i___23 ++;
                  }
                }
                while_break___149: /* CIL Label */ ;
                }
                while_break___68: ;
                goto while_break___67;
              }
              while_break___148: /* CIL Label */ ;
              }
              while_break___67: ;
            } else {
              {
              while (1) {
                while_continue___75: /* CIL Label */ ;
                _i___24 = (size_t )0;
                {
                while (1) {
                  while_continue___76: /* CIL Label */ ;

                  if (! (_i___24 < (size_t )_delta___10)) {
                    goto while_break___70;
                  }
                  {
                  fputc(' ', p);
                  _i___24 ++;
                  }
                }
                while_break___151: /* CIL Label */ ;
                }
                while_break___70: ;
                goto while_break___69;
              }
              while_break___150: /* CIL Label */ ;
              }
              while_break___69: ;
            }
          }
        }
        {
        while (1) {
          while_continue___77: /* CIL Label */ ;

          if (to_lowcase) {
            {
            fwrite_lowcase(p, zone, (size_t )_n___10);
            }
          } else
          if (to_uppcase) {
            {
            fwrite_uppcase(p, zone, (size_t )_n___10);
            }
          } else {
            {
            tmp___29 = fwrite((void const   */* __restrict  */)((void const   *)zone),
                              (size_t )_n___10, (size_t )1, (FILE */* __restrict  */)p);
            ignore_value((int )tmp___29);
            }
          }
          goto while_break___71;
        }
        while_break___152: /* CIL Label */ ;
        }
        while_break___71: ;
      }
      i += (size_t )_incr___10;
      goto while_break___66;
    }
    while_break___147: /* CIL Label */ ;
    }
    while_break___66: ;
    goto switch_break___1;
    case_58: 
    colons = (size_t )1;
    {
    while (1) {
      while_continue___78: /* CIL Label */ ;

      if (! ((int const   )*(f + colons) == 58)) {
        goto while_break___72;
      }
      goto __Cont___0;
      __Cont___0: 
      colons ++;
    }
    while_break___153: /* CIL Label */ ;
    }
    while_break___72: ;
    if ((int const   )*(f + colons) != 122) {
      goto bad_format;
    }
    f += colons;
    goto do_z_conversion;
    case_122: 
    colons = (size_t )0;
    do_z_conversion: 
    if (tp->tm_isdst < 0) {
      goto switch_break___1;
    }
    diff = (int )tp->tm_gmtoff;
    hour_diff = (diff / 60) / 60;
    min_diff = (diff / 60) % 60;
    sec_diff = diff % 60;
    if (colons == 0UL) {
      goto case_0;
    }
    if (colons == 1UL) {
      goto tz_hh_mm;
    }
    if (colons == 2UL) {
      goto tz_hh_mm_ss;
    }
    if (colons == 3UL) {
      goto case_3;
    }
    goto switch_default___2;
    case_0: 
    digits = 5;
    negative_number = (_Bool )(diff < 0);
    tz_colon_mask = 0;
    u_number_value = (unsigned int )(hour_diff * 100 + min_diff);
    goto do_tz_offset;
    tz_hh_mm: 
    digits = 6;
    negative_number = (_Bool )(diff < 0);
    tz_colon_mask = 4;
    u_number_value = (unsigned int )(hour_diff * 100 + min_diff);
    goto do_tz_offset;
    tz_hh_mm_ss: 
    digits = 9;
    negative_number = (_Bool )(diff < 0);
    tz_colon_mask = 20;
    u_number_value = (unsigned int )((hour_diff * 10000 + min_diff * 100) + sec_diff);
    goto do_tz_offset;
    case_3: 
    if (sec_diff != 0) {
      goto tz_hh_mm_ss;
    }
    if (min_diff != 0) {
      goto tz_hh_mm;
    }
    digits = 3;
    negative_number = (_Bool )(diff < 0);
    tz_colon_mask = 0;
    u_number_value = (unsigned int )hour_diff;
    goto do_tz_offset;
    switch_default___2: 
    goto bad_format;

    case_0___0: 
    f --;
    bad_format: 
    flen = 1;
    {
    while (1) {
      while_continue___79: /* CIL Label */ ;

      if (! ((int const   )*(f + (1 - flen)) != 37)) {
        goto while_break___73;
      }
      goto __Cont___1;
      __Cont___1: 
      flen ++;
    }
    while_break___154: /* CIL Label */ ;
    }
    while_break___73: ;
    {
    while (1) {
      while_continue___80: /* CIL Label */ ;
      _n___11 = flen;
      _delta___11 = width - _n___11;
      if (_delta___11 > 0) {
        tmp___30 = _delta___11;
      } else {
        tmp___30 = 0;
      }
      _incr___11 = _n___11 + tmp___30;
      if ((size_t )_incr___11 >= maxsize - i) {
        return ((size_t )0);
      }
      if (p) {
        if (digits == 0) {
          if (_delta___11 > 0) {
            if (pad == 48) {
              {
              while (1) {
                while_continue___81: /* CIL Label */ ;
                _i___25 = (size_t )0;
                {
                while (1) {
                  while_continue___82: /* CIL Label */ ;

                  if (! (_i___25 < (size_t )_delta___11)) {
                    goto while_break___76;
                  }
                  {
                  fputc('0', p);
                  _i___25 ++;
                  }
                }
                while_break___157: /* CIL Label */ ;
                }
                while_break___76: ;
                goto while_break___75;
              }
              while_break___156: /* CIL Label */ ;
              }
              while_break___75: ;
            } else {
              {
              while (1) {
                while_continue___83: /* CIL Label */ ;
                _i___26 = (size_t )0;
                {
                while (1) {
                  while_continue___84: /* CIL Label */ ;

                  if (! (_i___26 < (size_t )_delta___11)) {
                    goto while_break___78;
                  }
                  {
                  fputc(' ', p);
                  _i___26 ++;
                  }
                }
                while_break___159: /* CIL Label */ ;
                }
                while_break___78: ;
                goto while_break___77;
              }
              while_break___158: /* CIL Label */ ;
              }
              while_break___77: ;
            }
          }
        }
        {
        while (1) {
          while_continue___85: /* CIL Label */ ;

          if (to_lowcase) {
            {
            fwrite_lowcase(p, f + (1 - flen), (size_t )_n___11);
            }
          } else
          if (to_uppcase) {
            {
            fwrite_uppcase(p, f + (1 - flen), (size_t )_n___11);
            }
          } else {
            {
            tmp___31 = fwrite((void const   */* __restrict  */)((void const   *)(f + (1 - flen))),
                              (size_t )_n___11, (size_t )1, (FILE */* __restrict  */)p);
            ignore_value((int )tmp___31);
            }
          }
          goto while_break___79;
        }
        while_break___160: /* CIL Label */ ;
        }
        while_break___79: ;
      }
      i += (size_t )_incr___11;
      goto while_break___74;
    }
    while_break___155: /* CIL Label */ ;
    }
    while_break___74: ;
    goto switch_break___1;
    switch_break___1: ;
    __Cont: 
    f ++;
  }
  while_break___80: /* CIL Label */ ;
  }
  while_break: ;
  return (i);
}
}
size_t fprintftime(FILE *s , char const   *format , struct tm  const  *tp , int ut ,
                   int ns ) 
{ 
  size_t tmp ;

  {
  {
  tmp = strftime_case_((_Bool)0, s, format, tp, ut, ns);
  }
  return (tmp);
}
}
extern FILE *freopen(char const   * __restrict  __filename , char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
static _Bool protect_fd(int fd ) 
{ 
  int value ;
  int tmp ;
  int *tmp___0 ;

  {
  {
  tmp = open("/dev/null", 0);
  value = tmp;
  }
  if (value != fd) {
    if (0 <= value) {
      {
      close(value);
      tmp___0 = __errno_location();
      *tmp___0 = 9;
      }
    }
    return ((_Bool)0);
  }
  return ((_Bool)1);
}
}
FILE *freopen_safer(char const   *name , char const   *mode , FILE *f ) 
{ 
  _Bool protect_in ;
  _Bool protect_out ;
  _Bool protect_err ;
  int saved_errno ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  _Bool tmp___3 ;
  _Bool tmp___4 ;
  _Bool tmp___5 ;
  int *tmp___6 ;
  int *tmp___7 ;

  {
  {
  protect_in = (_Bool)0;
  protect_out = (_Bool)0;
  protect_err = (_Bool)0;
  tmp = fileno(f);
  }
  if (tmp == 2) {
    goto case_2;
  }
  if (tmp == 1) {
    goto case_1;
  }
  if (tmp == 0) {
    goto case_0;
  }
  goto switch_default;
  switch_default: 
  {
  tmp___0 = dup2(2, 2);
  }
  if (tmp___0 != 2) {
    protect_err = (_Bool)1;
  }
  case_2: 
  {
  tmp___1 = dup2(1, 1);
  }
  if (tmp___1 != 1) {
    protect_out = (_Bool)1;
  }
  case_1: 
  {
  tmp___2 = dup2(0, 0);
  }
  if (tmp___2 != 0) {
    protect_in = (_Bool)1;
  }
  case_0: 
  goto switch_break;
  switch_break: ;
  if (protect_in) {
    {
    tmp___5 = protect_fd(0);
    }
    if (tmp___5) {
      goto _L___0;
    } else {
      f = (FILE *)((void *)0);
    }
  } else
  _L___0: 
  if (protect_out) {
    {
    tmp___4 = protect_fd(1);
    }
    if (tmp___4) {
      goto _L;
    } else {
      f = (FILE *)((void *)0);
    }
  } else
  _L: 
  if (protect_err) {
    {
    tmp___3 = protect_fd(2);
    }
    if (tmp___3) {
      {
      f = freopen((char const   */* __restrict  */)name, (char const   */* __restrict  */)mode,
                  (FILE */* __restrict  */)f);
      }
    } else {
      f = (FILE *)((void *)0);
    }
  } else {
    {
    f = freopen((char const   */* __restrict  */)name, (char const   */* __restrict  */)mode,
                (FILE */* __restrict  */)f);
    }
  }
  {
  tmp___6 = __errno_location();
  saved_errno = *tmp___6;
  }
  if (protect_err) {
    {
    close(2);
    }
  }
  if (protect_out) {
    {
    close(1);
    }
  }
  if (protect_in) {
    {
    close(0);
    }
  }
  if (! f) {
    {
    tmp___7 = __errno_location();
    *tmp___7 = saved_errno;
    }
  }
  return (f);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3), __leaf__)) fstatat)(int __fd ,
                                                                                                char const   * __restrict  __file ,
                                                                                                struct stat * __restrict  __buf ,
                                                                                                int __flag ) ;
void i_ring_init(I_ring *ir , int default_val ) ;
int i_ring_push(I_ring *ir , int val ) ;
int i_ring_pop(I_ring *ir ) ;
_Bool i_ring_empty(I_ring const   *ir ) ;
 __attribute__((__nothrow__)) FTS *( __attribute__((__warn_unused_result__, __leaf__)) fts_open)(char * const  *argv ,
                                                                                                 int options ,
                                                                                                 int (*compar)(FTSENT const   ** ,
                                                                                                               FTSENT const   ** ) ) ;
extern void ( __attribute__((__nonnull__(1,4))) qsort)(void *__base , size_t __nmemb ,
                                                       size_t __size , int (*__compar)(void const   * ,
                                                                                       void const   * ) ) ;
int open_safer(char const   *file , int flags  , ...) ;
int openat_safer(int fd , char const   *file , int flags  , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) dirfd)(DIR *__dirp ) ;
static FTSENT *fts_alloc(FTS *sp , char const   *name , size_t namelen ) ;
static FTSENT *fts_build(FTS *sp , int type ) ;
static void fts_lfree(FTSENT *head ) ;
static void fts_load(FTS *sp , FTSENT *p ) ;
static size_t fts_maxarglen(char * const  *argv ) ;
static void fts_padjust(FTS *sp , FTSENT *head ) ;
static _Bool fts_palloc(FTS *sp , size_t more ) ;
static FTSENT *fts_sort(FTS *sp , FTSENT *head , size_t nitems ) ;
static unsigned short fts_stat(FTS *sp , FTSENT *p , _Bool follow ) ;
static int fts_safe_changedir(FTS *sp , FTSENT *p , int fd , char const   *dir ) ;
void *hash_delete(Hash_table *table___0 , void const   *entry ) ;
static _Bool AD_compare(void const   *x , void const   *y ) 
{ 
  struct Active_dir  const  *ax ;
  struct Active_dir  const  *ay ;
  int tmp ;

  {
  ax = (struct Active_dir  const  *)x;
  ay = (struct Active_dir  const  *)y;
  if (ax->ino == ay->ino) {
    if (ax->dev == ay->dev) {
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
static size_t AD_hash(void const   *x , size_t table_size ) 
{ 
  struct Active_dir  const  *ax ;

  {
  ax = (struct Active_dir  const  *)x;
  return ((uintmax_t )ax->ino % table_size);
}
}
static _Bool setup_dir(FTS *fts ) 
{ 
  void *tmp ;

  {
  if (fts->fts_options & 258) {
    {
    fts->fts_cycle.ht = hash_initialize((size_t )31, (Hash_tuning const   *)((void *)0),
                                        & AD_hash, & AD_compare, (void (*)(void * ))(& free));
    }
    if (! fts->fts_cycle.ht) {
      return ((_Bool)0);
    }
  } else {
    {
    tmp = malloc(sizeof(*(fts->fts_cycle.state)));
    fts->fts_cycle.state = (struct cycle_check_state *)tmp;
    }
    if (! fts->fts_cycle.state) {
      return ((_Bool)0);
    }
    {
    cycle_check_init(fts->fts_cycle.state);
    }
  }
  return ((_Bool)1);
}
}
static _Bool enter_dir(FTS *fts , FTSENT *ent ) 
{ 
  struct stat  const  *st ;
  struct Active_dir *ad ;
  void *tmp ;
  struct Active_dir *ad_from_table ;
  void *tmp___0 ;
  _Bool tmp___1 ;

  {
  if (fts->fts_options & 258) {
    {
    st = (struct stat  const  *)(ent->fts_statp);
    tmp = malloc(sizeof(*ad));
    ad = (struct Active_dir *)tmp;
    }
    if (! ad) {
      return ((_Bool)0);
    }
    {
    ad->dev = (dev_t )st->st_dev;
    ad->ino = (ino_t )st->st_ino;
    ad->fts_ent = ent;
    tmp___0 = hash_insert(fts->fts_cycle.ht, (void const   *)ad);
    ad_from_table = (struct Active_dir *)tmp___0;
    }
    if ((unsigned long )ad_from_table != (unsigned long )ad) {
      {
      free((void *)ad);
      }
      if (! ad_from_table) {
        return ((_Bool)0);
      }
      ent->fts_cycle = ad_from_table->fts_ent;
      ent->fts_info = (unsigned short)2;
    }
  } else {
    {
    tmp___1 = cycle_check(fts->fts_cycle.state, (struct stat  const  *)(ent->fts_statp));
    }
    if (tmp___1) {
      ent->fts_cycle = ent;
      ent->fts_info = (unsigned short)2;
    }
  }
  return ((_Bool)1);
}
}
static void leave_dir(FTS *fts , FTSENT *ent ) 
{ 
  struct stat  const  *st ;
  struct Active_dir obj ;
  void *found ;
  FTSENT *parent ;

  {
  st = (struct stat  const  *)(ent->fts_statp);
  if (fts->fts_options & 258) {
    {
    obj.dev = (dev_t )st->st_dev;
    obj.ino = (ino_t )st->st_ino;
    found = hash_delete(fts->fts_cycle.ht, (void const   *)(& obj));
    }
    if (! found) {
      {
      abort();
      }
    }
    {
    free(found);
    }
  } else {
    parent = ent->fts_parent;
    if ((unsigned long )parent != (unsigned long )((void *)0)) {
      if (0L <= parent->fts_level) {
        {
        while (1) {
          while_continue: /* CIL Label */ ;

          if ((fts->fts_cycle.state)->chdir_counter == 0UL) {
            {
            abort();
            }
          }
          if ((fts->fts_cycle.state)->dev_ino.st_ino == (ino_t )st->st_ino) {
            if ((fts->fts_cycle.state)->dev_ino.st_dev == (dev_t )st->st_dev) {
              (fts->fts_cycle.state)->dev_ino.st_dev = parent->fts_statp[0].st_dev;
              (fts->fts_cycle.state)->dev_ino.st_ino = parent->fts_statp[0].st_ino;
            }
          }
          goto while_break;
        }
        while_break___0: /* CIL Label */ ;
        }
        while_break: ;
      }
    }
  }
  return;
}
}
static void free_dir(FTS *sp ) 
{ 


  {
  if (sp->fts_options & 258) {
    if (sp->fts_cycle.ht) {
      {
      hash_free(sp->fts_cycle.ht);
      }
    }
  } else {
    {
    free((void *)sp->fts_cycle.state);
    }
  }
  return;
}
}
static void fd_ring_clear(I_ring *fd_ring ) 
{ 
  int fd ;
  int tmp ;
  _Bool tmp___0 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp___0 = i_ring_empty((I_ring const   *)fd_ring);
    }
    if (tmp___0) {
      goto while_break;
    }
    {
    tmp = i_ring_pop(fd_ring);
    fd = tmp;
    }
    if (0 <= fd) {
      {
      close(fd);
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return;
}
}
static void fts_set_stat_required(FTSENT *p , _Bool required ) 
{ 


  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((int )p->fts_info == 11)) {
      {
      abort();
      }
    }
    goto while_break;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (required) {
    p->fts_statp[0].st_size = (__off_t )2;
  } else {
    p->fts_statp[0].st_size = (__off_t )1;
  }
  return;
}
}
__inline static DIR *opendirat(int fd , char const   *dir ) 
{ 
  int new_fd ;
  int tmp ;
  DIR *dirp ;
  int saved_errno ;
  int *tmp___0 ;
  int *tmp___1 ;

  {
  {
  tmp = openat_safer(fd, dir, 67840);
  new_fd = tmp;
  }
  if (new_fd < 0) {
    return ((DIR *)((void *)0));
  }
  {
  set_cloexec_flag(new_fd, (_Bool)1);
  dirp = rpl_fdopendir(new_fd);
  }
  if ((unsigned long )dirp == (unsigned long )((void *)0)) {
    {
    tmp___0 = __errno_location();
    saved_errno = *tmp___0;
    close(new_fd);
    tmp___1 = __errno_location();
    *tmp___1 = saved_errno;
    }
  }
  return (dirp);
}
}
static void cwd_advance_fd(FTS *sp , int fd , _Bool chdir_down_one ) 
{ 
  int old ;
  int prev_fd_in_slot ;
  int tmp ;

  {
  old = sp->fts_cwd_fd;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (old != fd)) {
      if (! (old == -100)) {
        {
        abort();
        }
      }
    }
    goto while_break;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (chdir_down_one) {
    {
    tmp = i_ring_push(& sp->fts_fd_ring, old);
    prev_fd_in_slot = tmp;
    }
    if (0 <= prev_fd_in_slot) {
      {
      close(prev_fd_in_slot);
      }
    }
  } else
  if (! (sp->fts_options & 4)) {
    if (0 <= old) {
      {
      close(old);
      }
    }
  }
  sp->fts_cwd_fd = fd;
  return;
}
}
__inline static int diropen(FTS const   *sp , char const   *dir ) 
{ 
  int open_flags ;
  int tmp ;
  int fd ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  if (sp->fts_options & 16) {
    tmp = 131072;
  } else {
    tmp = 0;
  }
  open_flags = 67840 | tmp;
  if (sp->fts_options & 512) {
    {
    tmp___0 = openat_safer((int )sp->fts_cwd_fd, dir, open_flags);
    tmp___2 = tmp___0;
    }
  } else {
    {
    tmp___1 = open_safer(dir, open_flags);
    tmp___2 = tmp___1;
    }
  }
  fd = tmp___2;
  if (0 <= fd) {
    {
    set_cloexec_flag(fd, (_Bool)1);
    }
  }
  return (fd);
}
}
 __attribute__((__nothrow__)) FTS *( __attribute__((__warn_unused_result__, __leaf__)) fts_open)(char * const  *argv ,
                                                                                                 int options ,
                                                                                                 int (*compar)(FTSENT const   ** ,
                                                                                                               FTSENT const   ** ) ) ;
FTS *( __attribute__((__warn_unused_result__, __leaf__)) fts_open)(char * const  *argv ,
                                                                   int options , int (*compar)(FTSENT const   ** ,
                                                                                               FTSENT const   ** ) ) 
{ 
  register FTS *sp ;
  register FTSENT *p ;
  register FTSENT *root ;
  register size_t nitems ;
  FTSENT *parent ;
  FTSENT *tmp ;
  size_t len ;
  _Bool defer_stat ;
  int *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  void *tmp___3 ;
  size_t maxarglen ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  _Bool tmp___7 ;
  int tmp___8 ;
  int *tmp___9 ;
  struct _ftsent *tmp___10 ;
  _Bool tmp___11 ;
  int tmp___12 ;
  void *__cil_tmp29 ;
  char *__cil_tmp30 ;
  char *__cil_tmp31 ;
  char *__cil_tmp32 ;

  {
  parent = (FTSENT *)((void *)0);
  tmp = (FTSENT *)((void *)0);
  if (options & -2048) {
    {
    tmp___0 = __errno_location();
    *tmp___0 = 22;
    }
    return ((FTS *)((void *)0));
  }
  if (options & 4) {
    if (options & 512) {
      {
      tmp___1 = __errno_location();
      *tmp___1 = 22;
      }
      return ((FTS *)((void *)0));
    }
  }
  if (! (options & 18)) {
    {
    tmp___2 = __errno_location();
    *tmp___2 = 22;
    }
    return ((FTS *)((void *)0));
  }
  {
  tmp___3 = malloc(sizeof(FTS ));
  sp = (FTS *)tmp___3;
  }
  if ((unsigned long )sp == (unsigned long )((void *)0)) {
    return ((FTS *)((void *)0));
  }
  {
  memset((void *)sp, 0, sizeof(FTS ));
  sp->fts_compar = compar;
  sp->fts_options = options;
  }
  if (sp->fts_options & 2) {
    sp->fts_options |= 4;
    sp->fts_options &= -513;
  }
  {
  sp->fts_cwd_fd = -100;
  tmp___5 = fts_maxarglen(argv);
  maxarglen = tmp___5;
  }
  if (maxarglen > 4096UL) {
    tmp___6 = maxarglen;
  } else {
    tmp___6 = (size_t )4096;
  }
  {
  tmp___7 = fts_palloc(sp, tmp___6);
  }
  if (! tmp___7) {
    goto mem1;
  }
  if ((unsigned long )*argv != (unsigned long )((void *)0)) {
    {
    parent = fts_alloc(sp, "", (size_t )0);
    }
    if ((unsigned long )parent == (unsigned long )((void *)0)) {
      goto mem2;
    }
    parent->fts_level = (ptrdiff_t )-1;
  }
  if ((unsigned long )compar == (unsigned long )((void *)0)) {
    tmp___8 = 1;
  } else
  if (sp->fts_options & 1024) {
    tmp___8 = 1;
  } else {
    tmp___8 = 0;
  }
  defer_stat = (_Bool )tmp___8;
  root = (FTSENT *)((void *)0);
  nitems = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((unsigned long )*argv != (unsigned long )((void *)0))) {
      goto while_break;
    }
    {
    len = strlen((char const   *)*argv);
    }
    if (len == 0UL) {
      {
      tmp___9 = __errno_location();
      *tmp___9 = 2;
      }
      goto mem3;
    }
    {
    p = fts_alloc(sp, (char const   *)*argv, len);
    }
    if ((unsigned long )p == (unsigned long )((void *)0)) {
      goto mem3;
    }
    p->fts_level = (ptrdiff_t )0;
    p->fts_parent = parent;
    p->fts_accpath = p->fts_name;
    if (defer_stat) {
      if ((unsigned long )root != (unsigned long )((void *)0)) {
        {
        p->fts_info = (unsigned short)11;
        fts_set_stat_required(p, (_Bool)1);
        }
      } else {
        {
        p->fts_info = fts_stat(sp, p, (_Bool)0);
        }
      }
    } else {
      {
      p->fts_info = fts_stat(sp, p, (_Bool)0);
      }
    }
    if (compar) {
      p->fts_link = root;
      root = p;
    } else {
      p->fts_link = (struct _ftsent *)((void *)0);
      if ((unsigned long )root == (unsigned long )((void *)0)) {
        root = p;
        tmp = root;
      } else {
        tmp->fts_link = p;
        tmp = p;
      }
    }
    argv ++;
    nitems ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (compar) {
    if (nitems > 1UL) {
      {
      root = fts_sort(sp, root, nitems);
      }
    }
  }
  {
  tmp___10 = fts_alloc(sp, "", (size_t )0);
  sp->fts_cur = tmp___10;
  }
  if ((unsigned long )tmp___10 == (unsigned long )((void *)0)) {
    goto mem3;
  }
  {
  (sp->fts_cur)->fts_link = root;
  (sp->fts_cur)->fts_info = (unsigned short)9;
  tmp___11 = setup_dir(sp);
  }
  if (! tmp___11) {
    goto mem3;
  }
  if (! (sp->fts_options & 4)) {
    if (! (sp->fts_options & 512)) {
      {
      tmp___12 = diropen((FTS const   *)sp, ".");
      sp->fts_rfd = tmp___12;
      }
      if (tmp___12 < 0) {
        sp->fts_options |= 4;
      }
    }
  }
  {
  i_ring_init(& sp->fts_fd_ring, -1);
  }
  return (sp);
  mem3: 
  {
  fts_lfree(root);
  free((void *)parent);
  }
  mem2: 
  {
  free((void *)sp->fts_path);
  }
  mem1: 
  {
  free((void *)sp);
  }
  return ((FTS *)((void *)0));
}
}
static void fts_load(FTS *sp , FTSENT *p ) 
{ 
  register size_t len ;
  register char *cp ;
  size_t tmp ;
  char *tmp___0 ;

  {
  {
  tmp = p->fts_namelen;
  p->fts_pathlen = tmp;
  len = tmp;
  memmove((void *)sp->fts_path, (void const   *)(p->fts_name), len + 1UL);
  cp = strrchr((char const   *)(p->fts_name), '/');
  }
  if (cp) {
    if ((unsigned long )cp != (unsigned long )(p->fts_name)) {
      {
      cp ++;
      len = strlen((char const   *)cp);
      memmove((void *)(p->fts_name), (void const   *)cp, len + 1UL);
      p->fts_namelen = len;
      }
    } else
    if (*(cp + 1)) {
      {
      cp ++;
      len = strlen((char const   *)cp);
      memmove((void *)(p->fts_name), (void const   *)cp, len + 1UL);
      p->fts_namelen = len;
      }
    }
  }
  tmp___0 = sp->fts_path;
  p->fts_path = tmp___0;
  p->fts_accpath = tmp___0;
  return;
}
}
 __attribute__((__nothrow__)) int ( __attribute__((__warn_unused_result__, __leaf__)) fts_close)(FTS *sp ) ;
int ( __attribute__((__warn_unused_result__, __leaf__)) fts_close)(FTS *sp ) 
{ 
  register FTSENT *freep ;
  register FTSENT *p ;
  int saved_errno ;
  int *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  int *tmp___5 ;

  {
  saved_errno = 0;
  if (sp->fts_cur) {
    p = sp->fts_cur;
    {
    while (1) {
      while_continue: /* CIL Label */ ;

      if (! (p->fts_level >= 0L)) {
        goto while_break;
      }
      freep = p;
      if ((unsigned long )p->fts_link != (unsigned long )((void *)0)) {
        p = p->fts_link;
      } else {
        p = p->fts_parent;
      }
      {
      free((void *)freep);
      }
    }
    while_break___0: /* CIL Label */ ;
    }
    while_break: 
    {
    free((void *)p);
    }
  }
  if (sp->fts_child) {
    {
    fts_lfree(sp->fts_child);
    }
  }
  {
  free((void *)sp->fts_array);
  free((void *)sp->fts_path);
  }
  if (sp->fts_options & 512) {
    if (0 <= sp->fts_cwd_fd) {
      {
      tmp___0 = close(sp->fts_cwd_fd);
      }
      if (tmp___0) {
        {
        tmp = __errno_location();
        saved_errno = *tmp;
        }
      }
    }
  } else
  if (! (sp->fts_options & 4)) {
    {
    tmp___2 = fchdir(sp->fts_rfd);
    }
    if (tmp___2) {
      {
      tmp___1 = __errno_location();
      saved_errno = *tmp___1;
      }
    }
    {
    tmp___4 = close(sp->fts_rfd);
    }
    if (tmp___4) {
      if (saved_errno == 0) {
        {
        tmp___3 = __errno_location();
        saved_errno = *tmp___3;
        }
      }
    }
  }
  {
  fd_ring_clear(& sp->fts_fd_ring);
  }
  if (sp->fts_leaf_optimization_works_ht) {
    {
    hash_free(sp->fts_leaf_optimization_works_ht);
    }
  }
  {
  free_dir(sp);
  free((void *)sp);
  }
  if (saved_errno) {
    {
    tmp___5 = __errno_location();
    *tmp___5 = saved_errno;
    }
    return (-1);
  }
  return (0);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) fstatfs)(int __fildes ,
                                                                                              struct statfs *__buf ) ;
static _Bool dirent_inode_sort_may_be_useful(int dir_fd ) 
{ 
  struct statfs fs_buf ;
  int tmp ;
  void *__cil_tmp6 ;
  void *__cil_tmp7 ;

  {
  {
  tmp = fstatfs(dir_fd, & fs_buf);
  }
  if (tmp != 0) {
    return ((_Bool)1);
  }
  if (fs_buf.f_type == 16914836L) {
    goto case_16914836;
  }
  if (fs_buf.f_type == 26985L) {
    goto case_16914836;
  }
  goto switch_default;
  case_16914836: 
  return ((_Bool)0);
  switch_default: 
  return ((_Bool)1);

  return ((_Bool)0);
}
}
static _Bool leaf_optimization_applies(int dir_fd ) 
{ 
  struct statfs fs_buf ;
  int tmp ;
  void *__cil_tmp6 ;
  void *__cil_tmp7 ;

  {
  {
  tmp = fstatfs(dir_fd, & fs_buf);
  }
  if (tmp != 0) {
    return ((_Bool)0);
  }
  if (fs_buf.f_type == 1382369651L) {
    goto case_1382369651;
  }
  goto switch_default;
  case_1382369651: 
  return ((_Bool)1);
  switch_default: 
  return ((_Bool)0);

  return ((_Bool)0);
}
}
static size_t LCO_hash(void const   *x , size_t table_size ) 
{ 
  struct LCO_ent  const  *ax ;

  {
  ax = (struct LCO_ent  const  *)x;
  return ((uintmax_t )ax->st_dev % table_size);
}
}
static _Bool LCO_compare(void const   *x , void const   *y ) 
{ 
  struct LCO_ent  const  *ax ;
  struct LCO_ent  const  *ay ;

  {
  ax = (struct LCO_ent  const  *)x;
  ay = (struct LCO_ent  const  *)y;
  return ((_Bool )(ax->st_dev == ay->st_dev));
}
}
static _Bool link_count_optimize_ok(FTSENT const   *p ) 
{ 
  FTS *sp ;
  Hash_table *h ;
  struct LCO_ent tmp ;
  struct LCO_ent *ent ;
  _Bool opt_ok ;
  struct LCO_ent *t2 ;
  struct hash_table *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;

  {
  sp = (FTS *)p->fts_fts;
  h = sp->fts_leaf_optimization_works_ht;
  if (! (sp->fts_options & 512)) {
    return ((_Bool)0);
  }
  if ((unsigned long )h == (unsigned long )((void *)0)) {
    {
    tmp___0 = hash_initialize((size_t )13, (Hash_tuning const   *)((void *)0), & LCO_hash,
                              & LCO_compare, (void (*)(void * ))(& free));
    sp->fts_leaf_optimization_works_ht = tmp___0;
    h = tmp___0;
    }
    if ((unsigned long )h == (unsigned long )((void *)0)) {
      return ((_Bool)0);
    }
  }
  {
  tmp.st_dev = (dev_t )p->fts_statp[0].st_dev;
  tmp___1 = hash_lookup((Hash_table const   *)h, (void const   *)(& tmp));
  ent = (struct LCO_ent *)tmp___1;
  }
  if (ent) {
    return (ent->opt_ok);
  }
  {
  tmp___2 = malloc(sizeof(*t2));
  t2 = (struct LCO_ent *)tmp___2;
  }
  if ((unsigned long )t2 == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  }
  {
  opt_ok = leaf_optimization_applies(sp->fts_cwd_fd);
  t2->opt_ok = opt_ok;
  t2->st_dev = (dev_t )p->fts_statp[0].st_dev;
  tmp___3 = hash_insert(h, (void const   *)t2);
  ent = (struct LCO_ent *)tmp___3;
  }
  if ((unsigned long )ent == (unsigned long )((void *)0)) {
    {
    free((void *)t2);
    }
    return ((_Bool)0);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((unsigned long )ent == (unsigned long )t2)) {
      {
      abort();
      }
    }
    goto while_break;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (opt_ok);
}
}
 __attribute__((__nothrow__)) FTSENT *( __attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp ) ;
FTSENT *( __attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp ) 
{ 
  register FTSENT *p ;
  register FTSENT *tmp ;
  register unsigned short instr ;
  register char *t ;
  int *tmp___0 ;
  int tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  struct _ftsent *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int *tmp___10 ;
  int tmp___11 ;
  size_t tmp___12 ;
  char *tmp___13 ;
  FTSENT *parent ;
  _Bool tmp___14 ;
  int *tmp___15 ;
  _Bool tmp___16 ;
  int *tmp___17 ;
  struct _ftsent *tmp___18 ;
  int *tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int saved_errno ;
  int *tmp___25 ;
  int *tmp___26 ;
  int *tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int *tmp___30 ;
  int tmp___31 ;
  FTSENT *tmp___32 ;
  char *__cil_tmp44 ;
  char *__cil_tmp45 ;
  char *__cil_tmp46 ;

  {
  if ((unsigned long )sp->fts_cur == (unsigned long )((void *)0)) {
    return ((FTSENT *)((void *)0));
  } else
  if (sp->fts_options & 8192) {
    return ((FTSENT *)((void *)0));
  }
  p = sp->fts_cur;
  instr = p->fts_instr;
  p->fts_instr = (unsigned short)3;
  if ((int )instr == 1) {
    {
    p->fts_info = fts_stat(sp, p, (_Bool)0);
    }
    return (p);
  }
  if ((int )instr == 2) {
    if ((int )p->fts_info == 12) {
      goto _L;
    } else
    if ((int )p->fts_info == 13) {
      _L: 
      {
      p->fts_info = fts_stat(sp, p, (_Bool)1);
      }
      if ((int )p->fts_info == 1) {
        if (! (sp->fts_options & 4)) {
          {
          tmp___1 = diropen((FTS const   *)sp, ".");
          p->fts_symfd = tmp___1;
          }
          if (tmp___1 < 0) {
            {
            tmp___0 = __errno_location();
            p->fts_errno = *tmp___0;
            p->fts_info = (unsigned short)7;
            }
          } else {
            p->fts_flags = (unsigned short )((int )p->fts_flags | 2);
          }
        }
      }
      goto check_for_dir;
    }
  }
  if ((int )p->fts_info == 1) {
    if ((int )instr == 4) {
      goto _L___0;
    } else
    if (sp->fts_options & 64) {
      if (p->fts_statp[0].st_dev != sp->fts_dev) {
        _L___0: 
        if ((int )p->fts_flags & 2) {
          {
          close(p->fts_symfd);
          }
        }
        if (sp->fts_child) {
          {
          fts_lfree(sp->fts_child);
          sp->fts_child = (struct _ftsent *)((void *)0);
          }
        }
        p->fts_info = (unsigned short)6;
        {
        while (1) {
          while_continue: /* CIL Label */ ;
          {
          leave_dir(sp, p);
          }
          goto while_break;
        }
        while_break___5: /* CIL Label */ ;
        }
        while_break: ;
        return (p);
      }
    }
    if ((unsigned long )sp->fts_child != (unsigned long )((void *)0)) {
      if (sp->fts_options & 4096) {
        {
        sp->fts_options &= -4097;
        fts_lfree(sp->fts_child);
        sp->fts_child = (struct _ftsent *)((void *)0);
        }
      }
    }
    if ((unsigned long )sp->fts_child != (unsigned long )((void *)0)) {
      {
      tmp___3 = fts_safe_changedir(sp, p, -1, (char const   *)p->fts_accpath);
      }
      if (tmp___3) {
        {
        tmp___2 = __errno_location();
        p->fts_errno = *tmp___2;
        p->fts_flags = (unsigned short )((int )p->fts_flags | 1);
        p = sp->fts_child;
        }
        {
        while (1) {
          while_continue___0: /* CIL Label */ ;

          if (! ((unsigned long )p != (unsigned long )((void *)0))) {
            goto while_break___0;
          }
          p->fts_accpath = (p->fts_parent)->fts_accpath;
          p = p->fts_link;
        }
        while_break___6: /* CIL Label */ ;
        }
        while_break___0: ;
      }
    } else {
      {
      tmp___4 = fts_build(sp, 3);
      sp->fts_child = tmp___4;
      }
      if ((unsigned long )tmp___4 == (unsigned long )((void *)0)) {
        if (sp->fts_options & 8192) {
          return ((FTSENT *)((void *)0));
        }
        if (p->fts_errno) {
          if ((int )p->fts_info != 4) {
            p->fts_info = (unsigned short)7;
          }
        }
        {
        while (1) {
          while_continue___1: /* CIL Label */ ;
          {
          leave_dir(sp, p);
          }
          goto while_break___1;
        }
        while_break___7: /* CIL Label */ ;
        }
        while_break___1: ;
        return (p);
      }
    }
    p = sp->fts_child;
    sp->fts_child = (struct _ftsent *)((void *)0);
    goto name;
  }
  next: 
  tmp = p;
  p = p->fts_link;
  if ((unsigned long )p != (unsigned long )((void *)0)) {
    {
    sp->fts_cur = p;
    free((void *)tmp);
    }
    if (p->fts_level == 0L) {
      {
      fd_ring_clear(& sp->fts_fd_ring);
      }
      if (! (sp->fts_options & 4)) {
        if (sp->fts_options & 512) {
          if (sp->fts_options & 512) {
            tmp___5 = -100;
          } else {
            tmp___5 = sp->fts_rfd;
          }
          {
          cwd_advance_fd(sp, tmp___5, (_Bool)1);
          tmp___8 = 0;
          }
        } else {
          if (sp->fts_options & 512) {
            tmp___6 = -100;
          } else {
            tmp___6 = sp->fts_rfd;
          }
          {
          tmp___7 = fchdir(tmp___6);
          tmp___8 = tmp___7;
          }
        }
        if (tmp___8) {
          tmp___9 = 1;
        } else {
          tmp___9 = 0;
        }
      } else {
        tmp___9 = 0;
      }
      if (tmp___9) {
        sp->fts_options |= 8192;
        return ((FTSENT *)((void *)0));
      }
      {
      free_dir(sp);
      fts_load(sp, p);
      setup_dir(sp);
      }
      goto check_for_dir;
    }
    if ((int )p->fts_instr == 4) {
      goto next;
    }
    if ((int )p->fts_instr == 2) {
      {
      p->fts_info = fts_stat(sp, p, (_Bool)1);
      }
      if ((int )p->fts_info == 1) {
        if (! (sp->fts_options & 4)) {
          {
          tmp___11 = diropen((FTS const   *)sp, ".");
          p->fts_symfd = tmp___11;
          }
          if (tmp___11 < 0) {
            {
            tmp___10 = __errno_location();
            p->fts_errno = *tmp___10;
            p->fts_info = (unsigned short)7;
            }
          } else {
            p->fts_flags = (unsigned short )((int )p->fts_flags | 2);
          }
        }
      }
      p->fts_instr = (unsigned short)3;
    }
    name: 
    if ((int )*((p->fts_parent)->fts_path + ((p->fts_parent)->fts_pathlen - 1UL)) == 47) {
      tmp___12 = (p->fts_parent)->fts_pathlen - 1UL;
    } else {
      tmp___12 = (p->fts_parent)->fts_pathlen;
    }
    {
    t = sp->fts_path + tmp___12;
    tmp___13 = t;
    t ++;
    *tmp___13 = (char )'/';
    memmove((void *)t, (void const   *)(p->fts_name), p->fts_namelen + 1UL);
    }
    check_for_dir: 
    sp->fts_cur = p;
    if ((int )p->fts_info == 11) {
      if (p->fts_statp[0].st_size == 2L) {
        parent = p->fts_parent;
        if (0L < p->fts_level) {
          if (parent->fts_n_dirs_remaining == 0UL) {
            if (sp->fts_options & 8) {
              if (sp->fts_options & 16) {
                {
                tmp___14 = link_count_optimize_ok((FTSENT const   *)parent);
                }
                if (! tmp___14) {
                  goto _L___4;
                }
              } else {
                goto _L___4;
              }
            } else {
              goto _L___4;
            }
          } else {
            goto _L___4;
          }
        } else {
          _L___4: 
          {
          p->fts_info = fts_stat(sp, p, (_Bool)0);
          }
          if ((p->fts_statp[0].st_mode & 61440U) == 16384U) {
            if (p->fts_level != 0L) {
              if (parent->fts_n_dirs_remaining) {
                (parent->fts_n_dirs_remaining) --;
              }
            }
          }
        }
      } else {
        {
        while (1) {
          while_continue___2: /* CIL Label */ ;

          if (! (p->fts_statp[0].st_size == 1L)) {
            {
            abort();
            }
          }
          goto while_break___2;
        }
        while_break___8: /* CIL Label */ ;
        }
        while_break___2: ;
      }
    }
    if ((int )p->fts_info == 1) {
      if (p->fts_level == 0L) {
        sp->fts_dev = p->fts_statp[0].st_dev;
      }
      {
      tmp___16 = enter_dir(sp, p);
      }
      if (! tmp___16) {
        {
        tmp___15 = __errno_location();
        *tmp___15 = 12;
        }
        return ((FTSENT *)((void *)0));
      }
    }
    return (p);
  }
  {
  p = tmp->fts_parent;
  sp->fts_cur = p;
  free((void *)tmp);
  }
  if (p->fts_level == -1L) {
    {
    free((void *)p);
    tmp___17 = __errno_location();
    *tmp___17 = 0;
    tmp___18 = (struct _ftsent *)((void *)0);
    sp->fts_cur = tmp___18;
    }
    return (tmp___18);
  }
  {
  while (1) {
    while_continue___3: /* CIL Label */ ;

    if (! ((int )p->fts_info != 11)) {
      {
      abort();
      }
    }
    goto while_break___3;
  }
  while_break___9: /* CIL Label */ ;
  }
  while_break___3: 
  *(sp->fts_path + p->fts_pathlen) = (char )'\000';
  if (p->fts_level == 0L) {
    {
    fd_ring_clear(& sp->fts_fd_ring);
    }
    if (! (sp->fts_options & 4)) {
      if (sp->fts_options & 512) {
        if (sp->fts_options & 512) {
          tmp___20 = -100;
        } else {
          tmp___20 = sp->fts_rfd;
        }
        {
        cwd_advance_fd(sp, tmp___20, (_Bool)1);
        tmp___23 = 0;
        }
      } else {
        if (sp->fts_options & 512) {
          tmp___21 = -100;
        } else {
          tmp___21 = sp->fts_rfd;
        }
        {
        tmp___22 = fchdir(tmp___21);
        tmp___23 = tmp___22;
        }
      }
      if (tmp___23) {
        tmp___24 = 1;
      } else {
        tmp___24 = 0;
      }
    } else {
      tmp___24 = 0;
    }
    if (tmp___24) {
      {
      tmp___19 = __errno_location();
      p->fts_errno = *tmp___19;
      sp->fts_options |= 8192;
      }
    }
  } else
  if ((int )p->fts_flags & 2) {
    if (! (sp->fts_options & 4)) {
      if (sp->fts_options & 512) {
        {
        cwd_advance_fd(sp, p->fts_symfd, (_Bool)1);
        tmp___29 = 0;
        }
      } else {
        {
        tmp___28 = fchdir(p->fts_symfd);
        tmp___29 = tmp___28;
        }
      }
      if (tmp___29) {
        {
        tmp___25 = __errno_location();
        saved_errno = *tmp___25;
        close(p->fts_symfd);
        tmp___26 = __errno_location();
        *tmp___26 = saved_errno;
        tmp___27 = __errno_location();
        p->fts_errno = *tmp___27;
        sp->fts_options |= 8192;
        }
      }
    }
    {
    close(p->fts_symfd);
    }
  } else
  if (! ((int )p->fts_flags & 1)) {
    {
    tmp___31 = fts_safe_changedir(sp, p->fts_parent, -1, "..");
    }
    if (tmp___31) {
      {
      tmp___30 = __errno_location();
      p->fts_errno = *tmp___30;
      sp->fts_options |= 8192;
      }
    }
  }
  if (p->fts_errno) {
    p->fts_info = (unsigned short)7;
  } else {
    p->fts_info = (unsigned short)6;
  }
  if (p->fts_errno == 0) {
    {
    while (1) {
      while_continue___4: /* CIL Label */ ;
      {
      leave_dir(sp, p);
      }
      goto while_break___4;
    }
    while_break___10: /* CIL Label */ ;
    }
    while_break___4: ;
  }
  if (sp->fts_options & 8192) {
    tmp___32 = (FTSENT *)((void *)0);
  } else {
    tmp___32 = p;
  }
  return (tmp___32);
}
}
 __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fts_set)(FTS *sp  __attribute__((__unused__)) ,
                                                                       FTSENT *p ,
                                                                       int instr ) ;
int ( __attribute__((__leaf__)) fts_set)(FTS *sp  __attribute__((__unused__)) , FTSENT *p ,
                                         int instr ) 
{ 
  int *tmp ;

  {
  if (instr != 0) {
    if (instr != 1) {
      if (instr != 2) {
        if (instr != 3) {
          if (instr != 4) {
            {
            tmp = __errno_location();
            *tmp = 22;
            }
            return (1);
          }
        }
      }
    }
  }
  p->fts_instr = (unsigned short )instr;
  return (0);
}
}
static int fts_compare_ino(struct _ftsent  const  **a , struct _ftsent  const  **b ) 
{ 
  int tmp ;
  int tmp___0 ;

  {
  if ((*(a + 0))->fts_statp[0].st_ino < (*(b + 0))->fts_statp[0].st_ino) {
    tmp___0 = -1;
  } else {
    if ((*(b + 0))->fts_statp[0].st_ino < (*(a + 0))->fts_statp[0].st_ino) {
      tmp = 1;
    } else {
      tmp = 0;
    }
    tmp___0 = tmp;
  }
  return (tmp___0);
}
}
static void set_stat_type(struct stat *st , unsigned int dtype ) 
{ 
  mode_t type ;

  {
  if (dtype == 6U) {
    goto case_6;
  }
  if (dtype == 2U) {
    goto case_2;
  }
  if (dtype == 4U) {
    goto case_4;
  }
  if (dtype == 1U) {
    goto case_1;
  }
  if (dtype == 10U) {
    goto case_10;
  }
  if (dtype == 8U) {
    goto case_8;
  }
  if (dtype == 12U) {
    goto case_12;
  }
  goto switch_default;
  case_6: 
  type = (mode_t )24576;
  goto switch_break;
  case_2: 
  type = (mode_t )8192;
  goto switch_break;
  case_4: 
  type = (mode_t )16384;
  goto switch_break;
  case_1: 
  type = (mode_t )4096;
  goto switch_break;
  case_10: 
  type = (mode_t )40960;
  goto switch_break;
  case_8: 
  type = (mode_t )32768;
  goto switch_break;
  case_12: 
  type = (mode_t )49152;
  goto switch_break;
  switch_default: 
  type = (mode_t )0;
  switch_break: 
  st->st_mode = type;
  return;
}
}
static FTSENT *fts_build(FTS *sp , int type ) 
{ 
  register struct dirent *dp ;
  register FTSENT *p ;
  register FTSENT *head ;
  register size_t nitems ;
  FTSENT *cur ;
  FTSENT *tail ;
  DIR *dirp ;
  void *oldaddr ;
  int saved_errno ;
  _Bool descend ;
  _Bool doadjust ;
  ptrdiff_t level ;
  nlink_t nlinks ;
  _Bool nostat ;
  size_t len ;
  size_t maxlen ;
  size_t new_len ;
  char *cp ;
  int *tmp ;
  DIR *tmp___0 ;
  DIR *tmp___1 ;
  int *tmp___2 ;
  _Bool tmp___3 ;
  int tmp___4 ;
  int dir_fd ;
  int tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  _Bool is_dir ;
  size_t tmp___9 ;
  int *tmp___10 ;
  int *tmp___11 ;
  size_t tmp___12 ;
  _Bool tmp___13 ;
  size_t tmp___14 ;
  size_t tmp___15 ;
  int *tmp___16 ;
  _Bool skip_stat ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  _Bool tmp___27 ;
  char *__cil_tmp54 ;

  {
  cur = sp->fts_cur;
  if (! (sp->fts_options & 4)) {
    if (sp->fts_options & 512) {
      {
      tmp___0 = opendirat(sp->fts_cwd_fd, (char const   *)cur->fts_accpath);
      dirp = tmp___0;
      }
    } else {
      {
      tmp___1 = opendir_safer((char const   *)cur->fts_accpath);
      dirp = tmp___1;
      }
    }
  } else {
    {
    tmp___1 = opendir_safer((char const   *)cur->fts_accpath);
    dirp = tmp___1;
    }
  }
  if ((unsigned long )dirp == (unsigned long )((void *)0)) {
    if (type == 3) {
      {
      cur->fts_info = (unsigned short)4;
      tmp = __errno_location();
      cur->fts_errno = *tmp;
      }
    }
    return ((FTSENT *)((void *)0));
  }
  if ((int )cur->fts_info == 11) {
    {
    cur->fts_info = fts_stat(sp, cur, (_Bool)0);
    }
  } else
  if (sp->fts_options & 256) {
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      leave_dir(sp, cur);
      }
      goto while_break;
    }
    while_break___1: /* CIL Label */ ;
    }
    while_break: 
    {
    fts_stat(sp, cur, (_Bool)0);
    tmp___3 = enter_dir(sp, cur);
    }
    if (! tmp___3) {
      {
      tmp___2 = __errno_location();
      *tmp___2 = 12;
      }
      return ((FTSENT *)((void *)0));
    }
  }
  if (type == 2) {
    nlinks = (nlink_t )0;
    nostat = (_Bool)0;
  } else
  if (sp->fts_options & 8) {
    if (sp->fts_options & 16) {
      if (sp->fts_options & 32) {
        tmp___4 = 0;
      } else {
        tmp___4 = 2;
      }
      nlinks = cur->fts_statp[0].st_nlink - (__nlink_t )tmp___4;
      nostat = (_Bool)1;
    } else {
      nlinks = (nlink_t )-1;
      nostat = (_Bool)0;
    }
  } else {
    nlinks = (nlink_t )-1;
    nostat = (_Bool)0;
  }
  if (nlinks) {
    goto _L___0;
  } else
  if (type == 3) {
    _L___0: 
    {
    tmp___5 = dirfd(dirp);
    dir_fd = tmp___5;
    }
    if (sp->fts_options & 512) {
      if (0 <= dir_fd) {
        {
        dir_fd = dup_safer(dir_fd);
        set_cloexec_flag(dir_fd, (_Bool)1);
        }
      }
    }
    if (dir_fd < 0) {
      goto _L;
    } else {
      {
      tmp___7 = fts_safe_changedir(sp, cur, dir_fd, (char const   *)((void *)0));
      }
      if (tmp___7) {
        _L: 
        if (nlinks) {
          if (type == 3) {
            {
            tmp___6 = __errno_location();
            cur->fts_errno = *tmp___6;
            }
          }
        }
        {
        cur->fts_flags = (unsigned short )((int )cur->fts_flags | 1);
        descend = (_Bool)0;
        closedir(dirp);
        }
        if (sp->fts_options & 512) {
          if (0 <= dir_fd) {
            {
            close(dir_fd);
            }
          }
        }
        dirp = (DIR *)((void *)0);
      } else {
        descend = (_Bool)1;
      }
    }
  } else {
    descend = (_Bool)0;
  }
  if ((int )*(cur->fts_path + (cur->fts_pathlen - 1UL)) == 47) {
    len = cur->fts_pathlen - 1UL;
  } else {
    len = cur->fts_pathlen;
  }
  if (sp->fts_options & 4) {
    cp = sp->fts_path + len;
    tmp___8 = cp;
    cp ++;
    *tmp___8 = (char )'/';
  } else {
    cp = (char *)((void *)0);
  }
  len ++;
  maxlen = sp->fts_pathlen - len;
  level = cur->fts_level + 1L;
  doadjust = (_Bool)0;
  tail = (FTSENT *)((void *)0);
  head = tail;
  nitems = (size_t )0;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (dirp) {
      {
      dp = readdir(dirp);
      }
      if (! dp) {
        goto while_break___0;
      }
    } else {
      goto while_break___0;
    }
    if (! (sp->fts_options & 32)) {
      if ((int )dp->d_name[0] == 46) {
        if (! dp->d_name[1]) {
          goto __Cont;
        } else
        if ((int )dp->d_name[1] == 46) {
          if (! dp->d_name[2]) {
            goto __Cont;
          }
        }
      }
    }
    {
    tmp___9 = strlen((char const   *)(dp->d_name));
    p = fts_alloc(sp, (char const   *)(dp->d_name), tmp___9);
    }
    if ((unsigned long )p == (unsigned long )((void *)0)) {
      goto mem1;
    }
    {
    tmp___14 = strlen((char const   *)(dp->d_name));
    }
    if (tmp___14 >= maxlen) {
      {
      oldaddr = (void *)sp->fts_path;
      tmp___12 = strlen((char const   *)(dp->d_name));
      tmp___13 = fts_palloc(sp, (tmp___12 + len) + 1UL);
      }
      if (! tmp___13) {
        mem1: 
        {
        tmp___10 = __errno_location();
        saved_errno = *tmp___10;
        free((void *)p);
        fts_lfree(head);
        closedir(dirp);
        cur->fts_info = (unsigned short)7;
        sp->fts_options |= 8192;
        tmp___11 = __errno_location();
        *tmp___11 = saved_errno;
        }
        return ((FTSENT *)((void *)0));
      }
      if ((unsigned long )oldaddr != (unsigned long )sp->fts_path) {
        doadjust = (_Bool)1;
        if (sp->fts_options & 4) {
          cp = sp->fts_path + len;
        }
      }
      maxlen = sp->fts_pathlen - len;
    }
    {
    tmp___15 = strlen((char const   *)(dp->d_name));
    new_len = len + tmp___15;
    }
    if (new_len < len) {
      {
      free((void *)p);
      fts_lfree(head);
      closedir(dirp);
      cur->fts_info = (unsigned short)7;
      sp->fts_options |= 8192;
      tmp___16 = __errno_location();
      *tmp___16 = 36;
      }
      return ((FTSENT *)((void *)0));
    }
    p->fts_level = level;
    p->fts_parent = sp->fts_cur;
    p->fts_pathlen = new_len;
    p->fts_statp[0].st_ino = dp->d_ino;
    if (sp->fts_options & 4) {
      {
      p->fts_accpath = p->fts_path;
      memmove((void *)cp, (void const   *)(p->fts_name), p->fts_namelen + 1UL);
      }
    } else {
      p->fts_accpath = p->fts_name;
    }
    if ((unsigned long )sp->fts_compar == (unsigned long )((void *)0)) {
      goto _L___1;
    } else
    if (sp->fts_options & 1024) {
      _L___1: 
      if (sp->fts_options & 16) {
        if (sp->fts_options & 8) {
          if ((int )dp->d_type != 0) {
            if (! ((int )dp->d_type == 4)) {
              tmp___17 = 1;
            } else {
              tmp___17 = 0;
            }
          } else {
            tmp___17 = 0;
          }
        } else {
          tmp___17 = 0;
        }
      } else {
        tmp___17 = 0;
      }
      {
      skip_stat = (_Bool )tmp___17;
      p->fts_info = (unsigned short)11;
      set_stat_type(p->fts_statp, (unsigned int )dp->d_type);
      fts_set_stat_required(p, (_Bool )(! skip_stat));
      }
      if (sp->fts_options & 16) {
        if ((int )dp->d_type == 4) {
          tmp___18 = 1;
        } else {
          tmp___18 = 0;
        }
      } else {
        tmp___18 = 0;
      }
      is_dir = (_Bool )tmp___18;
    } else {
      {
      p->fts_info = fts_stat(sp, p, (_Bool)0);
      }
      if ((int )p->fts_info == 1) {
        tmp___19 = 1;
      } else
      if ((int )p->fts_info == 2) {
        tmp___19 = 1;
      } else
      if ((int )p->fts_info == 5) {
        tmp___19 = 1;
      } else {
        tmp___19 = 0;
      }
      is_dir = (_Bool )tmp___19;
    }
    if (nlinks > 0UL) {
      if (is_dir) {
        nlinks -= (nlink_t )nostat;
      }
    }
    p->fts_link = (struct _ftsent *)((void *)0);
    if ((unsigned long )head == (unsigned long )((void *)0)) {
      tail = p;
      head = tail;
    } else {
      tail->fts_link = p;
      tail = p;
    }
    nitems ++;
    __Cont: ;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: ;
  if (dirp) {
    {
    closedir(dirp);
    }
  }
  if (doadjust) {
    {
    fts_padjust(sp, head);
    }
  }
  if (sp->fts_options & 4) {
    if (len == sp->fts_pathlen) {
      cp --;
    } else
    if (nitems == 0UL) {
      cp --;
    }
    *cp = (char )'\000';
  }
  if (descend) {
    if (type == 1) {
      goto _L___2;
    } else
    if (! nitems) {
      _L___2: 
      if (cur->fts_level == 0L) {
        {
        fd_ring_clear(& sp->fts_fd_ring);
        }
        if (! (sp->fts_options & 4)) {
          if (sp->fts_options & 512) {
            if (sp->fts_options & 512) {
              tmp___20 = -100;
            } else {
              tmp___20 = sp->fts_rfd;
            }
            {
            cwd_advance_fd(sp, tmp___20, (_Bool)1);
            tmp___23 = 0;
            }
          } else {
            if (sp->fts_options & 512) {
              tmp___21 = -100;
            } else {
              tmp___21 = sp->fts_rfd;
            }
            {
            tmp___22 = fchdir(tmp___21);
            tmp___23 = tmp___22;
            }
          }
          if (tmp___23) {
            tmp___24 = 1;
          } else {
            tmp___24 = 0;
          }
        } else {
          tmp___24 = 0;
        }
        tmp___26 = tmp___24;
      } else {
        {
        tmp___25 = fts_safe_changedir(sp, cur->fts_parent, -1, "..");
        tmp___26 = tmp___25;
        }
      }
      if (tmp___26) {
        {
        cur->fts_info = (unsigned short)7;
        sp->fts_options |= 8192;
        fts_lfree(head);
        }
        return ((FTSENT *)((void *)0));
      }
    }
  }
  if (! nitems) {
    if (type == 3) {
      cur->fts_info = (unsigned short)6;
    }
    {
    fts_lfree(head);
    }
    return ((FTSENT *)((void *)0));
  }
  if (nitems > 10000UL) {
    if (! sp->fts_compar) {
      if (sp->fts_options & 512) {
        {
        tmp___27 = dirent_inode_sort_may_be_useful(sp->fts_cwd_fd);
        }
        if (tmp___27) {
          {
          sp->fts_compar = & fts_compare_ino;
          head = fts_sort(sp, head, nitems);
          sp->fts_compar = (int (*)(struct _ftsent  const  ** , struct _ftsent  const  ** ))((void *)0);
          }
        }
      }
    }
  }
  if (sp->fts_compar) {
    if (nitems > 1UL) {
      {
      head = fts_sort(sp, head, nitems);
      }
    }
  }
  return (head);
}
}
static unsigned short fts_stat(FTS *sp , FTSENT *p , _Bool follow ) 
{ 
  struct stat *sbp ;
  int saved_errno ;
  int *tmp ;
  int *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
  sbp = p->fts_statp;
  if (p->fts_level == 0L) {
    if (sp->fts_options & 1) {
      follow = (_Bool)1;
    }
  }
  if (sp->fts_options & 2) {
    goto _L;
  } else
  if (follow) {
    _L: 
    {
    tmp___3 = stat((char const   */* __restrict  */)((char const   *)p->fts_accpath),
                   (struct stat */* __restrict  */)sbp);
    }
    if (tmp___3) {
      {
      tmp = __errno_location();
      saved_errno = *tmp;
      tmp___1 = __errno_location();
      }
      if (*tmp___1 == 2) {
        {
        tmp___2 = lstat((char const   */* __restrict  */)((char const   *)p->fts_accpath),
                        (struct stat */* __restrict  */)sbp);
        }
        if (tmp___2 == 0) {
          {
          tmp___0 = __errno_location();
          *tmp___0 = 0;
          }
          return ((unsigned short)13);
        }
      }
      p->fts_errno = saved_errno;
      goto err;
    }
  } else {
    {
    tmp___5 = fstatat(sp->fts_cwd_fd, (char const   */* __restrict  */)((char const   *)p->fts_accpath),
                      (struct stat */* __restrict  */)sbp, 256);
    }
    if (tmp___5) {
      {
      tmp___4 = __errno_location();
      p->fts_errno = *tmp___4;
      }
      err: 
      {
      memset((void *)sbp, 0, sizeof(struct stat ));
      }
      return ((unsigned short)10);
    }
  }
  if ((sbp->st_mode & 61440U) == 16384U) {
    if (sp->fts_options & 32) {
      tmp___6 = 0;
    } else {
      tmp___6 = 2;
    }
    p->fts_n_dirs_remaining = sbp->st_nlink - (__nlink_t )tmp___6;
    if ((int )p->fts_name[0] == 46) {
      if (! p->fts_name[1]) {
        goto _L___0;
      } else
      if ((int )p->fts_name[1] == 46) {
        if (! p->fts_name[2]) {
          _L___0: 
          if (p->fts_level == 0L) {
            tmp___7 = 1;
          } else {
            tmp___7 = 5;
          }
          return ((unsigned short )tmp___7);
        }
      }
    }
    return ((unsigned short)1);
  }
  if ((sbp->st_mode & 61440U) == 40960U) {
    return ((unsigned short)12);
  }
  if ((sbp->st_mode & 61440U) == 32768U) {
    return ((unsigned short)8);
  }
  return ((unsigned short)3);
}
}
static int fts_compar(void const   *a , void const   *b ) 
{ 
  FTSENT const   **pa ;
  FTSENT const   **pb ;
  int tmp ;

  {
  {
  pa = (FTSENT const   **)a;
  pb = (FTSENT const   **)b;
  tmp = (*(((*(pa + 0))->fts_fts)->fts_compar))(pa, pb);
  }
  return (tmp);
}
}
static FTSENT *fts_sort(FTS *sp , FTSENT *head , size_t nitems ) 
{ 
  register FTSENT **ap ;
  register FTSENT *p ;
  FTSENT *dummy ;
  int (*compare)(void const   * , void const   * ) ;
  int (*tmp)(void const   * , void const   * ) ;
  FTSENT **a ;
  void *tmp___0 ;
  FTSENT **tmp___1 ;

  {
  if (sizeof(& dummy) == sizeof(void *)) {
    if ((long )(& dummy) == (long )((void *)(& dummy))) {
      tmp = (int (*)(void const   * , void const   * ))sp->fts_compar;
    } else {
      tmp = & fts_compar;
    }
  } else {
    tmp = & fts_compar;
  }
  compare = tmp;
  if (nitems > sp->fts_nitems) {
    sp->fts_nitems = nitems + 40UL;
    if (0xffffffffffffffffUL / sizeof(*a) < sp->fts_nitems) {
      {
      free((void *)sp->fts_array);
      sp->fts_array = (struct _ftsent **)((void *)0);
      sp->fts_nitems = (size_t )0;
      }
      return (head);
    } else {
      {
      tmp___0 = realloc((void *)sp->fts_array, sp->fts_nitems * sizeof(*a));
      a = (FTSENT **)tmp___0;
      }
      if (! a) {
        {
        free((void *)sp->fts_array);
        sp->fts_array = (struct _ftsent **)((void *)0);
        sp->fts_nitems = (size_t )0;
        }
        return (head);
      }
    }
    sp->fts_array = a;
  }
  ap = sp->fts_array;
  p = head;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! p) {
      goto while_break;
    }
    tmp___1 = ap;
    ap ++;
    *tmp___1 = p;
    p = p->fts_link;
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: 
  {
  qsort((void *)sp->fts_array, nitems, sizeof(FTSENT *), compare);
  ap = sp->fts_array;
  head = *ap;
  }
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;
    nitems --;
    if (! nitems) {
      goto while_break___0;
    }
    (*(ap + 0))->fts_link = *(ap + 1);
    ap ++;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: 
  (*(ap + 0))->fts_link = (struct _ftsent *)((void *)0);
  return (head);
}
}
static FTSENT *fts_alloc(FTS *sp , char const   *name , size_t namelen ) 
{ 
  register FTSENT *p ;
  size_t len ;
  void *tmp ;

  {
  {
  len = sizeof(FTSENT ) + namelen;
  tmp = malloc(len);
  p = (FTSENT *)tmp;
  }
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    return ((FTSENT *)((void *)0));
  }
  {
  memmove((void *)(p->fts_name), (void const   *)name, namelen);
  p->fts_name[namelen] = (char )'\000';
  p->fts_namelen = namelen;
  p->fts_fts = sp;
  p->fts_path = sp->fts_path;
  p->fts_errno = 0;
  p->fts_flags = (unsigned short)0;
  p->fts_instr = (unsigned short)3;
  p->fts_number = 0L;
  p->fts_pointer = (void *)0;
  }
  return (p);
}
}
static void fts_lfree(FTSENT *head ) 
{ 
  register FTSENT *p ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    p = head;
    if (! p) {
      goto while_break;
    }
    {
    head = head->fts_link;
    free((void *)p);
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return;
}
}
static _Bool fts_palloc(FTS *sp , size_t more ) 
{ 
  char *p ;
  size_t new_len ;
  int *tmp ;
  void *tmp___0 ;

  {
  new_len = (sp->fts_pathlen + more) + 256UL;
  if (new_len < sp->fts_pathlen) {
    {
    free((void *)sp->fts_path);
    sp->fts_path = (char *)((void *)0);
    tmp = __errno_location();
    *tmp = 36;
    }
    return ((_Bool)0);
  }
  {
  sp->fts_pathlen = new_len;
  tmp___0 = realloc((void *)sp->fts_path, sp->fts_pathlen);
  p = (char *)tmp___0;
  }
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    {
    free((void *)sp->fts_path);
    sp->fts_path = (char *)((void *)0);
    }
    return ((_Bool)0);
  }
  sp->fts_path = p;
  return ((_Bool)1);
}
}
static void fts_padjust(FTS *sp , FTSENT *head ) 
{ 
  FTSENT *p ;
  char *addr ;

  {
  addr = sp->fts_path;
  p = sp->fts_child;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! p) {
      goto while_break;
    }
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if ((unsigned long )p->fts_accpath != (unsigned long )(p->fts_name)) {
        p->fts_accpath = addr + (p->fts_accpath - p->fts_path);
      }
      p->fts_path = addr;
      goto while_break___0;
    }
    while_break___4: /* CIL Label */ ;
    }
    while_break___0: 
    p = p->fts_link;
  }
  while_break___3: /* CIL Label */ ;
  }
  while_break: 
  p = head;
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;

    if (! (p->fts_level >= 0L)) {
      goto while_break___1;
    }
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;

      if ((unsigned long )p->fts_accpath != (unsigned long )(p->fts_name)) {
        p->fts_accpath = addr + (p->fts_accpath - p->fts_path);
      }
      p->fts_path = addr;
      goto while_break___2;
    }
    while_break___6: /* CIL Label */ ;
    }
    while_break___2: ;
    if (p->fts_link) {
      p = p->fts_link;
    } else {
      p = p->fts_parent;
    }
  }
  while_break___5: /* CIL Label */ ;
  }
  while_break___1: ;
  return;
}
}
static size_t fts_maxarglen(char * const  *argv ) 
{ 
  size_t len ;
  size_t max ;

  {
  max = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! *argv) {
      goto while_break;
    }
    {
    len = strlen((char const   *)*argv);
    }
    if (len > max) {
      max = len;
    }
    argv ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (max + 1UL);
}
}
static int fts_safe_changedir(FTS *sp , FTSENT *p , int fd , char const   *dir ) 
{ 
  int ret ;
  _Bool is_dotdot ;
  int tmp ;
  int tmp___0 ;
  int newfd ;
  int parent_fd ;
  _Bool tmp___1 ;
  struct stat sb ;
  int tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  int oerrno ;
  int *tmp___5 ;
  int *tmp___6 ;
  void *__cil_tmp20 ;

  {
  if (dir) {
    {
    tmp = strcmp(dir, "..");
    }
    if (tmp == 0) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
  } else {
    tmp___0 = 0;
  }
  is_dotdot = (_Bool )tmp___0;
  if (sp->fts_options & 4) {
    if (sp->fts_options & 512) {
      if (0 <= fd) {
        {
        close(fd);
        }
      }
    }
    return (0);
  }
  if (fd < 0) {
    if (is_dotdot) {
      if (sp->fts_options & 512) {
        {
        tmp___1 = i_ring_empty((I_ring const   *)(& sp->fts_fd_ring));
        }
        if (! tmp___1) {
          {
          parent_fd = i_ring_pop(& sp->fts_fd_ring);
          is_dotdot = (_Bool)1;
          }
          if (0 <= parent_fd) {
            fd = parent_fd;
            dir = (char const   *)((void *)0);
          }
        }
      }
    }
  }
  newfd = fd;
  if (fd < 0) {
    {
    newfd = diropen((FTS const   *)sp, dir);
    }
    if (newfd < 0) {
      return (-1);
    }
  }
  if (sp->fts_options & 2) {
    goto _L;
  } else
  if (dir) {
    {
    tmp___4 = strcmp(dir, "..");
    }
    if (tmp___4 == 0) {
      _L: 
      {
      tmp___2 = fstat(newfd, & sb);
      }
      if (tmp___2) {
        ret = -1;
        goto bail;
      }
      if (p->fts_statp[0].st_dev != sb.st_dev) {
        {
        tmp___3 = __errno_location();
        *tmp___3 = 2;
        ret = -1;
        }
        goto bail;
      } else
      if (p->fts_statp[0].st_ino != sb.st_ino) {
        {
        tmp___3 = __errno_location();
        *tmp___3 = 2;
        ret = -1;
        }
        goto bail;
      }
    }
  }
  if (sp->fts_options & 512) {
    {
    cwd_advance_fd(sp, newfd, (_Bool )(! is_dotdot));
    }
    return (0);
  }
  {
  ret = fchdir(newfd);
  }
  bail: 
  if (fd < 0) {
    {
    tmp___5 = __errno_location();
    oerrno = *tmp___5;
    close(newfd);
    tmp___6 = __errno_location();
    *tmp___6 = oerrno;
    }
  }
  return (ret);
}
}
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                                                 , ...) ;
void *xmemdup(void const   *p , size_t s )  __attribute__((__malloc__)) ;
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
size_t hash_string(char const   *string , size_t n_buckets ) 
{ 
  size_t value ;
  unsigned char ch ;

  {
  value = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    ch = (unsigned char )*string;
    if (! ch) {
      goto while_break;
    }
    value = (value * 31UL + (size_t )ch) % n_buckets;
    string ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (value);
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
strtol_error xstrtoumax(char const   *s , char **ptr , int strtol_base , uintmax_t *val ,
                        char const   *valid_suffixes ) ;
extern  __attribute__((__nothrow__)) struct lconv *( __attribute__((__leaf__)) localeconv)(void) ;
static char const   power_letter[9]  = 
  {      (char const   )0,      (char const   )'K',      (char const   )'M',      (char const   )'G', 
        (char const   )'T',      (char const   )'P',      (char const   )'E',      (char const   )'Z', 
        (char const   )'Y'};
static long double adjust_value(int inexact_style , long double value ) 
{ 
  uintmax_t u ;
  int tmp ;

  {
  if (inexact_style != 1) {
    if (value < (long double )0xffffffffffffffffUL) {
      u = (uintmax_t )value;
      if (inexact_style == 0) {
        if ((long double )u != value) {
          tmp = 1;
        } else {
          tmp = 0;
        }
      } else {
        tmp = 0;
      }
      value = (long double )(u + (uintmax_t )tmp);
    }
  }
  return (value);
}
}
static char *group_number(char *number , size_t numberlen , char const   *grouping ,
                          char const   *thousands_sep ) 
{ 
  register char *d ;
  size_t grouplen ;
  size_t thousands_seplen ;
  size_t tmp ;
  size_t i ;
  char buf___0[2UL * (((sizeof(uintmax_t ) * 8UL) * 146UL) / 485UL + 1UL) + 1UL] ;
  unsigned char g ;
  void *__cil_tmp13 ;

  {
  {
  grouplen = 0xffffffffffffffffUL;
  tmp = strlen(thousands_sep);
  thousands_seplen = tmp;
  i = numberlen;
  memcpy((void */* __restrict  */)((void *)(buf___0)), (void const   */* __restrict  */)((void const   *)number),
         numberlen);
  d = number + numberlen;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    g = (unsigned char )*grouping;
    if (g) {
      if ((int )g < 127) {
        grouplen = (size_t )g;
      } else {
        grouplen = i;
      }
      grouping ++;
    }
    if (i < grouplen) {
      grouplen = i;
    }
    {
    d -= grouplen;
    i -= grouplen;
    memcpy((void */* __restrict  */)((void *)d), (void const   */* __restrict  */)((void const   *)(buf___0 + i)),
           grouplen);
    }
    if (i == 0UL) {
      return (d);
    }
    {
    d -= thousands_seplen;
    memcpy((void */* __restrict  */)((void *)d), (void const   */* __restrict  */)((void const   *)thousands_sep),
           thousands_seplen);
    }
  }
  while_break: /* CIL Label */ ;
  }

  return ((char *)0);
}
}
char *human_readable(uintmax_t n , char *buf___0 , int opts , uintmax_t from_block_size ,
                     uintmax_t to_block_size ) 
{ 
  int inexact_style ;
  unsigned int base ;
  int tmp ;
  uintmax_t amt ;
  int tenths ;
  int exponent ;
  int exponent_max ;
  char *p ;
  char *psuffix ;
  char const   *integerlim ;
  int rounding ;
  char const   *decimal_point ;
  size_t decimal_pointlen ;
  char const   *grouping ;
  char const   *thousands_sep ;
  struct lconv  const  *l ;
  struct lconv *tmp___0 ;
  size_t pointlen ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  uintmax_t multiplier ;
  uintmax_t divisor ;
  uintmax_t r10 ;
  uintmax_t r2 ;
  long double dto_block_size ;
  long double damt ;
  size_t buflen ;
  size_t nonintegerlen ;
  long double tmp___3 ;
  long double e ;
  long double tmp___4 ;
  long double tmp___5 ;
  unsigned int r10___0 ;
  unsigned int r2___0 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int digit ;
  uintmax_t power ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  char *__cil_tmp57 ;
  char *__cil_tmp58 ;
  char *__cil_tmp59 ;
  char *__cil_tmp60 ;
  char *__cil_tmp61 ;
  char *__cil_tmp62 ;
  char *__cil_tmp63 ;

  {
  inexact_style = opts & 3;
  if (opts & 32) {
    tmp = 1024;
  } else {
    tmp = 1000;
  }
  {
  base = (unsigned int )tmp;
  exponent = -1;
  exponent_max = (int )(sizeof(power_letter) - 1UL);
  decimal_point = ".";
  decimal_pointlen = (size_t )1;
  grouping = "";
  thousands_sep = "";
  tmp___0 = localeconv();
  l = (struct lconv  const  *)tmp___0;
  tmp___1 = strlen((char const   *)l->decimal_point);
  pointlen = tmp___1;
  }
  if (0UL < pointlen) {
    if (pointlen <= 16UL) {
      decimal_point = (char const   *)l->decimal_point;
      decimal_pointlen = pointlen;
    }
  }
  {
  grouping = (char const   *)l->grouping;
  tmp___2 = strlen((char const   *)l->thousands_sep);
  }
  if (tmp___2 <= 16UL) {
    thousands_sep = (char const   *)l->thousands_sep;
  }
  psuffix = (buf___0 + (((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL)) - 3;
  p = psuffix;
  if (to_block_size <= from_block_size) {
    if (from_block_size % to_block_size == 0UL) {
      multiplier = from_block_size / to_block_size;
      amt = n * multiplier;
      if (amt / multiplier == n) {
        tenths = 0;
        rounding = 0;
        goto use_integer_arithmetic;
      }
    }
  } else
  if (from_block_size != 0UL) {
    if (to_block_size % from_block_size == 0UL) {
      divisor = to_block_size / from_block_size;
      r10 = (n % divisor) * 10UL;
      r2 = (r10 % divisor) * 2UL;
      amt = n / divisor;
      tenths = (int )(r10 / divisor);
      if (r2 < divisor) {
        rounding = 0UL < r2;
      } else {
        rounding = 2 + (divisor < r2);
      }
      goto use_integer_arithmetic;
    }
  }
  dto_block_size = (long double )to_block_size;
  damt = (long double )n * ((long double )from_block_size / dto_block_size);
  if (! (opts & 16)) {
    {
    tmp___3 = adjust_value(inexact_style, damt);
    sprintf((char */* __restrict  */)buf___0, (char const   */* __restrict  */)"%.0Lf",
            tmp___3);
    buflen = strlen((char const   *)buf___0);
    nonintegerlen = (size_t )0;
    }
  } else {
    e = (long double )1;
    exponent = 0;
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      e *= (long double )base;
      exponent ++;
      if (e * (long double )base <= damt) {
        if (! (exponent < exponent_max)) {
          goto while_break;
        }
      } else {
        goto while_break;
      }
    }
    while_break___3: /* CIL Label */ ;
    }
    while_break: 
    {
    damt /= e;
    tmp___4 = adjust_value(inexact_style, damt);
    sprintf((char */* __restrict  */)buf___0, (char const   */* __restrict  */)"%.1Lf",
            tmp___4);
    buflen = strlen((char const   *)buf___0);
    nonintegerlen = decimal_pointlen + 1UL;
    }
    if ((1UL + nonintegerlen) + (size_t )(! (opts & 32)) < buflen) {
      {
      tmp___5 = adjust_value(inexact_style, damt * (long double )10);
      sprintf((char */* __restrict  */)buf___0, (char const   */* __restrict  */)"%.0Lf",
              tmp___5 / (long double )10);
      buflen = strlen((char const   *)buf___0);
      nonintegerlen = (size_t )0;
      }
    } else
    if (opts & 8) {
      if ((int )*(buf___0 + (buflen - 1UL)) == 48) {
        {
        tmp___5 = adjust_value(inexact_style, damt * (long double )10);
        sprintf((char */* __restrict  */)buf___0, (char const   */* __restrict  */)"%.0Lf",
                tmp___5 / (long double )10);
        buflen = strlen((char const   *)buf___0);
        nonintegerlen = (size_t )0;
        }
      }
    }
  }
  {
  p = psuffix - buflen;
  memmove((void *)p, (void const   *)buf___0, buflen);
  integerlim = (char const   *)((p + buflen) - nonintegerlen);
  }
  goto do_grouping;
  use_integer_arithmetic: 
  if (opts & 16) {
    exponent = 0;
    if ((uintmax_t )base <= amt) {
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;
        r10___0 = (unsigned int )((amt % (unsigned long )base) * 10UL + (unsigned long )tenths);
        r2___0 = (r10___0 % base) * 2U + (unsigned int )(rounding >> 1);
        amt /= (uintmax_t )base;
        tenths = (int )(r10___0 / base);
        if (r2___0 < base) {
          rounding = r2___0 + (unsigned int )rounding != 0U;
        } else {
          rounding = 2 + (base < r2___0 + (unsigned int )rounding);
        }
        exponent ++;
        if ((uintmax_t )base <= amt) {
          if (! (exponent < exponent_max)) {
            goto while_break___0;
          }
        } else {
          goto while_break___0;
        }
      }
      while_break___4: /* CIL Label */ ;
      }
      while_break___0: ;
      if (amt < 10UL) {
        if (inexact_style == 1) {
          tmp___7 = 2 < rounding + (tenths & 1);
        } else {
          if (inexact_style == 0) {
            if (0 < rounding) {
              tmp___6 = 1;
            } else {
              tmp___6 = 0;
            }
          } else {
            tmp___6 = 0;
          }
          tmp___7 = tmp___6;
        }
        if (tmp___7) {
          tenths ++;
          rounding = 0;
          if (tenths == 10) {
            amt ++;
            tenths = 0;
          }
        }
        if (amt < 10UL) {
          if (tenths) {
            goto _L;
          } else
          if (! (opts & 8)) {
            _L: 
            {
            p --;
            *p = (char )(48 + tenths);
            p -= decimal_pointlen;
            memcpy((void */* __restrict  */)((void *)p), (void const   */* __restrict  */)((void const   *)decimal_point),
                   decimal_pointlen);
            rounding = 0;
            tenths = rounding;
            }
          }
        }
      }
    }
  }
  if (inexact_style == 1) {
    tmp___9 = 5 < tenths + (0UL < (unsigned long )rounding + (amt & 1UL));
  } else {
    if (inexact_style == 0) {
      if (0 < tenths + rounding) {
        tmp___8 = 1;
      } else {
        tmp___8 = 0;
      }
    } else {
      tmp___8 = 0;
    }
    tmp___9 = tmp___8;
  }
  if (tmp___9) {
    amt ++;
    if (opts & 16) {
      if (amt == (uintmax_t )base) {
        if (exponent < exponent_max) {
          exponent ++;
          if (! (opts & 8)) {
            {
            p --;
            *p = (char )'0';
            p -= decimal_pointlen;
            memcpy((void */* __restrict  */)((void *)p), (void const   */* __restrict  */)((void const   *)decimal_point),
                   decimal_pointlen);
            }
          }
          amt = (uintmax_t )1;
        }
      }
    }
  }
  integerlim = (char const   *)p;
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;
    digit = (int )(amt % 10UL);
    p --;
    *p = (char )(digit + 48);
    amt /= 10UL;
    if (! (amt != 0UL)) {
      goto while_break___1;
    }
  }
  while_break___5: /* CIL Label */ ;
  }
  while_break___1: ;
  do_grouping: 
  if (opts & 4) {
    {
    p = group_number(p, (size_t )(integerlim - (char const   *)p), grouping, thousands_sep);
    }
  }
  if (opts & 128) {
    if (exponent < 0) {
      exponent = 0;
      power = (uintmax_t )1;
      {
      while (1) {
        while_continue___2: /* CIL Label */ ;

        if (! (power < to_block_size)) {
          goto while_break___2;
        }
        exponent ++;
        if (exponent == exponent_max) {
          goto while_break___2;
        }
        power *= (uintmax_t )base;
      }
      while_break___6: /* CIL Label */ ;
      }
      while_break___2: ;
    }
    if (exponent | (opts & 256)) {
      if (opts & 64) {
        tmp___10 = psuffix;
        psuffix ++;
        *tmp___10 = (char )' ';
      }
    }
    if (exponent) {
      tmp___11 = psuffix;
      psuffix ++;
      if (! (opts & 32)) {
        if (exponent == 1) {
          *tmp___11 = (char )'k';
        } else {
          *tmp___11 = (char )power_letter[exponent];
        }
      } else {
        *tmp___11 = (char )power_letter[exponent];
      }
    }
    if (opts & 256) {
      if (opts & 32) {
        if (exponent) {
          tmp___12 = psuffix;
          psuffix ++;
          *tmp___12 = (char )'i';
        }
      }
      tmp___13 = psuffix;
      psuffix ++;
      *tmp___13 = (char )'B';
    }
  }
  *psuffix = (char )'\000';
  return (p);
}
}
static char const   * const  block_size_args[3]  = {      (char const   */* const  */)"human-readable",      (char const   */* const  */)"si",      (char const   */* const  */)((char const   *)0)};
static int const   block_size_opts[2]  = {      (int const   )176,      (int const   )144};
static uintmax_t default_block_size(void) 
{ 
  int tmp___0 ;
  char *tmp___1 ;
  char *__cil_tmp4 ;

  {
  {
  tmp___1 = getenv("POSIXLY_CORRECT");
  }
  if (tmp___1) {
    tmp___0 = 512;
  } else {
    tmp___0 = 1024;
  }
  return ((uintmax_t )tmp___0);
}
}
static strtol_error humblock(char const   *spec , uintmax_t *block_size , int *options ) 
{ 
  int i ;
  int opts ;
  char *ptr ;
  strtol_error e ;
  strtol_error tmp ;
  ptrdiff_t tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *__cil_tmp15 ;
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;

  {
  opts = 0;
  if (! spec) {
    {
    tmp___1 = getenv("BLOCK_SIZE");
    spec = (char const   *)tmp___1;
    }
    if (spec) {
      goto _L___0;
    } else {
      {
      tmp___2 = getenv("BLOCKSIZE");
      spec = (char const   *)tmp___2;
      }
      if (spec) {
        goto _L___0;
      } else {
        {
        *block_size = default_block_size();
        }
      }
    }
  } else {
    _L___0: 
    if ((int const   )*spec == 39) {
      opts |= 4;
      spec ++;
    }
    {
    tmp___0 = argmatch(spec, block_size_args, (char const   *)(block_size_opts), sizeof(block_size_opts[0]));
    i = (int )tmp___0;
    }
    if (0 <= i) {
      opts |= (int )block_size_opts[i];
      *block_size = (uintmax_t )1;
    } else {
      {
      tmp = xstrtoumax(spec, & ptr, 0, block_size, "eEgGkKmMpPtTyYzZ0");
      e = tmp;
      }
      if ((unsigned int )e != 0U) {
        *options = 0;
        return (e);
      }
      {
      while (1) {
        while_continue: /* CIL Label */ ;

        if (48 <= (int )*spec) {
          if ((int const   )*spec <= 57) {
            goto while_break;
          }
        }
        if ((unsigned long )spec == (unsigned long )ptr) {
          opts |= 128;
          if ((int )*(ptr + -1) == 66) {
            opts |= 256;
          }
          if ((int )*(ptr + -1) != 66) {
            opts |= 32;
          } else
          if ((int )*(ptr + -2) == 105) {
            opts |= 32;
          }
          goto while_break;
        }
        spec ++;
      }
      while_break___0: /* CIL Label */ ;
      }
      while_break: ;
    }
  }
  *options = opts;
  return ((strtol_error )0);
}
}
enum strtol_error human_options(char const   *spec , int *opts , uintmax_t *block_size ) 
{ 
  strtol_error e ;
  strtol_error tmp ;

  {
  {
  tmp = humblock(spec, block_size, opts);
  e = tmp;
  }
  if (*block_size == 0UL) {
    {
    *block_size = default_block_size();
    e = (strtol_error )4;
    }
  }
  return (e);
}
}
void i_ring_init(I_ring *ir , int default_val ) 
{ 
  int i ;

  {
  ir->ir_empty = (_Bool)1;
  ir->ir_front = 0U;
  ir->ir_back = 0U;
  i = 0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < 4)) {
      goto while_break;
    }
    ir->ir_data[i] = default_val;
    i ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  ir->ir_default_val = default_val;
  return;
}
}
_Bool i_ring_empty(I_ring const   *ir ) 
{ 


  {
  return ((_Bool )ir->ir_empty);
}
}
int i_ring_push(I_ring *ir , int val ) 
{ 
  unsigned int dest_idx ;
  int old_val ;

  {
  dest_idx = (ir->ir_front + (unsigned int )(! ir->ir_empty)) % 4U;
  old_val = ir->ir_data[dest_idx];
  ir->ir_data[dest_idx] = val;
  ir->ir_front = dest_idx;
  if (dest_idx == ir->ir_back) {
    ir->ir_back = (ir->ir_back + (unsigned int )(! ir->ir_empty)) % 4U;
  }
  ir->ir_empty = (_Bool)0;
  return (old_val);
}
}
int i_ring_pop(I_ring *ir ) 
{ 
  int top_val ;
  _Bool tmp ;

  {
  {
  tmp = i_ring_empty((I_ring const   *)ir);
  }
  if (tmp) {
    {
    abort();
    }
  }
  top_val = ir->ir_data[ir->ir_front];
  ir->ir_data[ir->ir_front] = ir->ir_default_val;
  if (ir->ir_front == ir->ir_back) {
    ir->ir_empty = (_Bool)1;
  } else {
    ir->ir_front = ((ir->ir_front + 4U) - 1U) % 4U;
  }
  return (top_val);
}
}
char *( __attribute__((__warn_unused_result__)) imaxtostr)(intmax_t i , char *buf___0 ) 
{ 
  char *p ;

  {
  p = buf___0 + ((((sizeof(intmax_t ) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL);
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
char const   *locale_charset(void) ;
extern int fscanf(FILE * __restrict  __stream , char const   * __restrict  __format 
                  , ...) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) nl_langinfo)(nl_item __item ) ;
static char const   * volatile  charset_aliases  ;
static char const   *get_charset_aliases(void) 
{ 
  char const   *cp ;
  char const   *dir ;
  char const   *base ;
  char *file_name___1 ;
  char *tmp ;
  size_t dir_len___0 ;
  size_t tmp___0 ;
  size_t base_len___0 ;
  size_t tmp___1 ;
  int add_slash ;
  int tmp___2 ;
  void *tmp___3 ;
  int fd ;
  FILE *fp ;
  char *res_ptr ;
  size_t res_size ;
  int c ;
  char buf1[51] ;
  char buf2[51] ;
  size_t l1 ;
  size_t l2 ;
  char *old_res_ptr ;
  int tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *__cil_tmp36 ;
  void *__cil_tmp37 ;
  char *__cil_tmp38 ;
  char *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char *__cil_tmp41 ;
  char *__cil_tmp42 ;
  char *__cil_tmp43 ;
  char *__cil_tmp44 ;
  char *__cil_tmp45 ;

  {
  cp = (char const   *)charset_aliases;
  if ((unsigned long )cp == (unsigned long )((void *)0)) {
    {
    base = "charset.alias";
    tmp = getenv("CHARSETALIASDIR");
    dir = (char const   *)tmp;
    }
    if ((unsigned long )dir == (unsigned long )((void *)0)) {
      dir = "/usr/local/lib";
    } else
    if ((int const   )*(dir + 0) == 0) {
      dir = "/usr/local/lib";
    }
    {
    tmp___0 = strlen(dir);
    dir_len___0 = tmp___0;
    tmp___1 = strlen(base);
    base_len___0 = tmp___1;
    }
    if (dir_len___0 > 0UL) {
      if (! ((int const   )*(dir + (dir_len___0 - 1UL)) == 47)) {
        tmp___2 = 1;
      } else {
        tmp___2 = 0;
      }
    } else {
      tmp___2 = 0;
    }
    {
    add_slash = tmp___2;
    tmp___3 = malloc(((dir_len___0 + (size_t )add_slash) + base_len___0) + 1UL);
    file_name___1 = (char *)tmp___3;
    }
    if ((unsigned long )file_name___1 != (unsigned long )((void *)0)) {
      {
      memcpy((void */* __restrict  */)((void *)file_name___1), (void const   */* __restrict  */)((void const   *)dir),
             dir_len___0);
      }
      if (add_slash) {
        *(file_name___1 + dir_len___0) = (char )'/';
      }
      {
      memcpy((void */* __restrict  */)((void *)((file_name___1 + dir_len___0) + add_slash)),
             (void const   */* __restrict  */)((void const   *)base), base_len___0 + 1UL);
      }
    }
    if ((unsigned long )file_name___1 == (unsigned long )((void *)0)) {
      cp = "";
    } else {
      {
      fd = open((char const   *)file_name___1, 131072);
      }
      if (fd < 0) {
        cp = "";
      } else {
        {
        fp = fdopen(fd, "r");
        }
        if ((unsigned long )fp == (unsigned long )((void *)0)) {
          {
          close(fd);
          cp = "";
          }
        } else {
          res_ptr = (char *)((void *)0);
          res_size = (size_t )0;
          {
          while (1) {
            while_continue: /* CIL Label */ ;
            {
            c = getc_unlocked(fp);
            }
            if (c == -1) {
              goto while_break;
            }
            if (c == 10) {
              goto __Cont;
            } else
            if (c == 32) {
              goto __Cont;
            } else
            if (c == 9) {
              goto __Cont;
            }
            if (c == 35) {
              {
              while (1) {
                while_continue___0: /* CIL Label */ ;
                {
                c = getc_unlocked(fp);
                }
                if (c == -1) {
                  goto while_break___0;
                } else
                if (c == 10) {
                  goto while_break___0;
                }
              }
              while_break___2: /* CIL Label */ ;
              }
              while_break___0: ;
              if (c == -1) {
                goto while_break;
              }
              goto __Cont;
            }
            {
            ungetc(c, fp);
            tmp___4 = fscanf((FILE */* __restrict  */)fp, (char const   */* __restrict  */)"%50s %50s",
                             buf1, buf2);
            }
            if (tmp___4 < 2) {
              goto while_break;
            }
            {
            l1 = strlen((char const   *)(buf1));
            l2 = strlen((char const   *)(buf2));
            old_res_ptr = res_ptr;
            }
            if (res_size == 0UL) {
              {
              res_size = ((l1 + 1UL) + l2) + 1UL;
              tmp___5 = malloc(res_size + 1UL);
              res_ptr = (char *)tmp___5;
              }
            } else {
              {
              res_size += ((l1 + 1UL) + l2) + 1UL;
              tmp___6 = realloc((void *)res_ptr, res_size + 1UL);
              res_ptr = (char *)tmp___6;
              }
            }
            if ((unsigned long )res_ptr == (unsigned long )((void *)0)) {
              res_size = (size_t )0;
              if ((unsigned long )old_res_ptr != (unsigned long )((void *)0)) {
                {
                free((void *)old_res_ptr);
                }
              }
              goto while_break;
            }
            {
            strcpy((char */* __restrict  */)(((res_ptr + res_size) - (l2 + 1UL)) - (l1 + 1UL)),
                   (char const   */* __restrict  */)((char const   *)(buf1)));
            strcpy((char */* __restrict  */)((res_ptr + res_size) - (l2 + 1UL)), (char const   */* __restrict  */)((char const   *)(buf2)));
            }
            __Cont: ;
          }
          while_break___1: /* CIL Label */ ;
          }
          while_break: 
          {
          fclose(fp);
          }
          if (res_size == 0UL) {
            cp = "";
          } else {
            *(res_ptr + res_size) = (char )'\000';
            cp = (char const   *)res_ptr;
          }
        }
      }
      {
      free((void *)file_name___1);
      }
    }
    charset_aliases = (char const   */* volatile  */)cp;
  }
  return (cp);
}
}
char const   *locale_charset(void) 
{ 
  char const   *codeset ;
  char const   *aliases ;
  char *tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  int tmp___3 ;
  char *__cil_tmp10 ;
  char *__cil_tmp11 ;

  {
  {
  tmp = nl_langinfo(14);
  codeset = (char const   *)tmp;
  }
  if ((unsigned long )codeset == (unsigned long )((void *)0)) {
    codeset = "";
  }
  {
  aliases = get_charset_aliases();
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((int const   )*aliases != 0)) {
      goto while_break;
    }
    {
    tmp___3 = strcmp(codeset, aliases);
    }
    if (tmp___3 == 0) {
      {
      tmp___2 = strlen(aliases);
      codeset = (aliases + tmp___2) + 1;
      }
      goto while_break;
    } else
    if ((int const   )*(aliases + 0) == 42) {
      if ((int const   )*(aliases + 1) == 0) {
        {
        tmp___2 = strlen(aliases);
        codeset = (aliases + tmp___2) + 1;
        }
        goto while_break;
      }
    }
    {
    tmp___0 = strlen(aliases);
    aliases += tmp___0 + 1UL;
    tmp___1 = strlen(aliases);
    aliases += tmp___1 + 1UL;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if ((int const   )*(codeset + 0) == 0) {
    codeset = "ASCII";
  }
  return (codeset);
}
}
void version_etc_va(FILE *stream , char const   *command_name , char const   *package ,
                    char const   *version , va_list authors ) ;
void *mmalloca(size_t n ) ;
void freea(void *p ) ;
static void *mmalloca_results[257]  ;
void *mmalloca(size_t n ) 
{ 
  size_t nplus ;
  char *p ;
  void *tmp ;
  size_t slot ;

  {
  nplus = n + (((sizeof(struct preliminary_header ) + 16UL) - 1UL) / 16UL) * 16UL;
  if (nplus >= n) {
    {
    tmp = malloc(nplus);
    p = (char *)tmp;
    }
    if ((unsigned long )p != (unsigned long )((void *)0)) {
      p += (((sizeof(struct preliminary_header ) + 16UL) - 1UL) / 16UL) * 16UL;
      *((int *)p + -1) = 336984906;
      slot = (unsigned long )p % 257UL;
      ((struct header *)(p - (((sizeof(struct preliminary_header ) + 16UL) - 1UL) / 16UL) * 16UL))->next = mmalloca_results[slot];
      mmalloca_results[slot] = (void *)p;
      return ((void *)p);
    }
  }
  return ((void *)0);
}
}
void freea(void *p ) 
{ 
  size_t slot ;
  void **chain ;
  char *p_begin ;

  {
  if ((unsigned long )p != (unsigned long )((void *)0)) {
    if (*((int *)p + -1) == 336984906) {
      slot = (unsigned long )p % 257UL;
      chain = & mmalloca_results[slot];
      {
      while (1) {
        while_continue: /* CIL Label */ ;

        if (! ((unsigned long )*chain != (unsigned long )((void *)0))) {
          goto while_break;
        }
        if ((unsigned long )*chain == (unsigned long )p) {
          {
          p_begin = (char *)p - (((sizeof(struct preliminary_header ) + 16UL) - 1UL) / 16UL) * 16UL;
          *chain = ((struct header *)p_begin)->next;
          free((void *)p_begin);
          }
          return;
        }
        chain = & ((struct header *)((char *)*chain - (((sizeof(struct preliminary_header ) + 16UL) - 1UL) / 16UL) * 16UL))->next;
      }
      while_break___0: /* CIL Label */ ;
      }
      while_break: ;
    }
  }
  return;
}
}
unsigned int const   is_basic_table[8]  = {      (unsigned int const   )6656,      (unsigned int const   )4294967279U,      (unsigned int const   )4294967294U,      (unsigned int const   )2147483646};
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswprint)(wint_t __wc ) ;
int mbscasecmp(char const   *s1 , char const   *s2 ) 
{ 
  mbui_iterator_t iter1 ;
  mbui_iterator_t iter2 ;
  int cmp ;
  wint_t tmp ;
  wint_t tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  unsigned char const   *p1 ;
  unsigned char const   *p2 ;
  unsigned char c1 ;
  unsigned char c2 ;
  int tmp___18 ;
  unsigned short const   **tmp___19 ;
  int tmp___21 ;
  unsigned short const   **tmp___22 ;
  size_t tmp___25 ;
  void *__cil_tmp35 ;
  void *__cil_tmp36 ;
  void *__cil_tmp37 ;
  void *__cil_tmp38 ;

  {
  if ((unsigned long )s1 == (unsigned long )s2) {
    return (0);
  }
  {
  tmp___25 = __ctype_get_mb_cur_max();
  }
  if (tmp___25 > 1UL) {
    {
    iter1.cur.ptr = s1;
    iter1.in_shift = (_Bool)0;
    memset((void *)(& iter1.state), '\000', sizeof(mbstate_t ));
    iter1.next_done = (_Bool)0;
    iter2.cur.ptr = s2;
    iter2.in_shift = (_Bool)0;
    memset((void *)(& iter2.state), '\000', sizeof(mbstate_t ));
    iter2.next_done = (_Bool)0;
    }
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      mbuiter_multi_next(& iter1);
      }
      if (iter1.cur.wc_valid) {
        if (iter1.cur.wc == 0) {
          tmp___13 = 0;
        } else {
          tmp___13 = 1;
        }
      } else {
        tmp___13 = 1;
      }
      if (tmp___13) {
        {
        mbuiter_multi_next(& iter2);
        }
        if (iter2.cur.wc_valid) {
          if (iter2.cur.wc == 0) {
            tmp___14 = 0;
          } else {
            tmp___14 = 1;
          }
        } else {
          tmp___14 = 1;
        }
        if (! tmp___14) {
          goto while_break;
        }
      } else {
        goto while_break;
      }
      if (iter1.cur.wc_valid) {
        if (iter2.cur.wc_valid) {
          {
          tmp = towlower((wint_t )iter1.cur.wc);
          tmp___0 = towlower((wint_t )iter2.cur.wc);
          tmp___1 = (int )tmp - (int )tmp___0;
          }
        } else {
          tmp___1 = -1;
        }
        tmp___12 = tmp___1;
      } else {
        if (iter2.cur.wc_valid) {
          tmp___11 = 1;
        } else {
          if (iter1.cur.bytes == iter2.cur.bytes) {
            {
            tmp___2 = memcmp((void const   *)iter1.cur.ptr, (void const   *)iter2.cur.ptr,
                             iter1.cur.bytes);
            tmp___10 = tmp___2;
            }
          } else {
            if (iter1.cur.bytes < iter2.cur.bytes) {
              {
              tmp___5 = memcmp((void const   *)iter1.cur.ptr, (void const   *)iter2.cur.ptr,
                               iter1.cur.bytes);
              }
              if (tmp___5 > 0) {
                tmp___4 = 1;
              } else {
                tmp___4 = -1;
              }
              tmp___9 = tmp___4;
            } else {
              {
              tmp___8 = memcmp((void const   *)iter1.cur.ptr, (void const   *)iter2.cur.ptr,
                               iter2.cur.bytes);
              }
              if (tmp___8 >= 0) {
                tmp___7 = 1;
              } else {
                tmp___7 = -1;
              }
              tmp___9 = tmp___7;
            }
            tmp___10 = tmp___9;
          }
          tmp___11 = tmp___10;
        }
        tmp___12 = tmp___11;
      }
      cmp = tmp___12;
      if (cmp != 0) {
        return (cmp);
      }
      iter1.cur.ptr += iter1.cur.bytes;
      iter1.next_done = (_Bool)0;
      iter2.cur.ptr += iter2.cur.bytes;
      iter2.next_done = (_Bool)0;
    }
    while_break___1: /* CIL Label */ ;
    }
    while_break: 
    {
    mbuiter_multi_next(& iter1);
    }
    if (iter1.cur.wc_valid) {
      if (iter1.cur.wc == 0) {
        tmp___15 = 0;
      } else {
        tmp___15 = 1;
      }
    } else {
      tmp___15 = 1;
    }
    if (tmp___15) {
      return (1);
    }
    {
    mbuiter_multi_next(& iter2);
    }
    if (iter2.cur.wc_valid) {
      if (iter2.cur.wc == 0) {
        tmp___16 = 0;
      } else {
        tmp___16 = 1;
      }
    } else {
      tmp___16 = 1;
    }
    if (tmp___16) {
      return (-1);
    }
    return (0);
  } else {
    p1 = (unsigned char const   *)s1;
    p2 = (unsigned char const   *)s2;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      {
      tmp___19 = __ctype_b_loc();
      }
      if ((int const   )*(*tmp___19 + (int )*p1) & 256) {
        {
        tmp___18 = tolower((int )*p1);
        c1 = (unsigned char )tmp___18;
        }
      } else {
        c1 = (unsigned char )*p1;
      }
      {
      tmp___22 = __ctype_b_loc();
      }
      if ((int const   )*(*tmp___22 + (int )*p2) & 256) {
        {
        tmp___21 = tolower((int )*p2);
        c2 = (unsigned char )tmp___21;
        }
      } else {
        c2 = (unsigned char )*p2;
      }
      if ((int )c1 == 0) {
        goto while_break___0;
      }
      p1 ++;
      p2 ++;
      if (! ((int )c1 == (int )c2)) {
        goto while_break___0;
      }
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: ;
    return ((int )c1 - (int )c2);
  }
}
}
size_t mbslen(char const   *string ) ;
size_t mbslen(char const   *string ) 
{ 
  size_t count ;
  mbui_iterator_t iter ;
  int tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  void *__cil_tmp9 ;
  void *__cil_tmp10 ;

  {
  {
  tmp___1 = __ctype_get_mb_cur_max();
  }
  if (tmp___1 > 1UL) {
    {
    count = (size_t )0;
    iter.cur.ptr = string;
    iter.in_shift = (_Bool)0;
    memset((void *)(& iter.state), '\000', sizeof(mbstate_t ));
    iter.next_done = (_Bool)0;
    }
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      mbuiter_multi_next(& iter);
      }
      if (iter.cur.wc_valid) {
        if (iter.cur.wc == 0) {
          tmp = 0;
        } else {
          tmp = 1;
        }
      } else {
        tmp = 1;
      }
      if (! tmp) {
        goto while_break;
      }
      count ++;
      iter.cur.ptr += iter.cur.bytes;
      iter.next_done = (_Bool)0;
    }
    while_break___0: /* CIL Label */ ;
    }
    while_break: ;
    return (count);
  } else {
    {
    tmp___0 = strlen(string);
    }
    return (tmp___0);
  }
}
}
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strnlen)(char const   *__string ,
                                                                                                 size_t __maxlen )  __attribute__((__pure__)) ;
char *mbsstr(char const   *haystack , char const   *needle ) ;
__inline static void mb_copy(mbchar_t *new_mbc , mbchar_t const   *old_mbc ) 
{ 
  _Bool tmp ;

  {
  if ((unsigned long )old_mbc->ptr == (unsigned long )(& old_mbc->buf[0])) {
    {
    memcpy((void */* __restrict  */)((void *)(& new_mbc->buf[0])), (void const   */* __restrict  */)((void const   *)(& old_mbc->buf[0])),
           (size_t )old_mbc->bytes);
    new_mbc->ptr = (char const   *)(& new_mbc->buf[0]);
    }
  } else {
    new_mbc->ptr = (char const   *)old_mbc->ptr;
  }
  new_mbc->bytes = (size_t )old_mbc->bytes;
  tmp = (_Bool )old_mbc->wc_valid;
  new_mbc->wc_valid = tmp;
  if (tmp) {
    new_mbc->wc = (wchar_t )old_mbc->wc;
  }
  return;
}
}
static _Bool knuth_morris_pratt_unibyte(char const   *haystack , char const   *needle ,
                                        char const   **resultp ) 
{ 
  size_t m ;
  size_t tmp ;
  size_t *table___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  int tmp___5 ;
  size_t i ;
  size_t j ;
  unsigned char b ;
  size_t j___0 ;
  char const   *rhaystack ;
  char const   *phaystack ;

  {
  {
  tmp = strlen(needle);
  m = tmp;
  }
  if (sizeof(ptrdiff_t ) <= sizeof(size_t )) {
    tmp___5 = -1;
  } else {
    tmp___5 = -2;
  }
  if (m > (size_t )tmp___5 / sizeof(size_t )) {
    tmp___4 = (void *)0;
  } else {
    if (m * sizeof(size_t ) < 4016UL) {
      {
      tmp___1 = __builtin_alloca(m * sizeof(size_t ) + 16UL);
      tmp___3 = (void *)((char *)tmp___1 + 16);
      }
    } else {
      {
      tmp___2 = mmalloca(m * sizeof(size_t ));
      tmp___3 = tmp___2;
      }
    }
    tmp___4 = tmp___3;
  }
  table___0 = (size_t *)tmp___4;
  if ((unsigned long )table___0 == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  }
  *(table___0 + 1) = (size_t )1;
  j = (size_t )0;
  i = (size_t )2;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < m)) {
      goto while_break;
    }
    b = (unsigned char )*(needle + (i - 1UL));
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if ((int )b == (int )((unsigned char )*(needle + j))) {
        j ++;
        *(table___0 + i) = i - j;
        goto while_break___0;
      }
      if (j == 0UL) {
        *(table___0 + i) = i;
        goto while_break___0;
      }
      j -= *(table___0 + j);
    }
    while_break___3: /* CIL Label */ ;
    }
    while_break___0: 
    i ++;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: 
  *resultp = (char const   *)((void *)0);
  j___0 = (size_t )0;
  rhaystack = haystack;
  phaystack = haystack;
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;

    if (! ((int const   )*phaystack != 0)) {
      goto while_break___1;
    }
    if ((int )((unsigned char )*(needle + j___0)) == (int )((unsigned char )*phaystack)) {
      j___0 ++;
      phaystack ++;
      if (j___0 == m) {
        *resultp = rhaystack;
        goto while_break___1;
      }
    } else
    if (j___0 > 0UL) {
      rhaystack += *(table___0 + j___0);
      j___0 -= *(table___0 + j___0);
    } else {
      rhaystack ++;
      phaystack ++;
    }
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break___1: 
  {
  freea((void *)table___0);
  }
  return ((_Bool)1);
}
}
static _Bool knuth_morris_pratt_multibyte(char const   *haystack , char const   *needle ,
                                          char const   **resultp ) 
{ 
  size_t m ;
  size_t tmp ;
  mbchar_t *needle_mbchars ;
  size_t *table___0 ;
  char *memory ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  int tmp___5 ;
  mbui_iterator_t iter ;
  size_t j ;
  int tmp___6 ;
  size_t i ;
  size_t j___0 ;
  mbchar_t *b ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  size_t j___1 ;
  mbui_iterator_t rhaystack ;
  mbui_iterator_t phaystack ;
  size_t count ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  void *__cil_tmp39 ;
  void *__cil_tmp40 ;
  void *__cil_tmp41 ;
  void *__cil_tmp42 ;
  void *__cil_tmp43 ;
  void *__cil_tmp44 ;

  {
  {
  tmp = mbslen(needle);
  m = tmp;
  }
  if (sizeof(ptrdiff_t ) <= sizeof(size_t )) {
    tmp___5 = -1;
  } else {
    tmp___5 = -2;
  }
  if (m > (size_t )tmp___5 / (sizeof(mbchar_t ) + sizeof(size_t ))) {
    tmp___4 = (void *)0;
  } else {
    if (m * (sizeof(mbchar_t ) + sizeof(size_t )) < 4016UL) {
      {
      tmp___1 = __builtin_alloca(m * (sizeof(mbchar_t ) + sizeof(size_t )) + 16UL);
      tmp___3 = (void *)((char *)tmp___1 + 16);
      }
    } else {
      {
      tmp___2 = mmalloca(m * (sizeof(mbchar_t ) + sizeof(size_t )));
      tmp___3 = tmp___2;
      }
    }
    tmp___4 = tmp___3;
  }
  memory = (char *)tmp___4;
  if ((unsigned long )memory == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  }
  {
  needle_mbchars = (mbchar_t *)memory;
  table___0 = (size_t *)(memory + m * sizeof(mbchar_t ));
  j = (size_t )0;
  iter.cur.ptr = needle;
  iter.in_shift = (_Bool)0;
  memset((void *)(& iter.state), '\000', sizeof(mbstate_t ));
  iter.next_done = (_Bool)0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    mbuiter_multi_next(& iter);
    }
    if (iter.cur.wc_valid) {
      if (iter.cur.wc == 0) {
        tmp___6 = 0;
      } else {
        tmp___6 = 1;
      }
    } else {
      tmp___6 = 1;
    }
    if (! tmp___6) {
      goto while_break;
    }
    {
    mb_copy(needle_mbchars + j, (mbchar_t const   *)(& iter.cur));
    iter.cur.ptr += iter.cur.bytes;
    iter.next_done = (_Bool)0;
    j ++;
    }
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break: 
  *(table___0 + 1) = (size_t )1;
  j___0 = (size_t )0;
  i = (size_t )2;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! (i < m)) {
      goto while_break___0;
    }
    b = needle_mbchars + (i - 1UL);
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;

      if (b->wc_valid) {
        if ((needle_mbchars + j___0)->wc_valid) {
          tmp___9 = b->wc == (needle_mbchars + j___0)->wc;
        } else {
          goto _L;
        }
      } else {
        _L: 
        if (b->bytes == (needle_mbchars + j___0)->bytes) {
          {
          tmp___7 = memcmp((void const   *)b->ptr, (void const   *)(needle_mbchars + j___0)->ptr,
                           b->bytes);
          }
          if (tmp___7 == 0) {
            tmp___8 = 1;
          } else {
            tmp___8 = 0;
          }
        } else {
          tmp___8 = 0;
        }
        tmp___9 = tmp___8;
      }
      if (tmp___9) {
        j___0 ++;
        *(table___0 + i) = i - j___0;
        goto while_break___1;
      }
      if (j___0 == 0UL) {
        *(table___0 + i) = i;
        goto while_break___1;
      }
      j___0 -= *(table___0 + j___0);
    }
    while_break___6: /* CIL Label */ ;
    }
    while_break___1: 
    i ++;
  }
  while_break___5: /* CIL Label */ ;
  }
  while_break___0: 
  {
  *resultp = (char const   *)((void *)0);
  j___1 = (size_t )0;
  rhaystack.cur.ptr = haystack;
  rhaystack.in_shift = (_Bool)0;
  memset((void *)(& rhaystack.state), '\000', sizeof(mbstate_t ));
  rhaystack.next_done = (_Bool)0;
  phaystack.cur.ptr = haystack;
  phaystack.in_shift = (_Bool)0;
  memset((void *)(& phaystack.state), '\000', sizeof(mbstate_t ));
  phaystack.next_done = (_Bool)0;
  }
  {
  while (1) {
    while_continue___2: /* CIL Label */ ;
    {
    mbuiter_multi_next(& phaystack);
    }
    if (phaystack.cur.wc_valid) {
      if (phaystack.cur.wc == 0) {
        tmp___15 = 0;
      } else {
        tmp___15 = 1;
      }
    } else {
      tmp___15 = 1;
    }
    if (! tmp___15) {
      goto while_break___2;
    }
    if ((needle_mbchars + j___1)->wc_valid) {
      if (phaystack.cur.wc_valid) {
        tmp___14 = (needle_mbchars + j___1)->wc == phaystack.cur.wc;
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      if ((needle_mbchars + j___1)->bytes == phaystack.cur.bytes) {
        {
        tmp___12 = memcmp((void const   *)(needle_mbchars + j___1)->ptr, (void const   *)phaystack.cur.ptr,
                          (needle_mbchars + j___1)->bytes);
        }
        if (tmp___12 == 0) {
          tmp___13 = 1;
        } else {
          tmp___13 = 0;
        }
      } else {
        tmp___13 = 0;
      }
      tmp___14 = tmp___13;
    }
    if (tmp___14) {
      j___1 ++;
      phaystack.cur.ptr += phaystack.cur.bytes;
      phaystack.next_done = (_Bool)0;
      if (j___1 == m) {
        *resultp = rhaystack.cur.ptr;
        goto while_break___2;
      }
    } else
    if (j___1 > 0UL) {
      count = *(table___0 + j___1);
      j___1 -= count;
      {
      while (1) {
        while_continue___3: /* CIL Label */ ;

        if (! (count > 0UL)) {
          goto while_break___3;
        }
        {
        mbuiter_multi_next(& rhaystack);
        }
        if (rhaystack.cur.wc_valid) {
          if (rhaystack.cur.wc == 0) {
            tmp___10 = 0;
          } else {
            tmp___10 = 1;
          }
        } else {
          tmp___10 = 1;
        }
        if (! tmp___10) {
          {
          abort();
          }
        }
        rhaystack.cur.ptr += rhaystack.cur.bytes;
        rhaystack.next_done = (_Bool)0;
        count --;
      }
      while_break___8: /* CIL Label */ ;
      }
      while_break___3: ;
    } else {
      {
      mbuiter_multi_next(& rhaystack);
      }
      if (rhaystack.cur.wc_valid) {
        if (rhaystack.cur.wc == 0) {
          tmp___11 = 0;
        } else {
          tmp___11 = 1;
        }
      } else {
        tmp___11 = 1;
      }
      if (! tmp___11) {
        {
        abort();
        }
      }
      rhaystack.cur.ptr += rhaystack.cur.bytes;
      rhaystack.next_done = (_Bool)0;
      phaystack.cur.ptr += phaystack.cur.bytes;
      phaystack.next_done = (_Bool)0;
    }
  }
  while_break___7: /* CIL Label */ ;
  }
  while_break___2: 
  {
  freea((void *)memory);
  }
  return ((_Bool)1);
}
}
char *mbsstr(char const   *haystack , char const   *needle ) 
{ 
  mbui_iterator_t iter_needle ;
  _Bool try_kmp ;
  size_t outer_loop_count ;
  size_t comparison_count ;
  size_t last_ccount ;
  mbui_iterator_t iter_needle_last_ccount ;
  mbui_iterator_t iter_haystack ;
  int tmp ;
  size_t count ;
  int tmp___0 ;
  char const   *result ;
  _Bool success ;
  _Bool tmp___1 ;
  int tmp___2 ;
  mbui_iterator_t rhaystack ;
  mbui_iterator_t rneedle ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  _Bool try_kmp___0 ;
  size_t outer_loop_count___0 ;
  size_t comparison_count___0 ;
  size_t last_ccount___0 ;
  char const   *needle_last_ccount ;
  char b ;
  char const   *tmp___13 ;
  size_t tmp___14 ;
  char const   *result___0 ;
  _Bool success___0 ;
  _Bool tmp___15 ;
  char const   *rhaystack___0 ;
  char const   *rneedle___0 ;
  size_t tmp___16 ;
  void *__cil_tmp53 ;
  void *__cil_tmp54 ;
  void *__cil_tmp55 ;
  void *__cil_tmp56 ;
  void *__cil_tmp57 ;
  void *__cil_tmp58 ;
  void *__cil_tmp59 ;
  void *__cil_tmp60 ;
  void *__cil_tmp61 ;
  void *__cil_tmp62 ;

  {
  {
  tmp___16 = __ctype_get_mb_cur_max();
  }
  if (tmp___16 > 1UL) {
    {
    iter_needle.cur.ptr = needle;
    iter_needle.in_shift = (_Bool)0;
    memset((void *)(& iter_needle.state), '\000', sizeof(mbstate_t ));
    iter_needle.next_done = (_Bool)0;
    mbuiter_multi_next(& iter_needle);
    }
    if (iter_needle.cur.wc_valid) {
      if (iter_needle.cur.wc == 0) {
        tmp___12 = 0;
      } else {
        tmp___12 = 1;
      }
    } else {
      tmp___12 = 1;
    }
    if (tmp___12) {
      {
      try_kmp = (_Bool)1;
      outer_loop_count = (size_t )0;
      comparison_count = (size_t )0;
      last_ccount = (size_t )0;
      iter_needle_last_ccount.cur.ptr = needle;
      iter_needle_last_ccount.in_shift = (_Bool)0;
      memset((void *)(& iter_needle_last_ccount.state), '\000', sizeof(mbstate_t ));
      iter_needle_last_ccount.next_done = (_Bool)0;
      iter_haystack.cur.ptr = haystack;
      iter_haystack.in_shift = (_Bool)0;
      memset((void *)(& iter_haystack.state), '\000', sizeof(mbstate_t ));
      iter_haystack.next_done = (_Bool)0;
      }
      {
      while (1) {
        while_continue: /* CIL Label */ ;
        {
        mbuiter_multi_next(& iter_haystack);
        }
        if (iter_haystack.cur.wc_valid) {
          if (iter_haystack.cur.wc == 0) {
            tmp = 0;
          } else {
            tmp = 1;
          }
        } else {
          tmp = 1;
        }
        if (! tmp) {
          return ((char *)((void *)0));
        }
        if (try_kmp) {
          if (outer_loop_count >= 10UL) {
            if (comparison_count >= 5UL * outer_loop_count) {
              count = comparison_count - last_ccount;
              {
              while (1) {
                while_continue___0: /* CIL Label */ ;

                if (count > 0UL) {
                  {
                  mbuiter_multi_next(& iter_needle_last_ccount);
                  }
                  if (iter_needle_last_ccount.cur.wc_valid) {
                    if (iter_needle_last_ccount.cur.wc == 0) {
                      tmp___0 = 0;
                    } else {
                      tmp___0 = 1;
                    }
                  } else {
                    tmp___0 = 1;
                  }
                  if (! tmp___0) {
                    goto while_break___0;
                  }
                } else {
                  goto while_break___0;
                }
                iter_needle_last_ccount.cur.ptr += iter_needle_last_ccount.cur.bytes;
                iter_needle_last_ccount.next_done = (_Bool)0;
                count --;
              }
              while_break___4: /* CIL Label */ ;
              }
              while_break___0: 
              {
              last_ccount = comparison_count;
              mbuiter_multi_next(& iter_needle_last_ccount);
              }
              if (iter_needle_last_ccount.cur.wc_valid) {
                if (iter_needle_last_ccount.cur.wc == 0) {
                  tmp___2 = 0;
                } else {
                  tmp___2 = 1;
                }
              } else {
                tmp___2 = 1;
              }
              if (! tmp___2) {
                {
                tmp___1 = knuth_morris_pratt_multibyte(haystack, needle, & result);
                success = tmp___1;
                }
                if (success) {
                  return ((char *)result);
                }
                try_kmp = (_Bool)0;
              }
            }
          }
        }
        outer_loop_count ++;
        comparison_count ++;
        if (iter_haystack.cur.wc_valid) {
          if (iter_needle.cur.wc_valid) {
            tmp___11 = iter_haystack.cur.wc == iter_needle.cur.wc;
          } else {
            goto _L___0;
          }
        } else {
          _L___0: 
          if (iter_haystack.cur.bytes == iter_needle.cur.bytes) {
            {
            tmp___9 = memcmp((void const   *)iter_haystack.cur.ptr, (void const   *)iter_needle.cur.ptr,
                             iter_haystack.cur.bytes);
            }
            if (tmp___9 == 0) {
              tmp___10 = 1;
            } else {
              tmp___10 = 0;
            }
          } else {
            tmp___10 = 0;
          }
          tmp___11 = tmp___10;
        }
        if (tmp___11) {
          {
          memcpy((void */* __restrict  */)((void *)(& rhaystack)), (void const   */* __restrict  */)((void const   *)(& iter_haystack)),
                 sizeof(mbui_iterator_t ));
          rhaystack.cur.ptr += rhaystack.cur.bytes;
          rhaystack.next_done = (_Bool)0;
          rneedle.cur.ptr = needle;
          rneedle.in_shift = (_Bool)0;
          memset((void *)(& rneedle.state), '\000', sizeof(mbstate_t ));
          rneedle.next_done = (_Bool)0;
          mbuiter_multi_next(& rneedle);
          }
          if (rneedle.cur.wc_valid) {
            if (rneedle.cur.wc == 0) {
              tmp___3 = 0;
            } else {
              tmp___3 = 1;
            }
          } else {
            tmp___3 = 1;
          }
          if (! tmp___3) {
            {
            abort();
            }
          }
          rneedle.cur.ptr += rneedle.cur.bytes;
          rneedle.next_done = (_Bool)0;
          {
          while (1) {
            while_continue___1: /* CIL Label */ ;
            {
            mbuiter_multi_next(& rneedle);
            }
            if (rneedle.cur.wc_valid) {
              if (rneedle.cur.wc == 0) {
                tmp___4 = 0;
              } else {
                tmp___4 = 1;
              }
            } else {
              tmp___4 = 1;
            }
            if (! tmp___4) {
              return ((char *)iter_haystack.cur.ptr);
            }
            {
            mbuiter_multi_next(& rhaystack);
            }
            if (rhaystack.cur.wc_valid) {
              if (rhaystack.cur.wc == 0) {
                tmp___5 = 0;
              } else {
                tmp___5 = 1;
              }
            } else {
              tmp___5 = 1;
            }
            if (! tmp___5) {
              return ((char *)((void *)0));
            }
            comparison_count ++;
            if (rhaystack.cur.wc_valid) {
              if (rneedle.cur.wc_valid) {
                tmp___8 = rhaystack.cur.wc == rneedle.cur.wc;
              } else {
                goto _L;
              }
            } else {
              _L: 
              if (rhaystack.cur.bytes == rneedle.cur.bytes) {
                {
                tmp___6 = memcmp((void const   *)rhaystack.cur.ptr, (void const   *)rneedle.cur.ptr,
                                 rhaystack.cur.bytes);
                }
                if (tmp___6 == 0) {
                  tmp___7 = 1;
                } else {
                  tmp___7 = 0;
                }
              } else {
                tmp___7 = 0;
              }
              tmp___8 = tmp___7;
            }
            if (! tmp___8) {
              goto while_break___1;
            }
            rhaystack.cur.ptr += rhaystack.cur.bytes;
            rhaystack.next_done = (_Bool)0;
            rneedle.cur.ptr += rneedle.cur.bytes;
            rneedle.next_done = (_Bool)0;
          }
          while_break___5: /* CIL Label */ ;
          }
          while_break___1: ;
        }
        iter_haystack.cur.ptr += iter_haystack.cur.bytes;
        iter_haystack.next_done = (_Bool)0;
      }
      while_break: /* CIL Label */ ;
      }

    } else {
      return ((char *)haystack);
    }
  } else
  if ((int const   )*needle != 0) {
    try_kmp___0 = (_Bool)1;
    outer_loop_count___0 = (size_t )0;
    comparison_count___0 = (size_t )0;
    last_ccount___0 = (size_t )0;
    needle_last_ccount = needle;
    tmp___13 = needle;
    needle ++;
    b = (char )*tmp___13;
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;

      if ((int const   )*haystack == 0) {
        return ((char *)((void *)0));
      }
      if (try_kmp___0) {
        if (outer_loop_count___0 >= 10UL) {
          if (comparison_count___0 >= 5UL * outer_loop_count___0) {
            if ((unsigned long )needle_last_ccount != (unsigned long )((void *)0)) {
              {
              tmp___14 = strnlen(needle_last_ccount, comparison_count___0 - last_ccount___0);
              needle_last_ccount += tmp___14;
              }
              if ((int const   )*needle_last_ccount == 0) {
                needle_last_ccount = (char const   *)((void *)0);
              }
              last_ccount___0 = comparison_count___0;
            }
            if ((unsigned long )needle_last_ccount == (unsigned long )((void *)0)) {
              {
              tmp___15 = knuth_morris_pratt_unibyte(haystack, needle - 1, & result___0);
              success___0 = tmp___15;
              }
              if (success___0) {
                return ((char *)result___0);
              }
              try_kmp___0 = (_Bool)0;
            }
          }
        }
      }
      outer_loop_count___0 ++;
      comparison_count___0 ++;
      if ((int const   )*haystack == (int const   )b) {
        rhaystack___0 = haystack + 1;
        rneedle___0 = needle;
        {
        while (1) {
          while_continue___3: /* CIL Label */ ;

          if ((int const   )*rneedle___0 == 0) {
            return ((char *)haystack);
          }
          if ((int const   )*rhaystack___0 == 0) {
            return ((char *)((void *)0));
          }
          comparison_count___0 ++;
          if ((int const   )*rhaystack___0 != (int const   )*rneedle___0) {
            goto while_break___3;
          }
          rhaystack___0 ++;
          rneedle___0 ++;
        }
        while_break___7: /* CIL Label */ ;
        }
        while_break___3: ;
      }
      haystack ++;
    }
    while_break___6: /* CIL Label */ ;
    }

  } else {
    return ((char *)haystack);
  }
  return ((char *)0);
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
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1),
__leaf__)) strtoul)(char const   * __restrict  __nptr , char ** __restrict  __endptr ,
                    int __base ) ;
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
int openat_safer(int fd , char const   *file , int flags  , ...) 
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
  tmp___0 = openat(fd, file, flags, mode);
  tmp___1 = fd_safer(tmp___0);
  }
  return (tmp___1);
}
}
extern DIR *( __attribute__((__nonnull__(1))) opendir)(char const   *__name ) ;
DIR *opendir_safer(char const   *name ) 
{ 
  DIR *dp ;
  DIR *tmp ;
  int fd ;
  int tmp___0 ;
  DIR *newdp ;
  int e ;
  int f ;
  int tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;

  {
  {
  tmp = opendir(name);
  dp = tmp;
  }
  if (dp) {
    {
    tmp___0 = dirfd(dp);
    fd = tmp___0;
    }
    if (0 <= fd) {
      if (fd <= 2) {
        {
        tmp___1 = dup_safer(fd);
        f = tmp___1;
        newdp = rpl_fdopendir(f);
        tmp___2 = __errno_location();
        e = *tmp___2;
        }
        if (! newdp) {
          {
          close(f);
          }
        }
        {
        closedir(dp);
        tmp___3 = __errno_location();
        *tmp___3 = e;
        dp = newdp;
        }
      }
    }
  }
  return (dp);
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
char *trim2(char const   *s , int how ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswalnum)(wint_t __wc ) ;
char *xstr_iconv(char const   *src , char const   *from_codeset , char const   *to_codeset ) ;
static _Bool mbsstr_trimmed_wordbounded(char const   *string , char const   *sub ) 
{ 
  char *tsub ;
  char *tmp ;
  _Bool found ;
  char const   *tsub_in_string ;
  char *tmp___0 ;
  mbui_iterator_t string_iter ;
  _Bool word_boundary_before ;
  _Bool word_boundary_after ;
  mbchar_t last_char_before_tsub ;
  int tmp___1 ;
  int tmp___2 ;
  mbui_iterator_t tsub_iter ;
  int tmp___3 ;
  int tmp___4 ;
  mbchar_t first_char_after_tsub ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  _Bool word_boundary_before___0 ;
  char const   *p ;
  _Bool word_boundary_after___0 ;
  unsigned short const   **tmp___8 ;
  size_t tmp___9 ;
  unsigned short const   **tmp___10 ;
  size_t tmp___11 ;
  void *__cil_tmp34 ;
  void *__cil_tmp35 ;
  void *__cil_tmp36 ;
  void *__cil_tmp37 ;
  void *__cil_tmp38 ;
  void *__cil_tmp39 ;

  {
  {
  tmp = trim2(sub, 2);
  tsub = tmp;
  found = (_Bool)0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((int const   )*string != 0)) {
      goto while_break;
    }
    {
    tmp___0 = mbsstr(string, (char const   *)tsub);
    tsub_in_string = (char const   *)tmp___0;
    }
    if ((unsigned long )tsub_in_string == (unsigned long )((void *)0)) {
      goto while_break;
    } else {
      {
      tmp___11 = __ctype_get_mb_cur_max();
      }
      if (tmp___11 > 1UL) {
        {
        string_iter.cur.ptr = string;
        string_iter.in_shift = (_Bool)0;
        memset((void *)(& string_iter.state), '\000', sizeof(mbstate_t ));
        string_iter.next_done = (_Bool)0;
        word_boundary_before = (_Bool)1;
        }
        if ((unsigned long )string_iter.cur.ptr < (unsigned long )tsub_in_string) {
          {
          while (1) {
            while_continue___0: /* CIL Label */ ;
            {
            mbuiter_multi_next(& string_iter);
            }
            if (string_iter.cur.wc_valid) {
              if (string_iter.cur.wc == 0) {
                tmp___1 = 0;
              } else {
                tmp___1 = 1;
              }
            } else {
              tmp___1 = 1;
            }
            if (! tmp___1) {
              {
              abort();
              }
            }
            last_char_before_tsub = string_iter.cur;
            string_iter.cur.ptr += string_iter.cur.bytes;
            string_iter.next_done = (_Bool)0;
            if (! ((unsigned long )string_iter.cur.ptr < (unsigned long )tsub_in_string)) {
              goto while_break___0;
            }
          }
          while_break___3: /* CIL Label */ ;
          }
          while_break___0: ;
          if (last_char_before_tsub.wc_valid) {
            {
            tmp___2 = iswalnum((wint_t )last_char_before_tsub.wc);
            }
            if (tmp___2) {
              word_boundary_before = (_Bool)0;
            }
          }
        }
        {
        string_iter.cur.ptr = tsub_in_string;
        string_iter.in_shift = (_Bool)0;
        memset((void *)(& string_iter.state), '\000', sizeof(mbstate_t ));
        string_iter.next_done = (_Bool)0;
        tsub_iter.cur.ptr = (char const   *)tsub;
        tsub_iter.in_shift = (_Bool)0;
        memset((void *)(& tsub_iter.state), '\000', sizeof(mbstate_t ));
        tsub_iter.next_done = (_Bool)0;
        }
        {
        while (1) {
          while_continue___1: /* CIL Label */ ;
          {
          mbuiter_multi_next(& tsub_iter);
          }
          if (tsub_iter.cur.wc_valid) {
            if (tsub_iter.cur.wc == 0) {
              tmp___4 = 0;
            } else {
              tmp___4 = 1;
            }
          } else {
            tmp___4 = 1;
          }
          if (! tmp___4) {
            goto while_break___1;
          }
          {
          mbuiter_multi_next(& string_iter);
          }
          if (string_iter.cur.wc_valid) {
            if (string_iter.cur.wc == 0) {
              tmp___3 = 0;
            } else {
              tmp___3 = 1;
            }
          } else {
            tmp___3 = 1;
          }
          if (! tmp___3) {
            {
            abort();
            }
          }
          string_iter.cur.ptr += string_iter.cur.bytes;
          string_iter.next_done = (_Bool)0;
          tsub_iter.cur.ptr += tsub_iter.cur.bytes;
          tsub_iter.next_done = (_Bool)0;
        }
        while_break___4: /* CIL Label */ ;
        }
        while_break___1: 
        {
        word_boundary_after = (_Bool)1;
        mbuiter_multi_next(& string_iter);
        }
        if (string_iter.cur.wc_valid) {
          if (string_iter.cur.wc == 0) {
            tmp___6 = 0;
          } else {
            tmp___6 = 1;
          }
        } else {
          tmp___6 = 1;
        }
        if (tmp___6) {
          first_char_after_tsub = string_iter.cur;
          if (first_char_after_tsub.wc_valid) {
            {
            tmp___5 = iswalnum((wint_t )first_char_after_tsub.wc);
            }
            if (tmp___5) {
              word_boundary_after = (_Bool)0;
            }
          }
        }
        if (word_boundary_before) {
          if (word_boundary_after) {
            found = (_Bool)1;
            goto while_break;
          }
        }
        {
        string_iter.cur.ptr = tsub_in_string;
        string_iter.in_shift = (_Bool)0;
        memset((void *)(& string_iter.state), '\000', sizeof(mbstate_t ));
        string_iter.next_done = (_Bool)0;
        mbuiter_multi_next(& string_iter);
        }
        if (string_iter.cur.wc_valid) {
          if (string_iter.cur.wc == 0) {
            tmp___7 = 0;
          } else {
            tmp___7 = 1;
          }
        } else {
          tmp___7 = 1;
        }
        if (! tmp___7) {
          goto while_break;
        }
        string = tsub_in_string + string_iter.cur.bytes;
      } else {
        word_boundary_before___0 = (_Bool)1;
        if ((unsigned long )string < (unsigned long )tsub_in_string) {
          {
          tmp___8 = __ctype_b_loc();
          }
          if ((int const   )*(*tmp___8 + (int )((unsigned char )*(tsub_in_string + -1))) & 8) {
            word_boundary_before___0 = (_Bool)0;
          }
        }
        {
        tmp___9 = strlen((char const   *)tsub);
        p = tsub_in_string + tmp___9;
        word_boundary_after___0 = (_Bool)1;
        }
        if ((int const   )*p != 0) {
          {
          tmp___10 = __ctype_b_loc();
          }
          if ((int const   )*(*tmp___10 + (int )((unsigned char )*p)) & 8) {
            word_boundary_after___0 = (_Bool)0;
          }
        }
        if (word_boundary_before___0) {
          if (word_boundary_after___0) {
            found = (_Bool)1;
            goto while_break;
          }
        }
        if ((int const   )*tsub_in_string == 0) {
          goto while_break;
        }
        string = tsub_in_string + 1;
      }
    }
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: 
  {
  free((void *)tsub);
  }
  return (found);
}
}
char const   *proper_name_utf8(char const   *name_ascii , char const   *name_utf8 ) 
{ 
  char const   *translation ;
  char *tmp ;
  char const   *locale_code ;
  char const   *tmp___0 ;
  char *alloc_name_converted ;
  char *alloc_name_converted_translit ;
  char const   *name_converted ;
  char const   *name_converted_translit ;
  char const   *name ;
  char *converted_translit ;
  size_t len ;
  size_t tmp___1 ;
  char *locale_code_translit ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  char const   *tmp___7 ;
  char *result ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  void *tmp___10 ;
  size_t tmp___11 ;
  size_t tmp___12 ;
  void *tmp___13 ;
  void *tmp___14 ;
  _Bool tmp___15 ;
  _Bool tmp___16 ;
  _Bool tmp___17 ;
  int tmp___18 ;
  char *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char *__cil_tmp41 ;
  char *__cil_tmp42 ;
  char *__cil_tmp43 ;

  {
  {
  tmp = gettext(name_ascii);
  translation = (char const   *)tmp;
  tmp___0 = locale_charset();
  locale_code = tmp___0;
  alloc_name_converted = (char *)((void *)0);
  alloc_name_converted_translit = (char *)((void *)0);
  name_converted = (char const   *)((void *)0);
  name_converted_translit = (char const   *)((void *)0);
  tmp___6 = c_strcasecmp(locale_code, "UTF-8");
  }
  if (tmp___6 != 0) {
    {
    alloc_name_converted = xstr_iconv(name_utf8, "UTF-8", locale_code);
    name_converted = (char const   *)alloc_name_converted;
    tmp___1 = strlen(locale_code);
    len = tmp___1;
    }
    if (sizeof(char ) == 1UL) {
      {
      tmp___2 = xmalloc((len + 10UL) + 1UL);
      tmp___4 = tmp___2;
      }
    } else {
      {
      tmp___3 = xnmalloc((len + 10UL) + 1UL, sizeof(char ));
      tmp___4 = tmp___3;
      }
    }
    {
    locale_code_translit = (char *)tmp___4;
    memcpy((void */* __restrict  */)((void *)locale_code_translit), (void const   */* __restrict  */)((void const   *)locale_code),
           len);
    memcpy((void */* __restrict  */)((void *)(locale_code_translit + len)), (void const   */* __restrict  */)((void const   *)"//TRANSLIT"),
           (size_t )11);
    converted_translit = xstr_iconv(name_utf8, "UTF-8", (char const   *)locale_code_translit);
    free((void *)locale_code_translit);
    }
    if ((unsigned long )converted_translit != (unsigned long )((void *)0)) {
      {
      tmp___5 = strchr((char const   *)converted_translit, '?');
      }
      if ((unsigned long )tmp___5 != (unsigned long )((void *)0)) {
        {
        free((void *)converted_translit);
        }
      } else {
        alloc_name_converted_translit = converted_translit;
        name_converted_translit = (char const   *)alloc_name_converted_translit;
      }
    }
  } else {
    name_converted = name_utf8;
    name_converted_translit = name_utf8;
  }
  if ((unsigned long )name_converted != (unsigned long )((void *)0)) {
    name = name_converted;
  } else {
    if ((unsigned long )name_converted_translit != (unsigned long )((void *)0)) {
      tmp___7 = name_converted_translit;
    } else {
      tmp___7 = name_ascii;
    }
    name = tmp___7;
  }
  {
  tmp___18 = strcmp(translation, name_ascii);
  }
  if (tmp___18 != 0) {
    {
    tmp___15 = mbsstr_trimmed_wordbounded(translation, name_ascii);
    }
    if (tmp___15) {
      goto _L;
    } else
    if ((unsigned long )name_converted != (unsigned long )((void *)0)) {
      {
      tmp___16 = mbsstr_trimmed_wordbounded(translation, name_converted);
      }
      if (tmp___16) {
        goto _L;
      } else {
        goto _L___1;
      }
    } else
    _L___1: 
    if ((unsigned long )name_converted_translit != (unsigned long )((void *)0)) {
      {
      tmp___17 = mbsstr_trimmed_wordbounded(translation, name_converted_translit);
      }
      if (tmp___17) {
        _L: 
        if ((unsigned long )alloc_name_converted != (unsigned long )((void *)0)) {
          {
          free((void *)alloc_name_converted);
          }
        }
        if ((unsigned long )alloc_name_converted_translit != (unsigned long )((void *)0)) {
          {
          free((void *)alloc_name_converted_translit);
          }
        }
        return (translation);
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      if (sizeof(char ) == 1UL) {
        {
        tmp___8 = strlen(translation);
        tmp___9 = strlen(name);
        tmp___10 = xmalloc((((tmp___8 + 2UL) + tmp___9) + 1UL) + 1UL);
        tmp___14 = tmp___10;
        }
      } else {
        {
        tmp___11 = strlen(translation);
        tmp___12 = strlen(name);
        tmp___13 = xnmalloc((((tmp___11 + 2UL) + tmp___12) + 1UL) + 1UL, sizeof(char ));
        tmp___14 = tmp___13;
        }
      }
      {
      result = (char *)tmp___14;
      sprintf((char */* __restrict  */)result, (char const   */* __restrict  */)"%s (%s)",
              translation, name);
      }
      if ((unsigned long )alloc_name_converted != (unsigned long )((void *)0)) {
        {
        free((void *)alloc_name_converted);
        }
      }
      if ((unsigned long )alloc_name_converted_translit != (unsigned long )((void *)0)) {
        {
        free((void *)alloc_name_converted_translit);
        }
      }
      return ((char const   *)result);
    }
  } else {
    if ((unsigned long )alloc_name_converted != (unsigned long )((void *)0)) {
      if ((unsigned long )alloc_name_converted != (unsigned long )name) {
        {
        free((void *)alloc_name_converted);
        }
      }
    }
    if ((unsigned long )alloc_name_converted_translit != (unsigned long )((void *)0)) {
      if ((unsigned long )alloc_name_converted_translit != (unsigned long )name) {
        {
        free((void *)alloc_name_converted_translit);
        }
      }
    }
    return (name);
  }
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
extern iconv_t iconv_open(char const   *__tocode , char const   *__fromcode ) ;
extern size_t iconv(iconv_t __cd , char ** __restrict  __inbuf , size_t * __restrict  __inbytesleft ,
                    char ** __restrict  __outbuf , size_t * __restrict  __outbytesleft ) ;
extern int iconv_close(iconv_t __cd ) ;
char *str_cd_iconv(char const   *src , iconv_t cd ) ;
char *str_iconv(char const   *src , char const   *from_codeset , char const   *to_codeset ) ;
char *str_cd_iconv(char const   *src , iconv_t cd ) 
{ 
  char *result ;
  size_t result_size ;
  size_t length ;
  char const   *inptr ;
  size_t inbytes_remaining ;
  size_t tmp ;
  size_t approx_sqrt_SIZE_MAX ;
  void *tmp___0 ;
  int *tmp___1 ;
  char *outptr ;
  size_t outbytes_remaining ;
  size_t res ;
  size_t tmp___2 ;
  size_t used ;
  size_t newsize ;
  char *newresult ;
  int *tmp___3 ;
  void *tmp___4 ;
  int *tmp___5 ;
  int *tmp___6 ;
  int *tmp___7 ;
  size_t res___0 ;
  size_t tmp___8 ;
  size_t used___0 ;
  size_t newsize___0 ;
  char *newresult___0 ;
  int *tmp___9 ;
  void *tmp___10 ;
  int *tmp___11 ;
  int *tmp___12 ;
  char *tmp___13 ;
  char *smaller_result ;
  void *tmp___14 ;
  int saved_errno ;
  int *tmp___15 ;
  int *tmp___16 ;

  {
  {
  inptr = src;
  tmp = strlen(src);
  inbytes_remaining = tmp;
  result_size = inbytes_remaining;
  approx_sqrt_SIZE_MAX = 0xffffffffffffffffUL >> (sizeof(size_t ) * 8UL) / 2UL;
  }
  if (result_size <= approx_sqrt_SIZE_MAX / 16UL) {
    result_size *= 16UL;
  }
  {
  result_size ++;
  tmp___0 = malloc(result_size);
  result = (char *)tmp___0;
  }
  if ((unsigned long )result == (unsigned long )((void *)0)) {
    {
    tmp___1 = __errno_location();
    *tmp___1 = 12;
    }
    return ((char *)((void *)0));
  }
  {
  iconv(cd, (char **/* __restrict  */)((char **)((void *)0)), (size_t */* __restrict  */)((size_t *)((void *)0)),
        (char **/* __restrict  */)((char **)((void *)0)), (size_t */* __restrict  */)((size_t *)((void *)0)));
  outptr = result;
  outbytes_remaining = result_size - 1UL;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp___2 = iconv(cd, (char **/* __restrict  */)((char **)(& inptr)), (size_t */* __restrict  */)(& inbytes_remaining),
                    (char **/* __restrict  */)(& outptr), (size_t */* __restrict  */)(& outbytes_remaining));
    res = tmp___2;
    }
    if (res == 0xffffffffffffffffUL) {
      {
      tmp___7 = __errno_location();
      }
      if (*tmp___7 == 22) {
        goto while_break;
      } else {
        {
        tmp___6 = __errno_location();
        }
        if (*tmp___6 == 7) {
          used = (size_t )(outptr - result);
          newsize = result_size * 2UL;
          if (! (newsize > result_size)) {
            {
            tmp___3 = __errno_location();
            *tmp___3 = 12;
            }
            goto failed;
          }
          {
          tmp___4 = realloc((void *)result, newsize);
          newresult = (char *)tmp___4;
          }
          if ((unsigned long )newresult == (unsigned long )((void *)0)) {
            {
            tmp___5 = __errno_location();
            *tmp___5 = 12;
            }
            goto failed;
          }
          result = newresult;
          result_size = newsize;
          outptr = result + used;
          outbytes_remaining = (result_size - 1UL) - used;
        } else {
          goto failed;
        }
      }
    } else {
      goto while_break;
    }
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: ;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;
    {
    tmp___8 = iconv(cd, (char **/* __restrict  */)((char **)((void *)0)), (size_t */* __restrict  */)((size_t *)((void *)0)),
                    (char **/* __restrict  */)(& outptr), (size_t */* __restrict  */)(& outbytes_remaining));
    res___0 = tmp___8;
    }
    if (res___0 == 0xffffffffffffffffUL) {
      {
      tmp___12 = __errno_location();
      }
      if (*tmp___12 == 7) {
        used___0 = (size_t )(outptr - result);
        newsize___0 = result_size * 2UL;
        if (! (newsize___0 > result_size)) {
          {
          tmp___9 = __errno_location();
          *tmp___9 = 12;
          }
          goto failed;
        }
        {
        tmp___10 = realloc((void *)result, newsize___0);
        newresult___0 = (char *)tmp___10;
        }
        if ((unsigned long )newresult___0 == (unsigned long )((void *)0)) {
          {
          tmp___11 = __errno_location();
          *tmp___11 = 12;
          }
          goto failed;
        }
        result = newresult___0;
        result_size = newsize___0;
        outptr = result + used___0;
        outbytes_remaining = (result_size - 1UL) - used___0;
      } else {
        goto failed;
      }
    } else {
      goto while_break___0;
    }
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: 
  tmp___13 = outptr;
  outptr ++;
  *tmp___13 = (char )'\000';
  length = (size_t )(outptr - result);
  if (length < result_size) {
    {
    tmp___14 = realloc((void *)result, length);
    smaller_result = (char *)tmp___14;
    }
    if ((unsigned long )smaller_result != (unsigned long )((void *)0)) {
      result = smaller_result;
    }
  }
  return (result);
  failed: 
  {
  tmp___15 = __errno_location();
  saved_errno = *tmp___15;
  free((void *)result);
  tmp___16 = __errno_location();
  *tmp___16 = saved_errno;
  }
  return ((char *)((void *)0));
}
}
char *str_iconv(char const   *src , char const   *from_codeset , char const   *to_codeset ) 
{ 
  char *result ;
  char *tmp ;
  int *tmp___0 ;
  iconv_t cd ;
  char *result___0 ;
  int saved_errno ;
  int *tmp___1 ;
  int *tmp___2 ;
  int saved_errno___0 ;
  int *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  if ((int const   )*src == 0) {
    goto _L;
  } else {
    {
    tmp___6 = c_strcasecmp(from_codeset, to_codeset);
    }
    if (tmp___6 == 0) {
      _L: 
      {
      tmp = strdup(src);
      result = tmp;
      }
      if ((unsigned long )result == (unsigned long )((void *)0)) {
        {
        tmp___0 = __errno_location();
        *tmp___0 = 12;
        }
      }
      return (result);
    } else {
      {
      cd = iconv_open(to_codeset, from_codeset);
      }
      if ((unsigned long )cd == (unsigned long )((iconv_t )-1)) {
        return ((char *)((void *)0));
      }
      {
      result___0 = str_cd_iconv(src, cd);
      }
      if ((unsigned long )result___0 == (unsigned long )((void *)0)) {
        {
        tmp___1 = __errno_location();
        saved_errno = *tmp___1;
        iconv_close(cd);
        tmp___2 = __errno_location();
        *tmp___2 = saved_errno;
        }
      } else {
        {
        tmp___5 = iconv_close(cd);
        }
        if (tmp___5 < 0) {
          {
          tmp___3 = __errno_location();
          saved_errno___0 = *tmp___3;
          free((void *)result___0);
          tmp___4 = __errno_location();
          *tmp___4 = saved_errno___0;
          }
          return ((char *)((void *)0));
        }
      }
      return (result___0);
    }
  }
}
}
size_t strnlen1(char const   *string , size_t maxlen ) 
{ 
  char const   *end ;
  void *tmp ;

  {
  {
  tmp = memchr((void const   *)string, '\000', maxlen);
  end = (char const   *)tmp;
  }
  if ((unsigned long )end != (unsigned long )((void *)0)) {
    return ((size_t )((end - string) + 1L));
  } else {
    return (maxlen);
  }
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswspace)(wint_t __wc ) ;
__inline static void mbiter_multi_next(struct mbiter_multi *iter ) 
{ 
  int tmp ;
  int tmp___0 ;
  _Bool tmp___1 ;

  {
  if (iter->next_done) {
    return;
  }
  if (iter->in_shift) {
    goto with_shift;
  }
  {
  tmp___1 = is_basic((char )*(iter->cur.ptr));
  }
  if (tmp___1) {
    iter->cur.bytes = (size_t )1;
    iter->cur.wc = (wchar_t )*(iter->cur.ptr);
    iter->cur.wc_valid = (_Bool)1;
  } else {
    {
    tmp = mbsinit((mbstate_t const   *)(& iter->state));
    }
    if (! tmp) {
      {
      __assert_fail("mbsinit (&iter->state)", "/home/wslee/project/coreutils-8.1/lib/mbiter.h",
                    134U, "mbiter_multi_next");
      }
    }
    iter->in_shift = (_Bool)1;
    with_shift: 
    {
    iter->cur.bytes = mbrtowc((wchar_t */* __restrict  */)(& iter->cur.wc), (char const   */* __restrict  */)iter->cur.ptr,
                              (size_t )(iter->limit - iter->cur.ptr), (mbstate_t */* __restrict  */)(& iter->state));
    }
    if (iter->cur.bytes == 0xffffffffffffffffUL) {
      iter->cur.bytes = (size_t )1;
      iter->cur.wc_valid = (_Bool)0;
    } else
    if (iter->cur.bytes == 0xfffffffffffffffeUL) {
      iter->cur.bytes = (size_t )(iter->limit - iter->cur.ptr);
      iter->cur.wc_valid = (_Bool)0;
    } else {
      if (iter->cur.bytes == 0UL) {
        iter->cur.bytes = (size_t )1;
        if (! ((int const   )*(iter->cur.ptr) == 0)) {
          {
          __assert_fail("*iter->cur.ptr == \'\\0\'", "/home/wslee/project/coreutils-8.1/lib/mbiter.h",
                        161U, "mbiter_multi_next");
          }
        }
        if (! (iter->cur.wc == 0)) {
          {
          __assert_fail("iter->cur.wc == 0", "/home/wslee/project/coreutils-8.1/lib/mbiter.h",
                        162U, "mbiter_multi_next");
          }
        }
      }
      {
      iter->cur.wc_valid = (_Bool)1;
      tmp___0 = mbsinit((mbstate_t const   *)(& iter->state));
      }
      if (tmp___0) {
        iter->in_shift = (_Bool)0;
      }
    }
  }
  iter->next_done = (_Bool)1;
  return;
}
}
char *trim2(char const   *s , int how ) 
{ 
  char *d ;
  mbi_iterator_t i ;
  size_t tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  int state ;
  char *r ;
  size_t tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  char *p ;
  unsigned short const   **tmp___8 ;
  size_t tmp___9 ;
  size_t tmp___10 ;
  unsigned short const   **tmp___11 ;
  size_t tmp___12 ;
  void *__cil_tmp24 ;
  void *__cil_tmp25 ;

  {
  {
  d = strdup(s);
  }
  if (! d) {
    {
    xalloc_die();
    }
  }
  {
  tmp___12 = __ctype_get_mb_cur_max();
  }
  if (tmp___12 > 1UL) {
    if (how != 0) {
      {
      i.cur.ptr = (char const   *)d;
      tmp = strlen((char const   *)d);
      i.limit = i.cur.ptr + tmp;
      i.in_shift = (_Bool)0;
      memset((void *)(& i.state), '\000', sizeof(mbstate_t ));
      i.next_done = (_Bool)0;
      }
      {
      while (1) {
        while_continue: /* CIL Label */ ;

        if ((unsigned long )i.cur.ptr < (unsigned long )i.limit) {
          {
          mbiter_multi_next(& i);
          }
          if (i.cur.wc_valid) {
            {
            tmp___0 = iswspace((wint_t )i.cur.wc);
            }
            if (! tmp___0) {
              goto while_break;
            }
          } else {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        i.cur.ptr += i.cur.bytes;
        i.next_done = (_Bool)0;
      }
      while_break___3: /* CIL Label */ ;
      }
      while_break: 
      {
      tmp___1 = strlen(i.cur.ptr);
      memmove((void *)d, (void const   *)i.cur.ptr, tmp___1 + 1UL);
      }
    }
    if (how != 1) {
      {
      state = 0;
      i.cur.ptr = (char const   *)d;
      tmp___2 = strlen((char const   *)d);
      i.limit = i.cur.ptr + tmp___2;
      i.in_shift = (_Bool)0;
      memset((void *)(& i.state), '\000', sizeof(mbstate_t ));
      i.next_done = (_Bool)0;
      }
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;

        if ((unsigned long )i.cur.ptr < (unsigned long )i.limit) {
          {
          mbiter_multi_next(& i);
          }
        } else {
          goto while_break___0;
        }
        if (state == 0) {
          if (i.cur.wc_valid) {
            {
            tmp___3 = iswspace((wint_t )i.cur.wc);
            }
            if (tmp___3) {
              state = 0;
              goto __Cont;
            }
          }
        }
        if (state == 0) {
          if (i.cur.wc_valid) {
            {
            tmp___4 = iswspace((wint_t )i.cur.wc);
            }
            if (! tmp___4) {
              state = 1;
              goto __Cont;
            }
          } else {
            state = 1;
            goto __Cont;
          }
        }
        if (state == 1) {
          if (i.cur.wc_valid) {
            {
            tmp___5 = iswspace((wint_t )i.cur.wc);
            }
            if (! tmp___5) {
              state = 1;
              goto __Cont;
            }
          } else {
            state = 1;
            goto __Cont;
          }
        }
        if (state == 1) {
          if (i.cur.wc_valid) {
            {
            tmp___7 = iswspace((wint_t )i.cur.wc);
            }
            if (tmp___7) {
              state = 2;
              r = (char *)i.cur.ptr;
            } else {
              goto _L;
            }
          } else {
            goto _L;
          }
        } else
        _L: 
        if (state == 2) {
          if (i.cur.wc_valid) {
            {
            tmp___6 = iswspace((wint_t )i.cur.wc);
            }
            if (tmp___6) {
              state = 2;
            } else {
              state = 1;
            }
          } else {
            state = 1;
          }
        } else {
          state = 1;
        }
        __Cont: 
        i.cur.ptr += i.cur.bytes;
        i.next_done = (_Bool)0;
      }
      while_break___4: /* CIL Label */ ;
      }
      while_break___0: ;
      if (state == 2) {
        *r = (char )'\000';
      }
    }
  } else {
    if (how != 0) {
      p = d;
      {
      while (1) {
        while_continue___1: /* CIL Label */ ;

        if (*p) {
          {
          tmp___8 = __ctype_b_loc();
          }
          if (! ((int const   )*(*tmp___8 + (int )((unsigned char )*p)) & 8192)) {
            goto while_break___1;
          }
        } else {
          goto while_break___1;
        }
        p ++;
      }
      while_break___5: /* CIL Label */ ;
      }
      while_break___1: 
      {
      tmp___9 = strlen((char const   *)p);
      memmove((void *)d, (void const   *)p, tmp___9 + 1UL);
      }
    }
    if (how != 1) {
      {
      tmp___10 = strlen((char const   *)d);
      p = (d + tmp___10) - 1;
      }
      {
      while (1) {
        while_continue___2: /* CIL Label */ ;

        if ((unsigned long )p >= (unsigned long )d) {
          {
          tmp___11 = __ctype_b_loc();
          }
          if (! ((int const   )*(*tmp___11 + (int )((unsigned char )*p)) & 8192)) {
            goto while_break___2;
          }
        } else {
          goto while_break___2;
        }
        *p = (char )'\000';
        p --;
      }
      while_break___6: /* CIL Label */ ;
      }
      while_break___2: ;
    }
  }
  return (d);
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
FTS *xfts_open(char * const  *argv , int options , int (*compar)(FTSENT const   ** ,
                                                                 FTSENT const   ** ) ) 
{ 
  FTS *fts ;
  FTS *tmp ;
  _Bool invalid_arg ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;

  {
  {
  tmp = fts_open(argv, options | 512, compar);
  fts = tmp;
  }
  if ((unsigned long )fts == (unsigned long )((void *)0)) {
    invalid_arg = (_Bool)0;
    {
    while (1) {
      while_continue: /* CIL Label */ ;

      if (! *argv) {
        goto while_break;
      }
      if ((int )*(*argv) == 0) {
        invalid_arg = (_Bool)1;
      }
      argv ++;
    }
    while_break___0: /* CIL Label */ ;
    }
    while_break: ;
    if (invalid_arg) {
      {
      tmp___0 = quote("");
      tmp___1 = gettext("invalid argument: %s");
      error(1, 0, (char const   *)tmp___1, tmp___0);
      }
    } else {
      {
      xalloc_die();
      }
    }
  }
  return (fts);
}
}
_Bool cycle_warning_required(FTS const   *fts , FTSENT const   *ent ) 
{ 
  int tmp ;

  {
  if (fts->fts_options & 16) {
    if (! (fts->fts_options & 1)) {
      tmp = 1;
    } else {
      goto _L;
    }
  } else
  _L: 
  if (fts->fts_options & 16) {
    if (fts->fts_options & 1) {
      if (ent->fts_level != 0L) {
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
  return ((_Bool )tmp);
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
void *x2realloc(void *p , size_t *pn ) 
{ 
  void *tmp ;

  {
  {
  tmp = x2nrealloc(p, pn, (size_t )1);
  }
  return (tmp);
}
}
void *xzalloc(size_t s )  __attribute__((__malloc__)) ;
void *xzalloc(size_t s ) 
{ 
  void *tmp ;
  void *tmp___0 ;

  {
  {
  tmp = xmalloc(s);
  tmp___0 = memset(tmp, 0, s);
  }
  return (tmp___0);
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
char *xstr_iconv(char const   *src , char const   *from_codeset , char const   *to_codeset ) 
{ 
  char *result ;
  char *tmp ;
  int *tmp___0 ;

  {
  {
  tmp = str_iconv(src, from_codeset, to_codeset);
  result = tmp;
  }
  if ((unsigned long )result == (unsigned long )((void *)0)) {
    {
    tmp___0 = __errno_location();
    }
    if (*tmp___0 == 12) {
      {
      xalloc_die();
      }
    }
  }
  return (result);
}
}
static void xstrtol_error(enum strtol_error err , int opt_idx , char c , struct option  const  *long_options___1 ,
                          char const   *arg , int exit_status ) 
{ 
  char const   *hyphens ;
  char const   *msgid ;
  char const   *option ;
  char option_buffer[2] ;
  char *tmp ;
  void *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;

  {
  hyphens = "--";
  if ((unsigned int )err == 4U) {
    goto case_4;
  }
  if ((unsigned int )err == 2U) {
    goto case_2;
  }
  if ((unsigned int )err == 3U) {
    goto case_2;
  }
  if ((unsigned int )err == 1U) {
    goto case_1;
  }
  goto switch_default;
  switch_default: 
  {
  abort();
  }
  case_4: 
  msgid = "invalid %s%s argument `%s\'";
  goto switch_break;
  case_2: 
  msgid = "invalid suffix in %s%s argument `%s\'";
  goto switch_break;
  case_1: 
  msgid = "%s%s argument `%s\' too large";
  goto switch_break;
  switch_break: ;
  if (opt_idx < 0) {
    hyphens -= opt_idx;
    option_buffer[0] = c;
    option_buffer[1] = (char )'\000';
    option = (char const   *)(option_buffer);
  } else {
    option = (char const   *)(long_options___1 + opt_idx)->name;
  }
  {
  tmp = gettext(msgid);
  error(exit_status, 0, (char const   *)tmp, hyphens, option, arg);
  }
  return;
}
}
 __attribute__((__noreturn__)) void xstrtol_fatal(enum strtol_error err , int opt_idx ,
                                                  char c , struct option  const  *long_options___1 ,
                                                  char const   *arg ) ;
void xstrtol_fatal(enum strtol_error err , int opt_idx , char c , struct option  const  *long_options___1 ,
                   char const   *arg ) 
{ 


  {
  {
  xstrtol_error(err, opt_idx, c, long_options___1, arg, (int )exit_failure);
  abort();
  }
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
