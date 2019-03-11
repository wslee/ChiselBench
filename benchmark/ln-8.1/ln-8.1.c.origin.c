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
enum backup_type {
    no_backups = 0,
    simple_backups = 1,
    numbered_existing_backups = 2,
    numbered_backups = 3
} ;
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
enum numbered_backup_result {
    BACKUP_IS_SAME_LENGTH = 0,
    BACKUP_IS_LONGER = 1,
    BACKUP_IS_NEW = 2
} ;
typedef __off_t off_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_656899090 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_656899090 __mbstate_t;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) rename)(char const   *__old ,
                                                                             char const   *__new ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) lstat)(char const   * __restrict  __file ,
                                                                                              struct stat * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) symlink)(char const   *__from ,
                                                                                                char const   *__to ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) unlink)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) getenv)(char const   *__name ) ;
int rpl_linkat(int fd1 , char const   *file1 , int fd2 , char const   *file2 , int flag ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) setlocale)(int __category ,
                                                                                  char const   *__locale ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) gettext)(char const   *__msgid )  __attribute__((__format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) textdomain)(char const   *__domainname ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) bindtextdomain)(char const   *__domainname ,
                                                                                       char const   *__dirname ) ;
 __attribute__((__noreturn__)) void xalloc_die(void) ;
char *xstrdup(char const   *string )  __attribute__((__malloc__)) ;
char *last_component(char const   *name ) ;
_Bool strip_trailing_slashes(char *file ) ;
void close_stdin(void) ;
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
char const   *simple_backup_suffix ;
char *find_backup_file_name(char const   *file , enum backup_type backup_type___0 ) ;
enum backup_type xget_version(char const   *context , char const   *version ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
char *file_name_concat(char const   *dir , char const   *abase , char **base_in_result ) ;
Hash_table *( __attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate ,
                                                                       Hash_tuning const   *tuning ,
                                                                       size_t (*hasher)(void const   * ,
                                                                                        size_t  ) ,
                                                                       _Bool (*comparator)(void const   * ,
                                                                                           void const   * ) ,
                                                                       void (*data_freer)(void * ) ) ;
void ( __attribute__((__nonnull__(2,3))) record_file)(Hash_table *ht___0 , char const   *file ,
                                                      struct stat  const  *stats ) ;
_Bool seen_file(Hash_table const   *ht___0 , char const   *file , struct stat  const  *stats ) ;
size_t triple_hash(void const   *x , size_t table_size ) ;
_Bool triple_compare(void const   *x , void const   *y ) ;
void triple_free(void *x ) ;
char const   *quote_n(int n , char const   *name ) ;
char const   *quote(char const   *name ) ;
_Bool same_name(char const   *source , char const   *dest ) ;
_Bool yesno(void) ;
static enum backup_type backup_type  ;
static _Bool symbolic_link  ;
static _Bool logical  =    (_Bool)0;
static _Bool interactive  ;
static _Bool remove_existing_files  ;
static _Bool verbose  ;
static _Bool hard_dir_link  ;
static _Bool dereference_dest_dir_symlinks  =    (_Bool)1;
static Hash_table *dest_set  ;
static struct option  const  long_options[15]  = 
  {      {"backup", 2, (int *)((void *)0), 'b'}, 
        {"directory", 0, (int *)((void *)0), 'F'}, 
        {"no-dereference", 0, (int *)((void *)0), 'n'}, 
        {"no-target-directory", 0, (int *)((void *)0), 'T'}, 
        {"force", 0, (int *)((void *)0), 'f'}, 
        {"interactive", 0, (int *)((void *)0), 'i'}, 
        {"suffix", 1, (int *)((void *)0), 'S'}, 
        {"target-directory", 1, (int *)((void *)0), 't'}, 
        {"logical", 0, (int *)((void *)0), 'L'}, 
        {"physical", 0, (int *)((void *)0), 'P'}, 
        {"symbolic", 0, (int *)((void *)0), 's'}, 
        {"verbose", 0, (int *)((void *)0), 'v'}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
static _Bool target_directory_operand(char const   *file ) 
{ 
  char const   *b ;
  char *tmp ;
  size_t blen ;
  size_t tmp___0 ;
  _Bool looks_like_a_dir ;
  int tmp___1 ;
  struct stat st ;
  int stat_result ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int err ;
  int *tmp___5 ;
  int tmp___6 ;
  _Bool is_a_dir ;
  int tmp___7 ;
  char const   *tmp___8 ;
  char *tmp___9 ;
  char const   *tmp___10 ;
  char *tmp___11 ;
  void *__cil_tmp25 ;
  char *__cil_tmp26 ;
  char *__cil_tmp27 ;

  {
  {
  tmp = last_component(file);
  b = (char const   *)tmp;
  tmp___0 = strlen(b);
  blen = tmp___0;
  }
  if (blen == 0UL) {
    tmp___1 = 1;
  } else
  if ((int const   )*(b + (blen - 1UL)) == 47) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  looks_like_a_dir = (_Bool )tmp___1;
  if (dereference_dest_dir_symlinks) {
    {
    tmp___2 = stat((char const   */* __restrict  */)file, (struct stat */* __restrict  */)(& st));
    tmp___4 = tmp___2;
    }
  } else {
    {
    tmp___3 = lstat((char const   */* __restrict  */)file, (struct stat */* __restrict  */)(& st));
    tmp___4 = tmp___3;
    }
  }
  stat_result = tmp___4;
  if (stat_result == 0) {
    tmp___6 = 0;
  } else {
    {
    tmp___5 = __errno_location();
    tmp___6 = *tmp___5;
    }
  }
  err = tmp___6;
  if (! err) {
    if ((st.st_mode & 61440U) == 16384U) {
      tmp___7 = 1;
    } else {
      tmp___7 = 0;
    }
  } else {
    tmp___7 = 0;
  }
  is_a_dir = (_Bool )tmp___7;
  if (err) {
    if (err != 2) {
      {
      tmp___8 = quote(file);
      tmp___9 = gettext("accessing %s");
      error(1, err, (char const   *)tmp___9, tmp___8);
      }
    }
  }
  if ((int )is_a_dir < (int )looks_like_a_dir) {
    {
    tmp___10 = quote(file);
    tmp___11 = gettext("target %s is not a directory");
    error(1, err, (char const   *)tmp___11, tmp___10);
    }
  }
  return (is_a_dir);
}
}
static _Bool do_link(char const   *source , char const   *dest ) 
{ 
  struct stat source_stats ;
  struct stat dest_stats ;
  char *dest_backup ;
  _Bool dest_lstat_ok ;
  _Bool source_is_dir ;
  _Bool ok ;
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  char const   *tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;
  char const   *tmp___8 ;
  char *tmp___9 ;
  int *tmp___10 ;
  int *tmp___11 ;
  char const   *tmp___12 ;
  char const   *tmp___13 ;
  char *tmp___14 ;
  _Bool tmp___15 ;
  char const   *tmp___16 ;
  char const   *tmp___17 ;
  char *tmp___18 ;
  int tmp___19 ;
  _Bool tmp___20 ;
  char const   *tmp___21 ;
  char *tmp___22 ;
  char const   *tmp___23 ;
  char *tmp___24 ;
  _Bool tmp___25 ;
  int rename_errno ;
  int *tmp___26 ;
  char const   *tmp___27 ;
  char *tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  char const   *tmp___34 ;
  char *tmp___35 ;
  int *tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int *tmp___42 ;
  char const   *tmp___43 ;
  char const   *tmp___44 ;
  int tmp___45 ;
  char const   *tmp___46 ;
  char const   *tmp___47 ;
  char const   *tmp___48 ;
  char *tmp___50 ;
  char *tmp___51 ;
  char *tmp___52 ;
  int *tmp___53 ;
  char *tmp___55 ;
  char *tmp___60 ;
  char *tmp___61 ;
  char *tmp___62 ;
  int *tmp___63 ;
  int *tmp___64 ;
  int *tmp___65 ;
  int *tmp___66 ;
  char *tmp___67 ;
  int *tmp___68 ;
  char *tmp___69 ;
  int *tmp___70 ;
  char const   *tmp___71 ;
  char *tmp___72 ;
  int *tmp___73 ;
  int tmp___74 ;
  void *__cil_tmp102 ;
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

  {
  dest_backup = (char *)((void *)0);
  dest_lstat_ok = (_Bool)0;
  source_is_dir = (_Bool)0;
  if (! symbolic_link) {
    if (logical) {
      {
      tmp___2 = stat((char const   */* __restrict  */)source, (struct stat */* __restrict  */)(& source_stats));
      tmp___4 = tmp___2;
      }
    } else {
      {
      tmp___3 = lstat((char const   */* __restrict  */)source, (struct stat */* __restrict  */)(& source_stats));
      tmp___4 = tmp___3;
      }
    }
    if (tmp___4 != 0) {
      {
      tmp = quote(source);
      tmp___0 = gettext("accessing %s");
      tmp___1 = __errno_location();
      error(0, *tmp___1, (char const   *)tmp___0, tmp);
      }
      return ((_Bool)0);
    }
    if ((source_stats.st_mode & 61440U) == 16384U) {
      source_is_dir = (_Bool)1;
      if (! hard_dir_link) {
        {
        tmp___5 = quote(source);
        tmp___6 = gettext("%s: hard link not allowed for directory");
        error(0, 0, (char const   *)tmp___6, tmp___5);
        }
        return ((_Bool)0);
      }
    }
  }
  if (remove_existing_files) {
    goto _L;
  } else
  if (interactive) {
    goto _L;
  } else
  if ((unsigned int )backup_type != 0U) {
    _L: 
    {
    tmp___7 = lstat((char const   */* __restrict  */)dest, (struct stat */* __restrict  */)(& dest_stats));
    dest_lstat_ok = (_Bool )(tmp___7 == 0);
    }
    if (! dest_lstat_ok) {
      {
      tmp___11 = __errno_location();
      }
      if (*tmp___11 != 2) {
        {
        tmp___8 = quote(dest);
        tmp___9 = gettext("accessing %s");
        tmp___10 = __errno_location();
        error(0, *tmp___10, (char const   *)tmp___9, tmp___8);
        }
        return ((_Bool)0);
      }
    }
  }
  if (dest_lstat_ok) {
    if ((unsigned long )dest_set != (unsigned long )((void *)0)) {
      {
      tmp___15 = seen_file((Hash_table const   *)dest_set, dest, (struct stat  const  *)(& dest_stats));
      }
      if (tmp___15) {
        {
        tmp___12 = quote_n(1, source);
        tmp___13 = quote_n(0, dest);
        tmp___14 = gettext("will not overwrite just-created %s with %s");
        error(0, 0, (char const   *)tmp___14, tmp___13, tmp___12);
        }
        return ((_Bool)0);
      }
    }
  }
  if (remove_existing_files) {
    goto _L___2;
  } else
  if (! symbolic_link) {
    if ((unsigned int )backup_type != 0U) {
      _L___2: 
      if (dest_lstat_ok) {
        if ((unsigned int )backup_type == 0U) {
          goto _L___1;
        } else
        if (! symbolic_link) {
          _L___1: 
          if (! symbolic_link) {
            goto _L___0;
          } else {
            {
            tmp___19 = stat((char const   */* __restrict  */)source, (struct stat */* __restrict  */)(& source_stats));
            }
            if (tmp___19 == 0) {
              _L___0: 
              if (source_stats.st_ino == dest_stats.st_ino) {
                if (source_stats.st_dev == dest_stats.st_dev) {
                  if (source_stats.st_nlink == 1UL) {
                    {
                    tmp___16 = quote_n(1, dest);
                    tmp___17 = quote_n(0, source);
                    tmp___18 = gettext("%s and %s are the same file");
                    error(0, 0, (char const   *)tmp___18, tmp___17, tmp___16);
                    }
                    return ((_Bool)0);
                  } else {
                    {
                    tmp___20 = same_name(source, dest);
                    }
                    if (tmp___20) {
                      {
                      tmp___16 = quote_n(1, dest);
                      tmp___17 = quote_n(0, source);
                      tmp___18 = gettext("%s and %s are the same file");
                      error(0, 0, (char const   *)tmp___18, tmp___17, tmp___16);
                      }
                      return ((_Bool)0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (dest_lstat_ok) {
    if ((dest_stats.st_mode & 61440U) == 16384U) {
      {
      tmp___21 = quote(dest);
      tmp___22 = gettext("%s: cannot overwrite directory");
      error(0, 0, (char const   *)tmp___22, tmp___21);
      }
      return ((_Bool)0);
    }
    if (interactive) {
      {
      tmp___23 = quote(dest);
      tmp___24 = gettext("%s: replace %s? ");
      fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)tmp___24),
              program_name, tmp___23);
      tmp___25 = yesno();
      }
      if (! tmp___25) {
        return ((_Bool)1);
      }
      remove_existing_files = (_Bool)1;
    }
    if ((unsigned int )backup_type != 0U) {
      {
      dest_backup = find_backup_file_name(dest, backup_type);
      tmp___29 = rename(dest, (char const   *)dest_backup);
      }
      if (tmp___29 != 0) {
        {
        tmp___26 = __errno_location();
        rename_errno = *tmp___26;
        free((void *)dest_backup);
        dest_backup = (char *)((void *)0);
        }
        if (rename_errno != 2) {
          {
          tmp___27 = quote(dest);
          tmp___28 = gettext("cannot backup %s");
          error(0, rename_errno, (char const   *)tmp___28, tmp___27);
          }
          return ((_Bool)0);
        }
      }
    }
  }
  if (symbolic_link) {
    {
    tmp___30 = symlink(source, dest);
    tmp___33 = tmp___30;
    }
  } else {
    if (logical) {
      tmp___31 = 1024;
    } else {
      tmp___31 = 0;
    }
    {
    tmp___32 = rpl_linkat(-100, source, -100, dest, tmp___31);
    tmp___33 = tmp___32;
    }
  }
  ok = (_Bool )(tmp___33 == 0);
  if (! ok) {
    {
    tmp___42 = __errno_location();
    }
    if (*tmp___42 == 17) {
      if (remove_existing_files) {
        goto _L___3;
      } else
      if (dest_backup) {
        _L___3: 
        {
        tmp___37 = unlink(dest);
        }
        if (tmp___37 != 0) {
          {
          tmp___34 = quote(dest);
          tmp___35 = gettext("cannot remove %s");
          tmp___36 = __errno_location();
          error(0, *tmp___36, (char const   *)tmp___35, tmp___34);
          free((void *)dest_backup);
          }
          return ((_Bool)0);
        }
        if (symbolic_link) {
          {
          tmp___38 = symlink(source, dest);
          tmp___41 = tmp___38;
          }
        } else {
          if (logical) {
            tmp___39 = 1024;
          } else {
            tmp___39 = 0;
          }
          {
          tmp___40 = rpl_linkat(-100, source, -100, dest, tmp___39);
          tmp___41 = tmp___40;
          }
        }
        ok = (_Bool )(tmp___41 == 0);
      }
    }
  }
  if (ok) {
    {
    record_file(dest_set, dest, (struct stat  const  *)(& source_stats));
    }
    if (verbose) {
      if (dest_backup) {
        {
        tmp___43 = quote((char const   *)dest_backup);
        printf((char const   */* __restrict  */)"%s ~ ", tmp___43);
        }
      }
      {
      tmp___44 = quote_n(1, source);
      }
      if (symbolic_link) {
        tmp___45 = '-';
      } else {
        tmp___45 = '=';
      }
      {
      tmp___46 = quote_n(0, dest);
      printf((char const   */* __restrict  */)"%s %c> %s\n", tmp___46, tmp___45, tmp___44);
      }
    }
  } else {
    {
    tmp___47 = quote_n(1, source);
    tmp___48 = quote_n(0, dest);
    }
    if (symbolic_link) {
      {
      tmp___53 = __errno_location();
      }
      if (*tmp___53 != 36) {
        if (*source) {
          {
          tmp___50 = gettext("creating symbolic link %s");
          tmp___52 = tmp___50;
          }
        } else {
          {
          tmp___51 = gettext("creating symbolic link %s -> %s");
          tmp___52 = tmp___51;
          }
        }
      } else {
        {
        tmp___51 = gettext("creating symbolic link %s -> %s");
        tmp___52 = tmp___51;
        }
      }
      tmp___69 = tmp___52;
    } else {
      {
      tmp___68 = __errno_location();
      }
      if (*tmp___68 == 31) {
        if (! source_is_dir) {
          {
          tmp___55 = gettext("creating hard link to %.0s%s");
          tmp___67 = tmp___55;
          }
        } else {
          goto _L___4;
        }
      } else {
        _L___4: 
        {
        tmp___63 = __errno_location();
        }
        if (*tmp___63 == 122) {
          {
          tmp___60 = gettext("creating hard link %s");
          tmp___62 = tmp___60;
          }
        } else {
          {
          tmp___64 = __errno_location();
          }
          if (*tmp___64 == 17) {
            {
            tmp___60 = gettext("creating hard link %s");
            tmp___62 = tmp___60;
            }
          } else {
            {
            tmp___65 = __errno_location();
            }
            if (*tmp___65 == 28) {
              {
              tmp___60 = gettext("creating hard link %s");
              tmp___62 = tmp___60;
              }
            } else {
              {
              tmp___66 = __errno_location();
              }
              if (*tmp___66 == 30) {
                {
                tmp___60 = gettext("creating hard link %s");
                tmp___62 = tmp___60;
                }
              } else {
                {
                tmp___61 = gettext("creating hard link %s => %s");
                tmp___62 = tmp___61;
                }
              }
            }
          }
        }
        tmp___67 = tmp___62;
      }
      tmp___69 = tmp___67;
    }
    {
    tmp___70 = __errno_location();
    error(0, *tmp___70, (char const   *)tmp___69, tmp___48, tmp___47);
    }
    if (dest_backup) {
      {
      tmp___74 = rename((char const   *)dest_backup, dest);
      }
      if (tmp___74 != 0) {
        {
        tmp___71 = quote(dest);
        tmp___72 = gettext("cannot un-backup %s");
        tmp___73 = __errno_location();
        error(0, *tmp___73, (char const   *)tmp___72, tmp___71);
        }
      }
    }
  }
  {
  free((void *)dest_backup);
  }
  return (ok);
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
  char *tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *__cil_tmp26 ;
  char *__cil_tmp27 ;
  char *__cil_tmp28 ;
  char *__cil_tmp29 ;
  char *__cil_tmp30 ;
  char *__cil_tmp31 ;
  char *__cil_tmp32 ;
  char *__cil_tmp33 ;
  char *__cil_tmp34 ;
  char *__cil_tmp35 ;
  char *__cil_tmp36 ;
  char *__cil_tmp37 ;

  {
  if (status != 0) {
    {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)tmp),
            program_name);
    }
  } else {
    {
    tmp___0 = gettext("Usage: %s [OPTION]... [-T] TARGET LINK_NAME   (1st form)\n  or:  %s [OPTION]... TARGET                  (2nd form)\n  or:  %s [OPTION]... TARGET... DIRECTORY     (3rd form)\n  or:  %s [OPTION]... -t DIRECTORY TARGET...  (4th form)\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name,
           program_name, program_name, program_name);
    tmp___1 = gettext("In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.\n\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___1), (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("      --backup[=CONTROL]      make a backup of each existing destination file\n  -b                          like --backup but does not accept an argument\n  -d, -F, --directory         allow the superuser to attempt to hard link\n                                directories (note: will probably fail due to\n                                system restrictions, even for the superuser)\n  -f, --force                 remove existing destination files\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("  -i, --interactive           prompt whether to remove destinations\n  -L, --logical               make hard links to symbolic link references\n  -n, --no-dereference        treat destination that is a symlink to a\n                                directory as if it were a normal file\n  -P, --physical              make hard links directly to symbolic links\n  -s, --symbolic              make symbolic links instead of hard links\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  -S, --suffix=SUFFIX         override the usual backup suffix\n  -t, --target-directory=DIRECTORY  specify the DIRECTORY in which to create\n                                the links\n  -T, --no-target-directory   treat LINK_NAME as a normal file\n  -v, --verbose               print name of each linked file\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___5), (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___6), (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___7), (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("\nThe backup suffix is `~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___8), (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("Using -s ignores -L and -P.  Otherwise, the last option specified controls\nbehavior when the source is a symbolic link, defaulting to %s.\n\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___9), "-P");
    tmp___10 = gettext("  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___10), (FILE */* __restrict  */)stdout);
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
  int c ;
  _Bool ok ;
  _Bool make_backups ;
  char *backup_suffix_string ;
  char *version_control_string ;
  char const   *target_directory ;
  _Bool no_target_directory ;
  int n_files ;
  char **file ;
  char *tmp ;
  struct stat st ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char const   *tmp___8 ;
  char *tmp___9 ;
  char const   *tmp___10 ;
  char *tmp___11 ;
  char const   *tmp___12 ;
  char *tmp___13 ;
  _Bool tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  enum backup_type tmp___17 ;
  int i ;
  char *dest_base ;
  char *dest ;
  char *tmp___18 ;
  char *tmp___19 ;
  _Bool tmp___20 ;
  int tmp___21 ;
  void *__cil_tmp55 ;
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
  char *__cil_tmp68 ;
  char *__cil_tmp69 ;
  char *__cil_tmp70 ;

  {
  {
  make_backups = (_Bool)0;
  version_control_string = (char *)((void *)0);
  target_directory = (char const   *)((void *)0);
  no_target_directory = (_Bool)0;
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdin);
  backup_suffix_string = getenv("SIMPLE_BACKUP_SUFFIX");
  hard_dir_link = (_Bool)0;
  verbose = hard_dir_link;
  interactive = verbose;
  remove_existing_files = interactive;
  symbolic_link = remove_existing_files;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    c = getopt_long(argc, (char * const  *)argv, "bdfinst:vFLPS:T", long_options,
                    (int *)((void *)0));
    }
    if (! (c != -1)) {
      goto while_break;
    }
    if (c == 98) {
      goto case_98;
    }
    if (c == 100) {
      goto case_100;
    }
    if (c == 70) {
      goto case_100;
    }
    if (c == 102) {
      goto case_102;
    }
    if (c == 105) {
      goto case_105;
    }
    if (c == 76) {
      goto case_76;
    }
    if (c == 110) {
      goto case_110;
    }
    if (c == 80) {
      goto case_80;
    }
    if (c == 115) {
      goto case_115;
    }
    if (c == 116) {
      goto case_116;
    }
    if (c == 84) {
      goto case_84;
    }
    if (c == 118) {
      goto case_118;
    }
    if (c == 83) {
      goto case_83;
    }
    if (c == -130) {
      goto case_neg_130;
    }
    if (c == -131) {
      goto case_neg_131;
    }
    goto switch_default;
    case_98: 
    make_backups = (_Bool)1;
    if (optarg) {
      version_control_string = optarg;
    }
    goto switch_break;
    case_100: 
    hard_dir_link = (_Bool)1;
    goto switch_break;
    case_102: 
    remove_existing_files = (_Bool)1;
    interactive = (_Bool)0;
    goto switch_break;
    case_105: 
    remove_existing_files = (_Bool)0;
    interactive = (_Bool)1;
    goto switch_break;
    case_76: 
    logical = (_Bool)1;
    goto switch_break;
    case_110: 
    dereference_dest_dir_symlinks = (_Bool)0;
    goto switch_break;
    case_80: 
    logical = (_Bool)0;
    goto switch_break;
    case_115: 
    symbolic_link = (_Bool)1;
    goto switch_break;
    case_116: 
    if (target_directory) {
      {
      tmp = gettext("multiple target directories specified");
      error(1, 0, (char const   *)tmp);
      }
    } else {
      {
      tmp___3 = stat((char const   */* __restrict  */)((char const   *)optarg), (struct stat */* __restrict  */)(& st));
      }
      if (tmp___3 != 0) {
        {
        tmp___0 = quote((char const   *)optarg);
        tmp___1 = gettext("accessing %s");
        tmp___2 = __errno_location();
        error(1, *tmp___2, (char const   *)tmp___1, tmp___0);
        }
      }
      if (! ((st.st_mode & 61440U) == 16384U)) {
        {
        tmp___4 = quote((char const   *)optarg);
        tmp___5 = gettext("target %s is not a directory");
        error(1, 0, (char const   *)tmp___5, tmp___4);
        }
      }
    }
    target_directory = (char const   *)optarg;
    goto switch_break;
    case_84: 
    no_target_directory = (_Bool)1;
    goto switch_break;
    case_118: 
    verbose = (_Bool)1;
    goto switch_break;
    case_83: 
    make_backups = (_Bool)1;
    backup_suffix_string = optarg;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    version_etc(stdout, "ln", "GNU coreutils", Version, "Mike Parker", "David MacKenzie",
                (char *)((void *)0));
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
  while_break___1: /* CIL Label */ ;
  }
  while_break: 
  n_files = argc - optind;
  file = argv + optind;
  if (n_files <= 0) {
    {
    tmp___6 = gettext("missing file operand");
    error(0, 0, (char const   *)tmp___6);
    usage(1);
    }
  }
  if (no_target_directory) {
    if (target_directory) {
      {
      tmp___7 = gettext("cannot combine --target-directory and --no-target-directory");
      error(1, 0, (char const   *)tmp___7);
      }
    }
    if (n_files != 2) {
      if (n_files < 2) {
        {
        tmp___8 = quote((char const   *)*(file + 0));
        tmp___9 = gettext("missing destination file operand after %s");
        error(0, 0, (char const   *)tmp___9, tmp___8);
        }
      } else {
        {
        tmp___10 = quote((char const   *)*(file + 2));
        tmp___11 = gettext("extra operand %s");
        error(0, 0, (char const   *)tmp___11, tmp___10);
        }
      }
      {
      usage(1);
      }
    }
  } else
  if (! target_directory) {
    if (n_files < 2) {
      target_directory = ".";
    } else
    if (2 <= n_files) {
      {
      tmp___14 = target_directory_operand((char const   *)*(file + (n_files - 1)));
      }
      if (tmp___14) {
        n_files --;
        target_directory = (char const   *)*(file + n_files);
      } else {
        goto _L;
      }
    } else
    _L: 
    if (2 < n_files) {
      {
      tmp___12 = quote((char const   *)*(file + (n_files - 1)));
      tmp___13 = gettext("target %s is not a directory");
      error(1, 0, (char const   *)tmp___13, tmp___12);
      }
    }
  }
  if (backup_suffix_string) {
    {
    tmp___15 = xstrdup((char const   *)backup_suffix_string);
    simple_backup_suffix = (char const   *)tmp___15;
    }
  }
  if (make_backups) {
    {
    tmp___16 = gettext("backup type");
    tmp___17 = xget_version((char const   *)tmp___16, (char const   *)version_control_string);
    backup_type = tmp___17;
    }
  } else {
    backup_type = (enum backup_type )0;
  }
  if (target_directory) {
    if (2 <= n_files) {
      if (remove_existing_files) {
        if (! symbolic_link) {
          if ((unsigned int )backup_type != 3U) {
            {
            dest_set = hash_initialize((size_t )61, (Hash_tuning const   *)((void *)0),
                                       & triple_hash, & triple_compare, & triple_free);
            }
            if ((unsigned long )dest_set == (unsigned long )((void *)0)) {
              {
              xalloc_die();
              }
            }
          }
        }
      }
    }
    ok = (_Bool)1;
    i = 0;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! (i < n_files)) {
        goto while_break___0;
      }
      {
      tmp___18 = last_component((char const   *)*(file + i));
      tmp___19 = file_name_concat(target_directory, (char const   *)tmp___18, & dest_base);
      dest = tmp___19;
      strip_trailing_slashes(dest_base);
      tmp___20 = do_link((char const   *)*(file + i), (char const   *)dest);
      ok = (_Bool )((int )ok & (int )tmp___20);
      free((void *)dest);
      i ++;
      }
    }
    while_break___2: /* CIL Label */ ;
    }
    while_break___0: ;
  } else {
    {
    ok = do_link((char const   *)*(file + 0), (char const   *)*(file + 1));
    }
  }
  if (ok) {
    tmp___21 = 0;
  } else {
    tmp___21 = 1;
  }
  {
  exit(tmp___21);
  }
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
char *areadlinkat(int fd , char const   *filename ) ;
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(2,3), __leaf__)) readlinkat)(int __fd ,
                                                                                                       char const   * __restrict  __path ,
                                                                                                       char * __restrict  __buf ,
                                                                                                       size_t __len ) ;
char *areadlinkat(int fd , char const   *filename ) 
{ 
  char initial_buf[1024] ;
  char *buffer ;
  size_t buf_size ;
  ssize_t link_length ;
  ssize_t tmp ;
  int saved_errno ;
  int *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  ssize_t tmp___3 ;
  void *tmp___4 ;
  char *smaller_buffer ;
  void *tmp___5 ;
  int *tmp___6 ;
  void *tmp___7 ;
  void *__cil_tmp19 ;

  {
  buffer = initial_buf;
  buf_size = sizeof(initial_buf);
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp = readlinkat(fd, (char const   */* __restrict  */)filename, (char */* __restrict  */)buffer,
                     buf_size);
    link_length = tmp;
    }
    if (link_length < 0L) {
      {
      tmp___2 = __errno_location();
      }
      if (*tmp___2 != 34) {
        if ((unsigned long )buffer != (unsigned long )(initial_buf)) {
          {
          tmp___0 = __errno_location();
          saved_errno = *tmp___0;
          free((void *)buffer);
          tmp___1 = __errno_location();
          *tmp___1 = saved_errno;
          }
        }
        return ((char *)((void *)0));
      }
    }
    if ((size_t )link_length < buf_size) {
      tmp___3 = link_length;
      link_length ++;
      *(buffer + tmp___3) = (char )'\000';
      if ((unsigned long )buffer == (unsigned long )(initial_buf)) {
        {
        tmp___4 = malloc((size_t )link_length);
        buffer = (char *)tmp___4;
        }
        if ((unsigned long )buffer == (unsigned long )((void *)0)) {
          return ((char *)((void *)0));
        }
        {
        memcpy((void */* __restrict  */)((void *)buffer), (void const   */* __restrict  */)((void const   *)(initial_buf)),
               (size_t )link_length);
        }
      } else
      if ((size_t )link_length < buf_size) {
        {
        tmp___5 = realloc((void *)buffer, (size_t )link_length);
        smaller_buffer = (char *)tmp___5;
        }
        if ((unsigned long )smaller_buffer != (unsigned long )((void *)0)) {
          buffer = smaller_buffer;
        }
      }
      return (buffer);
    }
    if ((unsigned long )buffer != (unsigned long )(initial_buf)) {
      {
      free((void *)buffer);
      }
    }
    buf_size *= 2UL;
    if (9223372036854775807UL < buf_size) {
      {
      tmp___6 = __errno_location();
      *tmp___6 = 12;
      }
      return ((char *)((void *)0));
    }
    {
    tmp___7 = malloc(buf_size);
    buffer = (char *)tmp___7;
    }
    if ((unsigned long )buffer == (unsigned long )((void *)0)) {
      return ((char *)((void *)0));
    }
  }
  while_break: /* CIL Label */ ;
  }

  return ((char *)0);
}
}
ptrdiff_t argmatch(char const   *arg , char const   * const  *arglist , char const   *vallist ,
                   size_t valsize ) ;
void (*argmatch_die)(void) ;
void argmatch_invalid(char const   *context , char const   *value , ptrdiff_t problem ) ;
void argmatch_valid(char const   * const  *arglist , char const   *vallist , size_t valsize ) ;
ptrdiff_t __xargmatch_internal(char const   *context , char const   *arg , char const   * const  *arglist ,
                               char const   *vallist , size_t valsize , void (*exit_fn)(void) ) ;
extern int putc_unlocked(int __c , FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) memcmp)(void const   *__s1 ,
                                                                                               void const   *__s2 ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
char *quotearg_n_style(int n , enum quoting_style s , char const   *arg ) ;
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
enum backup_type get_version(char const   *context , char const   *version ) ;
size_t base_len(char const   *name ) ;
void *xmalloc(size_t n )  __attribute__((__malloc__)) ;
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
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1), __leaf__)) pathconf)(char const   *__path ,
                                                                                                int __name ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
extern int ( __attribute__((__nonnull__(1))) closedir)(DIR *__dirp ) ;
extern struct dirent *( __attribute__((__nonnull__(1))) readdir)(DIR *__dirp ) ;
DIR *opendir_safer(char const   *name ) ;
char const   *simple_backup_suffix  =    "~";
static void check_extension(char *file , size_t filelen , char e ) 
{ 
  char *base ;
  char *tmp ;
  size_t baselen ;
  size_t tmp___0 ;
  size_t baselen_max ;
  long name_max ;
  char tmp___1[sizeof(".")] ;
  int *tmp___2 ;
  long size ;
  int *tmp___3 ;
  void *__cil_tmp18 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;

  {
  {
  tmp = last_component((char const   *)file);
  base = tmp;
  tmp___0 = base_len((char const   *)base);
  baselen = tmp___0;
  baselen_max = (size_t )255;
  }
  if (14UL < baselen) {
    {
    memcpy((void */* __restrict  */)((void *)(tmp___1)), (void const   */* __restrict  */)((void const   *)base),
           sizeof("."));
    strcpy((char */* __restrict  */)base, (char const   */* __restrict  */)".");
    tmp___2 = __errno_location();
    *tmp___2 = 0;
    name_max = pathconf((char const   *)file, 3);
    }
    if (0L <= name_max) {
      goto _L;
    } else {
      {
      tmp___3 = __errno_location();
      }
      if (*tmp___3 == 0) {
        _L: 
        baselen_max = (size_t )name_max;
        size = (long )baselen_max;
        if (name_max != size) {
          baselen_max = (size_t )-1;
        }
      }
    }
    {
    memcpy((void */* __restrict  */)((void *)base), (void const   */* __restrict  */)((void const   *)(tmp___1)),
           sizeof("."));
    }
  }
  if (baselen_max < baselen) {
    baselen = (size_t )((file + filelen) - base);
    if (baselen_max <= baselen) {
      baselen = baselen_max - 1UL;
    }
    *(base + baselen) = e;
    *(base + (baselen + 1UL)) = (char )'\000';
  }
  return;
}
}
static enum numbered_backup_result numbered_backup(char **buffer , size_t buffer_size ,
                                                   size_t filelen ) 
{ 
  enum numbered_backup_result result ;
  DIR *dirp ;
  struct dirent *dp ;
  char *buf___0 ;
  size_t versionlenmax ;
  char *base ;
  char *tmp ;
  size_t base_offset ;
  size_t baselen ;
  size_t tmp___0 ;
  char tmp___1[sizeof(".")] ;
  char const   *p ;
  char *q ;
  _Bool all_9s ;
  size_t versionlen ;
  size_t new_buflen ;
  size_t tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  void *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  void *__cil_tmp31 ;
  char *__cil_tmp32 ;
  char *__cil_tmp33 ;
  char *__cil_tmp34 ;
  char *__cil_tmp35 ;

  {
  {
  result = (enum numbered_backup_result )2;
  buf___0 = *buffer;
  versionlenmax = (size_t )1;
  tmp = last_component((char const   *)buf___0);
  base = tmp;
  base_offset = (size_t )(base - buf___0);
  tmp___0 = base_len((char const   *)base);
  baselen = tmp___0;
  memcpy((void */* __restrict  */)((void *)(tmp___1)), (void const   */* __restrict  */)((void const   *)base),
         sizeof("."));
  strcpy((char */* __restrict  */)base, (char const   */* __restrict  */)".");
  dirp = opendir_safer((char const   *)buf___0);
  memcpy((void */* __restrict  */)((void *)base), (void const   */* __restrict  */)((void const   *)(tmp___1)),
         sizeof("."));
  strcpy((char */* __restrict  */)(base + baselen), (char const   */* __restrict  */)".~1~");
  }
  if (! dirp) {
    return (result);
  }
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;
    while_continue: 
    {
    dp = readdir(dirp);
    }
    if (! ((unsigned long )dp != (unsigned long )((void *)0))) {
      goto while_break;
    }
    if (! (dp->d_ino != 0UL)) {
      goto while_continue;
    } else {
      {
      tmp___2 = strlen((char const   *)(dp->d_name));
      }
      if (tmp___2 < baselen + 4UL) {
        goto while_continue;
      }
    }
    {
    tmp___3 = memcmp((void const   *)(buf___0 + base_offset), (void const   *)(dp->d_name),
                     baselen + 2UL);
    }
    if (tmp___3 != 0) {
      goto while_continue;
    }
    p = (char const   *)((dp->d_name + baselen) + 2);
    if (49 <= (int )*p) {
      if (! ((int const   )*p <= 57)) {
        goto while_continue;
      }
    } else {
      goto while_continue;
    }
    all_9s = (_Bool )((int const   )*p == 57);
    versionlen = (size_t )1;
    {
    while (1) {
      while_continue___1: /* CIL Label */ ;

      if (! ((unsigned int )*(p + versionlen) - 48U <= 9U)) {
        goto while_break___0;
      }
      all_9s = (_Bool )((int )all_9s & ((int const   )*(p + versionlen) == 57));
      versionlen ++;
    }
    while_break___3: /* CIL Label */ ;
    }
    while_break___0: ;
    if ((int const   )*(p + versionlen) == 126) {
      if (! *(p + (versionlen + 1UL))) {
        if (! (versionlenmax < versionlen)) {
          if (versionlenmax == versionlen) {
            {
            tmp___4 = memcmp((void const   *)((buf___0 + filelen) + 2), (void const   *)p,
                             versionlen);
            }
            if (! (tmp___4 <= 0)) {
              goto while_continue;
            }
          } else {
            goto while_continue;
          }
        }
      } else {
        goto while_continue;
      }
    } else {
      goto while_continue;
    }
    versionlenmax = (size_t )all_9s + versionlen;
    if (all_9s) {
      result = (enum numbered_backup_result )1;
    } else {
      result = (enum numbered_backup_result )0;
    }
    new_buflen = ((filelen + 2UL) + versionlenmax) + 1UL;
    if (buffer_size <= new_buflen) {
      {
      tmp___5 = xnrealloc((void *)buf___0, (size_t )2, new_buflen);
      buf___0 = (char *)tmp___5;
      buffer_size = new_buflen * 2UL;
      }
    }
    {
    q = buf___0 + filelen;
    tmp___6 = q;
    q ++;
    *tmp___6 = (char )'.';
    tmp___7 = q;
    q ++;
    *tmp___7 = (char )'~';
    *q = (char )'0';
    q += (int )all_9s;
    memcpy((void */* __restrict  */)((void *)q), (void const   */* __restrict  */)((void const   *)p),
           versionlen + 2UL);
    q += versionlen;
    }
    {
    while (1) {
      while_continue___2: /* CIL Label */ ;
      q --;
      if (! ((int )*q == 57)) {
        goto while_break___1;
      }
      *q = (char )'0';
    }
    while_break___4: /* CIL Label */ ;
    }
    while_break___1: 
    *q = (char )((int )*q + 1);
  }
  while_break___2: /* CIL Label */ ;
  }
  while_break: 
  {
  closedir(dirp);
  *buffer = buf___0;
  }
  return (result);
}
}
char *find_backup_file_name(char const   *file , enum backup_type backup_type___0 ) 
{ 
  size_t filelen ;
  size_t tmp ;
  char *s ;
  size_t ssize ;
  _Bool simple ;
  size_t simple_backup_suffix_size ;
  size_t tmp___0 ;
  size_t backup_suffix_size_guess ;
  void *tmp___1 ;
  enum numbered_backup_result tmp___2 ;

  {
  {
  tmp = strlen(file);
  filelen = tmp;
  simple = (_Bool)1;
  tmp___0 = strlen(simple_backup_suffix);
  simple_backup_suffix_size = tmp___0 + 1UL;
  backup_suffix_size_guess = simple_backup_suffix_size;
  }
  if (backup_suffix_size_guess < 9UL) {
    backup_suffix_size_guess = (size_t )9;
  }
  {
  ssize = (filelen + backup_suffix_size_guess) + 1UL;
  tmp___1 = xmalloc(ssize);
  s = (char *)tmp___1;
  memcpy((void */* __restrict  */)((void *)s), (void const   */* __restrict  */)((void const   *)file),
         filelen + 1UL);
  }
  if ((unsigned int )backup_type___0 != 1U) {
    {
    tmp___2 = numbered_backup(& s, ssize, filelen);
    }
    if ((unsigned int )tmp___2 == 0U) {
      goto case_0;
    }
    if ((unsigned int )tmp___2 == 1U) {
      goto case_1;
    }
    if ((unsigned int )tmp___2 == 2U) {
      goto case_2;
    }
    goto switch_break;
    case_0: 
    return (s);
    case_1: 
    simple = (_Bool)0;
    goto switch_break;
    case_2: 
    simple = (_Bool )((unsigned int )backup_type___0 == 2U);
    goto switch_break;
    switch_break: ;
  }
  if (simple) {
    {
    memcpy((void */* __restrict  */)((void *)(s + filelen)), (void const   */* __restrict  */)((void const   *)simple_backup_suffix),
           simple_backup_suffix_size);
    }
  }
  {
  check_extension(s, filelen, (char )'~');
  }
  return (s);
}
}
static char const   * const  backup_args[9]  = 
  {      (char const   */* const  */)"none",      (char const   */* const  */)"off",      (char const   */* const  */)"simple",      (char const   */* const  */)"never", 
        (char const   */* const  */)"existing",      (char const   */* const  */)"nil",      (char const   */* const  */)"numbered",      (char const   */* const  */)"t", 
        (char const   */* const  */)((char const   *)((void *)0))};
static enum backup_type  const  backup_types[8]  = 
  {      (enum backup_type  const  )0,      (enum backup_type  const  )0,      (enum backup_type  const  )1,      (enum backup_type  const  )1, 
        (enum backup_type  const  )2,      (enum backup_type  const  )2,      (enum backup_type  const  )3,      (enum backup_type  const  )3};
enum backup_type get_version(char const   *context , char const   *version ) 
{ 
  ptrdiff_t tmp ;

  {
  if ((unsigned long )version == (unsigned long )((char const   *)0)) {
    return ((enum backup_type )2);
  } else
  if ((int const   )*version == 0) {
    return ((enum backup_type )2);
  } else {
    {
    tmp = __xargmatch_internal(context, version, backup_args, (char const   *)(backup_types),
                               sizeof(backup_types[0]), argmatch_die);
    }
    return ((enum backup_type )backup_types[tmp]);
  }
}
}
enum backup_type xget_version(char const   *context , char const   *version ) 
{ 
  enum backup_type tmp ;
  char *tmp___0 ;
  enum backup_type tmp___1 ;
  char *__cil_tmp10 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;

  {
  if (version) {
    if (*version) {
      {
      tmp = get_version(context, version);
      }
      return (tmp);
    } else {
      {
      tmp___0 = getenv("VERSION_CONTROL");
      tmp___1 = get_version("$VERSION_CONTROL", (char const   *)tmp___0);
      }
      return (tmp___1);
    }
  } else {
    {
    tmp___0 = getenv("VERSION_CONTROL");
    tmp___1 = get_version("$VERSION_CONTROL", (char const   *)tmp___0);
    }
    return (tmp___1);
  }
}
}
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
size_t base_len(char const   *name ) 
{ 
  size_t len ;
  size_t prefix_len ;

  {
  {
  prefix_len = (size_t )0;
  len = strlen(name);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (1UL < len) {
      if (! ((int const   )*(name + (len - 1UL)) == 47)) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    goto __Cont;
    __Cont: 
    len --;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (len);
}
}
extern int close(int __fd ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) __assert_fail)(char const   *__assertion ,
                                                                                                   char const   *__file ,
                                                                                                   unsigned int __line ,
                                                                                                   char const   *__function ) ;
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
extern struct _IO_FILE *stdin ;
int rpl_fflush(FILE *stream ) ;
int rpl_fseeko(FILE *fp , off_t offset , int whence ) ;
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
void close_stdout(void) ;
int volatile   exit_failure ;
size_t freadahead(FILE *fp ) ;
char *quotearg_colon(char const   *arg ) ;
static char const   *file_name  ;
void close_stdin(void) 
{ 
  _Bool fail ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  int tmp___2 ;
  char const   *close_error ;
  char *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  int *tmp___6 ;
  char *__cil_tmp12 ;

  {
  {
  fail = (_Bool)0;
  tmp___1 = freadahead(stdin);
  }
  if (tmp___1 > 0UL) {
    {
    tmp = rpl_fseeko(stdin, (off_t )0, 1);
    }
    if (tmp == 0) {
      {
      tmp___0 = rpl_fflush(stdin);
      }
      if (tmp___0 != 0) {
        fail = (_Bool)1;
      }
    }
  }
  {
  tmp___2 = close_stream(stdin);
  }
  if (tmp___2 != 0) {
    fail = (_Bool)1;
  }
  if (fail) {
    {
    tmp___3 = gettext("error closing file");
    close_error = (char const   *)tmp___3;
    }
    if (file_name) {
      {
      tmp___4 = quotearg_colon(file_name);
      tmp___5 = __errno_location();
      error(0, *tmp___5, "%s: %s", tmp___4, close_error);
      }
    } else {
      {
      tmp___6 = __errno_location();
      error(0, *tmp___6, "%s", close_error);
      }
    }
  }
  {
  close_stdout();
  }
  if (fail) {
    {
    _exit((int )exit_failure);
    }
  }
  return;
}
}
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd ,
                                                                                            struct stat *__buf ) ;
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
char *dir_name(char const   *file ) ;
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
int volatile   exit_failure  =    (int volatile   )1;
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
extern int fflush(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) __freading)(FILE *__fp ) ;
__inline static void clear_ungetc_buffer_preserving_position(FILE *fp ) 
{ 


  {
  if (fp->_flags & 256) {
    {
    rpl_fseeko(fp, (off_t )0, 1);
    }
  }
  return;
}
}
int rpl_fflush(FILE *stream ) 
{ 
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  if ((unsigned long )stream == (unsigned long )((void *)0)) {
    {
    tmp = fflush(stream);
    }
    return (tmp);
  } else {
    {
    tmp___0 = __freading(stream);
    }
    if (! (tmp___0 != 0)) {
      {
      tmp = fflush(stream);
      }
      return (tmp);
    }
  }
  {
  clear_ungetc_buffer_preserving_position(stream);
  tmp___1 = fflush(stream);
  }
  return (tmp___1);
}
}
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
char *mfile_name_concat(char const   *dir , char const   *abase , char **base_in_result ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) mempcpy)(void * __restrict  __dest ,
                                                                                                  void const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
static char const   *longest_relative_suffix(char const   *f ) 
{ 


  {
  f += 0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((int const   )*f == 47)) {
      goto while_break;
    }
    goto __Cont;
    __Cont: 
    f ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (f);
}
}
char *mfile_name_concat(char const   *dir , char const   *abase , char **base_in_result ) 
{ 
  char const   *dirbase ;
  char *tmp ;
  size_t dirbaselen ;
  size_t tmp___0 ;
  size_t dirlen ;
  size_t needs_separator ;
  int tmp___1 ;
  char const   *base ;
  char const   *tmp___2 ;
  size_t baselen ;
  size_t tmp___3 ;
  char *p_concat ;
  void *tmp___4 ;
  char *p ;
  void *tmp___5 ;
  int tmp___6 ;
  void *tmp___7 ;

  {
  {
  tmp = last_component(dir);
  dirbase = (char const   *)tmp;
  tmp___0 = base_len(dirbase);
  dirbaselen = tmp___0;
  dirlen = (size_t )(dirbase - dir) + dirbaselen;
  }
  if (dirbaselen) {
    if (! ((int const   )*(dirbase + (dirbaselen - 1UL)) == 47)) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  {
  needs_separator = (size_t )tmp___1;
  tmp___2 = longest_relative_suffix(abase);
  base = tmp___2;
  tmp___3 = strlen(base);
  baselen = tmp___3;
  tmp___4 = malloc(((dirlen + needs_separator) + baselen) + 1UL);
  p_concat = (char *)tmp___4;
  }
  if ((unsigned long )p_concat == (unsigned long )((void *)0)) {
    return ((char *)((void *)0));
  }
  {
  tmp___5 = mempcpy((void */* __restrict  */)((void *)p_concat), (void const   */* __restrict  */)((void const   *)dir),
                    dirlen);
  p = (char *)tmp___5;
  *p = (char )'/';
  p += needs_separator;
  }
  if (base_in_result) {
    if ((int const   )*(abase + 0) == 47) {
      tmp___6 = 1;
    } else {
      tmp___6 = 0;
    }
    *base_in_result = p - tmp___6;
  }
  {
  tmp___7 = mempcpy((void */* __restrict  */)((void *)p), (void const   */* __restrict  */)((void const   *)base),
                    baselen);
  p = (char *)tmp___7;
  *p = (char )'\000';
  }
  return (p_concat);
}
}
char *file_name_concat(char const   *dir , char const   *abase , char **base_in_result ) 
{ 
  char *p ;
  char *tmp ;

  {
  {
  tmp = mfile_name_concat(dir, abase, base_in_result);
  p = tmp;
  }
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    {
    xalloc_die();
    }
  }
  return (p);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
size_t freadahead(FILE *fp ) 
{ 
  long tmp ;

  {
  if ((unsigned long )fp->_IO_write_ptr > (unsigned long )fp->_IO_write_base) {
    return ((size_t )0);
  }
  if (fp->_flags & 256) {
    tmp = fp->_IO_save_end - fp->_IO_save_base;
  } else {
    tmp = 0L;
  }
  return ((size_t )((fp->_IO_read_end - fp->_IO_read_ptr) + tmp));
}
}
extern  __attribute__((__nothrow__)) __off_t ( __attribute__((__leaf__)) lseek)(int __fd ,
                                                                                __off_t __offset ,
                                                                                int __whence ) ;
extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;
int rpl_fseeko(FILE *fp , off_t offset , int whence ) 
{ 
  off_t pos ;
  off_t tmp ;
  int tmp___0 ;
  __off_t tmp___1 ;
  int tmp___2 ;

  {
  if ((unsigned long )fp->_IO_read_end == (unsigned long )fp->_IO_read_ptr) {
    if ((unsigned long )fp->_IO_write_ptr == (unsigned long )fp->_IO_write_base) {
      if ((unsigned long )fp->_IO_save_base == (unsigned long )((void *)0)) {
        if (whence == 2) {
          if (offset > 0L) {
            tmp = (off_t )0;
          } else {
            tmp = offset;
          }
        } else {
          tmp = offset;
        }
        {
        tmp___0 = fileno(fp);
        tmp___1 = lseek(tmp___0, tmp, whence);
        pos = tmp___1;
        }
        if (pos == -1L) {
          return (-1);
        }
        fp->_flags &= -17;
        if (whence == 2) {
          if (! (offset > 0L)) {
            return (0);
          }
        } else {
          return (0);
        }
      }
    }
  }
  {
  tmp___2 = fseeko(fp, offset, whence);
  }
  return (tmp___2);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) dirfd)(DIR *__dirp ) ;
void *xmemdup(void const   *p , size_t s )  __attribute__((__malloc__)) ;
extern __ssize_t getline(char ** __restrict  __lineptr , size_t * __restrict  __n ,
                         FILE * __restrict  __stream ) ;
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
_Bool triple_compare(void const   *x , void const   *y ) 
{ 
  struct F_triple  const  *a ;
  struct F_triple  const  *b ;
  int tmp___0 ;
  _Bool tmp___1 ;

  {
  a = (struct F_triple  const  *)x;
  b = (struct F_triple  const  *)y;
  if (a->st_ino == b->st_ino) {
    if (a->st_dev == b->st_dev) {
      {
      tmp___1 = same_name((char const   *)a->name, (char const   *)b->name);
      }
      if (tmp___1) {
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4), __leaf__)) linkat)(int __fromfd ,
                                                                                               char const   *__from ,
                                                                                               int __tofd ,
                                                                                               char const   *__to ,
                                                                                               int __flags ) ;
static int linkat_follow(int fd1 , char const   *file1 , int fd2 , char const   *file2 ) 
{ 
  char *name ;
  char *target ;
  int result ;
  int i ;
  char *dir ;
  char *tmp ;
  int *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int saved_errno ;
  int *tmp___4 ;
  int *tmp___5 ;
  int *tmp___6 ;
  int saved_errno___0 ;
  int *tmp___7 ;
  int *tmp___8 ;

  {
  name = (char *)file1;
  i = 20;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    tmp___2 = i;
    i --;
    if (tmp___2) {
      {
      target = areadlinkat(fd1, (char const   *)name);
      }
      if (! target) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    if ((int )*(target + 0) == 47) {
      goto _L;
    } else
    if (0) {
      _L: 
      if ((unsigned long )name != (unsigned long )file1) {
        {
        free((void *)name);
        }
      }
      name = target;
    } else {
      {
      tmp = mdir_name((char const   *)name);
      dir = tmp;
      }
      if ((unsigned long )name != (unsigned long )file1) {
        {
        free((void *)name);
        }
      }
      if (! dir) {
        {
        free((void *)target);
        tmp___0 = __errno_location();
        *tmp___0 = 12;
        }
        return (-1);
      }
      {
      name = mfile_name_concat((char const   *)dir, (char const   *)target, (char **)((void *)0));
      free((void *)dir);
      free((void *)target);
      }
      if (! name) {
        {
        tmp___1 = __errno_location();
        *tmp___1 = 12;
        }
        return (-1);
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  if (i < 0) {
    {
    target = (char *)((void *)0);
    tmp___3 = __errno_location();
    *tmp___3 = 40;
    }
  }
  if (! target) {
    {
    tmp___6 = __errno_location();
    }
    if (*tmp___6 != 22) {
      if ((unsigned long )name != (unsigned long )file1) {
        {
        tmp___4 = __errno_location();
        saved_errno = *tmp___4;
        free((void *)name);
        tmp___5 = __errno_location();
        *tmp___5 = saved_errno;
        }
      }
      return (-1);
    }
  }
  {
  result = linkat(fd1, (char const   *)name, fd2, file2, 0);
  }
  if ((unsigned long )name != (unsigned long )file1) {
    {
    tmp___7 = __errno_location();
    saved_errno___0 = *tmp___7;
    free((void *)name);
    tmp___8 = __errno_location();
    *tmp___8 = saved_errno___0;
    }
  }
  return (result);
}
}
static int have_follow_really  ;
int rpl_linkat(int fd1 , char const   *file1 , int fd2 , char const   *file2 , int flag ) 
{ 
  int tmp ;
  int *tmp___0 ;
  int result ;
  int tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;

  {
  if (! flag) {
    {
    tmp = linkat(fd1, file1, fd2, file2, flag);
    }
    return (tmp);
  }
  if (flag & -1025) {
    {
    tmp___0 = __errno_location();
    *tmp___0 = 22;
    }
    return (-1);
  }
  if (0 <= have_follow_really) {
    {
    tmp___1 = linkat(fd1, file1, fd2, file2, flag);
    result = tmp___1;
    }
    if (result == -1) {
      {
      tmp___2 = __errno_location();
      }
      if (! (*tmp___2 == 22)) {
        have_follow_really = 1;
        return (result);
      }
    } else {
      have_follow_really = 1;
      return (result);
    }
    have_follow_really = -1;
  }
  {
  tmp___3 = linkat_follow(fd1, file1, fd2, file2);
  }
  return (tmp___3);
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
_Bool same_name(char const   *source , char const   *dest ) 
{ 
  char const   *source_basename ;
  char *tmp ;
  char const   *dest_basename ;
  char *tmp___0 ;
  size_t source_baselen ;
  size_t tmp___1 ;
  size_t dest_baselen ;
  size_t tmp___2 ;
  _Bool identical_basenames ;
  int tmp___3 ;
  int tmp___4 ;
  _Bool compare_dirs ;
  _Bool same ;
  struct stat source_dir_stats ;
  struct stat dest_dir_stats ;
  char *source_dirname ;
  char *dest_dirname ;
  int *tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  void *__cil_tmp27 ;
  void *__cil_tmp28 ;

  {
  {
  tmp = last_component(source);
  source_basename = (char const   *)tmp;
  tmp___0 = last_component(dest);
  dest_basename = (char const   *)tmp___0;
  tmp___1 = base_len(source_basename);
  source_baselen = tmp___1;
  tmp___2 = base_len(dest_basename);
  dest_baselen = tmp___2;
  }
  if (source_baselen == dest_baselen) {
    {
    tmp___3 = memcmp((void const   *)source_basename, (void const   *)dest_basename,
                     dest_baselen);
    }
    if (tmp___3 == 0) {
      tmp___4 = 1;
    } else {
      tmp___4 = 0;
    }
  } else {
    tmp___4 = 0;
  }
  identical_basenames = (_Bool )tmp___4;
  compare_dirs = identical_basenames;
  same = (_Bool)0;
  if (compare_dirs) {
    {
    source_dirname = dir_name(source);
    dest_dirname = dir_name(dest);
    tmp___6 = stat((char const   */* __restrict  */)((char const   *)source_dirname),
                   (struct stat */* __restrict  */)(& source_dir_stats));
    }
    if (tmp___6) {
      {
      tmp___5 = __errno_location();
      error(1, *tmp___5, "%s", source_dirname);
      }
    }
    {
    tmp___8 = stat((char const   */* __restrict  */)((char const   *)dest_dirname),
                   (struct stat */* __restrict  */)(& dest_dir_stats));
    }
    if (tmp___8) {
      {
      tmp___7 = __errno_location();
      error(1, *tmp___7, "%s", dest_dirname);
      }
    }
    if (source_dir_stats.st_ino == dest_dir_stats.st_ino) {
      if (source_dir_stats.st_dev == dest_dir_stats.st_dev) {
        tmp___9 = 1;
      } else {
        tmp___9 = 0;
      }
    } else {
      tmp___9 = 0;
    }
    {
    same = (_Bool )tmp___9;
    free((void *)source_dirname);
    free((void *)dest_dirname);
    }
  }
  return (same);
}
}
_Bool strip_trailing_slashes(char *file ) 
{ 
  char *base ;
  char *tmp ;
  char *base_lim ;
  _Bool had_slash ;
  size_t tmp___0 ;

  {
  {
  tmp = last_component((char const   *)file);
  base = tmp;
  }
  if (! *base) {
    base = file;
  }
  {
  tmp___0 = base_len((char const   *)base);
  base_lim = base + tmp___0;
  had_slash = (_Bool )((int )*base_lim != 0);
  *base_lim = (char )'\000';
  }
  return (had_slash);
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) rpmatch)(char const   *__response ) ;
_Bool yesno(void) 
{ 
  _Bool yes ;
  char *response ;
  size_t response_size ;
  ssize_t response_len ;
  __ssize_t tmp ;
  int tmp___0 ;

  {
  {
  response = (char *)((void *)0);
  response_size = (size_t )0;
  tmp = getline((char **/* __restrict  */)(& response), (size_t */* __restrict  */)(& response_size),
                (FILE */* __restrict  */)stdin);
  response_len = tmp;
  }
  if (response_len <= 0L) {
    yes = (_Bool)0;
  } else {
    {
    *(response + (response_len - 1L)) = (char )'\000';
    tmp___0 = rpmatch((char const   *)response);
    yes = (_Bool )(0 < tmp___0);
    }
  }
  {
  free((void *)response);
  }
  return (yes);
}
}
char const   *Version  =    "8.1";
