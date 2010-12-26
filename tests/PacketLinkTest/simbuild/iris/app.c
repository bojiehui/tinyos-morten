#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 149 "/usr/lib/gcc/i486-linux-gnu/4.4.3/include/stddef.h" 3
typedef int ptrdiff_t;
#line 211
typedef unsigned int size_t;
#line 323
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 37 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__ 
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__ 
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__ 
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__ 
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__ 
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__ 
typedef unsigned long long int uint_fast64_t;
#line 126
typedef int intptr_t;


typedef unsigned int uintptr_t;








__extension__ 
typedef long long int intmax_t;
__extension__ 
typedef unsigned long long int uintmax_t;
# 35 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 292
#line 288
typedef struct __nesc_unnamed4242 {

  long long int quot;
  long long int rem;
} imaxdiv_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;





static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;
#line 276
static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 294
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 326
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 385
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 43 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 64
extern void *memset(void *__s, int __c, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 127
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 142
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 40 "/usr/include/xlocale.h" 3
#line 28
typedef struct __locale_struct {


  struct locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 260 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 397
extern size_t strlen(const char *__s) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 102 "/usr/include/stdlib.h" 3
#line 98
typedef struct __nesc_unnamed4243 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4244 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4245 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 158
__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 31 "/usr/include/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ 
#line 47
typedef signed long long int __int64_t;
__extension__ 
#line 48
typedef unsigned long long int __uint64_t;







__extension__ 
#line 56
typedef long long int __quad_t;
__extension__ 
#line 57
typedef unsigned long long int __u_quad_t;
#line 134
__extension__ 
#line 134
typedef __u_quad_t __dev_t;
__extension__ 
#line 135
typedef unsigned int __uid_t;
__extension__ 
#line 136
typedef unsigned int __gid_t;
__extension__ 
#line 137
typedef unsigned long int __ino_t;
__extension__ 
#line 138
typedef __u_quad_t __ino64_t;
__extension__ 
#line 139
typedef unsigned int __mode_t;
__extension__ 
#line 140
typedef unsigned int __nlink_t;
__extension__ 
#line 141
typedef long int __off_t;
__extension__ 
#line 142
typedef __quad_t __off64_t;
__extension__ 
#line 143
typedef int __pid_t;
__extension__ 
#line 144
typedef struct __nesc_unnamed4246 {
#line 144
  int __val[2];
} 
#line 144
__fsid_t;
__extension__ 
#line 145
typedef long int __clock_t;
__extension__ 
#line 146
typedef unsigned long int __rlim_t;
__extension__ 
#line 147
typedef __u_quad_t __rlim64_t;
__extension__ 
#line 148
typedef unsigned int __id_t;
__extension__ 
#line 149
typedef long int __time_t;
__extension__ 
#line 150
typedef unsigned int __useconds_t;
__extension__ 
#line 151
typedef long int __suseconds_t;

__extension__ 
#line 153
typedef int __daddr_t;
__extension__ 
#line 154
typedef long int __swblk_t;
__extension__ 
#line 155
typedef int __key_t;


__extension__ 
#line 158
typedef int __clockid_t;


__extension__ 
#line 161
typedef void *__timer_t;


__extension__ 
#line 164
typedef long int __blksize_t;




__extension__ 
#line 169
typedef long int __blkcnt_t;
__extension__ 
#line 170
typedef __quad_t __blkcnt64_t;


__extension__ 
#line 173
typedef unsigned long int __fsblkcnt_t;
__extension__ 
#line 174
typedef __u_quad_t __fsblkcnt64_t;


__extension__ 
#line 177
typedef unsigned long int __fsfilcnt_t;
__extension__ 
#line 178
typedef __u_quad_t __fsfilcnt64_t;

__extension__ 
#line 180
typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ 
#line 189
typedef int __intptr_t;


__extension__ 
#line 192
typedef unsigned int __socklen_t;
# 35 "/usr/include/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 62
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 100
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 76 "/usr/include/time.h" 3
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 201
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 24 "/usr/include/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 29
typedef struct __nesc_unnamed4247 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 69 "/usr/include/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 78
#line 67
typedef struct __nesc_unnamed4248 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 30 "/usr/include/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 235 "/usr/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 50 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;






#line 53
typedef union __nesc_unnamed4249 {

  char __size[36];
  long int __align;
} pthread_attr_t;
#line 70
#line 67
typedef struct __pthread_internal_slist {

  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#line 104
#line 76
typedef union __nesc_unnamed4250 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;





    unsigned int __nusers;
    __extension__ union  {

      int __spins;
      __pthread_slist_t __list;
    } ;
  } 
  __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;





#line 106
typedef union __nesc_unnamed4251 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 130
#line 115
typedef union __nesc_unnamed4252 {

  struct __nesc_unnamed4253 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 132
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 189
#line 150
typedef union __nesc_unnamed4255 {
#line 170
  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;





#line 191
typedef union __nesc_unnamed4257 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 206
typedef union __nesc_unnamed4258 {

  char __size[20];
  long int __align;
} pthread_barrier_t;





#line 212
typedef union __nesc_unnamed4259 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 349 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 471
extern void *malloc(size_t __size) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 488
extern void free(void *__ptr) __attribute((__nothrow__)) ;
#line 737
typedef int (*__compar_fn_t)(const void *arg_0x40331bc8, const void *arg_0x40331d60);
#line 771
__extension__ 
#line 788
__extension__ 
# 38 "/usr/include/bits/mathdef.h" 3
typedef long double float_t;

typedef long double double_t;
# 110 "/usr/include/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__nothrow__)) ;
#line 154
extern double pow(double __x, double __y) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__nothrow__)) ;
#line 185
extern double floor(double __x) __attribute((__nothrow__)) __attribute((const)) ;
#line 251
extern double erfc(double arg_0x40375e88) __attribute((__nothrow__)) ;
# 202 "/usr/include/math.h" 3
enum __nesc_unnamed4260 {

  FP_NAN, 

  FP_INFINITE, 

  FP_ZERO, 

  FP_SUBNORMAL, 

  FP_NORMAL
};
#line 302
#line 295
typedef enum __nesc_unnamed4261 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 320
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 48 "/usr/include/ctype.h" 3
enum __nesc_unnamed4262 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 65
typedef struct _IO_FILE __FILE;
# 95 "/usr/include/wchar.h" 3
#line 83
typedef struct __nesc_unnamed4263 {

  int __count;
  union __nesc_unnamed4264 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h" 3
#line 22
typedef struct __nesc_unnamed4265 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 27
typedef struct __nesc_unnamed4266 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#line 53
typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 40 "/usr/lib/gcc/i486-linux-gnu/4.4.3/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 170
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 206
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 271
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 364
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 91 "/usr/include/stdio.h" 3
typedef _G_fpos_t fpos_t;
#line 145
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 219
extern int fflush(FILE *__stream);
#line 283
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__nothrow__)) ;
#line 333
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 363
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 831
extern int fileno(FILE *__stream) __attribute((__nothrow__)) ;
# 65 "/home/morten/workspace/tinyos/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4267 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 65 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/home/morten/workspace/tinyos/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 98
struct __nesc_attr_atleastonce {
};
#line 99
struct __nesc_attr_exactlyonce {
};
# 102 "/usr/lib/gcc/i486-linux-gnu/4.4.3/include/stdarg.h" 3
typedef __gnuc_va_list va_list;
# 9 "/home/morten/workspace/tinyos/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x404c5c78), 
int (*key_eq_fn)(void *arg_0x404c40e8, void *arg_0x404c4260));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4268 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4269 {
  SIM_LOG_OUTPUT_COUNT = 204U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/home/morten/workspace/tinyos/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/home/morten/workspace/tinyos/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 114
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 130
static inline void expand_heap(heap_t *heap);
#line 144
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 158
static void swap(node_t *first, node_t *second);
#line 171
static void down_heap(heap_t *heap, int findex);
#line 197
static void up_heap(heap_t *heap, int findex);
# 44 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 57 "/usr/include/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 51 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4270 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 83
#line 73
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/home/morten/workspace/tinyos/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 133
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
#line 233
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/home/morten/workspace/tinyos/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x405ec618, int arg_0x405ec770);
static double RandomUniform(void );
# 51 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 84
void sim_noise_create_model(uint16_t node_id)   ;
#line 97
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 113
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 192
void sim_noise_dist(uint16_t node_id)   ;
#line 245
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 283
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id)   ;
#line 364
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 419
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);
# 6 "/home/morten/workspace/tinyos/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4271 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4272 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 40 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4273 {
#line 40
  int notUsed;
} 
#line 40
TMilli;
typedef struct __nesc_unnamed4274 {
#line 41
  int notUsed;
} 
#line 41
T32khz;
typedef struct __nesc_unnamed4275 {
#line 42
  int notUsed;
} 
#line 42
TMicro;
# 10 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioConfig.h"
typedef TMicro TRadio;
# 45 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 45 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 38
typedef nx_struct ieee154_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_header_t;
#line 75
enum ieee154_fcf_mask_enums {
  IEEE154_TYPE_MASK = 7, 
  IEEE154_ADDR_MASK = 3
};
# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 30 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioMsg.h"
#line 15
typedef nx_struct tossim_header {
  nx_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t group;
  nxle_uint16_t dest;
  nxle_uint16_t src;


  network_header_t network;


  nx_am_id_t type;
} __attribute__((packed)) 

tossim_header_t;



#line 32
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;
#line 50
#line 36
typedef struct tossim_metadata {
  nx_int8_t strength;








  link_metadata_t link;

  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
} tossim_metadata_t;
# 83 "/home/morten/workspace/tinyos/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 53 "/home/morten/workspace/tinyos/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/home/morten/workspace/tinyos/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;
# 51 "/home/morten/workspace/tinyos/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 7 "src/PacketLinkTest.h"
enum __nesc_unnamed4280 {
  AM_TEST_MSG = 10
};



#line 11
typedef nx_struct test_msg {
  nx_uint8_t data[28];
} __attribute__((packed)) test_msg_t;
# 25 "/home/morten/workspace/tinyos/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4281 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4282 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/home/morten/workspace/tinyos/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4283 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/home/morten/workspace/tinyos/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4284 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4285 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4286 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4287 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4288 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4289 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4290 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4291 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4292 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4293 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4294 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 44 "/home/morten/workspace/tinyos/tos/platforms/iris/sim/platform_hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 40 "/home/morten/workspace/tinyos/tos/types/IeeeEui64.h"
enum __nesc_unnamed4296 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 35 "/home/morten/workspace/tinyos/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 39
typedef struct __nesc_unnamed4297 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4298 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4299 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4300 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 74
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 33 "/home/morten/workspace/tinyos/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 52 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4301 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4302 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4303 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4304 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4305 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4306 {

  uint8_t flat;
  struct __nesc_unnamed4307 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4308 {

  uint8_t flat;
  struct __nesc_unnamed4309 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4310 {

  uint8_t flat;
  struct __nesc_unnamed4311 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4312 {

  uint8_t flat;
  struct __nesc_unnamed4313 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4314 {

  uint8_t flat;
  struct __nesc_unnamed4315 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4316 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4317 {

  uint8_t flat;
  struct __nesc_unnamed4318 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4319 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4320 {

  uint8_t flat;
  struct __nesc_unnamed4321 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4322 {

  uint8_t flat;
  struct __nesc_unnamed4323 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4324 {

  uint8_t flat;
  struct __nesc_unnamed4325 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4326 {

  uint8_t flat;
  struct __nesc_unnamed4327 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 45 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
typedef TMilli PacketLinkTestP$CancelTimer$precision_tag;
typedef TMilli PacketLinkTestP$Timer$precision_tag;
typedef TRadio /*TossimRadioC.TossimRadioP*/TossimRadioP$0$PacketTimeStamp$precision_tag;
typedef uint32_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$PacketTimeStamp$size_type;
typedef TRadio /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$LocalTime$precision_tag;
typedef TMilli /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$precision_tag;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef uint16_t RandomMlcgC$SeedInit$parameter;
typedef TRadio /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampRadio$precision_tag;
typedef uint32_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampRadio$size_type;
typedef TRadio /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$LocalTimeRadio$precision_tag;
typedef TMilli /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$LocalTimeMilli$precision_tag;
typedef TMilli /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampMilli$precision_tag;
typedef uint32_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampMilli$size_type;
typedef uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketRSSI$value_type;
typedef TRadio /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeStamp$precision_tag;
typedef uint32_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeStamp$size_type;
typedef TRadio /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$LocalTime$precision_tag;
typedef uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTransmitPower$value_type;
typedef uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$value_type;
typedef uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketLinkQuality$value_type;
enum AMQueueP$__nesc_unnamed4328 {
  AMQueueP$NUM_CLIENTS = 1U
};
# 60 "/home/morten/workspace/tinyos/tos/interfaces/Boot.nc"
static void PacketLinkTestP$Boot$booted(void );
# 113 "/home/morten/workspace/tinyos/tos/interfaces/SplitControl.nc"
static void PacketLinkTestP$RadioControl$startDone(error_t error);
#line 138
static void PacketLinkTestP$RadioControl$stopDone(error_t error);
# 110 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
static void PacketLinkTestP$Send$sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



PacketLinkTestP$Receive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static void PacketLinkTestP$CancelTimer$fired(void );
#line 83
static void PacketLinkTestP$Timer$fired(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 62
static error_t MotePlatformP$SubInit$default$init(void );
#line 62
static error_t MotePlatformP$PlatformInit$init(void );
# 44 "/home/morten/workspace/tinyos/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(
# 49 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x4069e650);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$default$runTask(
# 49 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x4069e650);
# 57 "/home/morten/workspace/tinyos/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP$Scheduler$init(void );







static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
# 44 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMote.nc"
static void SimMoteP$SimMote$setEuid(long long int euid);


static int SimMoteP$SimMote$getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP$SimMote$turnOff(void );
#line 48
static void SimMoteP$SimMote$turnOn(void );
#line 43
static long long int SimMoteP$SimMote$getEuid(void );


static bool SimMoteP$SimMote$isOn(void );
#line 45
static long long int SimMoteP$SimMote$getStartTime(void );
# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$checkFrame(message_t *msg);
#line 40
static am_addr_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$destination(message_t *msg);








static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setGroup(message_t *msg, am_group_t grp);
# 41 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/CsmaConfig.nc"
static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$CsmaConfig$requiresSoftwareCCA(message_t *msg);
# 86 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$reportChannelError(void );
#line 80
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$requiresAckWait(message_t *msg);






static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$isAckPacket(message_t *msg);






static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$getAckTimeout(void );





static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$setAckRequired(message_t *msg, bool ack);
#line 75
static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$requiresAckReply(message_t *msg);
# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RadioAlarm$fired(void );
# 52 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t number);





static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$reportChannelError(void );
#line 42
static uint8_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$getSequenceNumber(message_t *msg);




static am_addr_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$getSender(message_t *msg);
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getInitialBackoff(message_t *msg);










static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getMinimumBackoff(void );





static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getTransmitBarrier(message_t *msg);
# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$default$fired(
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x4092aaf0);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$wait(
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x4092aaf0, 
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
uint16_t timeout);




static void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$cancel(
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x4092aaf0);
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$isFree(
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x4092aaf0);
# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static uint16_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$getNow(
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x4092aaf0);
# 61 "/home/morten/workspace/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$LocalTime$get(void );
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$sendDone(message_t *msg, error_t error);
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubReceive$receive(message_t *msg);
# 59 "/home/morten/workspace/tinyos/tos/interfaces/SendNotifier.nc"
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SendNotifier$default$aboutToSend(
# 47 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x4095e430, 
# 59 "/home/morten/workspace/tinyos/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Packet.nc"
static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$maxPayloadLength(void );
#line 94
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$payloadLength(message_t *msg);









static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$maxPayloadLength(void );
#line 54
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$headerLength(message_t *msg);
# 80 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$send(
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40960cf8, 
# 80 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$getPayload(
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40960cf8, 
# 132 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 96
static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$cancel(
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40960cf8, 
# 92 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
message_t * msg);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Snoop$default$receive(
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x4095fda0, 
# 71 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 68 "/home/morten/workspace/tinyos/tos/interfaces/AMPacket.nc"
static am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$address(void );









static am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$destination(
#line 74
message_t * amsg);
#line 121
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$type(
#line 143
message_t * amsg);
#line 162
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$isForMe(
#line 133
message_t * amsg);
#line 187
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setGroup(
#line 184
message_t * amsg, 


am_group_t grp);







static am_group_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$localGroup(void );
# 50 "/home/morten/workspace/tinyos/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );




static am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$sendDone(message_t *msg, error_t error);
# 102 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
static void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$granted(void );
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$send(message_t *msg);
#line 64
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$cancel(message_t *msg);
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$Init$init(void );
# 79 "/home/morten/workspace/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
#line 53
static bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );








static bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);







static resource_client_id_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
# 53 "/home/morten/workspace/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 52 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d1318);
# 61 "/home/morten/workspace/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d1318);
# 65 "/home/morten/workspace/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d0010);
# 59 "/home/morten/workspace/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d0010);
# 120 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d28e0);
# 97 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d28e0);
# 88 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d28e0);
# 102 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$default$granted(
# 51 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d28e0);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void Ieee154MessageLayerC$SubSend$sendDone(message_t *msg, error_t error);
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t *Ieee154MessageLayerC$SubReceive$receive(message_t *msg);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Packet.nc"
static uint8_t Ieee154MessageLayerC$Packet$payloadLength(
#line 74
message_t * msg);
# 97 "/home/morten/workspace/tinyos/tos/interfaces/Ieee154Send.nc"
static void Ieee154MessageLayerC$Ieee154Send$default$sendDone(message_t *msg, error_t error);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



Ieee154MessageLayerC$Ieee154Receive$default$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void TinyosNetworkLayerC$SubSend$sendDone(message_t *msg, error_t error);
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t *TinyosNetworkLayerC$SubReceive$receive(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t TinyosNetworkLayerC$Ieee154Packet$payloadLength(message_t *msg);
#line 43
static uint8_t TinyosNetworkLayerC$Ieee154Packet$headerLength(message_t *msg);
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t TinyosNetworkLayerC$TinyosSend$send(message_t *msg);
#line 64
static error_t TinyosNetworkLayerC$TinyosSend$cancel(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t TinyosNetworkLayerC$TinyosPacket$payloadLength(message_t *msg);









static uint8_t TinyosNetworkLayerC$TinyosPacket$maxPayloadLength(void );
#line 54
static void TinyosNetworkLayerC$TinyosPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t TinyosNetworkLayerC$TinyosPacket$headerLength(message_t *msg);





static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$payloadLength(message_t *msg);









static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$maxPayloadLength(void );
#line 54
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$headerLength(message_t *msg);
# 120 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDSN(message_t *msg);
#line 75
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isAckFrame(message_t *msg);
#line 156
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$createDataFrame(message_t *msg);
#line 125
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getSrcAddr(message_t *msg);
#line 63
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isDataFrame(message_t *msg);
#line 99
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getAckRequired(message_t *msg);
#line 94
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$localAddr(void );
#line 162
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$requiresAckWait(message_t *msg);
#line 146
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDestAddr(message_t *msg, uint16_t addr);
#line 115
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setFramePending(message_t *msg, bool pending);
#line 136
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDestPan(message_t *msg, uint16_t pan);
#line 184
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isForMe(message_t *msg);
#line 105
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setAckRequired(message_t *msg, bool ack);
#line 168
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$requiresAckReply(message_t *msg);
#line 141
static uint16_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDestAddr(message_t *msg);
#line 110
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getFramePending(message_t *msg);
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$sendDone(message_t *msg, error_t error);
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubReceive$receive(message_t *msg);
#line 46
static bool /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubReceive$header(message_t *msg);
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$send(message_t *msg);
#line 64
static error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$cancel(message_t *msg);
# 80 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Neighborhood$evicted(uint8_t idx);
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Init$init(void );
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP$NeighborhoodFlag$get(
# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40a8dbb8, 
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP$NeighborhoodFlag$set(
# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40a8dbb8, 
# 51 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP$Neighborhood$insertNode(am_addr_t id);
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t NeighborhoodP$Init$init(void );
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$sendDone(message_t *msg, error_t error);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$runTask(void );
# 83 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$fired(void );
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$send(message_t *msg);
#line 64
static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$cancel(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$payloadLength(message_t *msg);









static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$maxPayloadLength(void );
#line 54
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$headerLength(message_t *msg);
#line 65
static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$metadataLength(message_t *msg);
# 65 "/home/morten/workspace/tinyos/tos/interfaces/PacketLink.nc"
static uint16_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetryDelay(
#line 62
message_t * msg);
#line 46
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetries(
#line 56
message_t * msg);
#line 53
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$wasDelivered(
#line 68
message_t * msg);
# 109 "/home/morten/workspace/tinyos/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 64 "/home/morten/workspace/tinyos/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 58 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 70 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
#line 61
static HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 67
static void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size t);
# 44 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 53 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t control);
# 48 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 78 "/home/morten/workspace/tinyos/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 136 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 83 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c32868);
# 64 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 48 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c32868, 
# 64 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 48 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c32868, 
# 73 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 48 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c32868);
# 82 "/home/morten/workspace/tinyos/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 104 "/home/morten/workspace/tinyos/tos/interfaces/SplitControl.nc"
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$start(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SoftwareInit$init(void );
# 69 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioState.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioState$done(void );
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$send(message_t *msg);
#line 64
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$cancel(message_t *msg);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$runTask(void );
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioReceive$receive(message_t *msg);
#line 46
static bool /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioReceive$header(message_t *msg);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask$runTask(void );
#line 75
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask$runTask(void );
# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$ready(void );
#line 56
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$sendDone(error_t error);
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioChannel$default$setChannelDone(void );
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$run(void );
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void TaskletC$tasklet$runTask(void );
# 72 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC$Tasklet$suspend(void );






static void TaskletC$Tasklet$resume(void );
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubSend$sendDone(error_t error);
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubReceive$receive(message_t *msg);
#line 46
static bool /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubReceive$header(message_t *msg);
# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$fired(void );
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$send(message_t *msg);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom$runTask(void );
# 52 "/home/morten/workspace/tinyos/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC$Random$rand16(void );
#line 46
static uint32_t RandomMlcgC$Random$rand32(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t RandomMlcgC$Init$init(void );
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubSend$sendDone(error_t error);
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubReceive$receive(message_t *msg);
#line 46
static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubReceive$header(message_t *msg);
# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$fired(void );
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$send(message_t *msg);
# 59 "/home/morten/workspace/tinyos/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 85
static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t MetadataFlagsLayerC$RadioPacket$payloadLength(message_t *msg);









static uint8_t MetadataFlagsLayerC$RadioPacket$maxPayloadLength(void );
#line 54
static void MetadataFlagsLayerC$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t MetadataFlagsLayerC$RadioPacket$headerLength(message_t *msg);
#line 65
static uint8_t MetadataFlagsLayerC$RadioPacket$metadataLength(message_t *msg);
# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static void MetadataFlagsLayerC$PacketFlag$clear(
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40d0d1c0, 
# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool MetadataFlagsLayerC$PacketFlag$get(
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40d0d1c0, 
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);




static void MetadataFlagsLayerC$PacketFlag$setValue(
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40d0d1c0, 
# 45 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg, bool value);




static void MetadataFlagsLayerC$PacketFlag$set(
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40d0d1c0, 
# 50 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubSend$sendDone(error_t error);
# 52 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
static void /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubCCA$done(error_t error);
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$RadioSend$send(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$payloadLength(message_t *msg);









static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$maxPayloadLength(void );
#line 54
static void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$headerLength(message_t *msg);
#line 65
static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$metadataLength(message_t *msg);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/PacketTimeStamp.nc"
static void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampRadio$set(
#line 73
message_t * msg, 




/*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampRadio$size_type value);
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioCCA$request(void );
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioState$turnOn(void );
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$payloadLength(message_t *msg);









static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$maxPayloadLength(void );
#line 54
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$headerLength(message_t *msg);
#line 65
static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$metadataLength(message_t *msg);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask$runTask(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Init$init(void );
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketField.nc"
static /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$value_type /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$get(message_t *msg);
#line 40
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$isSet(message_t *msg);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask$runTask(void );
# 60 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$receive(message_t *msg);
#line 59
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$acked(message_t *msg);

static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$shouldAck(message_t *msg);
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioSend$send(message_t *msg);
# 48 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC$Model$clearChannel(void );
static void CpmModelC$Model$setPendingTransmission(void );
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



AMPacketInjectorP$SubReceive$receive(
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
am_id_t arg_0x40e88d08, 
# 71 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



AMPacketInjectorP$Receive$default$receive(
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
am_id_t arg_0x40e88600, 
# 71 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
static error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 96
static error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$cancel(
#line 92
message_t * msg);
# 100 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
static void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 48 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40eb2730, 
# 103 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 46 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40eb5cb0, 
# 67 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(
# 46 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40eb5cb0, 
# 122 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 89
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$cancel(
# 46 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40eb5cb0, 
# 85 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
message_t * msg);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 46 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40eb5cb0, 
# 96 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 104 "/home/morten/workspace/tinyos/tos/interfaces/SplitControl.nc"
static error_t PacketLinkTestP$RadioControl$start(void );
# 80 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
static error_t PacketLinkTestP$Send$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

PacketLinkTestP$Send$getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 96
static error_t PacketLinkTestP$Send$cancel(
#line 92
message_t * msg);
# 73 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static void PacketLinkTestP$CancelTimer$startOneShot(uint32_t dt);
# 46 "/home/morten/workspace/tinyos/tos/interfaces/PacketLink.nc"
static void PacketLinkTestP$PacketLink$setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);






static void PacketLinkTestP$PacketLink$setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool PacketLinkTestP$PacketLink$wasDelivered(
#line 68
message_t * msg);
# 64 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static void PacketLinkTestP$Timer$startPeriodic(uint32_t dt);
# 21 "src/PacketLinkTestP.nc"
message_t PacketLinkTestP$data[1000];
bool PacketLinkTestP$dataBusy[1000];





static inline void PacketLinkTestP$Boot$booted(void );




static inline void PacketLinkTestP$RadioControl$startDone(error_t error);





static inline void PacketLinkTestP$RadioControl$stopDone(error_t error);





static inline void PacketLinkTestP$Timer$fired(void );
#line 71
static inline void PacketLinkTestP$CancelTimer$fired(void );



static void PacketLinkTestP$Send$sendDone(message_t *msg, error_t error);
#line 90
static inline message_t *PacketLinkTestP$Receive$receive(message_t *msg, void *payload, uint8_t len);
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 62
static error_t PlatformP$MeasureClock$init(void );
# 51 "/home/morten/workspace/tinyos/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void );






static inline error_t PlatformP$Init$init(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 44 "/home/morten/workspace/tinyos/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 41
static void MotePlatformP$SerialIdPin$clr(void );
# 26 "/home/morten/workspace/tinyos/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 38
static inline error_t MotePlatformP$SubInit$default$init(void );
# 59 "/home/morten/workspace/tinyos/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
# 21 "/home/morten/workspace/tinyos/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t SimMainP$SoftwareInit$init(void );
# 60 "/home/morten/workspace/tinyos/tos/interfaces/Boot.nc"
static void SimMainP$Boot$booted(void );
# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
static error_t SimMainP$PlatformInit$init(void );
# 57 "/home/morten/workspace/tinyos/tos/interfaces/Scheduler.nc"
static void SimMainP$Scheduler$init(void );







static bool SimMainP$Scheduler$runNextTask(void );
# 51 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$runTask(
# 49 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x4069e650);



enum SimSchedulerBasicP$__nesc_unnamed4329 {

  SimSchedulerBasicP$NUM_TASKS = 13U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void );







static void SimSchedulerBasicP$sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP$popTask(void );
#line 139
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void );
#line 180
static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
#line 205
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 50 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline long long int SimMoteP$SimMote$getEuid(void );


static inline void SimMoteP$SimMote$setEuid(long long int e);


static inline long long int SimMoteP$SimMote$getStartTime(void );


static inline bool SimMoteP$SimMote$isOn(void );



static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP$SimMote$turnOn(void );
#line 85
static inline void SimMoteP$SimMote$turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 120 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getDSN(message_t *msg);
#line 75
static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$isAckFrame(message_t *msg);
#line 156
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$createDataFrame(message_t *msg);
#line 125
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getSrcAddr(message_t *msg);
#line 63
static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$isDataFrame(message_t *msg);
#line 94
static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$requiresAckWait(message_t *msg);
#line 146
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDestPan(message_t *msg, uint16_t pan);
#line 105
static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setAckRequired(message_t *msg, bool ack);
#line 168
static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$requiresAckReply(message_t *msg);
#line 141
static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getDestAddr(message_t *msg);
# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RadioAlarm$getNow(void );
# 73 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$requiresAckWait(message_t *msg);




static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$isAckPacket(message_t *msg);




static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack);




static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$setAckRequired(message_t *msg, bool ack);




static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$requiresAckReply(message_t *msg);




static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack);









static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$getAckTimeout(void );




static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$reportChannelError(void );








static inline uint8_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$getSequenceNumber(message_t *msg);




static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$getSender(message_t *msg);




static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$reportChannelError(void );








static inline am_addr_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$destination(message_t *msg);




static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setDestination(message_t *msg, am_addr_t addr);









static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setSource(message_t *msg, am_addr_t addr);









static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setGroup(message_t *msg, am_group_t grp);




static inline error_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$checkFrame(message_t *msg);









static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$CsmaConfig$requiresSoftwareCCA(message_t *msg);






enum /*TossimRadioC.TossimRadioP*/TossimRadioP$0$__nesc_unnamed4330 {

  TossimRadioP$0$TRAFFIC_UPDATE_PERIOD = 100, 
  TossimRadioP$0$TRAFFIC_MAX_BYTES = (uint16_t )(/*TossimRadioC.TossimRadioP*/TossimRadioP$0$TRAFFIC_UPDATE_PERIOD * 1000UL / 32)
};
#line 239
static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getMinimumBackoff(void );








static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getInitialBackoff(message_t *msg);








static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getCongestionBackoff(message_t *msg);






static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getTransmitBarrier(message_t *msg);
#line 280
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RadioAlarm$fired(void );
# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$fired(
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x4092aaf0);





enum /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$__nesc_unnamed4331 {
  RadioAlarmP$0$NO_CLIENT = 0xFF, 
  RadioAlarmP$0$TICKS_PER_SECOND = 1048576ULL
};

uint8_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[1000];
sim_event_t */*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$currentEvent[1000];

static inline sim_time_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$clock_to_sim(sim_time_t t);





static inline sim_time_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$sim_to_clock(sim_time_t t);







static inline bool /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$isFree(uint8_t id);



static inline void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$alarm_fired(sim_event_t *evt);










static void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$wait(uint8_t id, uint16_t timeout);
#line 110
static inline void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$cancel(uint8_t id);
#line 122
static uint16_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$getNow(uint8_t id);
#line 134
static uint32_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$LocalTime$get(void );
#line 146
static inline void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$default$fired(uint8_t id);
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$send(message_t *msg);
#line 64
static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$cancel(message_t *msg);
# 59 "/home/morten/workspace/tinyos/tos/interfaces/SendNotifier.nc"
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SendNotifier$aboutToSend(
# 47 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x4095e430, 
# 59 "/home/morten/workspace/tinyos/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$sendDone(
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40960cf8, 
# 103 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Snoop$receive(
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x4095fda0, 
# 71 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$payloadLength(message_t *msg);









static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$maxPayloadLength(void );
#line 54
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$headerLength(message_t *msg);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Receive$receive(
# 45 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x4095f708, 
# 71 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$checkFrame(message_t *msg);
#line 40
static am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$destination(message_t *msg);








static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setGroup(message_t *msg, am_group_t grp);
# 50 "/home/morten/workspace/tinyos/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$ActiveMessageAddress$amAddress(void );




static am_group_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$ActiveMessageAddress$amGroup(void );
# 62 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$getHeader(message_t *msg);




static inline void */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$getPayload(message_t *msg);






static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 93
static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$sendDone(message_t *msg, error_t error);




static __inline error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$cancel(am_id_t id, message_t *msg);
#line 112
static __inline void */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$getPayload(am_id_t id, message_t *msg, uint8_t len);




static inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SendNotifier$default$aboutToSend(am_id_t id, am_addr_t addr, message_t *msg);





static inline message_t */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubReceive$receive(message_t *msg);
#line 141
static inline message_t */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$address(void );




static __inline am_group_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$localGroup(void );




static __inline bool /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$isForMe(message_t *msg);





static __inline am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$destination(message_t *msg);




static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setDestination(message_t *msg, am_addr_t addr);









static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setSource(message_t *msg, am_addr_t addr);




static __inline am_id_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$type(message_t *msg);




static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setType(message_t *msg, am_id_t type);









static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setGroup(message_t *msg, am_group_t grp);










static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$headerLength(message_t *msg);




static inline uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$payloadLength(message_t *msg);




static inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$maxPayloadLength(void );
#line 247
static inline uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$payloadLength(message_t *msg);




static inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$setPayloadLength(message_t *msg, uint8_t len);




static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$maxPayloadLength(void );




static void */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$getPayload(message_t *msg, uint8_t len);
# 65 "/home/morten/workspace/tinyos/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];
am_group_t ActiveMessageAddressC$group[1000];








static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );







static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void );
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$send(message_t *msg);
#line 64
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$cancel(message_t *msg);
# 120 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$release(void );
#line 97
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$immediateRequest(void );
#line 88
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$request(void );
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$sendDone(message_t *msg, error_t error);
# 51 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending[1000];

static inline error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$send(message_t *msg);
#line 68
static inline void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$granted(void );









static inline void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$sendDone(message_t *msg, error_t result);





static inline error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$cancel(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4332 {
#line 49
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[1000][1U];
uint8_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[1000];
uint8_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail[1000];

static inline error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$Init$init(void );




static inline bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void );



static inline bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void );
#line 82
static inline error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 53 "/home/morten/workspace/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 52 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d1318);
# 61 "/home/morten/workspace/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d1318);
# 65 "/home/morten/workspace/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d0010);
# 59 "/home/morten/workspace/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d0010);
# 79 "/home/morten/workspace/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id);
#line 53
static bool /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void );
#line 70
static resource_client_id_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void );
# 102 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d28e0);
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void );
# 69 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
enum /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4333 {
#line 69
  SimpleArbiterP$0$grantedTask = 0U
};
#line 69
typedef int /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4334 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4335 {
#line 63
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[1000];
uint8_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[1000];
uint8_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId[1000];



static inline error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id);
#line 84
static inline error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 97
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 155
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void );









static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$default$granted(uint8_t id);

static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t Ieee154MessageLayerC$RadioPacket$payloadLength(message_t *msg);
#line 43
static uint8_t Ieee154MessageLayerC$RadioPacket$headerLength(message_t *msg);
# 184 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool Ieee154MessageLayerC$Ieee154PacketLayer$isForMe(message_t *msg);
# 97 "/home/morten/workspace/tinyos/tos/interfaces/Ieee154Send.nc"
static void Ieee154MessageLayerC$Ieee154Send$sendDone(message_t *msg, error_t error);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



Ieee154MessageLayerC$Ieee154Receive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void *Ieee154MessageLayerC$getPayload(message_t *msg);
#line 68
static inline uint8_t Ieee154MessageLayerC$Packet$payloadLength(message_t *msg);
#line 127
static inline void Ieee154MessageLayerC$SubSend$sendDone(message_t *msg, error_t error);




static inline void Ieee154MessageLayerC$Ieee154Send$default$sendDone(message_t *msg, error_t error);









static inline message_t *Ieee154MessageLayerC$SubReceive$receive(message_t *msg);








static inline message_t *Ieee154MessageLayerC$Ieee154Receive$default$receive(message_t *msg, void *payload, uint8_t len);
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t TinyosNetworkLayerC$SubSend$send(message_t *msg);
#line 64
static error_t TinyosNetworkLayerC$SubSend$cancel(message_t *msg);
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t *TinyosNetworkLayerC$TinyosReceive$receive(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t TinyosNetworkLayerC$SubPacket$payloadLength(message_t *msg);









static uint8_t TinyosNetworkLayerC$SubPacket$maxPayloadLength(void );
#line 54
static void TinyosNetworkLayerC$SubPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t TinyosNetworkLayerC$SubPacket$headerLength(message_t *msg);
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void TinyosNetworkLayerC$TinyosSend$sendDone(message_t *msg, error_t error);
#line 54
static void TinyosNetworkLayerC$Ieee154Send$sendDone(message_t *msg, error_t error);
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t *TinyosNetworkLayerC$Ieee154Receive$receive(message_t *msg);
# 91 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t TinyosNetworkLayerC$Ieee154Packet$headerLength(message_t *msg);




static inline uint8_t TinyosNetworkLayerC$Ieee154Packet$payloadLength(message_t *msg);
#line 127
static network_header_t *TinyosNetworkLayerC$getHeader(message_t *msg);




static error_t TinyosNetworkLayerC$TinyosSend$send(message_t *msg);







static inline error_t TinyosNetworkLayerC$TinyosSend$cancel(message_t *msg);




enum TinyosNetworkLayerC$__nesc_unnamed4336 {


  TinyosNetworkLayerC$PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t TinyosNetworkLayerC$TinyosPacket$headerLength(message_t *msg);




static inline uint8_t TinyosNetworkLayerC$TinyosPacket$payloadLength(message_t *msg);




static inline void TinyosNetworkLayerC$TinyosPacket$setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t TinyosNetworkLayerC$TinyosPacket$maxPayloadLength(void );
#line 214
static inline void TinyosNetworkLayerC$SubSend$sendDone(message_t *msg, error_t result);







static inline message_t *TinyosNetworkLayerC$SubReceive$receive(message_t *msg);
# 50 "/home/morten/workspace/tinyos/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$ActiveMessageAddress$amAddress(void );
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$payloadLength(message_t *msg);









static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$maxPayloadLength(void );
#line 54
static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$headerLength(message_t *msg);
# 57 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$__nesc_unnamed4337 {

  Ieee154PacketLayerP$0$IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP$0$IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static ieee154_header_t */*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(message_t *msg);
#line 94
static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isDataFrame(message_t *msg);




static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$createDataFrame(message_t *msg);








static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isAckFrame(message_t *msg);










static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$createAckReply(message_t *data, message_t *ack);








static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$verifyAckReply(message_t *data, message_t *ack);







static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getAckRequired(message_t *msg);




static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setAckRequired(message_t *msg, bool ack);







static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getFramePending(message_t *msg);




static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setFramePending(message_t *msg, bool pending);







static inline uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDSN(message_t *msg);




static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDSN(message_t *msg, uint8_t dsn);









static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDestPan(message_t *msg, uint16_t pan);




static inline uint16_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDestAddr(message_t *msg);




static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDestAddr(message_t *msg, uint16_t addr);




static inline uint16_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getSrcAddr(message_t *msg);




static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setSrcAddr(message_t *msg, uint16_t addr);




static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$requiresAckWait(message_t *msg);






static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$localAddr(void );









static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isForMe(message_t *msg);
#line 260
static inline uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$headerLength(message_t *msg);




static inline uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$payloadLength(message_t *msg);




static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$maxPayloadLength(void );
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$send(message_t *msg);
#line 64
static error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$cancel(message_t *msg);
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$NeighborhoodFlag$get(uint8_t idx);




static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$NeighborhoodFlag$set(uint8_t idx);
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$sendDone(message_t *msg, error_t error);
# 71 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Neighborhood$insertNode(am_addr_t id);
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$RadioReceive$receive(message_t *msg);
#line 46
static bool /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$RadioReceive$header(message_t *msg);
# 52 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t number);





static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$reportChannelError(void );
#line 42
static uint8_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$getSequenceNumber(message_t *msg);




static am_addr_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$getSender(message_t *msg);
# 61 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$sequenceNumber[1000];

static inline error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Init$init(void );





static inline error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$send(message_t *msg);





static inline error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$cancel(message_t *msg);




static inline void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$sendDone(message_t *msg, error_t error);




static inline bool /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubReceive$header(message_t *msg);





uint8_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$receivedNumbers[1000][5];

static inline message_t */*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubReceive$receive(message_t *msg);
#line 116
static inline void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Neighborhood$evicted(uint8_t idx);
# 80 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP$Neighborhood$evicted(uint8_t idx);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP$nodes[1000][5];
uint8_t NeighborhoodP$ages[1000][5];
uint8_t NeighborhoodP$flags[1000][5];
uint8_t NeighborhoodP$time[1000];
uint8_t NeighborhoodP$last[1000];

static inline error_t NeighborhoodP$Init$init(void );
#line 94
static inline uint8_t NeighborhoodP$Neighborhood$insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP$NeighborhoodFlag$get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP$NeighborhoodFlag$set(uint8_t bit, uint8_t idx);
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$send(message_t *msg);
#line 64
static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$cancel(message_t *msg);
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$postTask(void );
# 73 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$startOneShot(uint32_t dt);




static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$stop(void );
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$sendDone(message_t *msg, error_t error);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$payloadLength(message_t *msg);









static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$maxPayloadLength(void );
#line 54
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$headerLength(message_t *msg);
#line 65
static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$metadataLength(message_t *msg);
# 59 "/home/morten/workspace/tinyos/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 85
static bool /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 78 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
enum /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$__nesc_unnamed4338 {
#line 78
  PacketLinkLayerP$0$send = 1U
};
#line 78
typedef int /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$__nesc_sillytask_send[/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send];
#line 60
enum /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$__nesc_unnamed4339 {

  PacketLinkLayerP$0$STATE_READY = 0, 
  PacketLinkLayerP$0$STATE_SENDING = 1, 
  PacketLinkLayerP$0$STATE_SENDDONE = 2, 
  PacketLinkLayerP$0$STATE_CANCELLED = 3, 
  PacketLinkLayerP$0$STATE_SIGNAL = 4
};

uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[1000];
message_t */*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[1000];
uint16_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries[1000];






static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$runTask(void );
#line 132
static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$sendDone(message_t *msg, error_t error);







static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$fired(void );






static inline error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$send(message_t *msg);
#line 164
static inline error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$cancel(message_t *msg);
#line 186
static inline link_metadata_t */*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$getMeta(message_t *msg);




static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetries(message_t *msg, uint16_t maxRetries);




static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetryDelay(message_t *msg, uint16_t retryDelay);




static inline uint16_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetries(message_t *msg);




static inline uint16_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetryDelay(message_t *msg);




static inline bool /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$wasDelivered(message_t *msg);






static inline uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$headerLength(message_t *msg);




static inline uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$payloadLength(message_t *msg);




static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$maxPayloadLength(void );




static inline uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$metadataLength(message_t *msg);
# 53 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 78 "/home/morten/workspace/tinyos/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 82 "/home/morten/workspace/tinyos/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 48 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 61 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4340 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 70 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer0$overflow(void );
# 58 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 57 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void );







static inline void HplAtm128Timer0AsyncP$notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void );
#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static uint8_t HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );







static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 109 "/home/morten/workspace/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 83 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 74 "/home/morten/workspace/tinyos/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4341 {
#line 74
  AlarmToTimerC$0$fired = 2U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 136 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c32868);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4342 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 3U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4343 {

  VirtualizeTimerC$0$NUM_TIMERS = 3U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4344 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 58 "/home/morten/workspace/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 113 "/home/morten/workspace/tinyos/tos/interfaces/SplitControl.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$startDone(error_t error);
#line 138
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$stopDone(error_t error);
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioState$turnOn(void );
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$sendDone(message_t *msg, error_t error);
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$postTask(void );
#line 67
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask$postTask(void );
# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Receive$receive(message_t *msg);
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask$postTask(void );
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$send(message_t *msg);
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioChannel$setChannelDone(void );
# 72 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$suspend(void );






static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$resume(void );
# 144 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_unnamed4345 {
#line 144
  MessageBufferLayerP$0$stateDoneTask = 4U
};
#line 144
typedef int /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_sillytask_stateDoneTask[/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask];
#line 189
enum /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_unnamed4346 {
#line 189
  MessageBufferLayerP$0$sendTask = 5U
};
#line 189
typedef int /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_sillytask_sendTask[/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask];
#line 322
enum /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_unnamed4347 {
#line 322
  MessageBufferLayerP$0$deliverTask = 6U
};
#line 322
typedef int /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_sillytask_deliverTask[/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask];
#line 63
uint8_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[1000];
enum /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_unnamed4348 {

  MessageBufferLayerP$0$STATE_READY = 0, 
  MessageBufferLayerP$0$STATE_TX_PENDING = 1, 
  MessageBufferLayerP$0$STATE_TX_RETRY = 2, 
  MessageBufferLayerP$0$STATE_TX_SEND = 3, 
  MessageBufferLayerP$0$STATE_TX_DONE = 4, 
  MessageBufferLayerP$0$STATE_TURN_ON = 5, 
  MessageBufferLayerP$0$STATE_TURN_OFF = 6, 
  MessageBufferLayerP$0$STATE_CHANNEL = 7
};

static inline error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$start(void );
#line 144
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask$runTask(void );
#line 163
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioState$done(void );
#line 176
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioChannel$default$setChannelDone(void );





message_t */*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg[1000];
error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[1000];
uint8_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$retries[1000];


enum /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_unnamed4349 {
#line 187
  MessageBufferLayerP$0$MAX_RETRIES = 5
};
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$runTask(void );
#line 217
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$sendDone(error_t error);
#line 230
static inline error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$send(message_t *msg);
#line 252
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$ready(void );








static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$run(void );



static inline error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$cancel(message_t *msg);
#line 291
enum /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$__nesc_unnamed4350 {

  MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE = 3
};

message_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueData[1000][/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE];
message_t */*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[1000][/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE];

uint8_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[1000];
uint8_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[1000];

static inline error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SoftwareInit$init(void );









static inline bool /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioReceive$header(message_t *msg);









static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask$runTask(void );
#line 351
static inline message_t */*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioReceive$receive(message_t *msg);
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC$Tasklet$run(void );
# 47 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
enum TaskletC$__nesc_unnamed4351 {
#line 47
  TaskletC$tasklet = 7U
};
#line 47
typedef int TaskletC$__nesc_sillytask_tasklet[TaskletC$tasklet];
#line 47
static inline void TaskletC$tasklet$runTask(void );









static __inline void TaskletC$Tasklet$suspend(void );



static __inline void TaskletC$Tasklet$resume(void );
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubSend$send(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$wait(uint16_t timeout);
#line 44
static bool /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$isFree(void );
#line 64
static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$getNow(void );
# 52 "/home/morten/workspace/tinyos/tos/interfaces/Random.nc"
static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Random$rand16(void );
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getInitialBackoff(message_t *msg);










static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getMinimumBackoff(void );





static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getTransmitBarrier(message_t *msg);
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioReceive$receive(message_t *msg);
#line 46
static bool /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioReceive$header(message_t *msg);
# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$ready(void );
#line 56
static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$sendDone(error_t error);
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom$postTask(void );
# 78 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$__nesc_unnamed4352 {
#line 78
  RandomCollisionLayerP$0$calcNextRandom = 8U
};
#line 78
typedef int /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$__nesc_sillytask_calcNextRandom[/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom];
#line 57
uint8_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[1000];
enum /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$__nesc_unnamed4353 {

  RandomCollisionLayerP$0$STATE_READY = 0, 
  RandomCollisionLayerP$0$STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP$0$STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP$0$STATE_TX_SENDING = 3, 

  RandomCollisionLayerP$0$STATE_BARRIER = 0x80
};

message_t */*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg[1000];
uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier[1000];







uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom[1000];
static inline void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom$runTask(void );





static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$send(message_t *msg);
#line 110
static inline void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$fired(void );
#line 155
static inline void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubSend$sendDone(error_t error);







static inline bool /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubReceive$header(message_t *msg);




static inline message_t */*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubReceive$receive(message_t *msg);
# 52 "/home/morten/workspace/tinyos/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC$seed[1000];


static inline error_t RandomMlcgC$Init$init(void );
#line 69
static uint32_t RandomMlcgC$Random$rand32(void );
#line 89
static inline uint16_t RandomMlcgC$Random$rand16(void );
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubSend$send(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$wait(uint16_t timeout);




static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$cancel(void );
#line 44
static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$isFree(void );
# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$clear(message_t *msg);
#line 40
static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$get(message_t *msg);




static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$setValue(message_t *msg, bool value);
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioReceive$receive(message_t *msg);
#line 46
static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioReceive$header(message_t *msg);
# 86 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$reportChannelError(void );
#line 80
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$requiresAckWait(message_t *msg);






static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$isAckPacket(message_t *msg);






static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$getAckTimeout(void );





static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$setAckRequired(message_t *msg, bool ack);
#line 75
static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$requiresAckReply(message_t *msg);
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$sendDone(error_t error);
# 60 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerP.nc"
uint8_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[1000];
enum /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$__nesc_unnamed4354 {

  SoftwareAckLayerP$0$STATE_READY = 0, 
  SoftwareAckLayerP$0$STATE_DATA_SEND = 1, 
  SoftwareAckLayerP$0$STATE_ACK_WAIT = 2, 
  SoftwareAckLayerP$0$STATE_ACK_SEND = 3
};

message_t */*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[1000];
message_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$ackMsg[1000];







static inline error_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$send(message_t *msg);
#line 97
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubSend$sendDone(error_t error);
#line 124
static inline void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$fired(void );









static inline bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubReceive$header(message_t *msg);







static inline message_t */*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubReceive$receive(message_t *msg);
#line 178
static inline error_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$PacketAcknowledgements$requestAck(message_t *msg);
#line 192
static inline bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$PacketAcknowledgements$wasAcked(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t MetadataFlagsLayerC$SubPacket$payloadLength(message_t *msg);









static uint8_t MetadataFlagsLayerC$SubPacket$maxPayloadLength(void );
#line 54
static void MetadataFlagsLayerC$SubPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t MetadataFlagsLayerC$SubPacket$headerLength(message_t *msg);
#line 65
static uint8_t MetadataFlagsLayerC$SubPacket$metadataLength(message_t *msg);
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t *MetadataFlagsLayerC$getMeta(message_t *msg);






static bool MetadataFlagsLayerC$PacketFlag$get(uint8_t bit, message_t *msg);




static void MetadataFlagsLayerC$PacketFlag$set(uint8_t bit, message_t *msg);






static void MetadataFlagsLayerC$PacketFlag$clear(uint8_t bit, message_t *msg);






static inline void MetadataFlagsLayerC$PacketFlag$setValue(uint8_t bit, message_t *msg, bool value);









static inline uint8_t MetadataFlagsLayerC$RadioPacket$headerLength(message_t *msg);




static inline uint8_t MetadataFlagsLayerC$RadioPacket$payloadLength(message_t *msg);




static inline void MetadataFlagsLayerC$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t MetadataFlagsLayerC$RadioPacket$maxPayloadLength(void );




static inline uint8_t MetadataFlagsLayerC$RadioPacket$metadataLength(message_t *msg);
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubSend$send(message_t *msg);
# 41 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/CsmaConfig.nc"
static bool /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$Config$requiresSoftwareCCA(message_t *msg);
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
static error_t /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubCCA$request(void );
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$RadioSend$sendDone(error_t error);
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/CsmaLayerP.nc"
message_t */*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$txMsg[1000];

uint8_t /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[1000];
enum /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$__nesc_unnamed4355 {

  CsmaLayerP$0$STATE_READY = 0, 
  CsmaLayerP$0$STATE_CCA_WAIT = 1, 
  CsmaLayerP$0$STATE_SEND = 2
};







static error_t /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$RadioSend$send(message_t *msg);
#line 94
static inline void /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubCCA$done(error_t error);
#line 107
static inline void /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubSend$sendDone(error_t error);
# 50 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$TimeStampFlag$set(message_t *msg);
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$payloadLength(message_t *msg);









static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$maxPayloadLength(void );
#line 54
static void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$headerLength(message_t *msg);
#line 65
static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$metadataLength(message_t *msg);
# 60 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static timestamp_metadata_t */*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$getMeta(message_t *msg);
#line 82
static inline void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampRadio$set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$headerLength(message_t *msg);




static inline uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$payloadLength(message_t *msg);




static inline void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$maxPayloadLength(void );




static inline uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$metadataLength(message_t *msg);
# 52 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioCCA$done(error_t error);
# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$clear(message_t *msg);
#line 40
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$get(message_t *msg);









static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$set(message_t *msg);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/PacketTimeStamp.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeStamp$set(
#line 73
message_t * msg, 




/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeStamp$size_type value);
# 69 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioState.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioState$done(void );
# 61 "/home/morten/workspace/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$LocalTime$get(void );
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask$postTask(void );
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioReceive$receive(message_t *msg);
#line 46
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioReceive$header(message_t *msg);
# 151 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getSrcAddr(message_t *msg);
#line 63
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$isDataFrame(message_t *msg);
#line 99
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getAckRequired(message_t *msg);
#line 141
static uint16_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getDestAddr(message_t *msg);
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask$postTask(void );
# 48 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$clearChannel(void );
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$setPendingTransmission(void );
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioSend$sendDone(error_t error);
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$TimeSyncFlag$get(message_t *msg);
# 119 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
enum /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$__nesc_unnamed4356 {
#line 119
  TossimDriverLayerP$0$stateDoneTask = 9U
};
#line 119
typedef int /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$__nesc_sillytask_stateDoneTask[/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask];
#line 322
enum /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$__nesc_unnamed4357 {
#line 322
  TossimDriverLayerP$0$ccaDoneTask = 10U
};
#line 322
typedef int /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$__nesc_sillytask_ccaDoneTask[/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask];
#line 77
bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[1000];

bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmitting[1000];
message_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[1000];
sim_event_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[1000];

message_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$buffer[1000];
message_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[1000];

static inline tossim_header_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$getHeader(message_t *amsg);







static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$dbg_message(message_t *msg);
#line 111
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Init$init(void );







static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask$runTask(void );
#line 141
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioState$turnOn(void );
#line 166
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmit_done(sim_event_t *evt);






static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmit_start(sim_event_t *evt);
#line 210
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioSend$send(message_t *msg);
#line 255
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$receive(message_t *msg);
#line 292
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$acked(message_t *msg);
#line 307
static inline bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$shouldAck(message_t *msg);
#line 322
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask$runTask(void );





static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioCCA$request(void );







static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$headerLength(message_t *msg);



static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$payloadLength(message_t *msg);



static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length);



static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$maxPayloadLength(void );



static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$metadataLength(message_t *msg);
#line 395
static inline bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$isSet(message_t *msg);



static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$get(message_t *msg);
# 60 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$receive(message_t *msg);
#line 59
static void CpmModelC$Model$acked(message_t *msg);

static bool CpmModelC$Model$shouldAck(message_t *msg);
# 58 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
bool CpmModelC$transmitting[1000];
sim_time_t CpmModelC$transmissionEndTime[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void );
#line 126
static double CpmModelC$noise_hash_generation(void );
#line 151
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 166
static inline int CpmModelC$shouldAckReceive(double snr);
#line 178
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 200
double CpmModelC$clearThreshold[1000];










static inline bool CpmModelC$Model$clearChannel(void );




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 248
static bool CpmModelC$shouldReceive(double SNR);
#line 260
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 274
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 428
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 459
static inline void CpmModelC$Model$setPendingTransmission(void );







static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 479
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Packet.nc"
static uint8_t AMPacketInjectorP$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


AMPacketInjectorP$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t AMPacketInjectorP$Packet$maxPayloadLength(void );
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



AMPacketInjectorP$Receive$receive(
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
am_id_t arg_0x40e88600, 
# 71 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "/home/morten/workspace/tinyos/tos/interfaces/AMPacket.nc"
static am_id_t AMPacketInjectorP$AMPacket$type(
#line 143
message_t * amsg);
# 51 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
message_t AMPacketInjectorP$injectionBuffer[1000];
message_t *AMPacketInjectorP$injectionMsg[1000];



static inline message_t *AMPacketInjectorP$SubReceive$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);





static inline void AMPacketInjectorP$active_message_deliver_handle(sim_event_t *evt);







static inline sim_event_t *AMPacketInjectorP$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 82
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;






static inline message_t *AMPacketInjectorP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 110 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
static void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
static error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 89
static error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$cancel(
#line 85
message_t * msg);
# 103 "/home/morten/workspace/tinyos/tos/interfaces/AMPacket.nc"
static void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/home/morten/workspace/tinyos/tos/system/AMQueueEntryP.nc"
static inline error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);





static inline error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$cancel(message_t *msg);



static inline void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);







static inline void */*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m, uint8_t len);
# 80 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 48 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40eb2730, 
# 80 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(
# 48 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40eb2730, 
# 132 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 96
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$cancel(
# 48 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40eb2730, 
# 92 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
message_t * msg);
# 100 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 46 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40eb5cb0, 
# 96 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
#line 67
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$postTask(void );
# 78 "/home/morten/workspace/tinyos/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 143
message_t * amsg);
# 126 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4358 {
#line 126
  AMQueueImplP$0$CancelTask = 11U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4359 {
#line 169
  AMQueueImplP$0$errorTask = 12U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4360 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1000][1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1000][1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 90
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 145
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$cancel(uint8_t clientId, message_t *msg);
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 189
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 211
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m, uint8_t len);



static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 78 "/home/morten/workspace/tinyos/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 78
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 130
static inline void expand_heap(heap_t *heap)
#line 130
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 144
{
  int findex = heap->size;

#line 146
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 88
static inline int is_empty(heap_t *heap)
#line 88
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 92
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 96
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 130 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 130
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 134
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 140
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 64 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP$SimMote$isOn(void )
#line 64
{
  return SimMoteP$isOn[sim_node()];
}

# 172 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/home/morten/workspace/tinyos/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 284 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 284
{
  dummy = 5;
}

# 50 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 86 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline tossim_header_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$getHeader(message_t *amsg)
#line 86
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 340
static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$payloadLength(message_t *msg)
#line 340
{
  return __nesc_ntoh_uint8(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$getHeader(msg)->length.data) - 1;
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t MetadataFlagsLayerC$SubPacket$payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t MetadataFlagsLayerC$RadioPacket$payloadLength(message_t *msg)
{
  return MetadataFlagsLayerC$SubPacket$payloadLength(msg);
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = MetadataFlagsLayerC$RadioPacket$payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$payloadLength(message_t *msg)
{
  return /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$payloadLength(msg);
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 223 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$payloadLength(message_t *msg)
{
  return /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$payloadLength(msg);
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 265 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$payloadLength(message_t *msg)
{
  return /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$payloadLength(msg) - sizeof(ieee154_header_t );
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t TinyosNetworkLayerC$SubPacket$payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 159 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t TinyosNetworkLayerC$TinyosPacket$payloadLength(message_t *msg)
{
  return TinyosNetworkLayerC$SubPacket$payloadLength(msg) - TinyosNetworkLayerC$PAYLOAD_OFFSET;
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = TinyosNetworkLayerC$TinyosPacket$payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 215 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$payloadLength(message_t *msg)
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 247
static inline uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$payloadLength(message_t *msg)
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$payloadLength(msg);
}

# 78 "/home/morten/workspace/tinyos/tos/interfaces/Packet.nc"
inline static uint8_t AMPacketInjectorP$Packet$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 106
inline static uint8_t AMPacketInjectorP$Packet$maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
#line 126
inline static void * AMPacketInjectorP$Packet$getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 336 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$headerLength(message_t *msg)
#line 336
{
  return 1;
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t MetadataFlagsLayerC$SubPacket$headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t MetadataFlagsLayerC$RadioPacket$headerLength(message_t *msg)
{
  return MetadataFlagsLayerC$SubPacket$headerLength(msg);
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = MetadataFlagsLayerC$RadioPacket$headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$headerLength(message_t *msg)
{
  return /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$headerLength(msg);
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 218 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$headerLength(message_t *msg)
{
  return /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$headerLength(msg);
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 260 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$headerLength(message_t *msg)
{
  return /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$headerLength(msg) + sizeof(ieee154_header_t );
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t TinyosNetworkLayerC$SubPacket$headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 154 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t TinyosNetworkLayerC$TinyosPacket$headerLength(message_t *msg)
{
  return TinyosNetworkLayerC$SubPacket$headerLength(msg) + TinyosNetworkLayerC$PAYLOAD_OFFSET;
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = TinyosNetworkLayerC$TinyosPacket$headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 62 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$getHeader(message_t *msg)
{
  return (void *)msg + /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$headerLength(msg);
}

#line 184
static __inline am_id_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$getHeader(msg)->type.data);
}

# 147 "/home/morten/workspace/tinyos/tos/interfaces/AMPacket.nc"
inline static am_id_t AMPacketInjectorP$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 90 "src/PacketLinkTestP.nc"
static inline message_t *PacketLinkTestP$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 90
{
  sim_log_debug(50U, "PacketLinkTest", "**** Received ****\n");
  return msg;
}

# 89 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
static inline message_t *AMPacketInjectorP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 89
{
#line 89
  return msg;
}

# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
inline static message_t * AMPacketInjectorP$Receive$receive(am_id_t arg_0x40e88600, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40e88600) {
#line 78
    case 10:
#line 78
      __nesc_result = PacketLinkTestP$Receive$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = AMPacketInjectorP$Receive$default$receive(arg_0x40e88600, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 62 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
static inline void AMPacketInjectorP$active_message_deliver_handle(sim_event_t *evt)
#line 62
{
  message_t *m = (message_t *)evt->data;

#line 64
  sim_log_debug(198U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());

  memcpy(AMPacketInjectorP$injectionMsg[sim_node()], m, sizeof(message_t ));
  AMPacketInjectorP$injectionMsg[sim_node()] = AMPacketInjectorP$Receive$receive(AMPacketInjectorP$AMPacket$type(AMPacketInjectorP$injectionMsg[sim_node()]), AMPacketInjectorP$injectionMsg[sim_node()], AMPacketInjectorP$Packet$getPayload(AMPacketInjectorP$injectionMsg[sim_node()], AMPacketInjectorP$Packet$maxPayloadLength()), AMPacketInjectorP$Packet$payloadLength(AMPacketInjectorP$injectionMsg[sim_node()]));
}

static inline sim_event_t *AMPacketInjectorP$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 70
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 72
  evt->mote = node;
  evt->time = t;
  evt->handle = AMPacketInjectorP$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

# 348 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$maxPayloadLength(void )
#line 348
{
  return sizeof(tossim_header_t ) + 28;
}

# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t MetadataFlagsLayerC$SubPacket$maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 105 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t MetadataFlagsLayerC$RadioPacket$maxPayloadLength(void )
{
  return MetadataFlagsLayerC$SubPacket$maxPayloadLength();
}

# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = MetadataFlagsLayerC$RadioPacket$maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 131 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$maxPayloadLength(void )
{
  return /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$maxPayloadLength();
}

# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 233 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$maxPayloadLength(void )
{
  return /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$maxPayloadLength();
}

# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 275 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$maxPayloadLength(void )
{
  return /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$maxPayloadLength() - sizeof(ieee154_header_t );
}

# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t TinyosNetworkLayerC$SubPacket$maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 169 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t TinyosNetworkLayerC$TinyosPacket$maxPayloadLength(void )
{
  return TinyosNetworkLayerC$SubPacket$maxPayloadLength() - TinyosNetworkLayerC$PAYLOAD_OFFSET;
}

# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = TinyosNetworkLayerC$TinyosPacket$maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 225 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$maxPayloadLength(void )
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$maxPayloadLength() - sizeof(activemessage_header_t );
}

# 89 "/home/morten/workspace/tinyos/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 85 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void )
{
  sim_log_debug(100U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 57 "/home/morten/workspace/tinyos/tos/interfaces/Scheduler.nc"
inline static void SimMainP$Scheduler$init(void ){
#line 57
  SimSchedulerBasicP$Scheduler$init();
#line 57
}
#line 57
# 120 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void )
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 125
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 189 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(203U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg);
    }
}

# 110 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
inline static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$sendDone(am_id_t arg_0x40960cf8, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x40960cf8, msg, error);
#line 110
}
#line 110
# 93 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$sendDone(message_t *msg, error_t error)
{
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$sendDone(/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$type(msg), msg, error);
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$sendDone(message_t *msg, error_t error){
#line 54
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$sendDone(msg, error);
#line 54
}
#line 54
# 120 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = TinyosNetworkLayerC$TinyosSend$send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 68 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$granted(void )
{
  error_t result = /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$send(/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending[sim_node()]);

#line 71
  if (result != SUCCESS) 
    {
      /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$release();
      /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$sendDone(/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending[sim_node()], result);
    }
}

# 165 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$default$granted(uint8_t id)
#line 165
{
}

# 102 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
inline static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x409d28e0){
#line 102
  switch (arg_0x409d28e0) {
#line 102
    case 0U:
#line 102
      /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$default$granted(arg_0x409d28e0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 171 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 171
{
}

# 59 "/home/morten/workspace/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x409d0010){
#line 59
    /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x409d0010);
#line 59
}
#line 59
# 155 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId[sim_node()];
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()]);
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$granted(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()]);
}

# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 132 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void Ieee154MessageLayerC$Ieee154Send$default$sendDone(message_t *msg, error_t error)
{
}

# 97 "/home/morten/workspace/tinyos/tos/interfaces/Ieee154Send.nc"
inline static void Ieee154MessageLayerC$Ieee154Send$sendDone(message_t *msg, error_t error){
#line 97
  Ieee154MessageLayerC$Ieee154Send$default$sendDone(msg, error);
#line 97
}
#line 97
# 127 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void Ieee154MessageLayerC$SubSend$sendDone(message_t *msg, error_t error)
{
  Ieee154MessageLayerC$Ieee154Send$sendDone(msg, error);
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void TinyosNetworkLayerC$Ieee154Send$sendDone(message_t *msg, error_t error){
#line 54
  Ieee154MessageLayerC$SubSend$sendDone(msg, error);
#line 54
}
#line 54
# 78 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$sendDone(message_t *msg, error_t result)
{
  /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$release();
  /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$sendDone(msg, result);
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void TinyosNetworkLayerC$TinyosSend$sendDone(message_t *msg, error_t error){
#line 54
  /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$sendDone(msg, error);
#line 54
}
#line 54
# 214 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void TinyosNetworkLayerC$SubSend$sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(TinyosNetworkLayerC$getHeader(msg)->network.data) == 0x3f) {
    TinyosNetworkLayerC$TinyosSend$sendDone(msg, result);
    }
  else {
#line 219
    TinyosNetworkLayerC$Ieee154Send$sendDone(msg, result);
    }
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$sendDone(message_t *msg, error_t error){
#line 54
  TinyosNetworkLayerC$SubSend$sendDone(msg, error);
#line 54
}
#line 54
# 80 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$sendDone(message_t *msg, error_t error)
{
  /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$sendDone(msg, error);
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$sendDone(message_t *msg, error_t error){
#line 54
  /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$sendDone(msg, error);
#line 54
}
#line 54
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 61 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC$Tasklet$resume(void )
{
}

# 79 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$resume(void ){
#line 79
  TaskletC$Tasklet$resume();
#line 79
}
#line 79
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC$Tasklet$suspend(void )
{
}

# 72 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$suspend(void ){
#line 72
  TaskletC$Tasklet$suspend();
#line 72
}
#line 72
# 230 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$send(message_t *msg)
{
  error_t result;

  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$suspend();

  if (/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] != /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_READY) {
    result = EBUSY;
    }
  else {
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg[sim_node()] = msg;
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_PENDING;
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$retries[sim_node()] = 0;
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$postTask();
      result = SUCCESS;
    }

  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$resume();

  return result;
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 73 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 73
}
#line 73
# 352 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$metadataLength(message_t *msg)
#line 352
{
  return 0;
}

# 65 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t MetadataFlagsLayerC$SubPacket$metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t MetadataFlagsLayerC$RadioPacket$metadataLength(message_t *msg)
{
  return MetadataFlagsLayerC$SubPacket$metadataLength(msg) + sizeof(flags_metadata_t );
}

# 65 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = MetadataFlagsLayerC$RadioPacket$metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 136 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$metadataLength(message_t *msg)
{
  return /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$metadataLength(msg) + sizeof(timestamp_metadata_t );
}

# 65 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 238 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$metadataLength(message_t *msg)
{
  return /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$metadataLength(msg) + sizeof(link_metadata_t );
}

#line 186
static inline link_metadata_t */*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$metadataLength(msg);
}

#line 206
static inline uint16_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetryDelay(message_t *msg)
{
  return /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$getMeta(msg)->retryDelay;
}

# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = MetadataFlagsLayerC$PacketFlag$get(0U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 192 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerP.nc"
static inline bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$PacketAcknowledgements$wasAcked(message_t *msg)
{
  return /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$get(msg);
}

# 85 "/home/morten/workspace/tinyos/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketAcknowledgements$wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$PacketAcknowledgements$wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 201 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint16_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetries(message_t *msg)
{
  return /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$getMeta(msg)->maxRetries;
}

#line 78
static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$runTask(void )
{
  uint16_t retries;

  for (; 0; ) ;

  retries = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetries(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[sim_node()]);

  if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] == /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SENDDONE) 
    {
      if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketAcknowledgements$wasAcked(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[sim_node()])) {
          sim_log_debug(117U, "PacketLink", "ACK received\n");
          /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SIGNAL + SUCCESS;
        }
      else {
#line 91
        if (++/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries[sim_node()] < retries) 
          {
            uint16_t delay;

            /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SENDING;
            delay = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetryDelay(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[sim_node()]);
            sim_log_debug(118U, "PacketLink", "no ACK received\n");
            if (delay > 0) 
              {
                sim_log_debug(119U, "PacketLink", "start delay timer\n");
                /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$startOneShot(delay);
                return;
              }
          }
        else {
          /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SIGNAL + FAIL;
          }
        }
    }
#line 109
  if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] == /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SENDING) 
    {
      /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SENDDONE;
      sim_log_debug(120U, "PacketLink", "sending message\n");
      if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$send(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[sim_node()]) != SUCCESS) {
        /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$postTask();
        }
      return;
    }

  if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] >= /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SIGNAL) 
    {
      error_t error = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] - /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SIGNAL;

#line 122
      sim_log_debug(121U, "PacketLink", "done with error %hu\n", error);

      if (retries > 0) {
        /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetries(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[sim_node()], /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries[sim_node()]);
        }
      /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_READY;
      /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$sendDone(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[sim_node()], error);
    }
}

# 222 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 109 "/home/morten/workspace/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/morten/workspace/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 136 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 139 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 83 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 83
}
#line 83
# 226 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/morten/workspace/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/morten/workspace/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 129 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/morten/workspace/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 73
}
#line 73
# 71 "/home/morten/workspace/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 78 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 78
}
#line 78
# 100 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 96 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t TinyosNetworkLayerC$Ieee154Packet$payloadLength(message_t *msg)
{
  return TinyosNetworkLayerC$SubPacket$payloadLength(msg);
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t Ieee154MessageLayerC$RadioPacket$payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = TinyosNetworkLayerC$Ieee154Packet$payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t Ieee154MessageLayerC$Packet$payloadLength(message_t *msg)
{
  return Ieee154MessageLayerC$RadioPacket$payloadLength(msg);
}

# 91 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t TinyosNetworkLayerC$Ieee154Packet$headerLength(message_t *msg)
{
  return TinyosNetworkLayerC$SubPacket$headerLength(msg);
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t Ieee154MessageLayerC$RadioPacket$headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = TinyosNetworkLayerC$Ieee154Packet$headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void *Ieee154MessageLayerC$getPayload(message_t *msg)
{
  return (void *)msg + Ieee154MessageLayerC$RadioPacket$headerLength(msg);
}

#line 151
static inline message_t *Ieee154MessageLayerC$Ieee154Receive$default$receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
inline static message_t * Ieee154MessageLayerC$Ieee154Receive$receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = Ieee154MessageLayerC$Ieee154Receive$default$receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/home/morten/workspace/tinyos/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 216 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$localAddr(void )
{
  return /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$ActiveMessageAddress$amAddress();
}

# 276 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 182 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->dest.data);
}

#line 226
static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDestAddr(msg);

#line 229
  return addr == /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$localAddr() || addr == IEEE154_BROADCAST_ADDR;
}

# 184 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool Ieee154MessageLayerC$Ieee154PacketLayer$isForMe(message_t *msg){
#line 184
  unsigned char __nesc_result;
#line 184

#line 184
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isForMe(msg);
#line 184

#line 184
  return __nesc_result;
#line 184
}
#line 184
# 142 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t *Ieee154MessageLayerC$SubReceive$receive(message_t *msg)
{
  if (Ieee154MessageLayerC$Ieee154PacketLayer$isForMe(msg)) {
    return Ieee154MessageLayerC$Ieee154Receive$receive(msg, 
    Ieee154MessageLayerC$getPayload(msg), Ieee154MessageLayerC$Packet$payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t *TinyosNetworkLayerC$Ieee154Receive$receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = Ieee154MessageLayerC$SubReceive$receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 141 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
inline static message_t * /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Snoop$receive(am_id_t arg_0x4095fda0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Snoop$default$receive(arg_0x4095fda0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
static inline message_t *AMPacketInjectorP$SubReceive$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 56
{
  return AMPacketInjectorP$Receive$receive(id, msg, payload, len);
}

# 78 "/home/morten/workspace/tinyos/tos/interfaces/Receive.nc"
inline static message_t * /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Receive$receive(am_id_t arg_0x4095f708, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = AMPacketInjectorP$SubReceive$receive(arg_0x4095f708, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/home/morten/workspace/tinyos/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$ActiveMessageAddress$amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 148 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$address(void )
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$ActiveMessageAddress$amAddress();
}

# 141 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 146 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline am_addr_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$destination(message_t *msg)
{
  return /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getDestAddr(msg);
}

# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 164 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$destination(message_t *msg)
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$destination(msg);
}

#line 158
static __inline bool /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$isForMe(message_t *msg)
{
  am_addr_t addr = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$destination(msg);

#line 161
  return addr == /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$address() || addr == AM_BROADCAST_ADDR;
}

#line 67
static inline void */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$getPayload(message_t *msg)
{
  return (void *)msg + /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$headerLength(msg);
}

#line 123
static inline message_t */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubReceive$receive(message_t *msg)
{
  am_id_t id = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$type(msg);
  void *payload = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$getPayload(msg);
  uint8_t len = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$payloadLength(msg);

  msg = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$isForMe(msg) ? 
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Receive$receive(id, msg, payload, len) : 
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Snoop$receive(id, msg, payload, len);

  return msg;
}

# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t *TinyosNetworkLayerC$TinyosReceive$receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubReceive$receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 222 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t *TinyosNetworkLayerC$SubReceive$receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(TinyosNetworkLayerC$getHeader(msg)->network.data) == 0x3f) {
    return TinyosNetworkLayerC$TinyosReceive$receive(msg);
    }
  else {
#line 227
    return TinyosNetworkLayerC$Ieee154Receive$receive(msg);
    }
}

# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Receive$receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = TinyosNetworkLayerC$SubReceive$receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask$runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[sim_node()] == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[sim_node()][/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[sim_node()]];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Receive$receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[sim_node()][/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[sim_node()]] = msg;

          if (++/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[sim_node()] >= /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE) {
            /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[sim_node()] = 0;
            }
          --/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[sim_node()];
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 132 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$sendDone(message_t *msg, error_t error)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$postTask();
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$sendDone(message_t *msg, error_t error){
#line 54
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$sendDone(msg, error);
#line 54
}
#line 54
# 248 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
}

# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$wait(uint16_t timeout){
#line 49
  /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$wait(1U, timeout);
#line 49
}
#line 49
# 68 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline bool /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$isFree(uint8_t id)
#line 68
{
  return /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()] == /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$NO_CLIENT;
}

# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$isFree(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$isFree(1U);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 98 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$send(message_t *msg)
{
  if (/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] != /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_READY || !/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$isFree()) {
    return EBUSY;
    }
  /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg[sim_node()] = msg;
  /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_TX_PENDING_FIRST;
  /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$wait(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$getBackoff(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getInitialBackoff(msg)));

  return SUCCESS;
}

# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 189 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$runTask(void )
{
  bool done = FALSE;

  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$suspend();

  for (; 0; ) ;

  if (/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] == /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_PENDING && ++/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$retries[sim_node()] <= /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$MAX_RETRIES) 
    {
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$send(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg[sim_node()]);
      if (/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[sim_node()] == SUCCESS) {
        /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_SEND;
        }
      else {
#line 203
        /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_RETRY;
        }
    }
  else {
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_READY;
      done = TRUE;
    }

  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$resume();

  if (done) {
    /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$sendDone(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg[sim_node()], /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[sim_node()]);
    }
}

#line 176
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioChannel$default$setChannelDone(void )
{
}

# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioChannel$setChannelDone(void ){
#line 48
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioChannel$default$setChannelDone();
#line 48
}
#line 48
# 39 "src/PacketLinkTestP.nc"
static inline void PacketLinkTestP$RadioControl$stopDone(error_t error)
#line 39
{
}

# 138 "/home/morten/workspace/tinyos/tos/interfaces/SplitControl.nc"
inline static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$stopDone(error_t error){
#line 138
  PacketLinkTestP$RadioControl$stopDone(error);
#line 138
}
#line 138
# 154 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 64 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static void PacketLinkTestP$Timer$startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(1U, dt);
#line 64
}
#line 64
# 33 "src/PacketLinkTestP.nc"
static inline void PacketLinkTestP$RadioControl$startDone(error_t error)
#line 33
{
  if (TOS_NODE_ID != 0) {
      PacketLinkTestP$Timer$startPeriodic(1024);
    }
}

# 113 "/home/morten/workspace/tinyos/tos/interfaces/SplitControl.nc"
inline static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$startDone(error_t error){
#line 113
  PacketLinkTestP$RadioControl$startDone(error);
#line 113
}
#line 113
# 144 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask$runTask(void )
{
  uint8_t s;

  s = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()];


  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_READY;

  if (s == /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TURN_ON) {
    /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TURN_OFF) {
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_CHANNEL) {
        /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioChannel$setChannelDone();
        }
      else {
#line 160
        /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = s;
        }
      }
    }
}

#line 261
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$run(void )
{
}

# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC$Tasklet$run(void ){
#line 48
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$run();
#line 48
}
#line 48
# 47 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/TaskletC.nc"
static inline void TaskletC$tasklet$runTask(void )
{
  TaskletC$Tasklet$run();
}

# 89 "/home/morten/workspace/tinyos/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC$Random$rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC$Random$rand32();
}

# 52 "/home/morten/workspace/tinyos/tos/interfaces/Random.nc"
inline static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Random$rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC$Random$rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom$runTask(void )
{
  uint16_t a = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Random$rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom[sim_node()] = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$RadioSend$sendDone(error_t error){
#line 56
  /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubSend$sendDone(error);
#line 56
}
#line 56
#line 48
inline static error_t /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubSend$send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioSend$send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 94 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/CsmaLayerP.nc"
static inline void /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubCCA$done(error_t error)
{
  for (; 0; ) ;

  if (error == SUCCESS && (error = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubSend$send(/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$txMsg[sim_node()])) == SUCCESS) {
    /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[sim_node()] = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$STATE_SEND;
    }
  else {
      /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[sim_node()] = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$STATE_READY;
      /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$RadioSend$sendDone(EBUSY);
    }
}

# 52 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioCCA$done(error_t error){
#line 52
  /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubCCA$done(error);
#line 52
}
#line 52
# 211 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$Model$clearChannel(void )
#line 211
{
  sim_log_debug(176U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 56 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC$Model$clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 322 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask$runTask(void )
#line 322
{
  bool clear = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$clearChannel();

#line 324
  sim_log_debug(171U, "Driver.trace", "Driver: Is channel clear? %hhu\n", clear);
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioCCA$done(clear ? SUCCESS : FAIL);
}

# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioState$done(void )
{
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask$postTask();
}

# 69 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioState.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioState$done(void ){
#line 69
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioState$done();
#line 69
}
#line 69
# 119 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask$runTask(void )
#line 119
{
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioState$done();
}

# 169 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg, FAIL);
}

# 110 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
inline static void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  PacketLinkTestP$Send$sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/morten/workspace/tinyos/tos/system/AMQueueEntryP.nc"
static inline void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 215 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x40eb5cb0, message_t * msg, error_t error){
#line 100
  switch (arg_0x40eb5cb0) {
#line 100
    case 0U:
#line 100
      /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x40eb5cb0, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 221 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x4069e650){
#line 75
  switch (arg_0x4069e650) {
#line 75
    case /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask:
#line 75
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask$runTask();
#line 75
      break;
#line 75
    case /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send:
#line 75
      /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 75
      break;
#line 75
    case /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask:
#line 75
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$stateDoneTask$runTask();
#line 75
      break;
#line 75
    case /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask:
#line 75
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$runTask();
#line 75
      break;
#line 75
    case /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask:
#line 75
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask$runTask();
#line 75
      break;
#line 75
    case TaskletC$tasklet:
#line 75
      TaskletC$tasklet$runTask();
#line 75
      break;
#line 75
    case /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom:
#line 75
      /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom$runTask();
#line 75
      break;
#line 75
    case /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask:
#line 75
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask$runTask();
#line 75
      break;
#line 75
    case /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask:
#line 75
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x4069e650);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 211 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline bool /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$wasDelivered(message_t *msg)
{
  return /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketAcknowledgements$wasAcked(msg);
}

# 71 "/home/morten/workspace/tinyos/tos/interfaces/PacketLink.nc"
inline static bool PacketLinkTestP$PacketLink$wasDelivered(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$wasDelivered(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t *MetadataFlagsLayerC$getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - MetadataFlagsLayerC$RadioPacket$metadataLength(msg);
}

# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x40eb2730, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$send(arg_0x40eb2730, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/home/morten/workspace/tinyos/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 78 "/home/morten/workspace/tinyos/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 1;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 154 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setFramePending(message_t *msg, bool pending)
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;

#line 156
  if (pending) {
    (__nesc_temp44 = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp44, __nesc_ntoh_leuint16(__nesc_temp44) | (1 << IEEE154_FCF_FRAME_PENDING)));
    }
  else {
#line 159
    (__nesc_temp45 = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp45, __nesc_ntoh_leuint16(__nesc_temp45) & ~ (uint16_t )(1 << IEEE154_FCF_FRAME_PENDING)));
    }
}

#line 149
static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getFramePending(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data) & (1 << IEEE154_FCF_FRAME_PENDING) ? TRUE : FALSE;
}

#line 99
static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$createDataFrame(message_t *msg)
{
  bool ackRequired = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getAckRequired(msg);
  bool framePending = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getFramePending(msg);

#line 103
  __nesc_hton_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data, /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_DATA_FRAME_VALUE);
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setAckRequired(msg, ackRequired);
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setFramePending(msg, framePending);
}

# 69 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$createDataFrame(message_t *msg){
#line 69
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$createDataFrame(msg);
#line 69
}
#line 69
# 94 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data) & /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_DATA_FRAME_MASK) == /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_DATA_FRAME_VALUE;
}

# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 176 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline error_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$checkFrame(message_t *msg)
{
  if (!/*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$isDataFrame(msg)) {
    /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$createDataFrame(msg);
    }
  return SUCCESS;
}

# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$checkFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$checkFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 197 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->src.data, addr);
}

# 156 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setSrcAddr(msg, addr);
#line 156
}
#line 156
# 161 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setSource(message_t *msg, am_addr_t addr)
{
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setSrcAddr(msg, addr);
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setSource(message_t *msg, am_addr_t addr){
#line 49
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setSource(msg, addr);
#line 49
}
#line 49
# 179 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setSource(message_t *msg, am_addr_t addr)
{
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setSource(msg, addr);
}

# 177 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->destpan.data, pan);
}

# 136 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDestPan(msg, pan);
#line 136
}
#line 136
# 171 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setGroup(message_t *msg, am_group_t grp)
{
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDestPan(msg, grp);
}

# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setGroup(message_t *msg, am_group_t grp){
#line 55
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setGroup(msg, grp);
#line 55
}
#line 55
# 199 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setGroup(message_t *msg, am_group_t grp)
{
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setGroup(msg, grp);
}

# 84 "/home/morten/workspace/tinyos/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void )
#line 84
{
  return ActiveMessageAddressC$group[sim_node()];
}

# 55 "/home/morten/workspace/tinyos/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$ActiveMessageAddress$amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 153 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$localGroup(void )
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$ActiveMessageAddress$amGroup();
}

#line 117
static inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SendNotifier$default$aboutToSend(am_id_t id, am_addr_t addr, message_t *msg)
{
}

# 59 "/home/morten/workspace/tinyos/tos/interfaces/SendNotifier.nc"
inline static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SendNotifier$aboutToSend(am_id_t arg_0x4095e430, am_addr_t dest, message_t * msg){
#line 59
    /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SendNotifier$default$aboutToSend(arg_0x4095e430, dest, msg);
#line 59
}
#line 59
# 64 "/home/morten/workspace/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[sim_node()][id] != /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail[sim_node()] == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[sim_node()] == /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[sim_node()] = id;
          }
        else {
#line 88
          /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[sim_node()][/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail[sim_node()]] = id;
          }
#line 89
        /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail[sim_node()] = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/home/morten/workspace/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 167
{
}

# 53 "/home/morten/workspace/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x409d1318){
#line 53
    /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x409d1318);
#line 53
}
#line 53
# 71 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
#line 71
{
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()]);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[sim_node()] == /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
          /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
          /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId[sim_node()] = id;
          /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 169 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 169
{
}

# 61 "/home/morten/workspace/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x409d1318){
#line 61
    /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x409d1318);
#line 61
}
#line 61
# 84 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 84
{
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()]);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 86
    {
      if (/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[sim_node()] == /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
          /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_BUSY;
          /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()] = id;
          /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()]);
          {
            unsigned char __nesc_temp = 
#line 91
            SUCCESS;

            {
#line 91
              __nesc_atomic_end(__nesc_atomic); 
#line 91
              return __nesc_temp;
            }
          }
        }
#line 93
      {
        unsigned char __nesc_temp = 
#line 93
        FAIL;

        {
#line 93
          __nesc_atomic_end(__nesc_atomic); 
#line 93
          return __nesc_temp;
        }
      }
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/home/morten/workspace/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$send(message_t *msg)
{
  if (/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$immediateRequest() == SUCCESS) 
    {
      error_t result = /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$send(msg);

#line 58
      if (result != SUCCESS) {
        /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$release();
        }
      return result;
    }

  /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending[sim_node()] = msg;
  return /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$Resource$request();
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 105 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setAckRequired(message_t *msg, bool ack){
#line 105
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setAckRequired(msg, ack);
#line 105
}
#line 105
# 88 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$setAckRequired(message_t *msg, bool ack)
{
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setAckRequired(msg, ack);
}

# 49 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$setAckRequired(message_t *msg, bool ack){
#line 49
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$setAckRequired(msg, ack);
#line 49
}
#line 49
# 178 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerP.nc"
static inline error_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$PacketAcknowledgements$requestAck(message_t *msg)
{
  /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$setAckRequired(msg, TRUE);

  return SUCCESS;
}

# 59 "/home/morten/workspace/tinyos/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketAcknowledgements$requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$PacketAcknowledgements$requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 147 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$send(message_t *msg)
{
  if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] != /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_READY) {
    return EBUSY;
    }

  if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$getRetries(msg) > 0) {
    /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketAcknowledgements$requestAck(msg);
    }
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[sim_node()] = msg;
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries[sim_node()] = 0;
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SENDING;
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$postTask();

  return SUCCESS;
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 167 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->dsn.data, dsn);
}

# 125 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDSN(msg, dsn);
#line 125
}
#line 125
# 127 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t dsn)
{
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDSN(msg, dsn);
}

# 52 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$send(message_t *msg)
{
  /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$setSequenceNumber(msg, ++/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$sequenceNumber[sim_node()]);
  return /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$send(msg);
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t TinyosNetworkLayerC$SubSend$send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 139 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP$sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 60 "/home/morten/workspace/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[sim_node()] == /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/home/morten/workspace/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/home/morten/workspace/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[sim_node()] != /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[sim_node()];

#line 72
        /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[sim_node()] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[sim_node()][/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[sim_node()]];
        if (/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[sim_node()] == /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail[sim_node()] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 75
        /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[sim_node()][id] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/home/morten/workspace/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 173 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 173
{
}

# 65 "/home/morten/workspace/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x409d0010){
#line 65
    /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x409d0010);
#line 65
}
#line 65
# 90 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void )
#line 90
{
  sim_time_t ftime = sim_time();
  int hours;
#line 92
  int minutes;
#line 92
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$clear(message_t *msg){
#line 55
  MetadataFlagsLayerC$PacketFlag$clear(2U, msg);
#line 55
}
#line 55
# 294 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 294
{
  const uint8_t *base = source;

#line 296
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 301
{
  uint8_t *base = target;

#line 303
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 326
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 326
{
#line 326
  __nesc_hton_uint32(target, value);
#line 326
  return value;
}

# 99 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getAckRequired(message_t *msg){
#line 99
  unsigned char __nesc_result;
#line 99

#line 99
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getAckRequired(msg);
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
#line 141
inline static uint16_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

#line 257
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

# 483 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 483
{
  free(msg);
}

# 307 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$shouldAck(message_t *msg)
#line 307
{





  sim_log_debug(170U, "Driver.debug", "Driver: never ACK messages\n");
  return FALSE;
}

# 61 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC$Model$shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 192 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->src.data);
}

# 151 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioReceive$receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[sim_node()] >= /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[sim_node()] + /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[sim_node()];

#line 362
          if (idx >= /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE) {
            idx -= /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE;
            }
          m = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[sim_node()][idx];
          /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[sim_node()][idx] = msg;

          ++/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[sim_node()];
          /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$deliverTask$postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$RadioReceive$receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioReceive$receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP$NeighborhoodFlag$set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP$flags[sim_node()][idx] |= 1 << bit;
}

# 51 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$NeighborhoodFlag$set(uint8_t idx){
#line 51
  NeighborhoodP$NeighborhoodFlag$set(0U, idx);
#line 51
}
#line 51
# 137 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$reportChannelError(void )
{
}

# 58 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$reportChannelError(void ){
#line 58
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$reportChannelError();
#line 58
}
#line 58
# 158 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP$NeighborhoodFlag$get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP$flags[sim_node()][idx] & (1 << bit);
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$NeighborhoodFlag$get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP$NeighborhoodFlag$get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 162 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->dsn.data);
}

# 120 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 122 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint8_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$getSequenceNumber(message_t *msg)
{
  return /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getDSN(msg);
}

# 42 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 151 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 132 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline am_addr_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$getSender(message_t *msg)
{
  return /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getSrcAddr(msg);
}

# 47 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$UniqueConfig$getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Neighborhood$evicted(uint8_t idx)
#line 116
{
}

# 80 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP$Neighborhood$evicted(uint8_t idx){
#line 80
  /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Neighborhood$evicted(idx);
#line 80
}
#line 80
# 94 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP$Neighborhood$insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP$nodes[sim_node()][NeighborhoodP$last[sim_node()]] == node) 
    {
      if (NeighborhoodP$ages[sim_node()][NeighborhoodP$last[sim_node()]] == NeighborhoodP$time[sim_node()]) {
        return NeighborhoodP$last[sim_node()];
        }
      NeighborhoodP$ages[sim_node()][NeighborhoodP$last[sim_node()]] = ++NeighborhoodP$time[sim_node()];
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP$nodes[sim_node()][i] == node) 
            {
              NeighborhoodP$last[sim_node()] = i;
              if (NeighborhoodP$ages[sim_node()][i] == NeighborhoodP$time[sim_node()]) {
                return i;
                }
              NeighborhoodP$ages[sim_node()][i] = ++NeighborhoodP$time[sim_node()];
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP$time[sim_node()] - NeighborhoodP$ages[sim_node()][i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP$Neighborhood$evicted(oldest);

          NeighborhoodP$last[sim_node()] = oldest;
          NeighborhoodP$nodes[sim_node()][oldest] = node;
          NeighborhoodP$ages[sim_node()][oldest] = ++NeighborhoodP$time[sim_node()];
          NeighborhoodP$flags[sim_node()][oldest] = 0;
        }
    }

  if ((NeighborhoodP$time[sim_node()] & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP$ages[sim_node()][i] | 0x7F) != NeighborhoodP$time[sim_node()]) {
            NeighborhoodP$ages[sim_node()][i] = NeighborhoodP$time[sim_node()] & 0x80;
            }
        }
    }
  return NeighborhoodP$last[sim_node()];
}

# 71 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Neighborhood$insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP$Neighborhood$insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 93 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubReceive$receive(message_t *msg)
{
  uint8_t idx = /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Neighborhood$insertNode(/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$getSender(msg));
  uint8_t dsn = /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$getSequenceNumber(msg);

  if (/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$NeighborhoodFlag$get(idx)) 
    {
      uint8_t diff = dsn - /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$receivedNumbers[sim_node()][idx];

      if (diff == 0) 
        {
          /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$UniqueConfig$reportChannelError();
          return msg;
        }
    }
  else {
    /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$NeighborhoodFlag$set(idx);
    }
  /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$receivedNumbers[sim_node()][idx] = dsn;

  return /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$RadioReceive$receive(msg);
}

# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioReceive$receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubReceive$receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$getNow(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$getNow(1U);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 168 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RadioAlarm$getNow(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$getNow(0U);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 264 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getTransmitBarrier(message_t *msg)
{
  uint16_t t;


  t = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RadioAlarm$getNow();


  if (/*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$requiresAckReply(msg)) {
    t += (uint16_t )(32 * (-5 + 16 + 11 + 5) * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
    }
  else {
#line 275
    t += (uint16_t )(32 * (-5 + 5) * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
    }
  return t;
}

# 57 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubReceive$receive(message_t *msg)
{
  int16_t delay;

  /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier[sim_node()] = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getTransmitBarrier(msg);
  delay = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier[sim_node()] - /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$getNow();

  if (delay > 0) 
    {
      if (/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] == /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_READY) 
        {

          if (/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$isFree()) 
            {
              /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$wait(delay);
              /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_BARRIER;
            }
        }
      else {
        /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] |= /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_BARRIER;
        }
    }
  return /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioReceive$receive(msg);
}

# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioReceive$receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubReceive$receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubSend$send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$RadioSend$send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 187 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->dest.data, addr);
}

# 146 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setDestAddr(msg, addr);
#line 146
}
#line 146
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void MetadataFlagsLayerC$SubPacket$setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void MetadataFlagsLayerC$RadioPacket$setPayloadLength(message_t *msg, uint8_t length)
{
  MetadataFlagsLayerC$SubPacket$setPayloadLength(msg, length);
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$setPayloadLength(message_t *msg, uint8_t length){
#line 54
  MetadataFlagsLayerC$RadioPacket$setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length)
{
  /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$SubPacket$setPayloadLength(msg, length);
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$setPayloadLength(msg, length);
#line 54
}
#line 54
# 228 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length)
{
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubPacket$setPayloadLength(msg, length);
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$RadioPacket$setPayloadLength(msg, length);
#line 54
}
#line 54
# 119 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$createAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(ack);

#line 122
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$setPayloadLength(ack, /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.data, /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.data, __nesc_ntoh_leuint8(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(data)->dsn.data));
}

# 88 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$createAckReply(message_t *data, message_t *ack){
#line 88
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$createAckReply(data, ack);
#line 88
}
#line 88
# 98 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack)
{
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$createAckReply(data, ack);
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDestAddr(ack, /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$getSrcAddr(data));
}

# 80 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$createAckPacket(message_t *data, message_t *ack){
#line 80
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$createAckPacket(data, ack);
#line 80
}
#line 80
# 93 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$requiresAckReply(message_t *msg)
{
  return /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$requiresAckReply(msg);
}

# 75 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$sendDone(error_t error){
#line 56
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$sendDone(error);
#line 56
}
#line 56
# 155 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubSend$sendDone(error_t error)
{
  for (; 0; ) ;

  /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_READY;
  /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$sendDone(error);
}

# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$sendDone(error_t error){
#line 56
  /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubSend$sendDone(error);
#line 56
}
#line 56
# 80 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void MetadataFlagsLayerC$PacketFlag$setValue(uint8_t bit, message_t *msg, bool value)
{
  if (value) {
    MetadataFlagsLayerC$PacketFlag$set(bit, msg);
    }
  else {
#line 85
    MetadataFlagsLayerC$PacketFlag$clear(bit, msg);
    }
}

# 45 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$setValue(message_t *msg, bool value){
#line 45
  MetadataFlagsLayerC$PacketFlag$setValue(0U, msg, value);
#line 45
}
#line 45
# 110 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$cancel(uint8_t id)
#line 110
{

  if (id == /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()]) {
      sim_log_debug(113U, "RadioAlarm.debug", "RadioAlarm: cancelling alarm for client %hhu\n", id);
      /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$currentEvent[sim_node()]->cancelled = TRUE;
      /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()] = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$NO_CLIENT;
    }
  else 
#line 116
    {
      sim_log_error(114U, "RadioAlarm.error", "RadioAlarm: cannot cancel alarm for client %hhu\n", id);
    }
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$cancel(void ){
#line 54
  /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$cancel(2U);
#line 54
}
#line 54
# 108 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data) & /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_MASK) == /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_VALUE;
}

# 75 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 78 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$isAckPacket(message_t *msg)
{
  return /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$isAckFrame(msg);
}

# 62 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 142 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerP.nc"
static inline message_t */*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubReceive$receive(message_t *msg)
{
  bool ack = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$isAckPacket(msg);

  for (; 0; ) ;

  if (/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] == /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_ACK_WAIT) 
    {
      for (; 0; ) ;

      /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$cancel();
      /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$setValue(/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[sim_node()], ack);

      /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_READY;
      /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$sendDone(SUCCESS);
    }

  if (ack) {
    return msg;
    }
  if (/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$requiresAckReply(msg)) 
    {
      /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$createAckPacket(msg, &/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$ackMsg[sim_node()]);


      if (/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubSend$send(&/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$ackMsg[sim_node()]) == SUCCESS) {
        /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_ACK_SEND;
        }
      else {
#line 170
        for (; 0; ) ;
        }
    }
  return /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioReceive$receive(msg);
}

# 53 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioReceive$receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubReceive$receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 312 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioReceive$header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[sim_node()] < /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$RadioReceive$header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioReceive$header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubReceive$header(message_t *msg)
{

  return /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$RadioReceive$header(msg);
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioReceive$header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubReceive$header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubReceive$header(message_t *msg)
{
  return /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioReceive$header(msg);
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioReceive$header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubReceive$header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 128 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.data) == __nesc_ntoh_leuint8(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(data)->dsn.data)
   && (__nesc_ntoh_leuint16(header->fcf.data) & /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_MASK) == /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$IEEE154_ACK_FRAME_VALUE;
}

# 94 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 83 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack)
{
  return /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$verifyAckReply(data, ack);
}

# 69 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 134 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerP.nc"
static inline bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubReceive$header(message_t *msg)
{
  if (/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$isAckPacket(msg)) {
    return /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] == /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_ACK_WAIT && /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$verifyAckPacket(/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[sim_node()], msg);
    }
  else {
#line 139
    return /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioReceive$header(msg);
    }
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioReceive$header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubReceive$header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 61 "/home/morten/workspace/tinyos/tos/lib/timer/LocalTime.nc"
inline static uint32_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$LocalTime$get(void ){
#line 61
  unsigned int __nesc_result;
#line 61

#line 61
  __nesc_result = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$LocalTime$get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$TimeStampFlag$set(message_t *msg){
#line 50
  MetadataFlagsLayerC$PacketFlag$set(1U, msg);
#line 50
}
#line 50
# 82 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampRadio$set(message_t *msg, uint32_t value)
{
  /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$TimeStampFlag$set(msg);
  /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$getMeta(msg)->timestamp = value;
}

# 78 "/home/morten/workspace/tinyos/tos/interfaces/PacketTimeStamp.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeStamp$set(message_t * msg, /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeStamp$size_type value){
#line 78
  /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$PacketTimeStampRadio$set(msg, value);
#line 78
}
#line 78
# 50 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$set(message_t *msg){
#line 50
  MetadataFlagsLayerC$PacketFlag$set(2U, msg);
#line 50
}
#line 50
# 255 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$receive(message_t *msg)
#line 255
{






  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[sim_node()] && !/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmitting[sim_node()]) {


      memcpy(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()], msg, sizeof(message_t ));

      /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$set(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()]);
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeStamp$set(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()], /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$LocalTime$get());

      if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$isDataFrame(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()])) {
          sim_log_debug(165U, "Driver.debug", "Driver: receiving packet from %hu\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getSrcAddr(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()]));
        }
      else 
#line 272
        {
          sim_log_debug(166U, "Driver.debug", "Driver: receiving ACK\n");
        }
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$dbg_message(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()]);

      if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioReceive$header(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()])) {
          /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()] = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioReceive$receive(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[sim_node()]);
        }
    }
  else {

      if (!/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[sim_node()]) {
          sim_log_debug(167U, "Driver.debug", "Driver: discarding packet from %hu as radio is OFF\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getSrcAddr(msg));
        }
      else 
#line 285
        {
          sim_log_debug(168U, "Driver.debug", "Driver: discarding packet from %hu as we are TRANSMITTING\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getSrcAddr(msg));
        }
    }
}

# 60 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$receive(message_t *msg){
#line 60
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$receive(msg);
#line 60
}
#line 60
# 260 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 260
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 263
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 296
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(178U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 311
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(179U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 317
  sim_log_debug(180U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(181U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 327
      __nesc_hton_int8(meta->strength.data, mine->strength);

      sim_log_debug_clear(182U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(183U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(184U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(185U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(186U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(187U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(188U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 467
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 467
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 469
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void )
#line 479
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 369
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 374
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(189U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 396
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(190U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 400
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(191U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 404
        if (CpmModelC$transmitting[sim_node()] && rcv->start < CpmModelC$transmissionEndTime[sim_node()] && CpmModelC$transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(192U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC$transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC$receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 412
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(193U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 428
{
  int prevNode = sim_node();

#line 430
  sim_log_debug(194U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 436
{
  CpmModelC$receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 439
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  CpmModelC$transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(195U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 446
      CpmModelC$sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(196U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC$Model$putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$TimeSyncFlag$get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = MetadataFlagsLayerC$PacketFlag$get(3U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 395 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$isSet(message_t *msg)
#line 395
{
  return /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$TimeSyncFlag$get(msg);
}

# 107 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/CsmaLayerP.nc"
static inline void /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubSend$sendDone(error_t error)
{
  for (; 0; ) ;

  /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[sim_node()] = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$STATE_READY;
  /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$RadioSend$sendDone(error);
}

# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioSend$sendDone(error_t error){
#line 56
  /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubSend$sendDone(error);
#line 56
}
#line 56
# 166 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmit_done(sim_event_t *evt)
#line 166
{
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()] = (void *)0;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmitting[sim_node()] = FALSE;
  sim_log_debug(157U, "Driver.debug", "Driver: Transmission DONE\n");
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioSend$sendDone(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[sim_node()] ? SUCCESS : EOFF);
}

static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmit_start(sim_event_t *evt)
#line 173
{
  sim_time_t duration;

  duration = 8 * __nesc_ntoh_uint8(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$getHeader(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()])->length.data);
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getAckRequired(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()])) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmit_done;

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$isDataFrame(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()])) {
      sim_log_debug(158U, "Driver.debug", "Driver: Transmitting packet to %hu with ACK? %hhu\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getDestAddr(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()]), /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getAckRequired(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()]));
    }
  else 
#line 190
    {
      sim_log_debug(159U, "Driver.debug", "Driver: Transmitting ACK to %hu\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getDestAddr(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()]));
    }

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$isSet(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()])) {
      void *timesync = (void *)/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()] + /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$get(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()]);

#line 196
      sim_log_debug(160U, "Driver.trace", "Driver: Updateing event time based on offset %hhu\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$get(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()]));
      __nesc_hton_int32((* (timesync_relative_t *)timesync).data, __nesc_ntoh_uint32((* (timesync_absolute_t *)timesync).data) - /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$LocalTime$get());
    }

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$putOnAirTo(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getDestAddr(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()]), /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()], /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Ieee154PacketLayer$getAckRequired(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()]), evt->time, 0.0, 0.0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(161U, "Driver.debug", "Driver: Transmission time %llu us...\n", duration * 1000000ULL / sim_ticks_per_sec());


  sim_queue_insert(evt);
}

# 202 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$requiresAckWait(message_t *msg)
{
  return /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getAckRequired(msg)
   && /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isDataFrame(msg)
   && /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDestAddr(msg) != 0xFFFF;
}

# 162 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 73 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$requiresAckWait(message_t *msg)
{
  return /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$requiresAckWait(msg);
}

# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$isFree(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$isFree(2U);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44





inline static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$wait(uint16_t timeout){
#line 49
  /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$wait(2U, timeout);
#line 49
}
#line 49
# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline sim_time_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$clock_to_sim(sim_time_t t)
#line 54
{
  t *= sim_ticks_per_sec();
  t /= /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$TICKS_PER_SECOND;
  return t;
}

# 280 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RadioAlarm$fired(void )
{
}

#line 257
static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
}

# 46 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$clear(message_t *msg){
#line 55
  MetadataFlagsLayerC$PacketFlag$clear(0U, msg);
#line 55
}
#line 55
# 78 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerP.nc"
static inline error_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$send(message_t *msg)
{
  error_t error;

  if (/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] == /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_READY) 
    {
      if ((error = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubSend$send(msg)) == SUCCESS) 
        {
          /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$AckReceivedFlag$clear(msg);
          /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_DATA_SEND;
          /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[sim_node()] = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 48 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubSend$send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 252 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$ready(void )
{
  if (/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] == /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_RETRY) 
    {
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_PENDING;
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$postTask();
    }
}

# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$ready(void ){
#line 63
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$ready();
#line 63
}
#line 63
# 110 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier[sim_node()] - /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$getNow();

  if (/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] == /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_BARRIER) 
    {
      /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_READY;

      /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$ready();
      return;
    }
  else {
#line 126
    if (/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] & /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$SubSend$send(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg[sim_node()]);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] & ~/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_BARRIER) == /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_TX_PENDING_FIRST) 
        {
          /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] = (/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] & /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_BARRIER) | /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_TX_PENDING_SECOND;
          /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$wait(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$getBackoff(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getCongestionBackoff(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg[sim_node()])));
        }
      else 
        {
          if (/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] & /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_BARRIER && delay > 0) 
            {
              /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_BARRIER;
              /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$wait(delay);
            }
          else {
            /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_READY;
            }
          /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioSend$sendDone(error);
        }
    }
  else {
    /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[sim_node()] = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$STATE_TX_SENDING;
    }
}

# 113 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$reportChannelError(void )
{
}

# 86 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$reportChannelError(void ){
#line 86
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$reportChannelError();
#line 86
}
#line 86
# 124 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerP.nc"
static inline void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$fired(void )
{
  for (; 0; ) ;

  /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$reportChannelError();

  /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_READY;
  /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$sendDone(SUCCESS);
}

# 146 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$default$fired(uint8_t id)
#line 146
{
}

# 59 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$fired(uint8_t arg_0x4092aaf0){
#line 59
  switch (arg_0x4092aaf0) {
#line 59
    case 0U:
#line 59
      /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RadioAlarm$fired();
#line 59
      break;
#line 59
    case 1U:
#line 59
      /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$RadioAlarm$fired();
#line 59
      break;
#line 59
    case 2U:
#line 59
      /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$fired();
#line 59
      break;
#line 59
    default:
#line 59
      /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$default$fired(arg_0x4092aaf0);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 72 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$alarm_fired(sim_event_t *evt)
#line 72
{
  if (! evt->cancelled) {
      uint8_t temp = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()];

#line 75
      sim_log_debug(109U, "RadioAlarm.debug", "RadioAlarm: fired for client %hhu\n", /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()]);
      /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()] = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$NO_CLIENT;
      /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$fired(temp);
    }
  else 
#line 78
    {
      sim_log_debug(110U, "RadioAlarm.debug", "RadioAlarm: event cancelled\n");
    }
}

# 61 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getStartTime(void )
#line 61
{
  return SimMoteP$startTime[sim_node()];
}

# 60 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline sim_time_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$sim_to_clock(sim_time_t t)
#line 60
{
  t *= /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$TICKS_PER_SECOND;
  t /= sim_ticks_per_sec();
  return t;
}

# 186 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool /*TossimRadioC.TossimRadioP*/TossimRadioP$0$CsmaConfig$requiresSoftwareCCA(message_t *msg)
{
  return /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$isDataFrame(msg);
}

# 41 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/CsmaConfig.nc"
inline static bool /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$Config$requiresSoftwareCCA(message_t *msg){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$CsmaConfig$requiresSoftwareCCA(msg);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 328 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioCCA$request(void )
#line 328
{
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$ccaDoneTask$postTask();
  return SUCCESS;
}

# 44 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioCCA.nc"
inline static error_t /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubCCA$request(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioCCA$request();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 239 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getMinimumBackoff(void )
{
  return (uint16_t )(320 * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
}

# 51 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$RandomCollisionConfig$getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 108 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$getAckTimeout(void )
{
  return (uint16_t )(1000 * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimRadioC.TossimRadioP*/TossimRadioP$0$SoftwareAckConfig$getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 230 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 230
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 239
  sim_log_debug(177U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 242
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 245
  return prr_hat;
}

# 40 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = MetadataFlagsLayerC$PacketFlag$get(2U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 292 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$acked(message_t *msg)
#line 292
{









  sim_log_error(169U, "Driver.error", "Driver: should never receive ACKs\n");
}

# 59 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$acked(message_t *msg){
#line 59
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$acked(msg);
#line 59
}
#line 59
# 151 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 151
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 157
  sim_log_debug(174U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 160
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 163
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 166
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 169
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 173
        prr = 0.0;
        }
    }
#line 175
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 178
{






  if (
#line 184
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 191
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

#line 459
static inline void CpmModelC$Model$setPendingTransmission(void )
#line 459
{
  CpmModelC$transmitting[sim_node()] = TRUE;
  sim_log_debug(197U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC$transmitting[sim_node()], sim_time_string());
}

# 57 "/home/morten/workspace/tinyos/tos/lib/tossim/GainRadioModel.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$setPendingTransmission(void ){
#line 57
  CpmModelC$Model$setPendingTransmission();
#line 57
}
#line 57
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 127 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4312 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 140 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$fired(void )
{
  for (; 0; ) ;

  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$postTask();
}

# 73 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static void PacketLinkTestP$CancelTimer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, dt);
#line 73
}
#line 73
# 270 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length)
{
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$setPayloadLength(msg, length + sizeof(ieee154_header_t ));
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void TinyosNetworkLayerC$SubPacket$setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$RadioPacket$setPayloadLength(msg, length);
#line 54
}
#line 54
# 164 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void TinyosNetworkLayerC$TinyosPacket$setPayloadLength(message_t *msg, uint8_t length)
{
  TinyosNetworkLayerC$SubPacket$setPayloadLength(msg, length + TinyosNetworkLayerC$PAYLOAD_OFFSET);
}

# 54 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$setPayloadLength(message_t *msg, uint8_t length){
#line 54
  TinyosNetworkLayerC$TinyosPacket$setPayloadLength(msg, length);
#line 54
}
#line 54
# 220 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length)
{
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 252
static inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$setPayloadLength(message_t *msg, uint8_t len)
{
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$setPayloadLength(msg, len);
}

# 94 "/home/morten/workspace/tinyos/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(199U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      sim_log_debug(200U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(201U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(202U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 75 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
inline static error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 189 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setType(message_t *msg, am_id_t type)
{
  __nesc_hton_uint8(/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$getHeader(msg)->type.data, type);
}

# 162 "/home/morten/workspace/tinyos/tos/interfaces/AMPacket.nc"
inline static void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setType(amsg, t);
#line 162
}
#line 162
# 151 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setDestination(message_t *msg, am_addr_t addr)
{
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$Ieee154PacketLayer$setDestAddr(msg, addr);
}

# 43 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setDestination(message_t *msg, am_addr_t addr){
#line 43
  /*TossimRadioC.TossimRadioP*/TossimRadioP$0$ActiveMessageConfig$setDestination(msg, addr);
#line 43
}
#line 43
# 169 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setDestination(message_t *msg, am_addr_t addr)
{
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$setDestination(msg, addr);
}

# 103 "/home/morten/workspace/tinyos/tos/interfaces/AMPacket.nc"
inline static void /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/home/morten/workspace/tinyos/tos/system/AMQueueEntryP.nc"
static inline error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 10);
  return /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 80 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
inline static error_t PacketLinkTestP$Send$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 196 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetryDelay(message_t *msg, uint16_t retryDelay)
{
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$getMeta(msg)->retryDelay = retryDelay;
}

# 53 "/home/morten/workspace/tinyos/tos/interfaces/PacketLink.nc"
inline static void PacketLinkTestP$PacketLink$setRetryDelay(message_t *msg, uint16_t retryDelay){
#line 53
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetryDelay(msg, retryDelay);
#line 53
}
#line 53
#line 46
inline static void PacketLinkTestP$PacketLink$setRetries(message_t * msg, uint16_t maxRetries){
#line 46
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetries(msg, maxRetries);
#line 46
}
#line 46
# 112 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$getPayload(msg, len);
}

# 135 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(am_id_t arg_0x40eb2730, message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$getPayload(arg_0x40eb2730, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 211 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(uint8_t id, message_t *m, uint8_t len)
#line 211
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$getPayload(0, m, len);
}

# 125 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
inline static void * /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/home/morten/workspace/tinyos/tos/system/AMQueueEntryP.nc"
static inline void */*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$getPayload(m, len);
}

# 135 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
inline static void * PacketLinkTestP$Send$getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 45 "src/PacketLinkTestP.nc"
static inline void PacketLinkTestP$Timer$fired(void )
#line 45
{
  uint8_t i;
  test_msg_t *t = PacketLinkTestP$Send$getPayload(&PacketLinkTestP$data[sim_node()], sizeof(test_msg_t ));

  sim_log_debug(47U, "PacketLinkTest", "Fired!\n");

  if (PacketLinkTestP$dataBusy[sim_node()]) {
      return;
    }

  for (i = 0; i < sizeof(test_msg_t ); i++) {
      __nesc_hton_uint8(t->data[i].data, i + 1);
    }


  PacketLinkTestP$PacketLink$setRetries(&PacketLinkTestP$data[sim_node()], 10);
  PacketLinkTestP$PacketLink$setRetryDelay(&PacketLinkTestP$data[sim_node()], 0);


  if (PacketLinkTestP$Send$send(0, &PacketLinkTestP$data[sim_node()], sizeof(test_msg_t )) == SUCCESS) {
      PacketLinkTestP$dataBusy[sim_node()] = TRUE;
    }

  PacketLinkTestP$CancelTimer$startOneShot(1);
}

# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 164 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning = FALSE;
}

# 78 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 78
}
#line 78
# 265 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$cancel(message_t *msg)
{
  error_t result;

  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$suspend();

  for (; 0; ) ;

  if (/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] == /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_PENDING || /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] == /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_RETRY) 
    {
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_DONE;
      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[sim_node()] = ECANCEL;
      result = SUCCESS;

      /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$postTask();
    }
  else {
    result = EBUSY;
    }
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$resume();

  return result;
}

# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Send$cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 164 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline error_t /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$cancel(message_t *msg)
{
  if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[sim_node()] != msg || /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] == /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_READY) {
    return FAIL;
    }

  if (/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] == /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SENDDONE) 
    {
      /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$SubSend$cancel(msg);
    }
  else 
#line 173
    {
      /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$send$postTask();
    }

  sim_log_debug(122U, "PacketLink", "cancelling\n");
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$stop();
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[sim_node()] = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_SIGNAL + ECANCEL;

  return SUCCESS;
}

# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$Send$cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 75 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$cancel(message_t *msg)
{
  return /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$SubSend$cancel(msg);
}

# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t TinyosNetworkLayerC$SubSend$cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Send$cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 140 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t TinyosNetworkLayerC$TinyosSend$cancel(message_t *msg)
{
  return TinyosNetworkLayerC$SubSend$cancel(msg);
}

# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = TinyosNetworkLayerC$TinyosSend$cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 84 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$cancel(message_t *msg)
{
  return /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$SubSend$cancel(msg);
}

# 64 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$cancel(message_t *msg){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$BareSend$cancel(msg);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 98 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$cancel(am_id_t id, message_t *msg)
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$cancel(msg);
}

# 96 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$cancel(am_id_t arg_0x40eb2730, message_t * msg){
#line 96
  unsigned char __nesc_result;
#line 96

#line 96
  __nesc_result = /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$cancel(arg_0x40eb2730, msg);
#line 96

#line 96
  return __nesc_result;
#line 96
}
#line 96
# 145 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$cancel(uint8_t clientId, message_t *msg)
#line 145
{

  if ((
#line 146
  clientId >= 1 || 
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg == (void *)0) || 
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != msg) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] == clientId) {
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      error_t err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$cancel(amId, msg);

#line 154
      return err;
    }
  else {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][clientId / 8] |= 1 << clientId % 8;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$postTask();
      return SUCCESS;
    }
}

# 89 "/home/morten/workspace/tinyos/tos/interfaces/Send.nc"
inline static error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$cancel(message_t * msg){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$cancel(0U, msg);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 61 "/home/morten/workspace/tinyos/tos/system/AMQueueEntryP.nc"
static inline error_t /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$cancel(message_t *msg)
#line 61
{
  return /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$cancel(msg);
}

# 96 "/home/morten/workspace/tinyos/tos/interfaces/AMSend.nc"
inline static error_t PacketLinkTestP$Send$cancel(message_t * msg){
#line 96
  unsigned char __nesc_result;
#line 96

#line 96
  __nesc_result = /*PacketLinkTestC.Sender.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$cancel(msg);
#line 96

#line 96
  return __nesc_result;
#line 96
}
#line 96
# 71 "src/PacketLinkTestP.nc"
static inline void PacketLinkTestP$CancelTimer$fired(void )
#line 71
{
  PacketLinkTestP$Send$cancel(&PacketLinkTestP$data[sim_node()]);
}

# 204 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 83 "/home/morten/workspace/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x40c32868){
#line 83
  switch (arg_0x40c32868) {
#line 83
    case 0U:
#line 83
      /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$DelayTimer$fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      PacketLinkTestP$Timer$fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      PacketLinkTestP$CancelTimer$fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x40c32868);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 54 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 54
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 54
}
#line 54
# 61 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP$Timer0$get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 577 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void )
#line 577
{
  sim_log_debug(149U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP$notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(148U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(145U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(146U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 299
  sim_log_debug(138U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(128U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(129U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(130U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(131U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(132U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(133U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(134U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(135U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 70 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer0$overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 70
}
#line 70
# 58 "/home/morten/workspace/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 82 "/home/morten/workspace/tinyos/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 82
}
#line 82
# 85 "/home/morten/workspace/tinyos/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 58 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 58
}
#line 58
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/morten/workspace/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 78 "/home/morten/workspace/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 78
}
#line 78
# 51 "/home/morten/workspace/tinyos/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    * (volatile uint8_t *)&atm128RegFile[sim_node()][0x35] = 1 << SE;
  }
}

# 38 "/home/morten/workspace/tinyos/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 38
{
  return SUCCESS;
}

# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 59 "/home/morten/workspace/tinyos/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 41 "/home/morten/workspace/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 41
}
#line 41
# 62 "/home/morten/workspace/tinyos/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 62
{
#line 62
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 44 "/home/morten/workspace/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 44
}
#line 44
# 26 "/home/morten/workspace/tinyos/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 26
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$PlatformInit$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/home/morten/workspace/tinyos/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 21 "/home/morten/workspace/tinyos/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 21
{
  return SUCCESS;
}

# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 58 "/home/morten/workspace/tinyos/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
inline static error_t SimMainP$PlatformInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/morten/workspace/tinyos/tos/interfaces/Scheduler.nc"
inline static bool SimMainP$Scheduler$runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 55 "/home/morten/workspace/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$Init$init(void )
#line 55
{
  memset(/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[sim_node()], /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[sim_node()]);
  return SUCCESS;
}

# 63 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Init$init(void )
{
  /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$sequenceNumber[sim_node()] = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 55 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP$Init$init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP$nodes[sim_node()][i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 447 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 65
  HplAtm128Timer0AsyncP$Compare$start();
#line 65
}
#line 65
# 364 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(140U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(control);
#line 46
}
#line 46
# 561 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 302 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SoftwareInit$init(void )
{
  uint8_t i;

  for (i = 0; i < /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RECEIVE_QUEUE_SIZE; ++i) 
    /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[sim_node()][i] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueData[sim_node()] + i;

  return SUCCESS;
}

# 55 "/home/morten/workspace/tinyos/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC$Init$init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC$seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 111 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Init$init(void )
#line 111
{
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[sim_node()] = FALSE;
  return SUCCESS;
}

# 62 "/home/morten/workspace/tinyos/tos/interfaces/Init.nc"
inline static error_t SimMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SoftwareInit$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$Init$init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$Init$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "/home/morten/workspace/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 141 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioState$turnOn(void )
#line 141
{

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[sim_node()]) {
      sim_log_error(155U, "Driver.error", "Driver: already ON\n");
      return EALREADY;
    }
  else 
#line 146
    {
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[sim_node()] = TRUE;
      sim_log_debug(156U, "Driver.debug", "Driver: turning radio ON\n");
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$stateDoneTask$postTask();
      return SUCCESS;
    }
}

# 56 "/home/morten/workspace/tinyos/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioState$turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioState$turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 76 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$start(void )
{
  error_t error;

  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$suspend();

  if (/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] != /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioState$turnOn();

      if (error == SUCCESS) {
        /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TURN_ON;
        }
    }
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$Tasklet$resume();

  return error;
}

# 104 "/home/morten/workspace/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t PacketLinkTestP$RadioControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$SplitControl$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 28 "src/PacketLinkTestP.nc"
static inline void PacketLinkTestP$Boot$booted(void )
#line 28
{
  PacketLinkTestP$RadioControl$start();
  sim_log_debug(46U, "PacketLinkTest", "booted\n");
}

# 60 "/home/morten/workspace/tinyos/tos/interfaces/Boot.nc"
inline static void SimMainP$Boot$booted(void ){
#line 60
  PacketLinkTestP$Boot$booted();
#line 60
}
#line 60
# 55 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getEuid(void )
#line 55
{
  return SimMoteP$euid[sim_node()];
}

#line 58
static inline void SimMoteP$SimMote$setEuid(long long int e)
#line 58
{
  SimMoteP$euid[sim_node()] = e;
}







static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 68
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 85
static inline void SimMoteP$SimMote$turnOff(void )
#line 85
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 157
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 157
{
  char buf[128];

#line 159
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(108U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 46 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 121 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 197 "/home/morten/workspace/tinyos/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 197
{
  int parent_index;

#line 199
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 158
static void swap(node_t *first, node_t *second)
#line 158
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 114 "/home/morten/workspace/tinyos/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 114
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 117
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 171
static void down_heap(heap_t *heap, int findex)
#line 171
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 185
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 190
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}









  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 134 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 134
{
  bool result;
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 156 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 84 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 84
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id)
#line 419
{
  int i;

#line 421
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id);
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 113
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 116
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 144
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 150
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 169
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 245
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 248
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 192
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 201
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 215
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 235
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 97
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 97
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 102
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 123
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 126
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 288
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 298
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 350
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 357
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/home/morten/workspace/tinyos/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 364 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 364
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 388
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 394
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_leuint16(hdr->src.data, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_leuint16(hdr->src.data);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_leuint16(hdr->dest.data, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_leuint16(hdr->dest.data);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.data, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.data);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.data, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.data);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.data, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 82 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 82
{
  sim_event_t *evt = AMPacketInjectorP$allocate_deliver_event(node, msg, t);

#line 84
  sim_queue_insert(evt);
}

# 262 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static void */*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$getPayload(message_t *msg, uint8_t len)
{
  if (len > /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$maxPayloadLength()) {
    return (void *)0;
    }
  return (void *)msg + /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$headerLength(msg);
}

#line 210
static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$headerLength(message_t *msg)
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubPacket$headerLength(msg) + sizeof(activemessage_header_t );
}

#line 257
static uint8_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$maxPayloadLength(void )
{
  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$RadioPacket$maxPayloadLength();
}

# 110 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 28;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 51 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(99U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 180 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(101U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 189
            FALSE;

            {
#line 189
              __nesc_atomic_end(__nesc_atomic); 
#line 189
              return __nesc_temp;
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 192
  sim_log_debug(102U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 75 "src/PacketLinkTestP.nc"
static void PacketLinkTestP$Send$sendDone(message_t *msg, error_t error)
#line 75
{
  PacketLinkTestP$dataBusy[sim_node()] = FALSE;



  if (
#line 78
  error == SUCCESS

   && PacketLinkTestP$PacketLink$wasDelivered(&PacketLinkTestP$data[sim_node()])) 

    {
      sim_log_debug(48U, "PacketLinkTest", "**** SENT **** \n");
    }
  else 
#line 84
    {
      sim_log_debug(49U, "PacketLinkTest", "**** FAILED **** \n");
    }
}

# 61 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static bool MetadataFlagsLayerC$PacketFlag$get(uint8_t bit, message_t *msg)
{
  return MetadataFlagsLayerC$getMeta(msg)->flags & (1 << bit) ? TRUE : FALSE;
}

# 163 "/home/morten/workspace/tinyos/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 74 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static ieee154_header_t */*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(message_t *msg)
{
  return (void *)msg + /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$SubPacket$headerLength(msg);
}

# 74 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static error_t /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMSend$send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$maxPayloadLength()) {
    return EINVAL;
    }
  if (/*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Config$checkFrame(msg) != SUCCESS) {
    return FAIL;
    }
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$Packet$setPayloadLength(msg, len);
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setSource(msg, /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$address());
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setGroup(msg, /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$localGroup());
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setType(msg, id);
  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$AMPacket$setDestination(msg, addr);

  /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SendNotifier$aboutToSend(id, addr, msg);

  return /*ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP$0$SubSend$send(msg);
}

# 136 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

static void /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$setAckRequired(message_t *msg, bool ack)
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;

#line 143
  if (ack) {
    (__nesc_temp42 = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) | (1 << IEEE154_FCF_ACK_REQ)));
    }
  else {
#line 146
    (__nesc_temp43 = /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$getHeader(msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) & ~ (uint16_t )(1 << IEEE154_FCF_ACK_REQ)));
    }
}

# 344 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$setPayloadLength(message_t *msg, uint8_t length)
#line 344
{
  __nesc_hton_uint8(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$getHeader(msg)->length.data, length + 1);
}

# 76 "/home/morten/workspace/tinyos/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 76
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 132 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static error_t TinyosNetworkLayerC$TinyosSend$send(message_t *msg)
{

  __nesc_hton_leuint8(TinyosNetworkLayerC$getHeader(msg)->network.data, 0x3f);

  return TinyosNetworkLayerC$SubSend$send(msg);
}

#line 127
static network_header_t *TinyosNetworkLayerC$getHeader(message_t *msg)
{
  return (void *)msg + TinyosNetworkLayerC$SubPacket$headerLength(msg);
}

# 205 "/home/morten/workspace/tinyos/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(103U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(104U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP$sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 97 "/home/morten/workspace/tinyos/tos/system/SimpleArbiterP.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[sim_node()] == /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_BUSY && /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()] == id) {
          if (/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$isEmpty() == FALSE) {
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$NO_RES;
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$Queue$dequeue();
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
            }
          else {
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$NO_RES;
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 274 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 274
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 277
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 126
static double CpmModelC$noise_hash_generation(void )
#line 126
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(172U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(173U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 210 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioSend$send(message_t *msg)
#line 210
{
  sim_time_t delay;

  if (!/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[sim_node()]) {
      sim_log_error(162U, "Driver.error", "Driver: sending when radio is OFF\n");
      return EOFF;
    }

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()] != (void *)0) {
      sim_log_error(163U, "Driver.error", "Driver: already sending\n");
      return EBUSY;
    }

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()] = msg;

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$clear(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[sim_node()]);




  delay = sim_csma_rxtx_delay();
  delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[sim_node()].mote = sim_node();
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[sim_node()].time = sim_time() + delay;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[sim_node()].force = 0;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[sim_node()].cancelled = 0;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[sim_node()].handle = /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmit_start;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmitting[sim_node()] = TRUE;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$Model$setPendingTransmission();
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeStamp$set(msg, /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$LocalTime$get());

  sim_log_debug(164U, "Driver.debug", "Driver: Starting transmission in %llu us...\n", delay * 1000000ULL / sim_ticks_per_sec());
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$dbg_message(msg);

  sim_queue_insert(&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[sim_node()]);

  return SUCCESS;
}

# 73 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void MetadataFlagsLayerC$PacketFlag$clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  MetadataFlagsLayerC$getMeta(msg)->flags &= ~(1 << bit);
}

# 97 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/SoftwareAckLayerP.nc"
static void /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SubSend$sendDone(error_t error)
{
  if (/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] == /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$requiresAckWait(/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[sim_node()]) && /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$isFree()) 
        {
          /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioAlarm$wait(/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$SoftwareAckConfig$getAckTimeout());
          /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_ACK_WAIT;
        }
      else 
        {
          /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[sim_node()] = /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$STATE_READY;
          /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$RadioSend$sendDone(error);
        }
    }
}

# 83 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static void /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$wait(uint8_t id, uint16_t timeout)
#line 83
{

  if (/*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()] != /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$NO_CLIENT) {

      sim_log_error(111U, "RadioAlarm.error", "RadioAlarm: already being used by client %hhu\n", /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()]);
    }
  else {

      sim_event_t *alarmEvent = sim_queue_allocate_event();

      alarmEvent->time = sim_time() + /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$clock_to_sim(timeout);
      alarmEvent->force = FALSE;
      alarmEvent->cancelled = FALSE;
      alarmEvent->handle = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$alarm_fired;
      alarmEvent->cleanup = sim_queue_cleanup_none;

      /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()] = id;
      /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$currentEvent[sim_node()] = alarmEvent;

      sim_log_debug(112U, "RadioAlarm.debug", "RadioAlarm: scheduling event with timeout %hu for client %hhu\n", timeout, /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[sim_node()]);

      sim_queue_insert(alarmEvent);
    }
}

# 97 "/home/morten/workspace/tinyos/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 217 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$RadioSend$sendDone(error_t error)
{
  for (; 0; ) ;

  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[sim_node()] = error;
  if (error == SUCCESS) {
    /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_DONE;
    }
  else {
#line 225
    /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[sim_node()] = /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$STATE_TX_PENDING;
    }
  /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$sendTask$postTask();
}

# 122 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static uint16_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$RadioAlarm$getNow(uint8_t id)
#line 122
{
  uint16_t now;
  sim_time_t elapsed = sim_time() - sim_mote_start_time(sim_node());

#line 125
  elapsed = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$sim_to_clock(elapsed);
  now = (uint16_t )(elapsed & 0xFFFF);
  sim_log_debug(115U, "RadioAlarm.trace", "RadioAlarm: now is  %hu\n", now);
  return now;
}

# 106 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 106
{
  long long int result;
  int tmp = sim_node();

#line 109
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

# 72 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/CsmaLayerP.nc"
static error_t /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$RadioSend$send(message_t *msg)
{
  error_t error;

  if (/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[sim_node()] == /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$STATE_READY) 
    {
      if (/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$Config$requiresSoftwareCCA(msg)) 
        {
          /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$txMsg[sim_node()] = msg;

          if ((error = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubCCA$request()) == SUCCESS) {
            /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[sim_node()] = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$STATE_CCA_WAIT;
            }
        }
      else {
#line 85
        if ((error = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$SubSend$send(msg)) == SUCCESS) {
          /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[sim_node()] = /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$STATE_SEND;
          }
        }
    }
  else {
#line 89
    error = EBUSY;
    }
  return error;
}

# 84 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom[sim_node()];
      /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom[sim_node()] += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$calcNextRandom$postTask();

  return a % maxBackoff + /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$Config$getMinimumBackoff();
}

# 399 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$PacketTimeSyncOffset$get(message_t *msg)
#line 399
{
  return /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$headerLength(msg) + /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RadioPacket$payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 134 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static uint32_t /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$LocalTime$get(void )
#line 134
{
  uint32_t lt;
  sim_time_t elapsed = sim_time() - sim_mote_start_time(sim_node());

#line 137
  elapsed = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$sim_to_clock(elapsed);
  lt = (uint32_t )(elapsed & 0xFFFFFFFF);
  sim_log_debug(116U, "RadioAlarm.trace", "RadioAlarm: localtime is %lu\n", lt);
  return lt;
}

# 248 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 248
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 251
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 255
        prr = 0.0;
        }
    }
#line 257
  return prr;
}

# 66 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void MetadataFlagsLayerC$PacketFlag$set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  MetadataFlagsLayerC$getMeta(msg)->flags |= 1 << bit;
}

# 60 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static timestamp_metadata_t */*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP$0$RadioPacket$metadataLength(msg);
}

# 94 "/home/morten/workspace/tinyos/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$dbg_message(message_t *msg)
#line 94
{
  uint8_t i;

#line 96
  sim_log_debug(150U, "Driver.trace", " - message (rssi: %hhu, ack: %hhu):", /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$RSSIFlag$get(msg), 0);






  for (i = 0; i < sizeof(message_t ); i++) {
      sim_log_debug_clear(151U, "Driver.trace", " %hhu", *((uint8_t *)msg + i));
    }
  sim_log_debug_clear(152U, "Driver.trace", "\n");
}

# 209 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$requiresAckReply(message_t *msg)
{
  return /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getAckRequired(msg)
   && /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$isDataFrame(msg)
   && /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$Ieee154PacketLayer$getDestAddr(msg) == /*Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP$0$ActiveMessageAddress$amAddress();
}

# 216 "/home/morten/workspace/tinyos/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 216
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 69 "/home/morten/workspace/tinyos/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC$Random$rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC$seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC$seed[sim_node()] = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 144 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 161 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(137U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

#line 160
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 457
{
  sim_log_debug(143U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 73 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 191 "/home/morten/workspace/tinyos/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static void /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$PacketLink$setRetries(message_t *msg, uint16_t maxRetries)
{
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$getMeta(msg)->maxRetries = maxRetries;
}

# 159 "/home/morten/workspace/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 212 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(123U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(124U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(125U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(126U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(127U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 463 "/home/morten/workspace/tinyos/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 463
{
  sim_log_debug(144U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 273
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

#line 100
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(147U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 231
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(136U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 90 "/home/morten/workspace/tinyos/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 90
{
  long long int result;
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 99
{
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 115
{
  int result;
  int tmpID = sim_node();

#line 118
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(106U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 125
{
  int tmpID = sim_node();

#line 127
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(107U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 143
{
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 72
static void SimMoteP$SimMote$turnOn(void )
#line 72
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(105U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 150
  void sim_mote_turn_off(int mote)
#line 150
{
  int tmp = sim_node();

#line 152
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 166
{
  int tmp = sim_node();

#line 168
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PacketLinkTestP */
  if (!strcmp(varname, "PacketLinkTestP$data"))
  {
    *addr = (uintptr_t)&PacketLinkTestP$data[__nesc_mote];
    *size = sizeof(PacketLinkTestP$data[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PacketLinkTestP$dataBusy"))
  {
    *addr = (uintptr_t)&PacketLinkTestP$dataBusy[__nesc_mote];
    *size = sizeof(PacketLinkTestP$dataBusy[__nesc_mote]);
    return 0;
  }

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimRadioP$0 */

  /* Module RadioAlarmP$0 */
  if (!strcmp(varname, "/*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client"))
  {
    *addr = (uintptr_t)&/*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[__nesc_mote];
    *size = sizeof(/*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$currentEvent"))
  {
    *addr = (uintptr_t)&/*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$currentEvent[__nesc_mote];
    *size = sizeof(/*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$currentEvent[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageLayerP$0 */

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$group"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$group[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$group[__nesc_mote]);
    return 0;
  }

  /* Module AutoResourceAcquireLayerC$0 */
  if (!strcmp(varname, "/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending[__nesc_mote];
    *size = sizeof(/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending[__nesc_mote]);
    return 0;
  }

  /* Module FcfsResourceQueueC$0 */
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail[__nesc_mote]);
    return 0;
  }

  /* Module SimpleArbiterP$0 */
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId[__nesc_mote]);
    return 0;
  }

  /* Module Ieee154MessageLayerC */

  /* Module TinyosNetworkLayerC */

  /* Module Ieee154PacketLayerP$0 */

  /* Module UniqueLayerP$0 */
  if (!strcmp(varname, "/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$sequenceNumber"))
  {
    *addr = (uintptr_t)&/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$sequenceNumber[__nesc_mote];
    *size = sizeof(/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$sequenceNumber[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$receivedNumbers"))
  {
    *addr = (uintptr_t)&/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$receivedNumbers[__nesc_mote];
    *size = sizeof(/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$receivedNumbers[__nesc_mote]);
    return 0;
  }

  /* Module NeighborhoodP */
  if (!strcmp(varname, "NeighborhoodP$nodes"))
  {
    *addr = (uintptr_t)&NeighborhoodP$nodes[__nesc_mote];
    *size = sizeof(NeighborhoodP$nodes[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborhoodP$ages"))
  {
    *addr = (uintptr_t)&NeighborhoodP$ages[__nesc_mote];
    *size = sizeof(NeighborhoodP$ages[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborhoodP$flags"))
  {
    *addr = (uintptr_t)&NeighborhoodP$flags[__nesc_mote];
    *size = sizeof(NeighborhoodP$flags[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborhoodP$time"))
  {
    *addr = (uintptr_t)&NeighborhoodP$time[__nesc_mote];
    *size = sizeof(NeighborhoodP$time[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborhoodP$last"))
  {
    *addr = (uintptr_t)&NeighborhoodP$last[__nesc_mote];
    *size = sizeof(NeighborhoodP$last[__nesc_mote]);
    return 0;
  }

  /* Module LowPowerListeningDummyP$0 */

  /* Module PacketLinkLayerP$0 */
  if (!strcmp(varname, "/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state"))
  {
    *addr = (uintptr_t)&/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[__nesc_mote];
    *size = sizeof(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg"))
  {
    *addr = (uintptr_t)&/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[__nesc_mote];
    *size = sizeof(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries"))
  {
    *addr = (uintptr_t)&/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries[__nesc_mote];
    *size = sizeof(/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module MessageBufferLayerP$0 */
  if (!strcmp(varname, "/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state"))
  {
    *addr = (uintptr_t)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[__nesc_mote];
    *size = sizeof(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg"))
  {
    *addr = (uintptr_t)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg[__nesc_mote];
    *size = sizeof(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError"))
  {
    *addr = (uintptr_t)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[__nesc_mote];
    *size = sizeof(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$retries"))
  {
    *addr = (uintptr_t)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$retries[__nesc_mote];
    *size = sizeof(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$retries[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueData"))
  {
    *addr = (uintptr_t)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueData[__nesc_mote];
    *size = sizeof(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueData[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue"))
  {
    *addr = (uintptr_t)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[__nesc_mote];
    *size = sizeof(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead"))
  {
    *addr = (uintptr_t)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[__nesc_mote];
    *size = sizeof(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize"))
  {
    *addr = (uintptr_t)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[__nesc_mote];
    *size = sizeof(/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[__nesc_mote]);
    return 0;
  }

  /* Module TaskletC */

  /* Module RandomCollisionLayerP$0 */
  if (!strcmp(varname, "/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state"))
  {
    *addr = (uintptr_t)&/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[__nesc_mote];
    *size = sizeof(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg"))
  {
    *addr = (uintptr_t)&/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg[__nesc_mote];
    *size = sizeof(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier"))
  {
    *addr = (uintptr_t)&/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier[__nesc_mote];
    *size = sizeof(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom"))
  {
    *addr = (uintptr_t)&/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom[__nesc_mote];
    *size = sizeof(/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC$seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC$seed[__nesc_mote];
    *size = sizeof(RandomMlcgC$seed[__nesc_mote]);
    return 0;
  }

  /* Module SoftwareAckLayerP$0 */
  if (!strcmp(varname, "/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state"))
  {
    *addr = (uintptr_t)&/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[__nesc_mote];
    *size = sizeof(/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg"))
  {
    *addr = (uintptr_t)&/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[__nesc_mote];
    *size = sizeof(/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$ackMsg"))
  {
    *addr = (uintptr_t)&/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$ackMsg[__nesc_mote];
    *size = sizeof(/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$ackMsg[__nesc_mote]);
    return 0;
  }

  /* Module MetadataFlagsLayerC */

  /* Module CsmaLayerP$0 */
  if (!strcmp(varname, "/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$txMsg"))
  {
    *addr = (uintptr_t)&/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$txMsg[__nesc_mote];
    *size = sizeof(/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$txMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state"))
  {
    *addr = (uintptr_t)&/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[__nesc_mote];
    *size = sizeof(/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[__nesc_mote]);
    return 0;
  }

  /* Module TimeStampingLayerP$0 */

  /* Module TossimDriverLayerP$0 */
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmitting"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmitting[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$buffer"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$buffer[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC$transmitting[__nesc_mote];
    *size = sizeof(CpmModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC$transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC$transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module AMPacketInjectorP */
  if (!strcmp(varname, "AMPacketInjectorP$injectionBuffer"))
  {
    *addr = (uintptr_t)&AMPacketInjectorP$injectionBuffer[__nesc_mote];
    *size = sizeof(AMPacketInjectorP$injectionBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMPacketInjectorP$injectionMsg"))
  {
    *addr = (uintptr_t)&AMPacketInjectorP$injectionMsg[__nesc_mote];
    *size = sizeof(AMPacketInjectorP$injectionMsg[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PacketLinkTestP */
  memset((void *)&PacketLinkTestP$data[__nesc_mote], 0, sizeof PacketLinkTestP$data[__nesc_mote]);
  memset((void *)&PacketLinkTestP$dataBusy[__nesc_mote], 0, sizeof PacketLinkTestP$dataBusy[__nesc_mote]);

  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset((void *)&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset((void *)&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset((void *)&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimRadioP$0 */

  /* Module RadioAlarmP$0 */
  /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$client[__nesc_mote] = /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$NO_CLIENT;
  /*RadioAlarmC.RadioAlarmP*/RadioAlarmP$0$currentEvent[__nesc_mote] = (void *)0;

  /* Module ActiveMessageLayerP$0 */

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);
  ActiveMessageAddressC$group[__nesc_mote] = TOS_AM_GROUP;

  /* Module AutoResourceAcquireLayerC$0 */
  memset((void *)&/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending[__nesc_mote], 0, sizeof /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC$0$pending[__nesc_mote]);

  /* Module FcfsResourceQueueC$0 */
  memset((void *)&/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[__nesc_mote], 0, sizeof /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$resQ[__nesc_mote]);
  /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qHead[__nesc_mote] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
  /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$qTail[__nesc_mote] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

  /* Module SimpleArbiterP$0 */
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$state[__nesc_mote] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$RES_IDLE;
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$resId[__nesc_mote] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$NO_RES;
  memset((void *)&/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId[__nesc_mote], 0, sizeof /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP$0$reqResId[__nesc_mote]);

  /* Module Ieee154MessageLayerC */

  /* Module TinyosNetworkLayerC */

  /* Module Ieee154PacketLayerP$0 */

  /* Module UniqueLayerP$0 */
  memset((void *)&/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$sequenceNumber[__nesc_mote], 0, sizeof /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$sequenceNumber[__nesc_mote]);
  memset((void *)&/*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$receivedNumbers[__nesc_mote], 0, sizeof /*UniqueLayerC.UniqueLayerP*/UniqueLayerP$0$receivedNumbers[__nesc_mote]);

  /* Module NeighborhoodP */
  memset((void *)&NeighborhoodP$nodes[__nesc_mote], 0, sizeof NeighborhoodP$nodes[__nesc_mote]);
  memset((void *)&NeighborhoodP$ages[__nesc_mote], 0, sizeof NeighborhoodP$ages[__nesc_mote]);
  memset((void *)&NeighborhoodP$flags[__nesc_mote], 0, sizeof NeighborhoodP$flags[__nesc_mote]);
  memset((void *)&NeighborhoodP$time[__nesc_mote], 0, sizeof NeighborhoodP$time[__nesc_mote]);
  memset((void *)&NeighborhoodP$last[__nesc_mote], 0, sizeof NeighborhoodP$last[__nesc_mote]);

  /* Module LowPowerListeningDummyP$0 */

  /* Module PacketLinkLayerP$0 */
  /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$state[__nesc_mote] = /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$STATE_READY;
  memset((void *)&/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[__nesc_mote], 0, sizeof /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$currentMsg[__nesc_mote]);
  memset((void *)&/*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries[__nesc_mote], 0, sizeof /*PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP$0$totalRetries[__nesc_mote]);

  /* Module Atm128AlarmAsyncP$0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module MessageBufferLayerP$0 */
  memset((void *)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[__nesc_mote], 0, sizeof /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$state[__nesc_mote]);
  memset((void *)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg[__nesc_mote], 0, sizeof /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txMsg[__nesc_mote]);
  memset((void *)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[__nesc_mote], 0, sizeof /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$txError[__nesc_mote]);
  memset((void *)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$retries[__nesc_mote], 0, sizeof /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$retries[__nesc_mote]);
  memset((void *)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueData[__nesc_mote], 0, sizeof /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueData[__nesc_mote]);
  memset((void *)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[__nesc_mote], 0, sizeof /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueue[__nesc_mote]);
  memset((void *)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[__nesc_mote], 0, sizeof /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueHead[__nesc_mote]);
  memset((void *)&/*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[__nesc_mote], 0, sizeof /*MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP$0$receiveQueueSize[__nesc_mote]);

  /* Module TaskletC */

  /* Module RandomCollisionLayerP$0 */
  memset((void *)&/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[__nesc_mote], 0, sizeof /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$state[__nesc_mote]);
  memset((void *)&/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg[__nesc_mote], 0, sizeof /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txMsg[__nesc_mote]);
  memset((void *)&/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier[__nesc_mote], 0, sizeof /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$txBarrier[__nesc_mote]);
  memset((void *)&/*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom[__nesc_mote], 0, sizeof /*RandomCollisionLayerC.RandomCollisionLayerP*/RandomCollisionLayerP$0$nextRandom[__nesc_mote]);

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC$seed[__nesc_mote], 0, sizeof RandomMlcgC$seed[__nesc_mote]);

  /* Module SoftwareAckLayerP$0 */
  memset((void *)&/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[__nesc_mote], 0, sizeof /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$state[__nesc_mote]);
  memset((void *)&/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[__nesc_mote], 0, sizeof /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$txMsg[__nesc_mote]);
  memset((void *)&/*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$ackMsg[__nesc_mote], 0, sizeof /*SoftwareAckLayerC.SoftwareAckLayerP*/SoftwareAckLayerP$0$ackMsg[__nesc_mote]);

  /* Module MetadataFlagsLayerC */

  /* Module CsmaLayerP$0 */
  memset((void *)&/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$txMsg[__nesc_mote], 0, sizeof /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$txMsg[__nesc_mote]);
  memset((void *)&/*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[__nesc_mote], 0, sizeof /*CsmaLayerC.CsmaLayerP*/CsmaLayerP$0$state[__nesc_mote]);

  /* Module TimeStampingLayerP$0 */

  /* Module TossimDriverLayerP$0 */
  memset((void *)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[__nesc_mote], 0, sizeof /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$running[__nesc_mote]);
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$transmitting[__nesc_mote] = FALSE;
  memset((void *)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[__nesc_mote], 0, sizeof /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sending[__nesc_mote]);
  memset((void *)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[__nesc_mote], 0, sizeof /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$sendEvent[__nesc_mote]);
  memset((void *)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$buffer[__nesc_mote], 0, sizeof /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$buffer[__nesc_mote]);
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$bufferPointer[__nesc_mote] = &/*TossimDriverLayerC.Driver*/TossimDriverLayerP$0$buffer[__nesc_mote];

  /* Module CpmModelC */
  memset((void *)&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset((void *)&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC$transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC$transmissionEndTime[__nesc_mote]);
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module AMPacketInjectorP */
  memset((void *)&AMPacketInjectorP$injectionBuffer[__nesc_mote], 0, sizeof AMPacketInjectorP$injectionBuffer[__nesc_mote]);
  AMPacketInjectorP$injectionMsg[__nesc_mote] = &AMPacketInjectorP$injectionBuffer[__nesc_mote];

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote] = 1;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);

}
