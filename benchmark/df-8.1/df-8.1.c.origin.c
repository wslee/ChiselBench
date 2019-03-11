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
typedef __dev_t dev_t;
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
struct fs_usage {
   uintmax_t fsu_blocksize ;
   uintmax_t fsu_blocks ;
   uintmax_t fsu_bfree ;
   uintmax_t fsu_bavail ;
   _Bool fsu_bavail_top_bit_set ;
   uintmax_t fsu_files ;
   uintmax_t fsu_ffree ;
};
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
struct mount_entry {
   char *me_devname ;
   char *me_mountdir ;
   char *me_type ;
   dev_t me_dev ;
   unsigned int me_dummy : 1 ;
   unsigned int me_remote : 1 ;
   unsigned int me_type_malloced : 1 ;
   struct mount_entry *me_next ;
};
struct saved_cwd {
   int desc ;
   char *name ;
};
struct fs_type_list {
   char *fs_name ;
   struct fs_type_list *fs_next ;
};
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
struct cd_buf {
   int fd ;
};
typedef __mode_t mode_t;
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_382776431 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_382776431 __mbstate_t;
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
typedef enum strtol_error strtol_error;
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
struct mntent {
   char *mnt_fsname ;
   char *mnt_dir ;
   char *mnt_type ;
   char *mnt_opts ;
   int mnt_freq ;
   int mnt_passno ;
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
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern char *optarg ;
extern int optind ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) stat)(char const   * __restrict  __file ,
                                                                                             struct stat * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd ,
                                                                                            struct stat *__buf ) ;
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) chdir)(char const   *__path ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) sync)(void) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) canonicalize_file_name)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file , int __oflag 
                                                   , ...) ;
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
char *dir_name(char const   *file ) ;
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
char *( __attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i , char *buf___0 ) ;
 __attribute__((__noreturn__)) void usage(int status ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
int get_fs_usage(char const   *file , char const   *disk , struct fs_usage *fsp ) ;
 __attribute__((__noreturn__)) void xstrtol_fatal(enum strtol_error err , int opt_idx ,
                                                  char c , struct option  const  *long_options___1 ,
                                                  char const   *arg ) ;
char *human_readable(uintmax_t n , char *buf___0 , int opts , uintmax_t from_block_size ,
                     uintmax_t to_block_size ) ;
enum strtol_error human_options(char const   *spec , int *opts , uintmax_t *block_size ) ;
struct mount_entry *read_file_system_list(_Bool need_fs_type ) ;
char const   *quote(char const   *name ) ;
int save_cwd(struct saved_cwd *cwd ) ;
int restore_cwd(struct saved_cwd  const  *cwd ) ;
void free_cwd(struct saved_cwd *cwd ) ;
char *xgetcwd(void) ;
static _Bool inode_format  ;
static _Bool show_all_fs  ;
static _Bool show_local_fs  ;
static _Bool show_listed_fs  ;
static int human_output_opts  ;
static uintmax_t output_block_size  ;
static _Bool posix_format  ;
static _Bool file_systems_processed  ;
static _Bool require_sync  ;
static int exit_status  ;
static struct fs_type_list *fs_select_list  ;
static struct fs_type_list *fs_exclude_list  ;
static struct mount_entry *mount_list  ;
static _Bool print_type  ;
static _Bool print_grand_total  ;
static struct fs_usage grand_fsu  ;
static struct option  const  long_options[17]  = 
  {      {"all", 0, (int *)((void *)0), 'a'}, 
        {"block-size", 1, (int *)((void *)0), 'B'}, 
        {"inodes", 0, (int *)((void *)0), 'i'}, 
        {"human-readable", 0, (int *)((void *)0), 'h'}, 
        {"si", 0, (int *)((void *)0), 'H'}, 
        {"local", 0, (int *)((void *)0), 'l'}, 
        {"megabytes", 0, (int *)((void *)0), 'm'}, 
        {"portability", 0, (int *)((void *)0), 'P'}, 
        {"print-type", 0, (int *)((void *)0), 'T'}, 
        {"sync", 0, (int *)((void *)0), 129}, 
        {"no-sync", 0, (int *)((void *)0), 128}, 
        {"total", 0, (int *)((void *)0), 'c'}, 
        {"type", 1, (int *)((void *)0), 't'}, 
        {"exclude-type", 1, (int *)((void *)0), 'x'}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
static void print_header(void) 
{ 
  char buf___0[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  int opts ;
  uintmax_t q1000 ;
  uintmax_t q1024 ;
  _Bool divisible_by_1000 ;
  _Bool divisible_by_1024 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  void *__cil_tmp26 ;
  char *__cil_tmp27 ;
  char *__cil_tmp28 ;
  char *__cil_tmp29 ;
  char *__cil_tmp30 ;
  char *__cil_tmp31 ;
  char *__cil_tmp32 ;
  char *__cil_tmp33 ;
  char *__cil_tmp34 ;

  {
  if (print_type) {
    {
    tmp = gettext("Filesystem    Type");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp), (FILE */* __restrict  */)stdout);
    }
  } else {
    {
    tmp___0 = gettext("Filesystem        ");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___0), (FILE */* __restrict  */)stdout);
    }
  }
  if (inode_format) {
    {
    tmp___1 = gettext("    Inodes   IUsed   IFree IUse%%");
    printf((char const   */* __restrict  */)((char const   *)tmp___1));
    }
  } else
  if (human_output_opts & 16) {
    if (human_output_opts & 32) {
      {
      tmp___2 = gettext("    Size  Used Avail Use%%");
      printf((char const   */* __restrict  */)((char const   *)tmp___2));
      }
    } else {
      {
      tmp___3 = gettext("     Size   Used  Avail Use%%");
      printf((char const   */* __restrict  */)((char const   *)tmp___3));
      }
    }
  } else
  if (posix_format) {
    {
    tmp___4 = umaxtostr(output_block_size, buf___0);
    tmp___5 = gettext(" %s-blocks      Used Available Capacity");
    printf((char const   */* __restrict  */)((char const   *)tmp___5), tmp___4);
    }
  } else {
    opts = 152 | (human_output_opts & 292);
    q1000 = output_block_size;
    q1024 = output_block_size;
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      divisible_by_1000 = (_Bool )(q1000 % 1000UL == 0UL);
      q1000 /= 1000UL;
      divisible_by_1024 = (_Bool )(q1024 % 1024UL == 0UL);
      q1024 /= 1024UL;
      if (! ((int )divisible_by_1000 & (int )divisible_by_1024)) {
        goto while_break;
      }
    }
    while_break___0: /* CIL Label */ ;
    }
    while_break: ;
    if ((int )divisible_by_1000 < (int )divisible_by_1024) {
      opts |= 32;
    }
    if ((int )divisible_by_1024 < (int )divisible_by_1000) {
      opts &= -33;
    }
    if (! (opts & 32)) {
      opts |= 256;
    }
    {
    tmp___6 = human_readable(output_block_size, buf___0, opts, (uintmax_t )1, (uintmax_t )1);
    tmp___7 = gettext(" %4s-blocks      Used Available Use%%");
    printf((char const   */* __restrict  */)((char const   *)tmp___7), tmp___6);
    }
  }
  {
  tmp___8 = gettext(" Mounted on\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___8));
  }
  return;
}
}
static _Bool selected_fstype(char const   *fstype ) 
{ 
  struct fs_type_list  const  *fsp ;
  int tmp ;

  {
  if ((unsigned long )fs_select_list == (unsigned long )((void *)0)) {
    return ((_Bool)1);
  } else
  if ((unsigned long )fstype == (unsigned long )((void *)0)) {
    return ((_Bool)1);
  }
  fsp = (struct fs_type_list  const  *)fs_select_list;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! fsp) {
      goto while_break;
    }
    {
    tmp = strcmp(fstype, (char const   *)fsp->fs_name);
    }
    if (tmp == 0) {
      return ((_Bool)1);
    }
    fsp = (struct fs_type_list  const  *)fsp->fs_next;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)0);
}
}
static _Bool excluded_fstype(char const   *fstype ) 
{ 
  struct fs_type_list  const  *fsp ;
  int tmp ;

  {
  if ((unsigned long )fs_exclude_list == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  } else
  if ((unsigned long )fstype == (unsigned long )((void *)0)) {
    return ((_Bool)0);
  }
  fsp = (struct fs_type_list  const  *)fs_exclude_list;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! fsp) {
      goto while_break;
    }
    {
    tmp = strcmp(fstype, (char const   *)fsp->fs_name);
    }
    if (tmp == 0) {
      return ((_Bool)1);
    }
    fsp = (struct fs_type_list  const  *)fsp->fs_next;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return ((_Bool)0);
}
}
static _Bool known_value(uintmax_t n ) 
{ 


  {
  return ((_Bool )(n < 0xfffffffffffffffeUL));
}
}
static char const   *df_readable(_Bool negative , uintmax_t n , char *buf___0 , uintmax_t input_units ,
                                 uintmax_t output_units ) 
{ 
  char *p ;
  uintmax_t tmp ;
  char *tmp___0 ;
  _Bool tmp___1 ;
  char *__cil_tmp11 ;

  {
  {
  tmp___1 = known_value(n);
  }
  if (tmp___1) {
    _L: 
    if (negative) {
      tmp = - n;
    } else {
      tmp = n;
    }
    {
    tmp___0 = human_readable(tmp, buf___0 + (int )negative, human_output_opts, input_units,
                             output_units);
    p = tmp___0;
    }
    if (negative) {
      p --;
      *p = (char )'-';
    }
    return ((char const   *)p);
  } else
  if (! negative) {
    return ("-");
  } else {
    goto _L;
  }
}
}
static void add_uint_with_neg_flag(uintmax_t *dest , _Bool *dest_neg , uintmax_t src ,
                                   _Bool src_neg ) 
{ 


  {
  if (! *dest_neg == ! src_neg) {
    *dest += src;
    return;
  }
  if (*dest_neg) {
    *dest = - *dest;
  }
  if (src_neg) {
    src = - src;
  }
  if (src < *dest) {
    *dest -= src;
  } else {
    *dest = src - *dest;
    *dest_neg = src_neg;
  }
  if (*dest_neg) {
    *dest = - *dest;
  }
  return;
}
}
static void show_dev(char const   *disk , char const   *mount_point , char const   *stat_file ,
                     char const   *fstype , _Bool me_dummy , _Bool me_remote , struct fs_usage  const  *force_fsu ) 
{ 
  struct fs_usage fsu ;
  char buf___0[3][(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 2UL] ;
  int width ;
  int col1_adjustment ;
  int use_width ;
  uintmax_t input_units ;
  uintmax_t output_units ;
  uintmax_t total ;
  uintmax_t available ;
  _Bool negate_available ;
  uintmax_t available_to_root ;
  uintmax_t used ;
  _Bool negate_used ;
  double pct ;
  _Bool tmp ;
  _Bool tmp___0 ;
  char const   *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  size_t disk_name_len ;
  size_t tmp___4 ;
  size_t fstype_len ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  _Bool tmp___7 ;
  _Bool tmp___8 ;
  uintmax_t b ;
  _Bool tmp___9 ;
  int tmp___10 ;
  _Bool tmp___11 ;
  _Bool tmp___12 ;
  _Bool tmp___13 ;
  _Bool tmp___14 ;
  _Bool tmp___15 ;
  char const   *tmp___16 ;
  char const   *tmp___17 ;
  char const   *tmp___18 ;
  uintmax_t u100 ;
  uintmax_t nonroot_total ;
  double u ;
  double tmp___19 ;
  double a ;
  double tmp___20 ;
  double nonroot_total___0 ;
  long lipct ;
  double ipct ;
  _Bool tmp___21 ;
  _Bool tmp___22 ;
  void *__cil_tmp61 ;
  int __cil_tmp62 ;
  void *__cil_tmp63 ;
  char *__cil_tmp64 ;
  char *__cil_tmp65 ;

  {
  col1_adjustment = 0;
  pct = (double )-1;
  if (me_remote) {
    if (show_local_fs) {
      return;
    }
  }
  if (me_dummy) {
    if (! show_all_fs) {
      if (! show_listed_fs) {
        return;
      }
    }
  }
  {
  tmp = selected_fstype(fstype);
  }
  if (tmp) {
    {
    tmp___0 = excluded_fstype(fstype);
    }
    if (tmp___0) {
      return;
    }
  } else {
    return;
  }
  if (! stat_file) {
    if (mount_point) {
      stat_file = mount_point;
    } else {
      stat_file = disk;
    }
  }
  if (force_fsu) {
    fsu = (struct fs_usage )*force_fsu;
  } else {
    {
    tmp___3 = get_fs_usage(stat_file, disk, & fsu);
    }
    if (tmp___3) {
      {
      tmp___1 = quote(stat_file);
      tmp___2 = __errno_location();
      error(0, *tmp___2, "%s", tmp___1);
      exit_status = 1;
      }
      return;
    }
  }
  if (fsu.fsu_blocks == 0UL) {
    if (! show_all_fs) {
      if (! show_listed_fs) {
        return;
      }
    }
  }
  if (! file_systems_processed) {
    {
    file_systems_processed = (_Bool)1;
    print_header();
    }
  }
  if (! disk) {
    disk = "-";
  }
  if (! fstype) {
    fstype = "-";
  }
  if (print_type) {
    {
    tmp___4 = strlen(disk);
    disk_name_len = tmp___4;
    tmp___5 = strlen(fstype);
    fstype_len = tmp___5;
    }
    if (disk_name_len + fstype_len < 18UL) {
      {
      printf((char const   */* __restrict  */)"%s%*s  ", disk, 18 - (int )disk_name_len,
             fstype);
      }
    } else
    if (! posix_format) {
      {
      printf((char const   */* __restrict  */)"%s\n%18s  ", disk, fstype);
      }
    } else {
      {
      printf((char const   */* __restrict  */)"%s %s", disk, fstype);
      }
    }
  } else {
    {
    tmp___6 = strlen(disk);
    }
    if (tmp___6 > 20UL) {
      if (! posix_format) {
        {
        printf((char const   */* __restrict  */)"%s\n%20s", disk, "");
        }
      } else {
        {
        printf((char const   */* __restrict  */)"%-20s", disk);
        }
      }
    } else {
      {
      printf((char const   */* __restrict  */)"%-20s", disk);
      }
    }
  }
  if (inode_format) {
    {
    width = 7;
    use_width = 5;
    output_units = (uintmax_t )1;
    input_units = output_units;
    total = fsu.fsu_files;
    available = fsu.fsu_ffree;
    negate_available = (_Bool)0;
    available_to_root = available;
    tmp___7 = known_value(total);
    }
    if (tmp___7) {
      grand_fsu.fsu_files += total;
    }
    {
    tmp___8 = known_value(available);
    }
    if (tmp___8) {
      grand_fsu.fsu_ffree += available;
    }
  } else {
    if (human_output_opts & 16) {
      width = 5 + ! (human_output_opts & 32);
    } else {
      width = 9;
      if (posix_format) {
        col1_adjustment = -3;
        b = output_block_size;
        {
        while (1) {
          while_continue: /* CIL Label */ ;

          if (! (9UL < b)) {
            goto while_break;
          }
          col1_adjustment ++;
          b /= 10UL;
        }
        while_break___0: /* CIL Label */ ;
        }
        while_break: ;
      }
    }
    if (posix_format) {
      if (! (human_output_opts & 16)) {
        use_width = 8;
      } else {
        use_width = 4;
      }
    } else {
      use_width = 4;
    }
    input_units = fsu.fsu_blocksize;
    output_units = output_block_size;
    total = fsu.fsu_blocks;
    available = fsu.fsu_bavail;
    if (fsu.fsu_bavail_top_bit_set) {
      {
      tmp___9 = known_value(available);
      }
      if (tmp___9) {
        tmp___10 = 1;
      } else {
        tmp___10 = 0;
      }
    } else {
      tmp___10 = 0;
    }
    {
    negate_available = (_Bool )tmp___10;
    available_to_root = fsu.fsu_bfree;
    tmp___11 = known_value(total);
    }
    if (tmp___11) {
      grand_fsu.fsu_blocks += input_units * total;
    }
    {
    tmp___12 = known_value(available_to_root);
    }
    if (tmp___12) {
      grand_fsu.fsu_bfree += input_units * available_to_root;
    }
    {
    tmp___13 = known_value(available);
    }
    if (tmp___13) {
      {
      add_uint_with_neg_flag(& grand_fsu.fsu_bavail, & grand_fsu.fsu_bavail_top_bit_set,
                             input_units * available, negate_available);
      }
    }
  }
  {
  used = 0xffffffffffffffffUL;
  negate_used = (_Bool)0;
  tmp___14 = known_value(total);
  }
  if (tmp___14) {
    {
    tmp___15 = known_value(available_to_root);
    }
    if (tmp___15) {
      used = total - available_to_root;
      negate_used = (_Bool )(total < available_to_root);
    }
  }
  {
  tmp___16 = df_readable(negate_available, available, buf___0[2], input_units, output_units);
  tmp___17 = df_readable(negate_used, used, buf___0[1], input_units, output_units);
  tmp___18 = df_readable((_Bool)0, total, buf___0[0], input_units, output_units);
  printf((char const   */* __restrict  */)" %*s %*s %*s ", width + col1_adjustment,
         tmp___18, width, tmp___17, width, tmp___16);
  tmp___21 = known_value(used);
  }
  if (tmp___21) {
    {
    tmp___22 = known_value(available);
    }
    if (tmp___22) {
      if (! negate_used) {
        if (used <= 184467440737095516UL) {
          if (used + available != 0UL) {
            if ((used + available < used) == (int )negate_available) {
              u100 = used * 100UL;
              nonroot_total = used + available;
              pct = (double )(u100 / nonroot_total + (uintmax_t )(u100 % nonroot_total != 0UL));
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
        if (negate_used) {
          tmp___19 = - ((double )(- used));
        } else {
          tmp___19 = (double )used;
        }
        u = tmp___19;
        if (negate_available) {
          tmp___20 = - ((double )(- available));
        } else {
          tmp___20 = (double )available;
        }
        a = tmp___20;
        nonroot_total___0 = u + a;
        if (nonroot_total___0) {
          pct = (u * (double )100) / nonroot_total___0;
          lipct = (long )pct;
          ipct = (double )lipct;
          if (ipct - (double )1 < pct) {
            if (pct <= ipct + (double )1) {
              pct = ipct + (double )(ipct < pct);
            }
          }
        }
      }
    }
  }
  if ((double )0 <= pct) {
    {
    printf((char const   */* __restrict  */)"%*.0f%%", use_width - 1, pct);
    }
  } else {
    {
    printf((char const   */* __restrict  */)"%*s", use_width, "- ");
    }
  }
  if (mount_point) {
    {
    printf((char const   */* __restrict  */)" %s", mount_point);
    }
  }
  {
  putchar_unlocked('\n');
  }
  return;
}
}
static char *find_mount_point(char const   *file , struct stat  const  *file_stat ) 
{ 
  struct saved_cwd cwd ;
  struct stat last_stat ;
  char *mp ;
  char *tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  char *xdir ;
  char *tmp___6 ;
  char *dir ;
  char const   *__old ;
  size_t __len ;
  size_t tmp___7 ;
  char *__new ;
  void *tmp___8 ;
  void *tmp___9 ;
  char const   *tmp___10 ;
  char *tmp___11 ;
  int *tmp___12 ;
  int tmp___13 ;
  char const   *tmp___14 ;
  char *tmp___15 ;
  int *tmp___16 ;
  int tmp___17 ;
  struct stat st ;
  char const   *tmp___18 ;
  char *tmp___19 ;
  int *tmp___20 ;
  int tmp___21 ;
  char const   *tmp___22 ;
  char *tmp___23 ;
  int *tmp___24 ;
  int tmp___25 ;
  int save_errno ;
  int *tmp___26 ;
  char *tmp___27 ;
  int *tmp___28 ;
  int tmp___29 ;
  int *tmp___30 ;
  void *__cil_tmp56 ;
  void *__cil_tmp57 ;
  char *__cil_tmp58 ;
  char *__cil_tmp59 ;
  char *__cil_tmp60 ;
  char *__cil_tmp61 ;
  char *__cil_tmp62 ;
  char *__cil_tmp63 ;
  char *__cil_tmp64 ;
  char *__cil_tmp65 ;
  char *__cil_tmp66 ;

  {
  {
  mp = (char *)((void *)0);
  tmp___1 = save_cwd(& cwd);
  }
  if (tmp___1 != 0) {
    {
    tmp = gettext("cannot get current directory");
    tmp___0 = __errno_location();
    error(0, *tmp___0, (char const   *)tmp);
    }
    return ((char *)((void *)0));
  }
  if ((file_stat->st_mode & 61440U) == 16384U) {
    {
    last_stat = (struct stat )*file_stat;
    tmp___5 = chdir(file);
    }
    if (tmp___5 < 0) {
      {
      tmp___2 = quote(file);
      tmp___3 = gettext("cannot change to directory %s");
      tmp___4 = __errno_location();
      error(0, *tmp___4, (char const   *)tmp___3, tmp___2);
      }
      return ((char *)((void *)0));
    }
  } else {
    {
    tmp___6 = dir_name(file);
    xdir = tmp___6;
    }
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      __old = (char const   *)xdir;
      tmp___7 = strlen(__old);
      __len = tmp___7 + 1UL;
      tmp___8 = __builtin_alloca(__len);
      __new = (char *)tmp___8;
      tmp___9 = memcpy((void */* __restrict  */)((void *)__new), (void const   */* __restrict  */)((void const   *)__old),
                       __len);
      dir = (char *)tmp___9;
      }
      goto while_break;
    }
    while_break___1: /* CIL Label */ ;
    }
    while_break: 
    {
    free((void *)xdir);
    tmp___13 = chdir((char const   *)dir);
    }
    if (tmp___13 < 0) {
      {
      tmp___10 = quote((char const   *)dir);
      tmp___11 = gettext("cannot change to directory %s");
      tmp___12 = __errno_location();
      error(0, *tmp___12, (char const   *)tmp___11, tmp___10);
      }
      return ((char *)((void *)0));
    }
    {
    tmp___17 = stat((char const   */* __restrict  */)".", (struct stat */* __restrict  */)(& last_stat));
    }
    if (tmp___17 < 0) {
      {
      tmp___14 = quote((char const   *)dir);
      tmp___15 = gettext("cannot stat current directory (now %s)");
      tmp___16 = __errno_location();
      error(0, *tmp___16, (char const   *)tmp___15, tmp___14);
      }
      goto done;
    }
  }
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;
    {
    tmp___21 = stat((char const   */* __restrict  */)"..", (struct stat */* __restrict  */)(& st));
    }
    if (tmp___21 < 0) {
      {
      tmp___18 = quote("..");
      tmp___19 = gettext("cannot stat %s");
      tmp___20 = __errno_location();
      error(0, *tmp___20, (char const   *)tmp___19, tmp___18);
      }
      goto done;
    }
    if (st.st_dev != last_stat.st_dev) {
      goto while_break___0;
    } else
    if (st.st_ino == last_stat.st_ino) {
      goto while_break___0;
    }
    {
    tmp___25 = chdir("..");
    }
    if (tmp___25 < 0) {
      {
      tmp___22 = quote("..");
      tmp___23 = gettext("cannot change to directory %s");
      tmp___24 = __errno_location();
      error(0, *tmp___24, (char const   *)tmp___23, tmp___22);
      }
      goto done;
    }
    last_stat = st;
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: 
  {
  mp = xgetcwd();
  }
  done: 
  {
  tmp___26 = __errno_location();
  save_errno = *tmp___26;
  tmp___29 = restore_cwd((struct saved_cwd  const  *)(& cwd));
  }
  if (tmp___29 != 0) {
    {
    tmp___27 = gettext("failed to return to initial working directory");
    tmp___28 = __errno_location();
    error(1, *tmp___28, (char const   *)tmp___27);
    }
  }
  {
  free_cwd(& cwd);
  tmp___30 = __errno_location();
  *tmp___30 = save_errno;
  }
  return (mp);
}
}
static _Bool show_disk(char const   *disk ) 
{ 
  struct mount_entry  const  *me ;
  struct mount_entry  const  *best_match ;
  int tmp ;

  {
  best_match = (struct mount_entry  const  *)((void *)0);
  me = (struct mount_entry  const  *)mount_list;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! me) {
      goto while_break;
    }
    {
    tmp = strcmp(disk, (char const   *)me->me_devname);
    }
    if (tmp == 0) {
      best_match = me;
    }
    me = (struct mount_entry  const  *)me->me_next;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (best_match) {
    {
    show_dev((char const   *)best_match->me_devname, (char const   *)best_match->me_mountdir,
             (char const   *)((void *)0), (char const   *)best_match->me_type, (_Bool )best_match->me_dummy,
             (_Bool )best_match->me_remote, (struct fs_usage  const  *)((void *)0));
    }
    return ((_Bool)1);
  }
  return ((_Bool)0);
}
}
static void show_point(char const   *point , struct stat  const  *statp ) 
{ 
  struct stat disk_stats ;
  struct mount_entry *me ;
  struct mount_entry  const  *best_match ;
  int tmp ;
  int tmp___0 ;
  char *resolved ;
  char *tmp___1 ;
  size_t resolved_len ;
  size_t tmp___2 ;
  size_t best_match_len ;
  size_t len ;
  size_t tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  char const   *tmp___7 ;
  int *tmp___8 ;
  int *tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  char *mp ;
  char *tmp___13 ;
  void *__cil_tmp27 ;

  {
  best_match = (struct mount_entry  const  *)((void *)0);
  if ((int const   )*point == 47) {
    me = mount_list;
    {
    while (1) {
      while_continue: /* CIL Label */ ;

      if (! me) {
        goto while_break;
      }
      {
      tmp = strcmp((char const   *)me->me_mountdir, point);
      }
      if (tmp == 0) {
        {
        tmp___0 = strcmp((char const   *)me->me_type, "lofs");
        }
        if (! (tmp___0 == 0)) {
          if (! best_match) {
            best_match = (struct mount_entry  const  *)me;
          } else
          if (best_match->me_dummy) {
            best_match = (struct mount_entry  const  *)me;
          } else
          if (! me->me_dummy) {
            best_match = (struct mount_entry  const  *)me;
          }
        }
      }
      me = me->me_next;
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break: ;
  }
  if (! best_match) {
    {
    tmp___1 = canonicalize_file_name(point);
    resolved = tmp___1;
    }
    if (resolved) {
      if ((int )*(resolved + 0) == 47) {
        {
        tmp___2 = strlen((char const   *)resolved);
        resolved_len = tmp___2;
        best_match_len = (size_t )0;
        me = mount_list;
        }
        {
        while (1) {
          while_continue___0: /* CIL Label */ ;

          if (! me) {
            goto while_break___0;
          }
          {
          tmp___5 = strcmp((char const   *)me->me_type, "lofs");
          }
          if (! (tmp___5 == 0)) {
            if (! best_match) {
              goto _L___0;
            } else
            if (best_match->me_dummy) {
              goto _L___0;
            } else
            if (! me->me_dummy) {
              _L___0: 
              {
              tmp___3 = strlen((char const   *)me->me_mountdir);
              len = tmp___3;
              }
              if (best_match_len <= len) {
                if (len <= resolved_len) {
                  if (len == 1UL) {
                    best_match = (struct mount_entry  const  *)me;
                    best_match_len = len;
                  } else
                  if (len == resolved_len) {
                    goto _L;
                  } else
                  if ((int )*(resolved + len) == 47) {
                    _L: 
                    {
                    tmp___4 = strncmp((char const   *)me->me_mountdir, (char const   *)resolved,
                                      len);
                    }
                    if (tmp___4 == 0) {
                      best_match = (struct mount_entry  const  *)me;
                      best_match_len = len;
                    }
                  }
                }
              }
            }
          }
          me = me->me_next;
        }
        while_break___3: /* CIL Label */ ;
        }
        while_break___0: ;
      }
    }
    {
    free((void *)resolved);
    }
    if (best_match) {
      {
      tmp___6 = stat((char const   */* __restrict  */)((char const   *)best_match->me_mountdir),
                     (struct stat */* __restrict  */)(& disk_stats));
      }
      if (tmp___6 != 0) {
        best_match = (struct mount_entry  const  *)((void *)0);
      } else
      if (disk_stats.st_dev != (__dev_t )statp->st_dev) {
        best_match = (struct mount_entry  const  *)((void *)0);
      }
    }
  }
  if (! best_match) {
    me = mount_list;
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;

      if (! me) {
        goto while_break___1;
      }
      if (me->me_dev == 0xffffffffffffffffUL) {
        {
        tmp___10 = stat((char const   */* __restrict  */)((char const   *)me->me_mountdir),
                        (struct stat */* __restrict  */)(& disk_stats));
        }
        if (tmp___10 == 0) {
          me->me_dev = disk_stats.st_dev;
        } else {
          {
          tmp___9 = __errno_location();
          }
          if (*tmp___9 == 5) {
            {
            tmp___7 = quote((char const   *)me->me_mountdir);
            tmp___8 = __errno_location();
            error(0, *tmp___8, "%s", tmp___7);
            exit_status = 1;
            }
          }
          me->me_dev = (dev_t )-2;
        }
      }
      if (statp->st_dev == (__dev_t const   )me->me_dev) {
        {
        tmp___12 = strcmp((char const   *)me->me_type, "lofs");
        }
        if (! (tmp___12 == 0)) {
          if (! best_match) {
            goto _L___1;
          } else
          if (best_match->me_dummy) {
            goto _L___1;
          } else
          if (! me->me_dummy) {
            _L___1: 
            {
            tmp___11 = stat((char const   */* __restrict  */)((char const   *)me->me_mountdir),
                            (struct stat */* __restrict  */)(& disk_stats));
            }
            if (tmp___11 != 0) {
              me->me_dev = (dev_t )-2;
            } else
            if (disk_stats.st_dev != me->me_dev) {
              me->me_dev = (dev_t )-2;
            } else {
              best_match = (struct mount_entry  const  *)me;
            }
          }
        }
      }
      me = me->me_next;
    }
    while_break___4: /* CIL Label */ ;
    }
    while_break___1: ;
  }
  if (best_match) {
    {
    show_dev((char const   *)best_match->me_devname, (char const   *)best_match->me_mountdir,
             point, (char const   *)best_match->me_type, (_Bool )best_match->me_dummy,
             (_Bool )best_match->me_remote, (struct fs_usage  const  *)((void *)0));
    }
  } else {
    {
    tmp___13 = find_mount_point(point, statp);
    mp = tmp___13;
    }
    if (mp) {
      {
      show_dev((char const   *)((void *)0), (char const   *)mp, (char const   *)((void *)0),
               (char const   *)((void *)0), (_Bool)0, (_Bool)0, (struct fs_usage  const  *)((void *)0));
      free((void *)mp);
      }
    }
  }
  return;
}
}
static void show_entry(char const   *name , struct stat  const  *statp ) 
{ 
  _Bool tmp ;

  {
  if ((statp->st_mode & 61440U) == 24576U) {
    goto _L;
  } else
  if ((statp->st_mode & 61440U) == 8192U) {
    _L: 
    {
    tmp = show_disk(name);
    }
    if (tmp) {
      return;
    }
  }
  {
  show_point(name, statp);
  }
  return;
}
}
static void show_all_entries(void) 
{ 
  struct mount_entry *me ;

  {
  me = mount_list;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! me) {
      goto while_break;
    }
    {
    show_dev((char const   *)me->me_devname, (char const   *)me->me_mountdir, (char const   *)((void *)0),
             (char const   *)me->me_type, (_Bool )me->me_dummy, (_Bool )me->me_remote,
             (struct fs_usage  const  *)((void *)0));
    me = me->me_next;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return;
}
}
static void add_fs_type(char const   *fstype ) 
{ 
  struct fs_type_list *fsp ;
  void *tmp ;

  {
  {
  tmp = xmalloc(sizeof(*fsp));
  fsp = (struct fs_type_list *)tmp;
  fsp->fs_name = (char *)fstype;
  fsp->fs_next = fs_select_list;
  fs_select_list = fsp;
  }
  return;
}
}
static void add_excluded_fs_type(char const   *fstype ) 
{ 
  struct fs_type_list *fsp ;
  void *tmp ;

  {
  {
  tmp = xmalloc(sizeof(*fsp));
  fsp = (struct fs_type_list *)tmp;
  fsp->fs_name = (char *)fstype;
  fsp->fs_next = fs_exclude_list;
  fs_exclude_list = fsp;
  }
  return;
}
}
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
  char *__cil_tmp21 ;
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
    tmp___1 = gettext("Show information about the file system on which each FILE resides,\nor all file systems by default.\n\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___1), (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -a, --all             include dummy file systems\n  -B, --block-size=SIZE  use SIZE-byte blocks\n      --total           produce a grand total\n  -h, --human-readable  print sizes in human readable format (e.g., 1K 234M 2G)\n  -H, --si              likewise, but use powers of 1000 not 1024\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("  -i, --inodes          list inode information instead of block usage\n  -k                    like --block-size=1K\n  -l, --local           limit listing to local file systems\n      --no-sync         do not invoke sync before getting usage info (default)\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  -P, --portability     use the POSIX output format\n      --sync            invoke sync before getting usage info\n  -t, --type=TYPE       limit listing to file systems of type TYPE\n  -T, --print-type      print file system type\n  -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE\n  -v                    (ignored)\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___5), (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___6), (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___7), (FILE */* __restrict  */)stdout);
    emit_blocksize_note("DF");
    emit_size_note();
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
  struct stat *stats ;
  int oi ;
  int c ;
  int tmp ;
  enum strtol_error e ;
  enum strtol_error tmp___0 ;
  char const   *tmp___1 ;
  char *tmp___3 ;
  char *tmp___4 ;
  _Bool match ;
  struct fs_type_list *fs_incl ;
  struct fs_type_list *fs_excl ;
  char const   *tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;
  int i ;
  void *tmp___8 ;
  int fd ;
  int tmp___9 ;
  char const   *tmp___10 ;
  int *tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int status ;
  int tmp___15 ;
  char const   *warning ;
  char *tmp___16 ;
  char const   *tmp___17 ;
  char *tmp___18 ;
  int *tmp___19 ;
  int i___0 ;
  char *tmp___20 ;
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

  {
  {
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  fs_select_list = (struct fs_type_list *)((void *)0);
  fs_exclude_list = (struct fs_type_list *)((void *)0);
  inode_format = (_Bool)0;
  show_all_fs = (_Bool)0;
  show_listed_fs = (_Bool)0;
  human_output_opts = -1;
  print_type = (_Bool)0;
  file_systems_processed = (_Bool)0;
  posix_format = (_Bool)0;
  exit_status = 0;
  print_grand_total = (_Bool)0;
  grand_fsu.fsu_blocksize = (uintmax_t )1;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    oi = -1;
    tmp = getopt_long(argc, (char * const  *)argv, "aB:iF:hHklmPTt:vx:", long_options,
                      & oi);
    c = tmp;
    }
    if (c == -1) {
      goto while_break;
    }
    if (c == 97) {
      goto case_97;
    }
    if (c == 66) {
      goto case_66;
    }
    if (c == 105) {
      goto case_105;
    }
    if (c == 104) {
      goto case_104;
    }
    if (c == 72) {
      goto case_72;
    }
    if (c == 107) {
      goto case_107;
    }
    if (c == 108) {
      goto case_108;
    }
    if (c == 109) {
      goto case_109;
    }
    if (c == 84) {
      goto case_84;
    }
    if (c == 80) {
      goto case_80;
    }
    if (c == 129) {
      goto case_129;
    }
    if (c == 128) {
      goto case_128;
    }
    if (c == 70) {
      goto case_70;
    }
    if (c == 116) {
      goto case_70;
    }
    if (c == 118) {
      goto case_118;
    }
    if (c == 120) {
      goto case_120;
    }
    if (c == 99) {
      goto case_99;
    }
    if (c == -130) {
      goto case_neg_130;
    }
    if (c == -131) {
      goto case_neg_131;
    }
    goto switch_default;
    case_97: 
    show_all_fs = (_Bool)1;
    goto switch_break;
    case_66: 
    {
    tmp___0 = human_options((char const   *)optarg, & human_output_opts, & output_block_size);
    e = tmp___0;
    }
    if ((unsigned int )e != 0U) {
      {
      xstrtol_fatal(e, oi, (char )c, long_options, (char const   *)optarg);
      }
    }
    goto switch_break;
    case_105: 
    inode_format = (_Bool)1;
    goto switch_break;
    case_104: 
    human_output_opts = 176;
    output_block_size = (uintmax_t )1;
    goto switch_break;
    case_72: 
    human_output_opts = 144;
    output_block_size = (uintmax_t )1;
    goto switch_break;
    case_107: 
    human_output_opts = 0;
    output_block_size = (uintmax_t )1024;
    goto switch_break;
    case_108: 
    show_local_fs = (_Bool)1;
    goto switch_break;
    case_109: 
    human_output_opts = 0;
    output_block_size = (uintmax_t )1048576;
    goto switch_break;
    case_84: 
    print_type = (_Bool)1;
    goto switch_break;
    case_80: 
    posix_format = (_Bool)1;
    goto switch_break;
    case_129: 
    require_sync = (_Bool)1;
    goto switch_break;
    case_128: 
    require_sync = (_Bool)0;
    goto switch_break;
    case_70: 
    {
    add_fs_type((char const   *)optarg);
    }
    goto switch_break;
    case_118: 
    goto switch_break;
    case_120: 
    {
    add_excluded_fs_type((char const   *)optarg);
    }
    goto switch_break;
    case_99: 
    print_grand_total = (_Bool)1;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    tmp___1 = proper_name_utf8("Torbjorn Granlund", "Torbj\303\266rn Granlund");
    version_etc(stdout, "df", "GNU coreutils", Version, tmp___1, "David MacKenzie",
                "Paul Eggert", (char *)((void *)0));
    exit(0);
    }
    goto switch_break;
    switch_default: 
    {
    usage(1);
    }
    switch_break: ;
  }
  while_break___4: /* CIL Label */ ;
  }
  while_break: ;
  if (human_output_opts == -1) {
    if (posix_format) {
      {
      human_output_opts = 0;
      tmp___3 = getenv("POSIXLY_CORRECT");
      }
      if (tmp___3) {
        output_block_size = (uintmax_t )512;
      } else {
        output_block_size = (uintmax_t )1024;
      }
    } else {
      {
      tmp___4 = getenv("DF_BLOCK_SIZE");
      human_options((char const   *)tmp___4, & human_output_opts, & output_block_size);
      }
    }
  }
  match = (_Bool)0;
  fs_incl = fs_select_list;
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! fs_incl) {
      goto while_break___0;
    }
    fs_excl = fs_exclude_list;
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;

      if (! fs_excl) {
        goto while_break___1;
      }
      {
      tmp___7 = strcmp((char const   *)fs_incl->fs_name, (char const   *)fs_excl->fs_name);
      }
      if (tmp___7 == 0) {
        {
        tmp___5 = quote((char const   *)fs_incl->fs_name);
        tmp___6 = gettext("file system type %s both selected and excluded");
        error(0, 0, (char const   *)tmp___6, tmp___5);
        match = (_Bool)1;
        }
        goto while_break___1;
      }
      fs_excl = fs_excl->fs_next;
    }
    while_break___6: /* CIL Label */ ;
    }
    while_break___1: 
    fs_incl = fs_incl->fs_next;
  }
  while_break___5: /* CIL Label */ ;
  }
  while_break___0: ;
  if (match) {
    {
    exit(1);
    }
  }
  if (optind < argc) {
    {
    tmp___8 = xnmalloc((size_t )(argc - optind), sizeof(*stats));
    stats = (struct stat *)tmp___8;
    i = optind;
    }
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;

      if (! (i < argc)) {
        goto while_break___2;
      }
      {
      tmp___9 = open((char const   *)*(argv + i), 256);
      fd = tmp___9;
      }
      if (fd < 0) {
        goto _L;
      } else {
        {
        tmp___12 = fstat(fd, stats + (i - optind));
        }
        if (tmp___12) {
          _L: 
          {
          tmp___13 = stat((char const   */* __restrict  */)((char const   *)*(argv + i)),
                          (struct stat */* __restrict  */)(stats + (i - optind)));
          }
          if (tmp___13) {
            {
            tmp___10 = quote((char const   *)*(argv + i));
            tmp___11 = __errno_location();
            error(0, *tmp___11, "%s", tmp___10);
            exit_status = 1;
            *(argv + i) = (char *)((void *)0);
            }
          }
        }
      }
      if (0 <= fd) {
        {
        close(fd);
        }
      }
      i ++;
    }
    while_break___7: /* CIL Label */ ;
    }
    while_break___2: ;
  }
  if ((unsigned long )fs_select_list != (unsigned long )((void *)0)) {
    tmp___14 = 1;
  } else
  if ((unsigned long )fs_exclude_list != (unsigned long )((void *)0)) {
    tmp___14 = 1;
  } else
  if (print_type) {
    tmp___14 = 1;
  } else
  if (show_local_fs) {
    tmp___14 = 1;
  } else {
    tmp___14 = 0;
  }
  {
  mount_list = read_file_system_list((_Bool )tmp___14);
  }
  if ((unsigned long )mount_list == (unsigned long )((void *)0)) {
    if (optind < argc) {
      tmp___15 = 0;
    } else {
      tmp___15 = 1;
    }
    status = tmp___15;
    if (optind < argc) {
      {
      tmp___16 = gettext("Warning: ");
      tmp___17 = (char const   *)tmp___16;
      }
    } else {
      tmp___17 = "";
    }
    {
    warning = tmp___17;
    tmp___18 = gettext("cannot read table of mounted file systems");
    tmp___19 = __errno_location();
    error(status, *tmp___19, "%s%s", warning, tmp___18);
    }
  }
  if (require_sync) {
    {
    sync();
    }
  }
  if (optind < argc) {
    show_listed_fs = (_Bool)1;
    i___0 = optind;
    {
    while (1) {
      while_continue___3: /* CIL Label */ ;

      if (! (i___0 < argc)) {
        goto while_break___3;
      }
      if (*(argv + i___0)) {
        {
        show_entry((char const   *)*(argv + i___0), (struct stat  const  *)(stats + (i___0 - optind)));
        }
      }
      i___0 ++;
    }
    while_break___8: /* CIL Label */ ;
    }
    while_break___3: ;
  } else {
    {
    show_all_entries();
    }
  }
  if (print_grand_total) {
    if (inode_format) {
      grand_fsu.fsu_blocks = (uintmax_t )1;
    }
    {
    show_dev("total", (char const   *)((void *)0), (char const   *)((void *)0), (char const   *)((void *)0),
             (_Bool)0, (_Bool)0, (struct fs_usage  const  *)(& grand_fsu));
    }
  }
  if (! file_systems_processed) {
    {
    tmp___20 = gettext("no file systems processed");
    error(1, 0, (char const   *)tmp___20);
    }
  }
  {
  exit(exit_status);
  }
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
ptrdiff_t argmatch(char const   *arg , char const   * const  *arglist , char const   *vallist ,
                   size_t valsize ) ;
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
char const   *simple_backup_suffix ;
void *xrealloc(void *p , size_t n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
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
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const   *__s ,
                                                                                               int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2), __leaf__)) strspn)(char const   *__s ,
                                                                                                  char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fchdir)(int __fd ) ;
int chdir_long(char *dir ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) __assert_fail)(char const   *__assertion ,
                                                                                                   char const   *__file ,
                                                                                                   unsigned int __line ,
                                                                                                   char const   *__function ) ;
extern int ( __attribute__((__nonnull__(2))) openat)(int __fd , char const   *__file ,
                                                     int __oflag  , ...) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memrchr)(void const   *__s ,
                                                                                                int __c ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
__inline static void cdb_init(struct cd_buf *cdb ) 
{ 


  {
  cdb->fd = -100;
  return;
}
}
__inline static int cdb_fchdir(struct cd_buf  const  *cdb ) 
{ 
  int tmp ;

  {
  {
  tmp = fchdir((int )cdb->fd);
  }
  return (tmp);
}
}
__inline static void cdb_free(struct cd_buf  const  *cdb ) 
{ 
  _Bool close_fail ;
  int tmp ;

  {
  if (0 <= (int )cdb->fd) {
    {
    tmp = close((int )cdb->fd);
    close_fail = (_Bool )tmp;
    }
    if (! (! close_fail)) {
      {
      __assert_fail("! close_fail", "/home/wslee/project/coreutils-8.1/lib/chdir-long.c",
                    63U, "cdb_free");
      }
    }
  }
  return;
}
}
static int cdb_advance_fd(struct cd_buf *cdb , char const   *dir ) 
{ 
  int new_fd ;
  int tmp ;

  {
  {
  tmp = openat(cdb->fd, dir, 67840);
  new_fd = tmp;
  }
  if (new_fd < 0) {
    return (-1);
  }
  {
  cdb_free((struct cd_buf  const  *)cdb);
  cdb->fd = new_fd;
  }
  return (0);
}
}
__inline static char *find_non_slash(char const   *s ) 
{ 
  size_t n_slash ;
  size_t tmp ;

  {
  {
  tmp = strspn(s, "/");
  n_slash = tmp;
  }
  return ((char *)s + n_slash);
}
}
int chdir_long(char *dir ) 
{ 
  int e ;
  int tmp ;
  int *tmp___0 ;
  size_t len ;
  size_t tmp___1 ;
  char *dir_end ;
  struct cd_buf cdb ;
  size_t n_leading_slash ;
  int err ;
  char *slash ;
  void *tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  int err___0 ;
  char *slash___0 ;
  void *tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int saved_errno ;
  int *tmp___9 ;
  int *tmp___10 ;
  char *__cil_tmp25 ;

  {
  {
  tmp = chdir((char const   *)dir);
  e = tmp;
  }
  if (e == 0) {
    return (e);
  } else {
    {
    tmp___0 = __errno_location();
    }
    if (*tmp___0 != 36) {
      return (e);
    }
  }
  {
  tmp___1 = strlen((char const   *)dir);
  len = tmp___1;
  dir_end = dir + len;
  cdb_init(& cdb);
  }
  if (! (0UL < len)) {
    {
    __assert_fail("0 < len", "/home/wslee/project/coreutils-8.1/lib/chdir-long.c",
                  125U, "chdir_long");
    }
  }
  if (! (4096UL <= len)) {
    {
    __assert_fail("PATH_MAX <= len", "/home/wslee/project/coreutils-8.1/lib/chdir-long.c",
                  126U, "chdir_long");
    }
  }
  {
  n_leading_slash = strspn((char const   *)dir, "/");
  }
  if (n_leading_slash == 2UL) {
    {
    tmp___2 = memchr((void const   *)(dir + 3), '/', (size_t )(dir_end - (dir + 3)));
    slash = (char *)tmp___2;
    }
    if ((unsigned long )slash == (unsigned long )((void *)0)) {
      {
      tmp___3 = __errno_location();
      *tmp___3 = 36;
      }
      return (-1);
    }
    {
    *slash = (char )'\000';
    err = cdb_advance_fd(& cdb, (char const   *)dir);
    *slash = (char )'/';
    }
    if (err != 0) {
      goto Fail;
    }
    {
    dir = find_non_slash((char const   *)(slash + 1));
    }
  } else
  if (n_leading_slash) {
    {
    tmp___4 = cdb_advance_fd(& cdb, "/");
    }
    if (tmp___4 != 0) {
      goto Fail;
    }
    dir += n_leading_slash;
  }
  if (! ((int )*dir != 47)) {
    {
    __assert_fail("*dir != \'/\'", "/home/wslee/project/coreutils-8.1/lib/chdir-long.c",
                  161U, "chdir_long");
    }
  }
  if (! ((unsigned long )dir <= (unsigned long )dir_end)) {
    {
    __assert_fail("dir <= dir_end", "/home/wslee/project/coreutils-8.1/lib/chdir-long.c",
                  162U, "chdir_long");
    }
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (4096L <= dir_end - dir)) {
      goto while_break;
    }
    {
    tmp___5 = memrchr((void const   *)dir, '/', (size_t )4096);
    slash___0 = (char *)tmp___5;
    }
    if ((unsigned long )slash___0 == (unsigned long )((void *)0)) {
      {
      tmp___6 = __errno_location();
      *tmp___6 = 36;
      }
      return (-1);
    }
    *slash___0 = (char )'\000';
    if (! (slash___0 - dir < 4096L)) {
      {
      __assert_fail("slash - dir < PATH_MAX", "/home/wslee/project/coreutils-8.1/lib/chdir-long.c",
                    178U, "chdir_long");
      }
    }
    {
    err___0 = cdb_advance_fd(& cdb, (char const   *)dir);
    *slash___0 = (char )'/';
    }
    if (err___0 != 0) {
      goto Fail;
    }
    {
    dir = find_non_slash((char const   *)(slash___0 + 1));
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if ((unsigned long )dir < (unsigned long )dir_end) {
    {
    tmp___7 = cdb_advance_fd(& cdb, (char const   *)dir);
    }
    if (tmp___7 != 0) {
      goto Fail;
    }
  }
  {
  tmp___8 = cdb_fchdir((struct cd_buf  const  *)(& cdb));
  }
  if (tmp___8 != 0) {
    goto Fail;
  }
  {
  cdb_free((struct cd_buf  const  *)(& cdb));
  }
  return (0);
  Fail: 
  {
  tmp___9 = __errno_location();
  saved_errno = *tmp___9;
  cdb_free((struct cd_buf  const  *)(& cdb));
  tmp___10 = __errno_location();
  *tmp___10 = saved_errno;
  }
  return (-1);
}
}
extern int fcntl(int __fd , int __cmd  , ...) ;
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
char *mdir_name(char const   *file ) ;
size_t dir_len(char const   *file ) ;
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
char *mdir_name(char const   *file ) 
{ 
  size_t length ;
  size_t tmp ;
  _Bool append_dot ;
  int tmp___0 ;
  char *dir ;
  void *tmp___1 ;
  size_t tmp___2 ;

  {
  {
  tmp = dir_len(file);
  length = tmp;
  }
  if (length == 0UL) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  {
  append_dot = (_Bool )tmp___0;
  tmp___1 = malloc((length + (size_t )append_dot) + 1UL);
  dir = (char *)tmp___1;
  }
  if (! dir) {
    return ((char *)((void *)0));
  }
  {
  memcpy((void */* __restrict  */)((void *)dir), (void const   */* __restrict  */)((void const   *)file),
         length);
  }
  if (append_dot) {
    tmp___2 = length;
    length ++;
    *(dir + tmp___2) = (char )'.';
  }
  *(dir + length) = (char )'\000';
  return (dir);
}
}
char *dir_name(char const   *file ) 
{ 
  char *result ;
  char *tmp ;

  {
  {
  tmp = mdir_name(file);
  result = tmp;
  }
  if (! result) {
    {
    xalloc_die();
    }
  }
  return (result);
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
extern int getc_unlocked(FILE *__stream ) ;
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
char *xstrdup(char const   *string )  __attribute__((__malloc__)) ;
int volatile   exit_failure  =    (int volatile   )1;
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
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) fdopen)(int __fd ,
                                                                               char const   *__modes ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) statfs)(char const   *__file ,
                                                                                               struct statfs *__buf ) ;
int get_fs_usage(char const   *file , char const   *disk , struct fs_usage *fsp ) 
{ 
  struct statfs fsd ;
  int tmp ;
  int tmp___1 ;
  int tmp___3 ;
  int tmp___5 ;
  int tmp___7 ;
  int tmp___9 ;
  void *__cil_tmp13 ;
  void *__cil_tmp14 ;

  {
  {
  tmp = statfs(file, & fsd);
  }
  if (tmp < 0) {
    return (-1);
  }
  if (sizeof(fsd.f_bsize) < sizeof(uintmax_t )) {
    if (sizeof(fsd.f_bsize) < sizeof(int )) {
      tmp___1 = - (1 << sizeof(fsd.f_bsize) * 8UL);
    } else {
      tmp___1 = 0;
    }
    if (~ fsd.f_bsize == (__fsword_t )tmp___1) {
      fsp->fsu_blocksize = 0xffffffffffffffffUL;
    } else {
      fsp->fsu_blocksize = (uintmax_t )fsd.f_bsize;
    }
  } else {
    fsp->fsu_blocksize = (uintmax_t )fsd.f_bsize;
  }
  if (sizeof(fsd.f_blocks) < sizeof(uintmax_t )) {
    if (sizeof(fsd.f_blocks) < sizeof(int )) {
      tmp___3 = - (1 << sizeof(fsd.f_blocks) * 8UL);
    } else {
      tmp___3 = 0;
    }
    if (~ fsd.f_blocks == (__fsblkcnt_t )tmp___3) {
      fsp->fsu_blocks = 0xffffffffffffffffUL;
    } else {
      fsp->fsu_blocks = fsd.f_blocks;
    }
  } else {
    fsp->fsu_blocks = fsd.f_blocks;
  }
  if (sizeof(fsd.f_bfree) < sizeof(uintmax_t )) {
    if (sizeof(fsd.f_bfree) < sizeof(int )) {
      tmp___5 = - (1 << sizeof(fsd.f_bfree) * 8UL);
    } else {
      tmp___5 = 0;
    }
    if (~ fsd.f_bfree == (__fsblkcnt_t )tmp___5) {
      fsp->fsu_bfree = 0xffffffffffffffffUL;
    } else {
      fsp->fsu_bfree = fsd.f_bfree;
    }
  } else {
    fsp->fsu_bfree = fsd.f_bfree;
  }
  fsp->fsu_bavail = fsd.f_bavail | ~ ((fsd.f_bavail & (1UL << (sizeof(fsd.f_bavail) * 8UL - 1UL))) - 1UL);
  fsp->fsu_bavail_top_bit_set = (_Bool )((fsd.f_bavail & (1UL << (sizeof(fsd.f_bavail) * 8UL - 1UL))) != 0UL);
  if (sizeof(fsd.f_files) < sizeof(uintmax_t )) {
    if (sizeof(fsd.f_files) < sizeof(int )) {
      tmp___7 = - (1 << sizeof(fsd.f_files) * 8UL);
    } else {
      tmp___7 = 0;
    }
    if (~ fsd.f_files == (__fsfilcnt_t )tmp___7) {
      fsp->fsu_files = 0xffffffffffffffffUL;
    } else {
      fsp->fsu_files = fsd.f_files;
    }
  } else {
    fsp->fsu_files = fsd.f_files;
  }
  if (sizeof(fsd.f_ffree) < sizeof(uintmax_t )) {
    if (sizeof(fsd.f_ffree) < sizeof(int )) {
      tmp___9 = - (1 << sizeof(fsd.f_ffree) * 8UL);
    } else {
      tmp___9 = 0;
    }
    if (~ fsd.f_ffree == (__fsfilcnt_t )tmp___9) {
      fsp->fsu_ffree = 0xffffffffffffffffUL;
    } else {
      fsp->fsu_ffree = fsd.f_ffree;
    }
  } else {
    fsp->fsu_ffree = fsd.f_ffree;
  }
  return (0);
}
}
int open_safer(char const   *file , int flags  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                                                 , ...) ;
void *xmemdup(void const   *p , size_t s )  __attribute__((__malloc__)) ;
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
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) setmntent)(char const   *__file ,
                                                                                  char const   *__mode ) ;
extern  __attribute__((__nothrow__)) struct mntent *( __attribute__((__leaf__)) getmntent)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) endmntent)(FILE *__stream ) ;
static dev_t dev_from_mount_options(char const   *mount_options ) 
{ 


  {
  return ((dev_t )-1);
}
}
struct mount_entry *read_file_system_list(_Bool need_fs_type ) 
{ 
  struct mount_entry *mount_list___0 ;
  struct mount_entry *me ;
  struct mount_entry **mtail ;
  struct mntent *mnt ;
  char const   *table___0 ;
  FILE *fp ;
  void *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  char *tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int saved_errno ;
  int *tmp___12 ;
  int *tmp___13 ;
  char *__cil_tmp25 ;

  {
  {
  mtail = & mount_list___0;
  table___0 = "/etc/mtab";
  fp = setmntent(table___0, "r");
  }
  if ((unsigned long )fp == (unsigned long )((void *)0)) {
    return ((struct mount_entry *)((void *)0));
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    mnt = getmntent(fp);
    }
    if (! mnt) {
      goto while_break;
    }
    {
    tmp = xmalloc(sizeof(*me));
    me = (struct mount_entry *)tmp;
    me->me_devname = xstrdup((char const   *)mnt->mnt_fsname);
    me->me_mountdir = xstrdup((char const   *)mnt->mnt_dir);
    me->me_type = xstrdup((char const   *)mnt->mnt_type);
    me->me_type_malloced = 1U;
    tmp___0 = strcmp((char const   *)me->me_type, "autofs");
    }
    if (tmp___0 == 0) {
      tmp___6 = 1;
    } else {
      {
      tmp___1 = strcmp((char const   *)me->me_type, "none");
      }
      if (tmp___1 == 0) {
        tmp___6 = 1;
      } else {
        {
        tmp___2 = strcmp((char const   *)me->me_type, "proc");
        }
        if (tmp___2 == 0) {
          tmp___6 = 1;
        } else {
          {
          tmp___3 = strcmp((char const   *)me->me_type, "subfs");
          }
          if (tmp___3 == 0) {
            tmp___6 = 1;
          } else {
            {
            tmp___4 = strcmp((char const   *)me->me_type, "kernfs");
            }
            if (tmp___4 == 0) {
              tmp___6 = 1;
            } else {
              {
              tmp___5 = strcmp((char const   *)me->me_type, "ignore");
              }
              if (tmp___5 == 0) {
                tmp___6 = 1;
              } else {
                tmp___6 = 0;
              }
            }
          }
        }
      }
    }
    {
    me->me_dummy = (unsigned int )tmp___6;
    tmp___7 = strchr((char const   *)me->me_devname, ':');
    }
    if ((unsigned long )tmp___7 != (unsigned long )((void *)0)) {
      tmp___10 = 1;
    } else
    if ((int )*(me->me_devname + 0) == 47) {
      if ((int )*(me->me_devname + 1) == 47) {
        {
        tmp___8 = strcmp((char const   *)me->me_type, "smbfs");
        }
        if (tmp___8 == 0) {
          tmp___10 = 1;
        } else {
          {
          tmp___9 = strcmp((char const   *)me->me_type, "cifs");
          }
          if (tmp___9 == 0) {
            tmp___10 = 1;
          } else {
            tmp___10 = 0;
          }
        }
      } else {
        tmp___10 = 0;
      }
    } else {
      tmp___10 = 0;
    }
    {
    me->me_remote = (unsigned int )tmp___10;
    me->me_dev = dev_from_mount_options((char const   *)mnt->mnt_opts);
    *mtail = me;
    mtail = & me->me_next;
    }
  }
  while_break___1: /* CIL Label */ ;
  }
  while_break: 
  {
  tmp___11 = endmntent(fp);
  }
  if (tmp___11 == 0) {
    goto free_then_fail;
  }
  *mtail = (struct mount_entry *)((void *)0);
  return (mount_list___0);
  free_then_fail: 
  {
  tmp___12 = __errno_location();
  saved_errno = *tmp___12;
  *mtail = (struct mount_entry *)((void *)0);
  }
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    if (! mount_list___0) {
      goto while_break___0;
    }
    {
    me = mount_list___0->me_next;
    free((void *)mount_list___0->me_devname);
    free((void *)mount_list___0->me_mountdir);
    }
    if (mount_list___0->me_type_malloced) {
      {
      free((void *)mount_list___0->me_type);
      }
    }
    {
    free((void *)mount_list___0);
    mount_list___0 = me;
    }
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break___0: 
  {
  tmp___13 = __errno_location();
  *tmp___13 = saved_errno;
  }
  return ((struct mount_entry *)((void *)0));
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
int save_cwd(struct saved_cwd *cwd ) 
{ 
  int tmp ;
  char *__cil_tmp4 ;

  {
  {
  cwd->name = (char *)((void *)0);
  cwd->desc = open_safer(".", 0);
  }
  if (cwd->desc < 0) {
    {
    cwd->name = xgetcwd();
    }
    if (cwd->name) {
      tmp = 0;
    } else {
      tmp = -1;
    }
    return (tmp);
  }
  return (0);
}
}
int restore_cwd(struct saved_cwd  const  *cwd ) 
{ 
  int tmp ;
  int tmp___0 ;

  {
  if (0 <= (int )cwd->desc) {
    {
    tmp = fchdir((int )cwd->desc);
    }
    return (tmp);
  } else {
    {
    tmp___0 = chdir_long((char *)cwd->name);
    }
    return (tmp___0);
  }
}
}
void free_cwd(struct saved_cwd *cwd ) 
{ 


  {
  if (cwd->desc >= 0) {
    {
    close(cwd->desc);
    }
  }
  {
  free((void *)cwd->name);
  }
  return;
}
}
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
                          char const   *arg , int exit_status___0 ) 
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
  error(exit_status___0, 0, (char const   *)tmp, hyphens, option, arg);
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
