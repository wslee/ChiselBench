typedef int __int32_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
typedef long __time_t;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef unsigned long size_t;
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
typedef __time_t time_t;
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
typedef unsigned long uintmax_t;
struct __exit_status {
   short e_termination ;
   short e_exit ;
};
struct __anonstruct_ut_tv_415302911 {
   __int32_t tv_sec ;
   __int32_t tv_usec ;
};
struct utmpx {
   short ut_type ;
   __pid_t ut_pid ;
   char ut_line[32] ;
   char ut_id[4] ;
   char ut_user[32] ;
   char ut_host[256] ;
   struct __exit_status ut_exit ;
   __int32_t ut_session ;
   struct __anonstruct_ut_tv_415302911 ut_tv ;
   __int32_t ut_addr_v6[4] ;
   char __glibc_reserved[20] ;
};
typedef struct utmpx STRUCT_UTMP;
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
struct __anonstruct___mbstate_t_926875889 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_926875889 __mbstate_t;
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
extern int optind ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fclose(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int putchar_unlocked(int __c ) ;
extern char *fgets_unlocked(char * __restrict  __s , int __n , FILE * __restrict  __stream ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
extern  __attribute__((__nothrow__)) struct tm *( __attribute__((__leaf__)) localtime)(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) getloadavg)(double *__loadavg ,
                                                                                                 int __nelem ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
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
char *last_component(char const   *name ) ;
void close_stdout(void) ;
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
double c_strtod(char const   *nptr , char **endptr ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
void parse_long_options(int argc , char **argv , char const   *command_name , char const   *package ,
                        char const   *version , void (*usage_func)(int  )  , ...) ;
char const   *quote(char const   *name ) ;
int read_utmp(char const   *file , size_t *n_entries , STRUCT_UTMP **utmp_buf , int options ) ;
size_t fprintftime(FILE *s , char const   *format , struct tm  const  *tp , int ut ,
                   int ns ) ;
static void print_uptime(size_t n , STRUCT_UTMP const   *this ) 
{ 
  size_t entries ;
  time_t boot_time ;
  time_t time_now ;
  time_t uptime___0 ;
  long updays ;
  int uphours ;
  int upmins ;
  struct tm *tmn ;
  double avg[3] ;
  int loads ;
  FILE *fp ;
  char buf___0[8192] ;
  char *b ;
  char *tmp ;
  char *end_ptr ;
  double upsecs ;
  double tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;
  char *tmp___3 ;
  int *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  unsigned long tmp___8 ;
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  void *__cil_tmp38 ;
  void *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char *__cil_tmp41 ;
  char *__cil_tmp42 ;
  char *__cil_tmp43 ;
  char *__cil_tmp44 ;

  {
  {
  entries = (size_t )0;
  boot_time = (time_t )0;
  uptime___0 = (time_t )0;
  fp = fopen((char const   */* __restrict  */)"/proc/uptime", (char const   */* __restrict  */)"r");
  }
  if ((unsigned long )fp != (unsigned long )((void *)0)) {
    {
    tmp = fgets_unlocked((char */* __restrict  */)(buf___0), 8192, (FILE */* __restrict  */)fp);
    b = tmp;
    }
    if ((unsigned long )b == (unsigned long )(buf___0)) {
      {
      tmp___0 = c_strtod((char const   *)(buf___0), & end_ptr);
      upsecs = tmp___0;
      }
      if ((unsigned long )(buf___0) != (unsigned long )end_ptr) {
        if ((double )0 <= upsecs) {
          if (upsecs < (double )(~ (-1L << (sizeof(time_t ) * 8UL - 1UL)))) {
            uptime___0 = (time_t )upsecs;
          } else {
            uptime___0 = (time_t )-1;
          }
        } else {
          uptime___0 = (time_t )-1;
        }
      }
    }
    {
    fclose(fp);
    }
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    tmp___2 = n;
    n --;
    if (! tmp___2) {
      goto while_break;
    }
    if (this->ut_user[0]) {
      if ((int const   )this->ut_type == 7) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    } else {
      tmp___1 = 0;
    }
    entries += (size_t )tmp___1;
    if ((int const   )this->ut_type == 2) {
      boot_time = (time_t )this->ut_tv.tv_sec;
    }
    this ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
  time_now = time((time_t *)((void *)0));
  }
  if (uptime___0 == 0L) {
    if (boot_time == 0L) {
      {
      tmp___3 = gettext("couldn\'t get boot time");
      tmp___4 = __errno_location();
      error(1, *tmp___4, (char const   *)tmp___3);
      }
    }
    uptime___0 = time_now - boot_time;
  }
  {
  updays = uptime___0 / 86400L;
  uphours = (int )((uptime___0 - updays * 86400L) / 3600L);
  upmins = (int )(((uptime___0 - updays * 86400L) - (time_t )(uphours * 3600)) / 60L);
  tmn = localtime((time_t const   *)(& time_now));
  }
  if (tmn) {
    {
    tmp___5 = gettext(" %H:%M%P  ");
    fprintftime(stdout, (char const   *)tmp___5, (struct tm  const  *)tmn, 0, 0);
    }
  } else {
    {
    tmp___6 = gettext(" ??:????  ");
    printf((char const   */* __restrict  */)((char const   *)tmp___6));
    }
  }
  if (uptime___0 == -1L) {
    {
    tmp___7 = gettext("up ???? days ??:??,  ");
    printf((char const   */* __restrict  */)((char const   *)tmp___7));
    }
  } else
  if (0L < updays) {
    {
    tmp___8 = select_plural((uintmax_t )updays);
    tmp___9 = ngettext("up %ld day %2d:%02d,  ", "up %ld days %2d:%02d,  ", tmp___8);
    printf((char const   */* __restrict  */)((char const   *)tmp___9), updays, uphours,
           upmins);
    }
  } else {
    {
    printf((char const   */* __restrict  */)"up  %2d:%02d,  ", uphours, upmins);
    }
  }
  {
  tmp___10 = ngettext("%lu user", "%lu users", entries);
  printf((char const   */* __restrict  */)((char const   *)tmp___10), entries);
  loads = getloadavg(avg, 3);
  }
  if (loads == -1) {
    {
    putchar_unlocked('\n');
    }
  } else {
    if (loads > 0) {
      {
      tmp___11 = gettext(",  load average: %.2f");
      printf((char const   */* __restrict  */)((char const   *)tmp___11), avg[0]);
      }
    }
    if (loads > 1) {
      {
      printf((char const   */* __restrict  */)", %.2f", avg[1]);
      }
    }
    if (loads > 2) {
      {
      printf((char const   */* __restrict  */)", %.2f", avg[2]);
      }
    }
    if (loads > 0) {
      {
      putchar_unlocked('\n');
      }
    }
  }
  return;
}
}
static void uptime(char const   *filename , int options ) 
{ 
  size_t n_users ;
  STRUCT_UTMP *utmp_buf ;
  int *tmp ;
  int tmp___0 ;

  {
  {
  tmp___0 = read_utmp(filename, & n_users, & utmp_buf, options);
  }
  if (tmp___0 != 0) {
    {
    tmp = __errno_location();
    error(1, *tmp, "%s", filename);
    }
  }
  {
  print_uptime(n_users, (STRUCT_UTMP const   *)utmp_buf);
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
    tmp___0 = gettext("Usage: %s [OPTION]... [FILE]\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name);
    tmp___1 = gettext("Print the current time, the length of time the system has been up,\nthe number of users on the system, and the average number of jobs\nin the run queue over the last 1, 5 and 15 minutes.");
    printf((char const   */* __restrict  */)((char const   *)tmp___1));
    tmp___2 = gettext("  Processes in\nan uninterruptible sleep state also contribute to the load average.\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___2));
    tmp___3 = gettext("If FILE is not specified, use %s.  %s as FILE is common.\n\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___3), "/var/run/utmp",
           "/var/log/wtmp");
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
  int tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *__cil_tmp13 ;
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;

  {
  {
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  parse_long_options(argc, argv, "uptime", "GNU coreutils", Version, & usage, "Joseph Arceneaux",
                     "David MacKenzie", "Kaveh Ghazi", (char const   *)((void *)0));
  tmp = getopt_long(argc, (char * const  *)argv, "", (struct option  const  *)((void *)0),
                    (int *)((void *)0));
  }
  if (tmp != -1) {
    {
    usage(1);
    }
  }
  if (argc - optind == 0) {
    goto case_0;
  }
  if (argc - optind == 1) {
    goto case_1;
  }
  goto switch_default;
  case_0: 
  {
  uptime("/var/run/utmp", 1);
  }
  goto switch_break;
  case_1: 
  {
  uptime((char const   *)*(argv + optind), 0);
  }
  goto switch_break;
  switch_default: 
  {
  tmp___0 = quote((char const   *)*(argv + (optind + 1)));
  tmp___1 = gettext("extra operand %s");
  error(0, 0, (char const   *)tmp___1, tmp___0);
  usage(1);
  }
  switch_break: 
  {
  exit(0);
  }
}
}
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
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
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strrchr)(char const   *__s ,
                                                                                                int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) mbsinit)(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) mbrtowc)(wchar_t * __restrict  __pwc ,
                                                                                 char const   * __restrict  __s ,
                                                                                 size_t __n ,
                                                                                 mbstate_t * __restrict  __p ) ;
unsigned int const   is_basic_table[8] ;
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
int volatile   exit_failure  =    (int volatile   )1;
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
extern int opterr ;
void version_etc_va(FILE *stream , char const   *command_name , char const   *package ,
                    char const   *version , va_list authors ) ;
static struct option  const  long_options[3]  = {      {"help", 0, (int *)((void *)0), 'h'}, 
        {"version", 0, (int *)((void *)0), 'v'}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
void parse_long_options(int argc , char **argv , char const   *command_name , char const   *package ,
                        char const   *version , void (*usage_func)(int  )  , ...) 
{ 
  int c ;
  int saved_opterr ;
  va_list authors ;

  {
  saved_opterr = opterr;
  opterr = 0;
  if (argc == 2) {
    {
    c = getopt_long(argc, (char * const  *)argv, "+", long_options, (int *)((void *)0));
    }
    if (c != -1) {
      if (c == 104) {
        goto case_104;
      }
      if (c == 118) {
        goto case_118;
      }
      goto switch_default;
      case_104: 
      {
      (*usage_func)(0);
      }
      case_118: 
      {
      __builtin_va_start(authors, usage_func);
      version_etc_va(stdout, command_name, package, version, authors);
      exit(0);
      }
      switch_default: 
      goto switch_break;
      switch_break: ;
    }
  }
  opterr = saved_opterr;
  optind = 0;
  return;
}
}
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
extern void setutxent(void) ;
extern void endutxent(void) ;
extern struct utmpx *getutxent(void) ;
extern int utmpxname(char const   *__file ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) kill)(__pid_t __pid ,
                                                                           int __sig ) ;
__inline static _Bool desirable_utmp_entry(STRUCT_UTMP const   *u , int options ) 
{ 
  _Bool user_proc ;
  int tmp ;
  int tmp___0 ;
  int *tmp___1 ;

  {
  if (u->ut_user[0]) {
    if ((int const   )u->ut_type == 7) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  user_proc = (_Bool )tmp;
  if (options & 2) {
    if (! user_proc) {
      return ((_Bool)0);
    }
  }
  if (options & 1) {
    if (user_proc) {
      if (u->ut_pid <= 0) {
        return ((_Bool)0);
      } else {
        {
        tmp___0 = kill((__pid_t )u->ut_pid, 0);
        }
        if (tmp___0 < 0) {
          {
          tmp___1 = __errno_location();
          }
          if (*tmp___1 == 3) {
            return ((_Bool)0);
          }
        }
      }
    }
  }
  return ((_Bool)1);
}
}
int read_utmp(char const   *file , size_t *n_entries , STRUCT_UTMP **utmp_buf , int options ) 
{ 
  size_t n_read ;
  size_t n_alloc ;
  STRUCT_UTMP *utmp ;
  STRUCT_UTMP *u ;
  void *tmp ;
  size_t tmp___0 ;
  _Bool tmp___1 ;

  {
  {
  n_read = (size_t )0;
  n_alloc = (size_t )0;
  utmp = (STRUCT_UTMP *)((void *)0);
  utmpxname(file);
  setutxent();
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    u = getutxent();
    }
    if (! ((unsigned long )u != (unsigned long )((void *)0))) {
      goto while_break;
    }
    {
    tmp___1 = desirable_utmp_entry((STRUCT_UTMP const   *)u, options);
    }
    if (tmp___1) {
      if (n_read == n_alloc) {
        {
        tmp = x2nrealloc((void *)utmp, & n_alloc, sizeof(*utmp));
        utmp = (STRUCT_UTMP *)tmp;
        }
      }
      tmp___0 = n_read;
      n_read ++;
      *(utmp + tmp___0) = *u;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
  endutxent();
  *n_entries = n_read;
  *utmp_buf = utmp;
  }
  return (0);
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
