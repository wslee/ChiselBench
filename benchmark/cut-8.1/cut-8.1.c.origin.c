typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
typedef long __ssize_t;
struct _IO_FILE;
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
typedef __ssize_t ssize_t;
struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};
typedef unsigned long uintptr_t;
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
struct hash_table;
typedef struct hash_table Hash_table;
struct range_pair {
   size_t lo ;
   size_t hi ;
};
enum operating_mode {
    undefined_mode = 0,
    byte_mode = 1,
    field_mode = 2
} ;
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
typedef __off_t off_t;
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_215859813 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_215859813 __mbstate_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
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
typedef unsigned long longword;
struct quoting_options;
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
extern int getc_unlocked(FILE *__stream ) ;
extern int putchar_unlocked(int __c ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size , size_t __n ,
                              FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) clearerr_unlocked)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) feof_unlocked)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror_unlocked)(FILE *__stream ) ;
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
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern void ( __attribute__((__nonnull__(1,4))) qsort)(void *__base , size_t __nmemb ,
                                                       size_t __size , int (*__compar)(void const   * ,
                                                                                       void const   * ) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2), __leaf__)) strspn)(char const   *__s ,
                                                                                                  char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
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
void *xzalloc(size_t s )  __attribute__((__malloc__)) ;
void *xrealloc(void *p , size_t n ) ;
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
ssize_t getndelim2(char **lineptr , size_t *linesize , size_t offset , size_t nmax ,
                   int delim1 , int delim2 , FILE *stream ) ;
void *hash_lookup(Hash_table const   *table___0 , void const   *entry ) ;
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
char const   *quote(char const   *name ) ;
char *xstrndup(char const   *string , size_t n ) ;
static char *field_1_buffer  ;
static size_t field_1_bufsize  ;
static size_t max_range_endpoint  ;
static size_t eol_range_start  ;
static unsigned char *printable_field  ;
static enum operating_mode operating_mode  ;
static _Bool suppress_non_delimited  ;
static _Bool complement  ;
static unsigned char delim  ;
static _Bool output_delimiter_specified  ;
static size_t output_delimiter_length  ;
static char *output_delimiter_string  ;
static _Bool have_read_stdin  ;
static Hash_table *range_start_ht  ;
static struct option  const  longopts[10]  = 
  {      {"bytes", 1, (int *)((void *)0), 'b'}, 
        {"characters", 1, (int *)((void *)0), 'c'}, 
        {"fields", 1, (int *)((void *)0), 'f'}, 
        {"delimiter", 1, (int *)((void *)0), 'd'}, 
        {"only-delimited", 0, (int *)((void *)0), 's'}, 
        {"output-delimiter", 1, (int *)((void *)0), 128}, 
        {"complement", 0, (int *)((void *)0), 129}, 
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
    tmp___0 = gettext("Usage: %s OPTION... [FILE]...\n");
    printf((char const   */* __restrict  */)((char const   *)tmp___0), program_name);
    tmp___1 = gettext("Print selected parts of lines from each FILE to standard output.\n\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___1), (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("Mandatory arguments to long options are mandatory for short options too.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___2), (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("  -b, --bytes=LIST        select only these bytes\n  -c, --characters=LIST   select only these characters\n  -d, --delimiter=DELIM   use DELIM instead of TAB for field delimiter\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___3), (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("  -f, --fields=LIST       select only these fields;  also print any line\n                            that contains no delimiter character, unless\n                            the -s option is specified\n  -n                      (ignored)\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___4), (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("      --complement        complement the set of selected bytes, characters\n                            or fields\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___5), (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("  -s, --only-delimited    do not print lines not containing delimiters\n      --output-delimiter=STRING  use STRING as the output delimiter\n                            the default is to use the input delimiter\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___6), (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___7), (FILE */* __restrict  */)stdout);
    tmp___8 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___8), (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("\nUse one, and only one of -b, -c or -f.  Each LIST is made up of one\nrange, or many ranges separated by commas.  Selected input is written\nin the same order that it is read, and is written exactly once.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___9), (FILE */* __restrict  */)stdout);
    tmp___10 = gettext("Each range is one of:\n\n  N     N\'th byte, character or field, counted from 1\n  N-    from N\'th byte, character or field, to end of line\n  N-M   from N\'th to M\'th (included) byte, character or field\n  -M    from first to M\'th (included) byte, character or field\n\nWith no FILE, or when FILE is -, read standard input.\n");
    fputs_unlocked((char const   */* __restrict  */)((char const   *)tmp___10), (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
    }
  }
  {
  exit(status);
  }
}
}
__inline static void mark_range_start(size_t i ) 
{ 
  void *ent_from_table ;
  void *tmp ;

  {
  {
  tmp = hash_insert(range_start_ht, (void const   *)((void *)i));
  ent_from_table = tmp;
  }
  if ((unsigned long )ent_from_table == (unsigned long )((void *)0)) {
    {
    xalloc_die();
    }
  }
  if (! ((size_t )ent_from_table == i)) {
    {
    __assert_fail("(size_t) ent_from_table == i", "/home/wslee/project/coreutils-8.1/src/cut.c",
                  253U, "mark_range_start");
    }
  }
  return;
}
}
__inline static void mark_printable_field(size_t i ) 
{ 
  size_t n ;

  {
  n = i / 8UL;
  *(printable_field + n) = (unsigned char )((int )*(printable_field + n) | (1 << i % 8UL));
  return;
}
}
__inline static _Bool is_printable_field(size_t i ) 
{ 
  size_t n ;

  {
  n = i / 8UL;
  return ((_Bool )(((int )*(printable_field + n) >> i % 8UL) & 1));
}
}
static size_t hash_int(void const   *x , size_t tablesize ) 
{ 
  uintptr_t y ;

  {
  y = (uintptr_t )x;
  return (y % tablesize);
}
}
static _Bool hash_compare_ints(void const   *x , void const   *y ) 
{ 
  int tmp ;

  {
  if ((unsigned long )x == (unsigned long )y) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  return ((_Bool )tmp);
}
}
static _Bool is_range_start_index(size_t i ) 
{ 
  int tmp___0 ;
  void *tmp___1 ;

  {
  {
  tmp___1 = hash_lookup((Hash_table const   *)range_start_ht, (void const   *)((void *)i));
  }
  if (tmp___1) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  return ((_Bool )tmp___0);
}
}
static _Bool print_kth(size_t k , _Bool *range_start ) 
{ 
  _Bool k_selected ;
  _Bool tmp ;
  int tmp___0 ;
  _Bool is_selected ;

  {
  if (0UL < eol_range_start) {
    if (eol_range_start <= k) {
      tmp___0 = 1;
    } else {
      goto _L;
    }
  } else
  _L: 
  if (k <= max_range_endpoint) {
    {
    tmp = is_printable_field(k);
    }
    if (tmp) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
  } else {
    tmp___0 = 0;
  }
  k_selected = (_Bool )tmp___0;
  is_selected = (_Bool )((int )k_selected ^ (int )complement);
  if (range_start) {
    if (is_selected) {
      {
      *range_start = is_range_start_index(k);
      }
    }
  }
  return (is_selected);
}
}
static int compare_ranges(void const   *a , void const   *b ) 
{ 
  int a_start ;
  int b_start ;
  int tmp ;

  {
  a_start = (int )((struct range_pair  const  *)a)->lo;
  b_start = (int )((struct range_pair  const  *)b)->lo;
  if (a_start < b_start) {
    tmp = -1;
  } else {
    tmp = a_start > b_start;
  }
  return (tmp);
}
}
static char const   *num_start  ;
static _Bool set_fields(char const   *fieldstr ) 
{ 
  size_t initial ;
  size_t value ;
  _Bool lhs_specified ;
  _Bool rhs_specified ;
  _Bool dash_found ;
  _Bool field_found ;
  struct range_pair *rp ;
  size_t n_rp ;
  size_t n_rp_allocated ;
  size_t i ;
  _Bool in_digits ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  void *tmp___3 ;
  char *tmp___4 ;
  void *tmp___5 ;
  char *tmp___6 ;
  void *tmp___7 ;
  size_t len ;
  size_t tmp___8 ;
  char *bad_num ;
  char *tmp___9 ;
  char const   *tmp___10 ;
  char *tmp___11 ;
  char const   *tmp___12 ;
  char *tmp___13 ;
  int tmp___14 ;
  char *tmp___15 ;
  unsigned short const   **tmp___16 ;
  unsigned char tmp___17 ;
  void *tmp___18 ;
  size_t j ;
  size_t rsi_candidate ;
  _Bool tmp___19 ;
  _Bool tmp___20 ;
  char *__cil_tmp48 ;
  char *__cil_tmp49 ;
  char *__cil_tmp50 ;
  char *__cil_tmp51 ;
  char *__cil_tmp52 ;
  char *__cil_tmp53 ;
  char *__cil_tmp54 ;
  char *__cil_tmp55 ;
  char *__cil_tmp56 ;

  {
  initial = (size_t )1;
  value = (size_t )0;
  lhs_specified = (_Bool)0;
  rhs_specified = (_Bool)0;
  dash_found = (_Bool)0;
  field_found = (_Bool)0;
  rp = (struct range_pair *)((void *)0);
  n_rp = (size_t )0;
  n_rp_allocated = (size_t )0;
  in_digits = (_Bool)0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if ((int const   )*fieldstr == 45) {
      in_digits = (_Bool)0;
      if (dash_found) {
        {
        while (1) {
          while_continue___0: /* CIL Label */ ;
          {
          tmp = gettext("invalid byte or field list");
          error(0, 0, (char const   *)tmp);
          usage(1);
          }
          goto while_break___0;
        }
        while_break___14: /* CIL Label */ ;
        }

        while_break___0: ;
      }
      dash_found = (_Bool)1;
      fieldstr ++;
      if (lhs_specified) {
        initial = value;
      } else {
        initial = (size_t )1;
      }
      value = (size_t )0;
    } else
    if ((int const   )*fieldstr == 44) {
      goto _L___2;
    } else {
      {
      tmp___16 = __ctype_b_loc();
      tmp___17 = to_uchar((char )*fieldstr);
      }
      if ((int const   )*(*tmp___16 + (int )tmp___17) & 1) {
        goto _L___2;
      } else
      if ((int const   )*fieldstr == 0) {
        _L___2: 
        in_digits = (_Bool)0;
        if (dash_found) {
          dash_found = (_Bool)0;
          if (! lhs_specified) {
            if (! rhs_specified) {
              {
              while (1) {
                while_continue___1: /* CIL Label */ ;
                {
                tmp___0 = gettext("invalid range with no endpoint: -");
                error(0, 0, (char const   *)tmp___0);
                usage(1);
                }
                goto while_break___1;
              }
              while_break___15: /* CIL Label */ ;
              }

              while_break___1: ;
            }
          }
          if (! rhs_specified) {
            eol_range_start = initial;
            field_found = (_Bool)1;
          } else {
            if (value < initial) {
              {
              while (1) {
                while_continue___2: /* CIL Label */ ;
                {
                tmp___1 = gettext("invalid decreasing range");
                error(0, 0, (char const   *)tmp___1);
                usage(1);
                }
                goto while_break___2;
              }
              while_break___16: /* CIL Label */ ;
              }

              while_break___2: ;
            }
            if (eol_range_start != 0UL) {
              if (initial < eol_range_start) {
                if (eol_range_start <= value) {
                  eol_range_start = initial;
                } else {
                  {
                  while (1) {
                    while_continue___3: /* CIL Label */ ;

                    if (initial == 0UL) {
                      goto _L;
                    } else
                    if (value == 0UL) {
                      _L: 
                      {
                      while (1) {
                        while_continue___4: /* CIL Label */ ;
                        {
                        tmp___2 = gettext("fields and positions are numbered from 1");
                        error(0, 0, (char const   *)tmp___2);
                        usage(1);
                        }
                        goto while_break___4;
                      }
                      while_break___18: /* CIL Label */ ;
                      }

                      while_break___4: ;
                    }
                    if (n_rp >= n_rp_allocated) {
                      {
                      tmp___3 = x2nrealloc((void *)rp, & n_rp_allocated, sizeof(*rp));
                      rp = (struct range_pair *)tmp___3;
                      }
                    }
                    (rp + n_rp)->lo = initial;
                    (rp + n_rp)->hi = value;
                    n_rp ++;
                    goto while_break___3;
                  }
                  while_break___17: /* CIL Label */ ;
                  }

                  while_break___3: ;
                }
                field_found = (_Bool)1;
              }
            } else {
              {
              while (1) {
                while_continue___5: /* CIL Label */ ;

                if (initial == 0UL) {
                  goto _L___0;
                } else
                if (value == 0UL) {
                  _L___0: 
                  {
                  while (1) {
                    while_continue___6: /* CIL Label */ ;
                    {
                    tmp___4 = gettext("fields and positions are numbered from 1");
                    error(0, 0, (char const   *)tmp___4);
                    usage(1);
                    }
                    goto while_break___6;
                  }
                  while_break___20: /* CIL Label */ ;
                  }

                  while_break___6: ;
                }
                if (n_rp >= n_rp_allocated) {
                  {
                  tmp___5 = x2nrealloc((void *)rp, & n_rp_allocated, sizeof(*rp));
                  rp = (struct range_pair *)tmp___5;
                  }
                }
                (rp + n_rp)->lo = initial;
                (rp + n_rp)->hi = value;
                n_rp ++;
                goto while_break___5;
              }
              while_break___19: /* CIL Label */ ;
              }

              while_break___5: 
              field_found = (_Bool)1;
            }
            value = (size_t )0;
          }
        } else {
          {
          while (1) {
            while_continue___7: /* CIL Label */ ;

            if (value == 0UL) {
              goto _L___1;
            } else
            if (value == 0UL) {
              _L___1: 
              {
              while (1) {
                while_continue___8: /* CIL Label */ ;
                {
                tmp___6 = gettext("fields and positions are numbered from 1");
                error(0, 0, (char const   *)tmp___6);
                usage(1);
                }
                goto while_break___8;
              }
              while_break___22: /* CIL Label */ ;
              }

              while_break___8: ;
            }
            if (n_rp >= n_rp_allocated) {
              {
              tmp___7 = x2nrealloc((void *)rp, & n_rp_allocated, sizeof(*rp));
              rp = (struct range_pair *)tmp___7;
              }
            }
            (rp + n_rp)->lo = value;
            (rp + n_rp)->hi = value;
            n_rp ++;
            goto while_break___7;
          }
          while_break___21: /* CIL Label */ ;
          }

          while_break___7: 
          value = (size_t )0;
          field_found = (_Bool)1;
        }
        if ((int const   )*fieldstr == 0) {
          goto while_break;
        }
        fieldstr ++;
        lhs_specified = (_Bool)0;
        rhs_specified = (_Bool)0;
      } else
      if ((unsigned int )*fieldstr - 48U <= 9U) {
        if (! in_digits) {
          num_start = fieldstr;
        } else
        if (! num_start) {
          num_start = fieldstr;
        }
        in_digits = (_Bool)1;
        if (dash_found) {
          rhs_specified = (_Bool)1;
        } else {
          lhs_specified = (_Bool)1;
        }
        if (1844674407370955161UL < value) {
          tmp___14 = 0;
        } else
        if (value * 10UL + (size_t )((int const   )*fieldstr - 48) < value) {
          tmp___14 = 0;
        } else {
          value = value * 10UL + (size_t )((int const   )*fieldstr - 48);
          tmp___14 = 1;
        }
        if (! tmp___14) {
          {
          tmp___8 = strspn(num_start, "0123456789");
          len = tmp___8;
          tmp___9 = xstrndup(num_start, len);
          bad_num = tmp___9;
          }
          if ((unsigned int )operating_mode == 1U) {
            {
            tmp___10 = quote((char const   *)bad_num);
            tmp___11 = gettext("byte offset %s is too large");
            error(0, 0, (char const   *)tmp___11, tmp___10);
            }
          } else {
            {
            tmp___12 = quote((char const   *)bad_num);
            tmp___13 = gettext("field number %s is too large");
            error(0, 0, (char const   *)tmp___13, tmp___12);
            }
          }
          {
          free((void *)bad_num);
          exit(1);
          }
        }
        fieldstr ++;
      } else {
        {
        while (1) {
          while_continue___9: /* CIL Label */ ;
          {
          tmp___15 = gettext("invalid byte or field list");
          error(0, 0, (char const   *)tmp___15);
          usage(1);
          }
          goto while_break___9;
        }
        while_break___23: /* CIL Label */ ;
        }

        while_break___9: ;
      }
    }
  }
  while_break___13: /* CIL Label */ ;
  }

  while_break: 
  max_range_endpoint = (size_t )0;
  i = (size_t )0;
  {
  while (1) {
    while_continue___10: /* CIL Label */ ;

    if (! (i < n_rp)) {
      goto while_break___10;
    }
    if ((rp + i)->hi > max_range_endpoint) {
      max_range_endpoint = (rp + i)->hi;
    }
    i ++;
  }
  while_break___24: /* CIL Label */ ;
  }

  while_break___10: 
  {
  tmp___18 = xzalloc(max_range_endpoint / 8UL + 1UL);
  printable_field = (unsigned char *)tmp___18;
  qsort((void *)rp, n_rp, sizeof(*(rp + 0)), & compare_ranges);
  i = (size_t )0;
  }
  {
  while (1) {
    while_continue___11: /* CIL Label */ ;

    if (! (i < n_rp)) {
      goto while_break___11;
    }
    if (complement) {
      rsi_candidate = (rp + i)->hi + 1UL;
    } else {
      rsi_candidate = (rp + i)->lo;
    }
    if (output_delimiter_specified) {
      {
      tmp___19 = is_printable_field(rsi_candidate);
      }
      if (! tmp___19) {
        {
        mark_range_start(rsi_candidate);
        }
      }
    }
    j = (rp + i)->lo;
    {
    while (1) {
      while_continue___12: /* CIL Label */ ;

      if (! (j <= (rp + i)->hi)) {
        goto while_break___12;
      }
      {
      mark_printable_field(j);
      j ++;
      }
    }
    while_break___26: /* CIL Label */ ;
    }

    while_break___12: 
    i ++;
  }
  while_break___25: /* CIL Label */ ;
  }

  while_break___11: ;
  if (output_delimiter_specified) {
    if (! complement) {
      if (eol_range_start) {
        {
        tmp___20 = is_printable_field(eol_range_start);
        }
        if (! tmp___20) {
          {
          mark_range_start(eol_range_start);
          }
        }
      }
    }
  }
  {
  free((void *)rp);
  }
  return (field_found);
}
}
static void cut_bytes(FILE *stream ) 
{ 
  size_t byte_idx ;
  _Bool print_delimiter ;
  int c ;
  _Bool range_start ;
  _Bool *rs ;
  _Bool *tmp ;
  _Bool tmp___0 ;

  {
  byte_idx = (size_t )0;
  print_delimiter = (_Bool)0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    c = getc_unlocked(stream);
    }
    if (c == 10) {
      {
      putchar_unlocked('\n');
      byte_idx = (size_t )0;
      print_delimiter = (_Bool)0;
      }
    } else
    if (c == -1) {
      if (byte_idx > 0UL) {
        {
        putchar_unlocked('\n');
        }
      }
      goto while_break;
    } else {
      if (output_delimiter_specified) {
        tmp = & range_start;
      } else {
        tmp = (_Bool *)((void *)0);
      }
      {
      rs = tmp;
      byte_idx ++;
      tmp___0 = print_kth(byte_idx, rs);
      }
      if (tmp___0) {
        if (rs) {
          if (*rs) {
            if (print_delimiter) {
              {
              fwrite_unlocked((void const   */* __restrict  */)((void const   *)output_delimiter_string),
                              sizeof(char ), output_delimiter_length, (FILE */* __restrict  */)stdout);
              }
            }
          }
        }
        {
        print_delimiter = (_Bool)1;
        putchar_unlocked(c);
        }
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }

  while_break: ;
  return;
}
}
static void cut_fields(FILE *stream ) 
{ 
  int c ;
  size_t field_idx ;
  _Bool found_any_selected_field ;
  _Bool buffer_first_field ;
  _Bool tmp ;
  int tmp___0 ;
  ssize_t len ;
  size_t n_bytes ;
  int tmp___1 ;
  int tmp___2 ;
  unsigned char tmp___3 ;
  _Bool tmp___4 ;
  _Bool tmp___5 ;

  {
  {
  field_idx = (size_t )1;
  found_any_selected_field = (_Bool)0;
  c = getc_unlocked(stream);
  }
  if (c == -1) {
    return;
  }
  {
  ungetc(c, stream);
  tmp = print_kth((size_t )1, (_Bool *)((void *)0));
  }
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  buffer_first_field = (_Bool )((int )suppress_non_delimited ^ tmp___0);
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;

    while_continue: ;
    if (field_idx == 1UL) {
      if (buffer_first_field) {
        {
        len = getndelim2(& field_1_buffer, & field_1_bufsize, (size_t )0, (size_t )-1,
                         (int )delim, '\n', stream);
        }
        if (len < 0L) {
          {
          free((void *)field_1_buffer);
          field_1_buffer = (char *)((void *)0);
          tmp___1 = ferror_unlocked(stream);
          }
          if (tmp___1) {
            goto while_break;
          } else {
            {
            tmp___2 = feof_unlocked(stream);
            }
            if (tmp___2) {
              goto while_break;
            }
          }
          {
          xalloc_die();
          }
        }
        n_bytes = (size_t )len;
        if (! (n_bytes != 0UL)) {
          {
          __assert_fail("n_bytes != 0", "/home/wslee/project/coreutils-8.1/src/cut.c",
                        625U, "cut_fields");
          }
        }
        {
        tmp___3 = to_uchar(*(field_1_buffer + (n_bytes - 1UL)));
        }
        if ((int )tmp___3 != (int )delim) {
          if (! suppress_non_delimited) {
            {
            fwrite_unlocked((void const   */* __restrict  */)((void const   *)field_1_buffer),
                            sizeof(char ), n_bytes, (FILE */* __restrict  */)stdout);
            }
            if ((int )*(field_1_buffer + (n_bytes - 1UL)) != 10) {
              {
              putchar_unlocked('\n');
              }
            }
          }
          goto while_continue;
        }
        {
        tmp___4 = print_kth((size_t )1, (_Bool *)((void *)0));
        }
        if (tmp___4) {
          {
          fwrite_unlocked((void const   */* __restrict  */)((void const   *)field_1_buffer),
                          sizeof(char ), n_bytes - 1UL, (FILE */* __restrict  */)stdout);
          found_any_selected_field = (_Bool)1;
          }
        }
        field_idx ++;
      }
    }
    if (c != -1) {
      {
      tmp___5 = print_kth(field_idx, (_Bool *)((void *)0));
      }
      if (tmp___5) {
        if (found_any_selected_field) {
          {
          fwrite_unlocked((void const   */* __restrict  */)((void const   *)output_delimiter_string),
                          sizeof(char ), output_delimiter_length, (FILE */* __restrict  */)stdout);
          }
        }
        found_any_selected_field = (_Bool)1;
        {
        while (1) {
          while_continue___1: /* CIL Label */ ;
          {
          c = getc_unlocked(stream);
          }
          if (c != (int )delim) {
            if (c != 10) {
              if (! (c != -1)) {
                goto while_break___0;
              }
            } else {
              goto while_break___0;
            }
          } else {
            goto while_break___0;
          }
          {
          putchar_unlocked(c);
          }
        }
        while_break___3: /* CIL Label */ ;
        }

        while_break___0: ;
      } else {
        {
        while (1) {
          while_continue___2: /* CIL Label */ ;
          {
          c = getc_unlocked(stream);
          }
          if (c != (int )delim) {
            if (c != 10) {
              if (! (c != -1)) {
                goto while_break___1;
              }
            } else {
              goto while_break___1;
            }
          } else {
            goto while_break___1;
          }
        }
        while_break___4: /* CIL Label */ ;
        }

        while_break___1: ;
      }
    }
    if (c == 10) {
      {
      c = getc_unlocked(stream);
      }
      if (c != -1) {
        {
        ungetc(c, stream);
        c = '\n';
        }
      }
    }
    if (c == (int )delim) {
      field_idx ++;
    } else
    if (c == 10) {
      goto _L;
    } else
    if (c == -1) {
      _L: 
      if (found_any_selected_field) {
        {
        putchar_unlocked('\n');
        }
      } else
      if (suppress_non_delimited) {
        if (! (field_idx == 1UL)) {
          {
          putchar_unlocked('\n');
          }
        }
      } else {
        {
        putchar_unlocked('\n');
        }
      }
      if (c == -1) {
        goto while_break;
      }
      field_idx = (size_t )1;
      found_any_selected_field = (_Bool)0;
    }
  }
  while_break___2: /* CIL Label */ ;
  }

  while_break: ;
  return;
}
}
static void cut_stream(FILE *stream ) 
{ 


  {
  if ((unsigned int )operating_mode == 1U) {
    {
    cut_bytes(stream);
    }
  } else {
    {
    cut_fields(stream);
    }
  }
  return;
}
}
static _Bool cut_file(char const   *file ) 
{ 
  FILE *stream ;
  int *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  {
  tmp___0 = strcmp(file, "-");
  }
  if (tmp___0 == 0) {
    have_read_stdin = (_Bool)1;
    stream = stdin;
  } else {
    {
    stream = fopen((char const   */* __restrict  */)file, (char const   */* __restrict  */)"r");
    }
    if ((unsigned long )stream == (unsigned long )((void *)0)) {
      {
      tmp = __errno_location();
      error(0, *tmp, "%s", file);
      }
      return ((_Bool)0);
    }
  }
  {
  cut_stream(stream);
  tmp___2 = ferror_unlocked(stream);
  }
  if (tmp___2) {
    {
    tmp___1 = __errno_location();
    error(0, *tmp___1, "%s", file);
    }
    return ((_Bool)0);
  }
  {
  tmp___5 = strcmp(file, "-");
  }
  if (tmp___5 == 0) {
    {
    clearerr_unlocked(stream);
    }
  } else {
    {
    tmp___4 = fclose(stream);
    }
    if (tmp___4 == -1) {
      {
      tmp___3 = __errno_location();
      error(0, *tmp___3, "%s", file);
      }
      return ((_Bool)0);
    }
  }
  return ((_Bool)1);
}
}
static char dummy[2]  ;
int main(int argc , char **argv ) 
{ 
  int optc ;
  _Bool ok ;
  _Bool delim_specified ;
  char *spec_list_string ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  size_t tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  _Bool tmp___8 ;
  _Bool tmp___9 ;
  int *tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  char *__cil_tmp35 ;
  char *__cil_tmp36 ;
  char *__cil_tmp37 ;
  char *__cil_tmp38 ;
  char *__cil_tmp39 ;
  char *__cil_tmp40 ;
  char *__cil_tmp41 ;
  char *__cil_tmp42 ;
  char *__cil_tmp43 ;
  char *__cil_tmp44 ;
  char *__cil_tmp45 ;
  char *__cil_tmp46 ;
  char *__cil_tmp47 ;
  char *__cil_tmp48 ;

  {
  {
  delim_specified = (_Bool)0;
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& close_stdout);
  operating_mode = (enum operating_mode )0;
  suppress_non_delimited = (_Bool)0;
  delim = (unsigned char )'\000';
  have_read_stdin = (_Bool)0;
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    optc = getopt_long(argc, (char * const  *)argv, "b:c:d:f:ns", longopts, (int *)((void *)0));
    }
    if (! (optc != -1)) {
      goto while_break;
    }
    if (optc == 98) {
      goto case_98;
    }
    if (optc == 99) {
      goto case_98;
    }
    if (optc == 102) {
      goto case_102;
    }
    if (optc == 100) {
      goto case_100;
    }
    if (optc == 128) {
      goto case_128;
    }
    if (optc == 110) {
      goto case_110;
    }
    if (optc == 115) {
      goto case_115;
    }
    if (optc == 129) {
      goto case_129;
    }
    if (optc == -130) {
      goto case_neg_130;
    }
    if (optc == -131) {
      goto case_neg_131;
    }
    goto switch_default;
    case_98: 
    if ((unsigned int )operating_mode != 0U) {
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;
        {
        tmp = gettext("only one type of list may be specified");
        error(0, 0, (char const   *)tmp);
        usage(1);
        }
        goto while_break___0;
      }
      while_break___10: /* CIL Label */ ;
      }

      while_break___0: ;
    }
    operating_mode = (enum operating_mode )1;
    spec_list_string = optarg;
    goto switch_break;
    case_102: 
    if ((unsigned int )operating_mode != 0U) {
      {
      while (1) {
        while_continue___1: /* CIL Label */ ;
        {
        tmp___0 = gettext("only one type of list may be specified");
        error(0, 0, (char const   *)tmp___0);
        usage(1);
        }
        goto while_break___1;
      }
      while_break___11: /* CIL Label */ ;
      }

      while_break___1: ;
    }
    operating_mode = (enum operating_mode )2;
    spec_list_string = optarg;
    goto switch_break;
    case_100: 
    if ((int )*(optarg + 0) != 0) {
      if ((int )*(optarg + 1) != 0) {
        {
        while (1) {
          while_continue___2: /* CIL Label */ ;
          {
          tmp___1 = gettext("the delimiter must be a single character");
          error(0, 0, (char const   *)tmp___1);
          usage(1);
          }
          goto while_break___2;
        }
        while_break___12: /* CIL Label */ ;
        }

        while_break___2: ;
      }
    }
    delim = (unsigned char )*(optarg + 0);
    delim_specified = (_Bool)1;
    goto switch_break;
    case_128: 
    output_delimiter_specified = (_Bool)1;
    if ((int )*(optarg + 0) == 0) {
      output_delimiter_length = (size_t )1;
    } else {
      {
      tmp___2 = strlen((char const   *)optarg);
      output_delimiter_length = tmp___2;
      }
    }
    {
    output_delimiter_string = xstrdup((char const   *)optarg);
    }
    goto switch_break;
    case_110: 
    goto switch_break;
    case_115: 
    suppress_non_delimited = (_Bool)1;
    goto switch_break;
    case_129: 
    complement = (_Bool)1;
    goto switch_break;
    case_neg_130: 
    {
    usage(0);
    }
    goto switch_break;
    case_neg_131: 
    {
    version_etc(stdout, "cut", "GNU coreutils", Version, "David M. Ihnat", "David MacKenzie",
                "Jim Meyering", (char *)((void *)0));
    exit(0);
    }
    goto switch_break;
    switch_default: 
    {
    usage(1);
    }
    switch_break: ;
  }
  while_break___9: /* CIL Label */ ;
  }

  while_break: ;
  if ((unsigned int )operating_mode == 0U) {
    {
    while (1) {
      while_continue___3: /* CIL Label */ ;
      {
      tmp___3 = gettext("you must specify a list of bytes, characters, or fields");
      error(0, 0, (char const   *)tmp___3);
      usage(1);
      }
      goto while_break___3;
    }
    while_break___13: /* CIL Label */ ;
    }

    while_break___3: ;
  }
  if ((int )delim != 0) {
    if ((unsigned int )operating_mode != 2U) {
      {
      while (1) {
        while_continue___4: /* CIL Label */ ;
        {
        tmp___4 = gettext("an input delimiter may be specified only when operating on fields");
        error(0, 0, (char const   *)tmp___4);
        usage(1);
        }
        goto while_break___4;
      }
      while_break___14: /* CIL Label */ ;
      }

      while_break___4: ;
    }
  }
  if (suppress_non_delimited) {
    if ((unsigned int )operating_mode != 2U) {
      {
      while (1) {
        while_continue___5: /* CIL Label */ ;
        {
        tmp___5 = gettext("suppressing non-delimited lines makes sense\n\tonly when operating on fields");
        error(0, 0, (char const   *)tmp___5);
        usage(1);
        }
        goto while_break___5;
      }
      while_break___15: /* CIL Label */ ;
      }

      while_break___5: ;
    }
  }
  if (output_delimiter_specified) {
    {
    range_start_ht = hash_initialize((size_t )31, (Hash_tuning const   *)((void *)0),
                                     & hash_int, & hash_compare_ints, (void (*)(void * ))((void *)0));
    }
    if ((unsigned long )range_start_ht == (unsigned long )((void *)0)) {
      {
      xalloc_die();
      }
    }
  }
  {
  tmp___8 = set_fields((char const   *)spec_list_string);
  }
  if (! tmp___8) {
    if ((unsigned int )operating_mode == 2U) {
      {
      while (1) {
        while_continue___6: /* CIL Label */ ;
        {
        tmp___6 = gettext("missing list of fields");
        error(0, 0, (char const   *)tmp___6);
        usage(1);
        }
        goto while_break___6;
      }
      while_break___16: /* CIL Label */ ;
      }

      while_break___6: ;
    } else {
      {
      while (1) {
        while_continue___7: /* CIL Label */ ;
        {
        tmp___7 = gettext("missing list of positions");
        error(0, 0, (char const   *)tmp___7);
        usage(1);
        }
        goto while_break___7;
      }
      while_break___17: /* CIL Label */ ;
      }

      while_break___7: ;
    }
  }
  if (! delim_specified) {
    delim = (unsigned char )'\t';
  }
  if ((unsigned long )output_delimiter_string == (unsigned long )((void *)0)) {
    dummy[0] = (char )delim;
    dummy[1] = (char )'\000';
    output_delimiter_string = dummy;
    output_delimiter_length = (size_t )1;
  }
  if (optind == argc) {
    {
    ok = cut_file("-");
    }
  } else {
    ok = (_Bool)1;
    {
    while (1) {
      while_continue___8: /* CIL Label */ ;

      if (! (optind < argc)) {
        goto while_break___8;
      }
      {
      tmp___9 = cut_file((char const   *)*(argv + optind));
      ok = (_Bool )((int )ok & (int )tmp___9);
      optind ++;
      }
    }
    while_break___18: /* CIL Label */ ;
    }

    while_break___8: ;
  }
  if (range_start_ht) {
    {
    hash_free(range_start_ht);
    }
  }
  if (have_read_stdin) {
    {
    tmp___11 = fclose(stdin);
    }
    if (tmp___11 == -1) {
      {
      tmp___10 = __errno_location();
      error(0, *tmp___10, "-");
      ok = (_Bool)0;
      }
    }
  }
  if (ok) {
    tmp___12 = 0;
  } else {
    tmp___12 = 1;
  }
  {
  exit(tmp___12);
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
char const   *simple_backup_suffix ;
void *xmalloc(size_t n )  __attribute__((__malloc__)) ;
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
int rpl_fseeko(FILE *fp , off_t offset , int whence ) ;
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
int volatile   exit_failure ;
size_t freadahead(FILE *fp ) ;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
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
char const   *freadptr(FILE *fp , size_t *sizep ) ;
char const   *freadptr(FILE *fp , size_t *sizep ) 
{ 
  size_t size ;

  {
  if ((unsigned long )fp->_IO_write_ptr > (unsigned long )fp->_IO_write_base) {
    return ((char const   *)((void *)0));
  }
  size = (size_t )(fp->_IO_read_end - fp->_IO_read_ptr);
  if (size == 0UL) {
    return ((char const   *)((void *)0));
  }
  *sizep = size;
  return ((char const   *)fp->_IO_read_ptr);
}
}
extern int fgetc(FILE *__stream ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror)(FILE *__stream ) ;
int freadseek(FILE *fp , size_t offset ) ;
extern  __attribute__((__nothrow__)) __off_t ( __attribute__((__leaf__)) lseek)(int __fd ,
                                                                                __off_t __offset ,
                                                                                int __whence ) ;
__inline static void freadptrinc(FILE *fp , size_t increment ) 
{ 


  {
  fp->_IO_read_ptr += increment;
  return;
}
}
int freadseek(FILE *fp , size_t offset ) 
{ 
  size_t total_buffered ;
  int fd ;
  size_t buffered ;
  size_t increment ;
  size_t tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  char buf___0[4096] ;
  size_t count ;
  unsigned long tmp___3 ;
  size_t tmp___4 ;
  __off_t tmp___5 ;
  int tmp___6 ;
  void *__cil_tmp18 ;

  {
  if (offset == 0UL) {
    return (0);
  }
  {
  total_buffered = freadahead(fp);
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (! (total_buffered > 0UL)) {
      goto while_break;
    }
    {
    tmp___0 = freadptr(fp, & buffered);
    }
    if ((unsigned long )tmp___0 != (unsigned long )((void *)0)) {
      if (buffered > 0UL) {
        if (buffered < offset) {
          tmp = buffered;
        } else {
          tmp = offset;
        }
        {
        increment = tmp;
        freadptrinc(fp, increment);
        offset -= increment;
        }
        if (offset == 0UL) {
          return (0);
        }
        total_buffered -= increment;
        if (total_buffered == 0UL) {
          goto while_break;
        }
      }
    }
    {
    tmp___1 = fgetc(fp);
    }
    if (tmp___1 == -1) {
      goto eof;
    }
    offset --;
    if (offset == 0UL) {
      return (0);
    }
    total_buffered --;
  }
  while_break___1: /* CIL Label */ ;
  }

  while_break: 
  {
  fd = fileno(fp);
  }
  if (fd >= 0) {
    {
    tmp___5 = lseek(fd, (__off_t )0, 1);
    }
    if (tmp___5 >= 0L) {
      {
      tmp___2 = rpl_fseeko(fp, (off_t )offset, 1);
      }
      return (tmp___2);
    } else {
      goto _L;
    }
  } else {
    _L: 
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (sizeof(buf___0) < offset) {
        tmp___3 = sizeof(buf___0);
      } else {
        tmp___3 = offset;
      }
      {
      count = tmp___3;
      tmp___4 = fread((void */* __restrict  */)((void *)(buf___0)), (size_t )1, count,
                      (FILE */* __restrict  */)fp);
      }
      if (tmp___4 < count) {
        goto eof;
      }
      offset -= count;
      if (! (offset > 0UL)) {
        goto while_break___0;
      }
    }
    while_break___2: /* CIL Label */ ;
    }

    while_break___0: ;
    return (0);
  }
  eof: 
  {
  tmp___6 = ferror(fp);
  }
  if (tmp___6) {
    return (-1);
  } else {
    return (0);
  }
}
}
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
void *xmemdup(void const   *p , size_t s )  __attribute__((__malloc__)) ;
void *memchr2(void const   *s , int c1_in , int c2_in , size_t n ) ;
ssize_t getndelim2(char **lineptr , size_t *linesize , size_t offset , size_t nmax ,
                   int delim1 , int delim2 , FILE *stream ) 
{ 
  size_t nbytes_avail ;
  char *read_pos ;
  ssize_t bytes_stored ;
  char *ptr ;
  size_t size ;
  _Bool found_delimiter ;
  void *tmp ;
  int c ;
  char const   *buffer ;
  size_t buffer_len ;
  char const   *end ;
  void *tmp___0 ;
  size_t newsize ;
  size_t tmp___1 ;
  char *newptr ;
  size_t newsizemax ;
  void *tmp___2 ;
  size_t copy_len ;
  int tmp___3 ;
  ssize_t tmp___4 ;

  {
  bytes_stored = (ssize_t )-1;
  ptr = *lineptr;
  size = *linesize;
  if (! ptr) {
    if (nmax < 64UL) {
      size = nmax;
    } else {
      size = (size_t )64;
    }
    {
    tmp = malloc(size);
    ptr = (char *)tmp;
    }
    if (! ptr) {
      return ((ssize_t )-1);
    }
  }
  if (size < offset) {
    goto done;
  }
  nbytes_avail = size - offset;
  read_pos = ptr + offset;
  if (nbytes_avail == 0UL) {
    if (nmax <= size) {
      goto done;
    }
  }
  if (delim1 == -1) {
    delim1 = delim2;
  } else
  if (delim2 == -1) {
    delim2 = delim1;
  }
  found_delimiter = (_Bool)0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    buffer = freadptr(stream, & buffer_len);
    }
    if (buffer) {
      if (delim1 != -1) {
        {
        tmp___0 = memchr2((void const   *)buffer, delim1, delim2, buffer_len);
        end = (char const   *)tmp___0;
        }
        if (end) {
          buffer_len = (size_t )((end - buffer) + 1L);
          found_delimiter = (_Bool)1;
        }
      }
    } else {
      {
      c = getc_unlocked(stream);
      }
      if (c == -1) {
        if ((unsigned long )read_pos == (unsigned long )ptr) {
          goto unlock_done;
        } else {
          goto while_break;
        }
      }
      if (c == delim1) {
        found_delimiter = (_Bool)1;
      } else
      if (c == delim2) {
        found_delimiter = (_Bool)1;
      }
      buffer_len = (size_t )1;
    }
    if (nbytes_avail < buffer_len + 1UL) {
      if (size < nmax) {
        if (size < 64UL) {
          tmp___1 = size + 64UL;
        } else {
          tmp___1 = 2UL * size;
        }
        newsize = tmp___1;
        if (newsize - (size_t )(read_pos - ptr) < buffer_len + 1UL) {
          newsize = ((size_t )(read_pos - ptr) + buffer_len) + 1UL;
        }
        if (size < newsize) {
          if (! (newsize <= nmax)) {
            newsize = nmax;
          }
        } else {
          newsize = nmax;
        }
        if (9223372036854775807UL < newsize - offset) {
          newsizemax = (offset + 9223372036854775807UL) + 1UL;
          if (size == newsizemax) {
            goto unlock_done;
          }
          newsize = newsizemax;
        }
        {
        nbytes_avail = newsize - (size_t )(read_pos - ptr);
        tmp___2 = realloc((void *)ptr, newsize);
        newptr = (char *)tmp___2;
        }
        if (! newptr) {
          goto unlock_done;
        }
        ptr = newptr;
        size = newsize;
        read_pos = ptr + (size - nbytes_avail);
      }
    }
    if (1UL < nbytes_avail) {
      copy_len = nbytes_avail - 1UL;
      if (buffer_len < copy_len) {
        copy_len = buffer_len;
      }
      if (buffer) {
        {
        memcpy((void */* __restrict  */)((void *)read_pos), (void const   */* __restrict  */)((void const   *)buffer),
               copy_len);
        }
      } else {
        *read_pos = (char )c;
      }
      read_pos += copy_len;
      nbytes_avail -= copy_len;
    }
    if (buffer) {
      {
      tmp___3 = freadseek(stream, buffer_len);
      }
      if (tmp___3) {
        goto unlock_done;
      }
    }
    if (! (! found_delimiter)) {
      goto while_break;
    }
  }
  while_break___0: /* CIL Label */ ;
  }

  while_break: 
  *read_pos = (char )'\000';
  bytes_stored = read_pos - (ptr + offset);
  unlock_done: ;
  done: 
  *lineptr = ptr;
  *linesize = size;
  if (bytes_stored) {
    tmp___4 = bytes_stored;
  } else {
    tmp___4 = (ssize_t )-1;
  }
  return (tmp___4);
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
void *memchr2(void const   *s , int c1_in , int c2_in , size_t n ) 
{ 
  unsigned char const   *char_ptr ;
  longword const   *longword_ptr ;
  longword repeated_one ;
  longword repeated_c1 ;
  longword repeated_c2 ;
  unsigned char c1 ;
  unsigned char c2 ;
  void *tmp ;
  size_t i ;
  longword longword1 ;
  longword longword2 ;

  {
  c1 = (unsigned char )c1_in;
  c2 = (unsigned char )c2_in;
  if ((int )c1 == (int )c2) {
    {
    tmp = memchr(s, (int )c1, n);
    }
    return (tmp);
  }
  char_ptr = (unsigned char const   *)s;
  {
  while (1) {
    while_continue: /* CIL Label */ ;

    if (n > 0UL) {
      if (! ((size_t )char_ptr % sizeof(longword ) != 0UL)) {
        goto while_break;
      }
    } else {
      goto while_break;
    }
    if ((int const   )*char_ptr == (int const   )c1) {
      return ((void *)char_ptr);
    } else
    if ((int const   )*char_ptr == (int const   )c2) {
      return ((void *)char_ptr);
    }
    n --;
    char_ptr ++;
  }
  while_break___3: /* CIL Label */ ;
  }

  while_break: 
  longword_ptr = (longword const   *)char_ptr;
  repeated_one = (longword )16843009;
  repeated_c1 = (longword )((int )c1 | ((int )c1 << 8));
  repeated_c2 = (longword )((int )c2 | ((int )c2 << 8));
  repeated_c1 |= repeated_c1 << 16;
  repeated_c2 |= repeated_c2 << 16;
  repeated_one |= (repeated_one << 31) << 1;
  repeated_c1 |= (repeated_c1 << 31) << 1;
  repeated_c2 |= (repeated_c2 << 31) << 1;
  if (8UL < sizeof(longword )) {
    i = (size_t )64;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;

      if (! (i < sizeof(longword ) * 8UL)) {
        goto while_break___0;
      }
      repeated_one |= repeated_one << i;
      repeated_c1 |= repeated_c1 << i;
      repeated_c2 |= repeated_c2 << i;
      i *= 2UL;
    }
    while_break___4: /* CIL Label */ ;
    }

    while_break___0: ;
  }
  {
  while (1) {
    while_continue___1: /* CIL Label */ ;

    if (! (n >= sizeof(longword ))) {
      goto while_break___1;
    }
    longword1 = (longword )(*longword_ptr ^ (unsigned long const   )repeated_c1);
    longword2 = (longword )(*longword_ptr ^ (unsigned long const   )repeated_c2);
    if (((((longword1 - repeated_one) & ~ longword1) | ((longword2 - repeated_one) & ~ longword2)) & (repeated_one << 7)) != 0UL) {
      goto while_break___1;
    }
    longword_ptr ++;
    n -= sizeof(longword );
  }
  while_break___5: /* CIL Label */ ;
  }

  while_break___1: 
  char_ptr = (unsigned char const   *)longword_ptr;
  {
  while (1) {
    while_continue___2: /* CIL Label */ ;

    if (! (n > 0UL)) {
      goto while_break___2;
    }
    if ((int const   )*char_ptr == (int const   )c1) {
      return ((void *)char_ptr);
    } else
    if ((int const   )*char_ptr == (int const   )c2) {
      return ((void *)char_ptr);
    }
    n --;
    char_ptr ++;
  }
  while_break___6: /* CIL Label */ ;
  }

  while_break___2: ;
  return ((void *)0);
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
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strndup)(char const   *__string ,
                                                                                                size_t __n )  __attribute__((__malloc__)) ;
char *xstrndup(char const   *string , size_t n ) 
{ 
  char *s ;
  char *tmp ;

  {
  {
  tmp = strndup(string, n);
  s = tmp;
  }
  if (! s) {
    {
    xalloc_die();
    }
  }
  return (s);
}
}
char const   *Version  =    "8.1";
