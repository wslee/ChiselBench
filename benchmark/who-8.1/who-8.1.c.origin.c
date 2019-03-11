typedef int __int32_t;
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
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
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
typedef __pid_t pid_t;
typedef __time_t time_t;
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
typedef unsigned int __socklen_t;
typedef __socklen_t socklen_t;
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
struct addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct addrinfo *ai_next ;
};
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_79381748 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_79381748 __mbstate_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
union __anonunion_memory_double_618071262 {
   long double value ;
   unsigned int word[((sizeof(long double ) + sizeof(unsigned int )) - 1UL) / sizeof(unsigned int )] ;
};
typedef union __anonunion_memory_double_618071262 memory_double;
typedef int nl_item;
enum __anonenum_arg_type_817662448 {
    TYPE_NONE = 0,
    TYPE_SCHAR = 1,
    TYPE_UCHAR = 2,
    TYPE_SHORT = 3,
    TYPE_USHORT = 4,
    TYPE_INT = 5,
    TYPE_UINT = 6,
    TYPE_LONGINT = 7,
    TYPE_ULONGINT = 8,
    TYPE_LONGLONGINT = 9,
    TYPE_ULONGLONGINT = 10,
    TYPE_DOUBLE = 11,
    TYPE_LONGDOUBLE = 12,
    TYPE_CHAR = 13,
    TYPE_WIDE_CHAR = 14,
    TYPE_STRING = 15,
    TYPE_WIDE_STRING = 16,
    TYPE_POINTER = 17,
    TYPE_COUNT_SCHAR_POINTER = 18,
    TYPE_COUNT_SHORT_POINTER = 19,
    TYPE_COUNT_INT_POINTER = 20,
    TYPE_COUNT_LONGINT_POINTER = 21,
    TYPE_COUNT_LONGLONGINT_POINTER = 22
} ;
typedef enum __anonenum_arg_type_817662448 arg_type;
union __anonunion_a_145370145 {
   signed char a_schar ;
   unsigned char a_uchar ;
   short a_short ;
   unsigned short a_ushort ;
   int a_int ;
   unsigned int a_uint ;
   long a_longint ;
   unsigned long a_ulongint ;
   long long a_longlongint ;
   unsigned long long a_ulonglongint ;
   float a_float ;
   double a_double ;
   long double a_longdouble ;
   int a_char ;
   wint_t a_wide_char ;
   char const   *a_string ;
   wchar_t const   *a_wide_string ;
   void *a_pointer ;
   signed char *a_count_schar_pointer ;
   short *a_count_short_pointer ;
   int *a_count_int_pointer ;
   long *a_count_longint_pointer ;
   long long *a_count_longlongint_pointer ;
};
struct __anonstruct_argument_320522350 {
   arg_type type ;
   union __anonunion_a_145370145 a ;
};
typedef struct __anonstruct_argument_320522350 argument;
struct __anonstruct_arguments_777806161 {
   size_t count ;
   argument *arg ;
};
typedef struct __anonstruct_arguments_777806161 arguments;
typedef unsigned short fpucw_t;
struct __anonstruct_char_directive_658480644 {
   char const   *dir_start ;
   char const   *dir_end ;
   int flags ;
   char const   *width_start ;
   char const   *width_end ;
   size_t width_arg_index ;
   char const   *precision_start ;
   char const   *precision_end ;
   size_t precision_arg_index ;
   char conversion ;
   size_t arg_index ;
};
typedef struct __anonstruct_char_directive_658480644 char_directive;
struct __anonstruct_char_directives_143329776 {
   size_t count ;
   char_directive *dir ;
   size_t max_width_length ;
   size_t max_precision_length ;
};
typedef struct __anonstruct_char_directives_143329776 char_directives;
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
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                                                 , ...) ;
extern int puts(char const   *__s ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
int rpl_asprintf(char **resultp , char const   *format  , ...) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) strftime)(char * __restrict  __s ,
                                                                                  size_t __maxsize ,
                                                                                  char const   * __restrict  __format ,
                                                                                  struct tm  const  * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) struct tm *( __attribute__((__leaf__)) localtime)(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) stat)(char const   * __restrict  __file ,
                                                                                             struct stat * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) ttyname)(int __fd ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strncpy)(char * __restrict  __dest ,
                                                                                                  char const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strncat)(char * __restrict  __dest ,
                                                                                                  char const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
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
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) textdomain)(char const   *__domainname ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) bindtextdomain)(char const   *__domainname ,
                                                                                       char const   *__dirname ) ;
 __attribute__((__noreturn__)) void xalloc_die(void) ;
void *xmalloc(size_t n )  __attribute__((__malloc__)) ;
void *xrealloc(void *p , size_t n ) ;
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
char *( __attribute__((__warn_unused_result__)) imaxtostr)(intmax_t i , char *buf___1 ) ;
__inline static char *timetostr(time_t t , char *buf___1 ) 
{ 
  char *tmp ;

  {
  {
  tmp = imaxtostr(t, buf___1);
  }
  return (tmp);
}
}
 __attribute__((__noreturn__)) void usage(int status ) ;
_Bool c_isprint(int c ) ;
char *canon_host(char const   *host ) ;
char *extract_trimmed_name(STRUCT_UTMP const   *ut ) ;
int read_utmp(char const   *file , size_t *n_entries , STRUCT_UTMP **utmp_buf , int options ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
_Bool hard_locale(int category ) ;
char const   *quote(char const   *name ) ;
static _Bool do_lookup  ;
static _Bool short_list  ;
static _Bool short_output  ;
static _Bool include_idle  ;
static _Bool include_heading  ;
static _Bool include_mesg  ;
static _Bool include_exit  ;
static _Bool need_boottime  ;
static _Bool need_deadprocs  ;
static _Bool need_login  ;
static _Bool need_initspawn  ;
static _Bool need_clockchange  ;
static _Bool need_runlevel  ;
static _Bool need_users  ;
static _Bool my_line_only  ;
static char const   *time_format  ;
static int time_format_width  ;
static struct option  const  longopts[18]  = 
  {      {"all", 0, (int *)((void *)0), 'a'}, 
        {"boot", 0, (int *)((void *)0), 'b'}, 
        {"count", 0, (int *)((void *)0), 'q'}, 
        {"dead", 0, (int *)((void *)0), 'd'}, 
        {"heading", 0, (int *)((void *)0), 'H'}, 
        {"login", 0, (int *)((void *)0), 'l'}, 
        {"lookup", 0, (int *)((void *)0), 128}, 
        {"message", 0, (int *)((void *)0), 'T'}, 
        {"mesg", 0, (int *)((void *)0), 'T'}, 
        {"process", 0, (int *)((void *)0), 'p'}, 
        {"runlevel", 0, (int *)((void *)0), 'r'}, 
        {"short", 0, (int *)((void *)0), 's'}, 
        {"time", 0, (int *)((void *)0), 't'}, 
        {"users", 0, (int *)((void *)0), 'u'}, 
        {"writable", 0, (int *)((void *)0), 'T'}, 
        {"help", 0, (int *)((void *)0), -130}, 
        {"version", 0, (int *)((void *)0), -131}, 
        {(char const   *)((void *)0), 0, (int *)((void *)0), 0}};
static char const   *idle_string(time_t when , time_t boottime ) ;
static time_t now  =    -1L << (sizeof(time_t ) * 8UL - 1UL);
static char idle_hhmm[6]  ;
static char const   *idle_string(time_t when , time_t boottime ) 
{ 
  int seconds_idle ;
  char *tmp ;
  char *__cil_tmp8 ;
  char *__cil_tmp9 ;
  char *__cil_tmp10 ;

  {
  if (now == -1L << (sizeof(time_t ) * 8UL - 1UL)) {
    {
    time(& now);
    }
  }
  if (boottime < when) {
    if (now - 86400L < when) {
      if (when <= now) {
        seconds_idle = (int )(now - when);
        if (seconds_idle < 60) {
          return ("  .  ");
        } else {
          {
          sprintf((char */* __restrict  */)(idle_hhmm), (char const   */* __restrict  */)"%02d:%02d",
                  seconds_idle / 3600, (seconds_idle % 3600) / 60);
          }
          return ((char const   *)(idle_hhmm));
        }
      }
    }
  }
  {
  tmp = gettext(" old ");
  }
  return ((char const   *)tmp);
}
}
static char buf[33UL]  ;
static char const   *time_string(STRUCT_UTMP const   *utmp_ent ) 
{ 
  time_t t ;
  struct tm *tmp ;
  struct tm *tmp___0 ;
  char *tmp___1 ;

  {
  {
  t = (time_t )utmp_ent->ut_tv.tv_sec;
  tmp___0 = localtime((time_t const   *)(& t));
  tmp = tmp___0;
  }
  if (tmp) {
    {
    strftime((char */* __restrict  */)(buf), sizeof(buf), (char const   */* __restrict  */)time_format,
             (struct tm  const  */* __restrict  */)((struct tm  const  *)tmp));
    }
    return ((char const   *)(buf));
  } else {
    {
    tmp___1 = timetostr(t, buf);
    }
    return ((char const   *)tmp___1);
  }
}
}
static void print_line(int userlen , char const   *user , char const   state , int linelen ,
                       char const   *line , char const   *time_str , char const   *idle ,
                       char const   *pid , char const   *comment___0 , char const   *exitstr___0 ) ;
static char mesg[3]  = {      (char )' ',      (char )'x',      (char )'\000'};
static void print_line(int userlen , char const   *user , char const   state , int linelen ,
                       char const   *line , char const   *time_str , char const   *idle ,
                       char const   *pid , char const   *comment___0 , char const   *exitstr___0 ) 
{ 
  char *buf___1 ;
  char x_idle[8] ;
  char x_pid[(1UL + ((((sizeof(pid_t ) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL)) + 1UL] ;
  char *x_exitstr ;
  int err ;
  size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  void *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  char *p ;
  size_t tmp___9 ;
  void *__cil_tmp35 ;
  void *__cil_tmp36 ;
  char *__cil_tmp37 ;
  char *__cil_tmp38 ;
  char *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char *__cil_tmp41 ;
  char *__cil_tmp42 ;

  {
  mesg[1] = (char )state;
  if (include_idle) {
    if (! short_output) {
      {
      tmp = strlen(idle);
      }
      if (tmp < sizeof(x_idle) - 1UL) {
        {
        sprintf((char */* __restrict  */)(x_idle), (char const   */* __restrict  */)" %-6s",
                idle);
        }
      } else {
        x_idle[0] = (char )'\000';
      }
    } else {
      x_idle[0] = (char )'\000';
    }
  } else {
    x_idle[0] = (char )'\000';
  }
  if (! short_output) {
    {
    tmp___0 = strlen(pid);
    }
    if (tmp___0 < sizeof(x_pid) - 1UL) {
      {
      sprintf((char */* __restrict  */)(x_pid), (char const   */* __restrict  */)" %10s",
              pid);
      }
    } else {
      x_pid[0] = (char )'\000';
    }
  } else {
    x_pid[0] = (char )'\000';
  }
  if (include_exit) {
    {
    tmp___4 = strlen(exitstr___0);
    }
    if (12UL > tmp___4) {
      tmp___3 = (size_t )12;
    } else {
      {
      tmp___2 = strlen(exitstr___0);
      tmp___3 = tmp___2;
      }
    }
    tmp___5 = (1UL + tmp___3) + 1UL;
  } else {
    tmp___5 = (size_t )1;
  }
  {
  tmp___6 = xmalloc(tmp___5);
  x_exitstr = (char *)tmp___6;
  }
  if (include_exit) {
    {
    sprintf((char */* __restrict  */)x_exitstr, (char const   */* __restrict  */)" %-12s",
            exitstr___0);
    }
  } else {
    *x_exitstr = (char )'\000';
  }
  if (include_mesg) {
    tmp___7 = (char const   *)(mesg);
  } else {
    tmp___7 = "";
  }
  if (user) {
    tmp___8 = user;
  } else {
    tmp___8 = "   .";
  }
  {
  err = rpl_asprintf(& buf___1, "%-8.*s%s %-12.*s %-*s%s%s %-8s%s", userlen, tmp___8,
                     tmp___7, linelen, line, time_format_width, time_str, x_idle,
                     x_pid, comment___0, x_exitstr);
  }
  if (err == -1) {
    {
    xalloc_die();
    }
  }
  {
  tmp___9 = strlen((char const   *)buf___1);
  p = buf___1 + tmp___9;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    p --;
    if (! ((int )*p == 32)) {
      goto while_break;
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
  *(p + 1) = (char )'\000';
  puts((char const   *)buf___1);
  free((void *)buf___1);
  free((void *)x_exitstr);
  }
  return;
}
}
static char *hoststr  ;
static size_t hostlen  ;
static void print_user(STRUCT_UTMP const   *utmp_ent , time_t boottime ) 
{ 
  struct stat stats ;
  time_t last_change ;
  char mesg___0 ;
  char idlestr[7] ;
  char line[(sizeof(utmp_ent->ut_line) + (sizeof("/dev/") - 1UL)) + 1UL] ;
  char pidstr[((((sizeof(utmp_ent->ut_pid) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL) + 1UL] ;
  int tmp ;
  char const   *tmp___0 ;
  char ut_host[sizeof(utmp_ent->ut_host) + 1UL] ;
  char *host ;
  char *display ;
  char *tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  void *tmp___4 ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  size_t tmp___7 ;
  void *tmp___8 ;
  size_t tmp___9 ;
  void *tmp___10 ;
  char const   *tmp___11 ;
  char const   *tmp___12 ;
  void *__cil_tmp40 ;
  void *__cil_tmp41 ;
  void *__cil_tmp42 ;
  void *__cil_tmp43 ;
  void *__cil_tmp44 ;
  char *__cil_tmp45 ;
  char *__cil_tmp46 ;
  char *__cil_tmp47 ;
  char *__cil_tmp48 ;
  char *__cil_tmp49 ;
  char *__cil_tmp50 ;
  char *__cil_tmp51 ;
  char *__cil_tmp52 ;
  char *__cil_tmp53 ;

  {
  {
  sprintf((char */* __restrict  */)(pidstr), (char const   */* __restrict  */)"%ld",
          (long )utmp_ent->ut_pid);
  }
  if ((int )utmp_ent->ut_line[0] == 47) {
    {
    strncpy((char */* __restrict  */)(line), (char const   */* __restrict  */)((char const   *)(utmp_ent->ut_line)),
            sizeof(utmp_ent->ut_line));
    line[sizeof(utmp_ent->ut_line)] = (char )'\000';
    }
  } else {
    {
    strcpy((char */* __restrict  */)(line), (char const   */* __restrict  */)"/dev/");
    strncpy((char */* __restrict  */)(line + (sizeof("/dev/") - 1UL)), (char const   */* __restrict  */)((char const   *)(utmp_ent->ut_line)),
            sizeof(utmp_ent->ut_line));
    line[(sizeof("/dev/") - 1UL) + sizeof(utmp_ent->ut_line)] = (char )'\000';
    }
  }
  {
  tmp = stat((char const   */* __restrict  */)((char const   *)(line)), (struct stat */* __restrict  */)(& stats));
  }
  if (tmp == 0) {
    if (stats.st_mode & (unsigned int )(128 >> 3)) {
      mesg___0 = (char )'+';
    } else {
      mesg___0 = (char )'-';
    }
    last_change = stats.st_atim.tv_sec;
  } else {
    mesg___0 = (char )'?';
    last_change = (time_t )0;
  }
  if (last_change) {
    {
    tmp___0 = idle_string(last_change, boottime);
    sprintf((char */* __restrict  */)(idlestr), (char const   */* __restrict  */)"%.*s",
            6, tmp___0);
    }
  } else {
    {
    sprintf((char */* __restrict  */)(idlestr), (char const   */* __restrict  */)"  ?");
    }
  }
  if (utmp_ent->ut_host[0]) {
    {
    host = (char *)((void *)0);
    display = (char *)((void *)0);
    strncpy((char */* __restrict  */)(ut_host), (char const   */* __restrict  */)((char const   *)(utmp_ent->ut_host)),
            sizeof(utmp_ent->ut_host));
    ut_host[sizeof(utmp_ent->ut_host)] = (char )'\000';
    display = strchr((char const   *)(ut_host), ':');
    }
    if (display) {
      tmp___1 = display;
      display ++;
      *tmp___1 = (char )'\000';
    }
    if (ut_host[0]) {
      if (do_lookup) {
        {
        host = canon_host((char const   *)(ut_host));
        }
      }
    }
    if (! host) {
      host = ut_host;
    }
    if (display) {
      {
      tmp___5 = strlen((char const   *)host);
      tmp___6 = strlen((char const   *)display);
      }
      if (hostlen < (tmp___5 + tmp___6) + 4UL) {
        {
        tmp___2 = strlen((char const   *)host);
        tmp___3 = strlen((char const   *)display);
        hostlen = (tmp___2 + tmp___3) + 4UL;
        tmp___4 = xrealloc((void *)hoststr, hostlen);
        hoststr = (char *)tmp___4;
        }
      }
      {
      sprintf((char */* __restrict  */)hoststr, (char const   */* __restrict  */)"(%s:%s)",
              host, display);
      }
    } else {
      {
      tmp___9 = strlen((char const   *)host);
      }
      if (hostlen < tmp___9 + 3UL) {
        {
        tmp___7 = strlen((char const   *)host);
        hostlen = tmp___7 + 3UL;
        tmp___8 = xrealloc((void *)hoststr, hostlen);
        hoststr = (char *)tmp___8;
        }
      }
      {
      sprintf((char */* __restrict  */)hoststr, (char const   */* __restrict  */)"(%s)",
              host);
      }
    }
    if ((unsigned long )host != (unsigned long )(ut_host)) {
      {
      free((void *)host);
      }
    }
  } else {
    if (hostlen < 1UL) {
      {
      hostlen = (size_t )1;
      tmp___10 = xrealloc((void *)hoststr, hostlen);
      hoststr = (char *)tmp___10;
      }
    }
    *hoststr = (char )'\000';
  }
  if (hoststr) {
    tmp___11 = (char const   *)hoststr;
  } else {
    tmp___11 = "";
  }
  {
  tmp___12 = time_string(utmp_ent);
  print_line((int )sizeof(utmp_ent->ut_user), (char const   *)(utmp_ent->ut_user),
             (char const   )mesg___0, (int )sizeof(utmp_ent->ut_line), (char const   *)(utmp_ent->ut_line),
             tmp___12, (char const   *)(idlestr), (char const   *)(pidstr), tmp___11,
             "");
  }
  return;
}
}
static void print_boottime(STRUCT_UTMP const   *utmp_ent ) 
{ 
  char const   *tmp ;
  char *tmp___0 ;
  char *__cil_tmp10 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;

  {
  {
  tmp = time_string(utmp_ent);
  tmp___0 = gettext("system boot");
  print_line(-1, "", (char const   )' ', -1, (char const   *)tmp___0, tmp, "", "",
             "", "");
  }
  return;
}
}
static char *make_id_equals_comment(STRUCT_UTMP const   *utmp_ent ) 
{ 
  char *comment___0 ;
  char *tmp ;
  size_t tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char *__cil_tmp9 ;
  char *__cil_tmp10 ;

  {
  {
  tmp = gettext("id=");
  tmp___0 = strlen((char const   *)tmp);
  tmp___1 = xmalloc((tmp___0 + sizeof(utmp_ent->ut_id)) + 1UL);
  comment___0 = (char *)tmp___1;
  tmp___2 = gettext("id=");
  strcpy((char */* __restrict  */)comment___0, (char const   */* __restrict  */)((char const   *)tmp___2));
  strncat((char */* __restrict  */)comment___0, (char const   */* __restrict  */)((char const   *)(utmp_ent->ut_id)),
          sizeof(utmp_ent->ut_id));
  }
  return (comment___0);
}
}
static char *exitstr  ;
static void print_deadprocs(STRUCT_UTMP const   *utmp_ent ) 
{ 
  char *comment___0 ;
  char *tmp ;
  char pidstr[((((sizeof(utmp_ent->ut_pid) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL) + 1UL] ;
  char *tmp___0 ;
  size_t tmp___1 ;
  char *tmp___2 ;
  size_t tmp___3 ;
  void *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char const   *tmp___7 ;
  void *__cil_tmp22 ;
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
  tmp = make_id_equals_comment(utmp_ent);
  comment___0 = tmp;
  sprintf((char */* __restrict  */)(pidstr), (char const   */* __restrict  */)"%ld",
          (long )utmp_ent->ut_pid);
  }
  if (! exitstr) {
    {
    tmp___0 = gettext("term=");
    tmp___1 = strlen((char const   *)tmp___0);
    tmp___2 = gettext("exit=");
    tmp___3 = strlen((char const   *)tmp___2);
    tmp___4 = xmalloc(((((tmp___1 + ((((sizeof(utmp_ent->ut_exit.e_termination) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL)) + 1UL) + tmp___3) + ((((sizeof(utmp_ent->ut_exit.e_exit) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL)) + 1UL);
    exitstr = (char *)tmp___4;
    }
  }
  {
  tmp___5 = gettext("exit=");
  tmp___6 = gettext("term=");
  sprintf((char */* __restrict  */)exitstr, (char const   */* __restrict  */)"%s%d %s%d",
          tmp___6, (int const   )utmp_ent->ut_exit.e_termination, tmp___5, (int const   )utmp_ent->ut_exit.e_exit);
  tmp___7 = time_string(utmp_ent);
  print_line(-1, "", (char const   )' ', (int )sizeof(utmp_ent->ut_line), (char const   *)(utmp_ent->ut_line),
             tmp___7, "", (char const   *)(pidstr), (char const   *)comment___0, (char const   *)exitstr);
  free((void *)comment___0);
  }
  return;
}
}
static void print_login(STRUCT_UTMP const   *utmp_ent ) 
{ 
  char *comment___0 ;
  char *tmp ;
  char pidstr[((((sizeof(utmp_ent->ut_pid) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL) + 1UL] ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  void *__cil_tmp12 ;
  char *__cil_tmp13 ;
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;
  char *__cil_tmp16 ;

  {
  {
  tmp = make_id_equals_comment(utmp_ent);
  comment___0 = tmp;
  sprintf((char */* __restrict  */)(pidstr), (char const   */* __restrict  */)"%ld",
          (long )utmp_ent->ut_pid);
  tmp___0 = time_string(utmp_ent);
  tmp___1 = gettext("LOGIN");
  print_line(-1, (char const   *)tmp___1, (char const   )' ', (int )sizeof(utmp_ent->ut_line),
             (char const   *)(utmp_ent->ut_line), tmp___0, "", (char const   *)(pidstr),
             (char const   *)comment___0, "");
  free((void *)comment___0);
  }
  return;
}
}
static void print_initspawn(STRUCT_UTMP const   *utmp_ent ) 
{ 
  char *comment___0 ;
  char *tmp ;
  char pidstr[((((sizeof(utmp_ent->ut_pid) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL) + 1UL] ;
  char const   *tmp___0 ;
  void *__cil_tmp11 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;

  {
  {
  tmp = make_id_equals_comment(utmp_ent);
  comment___0 = tmp;
  sprintf((char */* __restrict  */)(pidstr), (char const   */* __restrict  */)"%ld",
          (long )utmp_ent->ut_pid);
  tmp___0 = time_string(utmp_ent);
  print_line(-1, "", (char const   )' ', (int )sizeof(utmp_ent->ut_line), (char const   *)(utmp_ent->ut_line),
             tmp___0, "", (char const   *)(pidstr), (char const   *)comment___0, "");
  free((void *)comment___0);
  }
  return;
}
}
static void print_clockchange(STRUCT_UTMP const   *utmp_ent ) 
{ 
  char const   *tmp ;
  char *tmp___0 ;
  char *__cil_tmp10 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;

  {
  {
  tmp = time_string(utmp_ent);
  tmp___0 = gettext("clock change");
  print_line(-1, "", (char const   )' ', -1, (char const   *)tmp___0, tmp, "", "",
             "", "");
  }
  return;
}
}
static char *runlevline  ;
static char *comment  ;
static void print_runlevel(STRUCT_UTMP const   *utmp_ent ) 
{ 
  unsigned char last ;
  unsigned char curr ;
  char *tmp ;
  size_t tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  size_t tmp___4 ;
  void *tmp___5 ;
  int tmp___6 ;
  char *tmp___7 ;
  char const   *tmp___9 ;
  _Bool tmp___10 ;
  char const   *tmp___11 ;
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
  last = (unsigned char )(utmp_ent->ut_pid / 256);
  curr = (unsigned char )(utmp_ent->ut_pid % 256);
  if (! runlevline) {
    {
    tmp = gettext("run-level");
    tmp___0 = strlen((char const   *)tmp);
    tmp___1 = xmalloc(tmp___0 + 3UL);
    runlevline = (char *)tmp___1;
    }
  }
  {
  tmp___2 = gettext("run-level");
  sprintf((char */* __restrict  */)runlevline, (char const   */* __restrict  */)"%s %c",
          tmp___2, (int )curr);
  }
  if (! comment) {
    {
    tmp___3 = gettext("last=");
    tmp___4 = strlen((char const   *)tmp___3);
    tmp___5 = xmalloc(tmp___4 + 2UL);
    comment = (char *)tmp___5;
    }
  }
  if ((int )last == 78) {
    tmp___6 = 'S';
  } else {
    tmp___6 = (int )last;
  }
  {
  tmp___7 = gettext("last=");
  sprintf((char */* __restrict  */)comment, (char const   */* __restrict  */)"%s%c",
          tmp___7, tmp___6);
  tmp___10 = c_isprint((int )last);
  }
  if (tmp___10) {
    tmp___9 = (char const   *)comment;
  } else {
    tmp___9 = "";
  }
  {
  tmp___11 = time_string(utmp_ent);
  print_line(-1, "", (char const   )' ', -1, (char const   *)runlevline, tmp___11,
             "", "", tmp___9, "");
  }
  return;
}
}
static void list_entries_who(size_t n , STRUCT_UTMP const   *utmp_buf ) 
{ 
  unsigned long entries ;
  char const   *separator ;
  char *trimmed_name ;
  size_t tmp ;
  char *tmp___0 ;
  char *__cil_tmp11 ;
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;

  {
  entries = 0UL;
  separator = "";
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    tmp = n;
    n --;
    if (! tmp) {
      goto while_break;
    }
    if (utmp_buf->ut_user[0]) {
      if ((int const   )utmp_buf->ut_type == 7) {
        {
        trimmed_name = extract_trimmed_name(utmp_buf);
        printf((char const   */* __restrict  */)"%s%s", separator, trimmed_name);
        free((void *)trimmed_name);
        separator = " ";
        entries ++;
        }
      }
    }
    utmp_buf ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: 
  {
  tmp___0 = gettext("\n# users=%lu\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___0), entries);
  }
  return;
}
}
static void print_heading(void) 
{ 
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *__cil_tmp15 ;
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;

  {
  {
  tmp = gettext("EXIT");
  tmp___0 = gettext("COMMENT");
  tmp___1 = gettext("PID");
  tmp___2 = gettext("IDLE");
  tmp___3 = gettext("TIME");
  tmp___4 = gettext("LINE");
  tmp___5 = gettext("NAME");
  print_line(-1, (char const   *)tmp___5, (char const   )' ', -1, (char const   *)tmp___4,
             (char const   *)tmp___3, (char const   *)tmp___2, (char const   *)tmp___1,
             (char const   *)tmp___0, (char const   *)tmp);
  }
  return;
}
}
static void scan_entries(size_t n , STRUCT_UTMP const   *utmp_buf ) 
{ 
  char *ttyname_b ;
  time_t boottime ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  char *__cil_tmp9 ;

  {
  boottime = -1L << (sizeof(time_t ) * 8UL - 1UL);
  if (include_heading) {
    {
    print_heading();
    }
  }
  if (my_line_only) {
    {
    ttyname_b = ttyname(0);
    }
    if (! ttyname_b) {
      return;
    }
    {
    tmp = strncmp((char const   *)ttyname_b, "/dev/", sizeof("/dev/") - 1UL);
    }
    if (tmp == 0) {
      ttyname_b += sizeof("/dev/") - 1UL;
    }
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    tmp___1 = n;
    n --;
    if (! tmp___1) {
      goto while_break;
    }
    if (! my_line_only) {
      goto _L___5;
    } else {
      {
      tmp___0 = strncmp((char const   *)ttyname_b, (char const   *)(utmp_buf->ut_line),
                        sizeof(utmp_buf->ut_line));
      }
      if (tmp___0 == 0) {
        _L___5: 
        if (need_users) {
          if (utmp_buf->ut_user[0]) {
            if ((int const   )utmp_buf->ut_type == 7) {
              {
              print_user(utmp_buf, boottime);
              }
            } else {
              goto _L___4;
            }
          } else {
            goto _L___4;
          }
        } else
        _L___4: 
        if (need_runlevel) {
          if ((int const   )utmp_buf->ut_type == 1) {
            {
            print_runlevel(utmp_buf);
            }
          } else {
            goto _L___3;
          }
        } else
        _L___3: 
        if (need_boottime) {
          if ((int const   )utmp_buf->ut_type == 2) {
            {
            print_boottime(utmp_buf);
            }
          } else {
            goto _L___2;
          }
        } else
        _L___2: 
        if (need_clockchange) {
          if ((int const   )utmp_buf->ut_type == 3) {
            {
            print_clockchange(utmp_buf);
            }
          } else {
            goto _L___1;
          }
        } else
        _L___1: 
        if (need_initspawn) {
          if ((int const   )utmp_buf->ut_type == 5) {
            {
            print_initspawn(utmp_buf);
            }
          } else {
            goto _L___0;
          }
        } else
        _L___0: 
        if (need_login) {
          if ((int const   )utmp_buf->ut_type == 6) {
            {
            print_login(utmp_buf);
            }
          } else {
            goto _L;
          }
        } else
        _L: 
        if (need_deadprocs) {
          if ((int const   )utmp_buf->ut_type == 8) {
            {
            print_deadprocs(utmp_buf);
            }
          }
        }
      }
    }
    if ((int const   )utmp_buf->ut_type == 2) {
      boottime = (time_t )utmp_buf->ut_tv.tv_sec;
    }
    utmp_buf ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return;
}
}
static void who(char const   *filename , int options ) 
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
  if (short_list) {
    {
    list_entries_who(n_users, (STRUCT_UTMP const   *)utmp_buf);
    }
  } else {
    {
    scan_entries(n_users, (STRUCT_UTMP const   *)utmp_buf);
    }
  }
  {
  free((void *)utmp_buf);
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
  char *tmp___8 ;
  char *tmp___9 ;
  char *__cil_tmp24 ;
  char *__cil_tmp25 ;
  char *__cil_tmp26 ;
  char *__cil_tmp27 ;
  char *__cil_tmp28 ;
  char *__cil_tmp29 ;
  char *__cil_tmp30 ;
  char *__cil_tmp31 ;
  char *__cil_tmp32 ;
  char *__cil_tmp33 ;
  char *__cil_tmp34 ;

  {
  if (status != 0) {
    {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)((char const   *)tmp),
            program_name);
    }
  } else {
    {
    tmp___0 = gettext("Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name);
    tmp___1 = gettext("Print information about users who are currently logged in.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___1), (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("\n  -a, --all         same as -b -d --login -p -r -t -T -u\n  -b, --boot        time of last system boot\n  -d, --dead        print dead processes\n  -H, --heading     print line of column headings\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -l, --login       print system login processes\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("      --lookup      attempt to canonicalize hostnames via DNS\n  -m                only hostname and user associated with stdin\n  -p, --process     print active processes spawned by init\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  -q, --count       all login names and number of users logged on\n  -r, --runlevel    print current runlevel\n  -s, --short       print only name, line, and time (default)\n  -t, --time        print last system clock change\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___5), (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("  -T, -w, --mesg    add user\'s message status as +, - or ?\n  -u, --users       list users logged in\n      --message     same as -T\n      --writable    same as -T\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___6), (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___7), (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___8), (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("\nIf FILE is not specified, use %s.  %s as FILE is common.\nIf ARG1 ARG2 given, -m presumed: `am i\' or `mom likes\' are usual.\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___9), "/var/run/utmp",
           "/var/log/wtmp");
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
  int optc ;
  _Bool assumptions ;
  _Bool tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;
  char *__cil_tmp22 ;
  char *__cil_tmp23 ;
  char *__cil_tmp24 ;
  char *__cil_tmp25 ;

  {
  {
  assumptions = (_Bool)1;
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
    optc = getopt_long(argc, (char * const  *)argv, "abdlmpqrstuwHT", longopts, (int *)((void *)0));
    }
    if (! (optc != -1)) {
      goto while_break;
    }
    if (optc == 97) {
      goto case_97;
    }
    if (optc == 98) {
      goto case_98;
    }
    if (optc == 100) {
      goto case_100;
    }
    if (optc == 72) {
      goto case_72;
    }
    if (optc == 108) {
      goto case_108;
    }
    if (optc == 109) {
      goto case_109;
    }
    if (optc == 112) {
      goto case_112;
    }
    if (optc == 113) {
      goto case_113;
    }
    if (optc == 114) {
      goto case_114;
    }
    if (optc == 115) {
      goto case_115;
    }
    if (optc == 116) {
      goto case_116;
    }
    if (optc == 84) {
      goto case_84;
    }
    if (optc == 119) {
      goto case_84;
    }
    if (optc == 117) {
      goto case_117;
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
    case_97: 
    need_boottime = (_Bool)1;
    need_deadprocs = (_Bool)1;
    need_login = (_Bool)1;
    need_initspawn = (_Bool)1;
    need_runlevel = (_Bool)1;
    need_clockchange = (_Bool)1;
    need_users = (_Bool)1;
    include_mesg = (_Bool)1;
    include_idle = (_Bool)1;
    include_exit = (_Bool)1;
    assumptions = (_Bool)0;
    goto switch_break;
    case_98: 
    need_boottime = (_Bool)1;
    assumptions = (_Bool)0;
    goto switch_break;
    case_100: 
    need_deadprocs = (_Bool)1;
    include_idle = (_Bool)1;
    include_exit = (_Bool)1;
    assumptions = (_Bool)0;
    goto switch_break;
    case_72: 
    include_heading = (_Bool)1;
    goto switch_break;
    case_108: 
    need_login = (_Bool)1;
    include_idle = (_Bool)1;
    assumptions = (_Bool)0;
    goto switch_break;
    case_109: 
    my_line_only = (_Bool)1;
    goto switch_break;
    case_112: 
    need_initspawn = (_Bool)1;
    assumptions = (_Bool)0;
    goto switch_break;
    case_113: 
    short_list = (_Bool)1;
    goto switch_break;
    case_114: 
    need_runlevel = (_Bool)1;
    include_idle = (_Bool)1;
    assumptions = (_Bool)0;
    goto switch_break;
    case_115: 
    short_output = (_Bool)1;
    goto switch_break;
    case_116: 
    need_clockchange = (_Bool)1;
    assumptions = (_Bool)0;
    goto switch_break;
    case_84: 
    include_mesg = (_Bool)1;
    goto switch_break;
    case_117: 
    need_users = (_Bool)1;
    include_idle = (_Bool)1;
    assumptions = (_Bool)0;
    goto switch_break;
    case_128: 
    do_lookup = (_Bool)1;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    version_etc(stdout, "who", "GNU coreutils", Version, "Joseph Arceneaux", "David MacKenzie",
                "Michael Stone", (char *)((void *)0));
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
  if (assumptions) {
    need_users = (_Bool)1;
    short_output = (_Bool)1;
  }
  if (include_exit) {
    short_output = (_Bool)0;
  }
  {
  tmp = hard_locale(2);
  }
  if (tmp) {
    time_format = "%Y-%m-%d %H:%M";
    time_format_width = 16;
  } else {
    time_format = "%b %e %H:%M";
    time_format_width = 12;
  }
  if (argc - optind == 2) {
    goto case_2;
  }
  if (argc - optind == -1) {
    goto case_neg_1;
  }
  if (argc - optind == 0) {
    goto case_neg_1;
  }
  if (argc - optind == 1) {
    goto case_1;
  }
  goto switch_default___0;
  case_2: 
  my_line_only = (_Bool)1;
  case_neg_1: 
  {
  who("/var/run/utmp", 1);
  }
  goto switch_break___0;
  case_1: 
  {
  who((char const   *)*(argv + optind), 0);
  }
  goto switch_break___0;
  switch_default___0: 
  {
  tmp___0 = quote((char const   *)*(argv + (optind + 2)));
  tmp___1 = gettext("extra operand %s");
  error(0, 0, (char const   *)tmp___1, tmp___0);
  usage(1);
  }
  switch_break___0: 
  {
  exit(0);
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
char *vasnprintf(char *resultbuf , size_t *lengthp , char const   *format , va_list args ) ;
int rpl_vasprintf(char **resultp , char const   *format , va_list args ) ;
int rpl_asprintf(char **resultp , char const   *format  , ...) 
{ 
  va_list args ;
  int result ;

  {
  {
  __builtin_va_start(args, format);
  result = rpl_vasprintf(resultp, format, args);
  __builtin_va_end(args);
  }
  return (result);
}
}
char const   *simple_backup_suffix ;
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
_Bool c_isprint(int c ) 
{ 
  int tmp ;

  {
  if (c >= 32) {
    if (c <= 126) {
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
char *canon_host_r(char const   *host , int *cherror ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern int getaddrinfo(char const   * __restrict  __name , char const   * __restrict  __service ,
                       struct addrinfo  const  * __restrict  __req , struct addrinfo ** __restrict  __pai ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) freeaddrinfo)(struct addrinfo *__ai ) ;
static int last_cherror  ;
char *canon_host(char const   *host ) 
{ 
  char *tmp ;

  {
  {
  tmp = canon_host_r(host, & last_cherror);
  }
  return (tmp);
}
}
static struct addrinfo hints  ;
char *canon_host_r(char const   *host , int *cherror ) 
{ 
  char *retval ;
  struct addrinfo *res ;
  int status ;
  char const   *tmp ;

  {
  {
  retval = (char *)((void *)0);
  res = (struct addrinfo *)((void *)0);
  hints.ai_flags = 2;
  status = getaddrinfo((char const   */* __restrict  */)host, (char const   */* __restrict  */)((char const   *)((void *)0)),
                       (struct addrinfo  const  */* __restrict  */)((struct addrinfo  const  *)(& hints)),
                       (struct addrinfo **/* __restrict  */)(& res));
  }
  if (! status) {
    if (res->ai_canonname) {
      tmp = (char const   *)res->ai_canonname;
    } else {
      tmp = host;
    }
    {
    retval = strdup(tmp);
    }
    if (! retval) {
      if (cherror) {
        *cherror = -10;
      }
    }
    {
    freeaddrinfo(res);
    }
  } else
  if (cherror) {
    *cherror = status;
  }
  return (retval);
}
}
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
_Bool hard_locale(int category ) 
{ 
  _Bool hard ;
  char const   *p ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char *locale ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;

  {
  {
  hard = (_Bool)1;
  tmp = setlocale(category, (char const   *)((void *)0));
  p = (char const   *)tmp;
  }
  if (p) {
    if (1) {
      {
      tmp___0 = strcmp(p, "C");
      }
      if (tmp___0 == 0) {
        hard = (_Bool)0;
      } else {
        {
        tmp___1 = strcmp(p, "POSIX");
        }
        if (tmp___1 == 0) {
          hard = (_Bool)0;
        }
      }
    } else {
      {
      tmp___2 = strdup(p);
      locale = tmp___2;
      }
      if (locale) {
        {
        tmp___3 = setlocale(category, "C");
        p = (char const   *)tmp___3;
        }
        if (p) {
          {
          tmp___4 = strcmp(p, (char const   *)locale);
          }
          if (tmp___4 == 0) {
            hard = (_Bool)0;
          } else {
            goto _L;
          }
        } else {
          _L: 
          {
          tmp___5 = setlocale(category, "POSIX");
          p = (char const   *)tmp___5;
          }
          if (p) {
            {
            tmp___6 = strcmp(p, (char const   *)locale);
            }
            if (tmp___6 == 0) {
              hard = (_Bool)0;
            }
          }
        }
        {
        setlocale(category, (char const   *)locale);
        free((void *)locale);
        }
      }
    }
  }
  return (hard);
}
}
char *( __attribute__((__warn_unused_result__)) imaxtostr)(intmax_t i , char *buf___1 ) 
{ 
  char *p ;

  {
  p = buf___1 + ((((sizeof(intmax_t ) * 8UL - 1UL) * 146UL) / 485UL + 1UL) + 1UL);
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
int rpl_isnanl(long double x ) ;
int rpl_isnanl(long double x ) 
{ 
  memory_double m1 ;
  memory_double m2 ;
  long double tmp ;
  int tmp___0 ;
  void *__cil_tmp8 ;
  void *__cil_tmp9 ;

  {
  if (x == x) {
    {
    memset((void *)(& m1.value), 0, (size_t )10);
    memset((void *)(& m2.value), 0, (size_t )10);
    m1.value = x;
    }
    if (x) {
      tmp = 0.0L;
    } else {
      tmp = - 0.0L;
    }
    {
    m2.value = x + tmp;
    tmp___0 = memcmp((void const   *)(& m1.value), (void const   *)(& m2.value), (size_t )10);
    }
    if (tmp___0 != 0) {
      return (1);
    }
    return (0);
  } else {
    return (1);
  }
}
}
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) nl_langinfo)(nl_item __item ) ;
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
int printf_fetchargs(va_list args , arguments *a ) ;
static wchar_t const   wide_null_string[7]  = {      (wchar_t const   )'(',      (wchar_t const   )'N',      (wchar_t const   )'U',      (wchar_t const   )'L', 
        (wchar_t const   )'L',      (wchar_t const   )')',      (wchar_t const   )0};
int printf_fetchargs(va_list args , arguments *a ) 
{ 
  size_t i ;
  argument *ap ;
  signed char tmp ;
  unsigned char tmp___0 ;
  short tmp___1 ;
  unsigned short tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  long tmp___5 ;
  unsigned long tmp___6 ;
  long long tmp___7 ;
  unsigned long long tmp___8 ;
  double tmp___9 ;
  long double tmp___10 ;
  int tmp___11 ;
  int tmp___13 ;
  wint_t tmp___15 ;
  char const   *tmp___16 ;
  wchar_t const   *tmp___17 ;
  void *tmp___18 ;
  signed char *tmp___19 ;
  short *tmp___20 ;
  int *tmp___21 ;
  long *tmp___22 ;
  long long *tmp___23 ;
  char *__cil_tmp29 ;

  {
  i = (size_t )0;
  ap = a->arg + 0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (i < a->count)) {
      goto while_break;
    }
    if ((unsigned int )ap->type == 1U) {
      goto case_1;
    }
    if ((unsigned int )ap->type == 2U) {
      goto case_2;
    }
    if ((unsigned int )ap->type == 3U) {
      goto case_3;
    }
    if ((unsigned int )ap->type == 4U) {
      goto case_4;
    }
    if ((unsigned int )ap->type == 5U) {
      goto case_5;
    }
    if ((unsigned int )ap->type == 6U) {
      goto case_6;
    }
    if ((unsigned int )ap->type == 7U) {
      goto case_7;
    }
    if ((unsigned int )ap->type == 8U) {
      goto case_8;
    }
    if ((unsigned int )ap->type == 9U) {
      goto case_9;
    }
    if ((unsigned int )ap->type == 10U) {
      goto case_10;
    }
    if ((unsigned int )ap->type == 11U) {
      goto case_11;
    }
    if ((unsigned int )ap->type == 12U) {
      goto case_12;
    }
    if ((unsigned int )ap->type == 13U) {
      goto case_13;
    }
    if ((unsigned int )ap->type == 14U) {
      goto case_14;
    }
    if ((unsigned int )ap->type == 15U) {
      goto case_15;
    }
    if ((unsigned int )ap->type == 16U) {
      goto case_16;
    }
    if ((unsigned int )ap->type == 17U) {
      goto case_17;
    }
    if ((unsigned int )ap->type == 18U) {
      goto case_18;
    }
    if ((unsigned int )ap->type == 19U) {
      goto case_19;
    }
    if ((unsigned int )ap->type == 20U) {
      goto case_20;
    }
    if ((unsigned int )ap->type == 21U) {
      goto case_21;
    }
    if ((unsigned int )ap->type == 22U) {
      goto case_22;
    }
    goto switch_default;
    case_1: 
    {
    tmp = __builtin_va_arg(args, int );
    ap->a.a_schar = tmp;
    }
    goto switch_break;
    case_2: 
    {
    tmp___0 = __builtin_va_arg(args, int );
    ap->a.a_uchar = tmp___0;
    }
    goto switch_break;
    case_3: 
    {
    tmp___1 = __builtin_va_arg(args, int );
    ap->a.a_short = tmp___1;
    }
    goto switch_break;
    case_4: 
    {
    tmp___2 = __builtin_va_arg(args, int );
    ap->a.a_ushort = tmp___2;
    }
    goto switch_break;
    case_5: 
    {
    tmp___3 = __builtin_va_arg(args, int );
    ap->a.a_int = tmp___3;
    }
    goto switch_break;
    case_6: 
    {
    tmp___4 = __builtin_va_arg(args, unsigned int );
    ap->a.a_uint = tmp___4;
    }
    goto switch_break;
    case_7: 
    {
    tmp___5 = __builtin_va_arg(args, long );
    ap->a.a_longint = tmp___5;
    }
    goto switch_break;
    case_8: 
    {
    tmp___6 = __builtin_va_arg(args, unsigned long );
    ap->a.a_ulongint = tmp___6;
    }
    goto switch_break;
    case_9: 
    {
    tmp___7 = __builtin_va_arg(args, long long );
    ap->a.a_longlongint = tmp___7;
    }
    goto switch_break;
    case_10: 
    {
    tmp___8 = __builtin_va_arg(args, unsigned long long );
    ap->a.a_ulonglongint = tmp___8;
    }
    goto switch_break;
    case_11: 
    {
    tmp___9 = __builtin_va_arg(args, double );
    ap->a.a_double = tmp___9;
    }
    goto switch_break;
    case_12: 
    {
    tmp___10 = __builtin_va_arg(args, long double );
    ap->a.a_longdouble = tmp___10;
    }
    goto switch_break;
    case_13: 
    {
    tmp___11 = __builtin_va_arg(args, int );
    ap->a.a_char = tmp___11;
    }
    goto switch_break;
    case_14: 
    if (sizeof(wint_t ) < sizeof(int )) {
      {
      tmp___13 = __builtin_va_arg(args, int );
      ap->a.a_wide_char = (wint_t )tmp___13;
      }
    } else {
      {
      tmp___15 = __builtin_va_arg(args, wint_t );
      ap->a.a_wide_char = tmp___15;
      }
    }
    goto switch_break;
    case_15: 
    {
    tmp___16 = __builtin_va_arg(args, char const   *);
    ap->a.a_string = tmp___16;
    }
    if ((unsigned long )ap->a.a_string == (unsigned long )((void *)0)) {
      ap->a.a_string = "(NULL)";
    }
    goto switch_break;
    case_16: 
    {
    tmp___17 = __builtin_va_arg(args, wchar_t const   *);
    ap->a.a_wide_string = tmp___17;
    }
    if ((unsigned long )ap->a.a_wide_string == (unsigned long )((void *)0)) {
      ap->a.a_wide_string = wide_null_string;
    }
    goto switch_break;
    case_17: 
    {
    tmp___18 = __builtin_va_arg(args, void *);
    ap->a.a_pointer = tmp___18;
    }
    goto switch_break;
    case_18: 
    {
    tmp___19 = __builtin_va_arg(args, signed char *);
    ap->a.a_count_schar_pointer = tmp___19;
    }
    goto switch_break;
    case_19: 
    {
    tmp___20 = __builtin_va_arg(args, short *);
    ap->a.a_count_short_pointer = tmp___20;
    }
    goto switch_break;
    case_20: 
    {
    tmp___21 = __builtin_va_arg(args, int *);
    ap->a.a_count_int_pointer = tmp___21;
    }
    goto switch_break;
    case_21: 
    {
    tmp___22 = __builtin_va_arg(args, long *);
    ap->a.a_count_longint_pointer = tmp___22;
    }
    goto switch_break;
    case_22: 
    {
    tmp___23 = __builtin_va_arg(args, long long *);
    ap->a.a_count_longlongint_pointer = tmp___23;
    }
    goto switch_break;
    switch_default: 
    return (-1);
    switch_break: 
    i ++;
    ap ++;
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (0);
}
}
int printf_parse(char const   *format , char_directives *d , arguments *a ) ;
__inline static size_t __attribute__((__pure__))  xsum(size_t size1 , size_t size2 ) 
{ 
  size_t sum ;
  size_t tmp ;

  {
  sum = size1 + size2;
  if (sum >= size1) {
    tmp = sum;
  } else {
    tmp = 0xffffffffffffffffUL;
  }
  return ((size_t __attribute__((__pure__))  )tmp);
}
}
int printf_parse(char const   *format , char_directives *d , arguments *a ) 
{ 
  char const   *cp ;
  size_t arg_posn ;
  size_t d_allocated ;
  size_t a_allocated ;
  size_t max_width_length ;
  size_t max_precision_length ;
  void *tmp ;
  char c ;
  char const   *tmp___0 ;
  size_t arg_index ;
  char_directive *dp ;
  char const   *np ;
  size_t n ;
  size_t tmp___1 ;
  size_t __attribute__((__pure__))  tmp___2 ;
  char const   *np___0 ;
  size_t n___0 ;
  size_t tmp___3 ;
  size_t __attribute__((__pure__))  tmp___4 ;
  size_t tmp___5 ;
  size_t n___1 ;
  size_t memory_size ;
  argument *memory ;
  size_t __attribute__((__pure__))  tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  size_t tmp___10 ;
  size_t width_length ;
  char const   *np___1 ;
  size_t n___2 ;
  size_t tmp___11 ;
  size_t __attribute__((__pure__))  tmp___12 ;
  size_t tmp___13 ;
  size_t n___3 ;
  size_t memory_size___0 ;
  argument *memory___0 ;
  size_t __attribute__((__pure__))  tmp___14 ;
  void *tmp___15 ;
  void *tmp___16 ;
  void *tmp___17 ;
  size_t tmp___18 ;
  size_t precision_length ;
  arg_type type ;
  int flags ;
  char const   *tmp___19 ;
  size_t tmp___20 ;
  size_t n___4 ;
  size_t memory_size___1 ;
  argument *memory___1 ;
  size_t __attribute__((__pure__))  tmp___21 ;
  void *tmp___22 ;
  void *tmp___23 ;
  void *tmp___24 ;
  size_t tmp___25 ;
  size_t memory_size___2 ;
  char_directive *memory___2 ;
  void *tmp___26 ;
  int *tmp___27 ;
  int *tmp___28 ;
  int __cil_tmp65 ;

  {
  {
  cp = format;
  arg_posn = (size_t )0;
  max_width_length = (size_t )0;
  max_precision_length = (size_t )0;
  d->count = (size_t )0;
  d_allocated = (size_t )1;
  tmp = malloc(d_allocated * sizeof(char_directive ));
  d->dir = (char_directive *)tmp;
  }
  if ((unsigned long )d->dir == (unsigned long )((void *)0)) {
    goto out_of_memory_1;
  }
  a->count = (size_t )0;
  a_allocated = (size_t )0;
  a->arg = (argument *)((void *)0);
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! ((int const   )*cp != 0)) {
      goto while_break;
    }
    tmp___0 = cp;
    cp ++;
    c = (char )*tmp___0;
    if ((int )c == 37) {
      arg_index = ~ ((size_t )0);
      dp = d->dir + d->count;
      dp->dir_start = cp - 1;
      dp->flags = 0;
      dp->width_start = (char const   *)((void *)0);
      dp->width_end = (char const   *)((void *)0);
      dp->width_arg_index = ~ ((size_t )0);
      dp->precision_start = (char const   *)((void *)0);
      dp->precision_end = (char const   *)((void *)0);
      dp->precision_arg_index = ~ ((size_t )0);
      dp->arg_index = ~ ((size_t )0);
      if ((int const   )*cp >= 48) {
        if ((int const   )*cp <= 57) {
          np = cp;
          {
          while (1) {
            while_continue___0: /* CIL Label */ ;

            if ((int const   )*np >= 48) {
              if (! ((int const   )*np <= 57)) {
                goto while_break___0;
              }
            } else {
              goto while_break___0;
            }
            np ++;
          }
          while_break___14: /* CIL Label */ ;
          }
          while_break___0: ;
          if ((int const   )*np == 36) {
            n = (size_t )0;
            np = cp;
            {
            while (1) {
              while_continue___1: /* CIL Label */ ;

              if ((int const   )*np >= 48) {
                if (! ((int const   )*np <= 57)) {
                  goto while_break___1;
                }
              } else {
                goto while_break___1;
              }
              if (n <= 1844674407370955161UL) {
                tmp___1 = n * 10UL;
              } else {
                tmp___1 = 0xffffffffffffffffUL;
              }
              {
              tmp___2 = xsum(tmp___1, (size_t )((int const   )*np - 48));
              n = (size_t )tmp___2;
              np ++;
              }
            }
            while_break___15: /* CIL Label */ ;
            }
            while_break___1: ;
            if (n == 0UL) {
              goto error;
            }
            if (n == 0xffffffffffffffffUL) {
              goto error;
            }
            arg_index = n - 1UL;
            cp = np + 1;
          }
        }
      }
      {
      while (1) {
        while_continue___2: /* CIL Label */ ;

        if ((int const   )*cp == 39) {
          dp->flags |= 1;
          cp ++;
        } else
        if ((int const   )*cp == 45) {
          dp->flags |= 2;
          cp ++;
        } else
        if ((int const   )*cp == 43) {
          dp->flags |= 4;
          cp ++;
        } else
        if ((int const   )*cp == 32) {
          dp->flags |= 8;
          cp ++;
        } else
        if ((int const   )*cp == 35) {
          dp->flags |= 16;
          cp ++;
        } else
        if ((int const   )*cp == 48) {
          dp->flags |= 32;
          cp ++;
        } else {
          goto while_break___2;
        }
      }
      while_break___16: /* CIL Label */ ;
      }
      while_break___2: ;
      if ((int const   )*cp == 42) {
        dp->width_start = cp;
        cp ++;
        dp->width_end = cp;
        if (max_width_length < 1UL) {
          max_width_length = (size_t )1;
        }
        if ((int const   )*cp >= 48) {
          if ((int const   )*cp <= 57) {
            np___0 = cp;
            {
            while (1) {
              while_continue___3: /* CIL Label */ ;

              if ((int const   )*np___0 >= 48) {
                if (! ((int const   )*np___0 <= 57)) {
                  goto while_break___3;
                }
              } else {
                goto while_break___3;
              }
              np___0 ++;
            }
            while_break___17: /* CIL Label */ ;
            }
            while_break___3: ;
            if ((int const   )*np___0 == 36) {
              n___0 = (size_t )0;
              np___0 = cp;
              {
              while (1) {
                while_continue___4: /* CIL Label */ ;

                if ((int const   )*np___0 >= 48) {
                  if (! ((int const   )*np___0 <= 57)) {
                    goto while_break___4;
                  }
                } else {
                  goto while_break___4;
                }
                if (n___0 <= 1844674407370955161UL) {
                  tmp___3 = n___0 * 10UL;
                } else {
                  tmp___3 = 0xffffffffffffffffUL;
                }
                {
                tmp___4 = xsum(tmp___3, (size_t )((int const   )*np___0 - 48));
                n___0 = (size_t )tmp___4;
                np___0 ++;
                }
              }
              while_break___18: /* CIL Label */ ;
              }
              while_break___4: ;
              if (n___0 == 0UL) {
                goto error;
              }
              if (n___0 == 0xffffffffffffffffUL) {
                goto error;
              }
              dp->width_arg_index = n___0 - 1UL;
              cp = np___0 + 1;
            }
          }
        }
        if (dp->width_arg_index == 0xffffffffffffffffUL) {
          tmp___5 = arg_posn;
          arg_posn ++;
          dp->width_arg_index = tmp___5;
          if (dp->width_arg_index == 0xffffffffffffffffUL) {
            goto error;
          }
        }
        n___1 = dp->width_arg_index;
        if (n___1 >= a_allocated) {
          if (a_allocated <= 9223372036854775807UL) {
            a_allocated *= 2UL;
          } else {
            a_allocated = 0xffffffffffffffffUL;
          }
          if (a_allocated <= n___1) {
            {
            tmp___6 = xsum(n___1, (size_t )1);
            a_allocated = (size_t )tmp___6;
            }
          }
          if (a_allocated <= 0xffffffffffffffffUL / sizeof(argument )) {
            memory_size = a_allocated * sizeof(argument );
          } else {
            memory_size = 0xffffffffffffffffUL;
          }
          if (memory_size == 0xffffffffffffffffUL) {
            goto out_of_memory;
          }
          if (a->arg) {
            {
            tmp___7 = realloc((void *)a->arg, memory_size);
            tmp___9 = tmp___7;
            }
          } else {
            {
            tmp___8 = malloc(memory_size);
            tmp___9 = tmp___8;
            }
          }
          memory = (argument *)tmp___9;
          if ((unsigned long )memory == (unsigned long )((void *)0)) {
            goto out_of_memory;
          }
          a->arg = memory;
        }
        {
        while (1) {
          while_continue___5: /* CIL Label */ ;

          if (! (a->count <= n___1)) {
            goto while_break___5;
          }
          tmp___10 = a->count;
          (a->count) ++;
          (a->arg + tmp___10)->type = (arg_type )0;
        }
        while_break___19: /* CIL Label */ ;
        }
        while_break___5: ;
        if ((unsigned int )(a->arg + n___1)->type == 0U) {
          (a->arg + n___1)->type = (arg_type )5;
        } else
        if ((unsigned int )(a->arg + n___1)->type != 5U) {
          goto error;
        }
      } else
      if ((int const   )*cp >= 48) {
        if ((int const   )*cp <= 57) {
          dp->width_start = cp;
          {
          while (1) {
            while_continue___6: /* CIL Label */ ;

            if ((int const   )*cp >= 48) {
              if (! ((int const   )*cp <= 57)) {
                goto while_break___6;
              }
            } else {
              goto while_break___6;
            }
            cp ++;
          }
          while_break___20: /* CIL Label */ ;
          }
          while_break___6: 
          dp->width_end = cp;
          width_length = (size_t )(dp->width_end - dp->width_start);
          if (max_width_length < width_length) {
            max_width_length = width_length;
          }
        }
      }
      if ((int const   )*cp == 46) {
        cp ++;
        if ((int const   )*cp == 42) {
          dp->precision_start = cp - 1;
          cp ++;
          dp->precision_end = cp;
          if (max_precision_length < 2UL) {
            max_precision_length = (size_t )2;
          }
          if ((int const   )*cp >= 48) {
            if ((int const   )*cp <= 57) {
              np___1 = cp;
              {
              while (1) {
                while_continue___7: /* CIL Label */ ;

                if ((int const   )*np___1 >= 48) {
                  if (! ((int const   )*np___1 <= 57)) {
                    goto while_break___7;
                  }
                } else {
                  goto while_break___7;
                }
                np___1 ++;
              }
              while_break___21: /* CIL Label */ ;
              }
              while_break___7: ;
              if ((int const   )*np___1 == 36) {
                n___2 = (size_t )0;
                np___1 = cp;
                {
                while (1) {
                  while_continue___8: /* CIL Label */ ;

                  if ((int const   )*np___1 >= 48) {
                    if (! ((int const   )*np___1 <= 57)) {
                      goto while_break___8;
                    }
                  } else {
                    goto while_break___8;
                  }
                  if (n___2 <= 1844674407370955161UL) {
                    tmp___11 = n___2 * 10UL;
                  } else {
                    tmp___11 = 0xffffffffffffffffUL;
                  }
                  {
                  tmp___12 = xsum(tmp___11, (size_t )((int const   )*np___1 - 48));
                  n___2 = (size_t )tmp___12;
                  np___1 ++;
                  }
                }
                while_break___22: /* CIL Label */ ;
                }
                while_break___8: ;
                if (n___2 == 0UL) {
                  goto error;
                }
                if (n___2 == 0xffffffffffffffffUL) {
                  goto error;
                }
                dp->precision_arg_index = n___2 - 1UL;
                cp = np___1 + 1;
              }
            }
          }
          if (dp->precision_arg_index == 0xffffffffffffffffUL) {
            tmp___13 = arg_posn;
            arg_posn ++;
            dp->precision_arg_index = tmp___13;
            if (dp->precision_arg_index == 0xffffffffffffffffUL) {
              goto error;
            }
          }
          n___3 = dp->precision_arg_index;
          if (n___3 >= a_allocated) {
            if (a_allocated <= 9223372036854775807UL) {
              a_allocated *= 2UL;
            } else {
              a_allocated = 0xffffffffffffffffUL;
            }
            if (a_allocated <= n___3) {
              {
              tmp___14 = xsum(n___3, (size_t )1);
              a_allocated = (size_t )tmp___14;
              }
            }
            if (a_allocated <= 0xffffffffffffffffUL / sizeof(argument )) {
              memory_size___0 = a_allocated * sizeof(argument );
            } else {
              memory_size___0 = 0xffffffffffffffffUL;
            }
            if (memory_size___0 == 0xffffffffffffffffUL) {
              goto out_of_memory;
            }
            if (a->arg) {
              {
              tmp___15 = realloc((void *)a->arg, memory_size___0);
              tmp___17 = tmp___15;
              }
            } else {
              {
              tmp___16 = malloc(memory_size___0);
              tmp___17 = tmp___16;
              }
            }
            memory___0 = (argument *)tmp___17;
            if ((unsigned long )memory___0 == (unsigned long )((void *)0)) {
              goto out_of_memory;
            }
            a->arg = memory___0;
          }
          {
          while (1) {
            while_continue___9: /* CIL Label */ ;

            if (! (a->count <= n___3)) {
              goto while_break___9;
            }
            tmp___18 = a->count;
            (a->count) ++;
            (a->arg + tmp___18)->type = (arg_type )0;
          }
          while_break___23: /* CIL Label */ ;
          }
          while_break___9: ;
          if ((unsigned int )(a->arg + n___3)->type == 0U) {
            (a->arg + n___3)->type = (arg_type )5;
          } else
          if ((unsigned int )(a->arg + n___3)->type != 5U) {
            goto error;
          }
        } else {
          dp->precision_start = cp - 1;
          {
          while (1) {
            while_continue___10: /* CIL Label */ ;

            if ((int const   )*cp >= 48) {
              if (! ((int const   )*cp <= 57)) {
                goto while_break___10;
              }
            } else {
              goto while_break___10;
            }
            cp ++;
          }
          while_break___24: /* CIL Label */ ;
          }
          while_break___10: 
          dp->precision_end = cp;
          precision_length = (size_t )(dp->precision_end - dp->precision_start);
          if (max_precision_length < precision_length) {
            max_precision_length = precision_length;
          }
        }
      }
      flags = 0;
      {
      while (1) {
        while_continue___11: /* CIL Label */ ;

        if ((int const   )*cp == 104) {
          flags |= 1 << (flags & 1);
          cp ++;
        } else
        if ((int const   )*cp == 76) {
          flags |= 4;
          cp ++;
        } else
        if ((int const   )*cp == 108) {
          flags += 8;
          cp ++;
        } else
        if ((int const   )*cp == 106) {
          if (sizeof(intmax_t ) > sizeof(long )) {
            flags += 16;
          } else
          if (sizeof(intmax_t ) > sizeof(int )) {
            flags += 8;
          }
          cp ++;
        } else
        if ((int const   )*cp == 122) {
          goto _L;
        } else
        if ((int const   )*cp == 90) {
          _L: 
          if (sizeof(size_t ) > sizeof(long )) {
            flags += 16;
          } else
          if (sizeof(size_t ) > sizeof(int )) {
            flags += 8;
          }
          cp ++;
        } else
        if ((int const   )*cp == 116) {
          if (sizeof(ptrdiff_t ) > sizeof(long )) {
            flags += 16;
          } else
          if (sizeof(ptrdiff_t ) > sizeof(int )) {
            flags += 8;
          }
          cp ++;
        } else {
          goto while_break___11;
        }
      }
      while_break___25: /* CIL Label */ ;
      }
      while_break___11: 
      tmp___19 = cp;
      cp ++;
      c = (char )*tmp___19;
      if ((int )c == 100) {
        goto case_100;
      }
      if ((int )c == 105) {
        goto case_100;
      }
      if ((int )c == 111) {
        goto case_111;
      }
      if ((int )c == 117) {
        goto case_111;
      }
      if ((int )c == 120) {
        goto case_111;
      }
      if ((int )c == 88) {
        goto case_111;
      }
      if ((int )c == 102) {
        goto case_102;
      }
      if ((int )c == 70) {
        goto case_102;
      }
      if ((int )c == 101) {
        goto case_102;
      }
      if ((int )c == 69) {
        goto case_102;
      }
      if ((int )c == 103) {
        goto case_102;
      }
      if ((int )c == 71) {
        goto case_102;
      }
      if ((int )c == 97) {
        goto case_102;
      }
      if ((int )c == 65) {
        goto case_102;
      }
      if ((int )c == 99) {
        goto case_99;
      }
      if ((int )c == 67) {
        goto case_67;
      }
      if ((int )c == 115) {
        goto case_115;
      }
      if ((int )c == 83) {
        goto case_83;
      }
      if ((int )c == 112) {
        goto case_112;
      }
      if ((int )c == 110) {
        goto case_110;
      }
      if ((int )c == 37) {
        goto case_37;
      }
      goto switch_default;
      case_100: 
      if (flags >= 16) {
        type = (arg_type )9;
      } else
      if (flags & 4) {
        type = (arg_type )9;
      } else
      if (flags >= 8) {
        type = (arg_type )7;
      } else
      if (flags & 2) {
        type = (arg_type )1;
      } else
      if (flags & 1) {
        type = (arg_type )3;
      } else {
        type = (arg_type )5;
      }
      goto switch_break;
      case_111: 
      if (flags >= 16) {
        type = (arg_type )10;
      } else
      if (flags & 4) {
        type = (arg_type )10;
      } else
      if (flags >= 8) {
        type = (arg_type )8;
      } else
      if (flags & 2) {
        type = (arg_type )2;
      } else
      if (flags & 1) {
        type = (arg_type )4;
      } else {
        type = (arg_type )6;
      }
      goto switch_break;
      case_102: 
      if (flags >= 16) {
        type = (arg_type )12;
      } else
      if (flags & 4) {
        type = (arg_type )12;
      } else {
        type = (arg_type )11;
      }
      goto switch_break;
      case_99: 
      if (flags >= 8) {
        type = (arg_type )14;
      } else {
        type = (arg_type )13;
      }
      goto switch_break;
      case_67: 
      type = (arg_type )14;
      c = (char )'c';
      goto switch_break;
      case_115: 
      if (flags >= 8) {
        type = (arg_type )16;
      } else {
        type = (arg_type )15;
      }
      goto switch_break;
      case_83: 
      type = (arg_type )16;
      c = (char )'s';
      goto switch_break;
      case_112: 
      type = (arg_type )17;
      goto switch_break;
      case_110: 
      if (flags >= 16) {
        type = (arg_type )22;
      } else
      if (flags & 4) {
        type = (arg_type )22;
      } else
      if (flags >= 8) {
        type = (arg_type )21;
      } else
      if (flags & 2) {
        type = (arg_type )18;
      } else
      if (flags & 1) {
        type = (arg_type )19;
      } else {
        type = (arg_type )20;
      }
      goto switch_break;
      case_37: 
      type = (arg_type )0;
      goto switch_break;
      switch_default: 
      goto error;
      switch_break: ;
      if ((unsigned int )type != 0U) {
        dp->arg_index = arg_index;
        if (dp->arg_index == 0xffffffffffffffffUL) {
          tmp___20 = arg_posn;
          arg_posn ++;
          dp->arg_index = tmp___20;
          if (dp->arg_index == 0xffffffffffffffffUL) {
            goto error;
          }
        }
        n___4 = dp->arg_index;
        if (n___4 >= a_allocated) {
          if (a_allocated <= 9223372036854775807UL) {
            a_allocated *= 2UL;
          } else {
            a_allocated = 0xffffffffffffffffUL;
          }
          if (a_allocated <= n___4) {
            {
            tmp___21 = xsum(n___4, (size_t )1);
            a_allocated = (size_t )tmp___21;
            }
          }
          if (a_allocated <= 0xffffffffffffffffUL / sizeof(argument )) {
            memory_size___1 = a_allocated * sizeof(argument );
          } else {
            memory_size___1 = 0xffffffffffffffffUL;
          }
          if (memory_size___1 == 0xffffffffffffffffUL) {
            goto out_of_memory;
          }
          if (a->arg) {
            {
            tmp___22 = realloc((void *)a->arg, memory_size___1);
            tmp___24 = tmp___22;
            }
          } else {
            {
            tmp___23 = malloc(memory_size___1);
            tmp___24 = tmp___23;
            }
          }
          memory___1 = (argument *)tmp___24;
          if ((unsigned long )memory___1 == (unsigned long )((void *)0)) {
            goto out_of_memory;
          }
          a->arg = memory___1;
        }
        {
        while (1) {
          while_continue___12: /* CIL Label */ ;

          if (! (a->count <= n___4)) {
            goto while_break___12;
          }
          tmp___25 = a->count;
          (a->count) ++;
          (a->arg + tmp___25)->type = (arg_type )0;
        }
        while_break___26: /* CIL Label */ ;
        }
        while_break___12: ;
        if ((unsigned int )(a->arg + n___4)->type == 0U) {
          (a->arg + n___4)->type = type;
        } else
        if ((unsigned int )(a->arg + n___4)->type != (unsigned int )type) {
          goto error;
        }
      }
      dp->conversion = c;
      dp->dir_end = cp;
      (d->count) ++;
      if (d->count >= d_allocated) {
        if (d_allocated <= 9223372036854775807UL) {
          d_allocated *= 2UL;
        } else {
          d_allocated = 0xffffffffffffffffUL;
        }
        if (d_allocated <= 0xffffffffffffffffUL / sizeof(char_directive )) {
          memory_size___2 = d_allocated * sizeof(char_directive );
        } else {
          memory_size___2 = 0xffffffffffffffffUL;
        }
        if (memory_size___2 == 0xffffffffffffffffUL) {
          goto out_of_memory;
        }
        {
        tmp___26 = realloc((void *)d->dir, memory_size___2);
        memory___2 = (char_directive *)tmp___26;
        }
        if ((unsigned long )memory___2 == (unsigned long )((void *)0)) {
          goto out_of_memory;
        }
        d->dir = memory___2;
      }
    }
  }
  while_break___13: /* CIL Label */ ;
  }
  while_break: 
  (d->dir + d->count)->dir_start = cp;
  d->max_width_length = max_width_length;
  d->max_precision_length = max_precision_length;
  return (0);
  error: 
  if (a->arg) {
    {
    free((void *)a->arg);
    }
  }
  if (d->dir) {
    {
    free((void *)d->dir);
    }
  }
  {
  tmp___27 = __errno_location();
  *tmp___27 = 22;
  }
  return (-1);
  out_of_memory: 
  if (a->arg) {
    {
    free((void *)a->arg);
    }
  }
  if (d->dir) {
    {
    free((void *)d->dir);
    }
  }
  out_of_memory_1: 
  {
  tmp___28 = __errno_location();
  *tmp___28 = 12;
  }
  return (-1);
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
char *extract_trimmed_name(STRUCT_UTMP const   *ut ) 
{ 
  char *p ;
  char *trimmed_name ;
  void *tmp ;
  size_t tmp___0 ;

  {
  {
  tmp = xmalloc(sizeof(ut->ut_user) + 1UL);
  trimmed_name = (char *)tmp;
  strncpy((char */* __restrict  */)trimmed_name, (char const   */* __restrict  */)((char const   *)(ut->ut_user)),
          sizeof(ut->ut_user));
  *(trimmed_name + sizeof(ut->ut_user)) = (char )'\000';
  tmp___0 = strlen((char const   *)trimmed_name);
  p = trimmed_name + tmp___0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if ((unsigned long )trimmed_name < (unsigned long )p) {
      if (! ((int )*(p + -1) == 32)) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    goto __Cont;
    __Cont: 
    p --;
    *p = (char )'\000';
  }
  while_break___0: /* CIL Label */ ;
  }
  while_break: ;
  return (trimmed_name);
}
}
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
extern  __attribute__((__nothrow__)) int snprintf(char * __restrict  __s , size_t __maxlen ,
                                                  char const   * __restrict  __format 
                                                  , ...) ;
__inline static size_t __attribute__((__pure__))  xsum4(size_t size1 , size_t size2 ,
                                                        size_t size3 , size_t size4 ) 
{ 
  size_t __attribute__((__pure__))  tmp ;
  size_t __attribute__((__pure__))  tmp___0 ;
  size_t __attribute__((__pure__))  tmp___1 ;

  {
  {
  tmp = xsum(size1, size2);
  tmp___0 = xsum((size_t )tmp, size3);
  tmp___1 = xsum((size_t )tmp___0, size4);
  }
  return (tmp___1);
}
}
__inline static size_t __attribute__((__pure__))  xmax(size_t size1 , size_t size2 ) 
{ 
  size_t tmp ;

  {
  if (size1 >= size2) {
    tmp = size1;
  } else {
    tmp = size2;
  }
  return ((size_t __attribute__((__pure__))  )tmp);
}
}
static char decimal_point_char(void) 
{ 
  char const   *point ;
  char *tmp ;
  int tmp___0 ;

  {
  {
  tmp = nl_langinfo(65536);
  point = (char const   *)tmp;
  }
  if ((int const   )*(point + 0) != 0) {
    tmp___0 = (int )((int const   )*(point + 0));
  } else {
    tmp___0 = (int )((int const   )'.');
  }
  return ((char )tmp___0);
}
}
static int is_infinite_or_zerol(long double x ) 
{ 
  int tmp ;
  int tmp___0 ;

  {
  {
  tmp = rpl_isnanl(x);
  }
  if (tmp) {
    tmp___0 = 1;
  } else
  if (x + x == x) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  return (tmp___0);
}
}
extern int __builtin_signbitl() ;
extern int __builtin_signbit() ;
char *vasnprintf(char *resultbuf , size_t *lengthp , char const   *format , va_list args ) 
{ 
  char_directives d ;
  arguments a ;
  int tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  size_t buf_neededlength ;
  char *buf___1 ;
  char *buf_malloced ;
  char const   *cp ;
  size_t i ;
  char_directive *dp ;
  char *result ;
  size_t allocated ;
  size_t length ;
  size_t __attribute__((__pure__))  tmp___2 ;
  void *tmp___3 ;
  size_t buf_memsize ;
  size_t tmp___4 ;
  void *tmp___5 ;
  size_t n ;
  size_t augmented_length ;
  size_t __attribute__((__pure__))  tmp___6 ;
  size_t memory_size ;
  char *memory ;
  size_t tmp___7 ;
  void *tmp___8 ;
  void *tmp___9 ;
  size_t tmp___10 ;
  char const   *tmp___11 ;
  size_t augmented_length___0 ;
  size_t __attribute__((__pure__))  tmp___12 ;
  size_t memory_size___0 ;
  char *memory___0 ;
  size_t tmp___13 ;
  void *tmp___14 ;
  void *tmp___15 ;
  int flags ;
  int has_width ;
  size_t width ;
  int has_precision ;
  size_t precision ;
  size_t tmp_length ;
  char tmpbuf[700] ;
  char *tmp___16 ;
  char *pad_ptr ;
  char *p ;
  int arg ;
  char const   *digitp ;
  char const   *tmp___17 ;
  size_t tmp___18 ;
  size_t __attribute__((__pure__))  tmp___19 ;
  int arg___0 ;
  char const   *digitp___0 ;
  char const   *tmp___20 ;
  size_t tmp___21 ;
  size_t __attribute__((__pure__))  tmp___22 ;
  size_t __attribute__((__pure__))  tmp___23 ;
  size_t __attribute__((__pure__))  tmp___24 ;
  size_t tmp_memsize ;
  size_t tmp___25 ;
  void *tmp___26 ;
  long double arg___1 ;
  char *tmp___27 ;
  char *tmp___28 ;
  char *tmp___29 ;
  char *tmp___30 ;
  char *tmp___31 ;
  char *tmp___32 ;
  int sign ;
  fpucw_t oldcw ;
  fpucw_t _cw ;
  fpucw_t _ncw ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  char *tmp___38 ;
  char *tmp___39 ;
  char *tmp___40 ;
  char *tmp___41 ;
  char *tmp___42 ;
  char *tmp___43 ;
  char *tmp___44 ;
  char *tmp___45 ;
  char *tmp___46 ;
  char *tmp___47 ;
  char *tmp___48 ;
  char *tmp___49 ;
  char *tmp___50 ;
  char *tmp___51 ;
  char *tmp___52 ;
  char *tmp___53 ;
  char *tmp___54 ;
  char *tmp___55 ;
  char *tmp___56 ;
  char *tmp___57 ;
  size_t ndigits ;
  size_t tmp___58 ;
  char *tmp___59 ;
  char *tmp___60 ;
  char *tmp___61 ;
  char *tmp___62 ;
  char *tmp___63 ;
  char *tmp___64 ;
  char *tmp___65 ;
  char *tmp___66 ;
  char *tmp___67 ;
  char *tmp___68 ;
  fpucw_t _ncw___0 ;
  int tmp___69 ;
  size_t pad ;
  char *end ;
  char *tmp___70 ;
  char *q ;
  char *tmp___71 ;
  char *q___0 ;
  char *tmp___72 ;
  size_t count ;
  size_t n___0 ;
  size_t __attribute__((__pure__))  tmp___73 ;
  size_t memory_size___1 ;
  char *memory___1 ;
  size_t tmp___74 ;
  void *tmp___75 ;
  void *tmp___76 ;
  arg_type type ;
  int flags___0 ;
  char *fbp ;
  unsigned int prefix_count ;
  int prefixes[2] ;
  char *tmp___77 ;
  char *tmp___78 ;
  char *tmp___79 ;
  char *tmp___80 ;
  char *tmp___81 ;
  char *tmp___82 ;
  char *tmp___83 ;
  size_t n___1 ;
  char const   *mp ;
  char *tmp___84 ;
  char const   *tmp___85 ;
  size_t n___2 ;
  char const   *mp___0 ;
  char *tmp___86 ;
  char const   *tmp___87 ;
  char *tmp___88 ;
  char *tmp___89 ;
  char *tmp___90 ;
  unsigned int tmp___91 ;
  unsigned int tmp___92 ;
  size_t memory_size___2 ;
  char *memory___2 ;
  size_t tmp___93 ;
  size_t __attribute__((__pure__))  tmp___94 ;
  size_t __attribute__((__pure__))  tmp___95 ;
  void *tmp___96 ;
  void *tmp___97 ;
  size_t __attribute__((__pure__))  tmp___98 ;
  int count___0 ;
  int retcount ;
  size_t maxlen ;
  int arg___2 ;
  unsigned int arg___3 ;
  int arg___4 ;
  unsigned int arg___5 ;
  int arg___6 ;
  unsigned int arg___7 ;
  long arg___8 ;
  unsigned long arg___9 ;
  long long arg___10 ;
  unsigned long long arg___11 ;
  double arg___12 ;
  long double arg___13 ;
  int arg___14 ;
  wint_t arg___15 ;
  char const   *arg___16 ;
  wchar_t const   *arg___17 ;
  void *arg___18 ;
  size_t bigger_need ;
  size_t tmp___99 ;
  size_t __attribute__((__pure__))  tmp___100 ;
  size_t memory_size___3 ;
  char *memory___3 ;
  size_t tmp___101 ;
  void *tmp___102 ;
  void *tmp___103 ;
  int *tmp___104 ;
  size_t n___3 ;
  size_t tmp___105 ;
  size_t __attribute__((__pure__))  tmp___106 ;
  size_t __attribute__((__pure__))  tmp___107 ;
  size_t memory_size___4 ;
  char *memory___4 ;
  size_t tmp___108 ;
  void *tmp___109 ;
  void *tmp___110 ;
  int tmp___111 ;
  size_t memory_size___5 ;
  char *memory___5 ;
  size_t tmp___112 ;
  size_t __attribute__((__pure__))  tmp___113 ;
  size_t __attribute__((__pure__))  tmp___114 ;
  void *tmp___115 ;
  void *tmp___116 ;
  size_t __attribute__((__pure__))  tmp___117 ;
  char *memory___6 ;
  void *tmp___118 ;
  int *tmp___119 ;
  int *tmp___120 ;
  void *__cil_tmp217 ;
  void *__cil_tmp218 ;

  {
  {
  tmp = printf_parse(format, & d, & a);
  }
  if (tmp < 0) {
    return ((char *)((void *)0));
  }
  {
  tmp___1 = printf_fetchargs(args, & a);
  }
  if (tmp___1 < 0) {
    {
    free((void *)d.dir);
    }
    if (a.arg) {
      {
      free((void *)a.arg);
      }
    }
    {
    tmp___0 = __errno_location();
    *tmp___0 = 22;
    }
    return ((char *)((void *)0));
  }
  {
  tmp___2 = xsum4((size_t )7, d.max_width_length, d.max_precision_length, (size_t )6);
  buf_neededlength = (size_t )tmp___2;
  }
  if (buf_neededlength < 4000UL / sizeof(char )) {
    {
    tmp___3 = __builtin_alloca(buf_neededlength * sizeof(char ));
    buf___1 = (char *)tmp___3;
    buf_malloced = (char *)((void *)0);
    }
  } else {
    if (buf_neededlength <= 0xffffffffffffffffUL / sizeof(char )) {
      tmp___4 = buf_neededlength * sizeof(char );
    } else {
      tmp___4 = 0xffffffffffffffffUL;
    }
    buf_memsize = tmp___4;
    if (buf_memsize == 0xffffffffffffffffUL) {
      goto out_of_memory_1;
    }
    {
    tmp___5 = malloc(buf_memsize);
    buf___1 = (char *)tmp___5;
    }
    if ((unsigned long )buf___1 == (unsigned long )((void *)0)) {
      goto out_of_memory_1;
    }
    buf_malloced = buf___1;
  }
  if ((unsigned long )resultbuf != (unsigned long )((void *)0)) {
    result = resultbuf;
    allocated = *lengthp;
  } else {
    result = (char *)((void *)0);
    allocated = (size_t )0;
  }
  length = (size_t )0;
  cp = format;
  i = (size_t )0;
  dp = d.dir + 0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if ((unsigned long )cp != (unsigned long )dp->dir_start) {
      {
      n = (size_t )(dp->dir_start - cp);
      tmp___6 = xsum(length, n);
      augmented_length = (size_t )tmp___6;
      }
      if (augmented_length > allocated) {
        if (allocated > 0UL) {
          if (allocated <= 9223372036854775807UL) {
            tmp___7 = allocated * 2UL;
          } else {
            tmp___7 = 0xffffffffffffffffUL;
          }
          allocated = tmp___7;
        } else {
          allocated = (size_t )12;
        }
        if (augmented_length > allocated) {
          allocated = augmented_length;
        }
        if (allocated <= 0xffffffffffffffffUL / sizeof(char )) {
          memory_size = allocated * sizeof(char );
        } else {
          memory_size = 0xffffffffffffffffUL;
        }
        if (memory_size == 0xffffffffffffffffUL) {
          goto out_of_memory;
        }
        if ((unsigned long )result == (unsigned long )resultbuf) {
          {
          tmp___8 = malloc(memory_size);
          memory = (char *)tmp___8;
          }
        } else
        if ((unsigned long )result == (unsigned long )((void *)0)) {
          {
          tmp___8 = malloc(memory_size);
          memory = (char *)tmp___8;
          }
        } else {
          {
          tmp___9 = realloc((void *)result, memory_size);
          memory = (char *)tmp___9;
          }
        }
        if ((unsigned long )memory == (unsigned long )((void *)0)) {
          goto out_of_memory;
        }
        if ((unsigned long )result == (unsigned long )resultbuf) {
          if (length > 0UL) {
            {
            memcpy((void */* __restrict  */)((void *)memory), (void const   */* __restrict  */)((void const   *)result),
                   length);
            }
          }
        }
        result = memory;
      }
      if (sizeof(char ) == sizeof(char )) {
        {
        memcpy((void */* __restrict  */)((void *)(result + length)), (void const   */* __restrict  */)((void const   *)cp),
               n);
        length = augmented_length;
        }
      } else {
        {
        while (1) {
          while_continue___0: /* CIL Label */ ;
          tmp___10 = length;
          length ++;
          tmp___11 = cp;
          cp ++;
          *(result + tmp___10) = (char )((unsigned char )*tmp___11);
          n --;
          if (! (n > 0UL)) {
            goto while_break___0;
          }
        }
        while_break___16: /* CIL Label */ ;
        }
        while_break___0: ;
      }
    }
    if (i == d.count) {
      goto while_break;
    }
    if ((int )dp->conversion == 37) {
      if (! (dp->arg_index == 0xffffffffffffffffUL)) {
        {
        abort();
        }
      }
      {
      tmp___12 = xsum(length, (size_t )1);
      augmented_length___0 = (size_t )tmp___12;
      }
      if (augmented_length___0 > allocated) {
        if (allocated > 0UL) {
          if (allocated <= 9223372036854775807UL) {
            tmp___13 = allocated * 2UL;
          } else {
            tmp___13 = 0xffffffffffffffffUL;
          }
          allocated = tmp___13;
        } else {
          allocated = (size_t )12;
        }
        if (augmented_length___0 > allocated) {
          allocated = augmented_length___0;
        }
        if (allocated <= 0xffffffffffffffffUL / sizeof(char )) {
          memory_size___0 = allocated * sizeof(char );
        } else {
          memory_size___0 = 0xffffffffffffffffUL;
        }
        if (memory_size___0 == 0xffffffffffffffffUL) {
          goto out_of_memory;
        }
        if ((unsigned long )result == (unsigned long )resultbuf) {
          {
          tmp___14 = malloc(memory_size___0);
          memory___0 = (char *)tmp___14;
          }
        } else
        if ((unsigned long )result == (unsigned long )((void *)0)) {
          {
          tmp___14 = malloc(memory_size___0);
          memory___0 = (char *)tmp___14;
          }
        } else {
          {
          tmp___15 = realloc((void *)result, memory_size___0);
          memory___0 = (char *)tmp___15;
          }
        }
        if ((unsigned long )memory___0 == (unsigned long )((void *)0)) {
          goto out_of_memory;
        }
        if ((unsigned long )result == (unsigned long )resultbuf) {
          if (length > 0UL) {
            {
            memcpy((void */* __restrict  */)((void *)memory___0), (void const   */* __restrict  */)((void const   *)result),
                   length);
            }
          }
        }
        result = memory___0;
      }
      *(result + length) = (char )'%';
      length = augmented_length___0;
    } else {
      if (! (dp->arg_index != 0xffffffffffffffffUL)) {
        {
        abort();
        }
      }
      if ((int )dp->conversion == 110) {
        if ((unsigned int )(a.arg + dp->arg_index)->type == 18U) {
          goto case_18;
        }
        if ((unsigned int )(a.arg + dp->arg_index)->type == 19U) {
          goto case_19;
        }
        if ((unsigned int )(a.arg + dp->arg_index)->type == 20U) {
          goto case_20;
        }
        if ((unsigned int )(a.arg + dp->arg_index)->type == 21U) {
          goto case_21;
        }
        if ((unsigned int )(a.arg + dp->arg_index)->type == 22U) {
          goto case_22;
        }
        goto switch_default;
        case_18: 
        *((a.arg + dp->arg_index)->a.a_count_schar_pointer) = (signed char )length;
        goto switch_break;
        case_19: 
        *((a.arg + dp->arg_index)->a.a_count_short_pointer) = (short )length;
        goto switch_break;
        case_20: 
        *((a.arg + dp->arg_index)->a.a_count_int_pointer) = (int )length;
        goto switch_break;
        case_21: 
        *((a.arg + dp->arg_index)->a.a_count_longint_pointer) = (long )length;
        goto switch_break;
        case_22: 
        *((a.arg + dp->arg_index)->a.a_count_longlongint_pointer) = (long long )length;
        goto switch_break;
        switch_default: 
        {
        abort();
        }
        switch_break: ;
      } else
      if ((int )dp->conversion == 102) {
        goto _L___11;
      } else
      if ((int )dp->conversion == 70) {
        goto _L___11;
      } else
      if ((int )dp->conversion == 101) {
        goto _L___11;
      } else
      if ((int )dp->conversion == 69) {
        goto _L___11;
      } else
      if ((int )dp->conversion == 103) {
        goto _L___11;
      } else
      if ((int )dp->conversion == 71) {
        goto _L___11;
      } else
      if ((int )dp->conversion == 97) {
        goto _L___11;
      } else
      if ((int )dp->conversion == 65) {
        _L___11: 
        if ((unsigned int )(a.arg + dp->arg_index)->type == 12U) {
          {
          tmp___111 = is_infinite_or_zerol((a.arg + dp->arg_index)->a.a_longdouble);
          }
          if (tmp___111) {
            flags = dp->flags;
            has_width = 0;
            width = (size_t )0;
            if ((unsigned long )dp->width_start != (unsigned long )dp->width_end) {
              if (dp->width_arg_index != 0xffffffffffffffffUL) {
                if (! ((unsigned int )(a.arg + dp->width_arg_index)->type == 5U)) {
                  {
                  abort();
                  }
                }
                arg = (a.arg + dp->width_arg_index)->a.a_int;
                if (arg < 0) {
                  flags |= 2;
                  width = (size_t )((unsigned int )(- arg));
                } else {
                  width = (size_t )arg;
                }
              } else {
                digitp = dp->width_start;
                {
                while (1) {
                  while_continue___1: /* CIL Label */ ;
                  tmp___17 = digitp;
                  digitp ++;
                  if (width <= 1844674407370955161UL) {
                    tmp___18 = width * 10UL;
                  } else {
                    tmp___18 = 0xffffffffffffffffUL;
                  }
                  {
                  tmp___19 = xsum(tmp___18, (size_t )((int const   )*tmp___17 - 48));
                  width = (size_t )tmp___19;
                  }
                  if (! ((unsigned long )digitp != (unsigned long )dp->width_end)) {
                    goto while_break___1;
                  }
                }
                while_break___17: /* CIL Label */ ;
                }
                while_break___1: ;
              }
              has_width = 1;
            }
            has_precision = 0;
            precision = (size_t )0;
            if ((unsigned long )dp->precision_start != (unsigned long )dp->precision_end) {
              if (dp->precision_arg_index != 0xffffffffffffffffUL) {
                if (! ((unsigned int )(a.arg + dp->precision_arg_index)->type == 5U)) {
                  {
                  abort();
                  }
                }
                arg___0 = (a.arg + dp->precision_arg_index)->a.a_int;
                if (arg___0 >= 0) {
                  precision = (size_t )arg___0;
                  has_precision = 1;
                }
              } else {
                digitp___0 = dp->precision_start + 1;
                precision = (size_t )0;
                {
                while (1) {
                  while_continue___2: /* CIL Label */ ;

                  if (! ((unsigned long )digitp___0 != (unsigned long )dp->precision_end)) {
                    goto while_break___2;
                  }
                  tmp___20 = digitp___0;
                  digitp___0 ++;
                  if (precision <= 1844674407370955161UL) {
                    tmp___21 = precision * 10UL;
                  } else {
                    tmp___21 = 0xffffffffffffffffUL;
                  }
                  {
                  tmp___22 = xsum(tmp___21, (size_t )((int const   )*tmp___20 - 48));
                  precision = (size_t )tmp___22;
                  }
                }
                while_break___18: /* CIL Label */ ;
                }
                while_break___2: 
                has_precision = 1;
              }
            }
            if (! has_precision) {
              if (! ((int )dp->conversion == 97)) {
                if (! ((int )dp->conversion == 65)) {
                  precision = (size_t )6;
                }
              }
            }
            tmp_length = (size_t )0;
            if (tmp_length < precision) {
              tmp_length = precision;
            }
            {
            tmp___23 = xsum(tmp_length, (size_t )12);
            tmp_length = (size_t )tmp___23;
            }
            if (tmp_length < width) {
              tmp_length = width;
            }
            {
            tmp___24 = xsum(tmp_length, (size_t )1);
            tmp_length = (size_t )tmp___24;
            }
            if (tmp_length <= sizeof(tmpbuf) / sizeof(char )) {
              tmp___16 = tmpbuf;
            } else {
              if (tmp_length <= 0xffffffffffffffffUL / sizeof(char )) {
                tmp___25 = tmp_length * sizeof(char );
              } else {
                tmp___25 = 0xffffffffffffffffUL;
              }
              tmp_memsize = tmp___25;
              if (tmp_memsize == 0xffffffffffffffffUL) {
                goto out_of_memory;
              }
              {
              tmp___26 = malloc(tmp_memsize);
              tmp___16 = (char *)tmp___26;
              }
              if ((unsigned long )tmp___16 == (unsigned long )((void *)0)) {
                goto out_of_memory;
              }
            }
            {
            pad_ptr = (char *)((void *)0);
            p = tmp___16;
            arg___1 = (a.arg + dp->arg_index)->a.a_longdouble;
            tmp___69 = rpl_isnanl(arg___1);
            }
            if (tmp___69) {
              if ((int )dp->conversion >= 65) {
                if ((int )dp->conversion <= 90) {
                  tmp___27 = p;
                  p ++;
                  *tmp___27 = (char )'N';
                  tmp___28 = p;
                  p ++;
                  *tmp___28 = (char )'A';
                  tmp___29 = p;
                  p ++;
                  *tmp___29 = (char )'N';
                } else {
                  goto _L;
                }
              } else {
                _L: 
                tmp___30 = p;
                p ++;
                *tmp___30 = (char )'n';
                tmp___31 = p;
                p ++;
                *tmp___31 = (char )'a';
                tmp___32 = p;
                p ++;
                *tmp___32 = (char )'n';
              }
            } else {
              sign = 0;
              __asm__  volatile   ("fnstcw %0": "=m" (_cw));
              oldcw = _cw;
              _ncw = (fpucw_t )(((int )oldcw & -769) | 768);
              __asm__  volatile   ("fldcw %0": : "m" (_ncw));
              if (sizeof(arg___1) == sizeof(long double )) {
                {
                tmp___33 = __builtin_signbitl(arg___1);
                tmp___37 = tmp___33;
                }
              } else {
                if (sizeof(arg___1) == sizeof(double )) {
                  {
                  tmp___34 = __builtin_signbit(arg___1);
                  tmp___36 = tmp___34;
                  }
                } else {
                  tmp___35 = 1;
                  tmp___36 = tmp___35;
                }
                tmp___37 = tmp___36;
              }
              if (tmp___37) {
                sign = -1;
                arg___1 = - arg___1;
              }
              if (sign < 0) {
                tmp___38 = p;
                p ++;
                *tmp___38 = (char )'-';
              } else
              if (flags & 4) {
                tmp___39 = p;
                p ++;
                *tmp___39 = (char )'+';
              } else
              if (flags & 8) {
                tmp___40 = p;
                p ++;
                *tmp___40 = (char )' ';
              }
              if (arg___1 > 0.0L) {
                if (arg___1 + arg___1 == arg___1) {
                  if ((int )dp->conversion >= 65) {
                    if ((int )dp->conversion <= 90) {
                      tmp___41 = p;
                      p ++;
                      *tmp___41 = (char )'I';
                      tmp___42 = p;
                      p ++;
                      *tmp___42 = (char )'N';
                      tmp___43 = p;
                      p ++;
                      *tmp___43 = (char )'F';
                    } else {
                      goto _L___0;
                    }
                  } else {
                    _L___0: 
                    tmp___44 = p;
                    p ++;
                    *tmp___44 = (char )'i';
                    tmp___45 = p;
                    p ++;
                    *tmp___45 = (char )'n';
                    tmp___46 = p;
                    p ++;
                    *tmp___46 = (char )'f';
                  }
                } else {
                  goto _L___8;
                }
              } else {
                _L___8: 
                if (! (arg___1 == 0.0L)) {
                  {
                  abort();
                  }
                }
                pad_ptr = p;
                if ((int )dp->conversion == 102) {
                  goto _L___7;
                } else
                if ((int )dp->conversion == 70) {
                  _L___7: 
                  tmp___47 = p;
                  p ++;
                  *tmp___47 = (char )'0';
                  if (flags & 16) {
                    goto _L___1;
                  } else
                  if (precision > 0UL) {
                    _L___1: 
                    {
                    tmp___48 = p;
                    p ++;
                    *tmp___48 = decimal_point_char();
                    }
                    {
                    while (1) {
                      while_continue___3: /* CIL Label */ ;

                      if (! (precision > 0UL)) {
                        goto while_break___3;
                      }
                      tmp___49 = p;
                      p ++;
                      *tmp___49 = (char )'0';
                      precision --;
                    }
                    while_break___19: /* CIL Label */ ;
                    }
                    while_break___3: ;
                  }
                } else
                if ((int )dp->conversion == 101) {
                  goto _L___6;
                } else
                if ((int )dp->conversion == 69) {
                  _L___6: 
                  tmp___50 = p;
                  p ++;
                  *tmp___50 = (char )'0';
                  if (flags & 16) {
                    goto _L___2;
                  } else
                  if (precision > 0UL) {
                    _L___2: 
                    {
                    tmp___51 = p;
                    p ++;
                    *tmp___51 = decimal_point_char();
                    }
                    {
                    while (1) {
                      while_continue___4: /* CIL Label */ ;

                      if (! (precision > 0UL)) {
                        goto while_break___4;
                      }
                      tmp___52 = p;
                      p ++;
                      *tmp___52 = (char )'0';
                      precision --;
                    }
                    while_break___20: /* CIL Label */ ;
                    }
                    while_break___4: ;
                  }
                  tmp___53 = p;
                  p ++;
                  *tmp___53 = dp->conversion;
                  tmp___54 = p;
                  p ++;
                  *tmp___54 = (char )'+';
                  tmp___55 = p;
                  p ++;
                  *tmp___55 = (char )'0';
                  tmp___56 = p;
                  p ++;
                  *tmp___56 = (char )'0';
                } else
                if ((int )dp->conversion == 103) {
                  goto _L___5;
                } else
                if ((int )dp->conversion == 71) {
                  _L___5: 
                  tmp___57 = p;
                  p ++;
                  *tmp___57 = (char )'0';
                  if (flags & 16) {
                    if (precision > 0UL) {
                      tmp___58 = precision - 1UL;
                    } else {
                      tmp___58 = (size_t )0;
                    }
                    {
                    ndigits = tmp___58;
                    tmp___59 = p;
                    p ++;
                    *tmp___59 = decimal_point_char();
                    }
                    {
                    while (1) {
                      while_continue___5: /* CIL Label */ ;

                      if (! (ndigits > 0UL)) {
                        goto while_break___5;
                      }
                      tmp___60 = p;
                      p ++;
                      *tmp___60 = (char )'0';
                      ndigits --;
                    }
                    while_break___21: /* CIL Label */ ;
                    }
                    while_break___5: ;
                  }
                } else
                if ((int )dp->conversion == 97) {
                  goto _L___4;
                } else
                if ((int )dp->conversion == 65) {
                  _L___4: 
                  tmp___61 = p;
                  p ++;
                  *tmp___61 = (char )'0';
                  tmp___62 = p;
                  p ++;
                  *tmp___62 = (char )(((int )dp->conversion - 65) + 88);
                  pad_ptr = p;
                  tmp___63 = p;
                  p ++;
                  *tmp___63 = (char )'0';
                  if (flags & 16) {
                    goto _L___3;
                  } else
                  if (precision > 0UL) {
                    _L___3: 
                    {
                    tmp___64 = p;
                    p ++;
                    *tmp___64 = decimal_point_char();
                    }
                    {
                    while (1) {
                      while_continue___6: /* CIL Label */ ;

                      if (! (precision > 0UL)) {
                        goto while_break___6;
                      }
                      tmp___65 = p;
                      p ++;
                      *tmp___65 = (char )'0';
                      precision --;
                    }
                    while_break___22: /* CIL Label */ ;
                    }
                    while_break___6: ;
                  }
                  tmp___66 = p;
                  p ++;
                  *tmp___66 = (char )(((int )dp->conversion - 65) + 80);
                  tmp___67 = p;
                  p ++;
                  *tmp___67 = (char )'+';
                  tmp___68 = p;
                  p ++;
                  *tmp___68 = (char )'0';
                } else {
                  {
                  abort();
                  }
                }
              }
              _ncw___0 = oldcw;
              __asm__  volatile   ("fldcw %0": : "m" (_ncw___0));
            }
            if (has_width) {
              if ((size_t )(p - tmp___16) < width) {
                pad = width - (size_t )(p - tmp___16);
                end = p + pad;
                if (flags & 2) {
                  {
                  while (1) {
                    while_continue___7: /* CIL Label */ ;

                    if (! (pad > 0UL)) {
                      goto while_break___7;
                    }
                    tmp___70 = p;
                    p ++;
                    *tmp___70 = (char )' ';
                    pad --;
                  }
                  while_break___23: /* CIL Label */ ;
                  }
                  while_break___7: ;
                } else
                if (flags & 32) {
                  if ((unsigned long )pad_ptr != (unsigned long )((void *)0)) {
                    q = end;
                    {
                    while (1) {
                      while_continue___8: /* CIL Label */ ;

                      if (! ((unsigned long )p > (unsigned long )pad_ptr)) {
                        goto while_break___8;
                      }
                      q --;
                      p --;
                      *q = *p;
                    }
                    while_break___24: /* CIL Label */ ;
                    }
                    while_break___8: ;
                    {
                    while (1) {
                      while_continue___9: /* CIL Label */ ;

                      if (! (pad > 0UL)) {
                        goto while_break___9;
                      }
                      tmp___71 = p;
                      p ++;
                      *tmp___71 = (char )'0';
                      pad --;
                    }
                    while_break___25: /* CIL Label */ ;
                    }
                    while_break___9: ;
                  } else {
                    goto _L___9;
                  }
                } else {
                  _L___9: 
                  q___0 = end;
                  {
                  while (1) {
                    while_continue___10: /* CIL Label */ ;

                    if (! ((unsigned long )p > (unsigned long )tmp___16)) {
                      goto while_break___10;
                    }
                    q___0 --;
                    p --;
                    *q___0 = *p;
                  }
                  while_break___26: /* CIL Label */ ;
                  }
                  while_break___10: ;
                  {
                  while (1) {
                    while_continue___11: /* CIL Label */ ;

                    if (! (pad > 0UL)) {
                      goto while_break___11;
                    }
                    tmp___72 = p;
                    p ++;
                    *tmp___72 = (char )' ';
                    pad --;
                  }
                  while_break___27: /* CIL Label */ ;
                  }
                  while_break___11: ;
                }
                p = end;
              }
            }
            count = (size_t )(p - tmp___16);
            if (count >= tmp_length) {
              {
              abort();
              }
            }
            if (count >= allocated - length) {
              {
              tmp___73 = xsum(length, count);
              n___0 = (size_t )tmp___73;
              }
              if (n___0 > allocated) {
                if (allocated > 0UL) {
                  if (allocated <= 9223372036854775807UL) {
                    tmp___74 = allocated * 2UL;
                  } else {
                    tmp___74 = 0xffffffffffffffffUL;
                  }
                  allocated = tmp___74;
                } else {
                  allocated = (size_t )12;
                }
                if (n___0 > allocated) {
                  allocated = n___0;
                }
                if (allocated <= 0xffffffffffffffffUL / sizeof(char )) {
                  memory_size___1 = allocated * sizeof(char );
                } else {
                  memory_size___1 = 0xffffffffffffffffUL;
                }
                if (memory_size___1 == 0xffffffffffffffffUL) {
                  goto out_of_memory;
                }
                if ((unsigned long )result == (unsigned long )resultbuf) {
                  {
                  tmp___75 = malloc(memory_size___1);
                  memory___1 = (char *)tmp___75;
                  }
                } else
                if ((unsigned long )result == (unsigned long )((void *)0)) {
                  {
                  tmp___75 = malloc(memory_size___1);
                  memory___1 = (char *)tmp___75;
                  }
                } else {
                  {
                  tmp___76 = realloc((void *)result, memory_size___1);
                  memory___1 = (char *)tmp___76;
                  }
                }
                if ((unsigned long )memory___1 == (unsigned long )((void *)0)) {
                  goto out_of_memory;
                }
                if ((unsigned long )result == (unsigned long )resultbuf) {
                  if (length > 0UL) {
                    {
                    memcpy((void */* __restrict  */)((void *)memory___1), (void const   */* __restrict  */)((void const   *)result),
                           length);
                    }
                  }
                }
                result = memory___1;
              }
            }
            {
            memcpy((void */* __restrict  */)((void *)(result + length)), (void const   */* __restrict  */)((void const   *)tmp___16),
                   count * sizeof(char ));
            }
            if ((unsigned long )tmp___16 != (unsigned long )(tmpbuf)) {
              {
              free((void *)tmp___16);
              }
            }
            length += count;
          } else {
            goto _L___10;
          }
        } else {
          goto _L___10;
        }
      } else {
        _L___10: 
        type = (a.arg + dp->arg_index)->type;
        flags___0 = dp->flags;
        fbp = buf___1;
        tmp___77 = fbp;
        fbp ++;
        *tmp___77 = (char )'%';
        if (flags___0 & 1) {
          tmp___78 = fbp;
          fbp ++;
          *tmp___78 = (char )'\'';
        }
        if (flags___0 & 2) {
          tmp___79 = fbp;
          fbp ++;
          *tmp___79 = (char )'-';
        }
        if (flags___0 & 4) {
          tmp___80 = fbp;
          fbp ++;
          *tmp___80 = (char )'+';
        }
        if (flags___0 & 8) {
          tmp___81 = fbp;
          fbp ++;
          *tmp___81 = (char )' ';
        }
        if (flags___0 & 16) {
          tmp___82 = fbp;
          fbp ++;
          *tmp___82 = (char )'#';
        }
        if (flags___0 & 32) {
          tmp___83 = fbp;
          fbp ++;
          *tmp___83 = (char )'0';
        }
        if ((unsigned long )dp->width_start != (unsigned long )dp->width_end) {
          n___1 = (size_t )(dp->width_end - dp->width_start);
          if (sizeof(char ) == sizeof(char )) {
            {
            memcpy((void */* __restrict  */)((void *)fbp), (void const   */* __restrict  */)((void const   *)dp->width_start),
                   n___1 * sizeof(char ));
            fbp += n___1;
            }
          } else {
            mp = dp->width_start;
            {
            while (1) {
              while_continue___12: /* CIL Label */ ;
              tmp___84 = fbp;
              fbp ++;
              tmp___85 = mp;
              mp ++;
              *tmp___84 = (char )((unsigned char )*tmp___85);
              n___1 --;
              if (! (n___1 > 0UL)) {
                goto while_break___12;
              }
            }
            while_break___28: /* CIL Label */ ;
            }
            while_break___12: ;
          }
        }
        if ((unsigned long )dp->precision_start != (unsigned long )dp->precision_end) {
          n___2 = (size_t )(dp->precision_end - dp->precision_start);
          if (sizeof(char ) == sizeof(char )) {
            {
            memcpy((void */* __restrict  */)((void *)fbp), (void const   */* __restrict  */)((void const   *)dp->precision_start),
                   n___2 * sizeof(char ));
            fbp += n___2;
            }
          } else {
            mp___0 = dp->precision_start;
            {
            while (1) {
              while_continue___13: /* CIL Label */ ;
              tmp___86 = fbp;
              fbp ++;
              tmp___87 = mp___0;
              mp___0 ++;
              *tmp___86 = (char )((unsigned char )*tmp___87);
              n___2 --;
              if (! (n___2 > 0UL)) {
                goto while_break___13;
              }
            }
            while_break___29: /* CIL Label */ ;
            }
            while_break___13: ;
          }
        }
        if ((unsigned int )type == 9U) {
          goto case_9;
        }
        if ((unsigned int )type == 10U) {
          goto case_9;
        }
        if ((unsigned int )type == 7U) {
          goto case_7;
        }
        if ((unsigned int )type == 8U) {
          goto case_7;
        }
        if ((unsigned int )type == 14U) {
          goto case_7;
        }
        if ((unsigned int )type == 16U) {
          goto case_7;
        }
        if ((unsigned int )type == 12U) {
          goto case_12;
        }
        goto switch_default___0;
        case_9: 
        tmp___88 = fbp;
        fbp ++;
        *tmp___88 = (char )'l';
        case_7: 
        tmp___89 = fbp;
        fbp ++;
        *tmp___89 = (char )'l';
        goto switch_break___0;
        case_12: 
        tmp___90 = fbp;
        fbp ++;
        *tmp___90 = (char )'L';
        goto switch_break___0;
        switch_default___0: 
        goto switch_break___0;
        switch_break___0: 
        *fbp = dp->conversion;
        *(fbp + 1) = (char )'\000';
        prefix_count = 0U;
        if (dp->width_arg_index != 0xffffffffffffffffUL) {
          if (! ((unsigned int )(a.arg + dp->width_arg_index)->type == 5U)) {
            {
            abort();
            }
          }
          tmp___91 = prefix_count;
          prefix_count ++;
          prefixes[tmp___91] = (a.arg + dp->width_arg_index)->a.a_int;
        }
        if (dp->precision_arg_index != 0xffffffffffffffffUL) {
          if (! ((unsigned int )(a.arg + dp->precision_arg_index)->type == 5U)) {
            {
            abort();
            }
          }
          tmp___92 = prefix_count;
          prefix_count ++;
          prefixes[tmp___92] = (a.arg + dp->precision_arg_index)->a.a_int;
        }
        {
        tmp___98 = xsum(length, ((2UL + sizeof(char ) / sizeof(char )) - 1UL) / (sizeof(char ) / sizeof(char )));
        }
        if (tmp___98 > (size_t __attribute__((__pure__))  )allocated) {
          if (allocated > 0UL) {
            if (allocated <= 9223372036854775807UL) {
              tmp___93 = allocated * 2UL;
            } else {
              tmp___93 = 0xffffffffffffffffUL;
            }
            allocated = tmp___93;
          } else {
            allocated = (size_t )12;
          }
          {
          tmp___95 = xsum(length, ((2UL + sizeof(char ) / sizeof(char )) - 1UL) / (sizeof(char ) / sizeof(char )));
          }
          if (tmp___95 > (size_t __attribute__((__pure__))  )allocated) {
            {
            tmp___94 = xsum(length, ((2UL + sizeof(char ) / sizeof(char )) - 1UL) / (sizeof(char ) / sizeof(char )));
            allocated = (size_t )tmp___94;
            }
          }
          if (allocated <= 0xffffffffffffffffUL / sizeof(char )) {
            memory_size___2 = allocated * sizeof(char );
          } else {
            memory_size___2 = 0xffffffffffffffffUL;
          }
          if (memory_size___2 == 0xffffffffffffffffUL) {
            goto out_of_memory;
          }
          if ((unsigned long )result == (unsigned long )resultbuf) {
            {
            tmp___96 = malloc(memory_size___2);
            memory___2 = (char *)tmp___96;
            }
          } else
          if ((unsigned long )result == (unsigned long )((void *)0)) {
            {
            tmp___96 = malloc(memory_size___2);
            memory___2 = (char *)tmp___96;
            }
          } else {
            {
            tmp___97 = realloc((void *)result, memory_size___2);
            memory___2 = (char *)tmp___97;
            }
          }
          if ((unsigned long )memory___2 == (unsigned long )((void *)0)) {
            goto out_of_memory;
          }
          if ((unsigned long )result == (unsigned long )resultbuf) {
            if (length > 0UL) {
              {
              memcpy((void */* __restrict  */)((void *)memory___2), (void const   */* __restrict  */)((void const   *)result),
                     length);
              }
            }
          }
          result = memory___2;
        }
        *(result + length) = (char )'\000';
        {
        while (1) {
          while_continue___14: /* CIL Label */ ;
          count___0 = -1;
          retcount = 0;
          maxlen = allocated - length;
          if (maxlen > 2147483647UL / (sizeof(char ) / sizeof(char ))) {
            maxlen = 2147483647UL / (sizeof(char ) / sizeof(char ));
          }
          maxlen *= sizeof(char ) / sizeof(char );
          if ((unsigned int )type == 1U) {
            goto case_1;
          }
          if ((unsigned int )type == 2U) {
            goto case_2___0;
          }
          if ((unsigned int )type == 3U) {
            goto case_3;
          }
          if ((unsigned int )type == 4U) {
            goto case_4;
          }
          if ((unsigned int )type == 5U) {
            goto case_5;
          }
          if ((unsigned int )type == 6U) {
            goto case_6;
          }
          if ((unsigned int )type == 7U) {
            goto case_7___0;
          }
          if ((unsigned int )type == 8U) {
            goto case_8___0;
          }
          if ((unsigned int )type == 9U) {
            goto case_9___0;
          }
          if ((unsigned int )type == 10U) {
            goto case_10___0;
          }
          if ((unsigned int )type == 11U) {
            goto case_11;
          }
          if ((unsigned int )type == 12U) {
            goto case_12___0;
          }
          if ((unsigned int )type == 13U) {
            goto case_13;
          }
          if ((unsigned int )type == 14U) {
            goto case_14___0;
          }
          if ((unsigned int )type == 15U) {
            goto case_15;
          }
          if ((unsigned int )type == 16U) {
            goto case_16___0;
          }
          if ((unsigned int )type == 17U) {
            goto case_17;
          }
          goto switch_default___18;
          case_1: 
          arg___2 = (int )(a.arg + dp->arg_index)->a.a_schar;
          if (prefix_count == 0U) {
            goto case_0;
          }
          if (prefix_count == 1U) {
            goto case_1___0;
          }
          if (prefix_count == 2U) {
            goto case_2;
          }
          goto switch_default___1;
          case_0: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___2, & count___0);
          }
          goto switch_break___2;
          case_1___0: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___2, & count___0);
          }
          goto switch_break___2;
          case_2: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___2, & count___0);
          }
          goto switch_break___2;
          switch_default___1: 
          {
          abort();
          }
          switch_break___2: ;
          goto switch_break___1;
          case_2___0: 
          arg___3 = (unsigned int )(a.arg + dp->arg_index)->a.a_uchar;
          if (prefix_count == 0U) {
            goto case_0___0;
          }
          if (prefix_count == 1U) {
            goto case_1___1;
          }
          if (prefix_count == 2U) {
            goto case_2___1;
          }
          goto switch_default___2;
          case_0___0: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___3, & count___0);
          }
          goto switch_break___3;
          case_1___1: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___3, & count___0);
          }
          goto switch_break___3;
          case_2___1: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___3, & count___0);
          }
          goto switch_break___3;
          switch_default___2: 
          {
          abort();
          }
          switch_break___3: ;
          goto switch_break___1;
          case_3: 
          arg___4 = (int )(a.arg + dp->arg_index)->a.a_short;
          if (prefix_count == 0U) {
            goto case_0___1;
          }
          if (prefix_count == 1U) {
            goto case_1___2;
          }
          if (prefix_count == 2U) {
            goto case_2___2;
          }
          goto switch_default___3;
          case_0___1: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___4, & count___0);
          }
          goto switch_break___4;
          case_1___2: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___4, & count___0);
          }
          goto switch_break___4;
          case_2___2: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___4, & count___0);
          }
          goto switch_break___4;
          switch_default___3: 
          {
          abort();
          }
          switch_break___4: ;
          goto switch_break___1;
          case_4: 
          arg___5 = (unsigned int )(a.arg + dp->arg_index)->a.a_ushort;
          if (prefix_count == 0U) {
            goto case_0___2;
          }
          if (prefix_count == 1U) {
            goto case_1___3;
          }
          if (prefix_count == 2U) {
            goto case_2___3;
          }
          goto switch_default___4;
          case_0___2: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___5, & count___0);
          }
          goto switch_break___5;
          case_1___3: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___5, & count___0);
          }
          goto switch_break___5;
          case_2___3: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___5, & count___0);
          }
          goto switch_break___5;
          switch_default___4: 
          {
          abort();
          }
          switch_break___5: ;
          goto switch_break___1;
          case_5: 
          arg___6 = (a.arg + dp->arg_index)->a.a_int;
          if (prefix_count == 0U) {
            goto case_0___3;
          }
          if (prefix_count == 1U) {
            goto case_1___4;
          }
          if (prefix_count == 2U) {
            goto case_2___4;
          }
          goto switch_default___5;
          case_0___3: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___6, & count___0);
          }
          goto switch_break___6;
          case_1___4: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___6, & count___0);
          }
          goto switch_break___6;
          case_2___4: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___6, & count___0);
          }
          goto switch_break___6;
          switch_default___5: 
          {
          abort();
          }
          switch_break___6: ;
          goto switch_break___1;
          case_6: 
          arg___7 = (a.arg + dp->arg_index)->a.a_uint;
          if (prefix_count == 0U) {
            goto case_0___4;
          }
          if (prefix_count == 1U) {
            goto case_1___5;
          }
          if (prefix_count == 2U) {
            goto case_2___5;
          }
          goto switch_default___6;
          case_0___4: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___7, & count___0);
          }
          goto switch_break___7;
          case_1___5: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___7, & count___0);
          }
          goto switch_break___7;
          case_2___5: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___7, & count___0);
          }
          goto switch_break___7;
          switch_default___6: 
          {
          abort();
          }
          switch_break___7: ;
          goto switch_break___1;
          case_7___0: 
          arg___8 = (a.arg + dp->arg_index)->a.a_longint;
          if (prefix_count == 0U) {
            goto case_0___5;
          }
          if (prefix_count == 1U) {
            goto case_1___6;
          }
          if (prefix_count == 2U) {
            goto case_2___6;
          }
          goto switch_default___7;
          case_0___5: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___8, & count___0);
          }
          goto switch_break___8;
          case_1___6: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___8, & count___0);
          }
          goto switch_break___8;
          case_2___6: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___8, & count___0);
          }
          goto switch_break___8;
          switch_default___7: 
          {
          abort();
          }
          switch_break___8: ;
          goto switch_break___1;
          case_8___0: 
          arg___9 = (a.arg + dp->arg_index)->a.a_ulongint;
          if (prefix_count == 0U) {
            goto case_0___6;
          }
          if (prefix_count == 1U) {
            goto case_1___7;
          }
          if (prefix_count == 2U) {
            goto case_2___7;
          }
          goto switch_default___8;
          case_0___6: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___9, & count___0);
          }
          goto switch_break___9;
          case_1___7: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___9, & count___0);
          }
          goto switch_break___9;
          case_2___7: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___9, & count___0);
          }
          goto switch_break___9;
          switch_default___8: 
          {
          abort();
          }
          switch_break___9: ;
          goto switch_break___1;
          case_9___0: 
          arg___10 = (a.arg + dp->arg_index)->a.a_longlongint;
          if (prefix_count == 0U) {
            goto case_0___7;
          }
          if (prefix_count == 1U) {
            goto case_1___8;
          }
          if (prefix_count == 2U) {
            goto case_2___8;
          }
          goto switch_default___9;
          case_0___7: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___10, & count___0);
          }
          goto switch_break___10;
          case_1___8: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___10, & count___0);
          }
          goto switch_break___10;
          case_2___8: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___10, & count___0);
          }
          goto switch_break___10;
          switch_default___9: 
          {
          abort();
          }
          switch_break___10: ;
          goto switch_break___1;
          case_10___0: 
          arg___11 = (a.arg + dp->arg_index)->a.a_ulonglongint;
          if (prefix_count == 0U) {
            goto case_0___8;
          }
          if (prefix_count == 1U) {
            goto case_1___9;
          }
          if (prefix_count == 2U) {
            goto case_2___9;
          }
          goto switch_default___10;
          case_0___8: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___11, & count___0);
          }
          goto switch_break___11;
          case_1___9: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___11, & count___0);
          }
          goto switch_break___11;
          case_2___9: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___11, & count___0);
          }
          goto switch_break___11;
          switch_default___10: 
          {
          abort();
          }
          switch_break___11: ;
          goto switch_break___1;
          case_11: 
          arg___12 = (a.arg + dp->arg_index)->a.a_double;
          if (prefix_count == 0U) {
            goto case_0___9;
          }
          if (prefix_count == 1U) {
            goto case_1___10;
          }
          if (prefix_count == 2U) {
            goto case_2___10;
          }
          goto switch_default___11;
          case_0___9: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___12, & count___0);
          }
          goto switch_break___12;
          case_1___10: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___12, & count___0);
          }
          goto switch_break___12;
          case_2___10: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___12, & count___0);
          }
          goto switch_break___12;
          switch_default___11: 
          {
          abort();
          }
          switch_break___12: ;
          goto switch_break___1;
          case_12___0: 
          arg___13 = (a.arg + dp->arg_index)->a.a_longdouble;
          if (prefix_count == 0U) {
            goto case_0___10;
          }
          if (prefix_count == 1U) {
            goto case_1___11;
          }
          if (prefix_count == 2U) {
            goto case_2___11;
          }
          goto switch_default___12;
          case_0___10: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___13, & count___0);
          }
          goto switch_break___13;
          case_1___11: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___13, & count___0);
          }
          goto switch_break___13;
          case_2___11: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___13, & count___0);
          }
          goto switch_break___13;
          switch_default___12: 
          {
          abort();
          }
          switch_break___13: ;
          goto switch_break___1;
          case_13: 
          arg___14 = (a.arg + dp->arg_index)->a.a_char;
          if (prefix_count == 0U) {
            goto case_0___11;
          }
          if (prefix_count == 1U) {
            goto case_1___12;
          }
          if (prefix_count == 2U) {
            goto case_2___12;
          }
          goto switch_default___13;
          case_0___11: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___14, & count___0);
          }
          goto switch_break___14;
          case_1___12: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___14, & count___0);
          }
          goto switch_break___14;
          case_2___12: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___14, & count___0);
          }
          goto switch_break___14;
          switch_default___13: 
          {
          abort();
          }
          switch_break___14: ;
          goto switch_break___1;
          case_14___0: 
          arg___15 = (a.arg + dp->arg_index)->a.a_wide_char;
          if (prefix_count == 0U) {
            goto case_0___12;
          }
          if (prefix_count == 1U) {
            goto case_1___13;
          }
          if (prefix_count == 2U) {
            goto case_2___13;
          }
          goto switch_default___14;
          case_0___12: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___15, & count___0);
          }
          goto switch_break___15;
          case_1___13: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___15, & count___0);
          }
          goto switch_break___15;
          case_2___13: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___15, & count___0);
          }
          goto switch_break___15;
          switch_default___14: 
          {
          abort();
          }
          switch_break___15: ;
          goto switch_break___1;
          case_15: 
          arg___16 = (a.arg + dp->arg_index)->a.a_string;
          if (prefix_count == 0U) {
            goto case_0___13;
          }
          if (prefix_count == 1U) {
            goto case_1___14;
          }
          if (prefix_count == 2U) {
            goto case_2___14;
          }
          goto switch_default___15;
          case_0___13: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___16, & count___0);
          }
          goto switch_break___16;
          case_1___14: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___16, & count___0);
          }
          goto switch_break___16;
          case_2___14: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___16, & count___0);
          }
          goto switch_break___16;
          switch_default___15: 
          {
          abort();
          }
          switch_break___16: ;
          goto switch_break___1;
          case_16___0: 
          arg___17 = (a.arg + dp->arg_index)->a.a_wide_string;
          if (prefix_count == 0U) {
            goto case_0___14;
          }
          if (prefix_count == 1U) {
            goto case_1___15;
          }
          if (prefix_count == 2U) {
            goto case_2___15;
          }
          goto switch_default___16;
          case_0___14: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___17, & count___0);
          }
          goto switch_break___17;
          case_1___15: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___17, & count___0);
          }
          goto switch_break___17;
          case_2___15: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___17, & count___0);
          }
          goto switch_break___17;
          switch_default___16: 
          {
          abort();
          }
          switch_break___17: ;
          goto switch_break___1;
          case_17: 
          arg___18 = (a.arg + dp->arg_index)->a.a_pointer;
          if (prefix_count == 0U) {
            goto case_0___15;
          }
          if (prefix_count == 1U) {
            goto case_1___16;
          }
          if (prefix_count == 2U) {
            goto case_2___16;
          }
          goto switch_default___17;
          case_0___15: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              arg___18, & count___0);
          }
          goto switch_break___18;
          case_1___16: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], arg___18, & count___0);
          }
          goto switch_break___18;
          case_2___16: 
          {
          retcount = snprintf((char */* __restrict  */)(result + length), maxlen,
                              (char const   */* __restrict  */)((char const   *)buf___1),
                              prefixes[0], prefixes[1], arg___18, & count___0);
          }
          goto switch_break___18;
          switch_default___17: 
          {
          abort();
          }
          switch_break___18: ;
          goto switch_break___1;
          switch_default___18: 
          {
          abort();
          }
          switch_break___1: ;
          if (count___0 >= 0) {
            if ((size_t )count___0 < maxlen) {
              if ((int )*((result + length) + count___0) != 0) {
                {
                abort();
                }
              }
            }
            if (retcount > count___0) {
              count___0 = retcount;
            }
          } else
          if ((int )*(fbp + 1) != 0) {
            *(fbp + 1) = (char )'\000';
            goto __Cont;
          } else
          if (retcount < 0) {
            if (allocated <= 9223372036854775807UL) {
              tmp___99 = allocated * 2UL;
            } else {
              tmp___99 = 0xffffffffffffffffUL;
            }
            {
            tmp___100 = xsum(tmp___99, (size_t )12);
            bigger_need = (size_t )tmp___100;
            }
            if (bigger_need > allocated) {
              if (allocated > 0UL) {
                if (allocated <= 9223372036854775807UL) {
                  tmp___101 = allocated * 2UL;
                } else {
                  tmp___101 = 0xffffffffffffffffUL;
                }
                allocated = tmp___101;
              } else {
                allocated = (size_t )12;
              }
              if (bigger_need > allocated) {
                allocated = bigger_need;
              }
              if (allocated <= 0xffffffffffffffffUL / sizeof(char )) {
                memory_size___3 = allocated * sizeof(char );
              } else {
                memory_size___3 = 0xffffffffffffffffUL;
              }
              if (memory_size___3 == 0xffffffffffffffffUL) {
                goto out_of_memory;
              }
              if ((unsigned long )result == (unsigned long )resultbuf) {
                {
                tmp___102 = malloc(memory_size___3);
                memory___3 = (char *)tmp___102;
                }
              } else
              if ((unsigned long )result == (unsigned long )((void *)0)) {
                {
                tmp___102 = malloc(memory_size___3);
                memory___3 = (char *)tmp___102;
                }
              } else {
                {
                tmp___103 = realloc((void *)result, memory_size___3);
                memory___3 = (char *)tmp___103;
                }
              }
              if ((unsigned long )memory___3 == (unsigned long )((void *)0)) {
                goto out_of_memory;
              }
              if ((unsigned long )result == (unsigned long )resultbuf) {
                if (length > 0UL) {
                  {
                  memcpy((void */* __restrict  */)((void *)memory___3), (void const   */* __restrict  */)((void const   *)result),
                         length);
                  }
                }
              }
              result = memory___3;
            }
            goto __Cont;
          } else {
            count___0 = retcount;
          }
          if (count___0 < 0) {
            if (! ((unsigned long )result == (unsigned long )resultbuf)) {
              if (! ((unsigned long )result == (unsigned long )((void *)0))) {
                {
                free((void *)result);
                }
              }
            }
            if ((unsigned long )buf_malloced != (unsigned long )((void *)0)) {
              {
              free((void *)buf_malloced);
              }
            }
            {
            free((void *)d.dir);
            }
            if (a.arg) {
              {
              free((void *)a.arg);
              }
            }
            {
            tmp___104 = __errno_location();
            *tmp___104 = 22;
            }
            return ((char *)((void *)0));
          }
          if ((size_t )((unsigned int )count___0 + 1U) >= maxlen) {
            if (maxlen == 2147483647UL / (sizeof(char ) / sizeof(char ))) {
              goto overflow;
            } else {
              if (allocated <= 9223372036854775807UL) {
                tmp___105 = allocated * 2UL;
              } else {
                tmp___105 = 0xffffffffffffffffUL;
              }
              {
              tmp___106 = xsum(length, (((unsigned long )((unsigned int )count___0 + 2U) + sizeof(char ) / sizeof(char )) - 1UL) / (sizeof(char ) / sizeof(char )));
              tmp___107 = xmax((size_t )tmp___106, tmp___105);
              n___3 = (size_t )tmp___107;
              }
              if (n___3 > allocated) {
                if (allocated > 0UL) {
                  if (allocated <= 9223372036854775807UL) {
                    tmp___108 = allocated * 2UL;
                  } else {
                    tmp___108 = 0xffffffffffffffffUL;
                  }
                  allocated = tmp___108;
                } else {
                  allocated = (size_t )12;
                }
                if (n___3 > allocated) {
                  allocated = n___3;
                }
                if (allocated <= 0xffffffffffffffffUL / sizeof(char )) {
                  memory_size___4 = allocated * sizeof(char );
                } else {
                  memory_size___4 = 0xffffffffffffffffUL;
                }
                if (memory_size___4 == 0xffffffffffffffffUL) {
                  goto out_of_memory;
                }
                if ((unsigned long )result == (unsigned long )resultbuf) {
                  {
                  tmp___109 = malloc(memory_size___4);
                  memory___4 = (char *)tmp___109;
                  }
                } else
                if ((unsigned long )result == (unsigned long )((void *)0)) {
                  {
                  tmp___109 = malloc(memory_size___4);
                  memory___4 = (char *)tmp___109;
                  }
                } else {
                  {
                  tmp___110 = realloc((void *)result, memory_size___4);
                  memory___4 = (char *)tmp___110;
                  }
                }
                if ((unsigned long )memory___4 == (unsigned long )((void *)0)) {
                  goto out_of_memory;
                }
                if ((unsigned long )result == (unsigned long )resultbuf) {
                  if (length > 0UL) {
                    {
                    memcpy((void */* __restrict  */)((void *)memory___4), (void const   */* __restrict  */)((void const   *)result),
                           length);
                    }
                  }
                }
                result = memory___4;
              }
              goto __Cont;
            }
          }
          length += (size_t )count___0;
          goto while_break___14;
          __Cont: ;
        }
        while_break___30: /* CIL Label */ ;
        }
        while_break___14: ;
      }
    }
    cp = dp->dir_end;
    i ++;
    dp ++;
  }
  while_break___15: /* CIL Label */ ;
  }
  while_break: 
  {
  tmp___117 = xsum(length, (size_t )1);
  }
  if (tmp___117 > (size_t __attribute__((__pure__))  )allocated) {
    if (allocated > 0UL) {
      if (allocated <= 9223372036854775807UL) {
        tmp___112 = allocated * 2UL;
      } else {
        tmp___112 = 0xffffffffffffffffUL;
      }
      allocated = tmp___112;
    } else {
      allocated = (size_t )12;
    }
    {
    tmp___114 = xsum(length, (size_t )1);
    }
    if (tmp___114 > (size_t __attribute__((__pure__))  )allocated) {
      {
      tmp___113 = xsum(length, (size_t )1);
      allocated = (size_t )tmp___113;
      }
    }
    if (allocated <= 0xffffffffffffffffUL / sizeof(char )) {
      memory_size___5 = allocated * sizeof(char );
    } else {
      memory_size___5 = 0xffffffffffffffffUL;
    }
    if (memory_size___5 == 0xffffffffffffffffUL) {
      goto out_of_memory;
    }
    if ((unsigned long )result == (unsigned long )resultbuf) {
      {
      tmp___115 = malloc(memory_size___5);
      memory___5 = (char *)tmp___115;
      }
    } else
    if ((unsigned long )result == (unsigned long )((void *)0)) {
      {
      tmp___115 = malloc(memory_size___5);
      memory___5 = (char *)tmp___115;
      }
    } else {
      {
      tmp___116 = realloc((void *)result, memory_size___5);
      memory___5 = (char *)tmp___116;
      }
    }
    if ((unsigned long )memory___5 == (unsigned long )((void *)0)) {
      goto out_of_memory;
    }
    if ((unsigned long )result == (unsigned long )resultbuf) {
      if (length > 0UL) {
        {
        memcpy((void */* __restrict  */)((void *)memory___5), (void const   */* __restrict  */)((void const   *)result),
               length);
        }
      }
    }
    result = memory___5;
  }
  *(result + length) = (char )'\000';
  if ((unsigned long )result != (unsigned long )resultbuf) {
    if (length + 1UL < allocated) {
      {
      tmp___118 = realloc((void *)result, (length + 1UL) * sizeof(char ));
      memory___6 = (char *)tmp___118;
      }
      if ((unsigned long )memory___6 != (unsigned long )((void *)0)) {
        result = memory___6;
      }
    }
  }
  if ((unsigned long )buf_malloced != (unsigned long )((void *)0)) {
    {
    free((void *)buf_malloced);
    }
  }
  {
  free((void *)d.dir);
  }
  if (a.arg) {
    {
    free((void *)a.arg);
    }
  }
  *lengthp = length;
  return (result);
  overflow: 
  if (! ((unsigned long )result == (unsigned long )resultbuf)) {
    if (! ((unsigned long )result == (unsigned long )((void *)0))) {
      {
      free((void *)result);
      }
    }
  }
  if ((unsigned long )buf_malloced != (unsigned long )((void *)0)) {
    {
    free((void *)buf_malloced);
    }
  }
  {
  free((void *)d.dir);
  }
  if (a.arg) {
    {
    free((void *)a.arg);
    }
  }
  {
  tmp___119 = __errno_location();
  *tmp___119 = 75;
  }
  return ((char *)((void *)0));
  out_of_memory: 
  if (! ((unsigned long )result == (unsigned long )resultbuf)) {
    if (! ((unsigned long )result == (unsigned long )((void *)0))) {
      {
      free((void *)result);
      }
    }
  }
  if ((unsigned long )buf_malloced != (unsigned long )((void *)0)) {
    {
    free((void *)buf_malloced);
    }
  }
  out_of_memory_1: 
  {
  free((void *)d.dir);
  }
  if (a.arg) {
    {
    free((void *)a.arg);
    }
  }
  {
  tmp___120 = __errno_location();
  *tmp___120 = 12;
  }
  return ((char *)((void *)0));
}
}
int rpl_vasprintf(char **resultp , char const   *format , va_list args ) 
{ 
  size_t length ;
  char *result ;
  char *tmp ;
  int *tmp___0 ;

  {
  {
  tmp = vasnprintf((char *)((void *)0), & length, format, args);
  result = tmp;
  }
  if ((unsigned long )result == (unsigned long )((void *)0)) {
    return (-1);
  }
  if (length > 2147483647UL) {
    {
    free((void *)result);
    tmp___0 = __errno_location();
    *tmp___0 = 75;
    }
    return (-1);
  }
  *resultp = result;
  return ((int )length);
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
