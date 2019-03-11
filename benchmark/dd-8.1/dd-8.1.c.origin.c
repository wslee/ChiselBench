typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
typedef long __clock_t;
typedef long __time_t;
typedef int __daddr_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef __mode_t mode_t;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef unsigned long size_t;
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_973126068 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_973126068 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
   __time_t tv_sec ;
   __syscall_slong_t tv_nsec ;
};
typedef __sig_atomic_t sig_atomic_t;
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
typedef __clock_t __sigchld_clock_t;
struct __anonstruct__kill_244518854 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_506069859 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_921659884 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_967955392 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __sigchld_clock_t si_utime ;
   __sigchld_clock_t si_stime ;
};
struct __anonstruct_si_addr_bnd_5259977 {
   void *_lower ;
   void *_upper ;
};
struct __anonstruct__sigfault_798529904 {
   void *si_addr ;
   short si_addr_lsb ;
   struct __anonstruct_si_addr_bnd_5259977 si_addr_bnd ;
};
struct __anonstruct__sigpoll_386613454 {
   long si_band ;
   int si_fd ;
};
struct __anonstruct__sigsys_243330693 {
   void *_call_addr ;
   int _syscall ;
   unsigned int _arch ;
};
union __anonunion__sifields_228943086 {
   int _pad[128UL / sizeof(int ) - 4UL] ;
   struct __anonstruct__kill_244518854 _kill ;
   struct __anonstruct__timer_506069859 _timer ;
   struct __anonstruct__rt_921659884 _rt ;
   struct __anonstruct__sigchld_967955392 _sigchld ;
   struct __anonstruct__sigfault_798529904 _sigfault ;
   struct __anonstruct__sigpoll_386613454 _sigpoll ;
   struct __anonstruct__sigsys_243330693 _sigsys ;
};
struct __anonstruct_siginfo_t_991430209 {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_228943086 _sifields ;
};
typedef struct __anonstruct_siginfo_t_991430209 siginfo_t;
union __anonunion___sigaction_handler_363639592 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_363639592 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
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
typedef long long xtime_t;
enum strtol_error {
    LONGINT_OK = 0,
    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,
    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
    LONGINT_INVALID = 4
} ;
typedef enum strtol_error strtol_error;
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
struct symbol_value {
   char symbol[sizeof("fdatasync")] ;
   int value ;
};
struct mtget {
   long mt_type ;
   long mt_resid ;
   long mt_dsreg ;
   long mt_gstat ;
   long mt_erreg ;
   __daddr_t mt_fileno ;
   __daddr_t mt_blkno ;
};
typedef long ptrdiff_t;
struct argv_iterator;
struct argv_iterator;
enum argv_iter_err;
enum argv_iter_err;
enum argv_iter_err {
    AI_ERR_OK = 1,
    AI_ERR_EOF = 2,
    AI_ERR_MEM = 3,
    AI_ERR_READ = 4
} ;
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
enum backup_type {
    no_backups = 0,
    simple_backups = 1,
    numbered_existing_backups = 2,
    numbered_backups = 3
} ;
struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
enum numbered_backup_result {
    BACKUP_IS_SAME_LENGTH = 0,
    BACKUP_IS_LONGER = 1,
    BACKUP_IS_NEW = 2
} ;
struct base64_decode_context {
   unsigned int i ;
   char buf[4] ;
};
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
enum canonicalize_mode_t {
    CAN_EXISTING = 0,
    CAN_ALL_BUT_LAST = 1,
    CAN_MISSING = 2
} ;
typedef enum canonicalize_mode_t canonicalize_mode_t;
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
typedef struct hash_table Hash_table;
struct cd_buf {
   int fd ;
};
typedef __ino_t ino_t;
typedef __dev_t dev_t;
struct dev_ino {
   ino_t st_ino ;
   dev_t st_dev ;
};
struct cycle_check_state {
   struct dev_ino dev_ino ;
   uintmax_t chdir_counter ;
   int magic ;
};
typedef __gid_t gid_t;
typedef __uid_t uid_t;
typedef int wchar_t;
union __anonunion___value_771759453 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_542664542 {
   int __count ;
   union __anonunion___value_771759453 __value ;
};
typedef struct __anonstruct___mbstate_t_542664542 __mbstate_t;
typedef unsigned int wint_t;
struct exclude;
struct exclude;
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
struct fs_usage {
   uintmax_t fsu_blocksize ;
   uintmax_t fsu_blocks ;
   uintmax_t fsu_bfree ;
   uintmax_t fsu_bavail ;
   _Bool fsu_bavail_top_bit_set ;
   uintmax_t fsu_files ;
   uintmax_t fsu_ffree ;
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
typedef __nlink_t nlink_t;
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
union __anonunion_fts_cycle_698394876 {
   struct hash_table *ht ;
   struct cycle_check_state *state ;
};
struct __anonstruct_FTS_467801237 {
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
typedef struct __anonstruct_FTS_467801237 FTS;
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
struct Active_dir {
   dev_t dev ;
   ino_t ino ;
   FTSENT *fts_ent ;
};
struct LCO_ent {
   dev_t st_dev ;
   _Bool opt_ok ;
};
typedef long long_time_t;
struct __anonstruct_textint_824309684 {
   _Bool negative ;
   long value ;
   size_t digits ;
};
typedef struct __anonstruct_textint_824309684 textint;
struct __anonstruct_table_528220008 {
   char const   *name ;
   int type ;
   int value ;
};
typedef struct __anonstruct_table_528220008 table;
struct __anonstruct_relative_time_110745635 {
   long year ;
   long month ;
   long day ;
   long hour ;
   long minutes ;
   long_time_t seconds ;
   long ns ;
};
typedef struct __anonstruct_relative_time_110745635 relative_time;
struct __anonstruct_parser_control_427311395 {
   char const   *input ;
   long day_ordinal ;
   int day_number ;
   int local_isdst ;
   long time_zone ;
   int meridian ;
   textint year ;
   long month ;
   long day ;
   long hour ;
   long minutes ;
   struct timespec seconds ;
   relative_time rel ;
   _Bool timespec_seen ;
   _Bool rels_seen ;
   size_t dates_seen ;
   size_t days_seen ;
   size_t local_zones_seen ;
   size_t dsts_seen ;
   size_t times_seen ;
   size_t zones_seen ;
   table local_time_zone_table[3] ;
};
typedef struct __anonstruct_parser_control_427311395 parser_control;
union YYSTYPE;
union YYSTYPE;
union YYSTYPE {
   long intval ;
   textint textintval ;
   struct timespec timespec ;
   relative_time rel ;
};
typedef union YYSTYPE YYSTYPE;
typedef unsigned char yytype_uint8;
typedef signed char yytype_int8;
typedef short yytype_int16;
union yyalloc {
   yytype_int16 yyss_alloc ;
   YYSTYPE yyvs_alloc ;
};
typedef int __clockid_t;
typedef __clockid_t clockid_t;
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;
struct termios {
   tcflag_t c_iflag ;
   tcflag_t c_oflag ;
   tcflag_t c_cflag ;
   tcflag_t c_lflag ;
   cc_t c_line ;
   cc_t c_cc[32] ;
   speed_t c_ispeed ;
   speed_t c_ospeed ;
};
typedef long __suseconds_t;
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
typedef struct timezone * __restrict  __timezone_ptr_t;
struct group {
   char *gr_name ;
   char *gr_passwd ;
   __gid_t gr_gid ;
   char **gr_mem ;
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
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
union __anonunion_id_984444735 {
   uid_t u ;
   gid_t g ;
};
struct userid {
   union __anonunion_id_984444735 id ;
   struct userid *next ;
   char name[] ;
};
typedef long intmax_t;
union __anonunion_memory_double_618071262 {
   long double value ;
   unsigned int word[((sizeof(long double ) + sizeof(unsigned int )) - 1UL) / sizeof(unsigned int )] ;
};
typedef union __anonunion_memory_double_618071262 memory_double;
struct linebuffer {
   size_t size ;
   size_t length ;
   char *buffer ;
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
enum __anonenum_mbs_align_t_481190589 {
    MBS_ALIGN_LEFT = 0,
    MBS_ALIGN_RIGHT = 1,
    MBS_ALIGN_CENTER = 2
} ;
typedef enum __anonenum_mbs_align_t_481190589 mbs_align_t;
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
typedef unsigned long longword;
struct savewd;
struct savewd;
typedef __pid_t pid_t;
enum __anonenum_state_467303978 {
    INITIAL_STATE = 0,
    FD_STATE = 1,
    FD_POST_CHDIR_STATE = 2,
    FORKING_STATE = 3,
    ERROR_STATE = 4,
    FINAL_STATE = 5
} ;
union __anonunion_val_408517849 {
   int fd ;
   int errnum ;
   pid_t child ;
};
struct savewd {
   enum __anonenum_state_467303978 state ;
   union __anonunion_val_408517849 val ;
};
struct mode_change;
struct mode_change;
struct mode_change {
   char op ;
   char flag ;
   mode_t affected ;
   mode_t value ;
   mode_t mentioned ;
};
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
struct mntent {
   char *mnt_fsname ;
   char *mnt_dir ;
   char *mnt_type ;
   char *mnt_opts ;
   int mnt_freq ;
   int mnt_passno ;
};
enum nproc_query {
    NPROC_ALL = 0,
    NPROC_CURRENT = 1,
    NPROC_CURRENT_OVERRIDABLE = 2
} ;
typedef unsigned long __cpu_mask;
struct __anonstruct_cpu_set_t_826868708 {
   __cpu_mask __bits[1024UL / (8UL * sizeof(__cpu_mask ))] ;
};
typedef struct __anonstruct_cpu_set_t_826868708 cpu_set_t;
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
struct __anonstruct_argument_194861837 {
   arg_type type ;
   union __anonunion_a_145370145 a ;
};
typedef struct __anonstruct_argument_194861837 argument;
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
struct isaac_state {
   uint32_t mm[1 << 8] ;
   uint32_t iv[8] ;
   uint32_t a ;
   uint32_t b ;
   uint32_t c ;
};
struct randread_source;
struct randread_source;
typedef uintmax_t randint;
struct randint_source;
struct randint_source;
struct randint_source {
   struct randread_source *source ;
   randint randnum ;
   randint randmax ;
};
union __anonunion_data_453857088 {
   uint32_t w[1 << 8] ;
   unsigned char b[(unsigned long )(1 << 8) * sizeof(uint32_t )] ;
};
struct isaac {
   size_t buffered ;
   struct isaac_state state ;
   union __anonunion_data_453857088 data ;
};
union __anonunion_buf_771540351 {
   char c[2UL * ((unsigned long )(1 << 8) * sizeof(uint32_t ))] ;
   struct isaac isaac ;
};
struct randread_source {
   FILE *source ;
   void (*handler)(void const   * ) ;
   void const   *handler_arg ;
   union __anonunion_buf_771540351 buf ;
};
struct __anonstruct_833865290___0 {
   char c ;
   uint32_t x ;
};
struct tokenbuffer {
   size_t size ;
   char *buffer ;
};
typedef struct tokenbuffer token_buffer;
struct obstack;
struct obstack;
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
typedef int __int32_t;
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
typedef ssize_t regoff_t;
typedef size_t __re_idx_t;
typedef size_t __re_size_t;
typedef size_t __re_long_size_t;
typedef unsigned long reg_syntax_t;
enum __anonenum_reg_errcode_t_721730718 {
    _REG_ENOSYS = -1,
    _REG_NOERROR = 0,
    _REG_NOMATCH = 1,
    _REG_BADPAT = 2,
    _REG_ECOLLATE = 3,
    _REG_ECTYPE = 4,
    _REG_EESCAPE = 5,
    _REG_ESUBREG = 6,
    _REG_EBRACK = 7,
    _REG_EPAREN = 8,
    _REG_EBRACE = 9,
    _REG_BADBR = 10,
    _REG_ERANGE = 11,
    _REG_ESPACE = 12,
    _REG_BADRPT = 13,
    _REG_EEND = 14,
    _REG_ESIZE = 15,
    _REG_ERPAREN = 16
} ;
typedef enum __anonenum_reg_errcode_t_721730718 reg_errcode_t;
struct re_pattern_buffer {
   unsigned char *buffer ;
   __re_long_size_t allocated ;
   __re_long_size_t used ;
   reg_syntax_t syntax ;
   char *fastmap ;
   unsigned char *translate ;
   size_t re_nsub ;
   unsigned int can_be_null : 1 ;
   unsigned int regs_allocated : 2 ;
   unsigned int fastmap_accurate : 1 ;
   unsigned int no_sub : 1 ;
   unsigned int not_bol : 1 ;
   unsigned int not_eol : 1 ;
   unsigned int newline_anchor : 1 ;
};
typedef struct re_pattern_buffer regex_t;
struct re_registers {
   __re_size_t num_regs ;
   regoff_t *start ;
   regoff_t *end ;
};
struct __anonstruct_regmatch_t_1035675074 {
   regoff_t rm_so ;
   regoff_t rm_eo ;
};
typedef struct __anonstruct_regmatch_t_1035675074 regmatch_t;
typedef unsigned long wctype_t;
typedef __re_idx_t Idx;
typedef __re_size_t re_hashval_t;
typedef unsigned long bitset_word_t;
typedef bitset_word_t bitset_t[4];
typedef bitset_word_t *re_bitset_ptr_t;
typedef bitset_word_t const   *re_const_bitset_ptr_t;
enum __anonenum_re_context_type_961346151 {
    INSIDE_WORD = 5,
    WORD_FIRST = 6,
    WORD_LAST = 9,
    INSIDE_NOTWORD = 10,
    LINE_FIRST = 16,
    LINE_LAST = 32,
    BUF_FIRST = 64,
    BUF_LAST = 128,
    WORD_DELIM = 256,
    NOT_WORD_DELIM = 512
} ;
typedef enum __anonenum_re_context_type_961346151 re_context_type;
struct __anonstruct_re_node_set_397540522 {
   Idx alloc ;
   Idx nelem ;
   Idx *elems ;
};
typedef struct __anonstruct_re_node_set_397540522 re_node_set;
enum __anonenum_re_token_type_t_412351811 {
    NON_TYPE = 0,
    CHARACTER = 1,
    END_OF_RE = 2,
    SIMPLE_BRACKET = 3,
    OP_BACK_REF = 4,
    OP_PERIOD = 5,
    COMPLEX_BRACKET = 6,
    OP_UTF8_PERIOD = 7,
    OP_OPEN_SUBEXP = 8,
    OP_CLOSE_SUBEXP = 9,
    OP_ALT = 10,
    OP_DUP_ASTERISK = 11,
    ANCHOR = 12,
    CONCAT = 16,
    SUBEXP = 17,
    OP_DUP_PLUS = 18,
    OP_DUP_QUESTION = 19,
    OP_OPEN_BRACKET = 20,
    OP_CLOSE_BRACKET = 21,
    OP_CHARSET_RANGE = 22,
    OP_OPEN_DUP_NUM = 23,
    OP_CLOSE_DUP_NUM = 24,
    OP_NON_MATCH_LIST = 25,
    OP_OPEN_COLL_ELEM = 26,
    OP_CLOSE_COLL_ELEM = 27,
    OP_OPEN_EQUIV_CLASS = 28,
    OP_CLOSE_EQUIV_CLASS = 29,
    OP_OPEN_CHAR_CLASS = 30,
    OP_CLOSE_CHAR_CLASS = 31,
    OP_WORD = 32,
    OP_NOTWORD = 33,
    OP_SPACE = 34,
    OP_NOTSPACE = 35,
    BACK_SLASH = 36
} ;
typedef enum __anonenum_re_token_type_t_412351811 re_token_type_t;
struct __anonstruct_re_charset_t_533161772 {
   wchar_t *mbchars ;
   wchar_t *range_starts ;
   wchar_t *range_ends ;
   wctype_t *char_classes ;
   unsigned int non_match : 1 ;
   Idx nmbchars ;
   Idx ncoll_syms ;
   Idx nequiv_classes ;
   Idx nranges ;
   Idx nchar_classes ;
};
typedef struct __anonstruct_re_charset_t_533161772 re_charset_t;
union __anonunion_opr_701081363 {
   unsigned char c ;
   re_bitset_ptr_t sbcset ;
   re_charset_t *mbcset ;
   Idx idx ;
   re_context_type ctx_type ;
};
struct __anonstruct_re_token_t_852282300 {
   union __anonunion_opr_701081363 opr ;
   re_token_type_t type : 8 ;
   unsigned int constraint : 10 ;
   unsigned int duplicated : 1 ;
   unsigned int opt_subexp : 1 ;
   unsigned int accept_mb : 1 ;
   unsigned int mb_partial : 1 ;
   unsigned int word_char : 1 ;
};
typedef struct __anonstruct_re_token_t_852282300 re_token_t;
struct re_string_t {
   unsigned char const   *raw_mbs ;
   unsigned char *mbs ;
   wint_t *wcs ;
   Idx *offsets ;
   mbstate_t cur_state ;
   Idx raw_mbs_idx ;
   Idx valid_len ;
   Idx valid_raw_len ;
   Idx bufs_len ;
   Idx cur_idx ;
   Idx raw_len ;
   Idx len ;
   Idx raw_stop ;
   Idx stop ;
   unsigned int tip_context ;
   unsigned char *trans ;
   re_const_bitset_ptr_t word_char ;
   unsigned char icase ;
   unsigned char is_utf8 ;
   unsigned char map_notascii ;
   unsigned char mbs_allocated ;
   unsigned char offsets_needed ;
   unsigned char newline_anchor ;
   unsigned char word_ops_used ;
   int mb_cur_max ;
};
typedef struct re_string_t re_string_t;
struct re_dfa_t;
struct re_dfa_t;
typedef struct re_dfa_t re_dfa_t;
struct bin_tree_t {
   struct bin_tree_t *parent ;
   struct bin_tree_t *left ;
   struct bin_tree_t *right ;
   struct bin_tree_t *first ;
   struct bin_tree_t *next ;
   re_token_t token ;
   Idx node_idx ;
};
typedef struct bin_tree_t bin_tree_t;
struct bin_tree_storage_t {
   struct bin_tree_storage_t *next ;
   bin_tree_t data[(1024UL - sizeof(void *)) / sizeof(bin_tree_t )] ;
};
typedef struct bin_tree_storage_t bin_tree_storage_t;
struct re_dfastate_t {
   re_hashval_t hash ;
   re_node_set nodes ;
   re_node_set non_eps_nodes ;
   re_node_set inveclosure ;
   re_node_set *entrance_nodes ;
   struct re_dfastate_t **trtable ;
   struct re_dfastate_t **word_trtable ;
   unsigned int context : 4 ;
   unsigned int halt : 1 ;
   unsigned int accept_mb : 1 ;
   unsigned int has_backref : 1 ;
   unsigned int has_constraint : 1 ;
};
typedef struct re_dfastate_t re_dfastate_t;
struct re_state_table_entry {
   Idx num ;
   Idx alloc ;
   re_dfastate_t **array ;
};
struct __anonstruct_state_array_t_793059239 {
   Idx next_idx ;
   Idx alloc ;
   re_dfastate_t **array ;
};
typedef struct __anonstruct_state_array_t_793059239 state_array_t;
struct __anonstruct_re_sub_match_last_t_590766955 {
   Idx node ;
   Idx str_idx ;
   state_array_t path ;
};
typedef struct __anonstruct_re_sub_match_last_t_590766955 re_sub_match_last_t;
struct __anonstruct_re_sub_match_top_t_1066558227 {
   Idx str_idx ;
   Idx node ;
   state_array_t *path ;
   Idx alasts ;
   Idx nlasts ;
   re_sub_match_last_t **lasts ;
};
typedef struct __anonstruct_re_sub_match_top_t_1066558227 re_sub_match_top_t;
struct re_backref_cache_entry {
   Idx node ;
   Idx str_idx ;
   Idx subexp_from ;
   Idx subexp_to ;
   char more ;
   char unused ;
   unsigned short eps_reachable_subexps_map ;
};
struct __anonstruct_re_match_context_t_201234058 {
   re_string_t input ;
   re_dfa_t const   *dfa ;
   int eflags ;
   Idx match_last ;
   Idx last_node ;
   re_dfastate_t **state_log ;
   Idx state_log_top ;
   Idx nbkref_ents ;
   Idx abkref_ents ;
   struct re_backref_cache_entry *bkref_ents ;
   int max_mb_elem_len ;
   Idx nsub_tops ;
   Idx asub_tops ;
   re_sub_match_top_t **sub_tops ;
};
typedef struct __anonstruct_re_match_context_t_201234058 re_match_context_t;
struct __anonstruct_re_sift_context_t_945197081 {
   re_dfastate_t **sifted_states ;
   re_dfastate_t **limited_states ;
   Idx last_node ;
   Idx last_str_idx ;
   re_node_set limits ;
};
typedef struct __anonstruct_re_sift_context_t_945197081 re_sift_context_t;
struct re_fail_stack_ent_t {
   Idx idx ;
   Idx node ;
   regmatch_t *regs ;
   re_node_set eps_via_nodes ;
};
struct re_fail_stack_t {
   Idx num ;
   Idx alloc ;
   struct re_fail_stack_ent_t *stack ;
};
struct re_dfa_t {
   re_token_t *nodes ;
   size_t nodes_alloc ;
   size_t nodes_len ;
   Idx *nexts ;
   Idx *org_indices ;
   re_node_set *edests ;
   re_node_set *eclosures ;
   re_node_set *inveclosures ;
   struct re_state_table_entry *state_table ;
   re_dfastate_t *init_state ;
   re_dfastate_t *init_state_word ;
   re_dfastate_t *init_state_nl ;
   re_dfastate_t *init_state_begbuf ;
   bin_tree_t *str_tree ;
   bin_tree_storage_t *str_tree_storage ;
   re_bitset_ptr_t sb_char ;
   int str_tree_storage_idx ;
   re_hashval_t state_hash_mask ;
   Idx init_node ;
   Idx nbackref ;
   bitset_word_t used_bkref_map ;
   bitset_word_t completed_bkref_map ;
   unsigned int has_plural_match : 1 ;
   unsigned int has_mb_node : 1 ;
   unsigned int is_utf8 : 1 ;
   unsigned int map_notascii : 1 ;
   unsigned int word_ops_used : 1 ;
   int mb_cur_max ;
   bitset_t word_char ;
   reg_syntax_t syntax ;
   Idx *subexp_map ;
};
enum __anonenum_bracket_elem_type_1002392186 {
    SB_CHAR = 0,
    MB_CHAR = 1,
    EQUIV_CLASS = 2,
    COLL_SYM = 3,
    CHAR_CLASS = 4
} ;
typedef enum __anonenum_bracket_elem_type_1002392186 bracket_elem_type;
union __anonunion_opr_675232149 {
   unsigned char ch ;
   unsigned char *name ;
   wchar_t wch ;
};
struct __anonstruct_bracket_elem_t_935412788 {
   bracket_elem_type type ;
   union __anonunion_opr_675232149 opr ;
};
typedef struct __anonstruct_bracket_elem_t_935412788 bracket_elem_t;
struct dests_alloc {
   re_node_set dests_node[256] ;
   bitset_t dests_ch[256] ;
};
struct saved_cwd {
   int desc ;
   char *name ;
};
union __anonunion_875737058 {
   int __in ;
   int __i ;
};
union __anonunion_875737059 {
   int __in ;
   int __i ;
};
union __anonunion_875737060 {
   int __in ;
   int __i ;
};
struct sha1_ctx {
   uint32_t A ;
   uint32_t B ;
   uint32_t C ;
   uint32_t D ;
   uint32_t E ;
   uint32_t total[2] ;
   uint32_t buflen ;
   uint32_t buffer[32] ;
};
struct __anonstruct_833865290___1 {
   char c ;
   uint32_t x ;
};
struct sha256_ctx {
   uint32_t state[8] ;
   uint32_t total[2] ;
   size_t buflen ;
   uint32_t buffer[32] ;
};
struct __anonstruct_833865290___2 {
   char c ;
   uint32_t x ;
};
typedef unsigned long uint64_t;
typedef uint64_t u64;
struct sha512_ctx {
   u64 state[8] ;
   u64 total[2] ;
   size_t buflen ;
   u64 buffer[32] ;
};
struct __anonstruct_972123420 {
   char c ;
   u64 x ;
};
struct numname {
   int num ;
   char const   name[8] ;
};
typedef void *iconv_t;
union __anonunion_tmp_771759453 {
   unsigned int align ;
   char buf[4096] ;
};
struct mbiter_multi {
   char const   *limit ;
   _Bool in_shift ;
   mbstate_t state ;
   _Bool next_done ;
   struct mbchar cur ;
};
typedef struct mbiter_multi mbi_iterator_t;
typedef unsigned char uint8_t;
typedef uint32_t ucs4_t;
struct fs_res {
   dev_t dev ;
   int resolution ;
   _Bool exact ;
};
/* #pragma merger("0","dd.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) raise)(int __sig ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) sigemptyset)(sigset_t *__set ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) sigaddset)(sigset_t *__set ,
                                                                                                int __signo ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) sigismember)(sigset_t const   *__set ,
                                                                                                  int __signo ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) sigprocmask)(int __how ,
                                                                                  sigset_t const   * __restrict  __set ,
                                                                                  sigset_t * __restrict  __oset ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) sigaction)(int __sig ,
                                                                                struct sigaction  const  * __restrict  __act ,
                                                                                struct sigaction * __restrict  __oact ) ;
extern int optind ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getopt_long)(int ___argc ,
                                                                                  char * const  *___argv ,
                                                                                  char const   *__shortopts ,
                                                                                  struct option  const  *__longopts ,
                                                                                  int *__longind ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd ,
                                                                                            struct stat *__buf ) ;
extern  __attribute__((__nothrow__)) __off_t ( __attribute__((__leaf__)) lseek)(int __fd ,
                                                                                __off_t __offset ,
                                                                                int __whence ) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
extern int fsync(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getpagesize)(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ftruncate)(int __fd ,
                                                                                __off_t __length ) ;
extern int fdatasync(int __fildes ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memcpy)(void * __restrict  __dest ,
                                                                                                 void const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strncmp)(char const   *__s1 ,
                                                                                                char const   *__s2 ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strchr)(char const   *__s ,
                                                                                               int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int *( __attribute__((__leaf__)) __errno_location)(void)  __attribute__((__const__)) ;
char const   *Version ;
extern int fcntl(int __fd , int __cmd  , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) posix_fadvise)(int __fd ,
                                                                                    off_t __offset ,
                                                                                    off_t __len ,
                                                                                    int __advise ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) toupper)(int __c ) ;
__inline static unsigned char to_uchar(char ch ) 
{ 


  {
  return ((unsigned char )ch);
}
}
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) setlocale)(int __category ,
                                                                                  char const   *__locale ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) gettext)(char const   *__msgid )  __attribute__((__format_arg__(1))) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) ngettext)(char const   *__msgid1 ,
                                                                                 char const   *__msgid2 ,
                                                                                 unsigned long __n )  __attribute__((__format_arg__(1),
__format_arg__(2))) ;
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
void *xmalloc(size_t n )  __attribute__((__malloc__)) ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int fputs_unlocked(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
char *last_component(char const   *name ) ;
void close_stdout(void) ;
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
  char *__cil_tmp12 ;
  char *__cil_tmp13 ;
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;
  char *__cil_tmp16 ;

  {
  {
  tmp = last_component(program_name);
  tmp___0 = gettext("\nReport %s bugs to %s\n");
  printf((char const   */* __restrict  */)tmp___0, tmp, "bug-coreutils@gnu.org");
  tmp___1 = gettext("%s home page: <http://www.gnu.org/software/%s/>\n");
  printf((char const   */* __restrict  */)tmp___1, "GNU coreutils", "coreutils");
  tmp___2 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
  fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
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
      printf((char const   */* __restrict  */)tmp___5, tmp___4);
      }
    }
  }
  {
  tmp___7 = last_component(program_name);
  tmp___8 = gettext("For complete documentation, run: info coreutils \'%s invocation\'\n");
  printf((char const   */* __restrict  */)tmp___8, tmp___7);
  }
  return;
}
}
 __attribute__((__noreturn__)) void usage(int status ) ;
int close_stream(FILE *stream ) ;
extern void error(int __status , int __errnum , char const   *__format  , ...) ;
int fd_reopen(int desired_fd , char const   *file , int flags___0 , mode_t mode ) ;
xtime_t gethrxtime(void) ;
strtol_error xstrtoumax(char const   *s , char **ptr , int strtol_base , uintmax_t *val ,
                        char const   *valid_suffixes ) ;
char *human_readable(uintmax_t n , char *buf___0 , int opts , uintmax_t from_block_size ,
                     uintmax_t to_block_size ) ;
__inline static void ignore_value(int i ) 
{ 


  {
  return;
}
}
void parse_long_options(int argc , char **argv , char const   *command_name , char const   *package ,
                        char const   *version , void (*usage_func)(int  )  , ...) ;
char const   *quote(char const   *name ) ;
char *quotearg_n_style_mem(int n , enum quoting_style s , char const   *arg , size_t argsize ) ;
static void process_signals(void) ;
static char const   *input_file  =    (char const   *)((void *)0);
static char const   *output_file  =    (char const   *)((void *)0);
static size_t page_size  ;
static size_t input_blocksize  =    (size_t )0;
static size_t output_blocksize  =    (size_t )0;
static size_t conversion_blocksize  =    (size_t )0;
static uintmax_t skip_records  =    (uintmax_t )0;
static uintmax_t seek_records  =    (uintmax_t )0;
static uintmax_t max_records  =    (uintmax_t )-1;
static int conversions_mask  =    0;
static int input_flags  =    0;
static int output_flags  =    0;
static int status_flags  =    0;
static _Bool translation_needed  =    (_Bool)0;
static uintmax_t w_partial  =    (uintmax_t )0;
static uintmax_t w_full  =    (uintmax_t )0;
static uintmax_t r_partial  =    (uintmax_t )0;
static uintmax_t r_full  =    (uintmax_t )0;
static uintmax_t w_bytes  =    (uintmax_t )0;
static xtime_t start_time  ;
static _Bool input_seekable  ;
static int input_seek_errno  ;
static uintmax_t input_offset  ;
static _Bool input_offset_overflow  ;
static uintmax_t r_truncate  =    (uintmax_t )0;
static char newline_character  =    (char )'\n';
static char space_character  =    (char )' ';
static char *obuf  ;
static size_t oc  =    (size_t )0;
static size_t col  =    (size_t )0;
static sigset_t caught_signals  ;
static sig_atomic_t volatile   interrupt_signal  ;
static sig_atomic_t volatile   info_signal_count  ;
static ssize_t (*iread_fnc)(int fd , char *buf , size_t size )  ;
static struct symbol_value  const  conversions[16]  = 
  {      {{(char )'a', (char )'s', (char )'c', (char )'i', (char )'i', (char )'\000'},
      2049}, 
        {{(char )'e', (char )'b', (char )'c', (char )'d', (char )'i', (char )'c', (char )'\000'},
      2050}, 
        {{(char )'i', (char )'b', (char )'m', (char )'\000'}, 2052}, 
        {{(char )'b', (char )'l', (char )'o', (char )'c', (char )'k', (char )'\000'},
      2056}, 
        {{(char )'u', (char )'n', (char )'b', (char )'l', (char )'o', (char )'c', (char )'k',
       (char )'\000'}, 2064}, 
        {{(char )'l', (char )'c', (char )'a', (char )'s', (char )'e', (char )'\000'},
      2080}, 
        {{(char )'u', (char )'c', (char )'a', (char )'s', (char )'e', (char )'\000'},
      2112}, 
        {{(char )'s', (char )'w', (char )'a', (char )'b', (char )'\000'}, 2176}, 
        {{(char )'n', (char )'o', (char )'e', (char )'r', (char )'r', (char )'o', (char )'r',
       (char )'\000'}, 256}, 
        {{(char )'n', (char )'o', (char )'c', (char )'r', (char )'e', (char )'a', (char )'t',
       (char )'\000'}, 4096}, 
        {{(char )'e', (char )'x', (char )'c', (char )'l', (char )'\000'}, 8192}, 
        {{(char )'n', (char )'o', (char )'t', (char )'r', (char )'u', (char )'n', (char )'c',
       (char )'\000'}, 512}, 
        {{(char )'s', (char )'y', (char )'n', (char )'c', (char )'\000'}, 1024}, 
        {{(char )'f', (char )'d', (char )'a', (char )'t', (char )'a', (char )'s', (char )'y',
       (char )'n', (char )'c', (char )'\000'}, 16384}, 
        {{(char )'f', (char )'s', (char )'y', (char )'n', (char )'c', (char )'\000'},
      32768}, 
        {{(char )'\000'}, 0}};
static struct symbol_value  const  flags[15]  = 
  {      {{(char )'a', (char )'p', (char )'p', (char )'e', (char )'n', (char )'d', (char )'\000'},
      1024}, 
        {{(char )'b', (char )'i', (char )'n', (char )'a', (char )'r', (char )'y', (char )'\000'},
      0}, 
        {{(char )'c', (char )'i', (char )'o', (char )'\000'}, 0}, 
        {{(char )'d', (char )'i', (char )'r', (char )'e', (char )'c', (char )'t', (char )'\000'},
      16384}, 
        {{(char )'d', (char )'i', (char )'r', (char )'e', (char )'c', (char )'t', (char )'o',
       (char )'r', (char )'y', (char )'\000'}, 65536}, 
        {{(char )'d', (char )'s', (char )'y', (char )'n', (char )'c', (char )'\000'},
      4096}, 
        {{(char )'n', (char )'o', (char )'a', (char )'t', (char )'i', (char )'m', (char )'e',
       (char )'\000'}, 262144}, 
        {{(char )'n', (char )'o', (char )'c', (char )'t', (char )'t', (char )'y', (char )'\000'},
      256}, 
        {{(char )'n', (char )'o', (char )'f', (char )'o', (char )'l', (char )'l', (char )'o',
       (char )'w', (char )'\000'}, 131072}, 
        {{(char )'n', (char )'o', (char )'l', (char )'i', (char )'n', (char )'k', (char )'s',
       (char )'\000'}, 0}, 
        {{(char )'n', (char )'o', (char )'n', (char )'b', (char )'l', (char )'o', (char )'c',
       (char )'k', (char )'\000'}, 2048}, 
        {{(char )'s', (char )'y', (char )'n', (char )'c', (char )'\000'}, 1052672}, 
        {{(char )'t', (char )'e', (char )'x', (char )'t', (char )'\000'}, 0}, 
        {{(char )'f', (char )'u', (char )'l', (char )'l', (char )'b', (char )'l', (char )'o',
       (char )'c', (char )'k', (char )'\000'}, 1}, 
        {{(char )'\000'}, 0}};
static struct symbol_value  const  statuses[2]  = {      {{(char )'n', (char )'o', (char )'x', (char )'f', (char )'e', (char )'r', (char )'\000'},
      1}, 
        {{(char )'\000'}, 0}};
static unsigned char trans_table[256]  ;
static char const   ascii_to_ebcdic[256]  = 
  {      (char const   )'\000',      (char const   )'\001',      (char const   )'\002',      (char const   )'\003', 
        (char const   )'7',      (char const   )'-',      (char const   )'.',      (char const   )'/', 
        (char const   )'\026',      (char const   )'\005',      (char const   )'%',      (char const   )'\v', 
        (char const   )'\f',      (char const   )'\r',      (char const   )'\016',      (char const   )'\017', 
        (char const   )'\020',      (char const   )'\021',      (char const   )'\022',      (char const   )'\023', 
        (char const   )'<',      (char const   )'=',      (char const   )'2',      (char const   )'&', 
        (char const   )'\030',      (char const   )'\031',      (char const   )'?',      (char const   )'\'', 
        (char const   )'\034',      (char const   )'\035',      (char const   )'\036',      (char const   )'\037', 
        (char const   )'@',      (char const   )'O',      (char const   )'\177',      (char const   )'{', 
        (char const   )'[',      (char const   )'l',      (char const   )'P',      (char const   )'}', 
        (char const   )'M',      (char const   )']',      (char const   )'\\',      (char const   )'N', 
        (char const   )'k',      (char const   )'`',      (char const   )'K',      (char const   )'a', 
        (char const   )'\360',      (char const   )'\361',      (char const   )'\362',      (char const   )'\363', 
        (char const   )'\364',      (char const   )'\365',      (char const   )'\366',      (char const   )'\367', 
        (char const   )'\370',      (char const   )'\371',      (char const   )'z',      (char const   )'^', 
        (char const   )'L',      (char const   )'~',      (char const   )'n',      (char const   )'o', 
        (char const   )'|',      (char const   )'\301',      (char const   )'\302',      (char const   )'\303', 
        (char const   )'\304',      (char const   )'\305',      (char const   )'\306',      (char const   )'\307', 
        (char const   )'\310',      (char const   )'\311',      (char const   )'\321',      (char const   )'\322', 
        (char const   )'\323',      (char const   )'\324',      (char const   )'\325',      (char const   )'\326', 
        (char const   )'\327',      (char const   )'\330',      (char const   )'\331',      (char const   )'\342', 
        (char const   )'\343',      (char const   )'\344',      (char const   )'\345',      (char const   )'\346', 
        (char const   )'\347',      (char const   )'\350',      (char const   )'\351',      (char const   )'J', 
        (char const   )'\340',      (char const   )'Z',      (char const   )'_',      (char const   )'m', 
        (char const   )'y',      (char const   )'\201',      (char const   )'\202',      (char const   )'\203', 
        (char const   )'\204',      (char const   )'\205',      (char const   )'\206',      (char const   )'\207', 
        (char const   )'\210',      (char const   )'\211',      (char const   )'\221',      (char const   )'\222', 
        (char const   )'\223',      (char const   )'\224',      (char const   )'\225',      (char const   )'\226', 
        (char const   )'\227',      (char const   )'\230',      (char const   )'\231',      (char const   )'\242', 
        (char const   )'\243',      (char const   )'\244',      (char const   )'\245',      (char const   )'\246', 
        (char const   )'\247',      (char const   )'\250',      (char const   )'\251',      (char const   )'\300', 
        (char const   )'j',      (char const   )'\320',      (char const   )'\241',      (char const   )'\a', 
        (char const   )' ',      (char const   )'!',      (char const   )'\"',      (char const   )'#', 
        (char const   )'$',      (char const   )'\025',      (char const   )'\006',      (char const   )'\027', 
        (char const   )'(',      (char const   )')',      (char const   )'*',      (char const   )'+', 
        (char const   )',',      (char const   )'\t',      (char const   )'\n',      (char const   )'\033', 
        (char const   )'0',      (char const   )'1',      (char const   )'\032',      (char const   )'3', 
        (char const   )'4',      (char const   )'5',      (char const   )'6',      (char const   )'\b', 
        (char const   )'8',      (char const   )'9',      (char const   )':',      (char const   )';', 
        (char const   )'\004',      (char const   )'\024',      (char const   )'>',      (char const   )'\341', 
        (char const   )'A',      (char const   )'B',      (char const   )'C',      (char const   )'D', 
        (char const   )'E',      (char const   )'F',      (char const   )'G',      (char const   )'H', 
        (char const   )'I',      (char const   )'Q',      (char const   )'R',      (char const   )'S', 
        (char const   )'T',      (char const   )'U',      (char const   )'V',      (char const   )'W', 
        (char const   )'X',      (char const   )'Y',      (char const   )'b',      (char const   )'c', 
        (char const   )'d',      (char const   )'e',      (char const   )'f',      (char const   )'g', 
        (char const   )'h',      (char const   )'i',      (char const   )'p',      (char const   )'q', 
        (char const   )'r',      (char const   )'s',      (char const   )'t',      (char const   )'u', 
        (char const   )'v',      (char const   )'w',      (char const   )'x',      (char const   )'\200', 
        (char const   )'\212',      (char const   )'\213',      (char const   )'\214',      (char const   )'\215', 
        (char const   )'\216',      (char const   )'\217',      (char const   )'\220',      (char const   )'\232', 
        (char const   )'\233',      (char const   )'\234',      (char const   )'\235',      (char const   )'\236', 
        (char const   )'\237',      (char const   )'\240',      (char const   )'\252',      (char const   )'\253', 
        (char const   )'\254',      (char const   )'\255',      (char const   )'\256',      (char const   )'\257', 
        (char const   )'\260',      (char const   )'\261',      (char const   )'\262',      (char const   )'\263', 
        (char const   )'\264',      (char const   )'\265',      (char const   )'\266',      (char const   )'\267', 
        (char const   )'\270',      (char const   )'\271',      (char const   )'\272',      (char const   )'\273', 
        (char const   )'\274',      (char const   )'\275',      (char const   )'\276',      (char const   )'\277', 
        (char const   )'\312',      (char const   )'\313',      (char const   )'\314',      (char const   )'\315', 
        (char const   )'\316',      (char const   )'\317',      (char const   )'\332',      (char const   )'\333', 
        (char const   )'\334',      (char const   )'\335',      (char const   )'\336',      (char const   )'\337', 
        (char const   )'\352',      (char const   )'\353',      (char const   )'\354',      (char const   )'\355', 
        (char const   )'\356',      (char const   )'\357',      (char const   )'\372',      (char const   )'\373', 
        (char const   )'\374',      (char const   )'\375',      (char const   )'\376',      (char const   )'\377'};
static char const   ascii_to_ibm[256]  = 
  {      (char const   )'\000',      (char const   )'\001',      (char const   )'\002',      (char const   )'\003', 
        (char const   )'7',      (char const   )'-',      (char const   )'.',      (char const   )'/', 
        (char const   )'\026',      (char const   )'\005',      (char const   )'%',      (char const   )'\v', 
        (char const   )'\f',      (char const   )'\r',      (char const   )'\016',      (char const   )'\017', 
        (char const   )'\020',      (char const   )'\021',      (char const   )'\022',      (char const   )'\023', 
        (char const   )'<',      (char const   )'=',      (char const   )'2',      (char const   )'&', 
        (char const   )'\030',      (char const   )'\031',      (char const   )'?',      (char const   )'\'', 
        (char const   )'\034',      (char const   )'\035',      (char const   )'\036',      (char const   )'\037', 
        (char const   )'@',      (char const   )'Z',      (char const   )'\177',      (char const   )'{', 
        (char const   )'[',      (char const   )'l',      (char const   )'P',      (char const   )'}', 
        (char const   )'M',      (char const   )']',      (char const   )'\\',      (char const   )'N', 
        (char const   )'k',      (char const   )'`',      (char const   )'K',      (char const   )'a', 
        (char const   )'\360',      (char const   )'\361',      (char const   )'\362',      (char const   )'\363', 
        (char const   )'\364',      (char const   )'\365',      (char const   )'\366',      (char const   )'\367', 
        (char const   )'\370',      (char const   )'\371',      (char const   )'z',      (char const   )'^', 
        (char const   )'L',      (char const   )'~',      (char const   )'n',      (char const   )'o', 
        (char const   )'|',      (char const   )'\301',      (char const   )'\302',      (char const   )'\303', 
        (char const   )'\304',      (char const   )'\305',      (char const   )'\306',      (char const   )'\307', 
        (char const   )'\310',      (char const   )'\311',      (char const   )'\321',      (char const   )'\322', 
        (char const   )'\323',      (char const   )'\324',      (char const   )'\325',      (char const   )'\326', 
        (char const   )'\327',      (char const   )'\330',      (char const   )'\331',      (char const   )'\342', 
        (char const   )'\343',      (char const   )'\344',      (char const   )'\345',      (char const   )'\346', 
        (char const   )'\347',      (char const   )'\350',      (char const   )'\351',      (char const   )'\255', 
        (char const   )'\340',      (char const   )'\275',      (char const   )'_',      (char const   )'m', 
        (char const   )'y',      (char const   )'\201',      (char const   )'\202',      (char const   )'\203', 
        (char const   )'\204',      (char const   )'\205',      (char const   )'\206',      (char const   )'\207', 
        (char const   )'\210',      (char const   )'\211',      (char const   )'\221',      (char const   )'\222', 
        (char const   )'\223',      (char const   )'\224',      (char const   )'\225',      (char const   )'\226', 
        (char const   )'\227',      (char const   )'\230',      (char const   )'\231',      (char const   )'\242', 
        (char const   )'\243',      (char const   )'\244',      (char const   )'\245',      (char const   )'\246', 
        (char const   )'\247',      (char const   )'\250',      (char const   )'\251',      (char const   )'\300', 
        (char const   )'O',      (char const   )'\320',      (char const   )'\241',      (char const   )'\a', 
        (char const   )' ',      (char const   )'!',      (char const   )'\"',      (char const   )'#', 
        (char const   )'$',      (char const   )'\025',      (char const   )'\006',      (char const   )'\027', 
        (char const   )'(',      (char const   )')',      (char const   )'*',      (char const   )'+', 
        (char const   )',',      (char const   )'\t',      (char const   )'\n',      (char const   )'\033', 
        (char const   )'0',      (char const   )'1',      (char const   )'\032',      (char const   )'3', 
        (char const   )'4',      (char const   )'5',      (char const   )'6',      (char const   )'\b', 
        (char const   )'8',      (char const   )'9',      (char const   )':',      (char const   )';', 
        (char const   )'\004',      (char const   )'\024',      (char const   )'>',      (char const   )'\341', 
        (char const   )'A',      (char const   )'B',      (char const   )'C',      (char const   )'D', 
        (char const   )'E',      (char const   )'F',      (char const   )'G',      (char const   )'H', 
        (char const   )'I',      (char const   )'Q',      (char const   )'R',      (char const   )'S', 
        (char const   )'T',      (char const   )'U',      (char const   )'V',      (char const   )'W', 
        (char const   )'X',      (char const   )'Y',      (char const   )'b',      (char const   )'c', 
        (char const   )'d',      (char const   )'e',      (char const   )'f',      (char const   )'g', 
        (char const   )'h',      (char const   )'i',      (char const   )'p',      (char const   )'q', 
        (char const   )'r',      (char const   )'s',      (char const   )'t',      (char const   )'u', 
        (char const   )'v',      (char const   )'w',      (char const   )'x',      (char const   )'\200', 
        (char const   )'\212',      (char const   )'\213',      (char const   )'\214',      (char const   )'\215', 
        (char const   )'\216',      (char const   )'\217',      (char const   )'\220',      (char const   )'\232', 
        (char const   )'\233',      (char const   )'\234',      (char const   )'\235',      (char const   )'\236', 
        (char const   )'\237',      (char const   )'\240',      (char const   )'\252',      (char const   )'\253', 
        (char const   )'\254',      (char const   )'\255',      (char const   )'\256',      (char const   )'\257', 
        (char const   )'\260',      (char const   )'\261',      (char const   )'\262',      (char const   )'\263', 
        (char const   )'\264',      (char const   )'\265',      (char const   )'\266',      (char const   )'\267', 
        (char const   )'\270',      (char const   )'\271',      (char const   )'\272',      (char const   )'\273', 
        (char const   )'\274',      (char const   )'\275',      (char const   )'\276',      (char const   )'\277', 
        (char const   )'\312',      (char const   )'\313',      (char const   )'\314',      (char const   )'\315', 
        (char const   )'\316',      (char const   )'\317',      (char const   )'\332',      (char const   )'\333', 
        (char const   )'\334',      (char const   )'\335',      (char const   )'\336',      (char const   )'\337', 
        (char const   )'\352',      (char const   )'\353',      (char const   )'\354',      (char const   )'\355', 
        (char const   )'\356',      (char const   )'\357',      (char const   )'\372',      (char const   )'\373', 
        (char const   )'\374',      (char const   )'\375',      (char const   )'\376',      (char const   )'\377'};
static char const   ebcdic_to_ascii[256]  = 
  {      (char const   )'\000',      (char const   )'\001',      (char const   )'\002',      (char const   )'\003', 
        (char const   )'\234',      (char const   )'\t',      (char const   )'\206',      (char const   )'\177', 
        (char const   )'\227',      (char const   )'\215',      (char const   )'\216',      (char const   )'\v', 
        (char const   )'\f',      (char const   )'\r',      (char const   )'\016',      (char const   )'\017', 
        (char const   )'\020',      (char const   )'\021',      (char const   )'\022',      (char const   )'\023', 
        (char const   )'\235',      (char const   )'\205',      (char const   )'\b',      (char const   )'\207', 
        (char const   )'\030',      (char const   )'\031',      (char const   )'\222',      (char const   )'\217', 
        (char const   )'\034',      (char const   )'\035',      (char const   )'\036',      (char const   )'\037', 
        (char const   )'\200',      (char const   )'\201',      (char const   )'\202',      (char const   )'\203', 
        (char const   )'\204',      (char const   )'\n',      (char const   )'\027',      (char const   )'\033', 
        (char const   )'\210',      (char const   )'\211',      (char const   )'\212',      (char const   )'\213', 
        (char const   )'\214',      (char const   )'\005',      (char const   )'\006',      (char const   )'\a', 
        (char const   )'\220',      (char const   )'\221',      (char const   )'\026',      (char const   )'\223', 
        (char const   )'\224',      (char const   )'\225',      (char const   )'\226',      (char const   )'\004', 
        (char const   )'\230',      (char const   )'\231',      (char const   )'\232',      (char const   )'\233', 
        (char const   )'\024',      (char const   )'\025',      (char const   )'\236',      (char const   )'\032', 
        (char const   )' ',      (char const   )'\240',      (char const   )'\241',      (char const   )'\242', 
        (char const   )'\243',      (char const   )'\244',      (char const   )'\245',      (char const   )'\246', 
        (char const   )'\247',      (char const   )'\250',      (char const   )'[',      (char const   )'.', 
        (char const   )'<',      (char const   )'(',      (char const   )'+',      (char const   )'!', 
        (char const   )'&',      (char const   )'\251',      (char const   )'\252',      (char const   )'\253', 
        (char const   )'\254',      (char const   )'\255',      (char const   )'\256',      (char const   )'\257', 
        (char const   )'\260',      (char const   )'\261',      (char const   )']',      (char const   )'$', 
        (char const   )'*',      (char const   )')',      (char const   )';',      (char const   )'^', 
        (char const   )'-',      (char const   )'/',      (char const   )'\262',      (char const   )'\263', 
        (char const   )'\264',      (char const   )'\265',      (char const   )'\266',      (char const   )'\267', 
        (char const   )'\270',      (char const   )'\271',      (char const   )'|',      (char const   )',', 
        (char const   )'%',      (char const   )'_',      (char const   )'>',      (char const   )'?', 
        (char const   )'\272',      (char const   )'\273',      (char const   )'\274',      (char const   )'\275', 
        (char const   )'\276',      (char const   )'\277',      (char const   )'\300',      (char const   )'\301', 
        (char const   )'\302',      (char const   )'`',      (char const   )':',      (char const   )'#', 
        (char const   )'@',      (char const   )'\'',      (char const   )'=',      (char const   )'\"', 
        (char const   )'\303',      (char const   )'a',      (char const   )'b',      (char const   )'c', 
        (char const   )'d',      (char const   )'e',      (char const   )'f',      (char const   )'g', 
        (char const   )'h',      (char const   )'i',      (char const   )'\304',      (char const   )'\305', 
        (char const   )'\306',      (char const   )'\307',      (char const   )'\310',      (char const   )'\311', 
        (char const   )'\312',      (char const   )'j',      (char const   )'k',      (char const   )'l', 
        (char const   )'m',      (char const   )'n',      (char const   )'o',      (char const   )'p', 
        (char const   )'q',      (char const   )'r',      (char const   )'\313',      (char const   )'\314', 
        (char const   )'\315',      (char const   )'\316',      (char const   )'\317',      (char const   )'\320', 
        (char const   )'\321',      (char const   )'~',      (char const   )'s',      (char const   )'t', 
        (char const   )'u',      (char const   )'v',      (char const   )'w',      (char const   )'x', 
        (char const   )'y',      (char const   )'z',      (char const   )'\322',      (char const   )'\323', 
        (char const   )'\324',      (char const   )'\325',      (char const   )'\326',      (char const   )'\327', 
        (char const   )'\330',      (char const   )'\331',      (char const   )'\332',      (char const   )'\333', 
        (char const   )'\334',      (char const   )'\335',      (char const   )'\336',      (char const   )'\337', 
        (char const   )'\340',      (char const   )'\341',      (char const   )'\342',      (char const   )'\343', 
        (char const   )'\344',      (char const   )'\345',      (char const   )'\346',      (char const   )'\347', 
        (char const   )'{',      (char const   )'A',      (char const   )'B',      (char const   )'C', 
        (char const   )'D',      (char const   )'E',      (char const   )'F',      (char const   )'G', 
        (char const   )'H',      (char const   )'I',      (char const   )'\350',      (char const   )'\351', 
        (char const   )'\352',      (char const   )'\353',      (char const   )'\354',      (char const   )'\355', 
        (char const   )'}',      (char const   )'J',      (char const   )'K',      (char const   )'L', 
        (char const   )'M',      (char const   )'N',      (char const   )'O',      (char const   )'P', 
        (char const   )'Q',      (char const   )'R',      (char const   )'\356',      (char const   )'\357', 
        (char const   )'\360',      (char const   )'\361',      (char const   )'\362',      (char const   )'\363', 
        (char const   )'\\',      (char const   )'\237',      (char const   )'S',      (char const   )'T', 
        (char const   )'U',      (char const   )'V',      (char const   )'W',      (char const   )'X', 
        (char const   )'Y',      (char const   )'Z',      (char const   )'\364',      (char const   )'\365', 
        (char const   )'\366',      (char const   )'\367',      (char const   )'\370',      (char const   )'\371', 
        (char const   )'0',      (char const   )'1',      (char const   )'2',      (char const   )'3', 
        (char const   )'4',      (char const   )'5',      (char const   )'6',      (char const   )'7', 
        (char const   )'8',      (char const   )'9',      (char const   )'\372',      (char const   )'\373', 
        (char const   )'\374',      (char const   )'\375',      (char const   )'\376',      (char const   )'\377'};
static _Bool close_stdout_required  =    (_Bool)1;
static void maybe_close_stdout(void) 
{ 
  int tmp ;

  {
  if (close_stdout_required) {
    {
    close_stdout();
    }
  } else {
    {
    tmp = close_stream(stderr);
    }
    if (tmp != 0) {
      {
      _exit(1);
      }
    }
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
  char *tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;
  char *tmp___12 ;
  char *tmp___13 ;
  char *tmp___14 ;
  char *tmp___15 ;
  char *tmp___16 ;
  char *tmp___17 ;
  char const   *siginfo_name ;
  char *tmp___21 ;
  char *tmp___22 ;
  char *tmp___23 ;
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

  {
  if (status != 0) {
    {
    tmp = gettext("Try `%s --help\' for more information.\n");
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp,
            program_name);
    }
  } else {
    {
    tmp___0 = gettext("Usage: %s [OPERAND]...\n  or:  %s OPTION\n");
    printf((char const   */* __restrict  */)tmp___0, program_name, program_name);
    tmp___1 = gettext("Copy a file, converting and formatting according to the operands.\n\n  bs=BYTES        read and write BYTES bytes at a time (also see ibs=,obs=)\n  cbs=BYTES       convert BYTES bytes at a time\n  conv=CONVS      convert the file as per the comma separated symbol list\n  count=BLOCKS    copy only BLOCKS input blocks\n  ibs=BYTES       read BYTES bytes at a time (default: 512)\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___1, (FILE */* __restrict  */)stdout);
    tmp___2 = gettext("  if=FILE         read from FILE instead of stdin\n  iflag=FLAGS     read as per the comma separated symbol list\n  obs=BYTES       write BYTES bytes at a time (default: 512)\n  of=FILE         write to FILE instead of stdout\n  oflag=FLAGS     write as per the comma separated symbol list\n  seek=BLOCKS     skip BLOCKS obs-sized blocks at start of output\n  skip=BLOCKS     skip BLOCKS ibs-sized blocks at start of input\n  status=noxfer   suppress transfer statistics\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___2, (FILE */* __restrict  */)stdout);
    tmp___3 = gettext("\nBLOCKS and BYTES may be followed by the following multiplicative suffixes:\nc =1, w =2, b =512, kB =1000, K =1024, MB =1000*1000, M =1024*1024, xM =M\nGB =1000*1000*1000, G =1024*1024*1024, and so on for T, P, E, Z, Y.\n\nEach CONV symbol may be:\n\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___3, (FILE */* __restrict  */)stdout);
    tmp___4 = gettext("  ascii     from EBCDIC to ASCII\n  ebcdic    from ASCII to EBCDIC\n  ibm       from ASCII to alternate EBCDIC\n  block     pad newline-terminated records with spaces to cbs-size\n  unblock   replace trailing spaces in cbs-size records with newline\n  lcase     change upper case to lower case\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___4, (FILE */* __restrict  */)stdout);
    tmp___5 = gettext("  nocreat   do not create the output file\n  excl      fail if the output file already exists\n  notrunc   do not truncate the output file\n  ucase     change lower case to upper case\n  swab      swap every pair of input bytes\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___5, (FILE */* __restrict  */)stdout);
    tmp___6 = gettext("  noerror   continue after read errors\n  sync      pad every input block with NULs to ibs-size; when used\n            with block or unblock, pad with spaces rather than NULs\n  fdatasync  physically write output file data before finishing\n  fsync     likewise, but also write metadata\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___6, (FILE */* __restrict  */)stdout);
    tmp___7 = gettext("\nEach FLAG symbol may be:\n\n  append    append mode (makes sense only for output; conv=notrunc suggested)\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___7, (FILE */* __restrict  */)stdout);
    tmp___9 = gettext("  direct    use direct I/O for data\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___9, (FILE */* __restrict  */)stdout);
    tmp___10 = gettext("  directory  fail unless a directory\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___10, (FILE */* __restrict  */)stdout);
    tmp___11 = gettext("  dsync     use synchronized I/O for data\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___11, (FILE */* __restrict  */)stdout);
    tmp___12 = gettext("  sync      likewise, but also for metadata\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___12, (FILE */* __restrict  */)stdout);
    tmp___13 = gettext("  fullblock  accumulate full blocks of input (iflag only)\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___13, (FILE */* __restrict  */)stdout);
    tmp___14 = gettext("  nonblock  use non-blocking I/O\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___14, (FILE */* __restrict  */)stdout);
    tmp___15 = gettext("  noatime   do not update access time\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___15, (FILE */* __restrict  */)stdout);
    tmp___16 = gettext("  noctty    do not assign controlling terminal from file\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___16, (FILE */* __restrict  */)stdout);
    tmp___17 = gettext("  nofollow  do not follow symlinks\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___17, (FILE */* __restrict  */)stdout);
    siginfo_name = "USR1";
    tmp___21 = gettext("\nSending a %s signal to a running `dd\' process makes it\nprint I/O statistics to standard error and then resume copying.\n\n  $ dd if=/dev/zero of=/dev/null& pid=$!\n  $ kill -%s $pid; sleep 1; kill $pid\n  18335302+0 records in\n  18335302+0 records out\n  9387674624 bytes (9.4 GB) copied, 34.6279 seconds, 271 MB/s\n\nOptions are:\n\n");
    printf((char const   */* __restrict  */)tmp___21, siginfo_name, siginfo_name);
    tmp___22 = gettext("      --help     display this help and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___22, (FILE */* __restrict  */)stdout);
    tmp___23 = gettext("      --version  output version information and exit\n");
    fputs_unlocked((char const   */* __restrict  */)tmp___23, (FILE */* __restrict  */)stdout);
    emit_ancillary_info();
    }
  }
  {
  exit(status);
  }
}
}
static void translate_charset(char const   *new_trans ) 
{ 
  int i ;

  {
  i = 0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! (i < 256)) {
      goto while_break;
    }
    trans_table[i] = (unsigned char )*(new_trans + (int )trans_table[i]);
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
  translation_needed = (_Bool)1;
  return;
}
}
__inline static _Bool multiple_bits_set(int i ) 
{ 


  {
  return ((_Bool )((i & (i - 1)) != 0));
}
}
static void print_stats(void) 
{ 
  xtime_t now ;
  xtime_t tmp ;
  char hbuf[(((((((2UL * sizeof(uintmax_t )) * 8UL) * 146UL) / 485UL + 1UL) * 17UL - 16UL) + 1UL) + 3UL) + 1UL] ;
  int human_opts ;
  double delta_s ;
  char const   *bytes_per_second ;
  char *tmp___0 ;
  unsigned long tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  unsigned long tmp___4 ;
  char *tmp___5 ;
  double XTIME_PRECISIONe0 ;
  uintmax_t delta_xtime ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  void *__cil_tmp18 ;
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
  char *__cil_tmp21 ;

  {
  {
  tmp = gethrxtime();
  now = tmp;
  human_opts = 465;
  tmp___0 = gettext("%lu+%lu records in\n%lu+%lu records out\n");
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp___0,
          r_full, r_partial, w_full, w_partial);
  }
  if (r_truncate != 0UL) {
    {
    tmp___1 = select_plural(r_truncate);
    tmp___2 = ngettext("%lu truncated record\n", "%lu truncated records\n", tmp___1);
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp___2,
            r_truncate);
    }
  }
  if (status_flags & 1) {
    return;
  }
  {
  tmp___3 = human_readable(w_bytes, hbuf, human_opts, (uintmax_t )1, (uintmax_t )1);
  tmp___4 = select_plural(w_bytes);
  tmp___5 = ngettext("%lu byte (%s) copied", "%lu bytes (%s) copied", tmp___4);
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp___5,
          w_bytes, tmp___3);
  }
  if (start_time < now) {
    {
    XTIME_PRECISIONe0 = (double )1000000000;
    delta_xtime = (uintmax_t )now;
    delta_xtime = (uintmax_t )((unsigned long long )delta_xtime - (unsigned long long )start_time);
    delta_s = (double )delta_xtime / XTIME_PRECISIONe0;
    tmp___6 = human_readable(w_bytes, hbuf, human_opts, (uintmax_t )1000000000, delta_xtime);
    bytes_per_second = (char const   *)tmp___6;
    }
  } else {
    {
    delta_s = (double )0;
    tmp___7 = gettext("Infinity B");
    bytes_per_second = (char const   *)tmp___7;
    }
  }
  {
  tmp___8 = gettext(", %g s, %s/s\n");
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)tmp___8,
          delta_s, bytes_per_second);
  }
  return;
}
}
static void cleanup(void) 
{ 
  char const   *tmp ;
  char *tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  char const   *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  int tmp___6 ;
  char *__cil_tmp9 ;
  char *__cil_tmp10 ;

  {
  {
  tmp___2 = close(0);
  }
  if (tmp___2 < 0) {
    {
    tmp = quote(input_file);
    tmp___0 = gettext("closing input file %s");
    tmp___1 = __errno_location();
    error(1, *tmp___1, (char const   *)tmp___0, tmp);
    }
  }
  {
  tmp___6 = close(1);
  }
  if (tmp___6 < 0) {
    {
    tmp___3 = quote(output_file);
    tmp___4 = gettext("closing output file %s");
    tmp___5 = __errno_location();
    error(1, *tmp___5, (char const   *)tmp___4, tmp___3);
    }
  }
  return;
}
}
static  __attribute__((__noreturn__)) void quit(int code ) ;
static  __attribute__((__noreturn__)) void quit(int code ) ;
static void quit(int code ) 
{ 


  {
  {
  cleanup();
  print_stats();
  process_signals();
  exit(code);
  }
}
}
#line 693 "/home/wslee/project/coreutils-8.1/src/dd.c"
static void interrupt_handler(int sig ) 
{ 


  {
#line 698
  interrupt_signal = (sig_atomic_t volatile   )sig;
#line 699
  return;
}
}
#line 703 "/home/wslee/project/coreutils-8.1/src/dd.c"
static void siginfo_handler(int sig ) 
{ 


  {
#line 708
  info_signal_count += (sig_atomic_t volatile   )1;
#line 709
  return;
}
}
static void install_signal_handlers(void) 
{ 
  _Bool catch_siginfo ;
  char *tmp ;
  int tmp___0 ;
  struct sigaction act ;
  int tmp___1 ;
  int tmp___2 ;
  void *__cil_tmp7 ;
  char *__cil_tmp8 ;

  {
  {
  tmp = getenv("POSIXLY_CORRECT");
  }
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  {
  catch_siginfo = (_Bool )tmp___0;
  sigemptyset(& caught_signals);
  }
  if (catch_siginfo) {
    {
    sigaction(10, (struct sigaction  const  */* __restrict  */)((void *)0), (struct sigaction */* __restrict  */)(& act));
    }
    if ((unsigned long )act.__sigaction_handler.sa_handler != (unsigned long )((void (*)(int  ))1)) {
      {
      sigaddset(& caught_signals, 10);
      }
    }
  }
  {
  sigaction(2, (struct sigaction  const  */* __restrict  */)((void *)0), (struct sigaction */* __restrict  */)(& act));
  }
  if ((unsigned long )act.__sigaction_handler.sa_handler != (unsigned long )((void (*)(int  ))1)) {
    {
    sigaddset(& caught_signals, 2);
    }
  }
  {
  act.sa_mask = caught_signals;
  tmp___1 = sigismember((sigset_t const   *)(& caught_signals), 10);
  }
  if (tmp___1) {
    {
    act.__sigaction_handler.sa_handler = & siginfo_handler;
    act.sa_flags = 0;
    sigaction(10, (struct sigaction  const  */* __restrict  */)(& act), (struct sigaction */* __restrict  */)((void *)0));
    }
  }
  {
  tmp___2 = sigismember((sigset_t const   *)(& caught_signals), 2);
  }
  if (tmp___2) {
    {
    act.__sigaction_handler.sa_handler = & interrupt_handler;
    act.sa_flags = -1073741824;
    sigaction(2, (struct sigaction  const  */* __restrict  */)(& act), (struct sigaction */* __restrict  */)((void *)0));
    }
  }
  return;
}
}
static void process_signals(void) 
{ 
  int interrupt ;
  int infos ;
  sigset_t oldset ;
  void *__cil_tmp4 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! interrupt_signal) {
      if (! info_signal_count) {
        goto while_break;
      }
    }
    {
    sigprocmask(0, (sigset_t const   */* __restrict  */)(& caught_signals), (sigset_t */* __restrict  */)(& oldset));
    interrupt = (int )interrupt_signal;
    infos = (int )info_signal_count;
    }
    if (infos) {
      info_signal_count = (sig_atomic_t volatile   )(infos - 1);
    }
    {
    sigprocmask(2, (sigset_t const   */* __restrict  */)(& oldset), (sigset_t */* __restrict  */)((void *)0));
    }
    if (interrupt) {
      {
      cleanup();
      }
    }
    {
    print_stats();
    }
    if (interrupt) {
      {
      raise(interrupt);
      }
    }
  }
  while_break: /* CIL Label */ ;
  }
  return;
}
}
static ssize_t iread(int fd , char *buf___0 , size_t size ) 
{ 
  ssize_t nread ;
  int *tmp ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    process_signals();
    nread = read(fd, (void *)buf___0, size);
    }
    if (nread < 0L) {
      {
      tmp = __errno_location();
      }
      if (! (*tmp == 4)) {
        return (nread);
      }
    } else {
      return (nread);
    }
  }
  while_break: /* CIL Label */ ;
  }
}
}
static ssize_t iread_fullblock(int fd , char *buf___0 , size_t size ) 
{ 
  ssize_t nread ;
  ssize_t ncurr ;
  ssize_t tmp ;

  {
  nread = (ssize_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! (0UL < size)) {
      goto while_break;
    }
    {
    tmp = iread(fd, buf___0, size);
    ncurr = tmp;
    }
    if (ncurr < 0L) {
      return (ncurr);
    }
    if (ncurr == 0L) {
      goto while_break;
    }
    nread += ncurr;
    buf___0 += ncurr;
    size -= (size_t )ncurr;
  }
  while_break: /* CIL Label */ ;
  }
  return (nread);
}
}
static size_t iwrite(int fd , char const   *buf___0 , size_t size ) 
{ 
  size_t total_written ;
  int old_flags ;
  int tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  off_t off ;
  __off_t tmp___4 ;
  int tmp___5 ;
  ssize_t nwritten ;
  int *tmp___6 ;
  int *tmp___7 ;
  char *__cil_tmp17 ;

  {
  total_written = (size_t )0;
  if (output_flags & 16384) {
    if (size < output_blocksize) {
      {
      tmp = fcntl(1, 3);
      old_flags = tmp;
      tmp___3 = fcntl(1, 4, old_flags & -16385);
      }
      if (tmp___3 != 0) {
        {
        tmp___0 = quote(output_file);
        tmp___1 = gettext("failed to turn off O_DIRECT: %s");
        tmp___2 = __errno_location();
        error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
        }
      }
      {
      tmp___4 = lseek(1, (__off_t )0, 1);
      off = tmp___4;
      }
      if (0L <= off) {
        {
        tmp___5 = posix_fadvise(1, off, (off_t )0, 4);
        ignore_value(tmp___5);
        }
      }
      conversions_mask |= 32768;
    }
  }
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! (total_written < size)) {
      goto while_break;
    }
    {
    process_signals();
    nwritten = write(fd, (void const   *)(buf___0 + total_written), size - total_written);
    }
    if (nwritten < 0L) {
      {
      tmp___6 = __errno_location();
      }
      if (*tmp___6 != 4) {
        goto while_break;
      }
    } else
    if (nwritten == 0L) {
      {
      tmp___7 = __errno_location();
      *tmp___7 = 28;
      }
      goto while_break;
    } else {
      total_written += (size_t )nwritten;
    }
  }
  while_break: /* CIL Label */ ;
  }
  return (total_written);
}
}
static void write_output(void) 
{ 
  size_t nwritten ;
  size_t tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  char *__cil_tmp6 ;

  {
  {
  tmp = iwrite(1, (char const   *)obuf, output_blocksize);
  nwritten = tmp;
  w_bytes += nwritten;
  }
  if (nwritten != output_blocksize) {
    {
    tmp___0 = quote(output_file);
    tmp___1 = gettext("writing to %s");
    tmp___2 = __errno_location();
    error(0, *tmp___2, (char const   *)tmp___1, tmp___0);
    }
    if (nwritten != 0UL) {
      w_partial ++;
    }
    {
    quit(1);
    }
  } else {
    w_full ++;
  }
  oc = (size_t )0;
  return;
}
}
static _Bool operand_matches(char const   *str , char const   *pattern , char delim ) 
{ 
  char const   *tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;

  {
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! *pattern) {
      goto while_break;
    }
    tmp = str;
    str ++;
    tmp___0 = pattern;
    pattern ++;
    if ((int const   )*tmp != (int const   )*tmp___0) {
      return ((_Bool)0);
    }
  }
  while_break: /* CIL Label */ ;
  }
  if (! *str) {
    tmp___1 = 1;
  } else
  if ((int const   )*str == (int const   )delim) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  return ((_Bool )tmp___1);
}
}
static int parse_symbols(char const   *str , struct symbol_value  const  *table___0 ,
                         char const   *error_msgid ) 
{ 
  int value ;
  char const   *strcomma ;
  char *tmp ;
  struct symbol_value  const  *entry ;
  size_t slen ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  _Bool tmp___4 ;

  {
  value = 0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    {
    tmp = strchr(str, ',');
    strcomma = (char const   *)tmp;
    entry = table___0;
    }
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      {
      tmp___4 = operand_matches(str, (char const   *)(entry->symbol), (char )',');
      }
      if (tmp___4) {
        if (entry->value) {
          goto while_break___0;
        }
      }
      if (! entry->symbol[0]) {
        if (strcomma) {
          tmp___1 = (size_t )(strcomma - str);
        } else {
          {
          tmp___0 = strlen(str);
          tmp___1 = tmp___0;
          }
        }
        {
        slen = tmp___1;
        tmp___2 = quotearg_n_style_mem(0, (enum quoting_style )6, str, slen);
        tmp___3 = gettext(error_msgid);
        error(0, 0, "%s: %s", tmp___3, tmp___2);
        usage(1);
        }
      }
      entry ++;
    }
    while_break___0: /* CIL Label */ ;
    }
    value |= (int )entry->value;
    if (! strcomma) {
      goto while_break;
    }
    str = strcomma + 1;
  }
  while_break: /* CIL Label */ ;
  }
  return (value);
}
}
static uintmax_t parse_integer(char const   *str , _Bool *invalid ) 
{ 
  uintmax_t n ;
  char *suffix ;
  enum strtol_error e ;
  strtol_error tmp ;
  uintmax_t multiplier ;
  uintmax_t tmp___0 ;
  char *__cil_tmp9 ;

  {
  {
  tmp = xstrtoumax(str, & suffix, 10, & n, "bcEGkKMPTwYZ0");
  e = tmp;
  }
  if ((unsigned int )e == 2U) {
    if ((int )*suffix == 120) {
      {
      tmp___0 = parse_integer((char const   *)(suffix + 1), invalid);
      multiplier = tmp___0;
      }
      if (multiplier != 0UL) {
        if ((n * multiplier) / multiplier != n) {
          *invalid = (_Bool)1;
          return ((uintmax_t )0);
        }
      }
      n *= multiplier;
    } else {
      goto _L;
    }
  } else
  _L: 
  if ((unsigned int )e != 0U) {
    *invalid = (_Bool)1;
    return ((uintmax_t )0);
  }
  return (n);
}
}
static _Bool operand_is(char const   *operand , char const   *name ) 
{ 
  _Bool tmp ;

  {
  {
  tmp = operand_matches(operand, name, (char )'=');
  }
  return (tmp);
}
}
static void scanargs(int argc , char * const  *argv ) 
{ 
  int i ;
  size_t blocksize ;
  char const   *name ;
  char const   *val ;
  char *tmp ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  _Bool invalid ;
  uintmax_t n ;
  uintmax_t tmp___6 ;
  long tmp___8 ;
  unsigned long tmp___9 ;
  long tmp___10 ;
  int tmp___11 ;
  long tmp___13 ;
  unsigned long tmp___14 ;
  long tmp___15 ;
  int tmp___16 ;
  long tmp___18 ;
  unsigned long tmp___19 ;
  long tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  char const   *tmp___23 ;
  char *tmp___24 ;
  _Bool tmp___25 ;
  _Bool tmp___26 ;
  _Bool tmp___27 ;
  _Bool tmp___28 ;
  _Bool tmp___29 ;
  _Bool tmp___30 ;
  _Bool tmp___31 ;
  char const   *tmp___32 ;
  char *tmp___33 ;
  _Bool tmp___34 ;
  _Bool tmp___35 ;
  _Bool tmp___36 ;
  _Bool tmp___37 ;
  _Bool tmp___38 ;
  _Bool tmp___39 ;
  char *tmp___40 ;
  char *tmp___41 ;
  _Bool tmp___42 ;
  char *tmp___43 ;
  _Bool tmp___44 ;
  char *tmp___45 ;
  _Bool tmp___46 ;
  char *tmp___47 ;
  _Bool tmp___48 ;
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
  char *__cil_tmp71 ;
  char *__cil_tmp72 ;
  char *__cil_tmp73 ;
  char *__cil_tmp74 ;
  char *__cil_tmp75 ;
  char *__cil_tmp76 ;
  char *__cil_tmp77 ;
  char *__cil_tmp78 ;
  char *__cil_tmp79 ;
  char *__cil_tmp80 ;

  {
  blocksize = (size_t )0;
  i = optind;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! (i < argc)) {
      goto while_break;
    }
    {
    name = (char const   *)*(argv + i);
    tmp = strchr(name, '=');
    val = (char const   *)tmp;
    }
    if ((unsigned long )val == (unsigned long )((void *)0)) {
      {
      tmp___0 = quote(name);
      tmp___1 = gettext("unrecognized operand %s");
      error(0, 0, (char const   *)tmp___1, tmp___0);
      usage(1);
      }
    }
    {
    val ++;
    tmp___39 = operand_is(name, "if");
    }
    if (tmp___39) {
      input_file = val;
    } else {
      {
      tmp___38 = operand_is(name, "of");
      }
      if (tmp___38) {
        output_file = val;
      } else {
        {
        tmp___37 = operand_is(name, "conv");
        }
        if (tmp___37) {
          {
          tmp___2 = parse_symbols(val, conversions, "invalid conversion");
          conversions_mask |= tmp___2;
          }
        } else {
          {
          tmp___36 = operand_is(name, "iflag");
          }
          if (tmp___36) {
            {
            tmp___3 = parse_symbols(val, flags, "invalid input flag");
            input_flags |= tmp___3;
            }
          } else {
            {
            tmp___35 = operand_is(name, "oflag");
            }
            if (tmp___35) {
              {
              tmp___4 = parse_symbols(val, flags, "invalid output flag");
              output_flags |= tmp___4;
              }
            } else {
              {
              tmp___34 = operand_is(name, "status");
              }
              if (tmp___34) {
                {
                tmp___5 = parse_symbols(val, statuses, "invalid status flag");
                status_flags |= tmp___5;
                }
              } else {
                {
                invalid = (_Bool)0;
                tmp___6 = parse_integer(val, & invalid);
                n = tmp___6;
                tmp___31 = operand_is(name, "ibs");
                }
                if (tmp___31) {
                  if (0UL < n) {
                    if (9223372036854775807L < ~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) {
                      tmp___10 = 9223372036854775807L;
                    } else {
                      tmp___10 = ~ (-1L << (sizeof(off_t ) * 8UL - 1UL));
                    }
                    if (0xffffffffffffffffUL - ((4UL + 2UL * page_size) - 1UL) < (unsigned long )tmp___10) {
                      tmp___9 = 0xffffffffffffffffUL - ((4UL + 2UL * page_size) - 1UL);
                    } else {
                      if (9223372036854775807L < ~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) {
                        tmp___8 = 9223372036854775807L;
                      } else {
                        tmp___8 = ~ (-1L << (sizeof(off_t ) * 8UL - 1UL));
                      }
                      tmp___9 = (unsigned long )tmp___8;
                    }
                    if (n <= tmp___9) {
                      tmp___11 = 0;
                    } else {
                      tmp___11 = 1;
                    }
                  } else {
                    tmp___11 = 1;
                  }
                  invalid = (_Bool )((int )invalid | tmp___11);
                  input_blocksize = n;
                } else {
                  {
                  tmp___30 = operand_is(name, "obs");
                  }
                  if (tmp___30) {
                    if (0UL < n) {
                      if (9223372036854775807L < ~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) {
                        tmp___15 = 9223372036854775807L;
                      } else {
                        tmp___15 = ~ (-1L << (sizeof(off_t ) * 8UL - 1UL));
                      }
                      if (0xffffffffffffffffUL - (page_size - 1UL) < (unsigned long )tmp___15) {
                        tmp___14 = 0xffffffffffffffffUL - (page_size - 1UL);
                      } else {
                        if (9223372036854775807L < ~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) {
                          tmp___13 = 9223372036854775807L;
                        } else {
                          tmp___13 = ~ (-1L << (sizeof(off_t ) * 8UL - 1UL));
                        }
                        tmp___14 = (unsigned long )tmp___13;
                      }
                      if (n <= tmp___14) {
                        tmp___16 = 0;
                      } else {
                        tmp___16 = 1;
                      }
                    } else {
                      tmp___16 = 1;
                    }
                    invalid = (_Bool )((int )invalid | tmp___16);
                    output_blocksize = n;
                  } else {
                    {
                    tmp___29 = operand_is(name, "bs");
                    }
                    if (tmp___29) {
                      if (0UL < n) {
                        if (9223372036854775807L < ~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) {
                          tmp___20 = 9223372036854775807L;
                        } else {
                          tmp___20 = ~ (-1L << (sizeof(off_t ) * 8UL - 1UL));
                        }
                        if (0xffffffffffffffffUL - ((4UL + 2UL * page_size) - 1UL) < (unsigned long )tmp___20) {
                          tmp___19 = 0xffffffffffffffffUL - ((4UL + 2UL * page_size) - 1UL);
                        } else {
                          if (9223372036854775807L < ~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) {
                            tmp___18 = 9223372036854775807L;
                          } else {
                            tmp___18 = ~ (-1L << (sizeof(off_t ) * 8UL - 1UL));
                          }
                          tmp___19 = (unsigned long )tmp___18;
                        }
                        if (n <= tmp___19) {
                          tmp___21 = 0;
                        } else {
                          tmp___21 = 1;
                        }
                      } else {
                        tmp___21 = 1;
                      }
                      invalid = (_Bool )((int )invalid | tmp___21);
                      blocksize = n;
                    } else {
                      {
                      tmp___28 = operand_is(name, "cbs");
                      }
                      if (tmp___28) {
                        if (0UL < n) {
                          if (n <= 0xffffffffffffffffUL) {
                            tmp___22 = 0;
                          } else {
                            tmp___22 = 1;
                          }
                        } else {
                          tmp___22 = 1;
                        }
                        invalid = (_Bool )((int )invalid | tmp___22);
                        conversion_blocksize = n;
                      } else {
                        {
                        tmp___27 = operand_is(name, "skip");
                        }
                        if (tmp___27) {
                          skip_records = n;
                        } else {
                          {
                          tmp___26 = operand_is(name, "seek");
                          }
                          if (tmp___26) {
                            seek_records = n;
                          } else {
                            {
                            tmp___25 = operand_is(name, "count");
                            }
                            if (tmp___25) {
                              max_records = n;
                            } else {
                              {
                              tmp___23 = quote(name);
                              tmp___24 = gettext("unrecognized operand %s");
                              error(0, 0, (char const   *)tmp___24, tmp___23);
                              usage(1);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (invalid) {
                  {
                  tmp___32 = quote(val);
                  tmp___33 = gettext("invalid number %s");
                  error(1, 0, (char const   *)tmp___33, tmp___32);
                  }
                }
              }
            }
          }
        }
      }
    }
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
  if (blocksize) {
    output_blocksize = blocksize;
    input_blocksize = output_blocksize;
  } else {
    conversions_mask |= 2048;
  }
  if (input_blocksize == 0UL) {
    input_blocksize = (size_t )512;
  }
  if (output_blocksize == 0UL) {
    output_blocksize = (size_t )512;
  }
  if (conversion_blocksize == 0UL) {
    conversions_mask &= -25;
  }
  if (input_flags & 1052672) {
    input_flags |= 1052672;
  }
  if (output_flags & 1) {
    {
    tmp___40 = gettext("invalid output flag");
    error(0, 0, "%s: %s", tmp___40, "\'fullblock\'");
    usage(1);
    }
  }
  if (input_flags & 1) {
    iread_fnc = & iread_fullblock;
  } else {
    iread_fnc = & iread;
  }
  {
  input_flags &= -2;
  tmp___42 = multiple_bits_set(conversions_mask & 7);
  }
  if (tmp___42) {
    {
    tmp___41 = gettext("cannot combine any two of {ascii,ebcdic,ibm}");
    error(1, 0, (char const   *)tmp___41);
    }
  }
  {
  tmp___44 = multiple_bits_set(conversions_mask & 24);
  }
  if (tmp___44) {
    {
    tmp___43 = gettext("cannot combine block and unblock");
    error(1, 0, (char const   *)tmp___43);
    }
  }
  {
  tmp___46 = multiple_bits_set(conversions_mask & 96);
  }
  if (tmp___46) {
    {
    tmp___45 = gettext("cannot combine lcase and ucase");
    error(1, 0, (char const   *)tmp___45);
    }
  }
  {
  tmp___48 = multiple_bits_set(conversions_mask & 12288);
  }
  if (tmp___48) {
    {
    tmp___47 = gettext("cannot combine excl and nocreat");
    error(1, 0, (char const   *)tmp___47);
    }
  }
  return;
}
}
static void apply_translations(void) 
{ 
  int i ;
  int tmp ;
  int tmp___0 ;

  {
  if (conversions_mask & 1) {
    {
    translate_charset(ebcdic_to_ascii);
    }
  }
  if (conversions_mask & 64) {
    i = 0;
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      if (! (i < 256)) {
        goto while_break;
      }
      {
      tmp = toupper((int )trans_table[i]);
      trans_table[i] = (unsigned char )tmp;
      i ++;
      }
    }
    while_break: /* CIL Label */ ;
    }
    translation_needed = (_Bool)1;
  } else
  if (conversions_mask & 32) {
    i = 0;
    {
    while (1) {
      while_continue___0: /* CIL Label */ ;
      if (! (i < 256)) {
        goto while_break___0;
      }
      {
      tmp___0 = tolower((int )trans_table[i]);
      trans_table[i] = (unsigned char )tmp___0;
      i ++;
      }
    }
    while_break___0: /* CIL Label */ ;
    }
    translation_needed = (_Bool)1;
  }
  if (conversions_mask & 2) {
    {
    translate_charset(ascii_to_ebcdic);
    newline_character = (char )ascii_to_ebcdic['\n'];
    space_character = (char )ascii_to_ebcdic[' '];
    }
  } else
  if (conversions_mask & 4) {
    {
    translate_charset(ascii_to_ibm);
    newline_character = (char )ascii_to_ibm['\n'];
    space_character = (char )ascii_to_ibm[' '];
    }
  }
  return;
}
}
static void translate_buffer(char *buf___0 , size_t nread ) 
{ 
  char *cp ;
  size_t i ;
  unsigned char tmp ;

  {
  i = nread;
  cp = buf___0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! i) {
      goto while_break;
    }
    {
    tmp = to_uchar(*cp);
    *cp = (char )trans_table[tmp];
    i --;
    cp ++;
    }
  }
  while_break: /* CIL Label */ ;
  }
  return;
}
}
static _Bool char_is_saved  =    (_Bool)0;
static char saved_char  ;
static char *swab_buffer(char *buf___0 , size_t *nread ) 
{ 
  char *bufstart ;
  char *cp ;
  size_t i ;

  {
  bufstart = buf___0;
  if (char_is_saved) {
    bufstart --;
    *bufstart = saved_char;
    (*nread) ++;
    char_is_saved = (_Bool)0;
  }
  if (*nread & 1UL) {
    (*nread) --;
    saved_char = *(bufstart + *nread);
    char_is_saved = (_Bool)1;
  }
  cp = bufstart + *nread;
  i = *nread / 2UL;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! i) {
      goto while_break;
    }
    *cp = *(cp - 2);
    i --;
    cp -= 2;
  }
  while_break: /* CIL Label */ ;
  }
  bufstart ++;
  return (bufstart);
}
}
static void advance_input_offset(uintmax_t offset ) 
{ 


  {
  input_offset += offset;
  if (input_offset < offset) {
    input_offset_overflow = (_Bool)1;
  }
  return;
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ioctl)(int __fd ,
                                                                            unsigned long __request 
                                                                            , ...) ;
static off_t skip_via_lseek(char const   *filename , int fdesc , off_t offset , int whence ) 
{ 
  struct mtget s1 ;
  struct mtget s2 ;
  _Bool got_original_tape_position ;
  int tmp ;
  off_t new_position ;
  __off_t tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  char *__cil_tmp14 ;

  {
  {
  tmp = ioctl(fdesc, (unsigned long )(((2U << 30) | (unsigned int )(109 << 8)) | 2U) | (sizeof(struct mtget ) << 16),
              & s1);
  got_original_tape_position = (_Bool )(tmp == 0);
  tmp___0 = lseek(fdesc, offset, whence);
  new_position = tmp___0;
  }
  if (0L <= new_position) {
    if (got_original_tape_position) {
      {
      tmp___3 = ioctl(fdesc, (unsigned long )(((2U << 30) | (unsigned int )(109 << 8)) | 2U) | (sizeof(struct mtget ) << 16),
                      & s2);
      }
      if (tmp___3 == 0) {
        if (s1.mt_resid == s2.mt_resid) {
          if (s1.mt_fileno == s2.mt_fileno) {
            if (s1.mt_blkno == s2.mt_blkno) {
              {
              tmp___1 = gettext("warning: working around lseek kernel bug for file (%s)\n  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types");
              error(0, 0, (char const   *)tmp___1, filename, s2.mt_type);
              tmp___2 = __errno_location();
              *tmp___2 = 0;
              new_position = (off_t )-1;
              }
            }
          }
        }
      }
    }
  }
  return (new_position);
}
}
static uintmax_t skip(int fdesc , char const   *file , uintmax_t records , size_t blocksize ,
                      char *buf___0 ) 
{ 
  uintmax_t offset ;
  int *tmp ;
  struct stat st ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  int lseek_errno ;
  int *tmp___4 ;
  char const   *tmp___5 ;
  char *tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  off_t tmp___9 ;
  ssize_t nread ;
  ssize_t tmp___10 ;
  char const   *tmp___11 ;
  char *tmp___12 ;
  int *tmp___13 ;
  char const   *tmp___14 ;
  char *tmp___15 ;
  off_t tmp___16 ;
  void *__cil_tmp28 ;
  char *__cil_tmp29 ;
  char *__cil_tmp30 ;
  char *__cil_tmp31 ;
  char *__cil_tmp32 ;
  char *__cil_tmp33 ;

  {
  {
  offset = records * blocksize;
  tmp = __errno_location();
  *tmp = 0;
  }
  if (records <= (size_t )(~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) / blocksize) {
    {
    tmp___16 = skip_via_lseek(file, fdesc, (off_t )offset, 1);
    }
    if (0L <= tmp___16) {
      if (fdesc == 0) {
        {
        tmp___3 = fstat(0, & st);
        }
        if (tmp___3 != 0) {
          {
          tmp___0 = quote(file);
          tmp___1 = gettext("cannot fstat %s");
          tmp___2 = __errno_location();
          error(1, *tmp___2, (char const   *)tmp___1, tmp___0);
          }
        }
        if ((st.st_mode & 61440U) == 32768U) {
          if ((uintmax_t )st.st_size < input_offset + offset) {
            records = (offset - (uintmax_t )st.st_size) / blocksize;
            offset = (uintmax_t )st.st_size - input_offset;
          } else {
            records = (uintmax_t )0;
          }
        } else {
          records = (uintmax_t )0;
        }
        {
        advance_input_offset(offset);
        }
      } else {
        records = (uintmax_t )0;
      }
      return (records);
    } else {
      goto _L;
    }
  } else {
    _L: 
    {
    tmp___4 = __errno_location();
    lseek_errno = *tmp___4;
    tmp___9 = skip_via_lseek(file, fdesc, (off_t )0, 2);
    }
    if (tmp___9 >= 0L) {
      if (! lseek_errno) {
        lseek_errno = 75;
      }
      if (fdesc == 0) {
        {
        tmp___5 = quote(file);
        tmp___6 = gettext("%s: cannot skip");
        error(0, lseek_errno, (char const   *)tmp___6, tmp___5);
        }
      } else {
        {
        tmp___7 = quote(file);
        tmp___8 = gettext("%s: cannot seek");
        error(0, lseek_errno, (char const   *)tmp___8, tmp___7);
        }
      }
      {
      quit(1);
      }
    }
    {
    while (1) {
      while_continue: /* CIL Label */ ;
      {
      tmp___10 = (*iread_fnc)(fdesc, buf___0, blocksize);
      nread = tmp___10;
      }
      if (nread < 0L) {
        if (fdesc == 0) {
          {
          tmp___11 = quote(file);
          tmp___12 = gettext("reading %s");
          tmp___13 = __errno_location();
          error(0, *tmp___13, (char const   *)tmp___12, tmp___11);
          }
          if (conversions_mask & 256) {
            {
            print_stats();
            }
            goto __Cont;
          }
        } else {
          {
          tmp___14 = quote(file);
          tmp___15 = gettext("%s: cannot seek");
          error(0, lseek_errno, (char const   *)tmp___15, tmp___14);
          }
        }
        {
        quit(1);
        }
      }
      if (nread == 0L) {
        goto while_break;
      }
      if (fdesc == 0) {
        {
        advance_input_offset((uintmax_t )nread);
        }
      }
      __Cont: 
      records --;
      if (! (records != 0UL)) {
        goto while_break;
      }
    }
    while_break: /* CIL Label */ ;
    }
    return (records);
  }
}
}
static _Bool advance_input_after_read_error(size_t nbytes ) 
{ 
  int *tmp ;
  off_t offset ;
  char const   *tmp___0 ;
  char *tmp___1 ;
  off_t diff ;
  char *tmp___2 ;
  off_t tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  char const   *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  char *__cil_tmp14 ;
  char *__cil_tmp15 ;
  char *__cil_tmp16 ;
  char *__cil_tmp17 ;
  char *__cil_tmp18 ;

  {
  if (! input_seekable) {
    if (input_seek_errno == 29) {
      return ((_Bool)1);
    }
    {
    tmp = __errno_location();
    *tmp = input_seek_errno;
    }
  } else {
    {
    advance_input_offset(nbytes);
    input_offset_overflow = (_Bool )((int )input_offset_overflow | ((uintmax_t )(~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) < input_offset));
    }
    if (input_offset_overflow) {
      {
      tmp___0 = quote(input_file);
      tmp___1 = gettext("offset overflow while reading file %s");
      error(0, 0, (char const   *)tmp___1, tmp___0);
      }
      return ((_Bool)0);
    }
    {
    offset = lseek(0, (__off_t )0, 1);
    }
    if (0L <= offset) {
      if ((uintmax_t )offset == input_offset) {
        return ((_Bool)1);
      }
      diff = (off_t )(input_offset - (uintmax_t )offset);
      if (0L <= diff) {
        if (! ((size_t )diff <= nbytes)) {
          {
          tmp___2 = gettext("warning: invalid file offset after failed read");
          error(0, 0, (char const   *)tmp___2);
          }
        }
      } else {
        {
        tmp___2 = gettext("warning: invalid file offset after failed read");
        error(0, 0, (char const   *)tmp___2);
        }
      }
      {
      tmp___3 = skip_via_lseek(input_file, 0, diff, 1);
      }
      if (0L <= tmp___3) {
        return ((_Bool)1);
      }
      {
      tmp___5 = __errno_location();
      }
      if (*tmp___5 == 0) {
        {
        tmp___4 = gettext("cannot work around kernel bug after all");
        error(0, 0, (char const   *)tmp___4);
        }
      }
    }
  }
  {
  tmp___6 = quote(input_file);
  tmp___7 = gettext("%s: cannot seek");
  tmp___8 = __errno_location();
  error(0, *tmp___8, (char const   *)tmp___7, tmp___6);
  }
  return ((_Bool)0);
}
}
static void copy_simple(char const   *buf___0 , size_t nread ) 
{ 
  char const   *start ;
  size_t nfree ;
  size_t tmp ;

  {
  start = buf___0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (nread < output_blocksize - oc) {
      tmp = nread;
    } else {
      tmp = output_blocksize - oc;
    }
    {
    nfree = tmp;
    memcpy((void */* __restrict  */)(obuf + oc), (void const   */* __restrict  */)start,
           nfree);
    nread -= nfree;
    start += nfree;
    oc += nfree;
    }
    if (oc >= output_blocksize) {
      {
      write_output();
      }
    }
    if (! (nread != 0UL)) {
      goto while_break;
    }
  }
  while_break: /* CIL Label */ ;
  }
  return;
}
}
static void copy_with_block(char const   *buf___0 , size_t nread ) 
{ 
  size_t i ;
  size_t j ;
  size_t tmp ;
  size_t tmp___0 ;

  {
  i = nread;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! i) {
      goto while_break;
    }
    if ((int const   )*buf___0 == (int const   )newline_character) {
      if (col < conversion_blocksize) {
        j = col;
        {
        while (1) {
          while_continue___0: /* CIL Label */ ;
          if (! (j < conversion_blocksize)) {
            goto while_break___0;
          }
          {
          while (1) {
            while_continue___1: /* CIL Label */ ;
            tmp = oc;
            oc ++;
            *(obuf + tmp) = space_character;
            if (oc >= output_blocksize) {
              {
              write_output();
              }
            }
            goto while_break___1;
          }
          while_break___1: /* CIL Label */ ;
          }
          j ++;
        }
        while_break___0: /* CIL Label */ ;
        }
      }
      col = (size_t )0;
    } else {
      if (col == conversion_blocksize) {
        r_truncate ++;
      } else
      if (col < conversion_blocksize) {
        {
        while (1) {
          while_continue___2: /* CIL Label */ ;
          tmp___0 = oc;
          oc ++;
          *(obuf + tmp___0) = (char )*buf___0;
          if (oc >= output_blocksize) {
            {
            write_output();
            }
          }
          goto while_break___2;
        }
        while_break___2: /* CIL Label */ ;
        }
      }
      col ++;
    }
    i --;
    buf___0 ++;
  }
  while_break: /* CIL Label */ ;
  }
  return;
}
}
static void copy_with_unblock(char const   *buf___0 , size_t nread ) ;
static size_t pending_spaces  =    (size_t )0;
static void copy_with_unblock(char const   *buf___0 , size_t nread ) 
{ 
  size_t i ;
  char c ;
  size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;

  {
  i = (size_t )0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! (i < nread)) {
      goto while_break;
    }
    c = (char )*(buf___0 + i);
    tmp___2 = col;
    col ++;
    if (tmp___2 >= conversion_blocksize) {
      pending_spaces = (size_t )0;
      col = pending_spaces;
      i --;
      {
      while (1) {
        while_continue___0: /* CIL Label */ ;
        tmp = oc;
        oc ++;
        *(obuf + tmp) = newline_character;
        if (oc >= output_blocksize) {
          {
          write_output();
          }
        }
        goto while_break___0;
      }
      while_break___0: /* CIL Label */ ;
      }
    } else
    if ((int )c == (int )space_character) {
      pending_spaces ++;
    } else {
      {
      while (1) {
        while_continue___1: /* CIL Label */ ;
        if (! pending_spaces) {
          goto while_break___1;
        }
        {
        while (1) {
          while_continue___2: /* CIL Label */ ;
          tmp___0 = oc;
          oc ++;
          *(obuf + tmp___0) = space_character;
          if (oc >= output_blocksize) {
            {
            write_output();
            }
          }
          goto while_break___2;
        }
        while_break___2: /* CIL Label */ ;
        }
        pending_spaces --;
      }
      while_break___1: /* CIL Label */ ;
      }
      {
      while (1) {
        while_continue___3: /* CIL Label */ ;
        tmp___1 = oc;
        oc ++;
        *(obuf + tmp___1) = c;
        if (oc >= output_blocksize) {
          {
          write_output();
          }
        }
        goto while_break___3;
      }
      while_break___3: /* CIL Label */ ;
      }
    }
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
  return;
}
}
static void set_fd_flags(int fd , int add_flags , char const   *name ) 
{ 
  int old_flags ;
  int tmp ;
  int new_flags ;
  _Bool ok ;
  struct stat st ;
  int *tmp___0 ;
  int tmp___2 ;
  int tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  void *__cil_tmp15 ;
  char *__cil_tmp16 ;

  {
  add_flags &= -131329;
  if (add_flags) {
    {
    tmp = fcntl(fd, 3);
    old_flags = tmp;
    new_flags = old_flags | add_flags;
    ok = (_Bool)1;
    }
    if (old_flags < 0) {
      ok = (_Bool)0;
    } else
    if (old_flags != new_flags) {
      if (new_flags & 65536) {
        {
        tmp___2 = fstat(fd, & st);
        }
        if (tmp___2 != 0) {
          ok = (_Bool)0;
        } else
        if (new_flags & 65536) {
          if (! ((st.st_mode & 61440U) == 16384U)) {
            {
            tmp___0 = __errno_location();
            *tmp___0 = 20;
            ok = (_Bool)0;
            }
          }
        }
        new_flags &= -65537;
      }
      if (ok) {
        if (old_flags != new_flags) {
          {
          tmp___3 = fcntl(fd, 4, new_flags);
          }
          if (tmp___3 == -1) {
            ok = (_Bool)0;
          }
        }
      }
    }
    if (! ok) {
      {
      tmp___4 = quote(name);
      tmp___5 = gettext("setting flags for %s");
      tmp___6 = __errno_location();
      error(1, *tmp___6, (char const   *)tmp___5, tmp___4);
      }
    }
  }
  return;
}
}
static char *real_buf  ;
static char *real_obuf  ;
static int dd_copy(void) 
{ 
  char *ibuf ;
  char *bufstart ;
  ssize_t nread ;
  size_t partread ;
  int exit_status ;
  size_t n_bytes_read ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  uintmax_t us_bytes ;
  uintmax_t us_blocks ;
  uintmax_t tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  uintmax_t write_records ;
  uintmax_t tmp___6 ;
  char const   *tmp___7 ;
  char *tmp___8 ;
  int *tmp___9 ;
  size_t tmp___10 ;
  int tmp___11 ;
  char const   *tmp___12 ;
  char *tmp___13 ;
  int *tmp___14 ;
  _Bool tmp___15 ;
  int tmp___16 ;
  size_t nwritten ;
  size_t tmp___17 ;
  char const   *tmp___18 ;
  char *tmp___19 ;
  int *tmp___20 ;
  size_t tmp___21 ;
  size_t i ;
  size_t tmp___22 ;
  size_t tmp___23 ;
  size_t nwritten___0 ;
  size_t tmp___24 ;
  char const   *tmp___25 ;
  char *tmp___26 ;
  int *tmp___27 ;
  char const   *tmp___28 ;
  char *tmp___29 ;
  int *tmp___30 ;
  int *tmp___31 ;
  int *tmp___32 ;
  int tmp___33 ;
  char const   *tmp___34 ;
  char *tmp___35 ;
  int *tmp___36 ;
  int *tmp___37 ;
  int tmp___38 ;
  char *__cil_tmp53 ;
  char *__cil_tmp54 ;
  char *__cil_tmp55 ;
  char *__cil_tmp56 ;
  char *__cil_tmp57 ;
  char *__cil_tmp58 ;
  char *__cil_tmp59 ;
  char *__cil_tmp60 ;

  {
  {
  partread = (size_t )0;
  exit_status = 0;
  tmp = xmalloc(input_blocksize + ((4UL + 2UL * page_size) - 1UL));
  real_buf = (char *)tmp;
  ibuf = real_buf;
  ibuf += 2;
  tmp___0 = ptr_align((void const   *)ibuf, page_size);
  ibuf = (char *)tmp___0;
  }
  if (conversions_mask & 2048) {
    {
    tmp___1 = xmalloc(output_blocksize + (page_size - 1UL));
    real_obuf = (char *)tmp___1;
    tmp___2 = ptr_align((void const   *)real_obuf, page_size);
    obuf = (char *)tmp___2;
    }
  } else {
    real_obuf = (char *)((void *)0);
    obuf = ibuf;
  }
  if (skip_records != 0UL) {
    {
    us_bytes = input_offset + skip_records * input_blocksize;
    tmp___3 = skip(0, input_file, skip_records, input_blocksize, ibuf);
    us_blocks = tmp___3;
    us_bytes -= input_offset;
    }
    if (us_blocks) {
      {
      tmp___4 = quote(input_file);
      tmp___5 = gettext("%s: cannot skip to specified offset");
      error(0, 0, (char const   *)tmp___5, tmp___4);
      }
    } else
    if (! input_offset_overflow) {
      if (us_bytes) {
        {
        tmp___4 = quote(input_file);
        tmp___5 = gettext("%s: cannot skip to specified offset");
        error(0, 0, (char const   *)tmp___5, tmp___4);
        }
      }
    }
  }
  if (seek_records != 0UL) {
    {
    tmp___6 = skip(1, output_file, seek_records, output_blocksize, obuf);
    write_records = tmp___6;
    }
    if (write_records != 0UL) {
      {
      memset((void *)obuf, 0, output_blocksize);
      }
      {
      while (1) {
        while_continue: /* CIL Label */ ;
        {
        tmp___10 = iwrite(1, (char const   *)obuf, output_blocksize);
        }
        if (tmp___10 != output_blocksize) {
          {
          tmp___7 = quote(output_file);
          tmp___8 = gettext("writing to %s");
          tmp___9 = __errno_location();
          error(0, *tmp___9, (char const   *)tmp___8, tmp___7);
          quit(1);
          }
        }
        write_records --;
        if (! (write_records != 0UL)) {
          goto while_break;
        }
      }
      while_break: /* CIL Label */ ;
      }
    }
  }
  if (max_records == 0UL) {
    return (exit_status);
  }
  {
  while (1) {
    while_continue___0: /* CIL Label */ ;
    if (! (! (r_partial + r_full >= max_records))) {
      goto while_break___0;
    }
    if (conversions_mask & 1024) {
      if (conversions_mask & 256) {
        if (conversions_mask & 24) {
          tmp___11 = ' ';
        } else {
          tmp___11 = '\000';
        }
        {
        memset((void *)ibuf, tmp___11, input_blocksize);
        }
      }
    }
    {
    nread = (*iread_fnc)(0, ibuf, input_blocksize);
    }
    if (nread == 0L) {
      goto while_break___0;
    }
    if (nread < 0L) {
      {
      tmp___12 = quote(input_file);
      tmp___13 = gettext("reading %s");
      tmp___14 = __errno_location();
      error(0, *tmp___14, (char const   *)tmp___13, tmp___12);
      }
      if (conversions_mask & 256) {
        {
        print_stats();
        tmp___15 = advance_input_after_read_error(input_blocksize - partread);
        }
        if (! tmp___15) {
          exit_status = 1;
          input_seekable = (_Bool)0;
          input_seek_errno = 29;
        }
        if (conversions_mask & 1024) {
          if (! partread) {
            nread = (ssize_t )0;
          } else {
            goto while_continue___0;
          }
        } else {
          goto while_continue___0;
        }
      } else {
        exit_status = 1;
        goto while_break___0;
      }
    }
    {
    n_bytes_read = (size_t )nread;
    advance_input_offset((uintmax_t )nread);
    }
    if (n_bytes_read < input_blocksize) {
      r_partial ++;
      partread = n_bytes_read;
      if (conversions_mask & 1024) {
        if (! (conversions_mask & 256)) {
          if (conversions_mask & 24) {
            tmp___16 = ' ';
          } else {
            tmp___16 = '\000';
          }
          {
          memset((void *)(ibuf + n_bytes_read), tmp___16, input_blocksize - n_bytes_read);
          }
        }
        n_bytes_read = input_blocksize;
      }
    } else {
      r_full ++;
      partread = (size_t )0;
    }
    if ((unsigned long )ibuf == (unsigned long )obuf) {
      {
      tmp___17 = iwrite(1, (char const   *)obuf, n_bytes_read);
      nwritten = tmp___17;
      w_bytes += nwritten;
      }
      if (nwritten != n_bytes_read) {
        {
        tmp___18 = quote(output_file);
        tmp___19 = gettext("writing %s");
        tmp___20 = __errno_location();
        error(0, *tmp___20, (char const   *)tmp___19, tmp___18);
        }
        return (1);
      } else
      if (n_bytes_read == input_blocksize) {
        w_full ++;
      } else {
        w_partial ++;
      }
      goto while_continue___0;
    }
    if (translation_needed) {
      {
      translate_buffer(ibuf, n_bytes_read);
      }
    }
    if (conversions_mask & 128) {
      {
      bufstart = swab_buffer(ibuf, & n_bytes_read);
      }
    } else {
      bufstart = ibuf;
    }
    if (conversions_mask & 8) {
      {
      copy_with_block((char const   *)bufstart, n_bytes_read);
      }
    } else
    if (conversions_mask & 16) {
      {
      copy_with_unblock((char const   *)bufstart, n_bytes_read);
      }
    } else {
      {
      copy_simple((char const   *)bufstart, n_bytes_read);
      }
    }
  }
  while_break___0: /* CIL Label */ ;
  }
  if (char_is_saved) {
    if (conversions_mask & 8) {
      {
      copy_with_block((char const   *)(& saved_char), (size_t )1);
      }
    } else
    if (conversions_mask & 16) {
      {
      copy_with_unblock((char const   *)(& saved_char), (size_t )1);
      }
    } else {
      {
      while (1) {
        while_continue___1: /* CIL Label */ ;
        tmp___21 = oc;
        oc ++;
        *(obuf + tmp___21) = saved_char;
        if (oc >= output_blocksize) {
          {
          write_output();
          }
        }
        goto while_break___1;
      }
      while_break___1: /* CIL Label */ ;
      }
    }
  }
  if (conversions_mask & 8) {
    if (col > 0UL) {
      i = col;
      {
      while (1) {
        while_continue___2: /* CIL Label */ ;
        if (! (i < conversion_blocksize)) {
          goto while_break___2;
        }
        {
        while (1) {
          while_continue___3: /* CIL Label */ ;
          tmp___22 = oc;
          oc ++;
          *(obuf + tmp___22) = space_character;
          if (oc >= output_blocksize) {
            {
            write_output();
            }
          }
          goto while_break___3;
        }
        while_break___3: /* CIL Label */ ;
        }
        i ++;
      }
      while_break___2: /* CIL Label */ ;
      }
    }
  }
  if (col) {
    if (conversions_mask & 16) {
      {
      while (1) {
        while_continue___4: /* CIL Label */ ;
        tmp___23 = oc;
        oc ++;
        *(obuf + tmp___23) = newline_character;
        if (oc >= output_blocksize) {
          {
          write_output();
          }
        }
        goto while_break___4;
      }
      while_break___4: /* CIL Label */ ;
      }
    }
  }
  if (oc != 0UL) {
    {
    tmp___24 = iwrite(1, (char const   *)obuf, oc);
    nwritten___0 = tmp___24;
    w_bytes += nwritten___0;
    }
    if (nwritten___0 != 0UL) {
      w_partial ++;
    }
    if (nwritten___0 != oc) {
      {
      tmp___25 = quote(output_file);
      tmp___26 = gettext("writing %s");
      tmp___27 = __errno_location();
      error(0, *tmp___27, (char const   *)tmp___26, tmp___25);
      }
      return (1);
    }
  }
  if (conversions_mask & 16384) {
    {
    tmp___33 = fdatasync(1);
    }
    if (tmp___33 != 0) {
      {
      tmp___31 = __errno_location();
      }
      if (*tmp___31 != 38) {
        {
        tmp___32 = __errno_location();
        }
        if (*tmp___32 != 22) {
          {
          tmp___28 = quote(output_file);
          tmp___29 = gettext("fdatasync failed for %s");
          tmp___30 = __errno_location();
          error(0, *tmp___30, (char const   *)tmp___29, tmp___28);
          exit_status = 1;
          }
        }
      }
      conversions_mask |= 32768;
    }
  }
  if (conversions_mask & 32768) {
    {
    while (1) {
      while_continue___5: /* CIL Label */ ;
      {
      tmp___38 = fsync(1);
      }
      if (! (tmp___38 != 0)) {
        goto while_break___5;
      }
      {
      tmp___37 = __errno_location();
      }
      if (*tmp___37 != 4) {
        {
        tmp___34 = quote(output_file);
        tmp___35 = gettext("fsync failed for %s");
        tmp___36 = __errno_location();
        error(0, *tmp___36, (char const   *)tmp___35, tmp___34);
        }
        return (1);
      }
    }
    while_break___5: /* CIL Label */ ;
    }
  }
  return (exit_status);
}
}
int main(int argc , char **argv ) 
{ 
  int i ;
  int exit_status ;
  off_t offset ;
  int tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  char *tmp___3 ;
  int *tmp___4 ;
  int tmp___5 ;
  int *tmp___6 ;
  char *tmp___7 ;
  mode_t perms ;
  int opts ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  char const   *tmp___11 ;
  char *tmp___12 ;
  int *tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  uintmax_t size ;
  unsigned long obs ;
  char *tmp___16 ;
  int ftruncate_errno ;
  int *tmp___17 ;
  struct stat stdout_stat ;
  char const   *tmp___18 ;
  char *tmp___19 ;
  int *tmp___20 ;
  int tmp___21 ;
  char const   *tmp___22 ;
  char *tmp___23 ;
  int tmp___24 ;
  void *__cil_tmp38 ;
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
  char *__cil_tmp49 ;
  char *__cil_tmp50 ;
  char *__cil_tmp51 ;
  char *__cil_tmp52 ;

  {
  {
  install_signal_handlers();
  set_program_name((char const   *)*(argv + 0));
  setlocale(6, "");
  bindtextdomain("coreutils", "/usr/local/share/locale");
  textdomain("coreutils");
  atexit(& maybe_close_stdout);
  tmp = getpagesize();
  page_size = (size_t )tmp;
  parse_long_options(argc, argv, "dd", "coreutils", Version, & usage, "Paul Rubin",
                     "David MacKenzie", "Stuart Kemp", (char const   *)((void *)0));
  close_stdout_required = (_Bool)0;
  tmp___0 = getopt_long(argc, (char * const  *)argv, "", (struct option  const  *)((void *)0),
                        (int *)((void *)0));
  }
  if (tmp___0 != -1) {
    {
    usage(1);
    }
  }
  i = 0;
  {
  while (1) {
    while_continue: /* CIL Label */ ;
    if (! (i < 256)) {
      goto while_break;
    }
    trans_table[i] = (unsigned char )i;
    i ++;
  }
  while_break: /* CIL Label */ ;
  }
  {
  scanargs(argc, (char * const  *)argv);
  apply_translations();
  }
  if ((unsigned long )input_file == (unsigned long )((void *)0)) {
    {
    tmp___1 = gettext("standard input");
    input_file = (char const   *)tmp___1;
    set_fd_flags(0, input_flags, input_file);
    }
  } else {
    {
    tmp___5 = fd_reopen(0, input_file, input_flags, (mode_t )0);
    }
    if (tmp___5 < 0) {
      {
      tmp___2 = quote(input_file);
      tmp___3 = gettext("opening %s");
      tmp___4 = __errno_location();
      error(1, *tmp___4, (char const   *)tmp___3, tmp___2);
      }
    }
  }
  {
  offset = lseek(0, (__off_t )0, 1);
  input_seekable = (_Bool )(0L <= offset);
  }
  if (0L > offset) {
    input_offset = (uintmax_t )0;
  } else {
    input_offset = (uintmax_t )offset;
  }
  {
  tmp___6 = __errno_location();
  input_seek_errno = *tmp___6;
  }
  if ((unsigned long )output_file == (unsigned long )((void *)0)) {
    {
    tmp___7 = gettext("standard output");
    output_file = (char const   *)tmp___7;
    set_fd_flags(1, output_flags, output_file);
    }
  } else {
    perms = (mode_t )((((384 | (256 >> 3)) | (128 >> 3)) | ((256 >> 3) >> 3)) | ((128 >> 3) >> 3));
    if (conversions_mask & 4096) {
      tmp___8 = 0;
    } else {
      tmp___8 = 64;
    }
    if (conversions_mask & 8192) {
      tmp___9 = 128;
    } else {
      tmp___9 = 0;
    }
    if (seek_records) {
      tmp___10 = 0;
    } else
    if (conversions_mask & 512) {
      tmp___10 = 0;
    } else {
      tmp___10 = 512;
    }
    opts = ((output_flags | tmp___8) | tmp___9) | tmp___10;
    if (! seek_records) {
      goto _L;
    } else {
      {
      tmp___14 = fd_reopen(1, output_file, 2 | opts, perms);
      }
      if (tmp___14 < 0) {
        _L: 
        {
        tmp___15 = fd_reopen(1, output_file, 1 | opts, perms);
        }
        if (tmp___15 < 0) {
          {
          tmp___11 = quote(output_file);
          tmp___12 = gettext("opening %s");
          tmp___13 = __errno_location();
          error(1, *tmp___13, (char const   *)tmp___12, tmp___11);
          }
        }
      }
    }
    if (seek_records != 0UL) {
      if (! (conversions_mask & 512)) {
        size = seek_records * output_blocksize;
        obs = output_blocksize;
        if ((size_t )(~ (-1L << (sizeof(off_t ) * 8UL - 1UL))) / output_blocksize < seek_records) {
          {
          tmp___16 = gettext("offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks");
          error(1, 0, (char const   *)tmp___16, seek_records, obs);
          }
        }
        {
        tmp___24 = ftruncate(1, (__off_t )size);
        }
        if (tmp___24 != 0) {
          {
          tmp___17 = __errno_location();
          ftruncate_errno = *tmp___17;
          tmp___21 = fstat(1, & stdout_stat);
          }
          if (tmp___21 != 0) {
            {
            tmp___18 = quote(output_file);
            tmp___19 = gettext("cannot fstat %s");
            tmp___20 = __errno_location();
            error(1, *tmp___20, (char const   *)tmp___19, tmp___18);
            }
          }
          if ((stdout_stat.st_mode & 61440U) == 32768U) {
            {
            tmp___22 = quote(output_file);
            tmp___23 = gettext("failed to truncate to %lu bytes in output file %s");
            error(1, ftruncate_errno, (char const   *)tmp___23, size, tmp___22);
            }
          } else
          if ((stdout_stat.st_mode & 61440U) == 16384U) {
            {
            tmp___22 = quote(output_file);
            tmp___23 = gettext("failed to truncate to %lu bytes in output file %s");
            error(1, ftruncate_errno, (char const   *)tmp___23, size, tmp___22);
            }
          } else
          if (stdout_stat.st_mode - stdout_stat.st_mode) {
            {
            tmp___22 = quote(output_file);
            tmp___23 = gettext("failed to truncate to %lu bytes in output file %s");
            error(1, ftruncate_errno, (char const   *)tmp___23, size, tmp___22);
            }
          }
        }
      }
    }
  }
  {
  start_time = gethrxtime();
  exit_status = dd_copy();
  quit(exit_status);
  }
}
}
/* #pragma merger("0","../lib/areadlink-with-size.o.i","") */
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) malloc)(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) free)(void *__ptr ) ;
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(1,2), __leaf__)) readlink)(char const   * __restrict  __path ,
                                                                                                     char * __restrict  __buf ,
                                                                                                     size_t __len ) ;
/* #pragma merger("0","../lib/areadlink.o.i","") */
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__,
__leaf__)) realloc)(void *__ptr , size_t __size ) ;
/* #pragma merger("0","../lib/areadlinkat.o.i","") */
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(2,3), __leaf__)) readlinkat)(int __fd ,
                                                                                                       char const   * __restrict  __path ,
                                                                                                       char * __restrict  __buf ,
                                                                                                       size_t __len ) ;
/* #pragma merger("0","../lib/argmatch.o.i","") */
void (*argmatch_die)(void) ;
extern int putc_unlocked(int __c , FILE *__stream ) ;
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
/* #pragma merger("0","../lib/argv-iter.o.i","") */
extern __ssize_t getdelim(char ** __restrict  __lineptr , size_t * __restrict  __n ,
                          int __delimiter , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) feof)(FILE *__stream ) ;
/* #pragma merger("0","../lib/asnprintf.o.i","") */
/* #pragma merger("0","../lib/asprintf.o.i","") */
/* #pragma merger("0","../lib/backupfile.o.i","") */
char const   *simple_backup_suffix ;
 __attribute__((__noreturn__)) void xalloc_die(void) ;
void *xrealloc(void *p , size_t n ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1), __leaf__)) pathconf)(char const   *__path ,
                                                                                                int __name ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
extern int ( __attribute__((__nonnull__(1))) closedir)(DIR *__dirp ) ;
extern struct dirent *( __attribute__((__nonnull__(1))) readdir)(DIR *__dirp ) ;
char const   *simple_backup_suffix  =    "~";
static char const   * const  backup_args[9]  = 
  {      (char const   */* const  */)"none",      (char const   */* const  */)"off",      (char const   */* const  */)"simple",      (char const   */* const  */)"never", 
        (char const   */* const  */)"existing",      (char const   */* const  */)"nil",      (char const   */* const  */)"numbered",      (char const   */* const  */)"t", 
        (char const   */* const  */)((void *)0)};
static enum backup_type  const  backup_types[8]  = 
  {      (enum backup_type  const  )0,      (enum backup_type  const  )0,      (enum backup_type  const  )1,      (enum backup_type  const  )1, 
        (enum backup_type  const  )2,      (enum backup_type  const  )2,      (enum backup_type  const  )3,      (enum backup_type  const  )3};
/* #pragma merger("0","../lib/base64.o.i","") */
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memchr)(void const   *__s ,
                                                                                               int __c ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
static char const   b64str[64]  = 
  {      (char const   )'A',      (char const   )'B',      (char const   )'C',      (char const   )'D', 
        (char const   )'E',      (char const   )'F',      (char const   )'G',      (char const   )'H', 
        (char const   )'I',      (char const   )'J',      (char const   )'K',      (char const   )'L', 
        (char const   )'M',      (char const   )'N',      (char const   )'O',      (char const   )'P', 
        (char const   )'Q',      (char const   )'R',      (char const   )'S',      (char const   )'T', 
        (char const   )'U',      (char const   )'V',      (char const   )'W',      (char const   )'X', 
        (char const   )'Y',      (char const   )'Z',      (char const   )'a',      (char const   )'b', 
        (char const   )'c',      (char const   )'d',      (char const   )'e',      (char const   )'f', 
        (char const   )'g',      (char const   )'h',      (char const   )'i',      (char const   )'j', 
        (char const   )'k',      (char const   )'l',      (char const   )'m',      (char const   )'n', 
        (char const   )'o',      (char const   )'p',      (char const   )'q',      (char const   )'r', 
        (char const   )'s',      (char const   )'t',      (char const   )'u',      (char const   )'v', 
        (char const   )'w',      (char const   )'x',      (char const   )'y',      (char const   )'z', 
        (char const   )'0',      (char const   )'1',      (char const   )'2',      (char const   )'3', 
        (char const   )'4',      (char const   )'5',      (char const   )'6',      (char const   )'7', 
        (char const   )'8',      (char const   )'9',      (char const   )'+',      (char const   )'/'};
static signed char const   b64[256]  = 
  {      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )62, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )63, 
        (signed char const   )52,      (signed char const   )53,      (signed char const   )54,      (signed char const   )55, 
        (signed char const   )56,      (signed char const   )57,      (signed char const   )58,      (signed char const   )59, 
        (signed char const   )60,      (signed char const   )61,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )0,      (signed char const   )1,      (signed char const   )2, 
        (signed char const   )3,      (signed char const   )4,      (signed char const   )5,      (signed char const   )6, 
        (signed char const   )7,      (signed char const   )8,      (signed char const   )9,      (signed char const   )10, 
        (signed char const   )11,      (signed char const   )12,      (signed char const   )13,      (signed char const   )14, 
        (signed char const   )15,      (signed char const   )16,      (signed char const   )17,      (signed char const   )18, 
        (signed char const   )19,      (signed char const   )20,      (signed char const   )21,      (signed char const   )22, 
        (signed char const   )23,      (signed char const   )24,      (signed char const   )25,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )26,      (signed char const   )27,      (signed char const   )28, 
        (signed char const   )29,      (signed char const   )30,      (signed char const   )31,      (signed char const   )32, 
        (signed char const   )33,      (signed char const   )34,      (signed char const   )35,      (signed char const   )36, 
        (signed char const   )37,      (signed char const   )38,      (signed char const   )39,      (signed char const   )40, 
        (signed char const   )41,      (signed char const   )42,      (signed char const   )43,      (signed char const   )44, 
        (signed char const   )45,      (signed char const   )46,      (signed char const   )47,      (signed char const   )48, 
        (signed char const   )49,      (signed char const   )50,      (signed char const   )51,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1, 
        (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1,      (signed char const   )-1};
/* #pragma merger("0","../lib/basename-lgpl.o.i","") */
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
  while_break: /* CIL Label */ ;
  }
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
  while_break___0: /* CIL Label */ ;
  }
  return ((char *)base);
}
}
/* #pragma merger("0","../lib/basename.o.i","") */
/* #pragma merger("0","../lib/buffer-lcm.o.i","") */
/* #pragma merger("0","../lib/c-ctype.o.i","") */
/* #pragma merger("0","../lib/c-strcasecmp.o.i","") */
/* #pragma merger("0","../lib/c-strncasecmp.o.i","") */
/* #pragma merger("0","../lib/c-strtod.o.i","") */
extern  __attribute__((__nothrow__)) __locale_t ( __attribute__((__leaf__)) newlocale)(int __category_mask ,
                                                                                       char const   *__locale ,
                                                                                       __locale_t __base ) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1,3), __leaf__)) strtod_l)(char const   * __restrict  __nptr ,
                                                                                                    char ** __restrict  __endptr ,
                                                                                                    __locale_t __loc ) ;
static locale_t volatile   c_locale_cache  ;
/* #pragma merger("0","../lib/c-strtold.o.i","") */
extern  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1,3),
__leaf__)) strtold_l)(char const   * __restrict  __nptr , char ** __restrict  __endptr ,
                      __locale_t __loc ) ;
static locale_t volatile   c_locale_cache___0  ;
/* #pragma merger("0","../lib/canon-host.o.i","") */
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern int getaddrinfo(char const   * __restrict  __name , char const   * __restrict  __service ,
                       struct addrinfo  const  * __restrict  __req , struct addrinfo ** __restrict  __pai ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) freeaddrinfo)(struct addrinfo *__ai ) ;
extern  __attribute__((__nothrow__)) char const   *( __attribute__((__leaf__)) gai_strerror)(int __ecode ) ;
static int last_cherror  ;
static struct addrinfo hints  ;
/* #pragma merger("0","../lib/canonicalize.o.i","") */
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) memmove)(void *__dest ,
                                                                                                  void const   *__src ,
                                                                                                  size_t __n ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2), __leaf__)) strspn)(char const   *__s ,
                                                                                                  char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) lstat)(char const   * __restrict  __file ,
                                                                                              struct stat * __restrict  __buf ) ;
/* #pragma merger("0","../lib/chdir-long.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) chdir)(char const   *__path ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fchdir)(int __fd ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) __assert_fail)(char const   *__assertion ,
                                                                                                   char const   *__file ,
                                                                                                   unsigned int __line ,
                                                                                                   char const   *__function ) ;
extern int ( __attribute__((__nonnull__(2))) openat)(int __fd , char const   *__file ,
                                                     int __oflag  , ...) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memrchr)(void const   *__s ,
                                                                                                int __c ,
                                                                                                size_t __n )  __attribute__((__pure__)) ;
/* #pragma merger("0","../lib/cloexec.o.i","") */
/* #pragma merger("0","../lib/close-hook.o.i","") */
/* #pragma merger("0","../lib/close-stream.o.i","") */
extern int fclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror_unlocked)(FILE *__stream ) ;
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
/* #pragma merger("0","../lib/closein.o.i","") */
extern struct _IO_FILE *stdin ;
int volatile   exit_failure ;
char *quotearg_colon(char const   *arg ) ;
static char const   *file_name  ;
/* #pragma merger("0","../lib/closeout.o.i","") */
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
  char *__cil_tmp9 ;

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
/* #pragma merger("0","../lib/copy-acl.o.i","") */
/* #pragma merger("0","../lib/creat-safer.o.i","") */
extern int ( __attribute__((__nonnull__(1))) creat)(char const   *__file , mode_t __mode ) ;
/* #pragma merger("0","../lib/cycle-check.o.i","") */
/* #pragma merger("0","../lib/diacrit.o.i","") */
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
/* #pragma merger("0","../lib/dirchownmod.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) stat)(char const   * __restrict  __file ,
                                                                                             struct stat * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) chmod)(char const   *__file ,
                                                                                            __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fchmod)(int __fd ,
                                                                             __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) chown)(char const   *__file ,
                                                                                            __uid_t __owner ,
                                                                                            __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fchown)(int __fd ,
                                                                             __uid_t __owner ,
                                                                             __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) lchown)(char const   *__file ,
                                                                                             __uid_t __owner ,
                                                                                             __gid_t __group ) ;
/* #pragma merger("0","../lib/dirname-lgpl.o.i","") */
/* #pragma merger("0","../lib/dirname.o.i","") */
/* #pragma merger("0","../lib/dup-safer.o.i","") */
/* #pragma merger("0","../lib/euidaccess-stat.o.i","") */
extern  __attribute__((__nothrow__)) __uid_t ( __attribute__((__leaf__)) geteuid)(void) ;
extern  __attribute__((__nothrow__)) __gid_t ( __attribute__((__leaf__)) getegid)(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) group_member)(__gid_t __gid ) ;
/* #pragma merger("0","../lib/exclude.o.i","") */
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
extern FILE *fopen(char const   * __restrict  __filename , char const   * __restrict  __modes ) ;
extern int getc_unlocked(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) __ctype_get_mb_cur_max)(void) ;
extern  __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) abort)(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcmp)(char const   *__s1 ,
                                                                                               char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strrchr)(char const   *__s ,
                                                                                                int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2), __leaf__)) strcspn)(char const   *__s ,
                                                                                                   char const   *__reject )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) wint_t ( __attribute__((__leaf__)) towlower)(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) mbsinit)(mbstate_t const   *__ps )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) mbrtowc)(wchar_t * __restrict  __pwc ,
                                                                                 char const   * __restrict  __s ,
                                                                                 size_t __n ,
                                                                                 mbstate_t * __restrict  __p ) ;
unsigned int const   is_basic_table[8] ;
extern int fnmatch(char const   *__pattern , char const   *__name , int __flags ) ;
/* #pragma merger("0","../lib/exitfail.o.i","") */
int volatile   exit_failure  =    (int volatile   )1;
/* #pragma merger("0","../lib/fd-reopen.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) dup2)(int __fd ,
                                                                           int __fd2 ) ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file , int __oflag 
                                                   , ...) ;
int fd_reopen(int desired_fd , char const   *file , int flags___0 , mode_t mode ) 
{ 
  int fd ;
  int tmp ;
  int fd2 ;
  int tmp___0 ;
  int saved_errno ;
  int *tmp___1 ;
  int *tmp___2 ;

  {
  {
  tmp = open(file, flags___0, mode);
  fd = tmp;
  }
  if (fd == desired_fd) {
    return (fd);
  } else
  if (fd < 0) {
    return (fd);
  } else {
    {
    tmp___0 = dup2(fd, desired_fd);
    fd2 = tmp___0;
    tmp___1 = __errno_location();
    saved_errno = *tmp___1;
    close(fd);
    tmp___2 = __errno_location();
    *tmp___2 = saved_errno;
    }
    return (fd2);
  }
}
}
/* #pragma merger("0","../lib/fd-safer.o.i","") */
/* #pragma merger("0","../lib/fdopendir.o.i","") */
extern DIR *fdopendir(int __fd ) ;
/* #pragma merger("0","../lib/fflush.o.i","") */
extern int fflush(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) __freading)(FILE *__fp ) ;
/* #pragma merger("0","../lib/file-has-acl.o.i","") */
/* #pragma merger("0","../lib/file-set.o.i","") */
/* #pragma merger("0","../lib/file-type.o.i","") */
/* #pragma merger("0","../lib/filemode.o.i","") */
/* #pragma merger("0","../lib/filenamecat-lgpl.o.i","") */
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2), __leaf__)) mempcpy)(void * __restrict  __dest ,
                                                                                                  void const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
/* #pragma merger("0","../lib/filenamecat.o.i","") */
/* #pragma merger("0","../lib/filevercmp.o.i","") */
/* #pragma merger("0","../lib/fopen-safer.o.i","") */
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) fdopen)(int __fd ,
                                                                               char const   *__modes ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
/* #pragma merger("0","../lib/fprintftime.o.i","") */
extern int fputc(int __c , FILE *__stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size , size_t __n ,
                     FILE * __restrict  __s ) ;
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) mktime)(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) strftime)(char * __restrict  __s ,
                                                                                  size_t __maxsize ,
                                                                                  char const   * __restrict  __format ,
                                                                                  struct tm  const  * __restrict  __tp ) ;
/* #pragma merger("0","../lib/fpurge.o.i","") */
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) __fpurge)(FILE *__fp ) ;
/* #pragma merger("0","../lib/freadahead.o.i","") */
/* #pragma merger("0","../lib/freading.o.i","") */
/* #pragma merger("0","../lib/freadptr.o.i","") */
/* #pragma merger("0","../lib/freadseek.o.i","") */
extern int fgetc(FILE *__stream ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n , FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror)(FILE *__stream ) ;
/* #pragma merger("0","../lib/freopen-safer.o.i","") */
extern FILE *freopen(char const   * __restrict  __filename , char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
/* #pragma merger("0","../lib/fseeko.o.i","") */
extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;
/* #pragma merger("0","../lib/fseterr.o.i","") */
/* #pragma merger("0","../lib/fsusage.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) statfs)(char const   *__file ,
                                                                                               struct statfs *__buf ) ;
/* #pragma merger("0","../lib/fts.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3), __leaf__)) fstatat)(int __fd ,
                                                                                                char const   * __restrict  __file ,
                                                                                                struct stat * __restrict  __buf ,
                                                                                                int __flag ) ;
extern void ( __attribute__((__nonnull__(1,4))) qsort)(void *__base , size_t __nmemb ,
                                                       size_t __size , int (*__compar)(void const   * ,
                                                                                       void const   * ) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) dirfd)(DIR *__dirp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) fstatfs)(int __fildes ,
                                                                                              struct statfs *__buf ) ;
/* #pragma merger("0","../lib/full-read.o.i","") */
/* #pragma merger("0","../lib/full-write.o.i","") */
/* #pragma merger("0","../lib/getdate.o.i","") */
extern  __attribute__((__nothrow__)) struct tm *( __attribute__((__leaf__)) localtime)(time_t const   *__timer ) ;
void gettime(struct timespec *ts ) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s , char const   * __restrict  __format 
                                                 , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) setenv)(char const   *__name ,
                                                                                             char const   *__value ,
                                                                                             int __replace ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) unsetenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) abs)(int __x )  __attribute__((__const__)) ;
static yytype_uint8 const   yytranslate[278]  = 
  {      (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )25,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )26, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )24,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )23,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )3,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )6,      (yytype_uint8 const   )7,      (yytype_uint8 const   )8, 
        (yytype_uint8 const   )9,      (yytype_uint8 const   )10,      (yytype_uint8 const   )11,      (yytype_uint8 const   )12, 
        (yytype_uint8 const   )13,      (yytype_uint8 const   )14,      (yytype_uint8 const   )15,      (yytype_uint8 const   )16, 
        (yytype_uint8 const   )17,      (yytype_uint8 const   )18,      (yytype_uint8 const   )19,      (yytype_uint8 const   )20, 
        (yytype_uint8 const   )21,      (yytype_uint8 const   )22};
static yytype_uint8 const   yyr1[83]  = 
  {      (yytype_uint8 const   )0,      (yytype_uint8 const   )27,      (yytype_uint8 const   )28,      (yytype_uint8 const   )28, 
        (yytype_uint8 const   )29,      (yytype_uint8 const   )30,      (yytype_uint8 const   )30,      (yytype_uint8 const   )31, 
        (yytype_uint8 const   )31,      (yytype_uint8 const   )31,      (yytype_uint8 const   )31,      (yytype_uint8 const   )31, 
        (yytype_uint8 const   )31,      (yytype_uint8 const   )31,      (yytype_uint8 const   )31,      (yytype_uint8 const   )32, 
        (yytype_uint8 const   )32,      (yytype_uint8 const   )32,      (yytype_uint8 const   )32,      (yytype_uint8 const   )32, 
        (yytype_uint8 const   )33,      (yytype_uint8 const   )33,      (yytype_uint8 const   )34,      (yytype_uint8 const   )34, 
        (yytype_uint8 const   )34,      (yytype_uint8 const   )34,      (yytype_uint8 const   )34,      (yytype_uint8 const   )35, 
        (yytype_uint8 const   )35,      (yytype_uint8 const   )35,      (yytype_uint8 const   )35,      (yytype_uint8 const   )36, 
        (yytype_uint8 const   )36,      (yytype_uint8 const   )36,      (yytype_uint8 const   )36,      (yytype_uint8 const   )36, 
        (yytype_uint8 const   )36,      (yytype_uint8 const   )36,      (yytype_uint8 const   )36,      (yytype_uint8 const   )36, 
        (yytype_uint8 const   )37,      (yytype_uint8 const   )37,      (yytype_uint8 const   )37,      (yytype_uint8 const   )38, 
        (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38, 
        (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38, 
        (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38, 
        (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38, 
        (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38,      (yytype_uint8 const   )38, 
        (yytype_uint8 const   )39,      (yytype_uint8 const   )39,      (yytype_uint8 const   )39,      (yytype_uint8 const   )39, 
        (yytype_uint8 const   )39,      (yytype_uint8 const   )39,      (yytype_uint8 const   )40,      (yytype_uint8 const   )41, 
        (yytype_uint8 const   )41,      (yytype_uint8 const   )42,      (yytype_uint8 const   )42,      (yytype_uint8 const   )43, 
        (yytype_uint8 const   )43,      (yytype_uint8 const   )44,      (yytype_uint8 const   )45,      (yytype_uint8 const   )46, 
        (yytype_uint8 const   )46,      (yytype_uint8 const   )47,      (yytype_uint8 const   )47};
static yytype_uint8 const   yyr2[83]  = 
  {      (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )4,      (yytype_uint8 const   )5,      (yytype_uint8 const   )6,      (yytype_uint8 const   )7, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )4,      (yytype_uint8 const   )2,      (yytype_uint8 const   )3, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )2,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )1, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )1,      (yytype_uint8 const   )2,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )2,      (yytype_uint8 const   )0,      (yytype_uint8 const   )1};
static yytype_uint8 const   yydefact[100]  = 
  {      (yytype_uint8 const   )5,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )2, 
        (yytype_uint8 const   )3,      (yytype_uint8 const   )74,      (yytype_uint8 const   )76,      (yytype_uint8 const   )73, 
        (yytype_uint8 const   )75,      (yytype_uint8 const   )4,      (yytype_uint8 const   )71,      (yytype_uint8 const   )72, 
        (yytype_uint8 const   )1,      (yytype_uint8 const   )45,      (yytype_uint8 const   )48,      (yytype_uint8 const   )54, 
        (yytype_uint8 const   )57,      (yytype_uint8 const   )62,      (yytype_uint8 const   )51,      (yytype_uint8 const   )70, 
        (yytype_uint8 const   )27,      (yytype_uint8 const   )25,      (yytype_uint8 const   )20,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )22,      (yytype_uint8 const   )0,      (yytype_uint8 const   )77, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )6,      (yytype_uint8 const   )7, 
        (yytype_uint8 const   )8,      (yytype_uint8 const   )9,      (yytype_uint8 const   )11,      (yytype_uint8 const   )10, 
        (yytype_uint8 const   )12,      (yytype_uint8 const   )41,      (yytype_uint8 const   )63,      (yytype_uint8 const   )42, 
        (yytype_uint8 const   )13,      (yytype_uint8 const   )14,      (yytype_uint8 const   )28,      (yytype_uint8 const   )21, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )36,      (yytype_uint8 const   )43,      (yytype_uint8 const   )46, 
        (yytype_uint8 const   )52,      (yytype_uint8 const   )55,      (yytype_uint8 const   )58,      (yytype_uint8 const   )49, 
        (yytype_uint8 const   )29,      (yytype_uint8 const   )26,      (yytype_uint8 const   )79,      (yytype_uint8 const   )23, 
        (yytype_uint8 const   )64,      (yytype_uint8 const   )65,      (yytype_uint8 const   )67,      (yytype_uint8 const   )68, 
        (yytype_uint8 const   )69,      (yytype_uint8 const   )66,      (yytype_uint8 const   )44,      (yytype_uint8 const   )47, 
        (yytype_uint8 const   )53,      (yytype_uint8 const   )56,      (yytype_uint8 const   )59,      (yytype_uint8 const   )50, 
        (yytype_uint8 const   )30,      (yytype_uint8 const   )15,      (yytype_uint8 const   )38,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )78,      (yytype_uint8 const   )60, 
        (yytype_uint8 const   )61,      (yytype_uint8 const   )40,      (yytype_uint8 const   )35,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )24,      (yytype_uint8 const   )34,      (yytype_uint8 const   )39, 
        (yytype_uint8 const   )33,      (yytype_uint8 const   )81,      (yytype_uint8 const   )31,      (yytype_uint8 const   )37, 
        (yytype_uint8 const   )80,      (yytype_uint8 const   )82,      (yytype_uint8 const   )79,      (yytype_uint8 const   )0, 
        (yytype_uint8 const   )16,      (yytype_uint8 const   )0,      (yytype_uint8 const   )17,      (yytype_uint8 const   )81, 
        (yytype_uint8 const   )32,      (yytype_uint8 const   )79,      (yytype_uint8 const   )18,      (yytype_uint8 const   )19};
static yytype_int8 const   yydefgoto[21]  = 
  {      (yytype_int8 const   )-1,      (yytype_int8 const   )2,      (yytype_int8 const   )3,      (yytype_int8 const   )4, 
        (yytype_int8 const   )30,      (yytype_int8 const   )31,      (yytype_int8 const   )32,      (yytype_int8 const   )33, 
        (yytype_int8 const   )34,      (yytype_int8 const   )35,      (yytype_int8 const   )36,      (yytype_int8 const   )37, 
        (yytype_int8 const   )38,      (yytype_int8 const   )39,      (yytype_int8 const   )9,      (yytype_int8 const   )10, 
        (yytype_int8 const   )11,      (yytype_int8 const   )40,      (yytype_int8 const   )41,      (yytype_int8 const   )81, 
        (yytype_int8 const   )92};
static yytype_int8 const   yypact[100]  = 
  {      (yytype_int8 const   )-17,      (yytype_int8 const   )56,      (yytype_int8 const   )15,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )26,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )36,      (yytype_int8 const   )-82,      (yytype_int8 const   )68,      (yytype_int8 const   )10, 
        (yytype_int8 const   )50,      (yytype_int8 const   )9,      (yytype_int8 const   )59,      (yytype_int8 const   )-5, 
        (yytype_int8 const   )72,      (yytype_int8 const   )73,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )80,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )65,      (yytype_int8 const   )61,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )17,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )60,      (yytype_int8 const   )44, 
        (yytype_int8 const   )67,      (yytype_int8 const   )69,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )70, 
        (yytype_int8 const   )71,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-7,      (yytype_int8 const   )62,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )74,      (yytype_int8 const   )-2, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )75,      (yytype_int8 const   )-82,      (yytype_int8 const   )55, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )74,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82};
static yytype_int8 const   yypgoto[21]  = 
  {      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )46,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82, 
        (yytype_int8 const   )-6,      (yytype_int8 const   )-82,      (yytype_int8 const   )-82,      (yytype_int8 const   )-81, 
        (yytype_int8 const   )-3};
static yytype_uint8 const   yytable[99]  = 
  {      (yytype_uint8 const   )62,      (yytype_uint8 const   )63,      (yytype_uint8 const   )64,      (yytype_uint8 const   )65, 
        (yytype_uint8 const   )66,      (yytype_uint8 const   )67,      (yytype_uint8 const   )1,      (yytype_uint8 const   )68, 
        (yytype_uint8 const   )89,      (yytype_uint8 const   )94,      (yytype_uint8 const   )69,      (yytype_uint8 const   )70, 
        (yytype_uint8 const   )90,      (yytype_uint8 const   )53,      (yytype_uint8 const   )71,      (yytype_uint8 const   )12, 
        (yytype_uint8 const   )99,      (yytype_uint8 const   )91,      (yytype_uint8 const   )6,      (yytype_uint8 const   )72, 
        (yytype_uint8 const   )8,      (yytype_uint8 const   )73,      (yytype_uint8 const   )56,      (yytype_uint8 const   )57, 
        (yytype_uint8 const   )58,      (yytype_uint8 const   )59,      (yytype_uint8 const   )60,      (yytype_uint8 const   )61, 
        (yytype_uint8 const   )54,      (yytype_uint8 const   )44,      (yytype_uint8 const   )45,      (yytype_uint8 const   )13, 
        (yytype_uint8 const   )14,      (yytype_uint8 const   )15,      (yytype_uint8 const   )16,      (yytype_uint8 const   )17, 
        (yytype_uint8 const   )18,      (yytype_uint8 const   )19,      (yytype_uint8 const   )20,      (yytype_uint8 const   )21, 
        (yytype_uint8 const   )22,      (yytype_uint8 const   )80,      (yytype_uint8 const   )23,      (yytype_uint8 const   )24, 
        (yytype_uint8 const   )25,      (yytype_uint8 const   )26,      (yytype_uint8 const   )27,      (yytype_uint8 const   )28, 
        (yytype_uint8 const   )29,      (yytype_uint8 const   )56,      (yytype_uint8 const   )57,      (yytype_uint8 const   )58, 
        (yytype_uint8 const   )59,      (yytype_uint8 const   )60,      (yytype_uint8 const   )61,      (yytype_uint8 const   )46, 
        (yytype_uint8 const   )47,      (yytype_uint8 const   )48,      (yytype_uint8 const   )49,      (yytype_uint8 const   )50, 
        (yytype_uint8 const   )51,      (yytype_uint8 const   )42,      (yytype_uint8 const   )52,      (yytype_uint8 const   )84, 
        (yytype_uint8 const   )56,      (yytype_uint8 const   )57,      (yytype_uint8 const   )58,      (yytype_uint8 const   )59, 
        (yytype_uint8 const   )60,      (yytype_uint8 const   )61,      (yytype_uint8 const   )89,      (yytype_uint8 const   )55, 
        (yytype_uint8 const   )43,      (yytype_uint8 const   )74,      (yytype_uint8 const   )97,      (yytype_uint8 const   )5, 
        (yytype_uint8 const   )6,      (yytype_uint8 const   )7,      (yytype_uint8 const   )8,      (yytype_uint8 const   )82, 
        (yytype_uint8 const   )83,      (yytype_uint8 const   )75,      (yytype_uint8 const   )76,      (yytype_uint8 const   )77, 
        (yytype_uint8 const   )78,      (yytype_uint8 const   )95,      (yytype_uint8 const   )79,      (yytype_uint8 const   )85, 
        (yytype_uint8 const   )93,      (yytype_uint8 const   )86,      (yytype_uint8 const   )87,      (yytype_uint8 const   )88, 
        (yytype_uint8 const   )98,      (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )96, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )0,      (yytype_uint8 const   )80};
static yytype_int8 const   yycheck[99]  = 
  {      (yytype_int8 const   )5,      (yytype_int8 const   )6,      (yytype_int8 const   )7,      (yytype_int8 const   )8, 
        (yytype_int8 const   )9,      (yytype_int8 const   )10,      (yytype_int8 const   )23,      (yytype_int8 const   )12, 
        (yytype_int8 const   )15,      (yytype_int8 const   )90,      (yytype_int8 const   )15,      (yytype_int8 const   )16, 
        (yytype_int8 const   )19,      (yytype_int8 const   )4,      (yytype_int8 const   )19,      (yytype_int8 const   )0, 
        (yytype_int8 const   )97,      (yytype_int8 const   )24,      (yytype_int8 const   )20,      (yytype_int8 const   )24, 
        (yytype_int8 const   )22,      (yytype_int8 const   )26,      (yytype_int8 const   )5,      (yytype_int8 const   )6, 
        (yytype_int8 const   )7,      (yytype_int8 const   )8,      (yytype_int8 const   )9,      (yytype_int8 const   )10, 
        (yytype_int8 const   )19,      (yytype_int8 const   )19,      (yytype_int8 const   )20,      (yytype_int8 const   )5, 
        (yytype_int8 const   )6,      (yytype_int8 const   )7,      (yytype_int8 const   )8,      (yytype_int8 const   )9, 
        (yytype_int8 const   )10,      (yytype_int8 const   )11,      (yytype_int8 const   )12,      (yytype_int8 const   )13, 
        (yytype_int8 const   )14,      (yytype_int8 const   )24,      (yytype_int8 const   )16,      (yytype_int8 const   )17, 
        (yytype_int8 const   )18,      (yytype_int8 const   )19,      (yytype_int8 const   )20,      (yytype_int8 const   )21, 
        (yytype_int8 const   )22,      (yytype_int8 const   )5,      (yytype_int8 const   )6,      (yytype_int8 const   )7, 
        (yytype_int8 const   )8,      (yytype_int8 const   )9,      (yytype_int8 const   )10,      (yytype_int8 const   )5, 
        (yytype_int8 const   )6,      (yytype_int8 const   )7,      (yytype_int8 const   )8,      (yytype_int8 const   )9, 
        (yytype_int8 const   )10,      (yytype_int8 const   )25,      (yytype_int8 const   )12,      (yytype_int8 const   )19, 
        (yytype_int8 const   )5,      (yytype_int8 const   )6,      (yytype_int8 const   )7,      (yytype_int8 const   )8, 
        (yytype_int8 const   )9,      (yytype_int8 const   )10,      (yytype_int8 const   )15,      (yytype_int8 const   )25, 
        (yytype_int8 const   )4,      (yytype_int8 const   )27,      (yytype_int8 const   )19,      (yytype_int8 const   )19, 
        (yytype_int8 const   )20,      (yytype_int8 const   )21,      (yytype_int8 const   )22,      (yytype_int8 const   )19, 
        (yytype_int8 const   )20,      (yytype_int8 const   )9,      (yytype_int8 const   )9,      (yytype_int8 const   )3, 
        (yytype_int8 const   )19,      (yytype_int8 const   )91,      (yytype_int8 const   )25,      (yytype_int8 const   )20, 
        (yytype_int8 const   )26,      (yytype_int8 const   )20,      (yytype_int8 const   )20,      (yytype_int8 const   )20, 
        (yytype_int8 const   )95,      (yytype_int8 const   )-1,      (yytype_int8 const   )-1,      (yytype_int8 const   )20, 
        (yytype_int8 const   )-1,      (yytype_int8 const   )-1,      (yytype_int8 const   )24};
static yytype_uint8 const   yystos[100]  = 
  {      (yytype_uint8 const   )0,      (yytype_uint8 const   )23,      (yytype_uint8 const   )28,      (yytype_uint8 const   )29, 
        (yytype_uint8 const   )30,      (yytype_uint8 const   )19,      (yytype_uint8 const   )20,      (yytype_uint8 const   )21, 
        (yytype_uint8 const   )22,      (yytype_uint8 const   )41,      (yytype_uint8 const   )42,      (yytype_uint8 const   )43, 
        (yytype_uint8 const   )0,      (yytype_uint8 const   )5,      (yytype_uint8 const   )6,      (yytype_uint8 const   )7, 
        (yytype_uint8 const   )8,      (yytype_uint8 const   )9,      (yytype_uint8 const   )10,      (yytype_uint8 const   )11, 
        (yytype_uint8 const   )12,      (yytype_uint8 const   )13,      (yytype_uint8 const   )14,      (yytype_uint8 const   )16, 
        (yytype_uint8 const   )17,      (yytype_uint8 const   )18,      (yytype_uint8 const   )19,      (yytype_uint8 const   )20, 
        (yytype_uint8 const   )21,      (yytype_uint8 const   )22,      (yytype_uint8 const   )31,      (yytype_uint8 const   )32, 
        (yytype_uint8 const   )33,      (yytype_uint8 const   )34,      (yytype_uint8 const   )35,      (yytype_uint8 const   )36, 
        (yytype_uint8 const   )37,      (yytype_uint8 const   )38,      (yytype_uint8 const   )39,      (yytype_uint8 const   )40, 
        (yytype_uint8 const   )44,      (yytype_uint8 const   )45,      (yytype_uint8 const   )25,      (yytype_uint8 const   )4, 
        (yytype_uint8 const   )19,      (yytype_uint8 const   )20,      (yytype_uint8 const   )5,      (yytype_uint8 const   )6, 
        (yytype_uint8 const   )7,      (yytype_uint8 const   )8,      (yytype_uint8 const   )9,      (yytype_uint8 const   )10, 
        (yytype_uint8 const   )12,      (yytype_uint8 const   )4,      (yytype_uint8 const   )19,      (yytype_uint8 const   )39, 
        (yytype_uint8 const   )5,      (yytype_uint8 const   )6,      (yytype_uint8 const   )7,      (yytype_uint8 const   )8, 
        (yytype_uint8 const   )9,      (yytype_uint8 const   )10,      (yytype_uint8 const   )5,      (yytype_uint8 const   )6, 
        (yytype_uint8 const   )7,      (yytype_uint8 const   )8,      (yytype_uint8 const   )9,      (yytype_uint8 const   )10, 
        (yytype_uint8 const   )12,      (yytype_uint8 const   )15,      (yytype_uint8 const   )16,      (yytype_uint8 const   )19, 
        (yytype_uint8 const   )24,      (yytype_uint8 const   )26,      (yytype_uint8 const   )39,      (yytype_uint8 const   )9, 
        (yytype_uint8 const   )9,      (yytype_uint8 const   )3,      (yytype_uint8 const   )19,      (yytype_uint8 const   )25, 
        (yytype_uint8 const   )24,      (yytype_uint8 const   )46,      (yytype_uint8 const   )19,      (yytype_uint8 const   )20, 
        (yytype_uint8 const   )19,      (yytype_uint8 const   )20,      (yytype_uint8 const   )20,      (yytype_uint8 const   )20, 
        (yytype_uint8 const   )20,      (yytype_uint8 const   )15,      (yytype_uint8 const   )19,      (yytype_uint8 const   )24, 
        (yytype_uint8 const   )47,      (yytype_uint8 const   )26,      (yytype_uint8 const   )46,      (yytype_uint8 const   )43, 
        (yytype_uint8 const   )20,      (yytype_uint8 const   )19,      (yytype_uint8 const   )47,      (yytype_uint8 const   )46};
static table const   meridian_table[5]  = {      {"AM", 270, 0}, 
        {"A.M.", 270, 0}, 
        {"PM", 270, 1}, 
        {"P.M.", 270, 1}, 
        {(char const   *)((void *)0), 0, 0}};
static table const   dst_table[1]  = {      {"DST", 259, 0}};
static table const   month_and_day_table[25]  = 
  {      {"JANUARY", 271, 1}, 
        {"FEBRUARY", 271, 2}, 
        {"MARCH", 271, 3}, 
        {"APRIL", 271, 4}, 
        {"MAY", 271, 5}, 
        {"JUNE", 271, 6}, 
        {"JULY", 271, 7}, 
        {"AUGUST", 271, 8}, 
        {"SEPTEMBER", 271, 9}, 
        {"SEPT", 271, 9}, 
        {"OCTOBER", 271, 10}, 
        {"NOVEMBER", 271, 11}, 
        {"DECEMBER", 271, 12}, 
        {"SUNDAY", 267, 0}, 
        {"MONDAY", 267, 1}, 
        {"TUESDAY", 267, 2}, 
        {"TUES", 267, 2}, 
        {"WEDNESDAY", 267, 3}, 
        {"WEDNES", 267, 3}, 
        {"THURSDAY", 267, 4}, 
        {"THUR", 267, 4}, 
        {"THURS", 267, 4}, 
        {"FRIDAY", 267, 5}, 
        {"SATURDAY", 267, 6}, 
        {(char const   *)((void *)0), 0, 0}};
static table const   time_units_table[11]  = 
  {      {"YEAR", 260, 1}, 
        {"MONTH", 261, 1}, 
        {"FORTNIGHT", 265, 14}, 
        {"WEEK", 265, 7}, 
        {"DAY", 265, 1}, 
        {"HOUR", 262, 1}, 
        {"MINUTE", 263, 1}, 
        {"MIN", 263, 1}, 
        {"SECOND", 264, 1}, 
        {"SEC", 264, 1}, 
        {(char const   *)((void *)0), 0, 0}};
static table const   relative_time_table[20]  = 
  {      {"TOMORROW", 266, 1}, 
        {"YESTERDAY", 266, -1}, 
        {"TODAY", 266, 0}, 
        {"NOW", 266, 0}, 
        {"LAST", 272, -1}, 
        {"THIS", 272, 0}, 
        {"NEXT", 272, 1}, 
        {"FIRST", 272, 1}, 
        {"THIRD", 272, 3}, 
        {"FOURTH", 272, 4}, 
        {"FIFTH", 272, 5}, 
        {"SIXTH", 272, 6}, 
        {"SEVENTH", 272, 7}, 
        {"EIGHTH", 272, 8}, 
        {"NINTH", 272, 9}, 
        {"TENTH", 272, 10}, 
        {"ELEVENTH", 272, 11}, 
        {"TWELFTH", 272, 12}, 
        {"AGO", 258, 1}, 
        {(char const   *)((void *)0), 0, 0}};
static table const   universal_time_zone_table[4]  = {      {"GMT", 273, 0}, 
        {"UT", 273, 0}, 
        {"UTC", 273, 0}, 
        {(char const   *)((void *)0), 0, 0}};
static table const   time_zone_table[48]  = 
  {      {"WET", 273, 0}, 
        {"WEST", 268, 0}, 
        {"BST", 268, 0}, 
        {"ART", 273, -180}, 
        {"BRT", 273, -180}, 
        {"BRST", 268, -180}, 
        {"NST", 273, -210}, 
        {"NDT", 268, -210}, 
        {"AST", 273, -240}, 
        {"ADT", 268, -240}, 
        {"CLT", 273, -240}, 
        {"CLST", 268, -240}, 
        {"EST", 273, -300}, 
        {"EDT", 268, -300}, 
        {"CST", 273, -360}, 
        {"CDT", 268, -360}, 
        {"MST", 273, -420}, 
        {"MDT", 268, -420}, 
        {"PST", 273, -480}, 
        {"PDT", 268, -480}, 
        {"AKST", 273, -540}, 
        {"AKDT", 268, -540}, 
        {"HST", 273, -600}, 
        {"HAST", 273, -600}, 
        {"HADT", 268, -600}, 
        {"SST", 273, -720}, 
        {"WAT", 273, 60}, 
        {"CET", 273, 60}, 
        {"CEST", 268, 60}, 
        {"MET", 273, 60}, 
        {"MEZ", 273, 60}, 
        {"MEST", 268, 60}, 
        {"MESZ", 268, 60}, 
        {"EET", 273, 120}, 
        {"EEST", 268, 120}, 
        {"CAT", 273, 120}, 
        {"SAST", 273, 120}, 
        {"EAT", 273, 180}, 
        {"MSK", 273, 180}, 
        {"MSD", 268, 180}, 
        {"IST", 273, 330}, 
        {"SGT", 273, 480}, 
        {"KST", 273, 540}, 
        {"JST", 273, 540}, 
        {"GST", 273, 600}, 
        {"NZST", 273, 720}, 
        {"NZDT", 268, 720}, 
        {(char const   *)((void *)0), 0, 0}};
static table const   military_table[26]  = 
  {      {"A", 273, -60}, 
        {"B", 273, -120}, 
        {"C", 273, -180}, 
        {"D", 273, -240}, 
        {"E", 273, -300}, 
        {"F", 273, -360}, 
        {"G", 273, -420}, 
        {"H", 273, -480}, 
        {"I", 273, -540}, 
        {"K", 273, -600}, 
        {"L", 273, -660}, 
        {"M", 273, -720}, 
        {"N", 273, 60}, 
        {"O", 273, 120}, 
        {"P", 273, 180}, 
        {"Q", 273, 240}, 
        {"R", 273, 300}, 
        {"S", 273, 360}, 
        {"T", 273, 420}, 
        {"U", 273, 480}, 
        {"V", 273, 540}, 
        {"W", 273, 600}, 
        {"X", 273, 660}, 
        {"Y", 273, 720}, 
        {"Z", 273, 0}, 
        {(char const   *)((void *)0), 0, 0}};
/* #pragma merger("0","../lib/gethrxtime.o.i","") */
__inline static xtime_t xtime_make(xtime_t s , long ns ) 
{ 


  {
  return (1000000000LL * s + (xtime_t )ns);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) clock_gettime)(clockid_t __clock_id ,
                                                                                    struct timespec *__tp ) ;
xtime_t gethrxtime(void) 
{ 
  struct timespec ts ;
  xtime_t tmp ;
  int tmp___0 ;
  struct timespec ts___0 ;
  xtime_t tmp___1 ;

  {
  {
  tmp___0 = clock_gettime(1, & ts);
  }
  if (tmp___0 == 0) {
    {
    tmp = xtime_make((xtime_t )ts.tv_sec, ts.tv_nsec);
    }
    return (tmp);
  }
  {
  gettime(& ts___0);
  tmp___1 = xtime_make((xtime_t )ts___0.tv_sec, ts___0.tv_nsec);
  }
  return (tmp___1);
}
}
/* #pragma merger("0","../lib/getndelim2.o.i","") */
/* #pragma merger("0","../lib/getpass.o.i","") */
extern int fflush_unlocked(FILE *__stream ) ;
extern __ssize_t getline(char ** __restrict  __lineptr , size_t * __restrict  __n ,
                         FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) __fsetlocking)(FILE *__fp ,
                                                                                    int __type ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tcgetattr)(int __fd ,
                                                                                struct termios *__termios_p ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tcsetattr)(int __fd ,
                                                                                int __optional_actions ,
                                                                                struct termios  const  *__termios_p ) ;
static char *buf  ;
static size_t bufsize  ;
/* #pragma merger("0","../lib/gettime.o.i","") */
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
/* #pragma merger("0","../lib/getugroups.o.i","") */
extern void setgrent(void) ;
extern void endgrent(void) ;
extern struct group *getgrent(void) ;
/* #pragma merger("0","../lib/hard-locale.o.i","") */
/* #pragma merger("0","../lib/hash-pjw.o.i","") */
/* #pragma merger("0","../lib/hash-triple.o.i","") */
/* #pragma merger("0","../lib/hash.o.i","") */
extern  __attribute__((__nothrow__)) void *( __attribute__((__leaf__)) calloc)(size_t __nmemb ,
                                                                               size_t __size )  __attribute__((__malloc__)) ;
static struct hash_tuning  const  default_tuning  =    {(float )0.0, (float )1.0, (float )0.8, (float )1.414, (_Bool)0};
/* #pragma merger("0","../lib/human.o.i","") */
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
  void *__cil_tmp12 ;

  {
  {
  grouplen = 0xffffffffffffffffUL;
  tmp = strlen(thousands_sep);
  thousands_seplen = tmp;
  i = numberlen;
  memcpy((void */* __restrict  */)(buf___0), (void const   */* __restrict  */)number,
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
    memcpy((void */* __restrict  */)d, (void const   */* __restrict  */)(buf___0 + i),
           grouplen);
    }
    if (i == 0UL) {
      return (d);
    }
    {
    d -= thousands_seplen;
    memcpy((void */* __restrict  */)d, (void const   */* __restrict  */)thousands_sep,
           thousands_seplen);
    }
  }
  while_break: /* CIL Label */ ;
  }
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
  char *__cil_tmp50 ;
  char *__cil_tmp51 ;
  char *__cil_tmp52 ;
  char *__cil_tmp53 ;
  char *__cil_tmp54 ;
  char *__cil_tmp55 ;
  char *__cil_tmp56 ;

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
    while_break: /* CIL Label */ ;
    }
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
      while_break___0: /* CIL Label */ ;
      }
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
            memcpy((void */* __restrict  */)p, (void const   */* __restrict  */)decimal_point,
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
            memcpy((void */* __restrict  */)p, (void const   */* __restrict  */)decimal_point,
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
  while_break___1: /* CIL Label */ ;
  }
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
      while_break___2: /* CIL Label */ ;
      }
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
static char const   * const  block_size_args[3]  = {      (char const   */* const  */)"human-readable",      (char const   */* const  */)"si",      (char const   */* const  */)0};
static int const   block_size_opts[2]  = {      (int const   )176,      (int const   )144};
/* #pragma merger("0","../lib/i-ring.o.i","") */
/* #pragma merger("0","../lib/idcache.o.i","") */
extern struct passwd *getpwuid(__uid_t __uid ) ;
extern struct passwd *( __attribute__((__nonnull__(1))) getpwnam)(char const   *__name ) ;
extern struct group *getgrgid(__gid_t __gid ) ;
extern struct group *getgrnam(char const   *__name ) ;
static struct userid *user_alist  ;
static struct userid *nouser_alist  ;
static struct userid *group_alist  ;
static struct userid *nogroup_alist  ;
/* #pragma merger("0","../lib/imaxtostr.o.i","") */
/* #pragma merger("0","../lib/isapipe.o.i","") */
/* #pragma merger("0","../lib/isnanl.o.i","") */
/* #pragma merger("0","../lib/linebuffer.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) feof_unlocked)(FILE *__stream ) ;
/* #pragma merger("0","../lib/linkat.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4), __leaf__)) linkat)(int __fromfd ,
                                                                                               char const   *__from ,
                                                                                               int __tofd ,
                                                                                               char const   *__to ,
                                                                                               int __flags ) ;
static int have_follow_really  ;
/* #pragma merger("0","../lib/localcharset.o.i","") */
extern int fscanf(FILE * __restrict  __stream , char const   * __restrict  __format 
                  , ...) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) nl_langinfo)(nl_item __item ) ;
static char const   * volatile  charset_aliases  ;
/* #pragma merger("0","../lib/long-options.o.i","") */
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
      {
      if (c == 104) {
        goto case_104;
      }
      if (c == 118) {
        goto case_118;
      }
      goto switch_default;
      case_104: /* CIL Label */ 
      {
      (*usage_func)(0);
      }
      case_118: /* CIL Label */ 
      {
      __builtin_va_start(authors, usage_func);
      version_etc_va(stdout, command_name, package, version, authors);
      exit(0);
      }
      switch_default: /* CIL Label */ 
      goto switch_break;
      switch_break: /* CIL Label */ ;
      }
    }
  }
  opterr = saved_opterr;
  optind = 0;
  return;
}
}
/* #pragma merger("0","../lib/malloca.o.i","") */
static void *mmalloca_results[257]  ;
/* #pragma merger("0","../lib/mbchar.o.i","") */
unsigned int const   is_basic_table[8]  = {      (unsigned int const   )6656,      (unsigned int const   )4294967279U,      (unsigned int const   )4294967294U,      (unsigned int const   )2147483646};
/* #pragma merger("0","../lib/mbsalign.o.i","") */
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) mbstowcs)(wchar_t * __restrict  __pwcs ,
                                                                                  char const   * __restrict  __s ,
                                                                                  size_t __n ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) wcstombs)(char * __restrict  __s ,
                                                                                  wchar_t const   * __restrict  __pwcs ,
                                                                                  size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) wcwidth)(wchar_t __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswprint)(wint_t __wc ) ;
/* #pragma merger("0","../lib/mbscasecmp.o.i","") */
/* #pragma merger("0","../lib/mbslen.o.i","") */
/* #pragma merger("0","../lib/mbsstr.o.i","") */
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strnlen)(char const   *__string ,
                                                                                                 size_t __maxlen )  __attribute__((__pure__)) ;
/* #pragma merger("0","../lib/mbswidth.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswcntrl)(wint_t __wc ) ;
/* #pragma merger("0","../lib/md5.o.i","") */
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size , size_t __n ,
                             FILE * __restrict  __stream ) ;
static unsigned char const   fillbuf[64]  = {      (unsigned char const   )128,      (unsigned char const   )0};
/* #pragma merger("0","../lib/memcasecmp.o.i","") */
/* #pragma merger("0","../lib/memchr2.o.i","") */
/* #pragma merger("0","../lib/memcmp2.o.i","") */
/* #pragma merger("0","../lib/memcoll.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) strcoll)(char const   *__s1 ,
                                                                                                char const   *__s2 )  __attribute__((__pure__)) ;
/* #pragma merger("0","../lib/memxfrm.o.i","") */
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2), __leaf__)) strxfrm)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ,
                                                                                                 size_t __n ) ;
/* #pragma merger("0","../lib/mgetgroups.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) getgroups)(int __size ,
                                                                                __gid_t *__list ) ;
extern int getgrouplist(char const   *__user , __gid_t __group , __gid_t *__groups ,
                        int *__ngroups ) ;
/* #pragma merger("0","../lib/mkancesdirs.o.i","") */
/* #pragma merger("0","../lib/mkdir-p.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) mkdir)(char const   *__path ,
                                                                                            __mode_t __mode ) ;
/* #pragma merger("0","../lib/mkstemp-safer.o.i","") */
extern int ( __attribute__((__nonnull__(1))) mkstemp)(char *__template ) ;
/* #pragma merger("0","../lib/modechange.o.i","") */
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
/* #pragma merger("0","../lib/mountlist.o.i","") */
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) setmntent)(char const   *__file ,
                                                                                  char const   *__mode ) ;
extern  __attribute__((__nothrow__)) struct mntent *( __attribute__((__leaf__)) getmntent)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) endmntent)(FILE *__stream ) ;
/* #pragma merger("0","../lib/mpsort.o.i","") */
/* #pragma merger("0","../lib/nanosleep.o.i","") */
extern int nanosleep(struct timespec  const  *__requested_time , struct timespec *__remaining ) ;
/* #pragma merger("0","../lib/nproc.o.i","") */
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1),
__leaf__)) strtoul)(char const   * __restrict  __nptr , char ** __restrict  __endptr ,
                    int __base ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__leaf__)) sysconf)(int __name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) __sched_cpucount)(size_t __setsize ,
                                                                                       cpu_set_t const   *__setp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) sched_getaffinity)(__pid_t __pid ,
                                                                                        size_t __cpusetsize ,
                                                                                        cpu_set_t *__cpuset ) ;
/* #pragma merger("0","../lib/offtostr.o.i","") */
/* #pragma merger("0","../lib/open-safer.o.i","") */
/* #pragma merger("0","../lib/openat-die.o.i","") */
/* #pragma merger("0","../lib/openat-proc.o.i","") */
static int proc_status  =    0;
/* #pragma merger("0","../lib/openat-safer.o.i","") */
/* #pragma merger("0","../lib/opendir-safer.o.i","") */
extern DIR *( __attribute__((__nonnull__(1))) opendir)(char const   *__name ) ;
/* #pragma merger("0","../lib/physmem.o.i","") */
/* #pragma merger("0","../lib/pipe-safer.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) pipe)(int *__pipedes ) ;
/* #pragma merger("0","../lib/posixtm.o.i","") */
extern  __attribute__((__nothrow__)) time_t ( __attribute__((__leaf__)) time)(time_t *__timer ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) stpcpy)(char * __restrict  __dest ,
                                                                                                 char const   * __restrict  __src ) ;
/* #pragma merger("0","../lib/posixver.o.i","") */
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1), __leaf__)) strtol)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ,
                                                                                              int __base ) ;
/* #pragma merger("0","../lib/printf-args.o.i","") */
static wchar_t const   wide_null_string[7]  = {      (wchar_t const   )'(',      (wchar_t const   )'N',      (wchar_t const   )'U',      (wchar_t const   )'L', 
        (wchar_t const   )'L',      (wchar_t const   )')',      (wchar_t const   )0};
/* #pragma merger("0","../lib/printf-frexp.o.i","") */
extern  __attribute__((__nothrow__)) double ( __attribute__((__leaf__)) frexp)(double __x ,
                                                                               int *__exponent ) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__leaf__)) ldexp)(double __x ,
                                                                               int __exponent ) ;
/* #pragma merger("0","../lib/printf-frexpl.o.i","") */
extern  __attribute__((__nothrow__)) long double ( __attribute__((__leaf__)) frexpl)(long double __x ,
                                                                                     int *__exponent ) ;
extern  __attribute__((__nothrow__)) long double ( __attribute__((__leaf__)) ldexpl)(long double __x ,
                                                                                     int __exponent ) ;
/* #pragma merger("0","../lib/printf-parse.o.i","") */
/* #pragma merger("0","../lib/priv-set.o.i","") */
/* #pragma merger("0","../lib/progname.o.i","") */
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
/* #pragma merger("0","../lib/propername.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswalnum)(wint_t __wc ) ;
/* #pragma merger("0","../lib/quote.o.i","") */
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
/* #pragma merger("0","../lib/quotearg.o.i","") */
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
        (char const   */* const  */)0};
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
  void *__cil_tmp3 ;

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
  char *__cil_tmp5 ;

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
                                       int flags___0 , unsigned int const   *quote_these_too ,
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
  void *__cil_tmp36 ;
  char *__cil_tmp37 ;
  char *__cil_tmp38 ;
  char *__cil_tmp39 ;
  char *__cil_tmp40 ;

  {
  {
  len = (size_t )0;
  quote_string = (char const   *)0;
  quote_string_len = (size_t )0;
  backslash_escapes = (_Bool)0;
  tmp = __ctype_get_mb_cur_max();
  unibyte_locale = (_Bool )(tmp == 1UL);
  elide_outer_quotes = (_Bool )((flags___0 & 2) != 0);
  }
  {
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
  case_4: /* CIL Label */ 
  quoting_style = (enum quoting_style )3;
  elide_outer_quotes = (_Bool)1;
  case_3: /* CIL Label */ 
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
    while_break: /* CIL Label */ ;
    }
  }
  backslash_escapes = (_Bool)1;
  quote_string = "\"";
  quote_string_len = (size_t )1;
  goto switch_break;
  case_5: /* CIL Label */ 
  backslash_escapes = (_Bool)1;
  elide_outer_quotes = (_Bool)0;
  goto switch_break;
  case_6: /* CIL Label */ 
  case_7: /* CIL Label */ 
  case_8: /* CIL Label */ 
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
      while_break___1: /* CIL Label */ ;
      }
      quote_string ++;
    }
    while_break___0: /* CIL Label */ ;
    }
  }
  {
  backslash_escapes = (_Bool)1;
  quote_string = right_quote;
  quote_string_len = strlen(quote_string);
  }
  goto switch_break;
  case_1: /* CIL Label */ 
  quoting_style = (enum quoting_style )2;
  elide_outer_quotes = (_Bool)1;
  case_2: /* CIL Label */ 
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
    while_break___2: /* CIL Label */ ;
    }
  }
  quote_string = "\'";
  quote_string_len = (size_t )1;
  goto switch_break;
  case_0: /* CIL Label */ 
  elide_outer_quotes = (_Bool)0;
  goto switch_break;
  switch_default: /* CIL Label */ 
  {
  abort();
  }
  switch_break: /* CIL Label */ ;
  }
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
    {
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
    case_0___0: /* CIL Label */ 
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
      while_break___4: /* CIL Label */ ;
      }
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
            while_break___5: /* CIL Label */ ;
            }
            {
            while (1) {
              while_continue___6: /* CIL Label */ ;
              if (len < buffersize) {
                *(buffer + len) = (char )'0';
              }
              len ++;
              goto while_break___6;
            }
            while_break___6: /* CIL Label */ ;
            }
          }
        }
      }
      c = (unsigned char )'0';
    } else
    if (flags___0 & 1) {
      goto __Cont;
    }
    goto switch_break___0;
    case_63: /* CIL Label */ 
    {
    if ((unsigned int )quoting_style == 2U) {
      goto case_2___0;
    }
    if ((unsigned int )quoting_style == 3U) {
      goto case_3___0;
    }
    goto switch_default___1;
    case_2___0: /* CIL Label */ 
    if (elide_outer_quotes) {
      goto force_outer_quoting_style;
    }
    goto switch_break___1;
    case_3___0: /* CIL Label */ 
    if (flags___0 & 4) {
      if (i + 2UL < argsize) {
        if ((int const   )*(arg + (i + 1UL)) == 63) {
          {
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
          case_33: /* CIL Label */ 
          case_39: /* CIL Label */ 
          case_40: /* CIL Label */ 
          case_41: /* CIL Label */ 
          case_45: /* CIL Label */ 
          case_47: /* CIL Label */ 
          case_60: /* CIL Label */ 
          case_61: /* CIL Label */ 
          case_62: /* CIL Label */ 
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
          while_break___7: /* CIL Label */ ;
          }
          {
          while (1) {
            while_continue___8: /* CIL Label */ ;
            if (len < buffersize) {
              *(buffer + len) = (char )'\"';
            }
            len ++;
            goto while_break___8;
          }
          while_break___8: /* CIL Label */ ;
          }
          {
          while (1) {
            while_continue___9: /* CIL Label */ ;
            if (len < buffersize) {
              *(buffer + len) = (char )'\"';
            }
            len ++;
            goto while_break___9;
          }
          while_break___9: /* CIL Label */ ;
          }
          {
          while (1) {
            while_continue___10: /* CIL Label */ ;
            if (len < buffersize) {
              *(buffer + len) = (char )'?';
            }
            len ++;
            goto while_break___10;
          }
          while_break___10: /* CIL Label */ ;
          }
          goto switch_break___2;
          switch_default___0: /* CIL Label */ 
          goto switch_break___2;
          switch_break___2: /* CIL Label */ ;
          }
        }
      }
    }
    goto switch_break___1;
    switch_default___1: /* CIL Label */ 
    goto switch_break___1;
    switch_break___1: /* CIL Label */ ;
    }
    goto switch_break___0;
    case_7___0: /* CIL Label */ 
    esc = (unsigned char )'a';
    goto c_escape;
    case_8___0: /* CIL Label */ 
    esc = (unsigned char )'b';
    goto c_escape;
    case_12: /* CIL Label */ 
    esc = (unsigned char )'f';
    goto c_escape;
    case_10: /* CIL Label */ 
    esc = (unsigned char )'n';
    goto c_and_shell_escape;
    case_13: /* CIL Label */ 
    esc = (unsigned char )'r';
    goto c_and_shell_escape;
    case_9: /* CIL Label */ 
    esc = (unsigned char )'t';
    goto c_and_shell_escape;
    case_11: /* CIL Label */ 
    esc = (unsigned char )'v';
    goto c_escape;
    case_92: /* CIL Label */ 
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
    case_123: /* CIL Label */ 
    case_125: /* CIL Label */ 
    if (argsize == 0xffffffffffffffffUL) {
      tmp___1 = (int const   )*(arg + 1) == 0;
    } else {
      tmp___1 = argsize == 1UL;
    }
    if (! tmp___1) {
      goto switch_break___0;
    }
    case_35: /* CIL Label */ 
    case_126: /* CIL Label */ 
    if (i != 0UL) {
      goto switch_break___0;
    }
    case_32: /* CIL Label */ 
    case_33___0: /* CIL Label */ 
    case_34: /* CIL Label */ 
    case_36: /* CIL Label */ 
    case_38: /* CIL Label */ 
    case_40___0: /* CIL Label */ 
    case_41___0: /* CIL Label */ 
    case_42: /* CIL Label */ 
    case_59: /* CIL Label */ 
    case_60___0: /* CIL Label */ 
    case_61___0: /* CIL Label */ 
    case_62___0: /* CIL Label */ 
    case_91: /* CIL Label */ 
    case_94: /* CIL Label */ 
    case_96: /* CIL Label */ 
    case_124: /* CIL Label */ 
    if ((unsigned int )quoting_style == 2U) {
      if (elide_outer_quotes) {
        goto force_outer_quoting_style;
      }
    }
    goto switch_break___0;
    case_39___0: /* CIL Label */ 
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
      while_break___11: /* CIL Label */ ;
      }
      {
      while (1) {
        while_continue___12: /* CIL Label */ ;
        if (len < buffersize) {
          *(buffer + len) = (char )'\\';
        }
        len ++;
        goto while_break___12;
      }
      while_break___12: /* CIL Label */ ;
      }
      {
      while (1) {
        while_continue___13: /* CIL Label */ ;
        if (len < buffersize) {
          *(buffer + len) = (char )'\'';
        }
        len ++;
        goto while_break___13;
      }
      while_break___13: /* CIL Label */ ;
      }
    }
    goto switch_break___0;
    case_37: /* CIL Label */ 
    case_43: /* CIL Label */ 
    case_44: /* CIL Label */ 
    case_45___0: /* CIL Label */ 
    case_46: /* CIL Label */ 
    case_47___0: /* CIL Label */ 
    case_48: /* CIL Label */ 
    case_49: /* CIL Label */ 
    case_50: /* CIL Label */ 
    case_51: /* CIL Label */ 
    case_52: /* CIL Label */ 
    case_53: /* CIL Label */ 
    case_54: /* CIL Label */ 
    case_55: /* CIL Label */ 
    case_56: /* CIL Label */ 
    case_57: /* CIL Label */ 
    case_58: /* CIL Label */ 
    case_65: /* CIL Label */ 
    case_66: /* CIL Label */ 
    case_67: /* CIL Label */ 
    case_68: /* CIL Label */ 
    case_69: /* CIL Label */ 
    case_70: /* CIL Label */ 
    case_71: /* CIL Label */ 
    case_72: /* CIL Label */ 
    case_73: /* CIL Label */ 
    case_74: /* CIL Label */ 
    case_75: /* CIL Label */ 
    case_76: /* CIL Label */ 
    case_77: /* CIL Label */ 
    case_78: /* CIL Label */ 
    case_79: /* CIL Label */ 
    case_80: /* CIL Label */ 
    case_81: /* CIL Label */ 
    case_82: /* CIL Label */ 
    case_83: /* CIL Label */ 
    case_84: /* CIL Label */ 
    case_85: /* CIL Label */ 
    case_86: /* CIL Label */ 
    case_87: /* CIL Label */ 
    case_88: /* CIL Label */ 
    case_89: /* CIL Label */ 
    case_90: /* CIL Label */ 
    case_93: /* CIL Label */ 
    case_95: /* CIL Label */ 
    case_97: /* CIL Label */ 
    case_98: /* CIL Label */ 
    case_99: /* CIL Label */ 
    case_100: /* CIL Label */ 
    case_101: /* CIL Label */ 
    case_102: /* CIL Label */ 
    case_103: /* CIL Label */ 
    case_104: /* CIL Label */ 
    case_105: /* CIL Label */ 
    case_106: /* CIL Label */ 
    case_107: /* CIL Label */ 
    case_108: /* CIL Label */ 
    case_109: /* CIL Label */ 
    case_110: /* CIL Label */ 
    case_111: /* CIL Label */ 
    case_112: /* CIL Label */ 
    case_113: /* CIL Label */ 
    case_114: /* CIL Label */ 
    case_115: /* CIL Label */ 
    case_116: /* CIL Label */ 
    case_117: /* CIL Label */ 
    case_118: /* CIL Label */ 
    case_119: /* CIL Label */ 
    case_120: /* CIL Label */ 
    case_121: /* CIL Label */ 
    case_122: /* CIL Label */ 
    goto switch_break___0;
    switch_default___2: /* CIL Label */ 
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
          while_break___15: /* CIL Label */ ;
          }
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
                {
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
                case_91___0: /* CIL Label */ 
                case_92___0: /* CIL Label */ 
                case_94___0: /* CIL Label */ 
                case_96___0: /* CIL Label */ 
                case_124___0: /* CIL Label */ 
                goto force_outer_quoting_style;
                switch_default___3: /* CIL Label */ 
                goto switch_break___3;
                switch_break___3: /* CIL Label */ ;
                }
                j ++;
              }
              while_break___16: /* CIL Label */ ;
              }
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
      while_break___14: /* CIL Label */ ;
      }
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
              while_break___18: /* CIL Label */ ;
              }
              {
              while (1) {
                while_continue___19: /* CIL Label */ ;
                if (len < buffersize) {
                  *(buffer + len) = (char )(48 + ((int )c >> 6));
                }
                len ++;
                goto while_break___19;
              }
              while_break___19: /* CIL Label */ ;
              }
              {
              while (1) {
                while_continue___20: /* CIL Label */ ;
                if (len < buffersize) {
                  *(buffer + len) = (char )(48 + (((int )c >> 3) & 7));
                }
                len ++;
                goto while_break___20;
              }
              while_break___20: /* CIL Label */ ;
              }
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
            while_break___21: /* CIL Label */ ;
            }
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
          while_break___22: /* CIL Label */ ;
          }
          i ++;
          c = (unsigned char )*(arg + i);
        }
        while_break___17: /* CIL Label */ ;
        }
        goto store_c;
      }
    }
    switch_break___0: /* CIL Label */ ;
    }
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
    while_break___23: /* CIL Label */ ;
    }
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
    while_break___24: /* CIL Label */ ;
    }
    __Cont: 
    i ++;
  }
  while_break___3: /* CIL Label */ ;
  }
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
        while_break___26: /* CIL Label */ ;
        }
        quote_string ++;
      }
      while_break___25: /* CIL Label */ ;
      }
    }
  }
  if (len < buffersize) {
    *(buffer + len) = (char )'\000';
  }
  return (len);
  force_outer_quoting_style: 
  {
  tmp___7 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize, quoting_style,
                                     flags___0 & -3, (unsigned int const   *)((void *)0),
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
  int flags___0 ;
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
  flags___0 = (int )(options->flags | 1);
  tmp___3 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style )options->style,
                                     flags___0, (unsigned int const   *)(options->quote_these_too),
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
                             flags___0, (unsigned int const   *)(options->quote_these_too),
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
  void *__cil_tmp7 ;
  void *__cil_tmp8 ;

  {
  {
  tmp = quoting_options_from_style(s);
  o = tmp;
  tmp___0 = quotearg_n_options(n, arg, (size_t )-1, (struct quoting_options  const  *)(& o));
  }
  return (tmp___0);
}
}
char *quotearg_n_style_mem(int n , enum quoting_style s , char const   *arg , size_t argsize ) 
{ 
  struct quoting_options o ;
  struct quoting_options tmp ;
  char *tmp___0 ;
  void *__cil_tmp8 ;
  void *__cil_tmp9 ;

  {
  {
  tmp = quoting_options_from_style(s);
  o = tmp;
  tmp___0 = quotearg_n_options(n, arg, argsize, (struct quoting_options  const  *)(& o));
  }
  return (tmp___0);
}
}
char *quotearg_char_mem(char const   *arg , size_t argsize , char ch ) 
{ 
  struct quoting_options options ;
  char *tmp ;
  void *__cil_tmp6 ;

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
/* #pragma merger("0","../lib/rand-isaac.o.i","") */
extern  __attribute__((__nothrow__)) __pid_t ( __attribute__((__leaf__)) getpid)(void) ;
extern  __attribute__((__nothrow__)) __pid_t ( __attribute__((__leaf__)) getppid)(void) ;
extern  __attribute__((__nothrow__)) __uid_t ( __attribute__((__leaf__)) getuid)(void) ;
extern  __attribute__((__nothrow__)) __gid_t ( __attribute__((__leaf__)) getgid)(void) ;
static uint32_t const   iv[8]  = 
  {      (uint32_t const   )325574490,      (uint32_t const   )2514026585U,      (uint32_t const   )3273014859U,      (uint32_t const   )255990488, 
        (uint32_t const   )3643427448U,      (uint32_t const   )2769960009U,      (uint32_t const   )3304057371U,      (uint32_t const   )811634969};
/* #pragma merger("0","../lib/randint.o.i","") */
/* #pragma merger("0","../lib/randperm.o.i","") */
/* #pragma merger("0","../lib/randread.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) setvbuf)(FILE * __restrict  __stream ,
                                                                              char * __restrict  __buf ,
                                                                              int __modes ,
                                                                              size_t __n ) ;
/* #pragma merger("0","../lib/readtokens.o.i","") */
static char const   *saved_delim  =    (char const   *)((void *)0);
static char isdelim[256]  ;
/* #pragma merger("0","../lib/readtokens0.o.i","") */
extern void _obstack_newchunk(struct obstack * , int  ) ;
extern int _obstack_begin(struct obstack * , int  , int  , void *(*)(long  ) , void (*)(void * ) ) ;
extern void obstack_free(struct obstack *obstack , void *block ) ;
/* #pragma merger("0","../lib/readutmp.o.i","") */
extern void setutxent(void) ;
extern void endutxent(void) ;
extern struct utmpx *getutxent(void) ;
extern int utmpxname(char const   *__file ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) kill)(__pid_t __pid ,
                                                                           int __sig ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2), __leaf__)) strncpy)(char * __restrict  __dest ,
                                                                                                  char const   * __restrict  __src ,
                                                                                                  size_t __n ) ;
/* #pragma merger("0","../lib/regex.o.i","") */
reg_syntax_t rpl_re_syntax_options  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) wcscoll)(wchar_t const   *__s1 ,
                                                                              wchar_t const   *__s2 ) ;
extern  __attribute__((__nothrow__)) wint_t ( __attribute__((__leaf__)) btowc)(int __c ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__leaf__)) wcrtomb)(char * __restrict  __s ,
                                                                                 wchar_t __wc ,
                                                                                 mbstate_t * __restrict  __ps ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswlower)(wint_t __wc ) ;
extern  __attribute__((__nothrow__)) wctype_t ( __attribute__((__leaf__)) wctype)(char const   *__property ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswctype)(wint_t __wc ,
                                                                               wctype_t __desc ) ;
extern  __attribute__((__nothrow__)) wint_t ( __attribute__((__leaf__)) towupper)(wint_t __wc ) ;
static char const   __re_error_msgid[369]  = 
  {      (char const   )'S',      (char const   )'u',      (char const   )'c',      (char const   )'c', 
        (char const   )'e',      (char const   )'s',      (char const   )'s',      (char const   )'\000', 
        (char const   )'N',      (char const   )'o',      (char const   )' ',      (char const   )'m', 
        (char const   )'a',      (char const   )'t',      (char const   )'c',      (char const   )'h', 
        (char const   )'\000',      (char const   )'I',      (char const   )'n',      (char const   )'v', 
        (char const   )'a',      (char const   )'l',      (char const   )'i',      (char const   )'d', 
        (char const   )' ',      (char const   )'r',      (char const   )'e',      (char const   )'g', 
        (char const   )'u',      (char const   )'l',      (char const   )'a',      (char const   )'r', 
        (char const   )' ',      (char const   )'e',      (char const   )'x',      (char const   )'p', 
        (char const   )'r',      (char const   )'e',      (char const   )'s',      (char const   )'s', 
        (char const   )'i',      (char const   )'o',      (char const   )'n',      (char const   )'\000', 
        (char const   )'I',      (char const   )'n',      (char const   )'v',      (char const   )'a', 
        (char const   )'l',      (char const   )'i',      (char const   )'d',      (char const   )' ', 
        (char const   )'c',      (char const   )'o',      (char const   )'l',      (char const   )'l', 
        (char const   )'a',      (char const   )'t',      (char const   )'i',      (char const   )'o', 
        (char const   )'n',      (char const   )' ',      (char const   )'c',      (char const   )'h', 
        (char const   )'a',      (char const   )'r',      (char const   )'a',      (char const   )'c', 
        (char const   )'t',      (char const   )'e',      (char const   )'r',      (char const   )'\000', 
        (char const   )'I',      (char const   )'n',      (char const   )'v',      (char const   )'a', 
        (char const   )'l',      (char const   )'i',      (char const   )'d',      (char const   )' ', 
        (char const   )'c',      (char const   )'h',      (char const   )'a',      (char const   )'r', 
        (char const   )'a',      (char const   )'c',      (char const   )'t',      (char const   )'e', 
        (char const   )'r',      (char const   )' ',      (char const   )'c',      (char const   )'l', 
        (char const   )'a',      (char const   )'s',      (char const   )'s',      (char const   )' ', 
        (char const   )'n',      (char const   )'a',      (char const   )'m',      (char const   )'e', 
        (char const   )'\000',      (char const   )'T',      (char const   )'r',      (char const   )'a', 
        (char const   )'i',      (char const   )'l',      (char const   )'i',      (char const   )'n', 
        (char const   )'g',      (char const   )' ',      (char const   )'b',      (char const   )'a', 
        (char const   )'c',      (char const   )'k',      (char const   )'s',      (char const   )'l', 
        (char const   )'a',      (char const   )'s',      (char const   )'h',      (char const   )'\000', 
        (char const   )'I',      (char const   )'n',      (char const   )'v',      (char const   )'a', 
        (char const   )'l',      (char const   )'i',      (char const   )'d',      (char const   )' ', 
        (char const   )'b',      (char const   )'a',      (char const   )'c',      (char const   )'k', 
        (char const   )' ',      (char const   )'r',      (char const   )'e',      (char const   )'f', 
        (char const   )'e',      (char const   )'r',      (char const   )'e',      (char const   )'n', 
        (char const   )'c',      (char const   )'e',      (char const   )'\000',      (char const   )'U', 
        (char const   )'n',      (char const   )'m',      (char const   )'a',      (char const   )'t', 
        (char const   )'c',      (char const   )'h',      (char const   )'e',      (char const   )'d', 
        (char const   )' ',      (char const   )'[',      (char const   )' ',      (char const   )'o', 
        (char const   )'r',      (char const   )' ',      (char const   )'[',      (char const   )'^', 
        (char const   )'\000',      (char const   )'U',      (char const   )'n',      (char const   )'m', 
        (char const   )'a',      (char const   )'t',      (char const   )'c',      (char const   )'h', 
        (char const   )'e',      (char const   )'d',      (char const   )' ',      (char const   )'(', 
        (char const   )' ',      (char const   )'o',      (char const   )'r',      (char const   )' ', 
        (char const   )'\\',      (char const   )'(',      (char const   )'\000',      (char const   )'U', 
        (char const   )'n',      (char const   )'m',      (char const   )'a',      (char const   )'t', 
        (char const   )'c',      (char const   )'h',      (char const   )'e',      (char const   )'d', 
        (char const   )' ',      (char const   )'\\',      (char const   )'{',      (char const   )'\000', 
        (char const   )'I',      (char const   )'n',      (char const   )'v',      (char const   )'a', 
        (char const   )'l',      (char const   )'i',      (char const   )'d',      (char const   )' ', 
        (char const   )'c',      (char const   )'o',      (char const   )'n',      (char const   )'t', 
        (char const   )'e',      (char const   )'n',      (char const   )'t',      (char const   )' ', 
        (char const   )'o',      (char const   )'f',      (char const   )' ',      (char const   )'\\', 
        (char const   )'{',      (char const   )'\\',      (char const   )'}',      (char const   )'\000', 
        (char const   )'I',      (char const   )'n',      (char const   )'v',      (char const   )'a', 
        (char const   )'l',      (char const   )'i',      (char const   )'d',      (char const   )' ', 
        (char const   )'r',      (char const   )'a',      (char const   )'n',      (char const   )'g', 
        (char const   )'e',      (char const   )' ',      (char const   )'e',      (char const   )'n', 
        (char const   )'d',      (char const   )'\000',      (char const   )'M',      (char const   )'e', 
        (char const   )'m',      (char const   )'o',      (char const   )'r',      (char const   )'y', 
        (char const   )' ',      (char const   )'e',      (char const   )'x',      (char const   )'h', 
        (char const   )'a',      (char const   )'u',      (char const   )'s',      (char const   )'t', 
        (char const   )'e',      (char const   )'d',      (char const   )'\000',      (char const   )'I', 
        (char const   )'n',      (char const   )'v',      (char const   )'a',      (char const   )'l', 
        (char const   )'i',      (char const   )'d',      (char const   )' ',      (char const   )'p', 
        (char const   )'r',      (char const   )'e',      (char const   )'c',      (char const   )'e', 
        (char const   )'d',      (char const   )'i',      (char const   )'n',      (char const   )'g', 
        (char const   )' ',      (char const   )'r',      (char const   )'e',      (char const   )'g', 
        (char const   )'u',      (char const   )'l',      (char const   )'a',      (char const   )'r', 
        (char const   )' ',      (char const   )'e',      (char const   )'x',      (char const   )'p', 
        (char const   )'r',      (char const   )'e',      (char const   )'s',      (char const   )'s', 
        (char const   )'i',      (char const   )'o',      (char const   )'n',      (char const   )'\000', 
        (char const   )'P',      (char const   )'r',      (char const   )'e',      (char const   )'m', 
        (char const   )'a',      (char const   )'t',      (char const   )'u',      (char const   )'r', 
        (char const   )'e',      (char const   )' ',      (char const   )'e',      (char const   )'n', 
        (char const   )'d',      (char const   )' ',      (char const   )'o',      (char const   )'f', 
        (char const   )' ',      (char const   )'r',      (char const   )'e',      (char const   )'g', 
        (char const   )'u',      (char const   )'l',      (char const   )'a',      (char const   )'r', 
        (char const   )' ',      (char const   )'e',      (char const   )'x',      (char const   )'p', 
        (char const   )'r',      (char const   )'e',      (char const   )'s',      (char const   )'s', 
        (char const   )'i',      (char const   )'o',      (char const   )'n',      (char const   )'\000', 
        (char const   )'R',      (char const   )'e',      (char const   )'g',      (char const   )'u', 
        (char const   )'l',      (char const   )'a',      (char const   )'r',      (char const   )' ', 
        (char const   )'e',      (char const   )'x',      (char const   )'p',      (char const   )'r', 
        (char const   )'e',      (char const   )'s',      (char const   )'s',      (char const   )'i', 
        (char const   )'o',      (char const   )'n',      (char const   )' ',      (char const   )'t', 
        (char const   )'o',      (char const   )'o',      (char const   )' ',      (char const   )'b', 
        (char const   )'i',      (char const   )'g',      (char const   )'\000',      (char const   )'U', 
        (char const   )'n',      (char const   )'m',      (char const   )'a',      (char const   )'t', 
        (char const   )'c',      (char const   )'h',      (char const   )'e',      (char const   )'d', 
        (char const   )' ',      (char const   )')',      (char const   )' ',      (char const   )'o', 
        (char const   )'r',      (char const   )' ',      (char const   )'\\',      (char const   )')', 
        (char const   )'\000'};
static size_t const   __re_error_msgid_idx[17]  = 
  {      (size_t const   )0,      (size_t const   )sizeof("Success"),      (size_t const   )(sizeof("Success") + sizeof("No match")),      (size_t const   )((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")), 
        (size_t const   )(((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")),      (size_t const   )((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")),      (size_t const   )(((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")),      (size_t const   )((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")), 
        (size_t const   )(((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")),      (size_t const   )((((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")) + sizeof("Unmatched ( or \\(")),      (size_t const   )(((((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")) + sizeof("Unmatched ( or \\(")) + sizeof("Unmatched \\{")),      (size_t const   )((((((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")) + sizeof("Unmatched ( or \\(")) + sizeof("Unmatched \\{")) + sizeof("Invalid content of \\{\\}")), 
        (size_t const   )(((((((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")) + sizeof("Unmatched ( or \\(")) + sizeof("Unmatched \\{")) + sizeof("Invalid content of \\{\\}")) + sizeof("Invalid range end")),      (size_t const   )((((((((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")) + sizeof("Unmatched ( or \\(")) + sizeof("Unmatched \\{")) + sizeof("Invalid content of \\{\\}")) + sizeof("Invalid range end")) + sizeof("Memory exhausted")),      (size_t const   )(((((((((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")) + sizeof("Unmatched ( or \\(")) + sizeof("Unmatched \\{")) + sizeof("Invalid content of \\{\\}")) + sizeof("Invalid range end")) + sizeof("Memory exhausted")) + sizeof("Invalid preceding regular expression")),      (size_t const   )((((((((((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")) + sizeof("Unmatched ( or \\(")) + sizeof("Unmatched \\{")) + sizeof("Invalid content of \\{\\}")) + sizeof("Invalid range end")) + sizeof("Memory exhausted")) + sizeof("Invalid preceding regular expression")) + sizeof("Premature end of regular expression")), 
        (size_t const   )(((((((((((((((sizeof("Success") + sizeof("No match")) + sizeof("Invalid regular expression")) + sizeof("Invalid collation character")) + sizeof("Invalid character class name")) + sizeof("Trailing backslash")) + sizeof("Invalid back reference")) + sizeof("Unmatched [ or [^")) + sizeof("Unmatched ( or \\(")) + sizeof("Unmatched \\{")) + sizeof("Invalid content of \\{\\}")) + sizeof("Invalid range end")) + sizeof("Memory exhausted")) + sizeof("Invalid preceding regular expression")) + sizeof("Premature end of regular expression")) + sizeof("Regular expression too big"))};
static bitset_word_t utf8_sb_map[4]  = {      0xffffffffffffffffUL,      0xffffffffffffffffUL};
/* #pragma merger("0","../lib/root-dev-ino.o.i","") */
/* #pragma merger("0","../lib/safe-read.o.i","") */
/* #pragma merger("0","../lib/safe-write.o.i","") */
/* #pragma merger("0","../lib/same.o.i","") */
/* #pragma merger("0","../lib/save-cwd.o.i","") */
/* #pragma merger("0","../lib/savedir.o.i","") */
/* #pragma merger("0","../lib/savewd.o.i","") */
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
/* #pragma merger("0","../lib/selinux-at.o.i","") */
/* #pragma merger("0","../lib/set-mode-acl.o.i","") */
/* #pragma merger("0","../lib/settime.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) clock_settime)(clockid_t __clock_id ,
                                                                                    struct timespec  const  *__tp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) settimeofday)(struct timeval  const  *__tv ,
                                                                                   struct timezone  const  *__tz ) ;
/* #pragma merger("0","../lib/sha1.o.i","") */
static unsigned char const   fillbuf___0[64]  = {      (unsigned char const   )128,      (unsigned char const   )0};
/* #pragma merger("0","../lib/sha256.o.i","") */
static unsigned char const   fillbuf___1[64]  = {      (unsigned char const   )128,      (unsigned char const   )0};
static uint32_t const   sha256_round_constants[64]  = 
  {      (uint32_t const   )1116352408UL,      (uint32_t const   )1899447441UL,      (uint32_t const   )3049323471UL,      (uint32_t const   )3921009573UL, 
        (uint32_t const   )961987163UL,      (uint32_t const   )1508970993UL,      (uint32_t const   )2453635748UL,      (uint32_t const   )2870763221UL, 
        (uint32_t const   )3624381080UL,      (uint32_t const   )310598401UL,      (uint32_t const   )607225278UL,      (uint32_t const   )1426881987UL, 
        (uint32_t const   )1925078388UL,      (uint32_t const   )2162078206UL,      (uint32_t const   )2614888103UL,      (uint32_t const   )3248222580UL, 
        (uint32_t const   )3835390401UL,      (uint32_t const   )4022224774UL,      (uint32_t const   )264347078UL,      (uint32_t const   )604807628UL, 
        (uint32_t const   )770255983UL,      (uint32_t const   )1249150122UL,      (uint32_t const   )1555081692UL,      (uint32_t const   )1996064986UL, 
        (uint32_t const   )2554220882UL,      (uint32_t const   )2821834349UL,      (uint32_t const   )2952996808UL,      (uint32_t const   )3210313671UL, 
        (uint32_t const   )3336571891UL,      (uint32_t const   )3584528711UL,      (uint32_t const   )113926993UL,      (uint32_t const   )338241895UL, 
        (uint32_t const   )666307205UL,      (uint32_t const   )773529912UL,      (uint32_t const   )1294757372UL,      (uint32_t const   )1396182291UL, 
        (uint32_t const   )1695183700UL,      (uint32_t const   )1986661051UL,      (uint32_t const   )2177026350UL,      (uint32_t const   )2456956037UL, 
        (uint32_t const   )2730485921UL,      (uint32_t const   )2820302411UL,      (uint32_t const   )3259730800UL,      (uint32_t const   )3345764771UL, 
        (uint32_t const   )3516065817UL,      (uint32_t const   )3600352804UL,      (uint32_t const   )4094571909UL,      (uint32_t const   )275423344UL, 
        (uint32_t const   )430227734UL,      (uint32_t const   )506948616UL,      (uint32_t const   )659060556UL,      (uint32_t const   )883997877UL, 
        (uint32_t const   )958139571UL,      (uint32_t const   )1322822218UL,      (uint32_t const   )1537002063UL,      (uint32_t const   )1747873779UL, 
        (uint32_t const   )1955562222UL,      (uint32_t const   )2024104815UL,      (uint32_t const   )2227730452UL,      (uint32_t const   )2361852424UL, 
        (uint32_t const   )2428436474UL,      (uint32_t const   )2756734187UL,      (uint32_t const   )3204031479UL,      (uint32_t const   )3329325298UL};
/* #pragma merger("0","../lib/sha512.o.i","") */
static unsigned char const   fillbuf___2[128]  = {      (unsigned char const   )128,      (unsigned char const   )0};
static u64 const   sha512_round_constants[80]  = 
  {      (u64 const   )((1116352408UL << 32) + 3609767458UL),      (u64 const   )((1899447441UL << 32) + 602891725UL),      (u64 const   )((3049323471UL << 32) + 3964484399UL),      (u64 const   )((3921009573UL << 32) + 2173295548UL), 
        (u64 const   )((961987163UL << 32) + 4081628472UL),      (u64 const   )((1508970993UL << 32) + 3053834265UL),      (u64 const   )((2453635748UL << 32) + 2937671579UL),      (u64 const   )((2870763221UL << 32) + 3664609560UL), 
        (u64 const   )((3624381080UL << 32) + 2734883394UL),      (u64 const   )((310598401UL << 32) + 1164996542UL),      (u64 const   )((607225278UL << 32) + 1323610764UL),      (u64 const   )((1426881987UL << 32) + 3590304994UL), 
        (u64 const   )((1925078388UL << 32) + 4068182383UL),      (u64 const   )((2162078206UL << 32) + 991336113UL),      (u64 const   )((2614888103UL << 32) + 633803317UL),      (u64 const   )((3248222580UL << 32) + 3479774868UL), 
        (u64 const   )((3835390401UL << 32) + 2666613458UL),      (u64 const   )((4022224774UL << 32) + 944711139UL),      (u64 const   )((264347078UL << 32) + 2341262773UL),      (u64 const   )((604807628UL << 32) + 2007800933UL), 
        (u64 const   )((770255983UL << 32) + 1495990901UL),      (u64 const   )((1249150122UL << 32) + 1856431235UL),      (u64 const   )((1555081692UL << 32) + 3175218132UL),      (u64 const   )((1996064986UL << 32) + 2198950837UL), 
        (u64 const   )((2554220882UL << 32) + 3999719339UL),      (u64 const   )((2821834349UL << 32) + 766784016UL),      (u64 const   )((2952996808UL << 32) + 2566594879UL),      (u64 const   )((3210313671UL << 32) + 3203337956UL), 
        (u64 const   )((3336571891UL << 32) + 1034457026UL),      (u64 const   )((3584528711UL << 32) + 2466948901UL),      (u64 const   )((113926993UL << 32) + 3758326383UL),      (u64 const   )((338241895UL << 32) + 168717936UL), 
        (u64 const   )((666307205UL << 32) + 1188179964UL),      (u64 const   )((773529912UL << 32) + 1546045734UL),      (u64 const   )((1294757372UL << 32) + 1522805485UL),      (u64 const   )((1396182291UL << 32) + 2643833823UL), 
        (u64 const   )((1695183700UL << 32) + 2343527390UL),      (u64 const   )((1986661051UL << 32) + 1014477480UL),      (u64 const   )((2177026350UL << 32) + 1206759142UL),      (u64 const   )((2456956037UL << 32) + 344077627UL), 
        (u64 const   )((2730485921UL << 32) + 1290863460UL),      (u64 const   )((2820302411UL << 32) + 3158454273UL),      (u64 const   )((3259730800UL << 32) + 3505952657UL),      (u64 const   )((3345764771UL << 32) + 106217008UL), 
        (u64 const   )((3516065817UL << 32) + 3606008344UL),      (u64 const   )((3600352804UL << 32) + 1432725776UL),      (u64 const   )((4094571909UL << 32) + 1467031594UL),      (u64 const   )((275423344UL << 32) + 851169720UL), 
        (u64 const   )((430227734UL << 32) + 3100823752UL),      (u64 const   )((506948616UL << 32) + 1363258195UL),      (u64 const   )((659060556UL << 32) + 3750685593UL),      (u64 const   )((883997877UL << 32) + 3785050280UL), 
        (u64 const   )((958139571UL << 32) + 3318307427UL),      (u64 const   )((1322822218UL << 32) + 3812723403UL),      (u64 const   )((1537002063UL << 32) + 2003034995UL),      (u64 const   )((1747873779UL << 32) + 3602036899UL), 
        (u64 const   )((1955562222UL << 32) + 1575990012UL),      (u64 const   )((2024104815UL << 32) + 1125592928UL),      (u64 const   )((2227730452UL << 32) + 2716904306UL),      (u64 const   )((2361852424UL << 32) + 442776044UL), 
        (u64 const   )((2428436474UL << 32) + 593698344UL),      (u64 const   )((2756734187UL << 32) + 3733110249UL),      (u64 const   )((3204031479UL << 32) + 2999351573UL),      (u64 const   )((3329325298UL << 32) + 3815920427UL), 
        (u64 const   )((3391569614UL << 32) + 3928383900UL),      (u64 const   )((3515267271UL << 32) + 566280711UL),      (u64 const   )((3940187606UL << 32) + 3454069534UL),      (u64 const   )((4118630271UL << 32) + 4000239992UL), 
        (u64 const   )((116418474UL << 32) + 1914138554UL),      (u64 const   )((174292421UL << 32) + 2731055270UL),      (u64 const   )((289380356UL << 32) + 3203993006UL),      (u64 const   )((460393269UL << 32) + 320620315UL), 
        (u64 const   )((685471733UL << 32) + 587496836UL),      (u64 const   )((852142971UL << 32) + 1086792851UL),      (u64 const   )((1017036298UL << 32) + 365543100UL),      (u64 const   )((1126000580UL << 32) + 2618297676UL), 
        (u64 const   )((1288033470UL << 32) + 3409855158UL),      (u64 const   )((1501505948UL << 32) + 4234509866UL),      (u64 const   )((1607167915UL << 32) + 987167468UL),      (u64 const   )((1816402316UL << 32) + 1246189591UL)};
/* #pragma merger("0","../lib/sig2str.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) __libc_current_sigrtmin)(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) __libc_current_sigrtmax)(void) ;
static struct numname numname_table[35]  = 
  {      {1, {(char const   )'H', (char const   )'U', (char const   )'P', (char const   )'\000'}}, 
        {2,
      {(char const   )'I', (char const   )'N', (char const   )'T', (char const   )'\000'}}, 
        {3,
      {(char const   )'Q', (char const   )'U', (char const   )'I', (char const   )'T',
       (char const   )'\000'}}, 
        {4, {(char const   )'I', (char const   )'L', (char const   )'L', (char const   )'\000'}}, 
        {5,
      {(char const   )'T', (char const   )'R', (char const   )'A', (char const   )'P',
       (char const   )'\000'}}, 
        {6, {(char const   )'A', (char const   )'B', (char const   )'R', (char const   )'T',
          (char const   )'\000'}}, 
        {8, {(char const   )'F', (char const   )'P', (char const   )'E', (char const   )'\000'}}, 
        {9,
      {(char const   )'K', (char const   )'I', (char const   )'L', (char const   )'L',
       (char const   )'\000'}}, 
        {7, {(char const   )'B', (char const   )'U', (char const   )'S', (char const   )'\000'}}, 
        {11,
      {(char const   )'S', (char const   )'E', (char const   )'G', (char const   )'V',
       (char const   )'\000'}}, 
        {13, {(char const   )'P', (char const   )'I', (char const   )'P', (char const   )'E',
           (char const   )'\000'}}, 
        {14, {(char const   )'A', (char const   )'L', (char const   )'R', (char const   )'M',
           (char const   )'\000'}}, 
        {15, {(char const   )'T', (char const   )'E', (char const   )'R', (char const   )'M',
           (char const   )'\000'}}, 
        {10, {(char const   )'U', (char const   )'S', (char const   )'R', (char const   )'1',
           (char const   )'\000'}}, 
        {12, {(char const   )'U', (char const   )'S', (char const   )'R', (char const   )'2',
           (char const   )'\000'}}, 
        {17, {(char const   )'C', (char const   )'H', (char const   )'L', (char const   )'D',
           (char const   )'\000'}}, 
        {23, {(char const   )'U', (char const   )'R', (char const   )'G', (char const   )'\000'}}, 
        {19,
      {(char const   )'S', (char const   )'T', (char const   )'O', (char const   )'P',
       (char const   )'\000'}}, 
        {20, {(char const   )'T', (char const   )'S', (char const   )'T', (char const   )'P',
           (char const   )'\000'}}, 
        {18, {(char const   )'C', (char const   )'O', (char const   )'N', (char const   )'T',
           (char const   )'\000'}}, 
        {21, {(char const   )'T', (char const   )'T', (char const   )'I', (char const   )'N',
           (char const   )'\000'}}, 
        {22, {(char const   )'T', (char const   )'T', (char const   )'O', (char const   )'U',
           (char const   )'\000'}}, 
        {31, {(char const   )'S', (char const   )'Y', (char const   )'S', (char const   )'\000'}}, 
        {29,
      {(char const   )'P', (char const   )'O', (char const   )'L', (char const   )'L',
       (char const   )'\000'}}, 
        {26, {(char const   )'V', (char const   )'T', (char const   )'A', (char const   )'L',
           (char const   )'R', (char const   )'M', (char const   )'\000'}}, 
        {27, {(char const   )'P', (char const   )'R', (char const   )'O', (char const   )'F',
           (char const   )'\000'}}, 
        {24, {(char const   )'X', (char const   )'C', (char const   )'P', (char const   )'U',
           (char const   )'\000'}}, 
        {25, {(char const   )'X', (char const   )'F', (char const   )'S', (char const   )'Z',
           (char const   )'\000'}}, 
        {6, {(char const   )'I', (char const   )'O', (char const   )'T', (char const   )'\000'}}, 
        {17,
      {(char const   )'C', (char const   )'L', (char const   )'D', (char const   )'\000'}}, 
        {30,
      {(char const   )'P', (char const   )'W', (char const   )'R', (char const   )'\000'}}, 
        {28,
      {(char const   )'W', (char const   )'I', (char const   )'N', (char const   )'C',
       (char const   )'H', (char const   )'\000'}}, 
        {29, {(char const   )'I', (char const   )'O', (char const   )'\000'}}, 
        {16, {(char const   )'S', (char const   )'T', (char const   )'K', (char const   )'F',
           (char const   )'L', (char const   )'T', (char const   )'\000'}}, 
        {0, {(char const   )'E', (char const   )'X', (char const   )'I', (char const   )'T',
          (char const   )'\000'}}};
/* #pragma merger("0","../lib/sockets.o.i","") */
/* #pragma merger("0","../lib/strftime.o.i","") */
/* #pragma merger("0","../lib/striconv.o.i","") */
extern iconv_t iconv_open(char const   *__tocode , char const   *__fromcode ) ;
extern size_t iconv(iconv_t __cd , char ** __restrict  __inbuf , size_t * __restrict  __inbytesleft ,
                    char ** __restrict  __outbuf , size_t * __restrict  __outbytesleft ) ;
extern int iconv_close(iconv_t __cd ) ;
/* #pragma merger("0","../lib/strintcmp.o.i","") */
/* #pragma merger("0","../lib/stripslash.o.i","") */
/* #pragma merger("0","../lib/strnlen1.o.i","") */
/* #pragma merger("0","../lib/strnumcmp.o.i","") */
/* #pragma merger("0","../lib/tempname.o.i","") */
static char const   letters[63]  = 
  {      (char const   )'a',      (char const   )'b',      (char const   )'c',      (char const   )'d', 
        (char const   )'e',      (char const   )'f',      (char const   )'g',      (char const   )'h', 
        (char const   )'i',      (char const   )'j',      (char const   )'k',      (char const   )'l', 
        (char const   )'m',      (char const   )'n',      (char const   )'o',      (char const   )'p', 
        (char const   )'q',      (char const   )'r',      (char const   )'s',      (char const   )'t', 
        (char const   )'u',      (char const   )'v',      (char const   )'w',      (char const   )'x', 
        (char const   )'y',      (char const   )'z',      (char const   )'A',      (char const   )'B', 
        (char const   )'C',      (char const   )'D',      (char const   )'E',      (char const   )'F', 
        (char const   )'G',      (char const   )'H',      (char const   )'I',      (char const   )'J', 
        (char const   )'K',      (char const   )'L',      (char const   )'M',      (char const   )'N', 
        (char const   )'O',      (char const   )'P',      (char const   )'Q',      (char const   )'R', 
        (char const   )'S',      (char const   )'T',      (char const   )'U',      (char const   )'V', 
        (char const   )'W',      (char const   )'X',      (char const   )'Y',      (char const   )'Z', 
        (char const   )'0',      (char const   )'1',      (char const   )'2',      (char const   )'3', 
        (char const   )'4',      (char const   )'5',      (char const   )'6',      (char const   )'7', 
        (char const   )'8',      (char const   )'9',      (char const   )'\000'};
/* #pragma merger("0","../lib/trim.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iswspace)(wint_t __wc ) ;
/* #pragma merger("0","../lib/uinttostr.o.i","") */
/* #pragma merger("0","../lib/umaxtostr.o.i","") */
/* #pragma merger("0","../lib/unicodeio.o.i","") */
static int initialized  ;
static int is_utf8  ;
static iconv_t utf8_to_local  ;
/* #pragma merger("0","../lib/userspec.o.i","") */
extern void endpwent(void) ;
static char const   *E_invalid_user  =    "invalid user";
static char const   *E_invalid_group  =    "invalid group";
static char const   *E_bad_spec  =    "invalid spec";
/* #pragma merger("0","../lib/utimecmp.o.i","") */
static Hash_table *ht  ;
static struct fs_res *new_dst_res  ;
/* #pragma merger("0","../lib/utimens.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2), __leaf__)) utimensat)(int __fd ,
                                                                                                char const   *__path ,
                                                                                                struct timespec  const  *__times ,
                                                                                                int __flags ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) futimens)(int __fd ,
                                                                               struct timespec  const  *__times ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) utimes)(char const   *__file ,
                                                                                             struct timeval  const  *__tvp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) lutimes)(char const   *__file ,
                                                                                              struct timeval  const  *__tvp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) futimesat)(int __fd ,
                                                                                char const   *__file ,
                                                                                struct timeval  const  *__tvp ) ;
static int utimensat_works_really  ;
/* #pragma merger("0","../lib/vasnprintf.o.i","") */
extern  __attribute__((__nothrow__)) int snprintf(char * __restrict  __s , size_t __maxlen ,
                                                  char const   * __restrict  __format 
                                                  , ...) ;
extern int __builtin_signbitl() ;
extern int __builtin_signbit() ;
/* #pragma merger("0","../lib/vasprintf.o.i","") */
/* #pragma merger("0","../lib/verror.o.i","") */
extern void error_at_line(int __status , int __errnum , char const   *__fname , unsigned int __lineno ,
                          char const   *__format  , ...) ;
/* #pragma merger("0","../lib/version-etc-fsf.o.i","") */
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
/* #pragma merger("0","../lib/version-etc.o.i","") */
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
  char *__cil_tmp19 ;
  char *__cil_tmp20 ;
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
  fputs_unlocked((char const   */* __restrict  */)tmp___0, (FILE */* __restrict  */)stream);
  }
  {
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
  case_0: /* CIL Label */ 
  {
  abort();
  }
  case_1: /* CIL Label */ 
  {
  tmp___1 = gettext("Written by %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___1,
          *(authors + 0));
  }
  goto switch_break;
  case_2: /* CIL Label */ 
  {
  tmp___2 = gettext("Written by %s and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___2,
          *(authors + 0), *(authors + 1));
  }
  goto switch_break;
  case_3: /* CIL Label */ 
  {
  tmp___3 = gettext("Written by %s, %s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___3,
          *(authors + 0), *(authors + 1), *(authors + 2));
  }
  goto switch_break;
  case_4: /* CIL Label */ 
  {
  tmp___4 = gettext("Written by %s, %s, %s,\nand %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___4,
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3));
  }
  goto switch_break;
  case_5: /* CIL Label */ 
  {
  tmp___5 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___5,
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4));
  }
  goto switch_break;
  case_6: /* CIL Label */ 
  {
  tmp___6 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___6,
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5));
  }
  goto switch_break;
  case_7: /* CIL Label */ 
  {
  tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___7,
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5), *(authors + 6));
  }
  goto switch_break;
  case_8: /* CIL Label */ 
  {
  tmp___8 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___8,
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5), *(authors + 6), *(authors + 7));
  }
  goto switch_break;
  case_9: /* CIL Label */ 
  {
  tmp___9 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___9,
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));
  }
  goto switch_break;
  switch_default: /* CIL Label */ 
  {
  tmp___10 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
  fprintf((FILE */* __restrict  */)stream, (char const   */* __restrict  */)tmp___10,
          *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
          *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));
  }
  goto switch_break;
  switch_break: /* CIL Label */ ;
  }
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
  void *__cil_tmp10 ;

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
  while_break: /* CIL Label */ ;
  }
  {
  version_etc_arn(stream, command_name, package, version, (char const   * const  *)(authtab),
                  n_authors);
  }
  return;
}
}
/* #pragma merger("0","../lib/vfprintf.o.i","") */
/* #pragma merger("0","../lib/vprintf.o.i","") */
/* #pragma merger("0","../lib/write-any-file.o.i","") */
static _Bool initialized___0  ;
static _Bool can_write  ;
/* #pragma merger("0","../lib/xalloc-die.o.i","") */
 __attribute__((__noreturn__)) void xalloc_die(void) ;
void xalloc_die(void) 
{ 
  char *tmp ;
  char *__cil_tmp2 ;

  {
  {
  tmp = gettext("memory exhausted");
  error((int )exit_failure, 0, "%s", tmp);
  abort();
  }
}
}
/* #pragma merger("0","../lib/xasprintf.o.i","") */
/* #pragma merger("0","../lib/xfreopen.o.i","") */
/* #pragma merger("0","../lib/xfts.o.i","") */
/* #pragma merger("0","../lib/xgetcwd.o.i","") */
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) getcwd)(char *__buf ,
                                                                               size_t __size ) ;
/* #pragma merger("0","../lib/xgethostname.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) gethostname)(char *__name ,
                                                                                                  size_t __len ) ;
/* #pragma merger("0","../lib/xmalloc.o.i","") */
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
/* #pragma merger("0","../lib/xmemcoll.o.i","") */
/* #pragma merger("0","../lib/xmemxfrm.o.i","") */
/* #pragma merger("0","../lib/xnanosleep.o.i","") */
/* #pragma merger("0","../lib/xprintf.o.i","") */
/* #pragma merger("0","../lib/xreadlink.o.i","") */
/* #pragma merger("0","../lib/xstriconv.o.i","") */
/* #pragma merger("0","../lib/xstrndup.o.i","") */
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1), __leaf__)) strndup)(char const   *__string ,
                                                                                                size_t __n )  __attribute__((__malloc__)) ;
/* #pragma merger("0","../lib/xstrtod.o.i","") */
/* #pragma merger("0","../lib/xstrtoimax.o.i","") */
extern  __attribute__((__nothrow__)) intmax_t ( __attribute__((__leaf__)) strtoimax)(char const   * __restrict  __nptr ,
                                                                                     char ** __restrict  __endptr ,
                                                                                     int __base ) ;
/* #pragma merger("0","../lib/xstrtol-error.o.i","") */
/* #pragma merger("0","../lib/xstrtol.o.i","") */
/* #pragma merger("0","../lib/xstrtold.o.i","") */
/* #pragma merger("0","../lib/xstrtoul.o.i","") */
/* #pragma merger("0","../lib/xstrtoumax.o.i","") */
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
  while_break: /* CIL Label */ ;
  }
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
  while_break: /* CIL Label */ ;
  }
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
      {
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
      case_105: /* CIL Label */ 
      if ((int )*(*(p + 0) + 2) == 66) {
        suffixes += 2;
      }
      goto switch_break;
      case_66: /* CIL Label */ 
      case_68: /* CIL Label */ 
      base = 1000;
      suffixes ++;
      goto switch_break;
      switch_break: /* CIL Label */ ;
      }
    }
    {
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
    case_98: /* CIL Label */ 
    {
    overflow = bkm_scale___2(& tmp, 512);
    }
    goto switch_break___0;
    case_66___0: /* CIL Label */ 
    {
    overflow = bkm_scale___2(& tmp, 1024);
    }
    goto switch_break___0;
    case_99: /* CIL Label */ 
    overflow = (strtol_error )0;
    goto switch_break___0;
    case_69: /* CIL Label */ 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 6);
    }
    goto switch_break___0;
    case_71: /* CIL Label */ 
    case_103: /* CIL Label */ 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 3);
    }
    goto switch_break___0;
    case_107: /* CIL Label */ 
    case_75: /* CIL Label */ 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 1);
    }
    goto switch_break___0;
    case_77: /* CIL Label */ 
    case_109: /* CIL Label */ 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 2);
    }
    goto switch_break___0;
    case_80: /* CIL Label */ 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 5);
    }
    goto switch_break___0;
    case_84: /* CIL Label */ 
    case_116: /* CIL Label */ 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 4);
    }
    goto switch_break___0;
    case_119: /* CIL Label */ 
    {
    overflow = bkm_scale___2(& tmp, 2);
    }
    goto switch_break___0;
    case_89: /* CIL Label */ 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 8);
    }
    goto switch_break___0;
    case_90: /* CIL Label */ 
    {
    overflow = bkm_scale_by_power___2(& tmp, base, 7);
    }
    goto switch_break___0;
    switch_default: /* CIL Label */ 
    *val = tmp;
    return ((strtol_error )((unsigned int )err | 2U));
    switch_break___0: /* CIL Label */ ;
    }
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
/* #pragma merger("0","../lib/xvasprintf.o.i","") */
/* #pragma merger("0","../lib/yesno.o.i","") */
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1), __leaf__)) rpmatch)(char const   *__response ) ;
/* #pragma merger("0","../lib/unistr/u8-uctomb-aux.o.i","") */
/* #pragma merger("0","../lib/unistr/u8-uctomb.o.i","") */
/* #pragma merger("0","version.o.i","") */
char const   *Version  =    "8.1";
