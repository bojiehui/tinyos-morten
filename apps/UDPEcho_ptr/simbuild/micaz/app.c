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






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






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


extern void *memmove(void *__dest, const void *__src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 64
extern void *memset(void *__s, int __c, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 127
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;

extern char *strncpy(char *__restrict __dest, 
const char *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;









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
typedef int (*__compar_fn_t)(const void *arg_0x40330bc8, const void *arg_0x40330d60);
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
# 65 "/home/bo/tinyos-morten/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4267 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/home/bo/tinyos-morten/tos/lib/tossim/sim_tossim.h"
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
# 50 "/home/bo/tinyos-morten/tos/lib/tossim/sim_event_queue.h"
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
# 53 "/home/bo/tinyos-morten/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 65 "/home/bo/tinyos-morten/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/home/bo/tinyos-morten/tos/lib/tossim/tos.h"
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
# 9 "/home/bo/tinyos-morten/tos/lib/tossim/hashtable.h"
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
# 47 "/home/bo/tinyos-morten/tos/lib/tossim/sim_log.c"
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
  SIM_LOG_OUTPUT_COUNT = 339U
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
# 65 "/home/bo/tinyos-morten/tos/lib/tossim/heap.h"
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
# 58 "/home/bo/tinyos-morten/tos/lib/tossim/heap.c"
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
# 44 "/home/bo/tinyos-morten/tos/lib/tossim/sim_event_queue.c"
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
# 51 "/home/bo/tinyos-morten/tos/lib/tossim/sim_noise.h"
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
# 51 "/home/bo/tinyos-morten/tos/lib/tossim/sim_tossim.c"
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
# 99 "/home/bo/tinyos-morten/tos/lib/tossim/sim_csma.h"
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
# 44 "/home/bo/tinyos-morten/tos/lib/tossim/sim_csma.c"
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
# 57 "/home/bo/tinyos-morten/tos/lib/tossim/sim_gain.h"
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
# 6 "/home/bo/tinyos-morten/tos/lib/tossim/sim_gain.c"
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
# 39 "/home/bo/tinyos-morten/tos/lib/tossim/randomlib.c"
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
# 46 "/home/bo/tinyos-morten/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x405ec618, int arg_0x405ec770);
static double RandomUniform(void );
# 51 "/home/bo/tinyos-morten/tos/lib/tossim/sim_noise.c"
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
# 59 "/home/bo/tinyos-morten/tos/lib/tossim/sim_packet.h"
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
# 6 "/home/bo/tinyos-morten/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint16_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint16_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4271 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4272 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 41 "/home/bo/tinyos-morten/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4273 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4274 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4275 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4276 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 10 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioConfig.h"
typedef TMicro TRadio;
typedef uint16_t tradio_size;
# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
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
# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 30 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioMsg.h"
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
# 83 "/home/bo/tinyos-morten/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4277 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4278 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4279 {
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
# 53 "/home/bo/tinyos-morten/tos/lib/tossim/platform_message.h"
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
# 19 "/home/bo/tinyos-morten/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[90];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/home/bo/tinyos-morten/tos/lib/tossim/sim_packet.c"
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
# 51 "/home/bo/tinyos-morten/tos/types/TinyError.h"
enum __nesc_unnamed4280 {
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
# 35 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/6lowpan.h"
enum __nesc_unnamed4281 {
  LOWMSG_MESH_LEN = 5, 
  LOWMSG_BCAST_LEN = 2, 
  LOWMSG_FRAG1_LEN = 4, 
  LOWMSG_FRAGN_LEN = 5
};

enum __nesc_unnamed4282 {
  INET_MTU = 1280, 
  LIB6LOWPAN_MAX_LEN = 100, 
  LOWPAN_LINK_MTU = 109, 




  FRAG_EXPIRE_TIME = 4096
};




enum __nesc_unnamed4283 {
  LOWPAN_NALP_PATTERN = 0x0, 
  LOWPAN_MESH_PATTERN = 0x2, 
  LOWPAN_FRAG1_PATTERN = 0x18, 
  LOWPAN_FRAGN_PATTERN = 0x1c, 
  LOWPAN_BCAST_PATTERN = 0x50, 
  LOWPAN_IPV6_PATTERN = 0x41
};

enum __nesc_unnamed4284 {
  LOWPAN_MESH_V_MASK = 0x20, 
  LOWPAN_MESH_F_MASK = 0x10, 
  LOWPAN_MESH_HOPS_MASK = 0x0f
};




enum __nesc_unnamed4285 {
  LOWPAN_DISPATCH_BYTE_MASK = 0xe0, 
  LOWPAN_DISPATCH_BYTE_VAL = 0x60, 

  LOWPAN_IPHC_TF_MASK = 0x18, 
  LOWPAN_IPHC_TF_NONE = 0x18, 
  LOWPAN_IPHC_TF_ECN_DSCP = 0x10, 
  LOWPAN_IPHC_TF_ECN_FL = 0x08, 
  LOWPAN_IPHC_TF_ECN_DSCP_FL = 0x00, 

  LOWPAN_IPHC_NH_MASK = 0x04, 
  LOWPAN_IPHC_NH_INLINE = 0, 

  LOWPAN_IPHC_HLIM_MASK = 0x03, 
  LOWPAN_IPHC_HLIM_NONE = 0x00, 
  LOWPAN_IPHC_HLIM_1 = 0x01, 
  LOWPAN_IPHC_HLIM_64 = 0x02, 
  LOWPAN_IPHC_HLIM_255 = 0x03, 

  LOWPAN_IPHC_CID_MASK = 0x80, 
  LOWPAN_IPHC_CID_PRESENT = 0x80, 

  LOWPAN_IPHC_SAM_SHIFT = 4, 
  LOWPAN_IPHC_M = 0x08, 
  LOWPAN_IPHC_DAM_SHIFT = 0, 

  LOWPAN_IPHC_AC_CONTEXT = 0x04, 
  LOWPAN_IPHC_AM_MASK = 0x3, 
  LOWPAN_IPHC_AM_128 = 0x0, 
  LOWPAN_IPHC_AM_64 = 0x1, 
  LOWPAN_IPHC_AM_16 = 0x2, 
  LOWPAN_IPHC_AM_0 = 0x3, 

  LOWPAN_IPHC_AM_M = 0x08, 
  LOWPAN_IPHC_AM_M_128 = 0x0, 
  LOWPAN_IPHC_AM_M_48 = 0x1, 
  LOWPAN_IPHC_AM_M_32 = 0x2, 
  LOWPAN_IPHC_AM_M_8 = 0x3
};




enum __nesc_unnamed4286 {
  LOWPAN_NHC_IPV6_MASK = 0xf0, 
  LOWPAN_NHC_IPV6_PATTERN = 0xe0, 

  LOWPAN_NHC_EID_SHIFT = 0x1, 
  LOWPAN_NHC_EID_MASK = 0xe, 
  LOWPAN_NHC_EID_HOP = 0x0 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_ROUTING = 0x1 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_FRAG = 0x2 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_DEST = 0x3 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_MOBILE = 0x4 << LOWPAN_NHC_EID_SHIFT, 
  LOWPAN_NHC_EID_IPV6 = 0x7 << LOWPAN_NHC_EID_SHIFT, 

  LOWPAN_NHC_NH = 0x1, 

  LOWPAN_NHC_UDP_MASK = 0xf8, 
  LOWPAN_NHC_UDP_PATTERN = 0xf0, 

  LOWPAN_NHC_UDP_CKSUM = 0x4, 

  LOWPAN_NHC_UDP_PORT_MASK = 0x3, 
  LOWPAN_NHC_UDP_PORT_FULL = 0x0, 
  LOWPAN_NHC_UDP_PORT_SRC_FULL = 0x1, 
  LOWPAN_NHC_UDP_PORT_DST_FULL = 0x2, 
  LOWPAN_NHC_UDP_PORT_SHORT = 0x3
};
# 35 "../TestMessage.h"
enum __nesc_unnamed4287 {
  DATA_SIZE = 11, 
  IST_SIZE = 24, 
  AM_RADIO_COUNT_MSG = 10, 
  AM_TEST_MSG = 10, 
  NO_PACKET = 3000, 
  WAITTIME = 1000, 
  START_DELAY_TIMER = 3000, 
  BUTTON_DELAY_TIMER = 5000
};
#line 61
#line 48
typedef nx_struct radio_count_msg {
  nx_uint16_t counter;
  nx_uint16_t ist;
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t power;
  nx_uint8_t distance;
  nx_uint8_t senderID;
  nx_uint8_t receiverID;
  nx_uint16_t voltage_sender;
  nx_uint16_t voltage_receiver;
  nx_uint8_t crc_ok;
  nx_int8_t data[DATA_SIZE];
} __attribute__((packed)) radio_count_msg_t;
# 25 "/home/bo/tinyos-morten/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4288 {

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
enum __nesc_unnamed4289 {

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
# 51 "/home/bo/tinyos-morten/tos/chips/atm128/sim/atm128hardware.h"
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





enum __nesc_unnamed4290 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/home/bo/tinyos-morten/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4291 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4292 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4293 {
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
typedef struct __nesc_unnamed4294 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4295 {
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


enum __nesc_unnamed4296 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4297 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4298 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4299 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4300 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4301 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/home/bo/tinyos-morten/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4302 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/home/bo/tinyos-morten/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 40 "/home/bo/tinyos-morten/tos/types/IeeeEui64.h"
enum __nesc_unnamed4303 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 35 "/home/bo/tinyos-morten/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 39
typedef struct __nesc_unnamed4304 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4305 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4306 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4307 {
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
# 33 "/home/bo/tinyos-morten/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 52 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4308 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4309 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4310 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4311 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4312 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4313 {

  uint8_t flat;
  struct __nesc_unnamed4314 {
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
typedef union __nesc_unnamed4315 {

  uint8_t flat;
  struct __nesc_unnamed4316 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4317 {

  uint8_t flat;
  struct __nesc_unnamed4318 {
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
typedef union __nesc_unnamed4319 {

  uint8_t flat;
  struct __nesc_unnamed4320 {
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
typedef union __nesc_unnamed4321 {

  uint8_t flat;
  struct __nesc_unnamed4322 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4323 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4324 {

  uint8_t flat;
  struct __nesc_unnamed4325 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4326 {
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
typedef union __nesc_unnamed4327 {

  uint8_t flat;
  struct __nesc_unnamed4328 {
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
typedef union __nesc_unnamed4329 {

  uint8_t flat;
  struct __nesc_unnamed4330 {
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
typedef union __nesc_unnamed4331 {

  uint8_t flat;
  struct __nesc_unnamed4332 {
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
typedef union __nesc_unnamed4333 {

  uint8_t flat;
  struct __nesc_unnamed4334 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
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
# 43 "/home/bo/tinyos-morten/tos/types/Leds.h"
enum __nesc_unnamed4335 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatch.h"
enum __nesc_unnamed4336 {
  N_RECONSTRUCTIONS = 3, 
  N_CONCURRENT_SENDS = 3, 
  N_FRAGMENTS = 12
};

struct send_info {
  void *upper_data;
  uint8_t link_fragments;
  uint8_t link_transmissions;
  bool failed;
  uint8_t _refcount;
};

struct send_entry {
  struct send_info *info;
  struct ieee154_frame_addr *frame_addr;
  message_t *msg;
};
# 26 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/nwbyte.h"
uint32_t ntohl(uint32_t i);
#line 26
uint32_t ntohl(uint32_t i);
# 11 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/iovec.h"
struct ip_iovec {
  uint8_t *iov_base;
  size_t iov_len;
  struct ip_iovec *iov_next;
};

int iov_read(struct ip_iovec *iov, int offset, int len, uint8_t *buf);
int iov_len(struct ip_iovec *iov);
# 41 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/ip.h"
struct in6_addr {

  union __nesc_unnamed4337 {

    uint8_t u6_addr8[16];
    uint16_t u6_addr16[8];
    uint32_t u6_addr32[4];
  } in6_u;
};




struct sockaddr_in6 {
  uint16_t sin6_port;
  struct in6_addr sin6_addr;
};









struct ip6_hdr {
  union __nesc_unnamed4338 {
    struct ip6_hdrctl {
      uint32_t ip6_un1_flow;
      uint16_t ip6_un1_plen;
      uint8_t ip6_un1_nxt;
      uint8_t ip6_un1_hlim;
    } ip6_un1;
    uint8_t ip6_un2_vfc;
  } ip6_ctlun;
  struct in6_addr ip6_src;
  struct in6_addr ip6_dst;
} __attribute((packed)) ;
#line 109
struct ip6_ext {
  uint8_t ip6e_nxt;
  uint8_t ip6e_len;
};

struct tlv_hdr {
  uint8_t type;
  uint8_t len;
};



enum __nesc_unnamed4339 {
  IANA_ICMP = 58, 
  IANA_UDP = 17, 
  IANA_TCP = 6, 



  IPV6_HOP = 0, 
  IPV6_IPV6 = 41, 
  IPV6_ROUTING = 43, 
  IPV6_FRAG = 44, 
  IPV6_AUTH = 51, 
  IPV6_SEC = 50, 
  IPV6_NONEXT = 59, 
  IPV6_DEST = 60, 
  IPV6_MOBILITY = 135
};






struct icmp6_hdr {
  uint8_t type;
  uint8_t code;
  uint16_t cksum;
};

enum __nesc_unnamed4340 {
  ICMP_TYPE_ECHO_DEST_UNREACH = 1, 
  ICMP_TYPE_ECHO_PKT_TOO_BIG = 2, 
  ICMP_TYPE_ECHO_TIME_EXCEEDED = 3, 
  ICMP_TYPE_ECHO_PARAM_PROBLEM = 4, 
  ICMP_TYPE_ECHO_REQUEST = 128, 
  ICMP_TYPE_ECHO_REPLY = 129, 
  ICMP_TYPE_ROUTER_SOL = 133, 
  ICMP_TYPE_ROUTER_ADV = 134, 
  ICMP_TYPE_NEIGHBOR_SOL = 135, 
  ICMP_TYPE_NEIGHBOR_ADV = 136, 
  ICMP_NEIGHBOR_HOPLIMIT = 255, 

  ICMP_CODE_HOPLIMIT_EXCEEDED = 0, 
  ICMP_CODE_ASSEMBLY_EXCEEDED = 1
};




struct udp_hdr {
  uint16_t srcport;
  uint16_t dstport;
  uint16_t len;
  uint16_t chksum;
};




enum __nesc_unnamed4341 {
  TCP_FLAG_FIN = 0x1, 
  TCP_FLAG_SYN = 0x2, 
  TCP_FLAG_RST = 0x4, 
  TCP_FLAG_PSH = 0x8, 
  TCP_FLAG_ACK = 0x10, 
  TCP_FLAG_URG = 0x20, 
  TCP_FLAG_ECE = 0x40, 
  TCP_FLAG_CWR = 0x80
};

struct tcp_hdr {
  uint16_t srcport;
  uint16_t dstport;
  uint32_t seqno;
  uint32_t ackno;
  uint8_t offset;
  uint8_t flags;
  uint16_t window;
  uint16_t chksum;
  uint16_t urgent;
};




struct ip6_metadata {
  ieee154_addr_t sender;
  uint8_t lqi;
};
#line 228
struct ip6_packet {
  struct ip_iovec *ip6_data;
  struct ip6_hdr ip6_hdr;
};

struct ip6_packet_headers {

  struct ip6_hdr *hdr_ip6;
  struct ip6_ext *hdr_hop;
  struct ip6_route *hdr_route;
  struct ip6_ext *hdr_dest;

  uint8_t u_hdr;
  uint8_t *u_data;
};





void inet_pton6(char *addr, struct in6_addr *dest);
int inet_ntop6(struct in6_addr *addr, char *buf, int cnt);
# 45 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan.h"
uint8_t *ip_memcpy(uint8_t *dst0, const uint8_t *src0, uint16_t len);


uint16_t ieee154_hashaddr(ieee154_addr_t *addr);




struct packed_lowmsg {
  uint8_t headers;
  uint8_t len;
  uint8_t *data;
};

struct lowpan_reconstruct {
  uint16_t r_tag;
  uint16_t r_source_key;
  uint16_t r_size;
  uint8_t *r_buf;
  uint16_t r_bytes_rcvd;

  uint8_t r_timeout;
  uint16_t *r_app_len;
  uint8_t *r_transport_header;
  struct ip6_metadata r_meta;
};

struct lowpan_ctx {
  uint16_t tag;
  uint16_t offset;
};


enum __nesc_unnamed4342 {
  LOWMSG_MESH_HDR = 1 << 0, 
  LOWMSG_BCAST_HDR = 1 << 1, 
  LOWMSG_FRAG1_HDR = 1 << 2, 
  LOWMSG_FRAGN_HDR = 1 << 3, 
  LOWMSG_NALP = 1 << 4, 
  LOWMSG_IPNH_HDR = 1 << 5, 
  LOWMSG_IPV6 = 1 << 6
};
#line 190
enum __nesc_unnamed4343 {
  T_FAILED1 = 0, 
  T_FAILED2 = 1, 
  T_UNUSED = 2, 
  T_ACTIVE = 3, 
  T_ZOMBIE = 4
};
# 59 "/home/bo/tinyos-morten/tos/lib/net/blip/BlipStatistics.h"
#line 40
typedef nx_struct __nesc_unnamed4344 {
  nx_uint16_t sent;
  nx_uint16_t forwarded;
  nx_uint8_t rx_drop;
  nx_uint8_t tx_drop;
  nx_uint8_t fw_drop;
  nx_uint8_t rx_total;
  nx_uint8_t encfail;
} __attribute__((packed)) 
#line 59
ip_statistics_t;







#line 62
typedef nx_struct __nesc_unnamed4345 {
  nx_uint8_t hop_limit;
  nx_uint16_t parent;
  nx_uint16_t parent_metric;
  nx_uint16_t parent_etx;
} __attribute__((packed)) route_statistics_t;










#line 69
typedef nx_struct __nesc_unnamed4346 {
  nx_uint8_t sol_rx;
  nx_uint8_t sol_tx;
  nx_uint8_t adv_rx;
  nx_uint8_t adv_tx;
  nx_uint8_t echo_rx;
  nx_uint8_t echo_tx;
  nx_uint8_t unk_rx;
  nx_uint16_t rx;
} __attribute__((packed)) icmp_statistics_t;






#line 81
typedef nx_struct __nesc_unnamed4347 {
  nx_uint16_t sent;
  nx_uint16_t rcvd;
  nx_uint16_t cksum;
} __attribute__((packed)) udp_statistics_t;



#line 87
typedef nx_struct __nesc_unnamed4348 {
  nx_uint16_t lsn;
} __attribute__((packed)) mcast_statistics_t;
# 38 "UDPReport.h"
nx_struct udp_report {
  nx_uint16_t seqno;
  nx_uint16_t sender;
  ip_statistics_t ip;
  udp_statistics_t udp;
  icmp_statistics_t icmp;
  route_statistics_t route;
} __attribute__((packed));
# 118 "/home/bo/tinyos-morten/tos/lib/net/blip/PrintfUART.h"
static inline void printfUART_init();
# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/iprouting.h"
enum __nesc_unnamed4349 {
  ROUTE_INVAL_KEY = -1, 
  ROUTE_TABLE_SZ = 35
};

enum __nesc_unnamed4350 {
  ROUTE_IFACE_ALL = 0, 
  ROUTE_IFACE_154 = 1, 
  ROUTE_IFACE_PPP = 2
};

enum __nesc_unnamed4351 {
  ROUTE_DROP_NOROUTE, 
  ROUTE_DROP_HLIM
};

typedef int route_key_t;

struct route_entry {
  int valid : 1;
  route_key_t key;
  struct in6_addr prefix;
  uint8_t prefixlen;
  struct in6_addr next_hop;
  uint8_t ifindex;
};
# 40 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/in_cksum.h"
uint16_t msg_cksum(const struct ip6_hdr *iph, 
struct ip_iovec *data, 
uint8_t nxt_hdr);
# 40 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/ip_malloc.h"
typedef uint16_t bndrt_t;

void ip_malloc_init();
void *ip_malloc(uint16_t sz);
void ip_free(void *ptr);
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/table.h"
#line 31
typedef struct __nesc_unnamed4352 {
  void *data;
  uint16_t elt_len;
  uint16_t n_elts;
} table_t;

void table_init(table_t *table, void *data, uint16_t elt_len, uint16_t n_elts);

void table_map(table_t *table, void (*fn)(void *arg_0x4107c2a8));
# 25 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/icmp6.h"
enum __nesc_unnamed4353 {
  ICMP_EXT_TYPE_PREFIX = 3, 
  ICMP_EXT_TYPE_BEACON = 17
};


enum __nesc_unnamed4354 {

  TRICKLE_JITTER = 10240, 

  TRICKLE_PERIOD = 4096, 


  TRICKLE_MAX = TRICKLE_PERIOD << 5
};
#line 60
#line 54
typedef nx_struct icmp6_echo_hdr {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint16_t ident;
  nx_uint16_t seqno;
} __attribute__((packed)) icmp_echo_hdr_t;
#line 72
#line 62
typedef nx_struct radv {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint8_t hlim;
  nx_uint8_t flags;
  nx_uint16_t lifetime;
  nx_uint32_t reachable_time;
  nx_uint32_t retrans_time;
  nx_uint8_t options[0];
} __attribute__((packed)) radv_t;






#line 74
typedef nx_struct rsol {
  nx_uint8_t type;
  nx_uint8_t code;
  nx_uint16_t cksum;
  nx_uint32_t reserved;
} __attribute__((packed)) rsol_t;










#line 81
typedef nx_struct rpfx {
  nx_uint8_t type;
  nx_uint8_t length;
  nx_uint8_t pfx_len;
  nx_uint8_t flags;
  nx_uint32_t valid_lifetime;
  nx_uint32_t preferred_lifetime;
  nx_uint32_t reserved;
  nx_uint8_t prefix[16];
} __attribute__((packed)) pfx_t;







#line 92
typedef nx_struct __nesc_unnamed4355 {
  nx_uint8_t type;
  nx_uint8_t length;
  nx_uint16_t metric;
  nx_uint16_t seqno;
  nx_uint8_t pad[2];
} __attribute__((packed)) rqual_t;

struct icmp_stats {
  uint16_t seq;
  uint8_t ttl;
  uint32_t rtt;
};
# 98 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPL.h"
enum __nesc_unnamed4356 {
  RPL_DODAG_METRIC_CONTAINER_TYPE = 2, 
  RPL_DST_PREFIX_TYPE = 3, 
  RPL_DODAG_CONFIG_TYPE = 4, 
  RPL_TARGET_TYPE = 5, 
  RPL_TRANSIT_INFORMATION_TYPE = 6, 
  RPL_MOP_No_Downward = 0, 
  RPL_MOP_No_Storing = 1, 
  RPL_MOP_Storing_No_Multicast = 2, 
  RPL_MOP_Storing_With_Multicast = 3
};

enum __nesc_unnamed4357 {
  RPL_IFACE = ROUTE_IFACE_154, 
  RPL_HBH_RANK_TYPE = 243
};

struct icmpv6_header_t {
  uint8_t type;
  uint8_t code;
  nx_uint16_t checksum;
};

struct dis_base_t {
  struct icmpv6_header_t icmpv6;
  uint16_t reserved;
};

struct rpl_instance_id {




  uint8_t id;
};

struct transit_info_option_t {
  uint8_t type;
  uint8_t option_length;
  uint8_t path_sequence;
  uint8_t path_control;
  uint32_t path_lifetime;
  struct in6_addr parent_address;
};

struct target_option_t {
  uint8_t type;
  uint8_t option_length;
  uint8_t reserved;
  uint8_t prefix_length;
  struct in6_addr target_prefix;
};

struct dao_base_t {
  struct icmpv6_header_t icmpv6;
  struct rpl_instance_id instance_id;
  uint16_t k_bit : 1;
  uint16_t d_bit : 1;
  uint16_t reserved : 14;
  uint8_t DAOsequence;
  struct in6_addr dodagID;
  struct target_option_t target_option;
  struct transit_info_option_t transit_info_option;
};

struct dio_base_t {
  struct icmpv6_header_t icmpv6;
  struct rpl_instance_id instance_id;
  nx_uint8_t version;
  nx_uint16_t dagRank;
  union __nesc_unnamed4358 {








    uint8_t flags_chunk;
  } flags;
  uint8_t dtsn;
  uint16_t reserved2;
  struct in6_addr dodagID;
};

struct dio_body_t {
  uint8_t type;
  uint8_t container_len;
};


struct dio_dodag_config_t {
  nx_uint8_t type;
  nx_uint8_t length;
  uint8_t flags : 4;
  uint8_t A : 1;
  uint8_t PCS : 3;
  nx_uint8_t DIOIntDoubl;
  nx_uint8_t DIOIntMin;
  nx_uint8_t DIORedun;
  nx_uint16_t MaxRankInc;
  nx_uint16_t MinHopRankInc;
  nx_uint16_t ocp;
  nx_uint8_t reserved;
  nx_uint8_t default_lifetime;
  nx_uint16_t lifetime_unit;
};

struct dio_metric_header_t {
  uint8_t routing_obj_type;
  uint8_t reserved : 2;
  uint8_t R_flag : 1;
  uint8_t G_flag : 1;
  uint8_t A_flag : 2;
  uint8_t O_flag : 1;
  uint8_t C_flag : 1;
  nx_uint16_t object_len;
};

struct dio_etx_t {
  nx_uint16_t etx;
};

struct dio_latency_t {
  float latency;
};

struct dio_prefix_t {
  uint8_t type;
  nx_uint16_t suboption_len;
  uint8_t reserved : 3;
  uint8_t preference : 2;
  uint8_t reserved2 : 3;
  nx_uint32_t lifetime;
  uint8_t prefix_len;
  struct in6_addr prefix;
};

struct rpl_route {
  uint8_t next_header;
  uint8_t hdr_ext_len;
  uint8_t routing_type;
  uint8_t segments_left;
  uint8_t compr : 4;
  uint8_t pad : 4;
  uint8_t reserved;
  uint16_t reserved1;
  struct in6_addr addr[10];
};


uint16_t ROOT_RANK = 1;
enum __nesc_unnamed4359 {
  BASE_RANK = 0, 
  INFINITE_RANK = 0xFFFF, 
  RPL_DEFAULT_INSTANCE = 0, 
  NUMBER_OF_PARENTS = 10, 
  DIS_INTERVAL = 3 * 1024U, 
  DEFAULT_LIFETIME = 10000
};


enum __nesc_unnamed4360 {
  ICMPV6_TYPE = 58
};

enum __nesc_unnamed4361 {
  ICMPV6_CODE_DIS = 0x00, 
  ICMPV6_CODE_DIO = 0x01, 
  ICMPV6_CODE_DAO = 0x02
};

enum __nesc_unnamed4362 {
  DIO_BASE_FLAG_GRD = 0, 
  DIO_BASE_FLAG_DA_TRIGGER = 1, 
  DIO_BASE_FLAG_DA_SUPPORT = 2, 
  DIO_BASE_FLAG_PREF_5 = 5, 
  DIO_BASE_FLAG_PREF_6 = 6, 
  DIO_BASE_FLAG_PREF_7 = 7
};

enum __nesc_unnamed4363 {
  DIO_BASE_OPT_PAD1 = 0, 
  DIO_BASE_OPT_PADN = 1, 
  DIO_BASE_OPT_DAG_METRIC = 2, 
  DIO_BASE_OPT_DST_PREFIX = 3, 
  DIO_BASE_OPT_DAG_TIMER_CONFIG = 4
};






#line 290
typedef struct __nesc_unnamed4364 {
  struct in6_addr next_hop;
  uint8_t *data;
} rpl_data_packet_t;





#line 295
typedef struct __nesc_unnamed4365 {
  struct ip6_hdr iphdr;
  uint8_t retries;
  rpl_data_packet_t packet;
} queue_entry_t;





#line 301
typedef struct __nesc_unnamed4366 {
  struct ip6_packet s_pkt;
  struct dao_base_t dao_base;
  struct ip_iovec v[1];
} dao_entry_t;
#line 318
#line 307
typedef struct __nesc_unnamed4367 {
  struct in6_addr nodeID;
  uint8_t interfaceID;
  uint8_t DAOsequence;

  uint32_t DAOlifetime;
  uint8_t routeTag;
  uint8_t RRlength;
  uint8_t prefixLength;
  struct in6_addr prefix;
  uint8_t *RRStack;
} dao_table_entry;






#line 320
typedef struct __nesc_unnamed4368 {
  struct in6_addr nodeID;
  uint16_t successTx;
  uint16_t totalTx;
  uint16_t etx;
} parentTableEntryDAO;




#line 327
typedef struct __nesc_unnamed4369 {
  route_key_t key;
  uint32_t lifetime;
} downwards_table_t;
#line 346
#line 334
typedef struct __nesc_unnamed4370 {
  struct ip6_ext ip6_ext_outer;
  struct ip6_ext ip6_ext_inner;






  uint8_t bitflag;
  struct rpl_instance_id instance_id;
  nx_uint16_t senderRank;
} __attribute((packed))  rpl_data_hdr_t;
#line 368
#line 359
typedef struct __nesc_unnamed4371 {
  struct in6_addr parentIP;
  uint16_t rank;


  uint16_t etx;
  uint16_t etx_hop;

  bool valid;
} parent_t;

struct dio_dest_prefix_t {
  uint8_t type;
  uint16_t length;
  uint8_t *data;
};
# 25 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/Shell.h"
enum __nesc_unnamed4372 {
  MAX_REPLY_LEN = 128
};
typedef TRadio TossimRadioP__PacketTimeStamp__precision_tag;
typedef uint32_t TossimRadioP__PacketTimeStamp__size_type;
typedef TRadio /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__LocalTime__precision_tag;
typedef TMilli /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__precision_tag;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Timer0__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TRadio /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketRSSI__value_type;
typedef TRadio /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeStamp__precision_tag;
typedef uint32_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeStamp__size_type;
typedef TRadio /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__LocalTime__precision_tag;
typedef uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTransmitPower__value_type;
typedef uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__value_type;
typedef uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketLinkQuality__value_type;
typedef TRadio /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__LocalTime__precision_tag;
typedef TMilli UDPEchoP__StatusTimer__precision_tag;
typedef ip_statistics_t UDPEchoP__IPStats__stat_str;
typedef udp_statistics_t UDPEchoP__UDPStats__stat_str;
typedef TMilli IPForwardingEngineP__PrintTimer__precision_tag;
typedef struct send_info IPDispatchP__SendInfoPool__t;
typedef ip_statistics_t IPDispatchP__BlipStatistics__stat_str;
typedef struct send_entry *IPDispatchP__SendQueue__t;
typedef TMilli IPDispatchP__ExpireTimer__precision_tag;
typedef message_t IPDispatchP__FragPool__t;
typedef struct send_entry IPDispatchP__SendEntryPool__t;
typedef message_t /*IPDispatchC.FragPool*/PoolC__0__pool_t;
typedef /*IPDispatchC.FragPool*/PoolC__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t;
typedef /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t;
typedef struct send_entry /*IPDispatchC.SendEntryPool*/PoolC__1__pool_t;
typedef /*IPDispatchC.SendEntryPool*/PoolC__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t;
typedef /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t;
typedef struct send_entry */*IPDispatchC.QueueC*/QueueC__0__queue_t;
typedef /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__t;
typedef struct send_info /*IPDispatchC.SendInfoPool*/PoolC__2__pool_t;
typedef /*IPDispatchC.SendInfoPool*/PoolC__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t;
typedef /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t;
typedef udp_statistics_t UdpP__BlipStatistics__stat_str;
typedef TMilli /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__precision_tag;
typedef TMilli /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__precision_tag;
typedef TMilli /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__precision_tag;
typedef dao_entry_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t;
typedef TMilli /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__precision_tag;
typedef dao_entry_t */*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t;
typedef TMilli /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__precision_tag;
typedef TMilli /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__precision_tag;
typedef dao_entry_t */*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t;
typedef /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__t;
typedef dao_entry_t /*RPLDAORoutingEngineC.SendPoolP*/PoolC__3__pool_t;
typedef /*RPLDAORoutingEngineC.SendPoolP*/PoolC__3__pool_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t;
typedef /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__t;
typedef TMilli ICMPPingP__PingTimer__precision_tag;
typedef TMilli RouteCmdP__Timer__precision_tag;
enum /*RouteCmdC.ShellCommandC*/ShellCommandC__0____nesc_unnamed4373 {
  ShellCommandC__0__CMD_ID = 0U
};
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__SubInit__default__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );

static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );
static bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void );


static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(
# 49 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x40381ce8);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__default__runTask(
# 49 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x40381ce8);
# 57 "/home/bo/tinyos-morten/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP__Scheduler__init(void );







static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
# 44 "/home/bo/tinyos-morten/tos/lib/tossim/SimMote.nc"
static void SimMoteP__SimMote__setEuid(long long int euid);


static int SimMoteP__SimMote__getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP__SimMote__turnOff(void );
#line 48
static void SimMoteP__SimMote__turnOn(void );
#line 43
static long long int SimMoteP__SimMote__getEuid(void );


static bool SimMoteP__SimMote__isOn(void );
#line 45
static long long int SimMoteP__SimMote__getStartTime(void );
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_addr_t TossimRadioP__ActiveMessageConfig__destination(message_t *msg);
# 41 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/CsmaConfig.nc"
static bool TossimRadioP__CsmaConfig__requiresSoftwareCCA(message_t *msg);
# 86 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void TossimRadioP__SoftwareAckConfig__reportChannelError(void );
#line 80
static void TossimRadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool TossimRadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);






static bool TossimRadioP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool TossimRadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t TossimRadioP__SoftwareAckConfig__getAckTimeout(void );





static void TossimRadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);
#line 75
static bool TossimRadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static void TossimRadioP__RadioAlarm__fired(void );
# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void TossimRadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void TossimRadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t TossimRadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t TossimRadioP__UniqueConfig__getSender(message_t *msg);
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t TossimRadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t TossimRadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t TossimRadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t TossimRadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x409088b0);
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x409088b0, 
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);




static void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x409088b0);
# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x409088b0);
# 65 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x409088b0);
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 65 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(
#line 62
message_t * msg);
#line 78
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
#line 94
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 110 "/home/bo/tinyos-morten/tos/interfaces/AMSend.nc"
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(
# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40938700, 
# 103 "/home/bo/tinyos-morten/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x409377a0, 
# 71 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 68 "/home/bo/tinyos-morten/tos/interfaces/AMPacket.nc"
static am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 136
static bool /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(
# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40955c08, 
# 71 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 50 "/home/bo/tinyos-morten/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "/home/bo/tinyos-morten/tos/interfaces/Resource.nc"
static void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 53 "/home/bo/tinyos-morten/tos/interfaces/ResourceQueue.nc"
static bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 65 "/home/bo/tinyos-morten/tos/interfaces/ResourceConfigure.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d39b8);
# 59 "/home/bo/tinyos-morten/tos/interfaces/ResourceConfigure.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d39b8);
# 120 "/home/bo/tinyos-morten/tos/interfaces/Resource.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d4310);
# 102 "/home/bo/tinyos-morten/tos/interfaces/Resource.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d4310);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 59 "/home/bo/tinyos-morten/tos/interfaces/SendNotifier.nc"
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SendNotifier__default__aboutToSend(am_addr_t dest, 
#line 57
message_t * msg);
# 78 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
static uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__maxPayloadLength(void );
#line 94
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/bo/tinyos-morten/tos/interfaces/Ieee154Send.nc"
static error_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__send(ieee154_saddr_t addr, message_t *msg, uint8_t len);
#line 122
static void */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__getPayload(message_t *msg, uint8_t len);
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 46
static error_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);
#line 70
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 120 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 94
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 162
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);










static ieee154_panid_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 146
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 115
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setFramePending(message_t *msg, bool pending);
#line 136
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 184
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 105
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 80 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40ab7948, 
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40ab7948, 
# 51 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void );
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void );
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 65 "/home/bo/tinyos-morten/tos/interfaces/PacketLink.nc"
static uint16_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(
#line 62
message_t * msg);
#line 46
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 109 "/home/bo/tinyos-morten/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 64 "/home/bo/tinyos-morten/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 58 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 70 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
#line 61
static HplAtm128Timer0AsyncP__Timer0__timer_size HplAtm128Timer0AsyncP__Timer0__get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void );
#line 67
static void HplAtm128Timer0AsyncP__Timer0__set(HplAtm128Timer0AsyncP__Timer0__timer_size t);
# 44 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 53 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t control);
# 48 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/bo/tinyos-morten/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c61868);
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c61868);
# 92 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c61868);
# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c61868, 
# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c61868, 
# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c61868);
# 82 "/home/bo/tinyos-morten/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 104 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 130
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioState.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Tasklet.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void TaskletC__tasklet__runTask(void );
# 72 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 52 "/home/bo/tinyos-morten/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
# 59 "/home/bo/tinyos-morten/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubSend__sendDone(error_t error);
# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioCCA.nc"
static void /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubCCA__done(error_t error);
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__RadioSend__send(message_t *msg);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 78 "/home/bo/tinyos-morten/tos/interfaces/PacketTimeStamp.nc"
static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40da54d8, 
# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40da54d8, 
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);




static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40da54d8, 
# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg, bool value);




static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40da54d8, 
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 44 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioCCA.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioCCA__request(void );
# 44 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__turnOff(void );
#line 56
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__turnOn(void );
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask__runTask(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Init__init(void );
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketField.nc"
static /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__value_type /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__isSet(message_t *msg);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask__runTask(void );
# 60 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__receive(message_t *msg);
#line 59
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__acked(message_t *msg);

static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__shouldAck(message_t *msg);
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioSend__send(message_t *msg);
# 61 "/home/bo/tinyos-morten/tos/lib/timer/LocalTime.nc"
static uint32_t /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__LocalTime__get(void );
# 48 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC__Model__clearChannel(void );
static void CpmModelC__Model__setPendingTransmission(void );
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



AMPacketInjectorP__SubReceive__receive(
# 44 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
am_id_t arg_0x40ed68e0, 
# 71 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



AMPacketInjectorP__Receive__default__receive(
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
am_id_t arg_0x40ed61d8, 
# 71 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 83 "/home/bo/tinyos-morten/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1Toggle(void );
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void UDPEchoP__StatusTimer__fired(void );
# 60 "/home/bo/tinyos-morten/tos/interfaces/Boot.nc"
static void UDPEchoP__Boot__booted(void );
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
static void UDPEchoP__UDPSend__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 113 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static void UDPEchoP__RadioControl__startDone(error_t error);
#line 138
static void UDPEchoP__RadioControl__stopDone(error_t error);
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
static void UDPEchoP__UDPReceive__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void IPProtocolsP__SubIP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t IPProtocolsP__IP__send(
# 7 "/home/bo/tinyos-morten/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x40f8e578, 
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void IPProtocolsP__IP__default__recv(
# 7 "/home/bo/tinyos-morten/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x40f8e578, 
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__default__approve(
# 19 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fb0088, 
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_hdr *iph, 
struct ip6_route *rhdr, 
struct in6_addr *next_hop);
#line 12
static bool IPForwardingEngineP__ForwardingEvents__default__initiate(
# 19 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fb0088, 
# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__default__linkResult(
# 19 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fb0088, 
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__default__send(
# 25 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fae138, 
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);







static void IPForwardingEngineP__IPForward__recv(
# 25 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fae138, 
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPForwardingEngineP__IPForward__sendDone(
# 25 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fae138, 
# 22 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
struct send_info *status);
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPForwardingEngineP__IPAddress__changed(bool valid);
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void IPForwardingEngineP__PrintTimer__fired(void );
# 22 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry *IPForwardingEngineP__ForwardingTable__getTable(int *size);
#line 18
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits);
#line 16
static error_t IPForwardingEngineP__ForwardingTable__delRoute(route_key_t key);



static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRouteKey(route_key_t key);
#line 10
static route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t IPForwardingEngineP__IP__send(struct ip6_packet *msg);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static void IPNeighborDiscoveryP__Ieee154Address__changed(void );
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPLower.nc"
static void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status);
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPNeighborDiscoveryP__IPAddress__changed(bool valid);
# 11 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, ieee154_addr_t *link_addr);




static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx);
static int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx);
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static void IPAddressP__Ieee154Address__changed(void );
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr);
#line 44
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 34
static bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr);




static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr);
#line 52
static error_t IPAddressP__IPAddress__setAddress(struct in6_addr *addr);
#line 50
static bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr);
# 5 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void );


static error_t Ieee154AddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr);
#line 7
static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void );
#line 6
static ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t Ieee154AddressP__Init__init(void );
# 48 "/home/bo/tinyos-morten/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 100 "/home/bo/tinyos-morten/tos/interfaces/Leds.nc"
static void NoLedsC__Leds__led2Toggle(void );
# 104 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static error_t IPDispatchP__SplitControl__start(void );
# 60 "/home/bo/tinyos-morten/tos/interfaces/Boot.nc"
static void IPDispatchP__Boot__booted(void );
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void IPDispatchP__BlipStatistics__clear(void );
# 113 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static void IPDispatchP__RadioControl__startDone(error_t error);
#line 138
static void IPDispatchP__RadioControl__stopDone(error_t error);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPLower.nc"
static error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void IPDispatchP__ExpireTimer__fired(void );
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void IPDispatchP__sendTask__runTask(void );
# 97 "/home/bo/tinyos-morten/tos/interfaces/Ieee154Send.nc"
static void IPDispatchP__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



IPDispatchP__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



Ieee154PacketInjectorP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t * 


/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void );
#line 89
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(
#line 85
/*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void );
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t * 


/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void );
#line 89
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(
#line 85
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void );
# 73 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
static 
#line 71
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  

/*IPDispatchC.QueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(
#line 86
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*IPDispatchC.QueueC*/QueueC__0__Queue__t  

/*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void );
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
static 
#line 94
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t * 


/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void );
#line 89
static error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(
#line 85
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__t * newVal);
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void );
# 104 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static error_t IPStackControlP__SplitControl__start(void );








static void IPStackControlP__SubSplitControl__startDone(error_t error);
#line 138
static void IPStackControlP__SubSplitControl__stopDone(error_t error);
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPStackControlP__IPAddress__changed(bool valid);
# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
static error_t IPStackControlP__StdControl__default__start(void );
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPCoreP__ICMP_IP__send(
# 49 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x41281c70, 
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void ICMPCoreP__ICMP_IP__default__recv(
# 49 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x41281c70, 
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void ICMPCoreP__IPAddress__changed(bool valid);
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void ICMPCoreP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 14 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPPacketP__IPPacket__findHeader(void *payload, size_t len, 
uint8_t first_type, uint8_t search_type);
# 60 "/home/bo/tinyos-morten/tos/interfaces/Boot.nc"
static void NoDhcpC__Boot__booted(void );
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void NoDhcpC__IPAddress__changed(bool valid);
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void UdpP__BlipStatistics__clear(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t UdpP__Init__init(void );
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void UdpP__IPAddress__changed(bool valid);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UdpP__UDP__sendto(
# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412940d8, 
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UdpP__UDP__bind(
# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412940d8, 
# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
uint16_t port);








static error_t UdpP__UDP__sendtov(
# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412940d8, 
# 21 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *dest, 
struct ip_iovec *iov);






static void UdpP__UDP__default__recvfrom(
# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412940d8, 
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void UdpP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool RPLRankP__ForwardingEvents__approve(struct ip6_hdr *iph, 
struct ip6_route *rhdr, 
struct in6_addr *next_hop);
#line 12
static bool RPLRankP__ForwardingEvents__initiate(struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void RPLRankP__ForwardingEvents__linkResult(struct in6_addr *dest, struct send_info *info);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void RPLRankP__newParentSearch__runTask(void );
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void RPLRankP__IPAddress__changed(bool valid);
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void RPLRankP__IP_DIO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 95 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRank.nc"
static uint8_t RPLRankP__RPLRankInfo__hasParent(void );
#line 75
static void RPLRankP__RPLRankInfo__declareRoot(void );





static uint16_t RPLRankP__RPLRankInfo__getRank(struct in6_addr *node);
#line 98
static uint16_t RPLRankP__RPLRankInfo__getEtx(void );
#line 96
static bool RPLRankP__RPLRankInfo__isLeaf(void );
#line 91
static void RPLRankP__RPLRankInfo__inconsistencyDetected(void );
#line 110
static error_t RPLRankP__RPLRankInfo__getDefaultRoute(struct in6_addr *next_hop);
# 2 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLParentTable.nc"
static parent_t *RPLRankP__RPLParentTable__get(uint8_t parent_index);
# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
static error_t RPLRankP__StdControl__start(void );
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t RPLRankP__IP_DIO_Filter__send(struct ip6_packet *msg);
# 41 "/home/bo/tinyos-morten/tos/lib/net/RootControl.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RootControl__setRoot(void );
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__runTask(void );
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__fired(void );
#line 83
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__fired(void );
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__runTask(void );
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__changed(bool valid);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__runTask(void );
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__runTask(void );
#line 75
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__runTask(void );
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__fired(void );
# 52 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getMOP(void );
#line 45
static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID(void );







static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn);
#line 42
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__hasDODAG(void );
#line 56
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency(void );
#line 44
static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getRank(void );









static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDTSN(void );
#line 49
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDODAGConfig(uint8_t DIOIntDouble, uint8_t DIOIntMin, 
uint8_t DIORedun, uint8_t MaxRankInc, uint8_t MinHopRankInc);
#line 43
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next_hop);
#line 41
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle(void );
# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__start(void );









static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__stop(void );
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__runTask(void );
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__fired(void );
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__changed(bool valid);
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__runTask(void );
# 42 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__newParent(void );
#line 41
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState(void );
#line 40
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO(void );
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__fired(void );
#line 83
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__fired(void );
# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__start(void );









static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__stop(void );
# 73 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
static 
#line 71
/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__t  

/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__head(void );
#line 90
static error_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__enqueue(
#line 86
/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__t  newVal);
#line 65
static uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__maxSize(void );
#line 81
static 
#line 79
/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__t  

/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__empty(void );







static uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size(void );
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
static 
#line 94
/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__t * 


/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__get(void );
#line 89
static error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__put(
#line 85
/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__t * newVal);
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Init__init(void );
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414cf248, 
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414cf248, 
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 20 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
static bool RPLOF0P__RPLOF__recomputeRoutes(void );
#line 4
static bool RPLOF0P__RPLOF__OCP(uint16_t ocp);


static bool RPLOF0P__RPLOF__objectSupported(uint16_t objectType);






static uint16_t RPLOF0P__RPLOF__getRank(void );
static void RPLOF0P__RPLOF__resetRank(void );

static bool RPLOF0P__RPLOF__recalcualateRank(void );




static void RPLOF0P__RPLOF__setMinHopRankIncrease(uint16_t val);
#line 9
static uint16_t RPLOF0P__RPLOF__getObjectValue(void );

static struct in6_addr *RPLOF0P__RPLOF__getParent(void );
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
#line 17
static error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414cf248, 
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_packet *msg);





static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414cf248, 
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 60 "/home/bo/tinyos-morten/tos/interfaces/Boot.nc"
static void UDPShellP__Boot__booted(void );
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
static void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
static char *UDPShellP__ShellCommand__getBuffer(
# 30 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x414e0e20, 
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
uint16_t len);
#line 11
static char *UDPShellP__ShellCommand__default__eval(
# 30 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x414e0e20, 
# 11 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
int argc, char **argv);
#line 24
static void UDPShellP__ShellCommand__write(
# 30 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x414e0e20, 
# 24 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
char *str, int len);
# 3 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char *UDPShellP__RegisterShellCommand__default__getCommandName(
# 31 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x414de650);
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
static void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats);
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void ICMPPingP__IPAddress__changed(bool valid);
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
static void ICMPPingP__ICMPPing__default__pingDone(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x4153e068, 
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void ICMPPingP__ICMPPing__default__pingReply(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x4153e068, 
# 8 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *source, struct icmp_stats *stats);
#line 6
static error_t ICMPPingP__ICMPPing__ping(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x4153e068, 
# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *target, uint16_t period, uint16_t n);
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void ICMPPingP__PingTimer__fired(void );
# 11 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
static char *RouteCmdP__ShellCommand__eval(int argc, char **argv);
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void RouteCmdP__Timer__fired(void );
# 3 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char */*RouteCmdC.ShellCommandC.ShellCommandP*/ShellCommandP__0__RegisterShellCommand__getCommandName(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/home/bo/tinyos-morten/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 26 "/home/bo/tinyos-morten/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
#line 38
static inline error_t MotePlatformP__SubInit__default__init(void );
# 55 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );







static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
# 21 "/home/bo/tinyos-morten/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t SimMainP__SoftwareInit__init(void );
# 60 "/home/bo/tinyos-morten/tos/interfaces/Boot.nc"
static void SimMainP__Boot__booted(void );
# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
static error_t SimMainP__PlatformInit__init(void );
# 57 "/home/bo/tinyos-morten/tos/interfaces/Scheduler.nc"
static void SimMainP__Scheduler__init(void );







static bool SimMainP__Scheduler__runNextTask(void );
# 51 "/home/bo/tinyos-morten/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__runTask(
# 49 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x40381ce8);



enum SimSchedulerBasicP____nesc_unnamed4374 {

  SimSchedulerBasicP__NUM_TASKS = 20U, 
  SimSchedulerBasicP__NO_TASK = 255
};

uint8_t SimSchedulerBasicP__m_head[1000];
uint8_t SimSchedulerBasicP__m_tail[1000];
uint8_t SimSchedulerBasicP__m_next[1000][SimSchedulerBasicP__NUM_TASKS];




bool SimSchedulerBasicP__sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP__sim_scheduler_event[1000];

static inline int SimSchedulerBasicP__sim_config_task_latency(void );







static void SimSchedulerBasicP__sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP__popTask(void );
#line 139
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP__pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP__Scheduler__init(void );
#line 180
static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
#line 205
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 50 "/home/bo/tinyos-morten/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP__euid[1000];
long long int SimMoteP__startTime[1000];
bool SimMoteP__isOn[1000];
sim_event_t *SimMoteP__bootEvent[1000];

static inline long long int SimMoteP__SimMote__getEuid(void );


static inline void SimMoteP__SimMote__setEuid(long long int e);


static inline long long int SimMoteP__SimMote__getStartTime(void );


static inline bool SimMoteP__SimMote__isOn(void );



static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP__SimMote__turnOn(void );
#line 85
static inline void SimMoteP__SimMote__turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 120 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t TossimRadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool TossimRadioP__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 125
static void TossimRadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void TossimRadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t TossimRadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool TossimRadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 94
static bool TossimRadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool TossimRadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 105
static void TossimRadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool TossimRadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t TossimRadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 65 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size TossimRadioP__RadioAlarm__getNow(void );
# 73 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool TossimRadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool TossimRadioP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool TossimRadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);




static inline void TossimRadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);




static inline bool TossimRadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline void TossimRadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);








static inline uint16_t TossimRadioP__SoftwareAckConfig__getAckTimeout(void );




static inline void TossimRadioP__SoftwareAckConfig__reportChannelError(void );








static inline uint8_t TossimRadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void TossimRadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t TossimRadioP__UniqueConfig__getSender(message_t *msg);




static inline void TossimRadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t TossimRadioP__ActiveMessageConfig__destination(message_t *msg);
#line 185
static inline bool TossimRadioP__CsmaConfig__requiresSoftwareCCA(message_t *msg);






enum TossimRadioP____nesc_unnamed4375 {

  TossimRadioP__TRAFFIC_UPDATE_PERIOD = 100, 
  TossimRadioP__TRAFFIC_MAX_BYTES = (uint16_t )(TossimRadioP__TRAFFIC_UPDATE_PERIOD * 1000UL / 32)
};
#line 238
static inline uint16_t TossimRadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t TossimRadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t TossimRadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t TossimRadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 279
static inline void TossimRadioP__RadioAlarm__fired(void );
# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
uint8_t arg_0x409088b0);









enum /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4376 {
  RadioAlarmP__0__NO_CLIENT = 0xFF, 
  RadioAlarmP__0__TICKS_PER_SECOND = 1048576ULL
};

uint8_t /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[1000];
sim_event_t */*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__currentEvent[1000];

static inline sim_time_t /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__clock_to_sim(sim_time_t t);





static inline sim_time_t /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__sim_to_clock(sim_time_t t);







static inline bool /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);








static inline void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm_fired(sim_event_t *evt);










static void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, uint16_t timeout);
#line 119
static inline void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id);
#line 131
static uint16_t /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);
#line 155
static inline void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);
# 110 "/home/bo/tinyos-morten/tos/interfaces/AMSend.nc"
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40938700, 
# 103 "/home/bo/tinyos-morten/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x409377a0, 
# 71 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);
# 50 "/home/bo/tinyos-morten/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40937108, 
# 71 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(
# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40955c08, 
# 71 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);
#line 99
static __inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 111
static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(am_id_t id, message_t *msg, error_t error);
#line 132
static inline message_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 158
static inline message_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static __inline bool /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);





static __inline am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);
#line 206
static __inline am_id_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);
#line 232
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );









static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg);






static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(message_t *msg);




static inline uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);




static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );




static inline void */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len);
# 65 "/home/bo/tinyos-morten/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC__set[1000];
am_addr_t ActiveMessageAddressC__addr[1000];
am_group_t ActiveMessageAddressC__group[1000];








static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );







static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "/home/bo/tinyos-morten/tos/interfaces/Resource.nc"
static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending[1000];
#line 68
static inline void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );










static inline void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "/home/bo/tinyos-morten/tos/system/FcfsResourceQueueC.nc"
enum /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4377 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1000][1U];
uint8_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[1000];
uint8_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail[1000];

static inline error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 65 "/home/bo/tinyos-morten/tos/interfaces/ResourceConfigure.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d39b8);
# 59 "/home/bo/tinyos-morten/tos/interfaces/ResourceConfigure.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d39b8);
# 53 "/home/bo/tinyos-morten/tos/interfaces/ResourceQueue.nc"
static bool /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/home/bo/tinyos-morten/tos/interfaces/Resource.nc"
static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x409d4310);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
enum /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4378 {
#line 69
  SimpleArbiterP__0__grantedTask = 0U
};
#line 69
typedef int /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4379 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4380 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state[1000];
uint8_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[1000];
uint8_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId[1000];
#line 97
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 155
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );









static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);





static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__send(message_t *msg);
# 59 "/home/bo/tinyos-morten/tos/interfaces/SendNotifier.nc"
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SendNotifier__aboutToSend(am_addr_t dest, 
#line 57
message_t * msg);
# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 156 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 63
static bool /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 178
static ieee154_saddr_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__localAddr(void );
#line 173
static ieee154_panid_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__localPan(void );
#line 146
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 184
static bool /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "/home/bo/tinyos-morten/tos/interfaces/Ieee154Send.nc"
static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);




static inline void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static inline uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__maxPayloadLength(void );




static inline void */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__getPayload(message_t *msg, uint8_t len);









static inline void */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__getPayload(message_t *msg, uint8_t len);
#line 108
static inline error_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__send(ieee154_saddr_t addr, message_t *msg, uint8_t len);
#line 127
static inline void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);










static inline void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SendNotifier__default__aboutToSend(am_addr_t addr, message_t *msg);





static inline message_t */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 81 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg);










static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);




static inline void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__setPayloadLength(message_t *msg, uint8_t length);




static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__maxPayloadLength(void );
#line 128
static network_header_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static inline error_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 147
enum /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4381 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);




static inline void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );









static inline void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg);
#line 217
static inline void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);








static inline message_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "/home/bo/tinyos-morten/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 57 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4382 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static ieee154_header_t */*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 97
static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);




static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 116
static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);










static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);








static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);







static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);




static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 162
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setFramePending(message_t *msg, bool pending);







static inline uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);









static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static inline uint16_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);




static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);




static inline uint16_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);




static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);




static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);






static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 293
static inline uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );









static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg);
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber[1000];

static inline error_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static error_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
#line 81
static inline void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);





static inline bool /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[1000][5];

static inline message_t */*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 118
static inline void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 80 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t idx);
# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[1000][5];
uint8_t NeighborhoodP__ages[1000][5];
uint8_t NeighborhoodP__flags[1000][5];
uint8_t NeighborhoodP__time[1000];
uint8_t NeighborhoodP__last[1000];

static inline error_t NeighborhoodP__Init__init(void );
#line 94
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(message_t *msg);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask(void );
# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(uint32_t dt);
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(message_t *msg);
# 59 "/home/bo/tinyos-morten/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 77 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
enum /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_unnamed4383 {
#line 77
  PacketLinkLayerP__0__send = 1U
};
#line 77
typedef int /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_sillytask_send[/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send];
#line 60
enum /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0____nesc_unnamed4384 {

  PacketLinkLayerP__0__STATE_READY = 0, 
  PacketLinkLayerP__0__STATE_SENDING = 1, 
  PacketLinkLayerP__0__STATE_SENDDONE = 2, 
  PacketLinkLayerP__0__STATE_SIGNAL = 4
};

uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[1000];
message_t */*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[1000];
uint16_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries[1000];






static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void );
#line 129
static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error);








static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void );






static inline error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg);
#line 181
static inline link_metadata_t */*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(message_t *msg);




static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(message_t *msg, uint16_t maxRetries);




static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);




static uint16_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(message_t *msg);




static inline uint16_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(message_t *msg);




static inline bool /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(message_t *msg);






static inline uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg);




static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__clear(message_t *msg);
# 53 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/home/bo/tinyos-morten/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 82 "/home/bo/tinyos-morten/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 48 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 61 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4385 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 70 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer0__overflow(void );
# 58 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 57 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP__inOverflow[1000];




static inline void HplAtm128Timer0AsyncP__cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void );
static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP__lastZero[1000];





uint8_t HplAtm128Timer0AsyncP__oldScale[1000];



static inline void HplAtm128Timer0AsyncP__cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void );
static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP__schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP__last_zero(void );







static inline void HplAtm128Timer0AsyncP__notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP__notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP__compare[1000];

static inline void HplAtm128Timer0AsyncP__timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void );







static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP__schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP__Timer0__get(void );
#line 297
static inline void HplAtm128Timer0AsyncP__Timer0__set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static uint8_t HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP__overflow[1000];
static inline void HplAtm128Timer0AsyncP__timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void );







static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP__cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );







static inline void HplAtm128Timer0AsyncP__cancel_compare(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/bo/tinyos-morten/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/bo/tinyos-morten/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4386 {
#line 74
  AlarmToTimerC__0__fired = 2U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40c61868);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4387 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 3U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4388 {

  VirtualizeTimerC__0__NUM_TIMERS = 12U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4389 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/home/bo/tinyos-morten/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 113 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 44 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff(void );
#line 56
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Tasklet.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4390 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 4U
};
#line 144
typedef int /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4391 {
#line 189
  MessageBufferLayerP__0__sendTask = 5U
};
#line 189
typedef int /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 326
enum /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4392 {
#line 326
  MessageBufferLayerP__0__deliverTask = 6U
};
#line 326
typedef int /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[1000];
enum /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4393 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 97
static inline error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void );
#line 144
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg[1000];
error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[1000];
uint8_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries[1000];


enum /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4394 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 219
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 232
static inline error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 256
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 295
enum /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4395 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[1000][/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[1000][/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[1000];
uint8_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[1000];

static inline error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 356
static inline message_t */*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__run(void );
# 47 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/TaskletC.nc"
enum TaskletC____nesc_unnamed4396 {
#line 47
  TaskletC__tasklet = 7U
};
#line 47
typedef int TaskletC____nesc_sillytask_tasklet[TaskletC__tasklet];
#line 47
static inline void TaskletC__tasklet__runTask(void );









static __inline void TaskletC__Tasklet__suspend(void );



static __inline void TaskletC__Tasklet__resume(void );
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "/home/bo/tinyos-morten/tos/interfaces/Random.nc"
static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 63 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 56
static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4397 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 8U
};
#line 78
typedef int /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[1000];
enum /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4398 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg[1000];
uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier[1000];







uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom[1000];
static inline void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 111
static inline void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 156
static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);








static inline bool /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 52 "/home/bo/tinyos-morten/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed[1000];


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg);
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout);




static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void );
#line 45
static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void );
# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg);
#line 40
static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg);




static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__setValue(message_t *msg, bool value);
# 86 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void );
#line 80
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg);






static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg);






static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void );





static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack);
#line 75
static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg);
# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg);
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error);
# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
uint8_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[1000];
enum /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0____nesc_unnamed4399 {

  SoftwareAckLayerC__0__STATE_READY = 0, 
  SoftwareAckLayerC__0__STATE_DATA_SEND = 1, 
  SoftwareAckLayerC__0__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerC__0__STATE_ACK_SEND = 3
};

message_t */*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[1000];
message_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg[1000];







static inline error_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
#line 97
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
#line 128
static inline void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );









static inline bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);







static inline message_t */*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 182
static inline error_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg);
#line 196
static inline bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg);
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubSend__send(message_t *msg);
# 41 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/CsmaConfig.nc"
static bool /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__Config__requiresSoftwareCCA(message_t *msg);
# 44 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioCCA.nc"
static error_t /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubCCA__request(void );
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__RadioSend__sendDone(error_t error);
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/CsmaLayerP.nc"
message_t */*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__txMsg[1000];

uint8_t /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[1000];
enum /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0____nesc_unnamed4400 {

  CsmaLayerP__0__STATE_READY = 0, 
  CsmaLayerP__0__STATE_CCA_WAIT = 1, 
  CsmaLayerP__0__STATE_SEND = 2
};







static error_t /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__RadioSend__send(message_t *msg);
#line 95
static inline void /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubCCA__done(error_t error);
#line 108
static inline void /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubSend__sendDone(error_t error);
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static timestamp_metadata_t */*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);
#line 82
static inline void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);




static inline void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg);
# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(message_t *msg);
#line 49
static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static flags_metadata_t */*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static bool /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);






static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(uint8_t bit, message_t *msg, bool value);









static inline uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);




static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg);
# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioCCA.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioCCA__done(error_t error);
# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__clear(message_t *msg);
#line 40
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__get(message_t *msg);









static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__set(message_t *msg);
# 78 "/home/bo/tinyos-morten/tos/interfaces/PacketTimeStamp.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeStamp__set(
#line 73
message_t * msg, 




/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeStamp__size_type value);
# 69 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioState.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__done(void );
# 61 "/home/bo/tinyos-morten/tos/lib/timer/LocalTime.nc"
static uint32_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__LocalTime__get(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask__postTask(void );
# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioReceive__header(message_t *msg);
# 151 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 141
static uint16_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask__postTask(void );
# 48 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__clearChannel(void );
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__setPendingTransmission(void );
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioSend__sendDone(error_t error);
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__TimeSyncFlag__get(message_t *msg);
# 122 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
enum /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0____nesc_unnamed4401 {
#line 122
  TossimDriverLayerP__0__stateDoneTask = 9U
};
#line 122
typedef int /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0____nesc_sillytask_stateDoneTask[/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask];
#line 327
enum /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0____nesc_unnamed4402 {
#line 327
  TossimDriverLayerP__0__ccaDoneTask = 10U
};
#line 327
typedef int /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0____nesc_sillytask_ccaDoneTask[/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask];
#line 78
bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[1000];

bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting[1000];
message_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[1000];
sim_event_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[1000];

message_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__buffer[1000];
message_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[1000];

static inline tossim_header_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__getHeader(message_t *amsg);







static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__dbg_message(message_t *msg);
#line 114
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Init__init(void );







static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask__runTask(void );



static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__turnOff(void );
#line 144
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__turnOn(void );
#line 169
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmit_done(sim_event_t *evt);






static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmit_start(sim_event_t *evt);
#line 213
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioSend__send(message_t *msg);
#line 258
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__receive(message_t *msg);
#line 297
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__acked(message_t *msg);
#line 312
static inline bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__shouldAck(message_t *msg);
#line 327
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask__runTask(void );





static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioCCA__request(void );







static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__headerLength(message_t *msg);



static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__payloadLength(message_t *msg);



static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);



static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__maxPayloadLength(void );



static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__metadataLength(message_t *msg);



static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__clear(message_t *msg);
#line 407
static inline bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__isSet(message_t *msg);



static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__get(message_t *msg);
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
enum /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1____nesc_unnamed4403 {
  RadioAlarmP__1__NO_CLIENT = 0xFF, 
  RadioAlarmP__1__TICKS_PER_SECOND = 1048576ULL
};










static inline sim_time_t /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__sim_to_clock(sim_time_t t);
#line 143
static uint32_t /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__LocalTime__get(void );
# 60 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__receive(message_t *msg);
#line 59
static void CpmModelC__Model__acked(message_t *msg);

static bool CpmModelC__Model__shouldAck(message_t *msg);
# 58 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC__outgoing[1000];
bool CpmModelC__requestAck[1000];
bool CpmModelC__receiving[1000];
bool CpmModelC__transmitting[1000];
sim_time_t CpmModelC__transmissionEndTime[1000];
struct CpmModelC__receive_message;
typedef struct CpmModelC__receive_message CpmModelC__receive_message_t;

struct CpmModelC__receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC__receive_message_t *next;
};

CpmModelC__receive_message_t *CpmModelC__outstandingReceptionHead[1000];

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t t, CpmModelC__receive_message_t *m);

static bool CpmModelC__shouldReceive(double SNR);
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg);
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);


static inline double CpmModelC__timeInMs(void );
#line 126
static double CpmModelC__noise_hash_generation(void );
#line 151
static inline double CpmModelC__arr_estimate_from_snr(double SNR);
#line 166
static inline int CpmModelC__shouldAckReceive(double snr);
#line 178
static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt);
#line 200
double CpmModelC__clearThreshold[1000];










static inline bool CpmModelC__Model__clearChannel(void );




static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r);
#line 230
static inline double CpmModelC__prr_estimate_from_snr(double SNR);
#line 248
static bool CpmModelC__shouldReceive(double SNR);
#line 260
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg);
#line 274
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);
#line 296
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt);
#line 369
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 428
static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 459
static inline void CpmModelC__Model__setPendingTransmission(void );







static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg);
#line 479
static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );



static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);
# 78 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
static uint8_t AMPacketInjectorP__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


AMPacketInjectorP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t AMPacketInjectorP__Packet__maxPayloadLength(void );
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



AMPacketInjectorP__Receive__receive(
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
am_id_t arg_0x40ed61d8, 
# 71 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "/home/bo/tinyos-morten/tos/interfaces/AMPacket.nc"
static am_id_t AMPacketInjectorP__AMPacket__type(
#line 143
message_t * amsg);
# 51 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
message_t AMPacketInjectorP__injectionBuffer[1000];
message_t *AMPacketInjectorP__injectionMsg[1000];



static inline message_t *AMPacketInjectorP__SubReceive__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);





static inline void AMPacketInjectorP__active_message_deliver_handle(sim_event_t *evt);







static inline sim_event_t *AMPacketInjectorP__allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 82
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;






static inline message_t *AMPacketInjectorP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 46 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );
static bool LedsP__Led1__get(void );


static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/home/bo/tinyos-morten/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 99
static inline void LedsP__Leds__led1Toggle(void );
# 41 "/home/bo/tinyos-morten/tos/lib/net/RootControl.nc"
static error_t UDPEchoP__RootControl__setRoot(void );
# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void UDPEchoP__StatusTimer__startPeriodic(uint32_t dt);








static void UDPEchoP__StatusTimer__startOneShot(uint32_t dt);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UDPEchoP__UDPSend__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
# 104 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static error_t UDPEchoP__RadioControl__start(void );
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UDPEchoP__UDPReceive__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UDPEchoP__UDPReceive__bind(uint16_t port);
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/BlipStatistics.nc"
static void UDPEchoP__IPStats__clear(void );
# 83 "/home/bo/tinyos-morten/tos/interfaces/Leds.nc"
static void UDPEchoP__Leds__led1Toggle(void );
# 71 "UDPEchoP.nc"
bool UDPEchoP__timerStarted[1000];
nx_struct udp_report UDPEchoP__stats[1000];
struct sockaddr_in6 UDPEchoP__route_dest[1000];
radio_count_msg_t UDPEchoP__payload[1000];
uint16_t UDPEchoP__sequence_nr[1000];

static inline void UDPEchoP__Boot__booted(void );
#line 118
static inline void UDPEchoP__RadioControl__startDone(error_t e);


static inline void UDPEchoP__RadioControl__stopDone(error_t e);


static inline void UDPEchoP__StatusTimer__fired(void );
#line 147
static inline void UDPEchoP__UDPReceive__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);
#line 164
static inline void UDPEchoP__UDPSend__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);
#line 150
static char UDPEchoP__UDPReceive__recvfrom__print_buf3[1000][128];
#line 167
static char UDPEchoP__UDPSend__recvfrom__print_buf3[1000][128];
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg);





static void IPProtocolsP__IP__recv(
# 7 "/home/bo/tinyos-morten/tos/lib/net/blip/IPProtocolsP.nc"
uint8_t arg_0x40f8e578, 
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 15 "/home/bo/tinyos-morten/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__SubIP__recv(struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta);
#line 33
static error_t IPProtocolsP__IP__send(uint8_t nxt_hdr, struct ip6_packet *msg);







static inline void IPProtocolsP__IP__default__recv(uint8_t nxt_hdr, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
static bool IPForwardingEngineP__ForwardingEvents__approve(
# 19 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fb0088, 
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_hdr *iph, 
struct ip6_route *rhdr, 
struct in6_addr *next_hop);
#line 12
static bool IPForwardingEngineP__ForwardingEvents__initiate(
# 19 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fb0088, 
# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 39
static void IPForwardingEngineP__ForwardingEvents__linkResult(
# 19 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fb0088, 
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
struct in6_addr *dest, struct send_info *info);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
static error_t IPForwardingEngineP__IPForward__send(
# 25 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
uint8_t arg_0x40fae138, 
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
struct in6_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IPRaw__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 44 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPForwardingEngineP__IPAddress__isLocalAddress(struct in6_addr *addr);





static bool IPForwardingEngineP__IPAddress__isLLAddress(struct in6_addr *addr);
# 92 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static bool IPForwardingEngineP__PrintTimer__isRunning(void );
#line 64
static void IPForwardingEngineP__PrintTimer__startPeriodic(uint32_t dt);
# 14 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPPacket.nc"
static int IPForwardingEngineP__IPPacket__findHeader(void *payload, size_t len, 
uint8_t first_type, uint8_t search_type);
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void IPForwardingEngineP__IP__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 54 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
struct route_entry IPForwardingEngineP__routing_table[1000][ROUTE_TABLE_SZ];

route_key_t IPForwardingEngineP__last_key[1000];





static inline struct route_entry *IPForwardingEngineP__alloc_entry(int pfxlen);
#line 89
static route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, 
int prefix_len_bits, 
struct in6_addr *next_hop, 
uint8_t ifindex);
#line 114
static inline error_t IPForwardingEngineP__ForwardingTable__delRoute(route_key_t key);
#line 132
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, 
int prefix_len_bits);
#line 147
static inline struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRouteKey(route_key_t key);









static inline struct route_entry *IPForwardingEngineP__ForwardingTable__getTable(int *n);




static inline error_t IPForwardingEngineP__IP__send(struct ip6_packet *pkt);
#line 209
static inline void IPForwardingEngineP__IPForward__recv(uint8_t ifindex, struct ip6_hdr *iph, void *payload, 
struct ip6_metadata *meta);
#line 274
static inline void IPForwardingEngineP__IPForward__sendDone(uint8_t ifindex, struct send_info *status);
#line 287
static inline void IPForwardingEngineP__PrintTimer__fired(void );
#line 307
static inline bool IPForwardingEngineP__ForwardingEvents__default__approve(uint8_t idx, struct ip6_hdr *iph, 
struct ip6_route *rhdr, 
struct in6_addr *next_hop);


static inline bool IPForwardingEngineP__ForwardingEvents__default__initiate(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop);


static inline void IPForwardingEngineP__ForwardingEvents__default__linkResult(uint8_t idx, struct in6_addr *host, 
struct send_info *info);






static inline error_t IPForwardingEngineP__IPForward__default__send(uint8_t ifindex, struct in6_addr *next_hop, 
struct ip6_packet *pkt, 
void *data);







static inline void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);

static inline void IPForwardingEngineP__IPAddress__changed(bool global_valid);
#line 289
static char IPForwardingEngineP__PrintTimer__fired__print_buff[1000][64];




static char IPForwardingEngineP__PrintTimer__fired__print_buf[1000][64];
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
static void IPNeighborDiscoveryP__IPForward__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPNeighborDiscoveryP__IPForward__sendDone(struct send_info *status);
# 5 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t IPNeighborDiscoveryP__Ieee154Address__getPanId(void );
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPLower.nc"
static error_t IPNeighborDiscoveryP__IPLower__send(struct ieee154_frame_addr *next_hop, 
struct ip6_packet *msg, 
void *data);
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPNeighborDiscoveryP__IPAddress__getLLAddr(struct in6_addr *addr);




static bool IPNeighborDiscoveryP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, 
uint8_t *ctx);










static inline int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, 
struct in6_addr *ctx);
#line 65
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr);
#line 102
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next, struct ip6_packet *msg, void *ptr);
#line 131
static inline void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);




static inline void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status);




static inline void IPNeighborDiscoveryP__Ieee154Address__changed(void );
static inline void IPNeighborDiscoveryP__IPAddress__changed(bool global_valid);
# 5 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static ieee154_panid_t IPAddressP__Ieee154Address__getPanId(void );


static error_t IPAddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr);
#line 7
static ieee154_laddr_t IPAddressP__Ieee154Address__getExtAddr(void );
#line 6
static ieee154_saddr_t IPAddressP__Ieee154Address__getShortAddr(void );
# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static void IPAddressP__IPAddress__changed(bool valid);
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/IPAddressP.nc"
bool IPAddressP__m_valid_addr[1000];
#line 34
bool IPAddressP__m_short_addr[1000];
struct in6_addr IPAddressP__m_addr[1000];

static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr);
#line 60
static inline bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr);




static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr);
#line 87
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 128
static inline bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr);







static inline error_t IPAddressP__IPAddress__setAddress(struct in6_addr *addr);
#line 166
static inline void IPAddressP__Ieee154Address__changed(void );
# 48 "/home/bo/tinyos-morten/tos/interfaces/LocalIeeeEui64.nc"
static ieee_eui64_t Ieee154AddressP__LocalIeeeEui64__getId(void );
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
static void Ieee154AddressP__Ieee154Address__changed(void );
# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/Ieee154AddressP.nc"
ieee154_saddr_t Ieee154AddressP__m_saddr[1000];
ieee154_panid_t Ieee154AddressP__m_panid[1000];

static inline error_t Ieee154AddressP__Init__init(void );





static inline ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void );


static inline ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void );


static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void );
#line 41
static inline error_t Ieee154AddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr);
# 31 "/home/bo/tinyos-morten/tos/platforms/micaz/LocalIeeeEui64C.nc"
static inline ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void );
# 63 "/home/bo/tinyos-morten/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led2Toggle(void );
# 113 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static void IPDispatchP__SplitControl__startDone(error_t error);
#line 138
static void IPDispatchP__SplitControl__stopDone(error_t error);
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__SendInfoPool__t * 


IPDispatchP__SendInfoPool__get(void );
#line 89
static error_t IPDispatchP__SendInfoPool__put(
#line 85
IPDispatchP__SendInfoPool__t * newVal);
# 104 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static error_t IPDispatchP__RadioControl__start(void );
#line 130
static error_t IPDispatchP__RadioControl__stop(void );
# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPLower.nc"
static void IPDispatchP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta);
#line 22
static void IPDispatchP__IPLower__sendDone(struct send_info *status);
# 73 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
static 
#line 71
IPDispatchP__SendQueue__t  

IPDispatchP__SendQueue__head(void );
#line 90
static error_t IPDispatchP__SendQueue__enqueue(
#line 86
IPDispatchP__SendQueue__t  newVal);
#line 81
static 
#line 79
IPDispatchP__SendQueue__t  

IPDispatchP__SendQueue__dequeue(void );
#line 50
static bool IPDispatchP__SendQueue__empty(void );
# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void IPDispatchP__ExpireTimer__startPeriodic(uint32_t dt);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t IPDispatchP__sendTask__postTask(void );
# 16 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
static int IPDispatchP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx);
static int IPDispatchP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx);
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__FragPool__t * 


IPDispatchP__FragPool__get(void );
#line 89
static error_t IPDispatchP__FragPool__put(
#line 85
IPDispatchP__FragPool__t * newVal);
# 100 "/home/bo/tinyos-morten/tos/interfaces/Leds.nc"
static void IPDispatchP__Leds__led2Toggle(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/Ieee154Send.nc"
static error_t IPDispatchP__Ieee154Send__send(ieee154_saddr_t addr, message_t *msg, uint8_t len);
#line 122
static void *IPDispatchP__Ieee154Send__getPayload(message_t *msg, uint8_t len);
# 65 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
static void IPDispatchP__BarePacket__clear(
#line 62
message_t * msg);
#line 78
static uint8_t IPDispatchP__BarePacket__payloadLength(
#line 74
message_t * msg);
#line 106
static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void );
#line 94
static void IPDispatchP__BarePacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 46 "/home/bo/tinyos-morten/tos/interfaces/PacketLink.nc"
static void IPDispatchP__PacketLink__setRetries(
#line 42
message_t * msg, 



uint16_t maxRetries);
#line 59
static uint16_t IPDispatchP__PacketLink__getRetries(
#line 56
message_t * msg);
#line 53
static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay);
#line 71
static bool IPDispatchP__PacketLink__wasDelivered(
#line 68
message_t * msg);
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
static 
#line 94
IPDispatchP__SendEntryPool__t * 


IPDispatchP__SendEntryPool__get(void );
#line 89
static error_t IPDispatchP__SendEntryPool__put(
#line 85
IPDispatchP__SendEntryPool__t * newVal);
# 423 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4404 {
#line 423
  IPDispatchP__sendTask = 11U
};
#line 423
typedef int IPDispatchP____nesc_sillytask_sendTask[IPDispatchP__sendTask];
#line 97
static inline int IPDispatchP__lowpan_extern_read_context(struct in6_addr *addr, int context);



static inline int IPDispatchP__lowpan_extern_match_context(struct in6_addr *addr, uint8_t *ctx_id);
# 15 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/internal.h"
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end);
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags);
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags);
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset);
static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset);
static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet);
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);


static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan);
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf);
static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf);
# 16 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame);
#line 43
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
# 4 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/ieee154_header.h"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, struct ieee154_frame_addr *frame);
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame);
# 65 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__iid_eui_cmp(uint8_t *iid, uint8_t *eui);
#line 78
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end);
#line 107
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 138
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 150
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch);
#line 171
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags);
#line 237
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags);
#line 263
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset);
#line 281
static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset);
#line 330
static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet);
#line 363
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);
#line 415
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
#line 449
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);








static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf);
#line 476
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan);
#line 542
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf);
#line 574
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf);
#line 631
static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf);
#line 679
static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf);
#line 713
static inline uint8_t *IPDispatchP__lowpan_unpack_headers(struct lowpan_reconstruct *recon, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt);
# 48 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t *IPDispatchP__getLowpanPayload(struct packed_lowmsg *lowmsg);
#line 68
static __inline uint16_t IPDispatchP__getHeaderBitmap(struct packed_lowmsg *lowmsg);
#line 114
static __inline uint8_t IPDispatchP__setupHeaders(struct packed_lowmsg *packed, uint16_t headers);
#line 163
static __inline uint8_t IPDispatchP__hasFrag1Header(struct packed_lowmsg *msg);


static __inline uint8_t IPDispatchP__hasFragNHeader(struct packed_lowmsg *msg);
#line 255
static __inline uint8_t IPDispatchP__getFragDgramSize(struct packed_lowmsg *msg, uint16_t *size);
#line 272
static __inline uint8_t IPDispatchP__getFragDgramTag(struct packed_lowmsg *msg, uint16_t *tag);
#line 301
static __inline uint8_t IPDispatchP__setFragDgramSize(struct packed_lowmsg *msg, uint16_t size);
#line 321
static __inline uint8_t IPDispatchP__setFragDgramTag(struct packed_lowmsg *msg, uint16_t tag);
#line 337
static __inline uint8_t IPDispatchP__setFragDgramOffset(struct packed_lowmsg *msg, uint8_t size);
# 18 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static int IPDispatchP__lowpan_recon_start(struct ieee154_frame_addr *frame_addr, 
struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len);
#line 79
static inline int IPDispatchP__lowpan_recon_add(struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len);
#line 105
static inline int IPDispatchP__lowpan_frag_get(uint8_t *frag, size_t len, 
struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
struct lowpan_ctx *ctx);
# 111 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
enum IPDispatchP____nesc_unnamed4405 {
  IPDispatchP__S_RUNNING, 
  IPDispatchP__S_STOPPED, 
  IPDispatchP__S_STOPPING
};
uint8_t IPDispatchP__state[1000];
bool IPDispatchP__radioBusy[1000];
uint8_t IPDispatchP__current_local_label[1000];
ip_statistics_t IPDispatchP__stats[1000];
#line 132
table_t IPDispatchP__recon_cache[1000];



struct lowpan_reconstruct IPDispatchP__recon_data[1000][N_RECONSTRUCTIONS];







static inline void IPDispatchP__reconstruct_clear(void *ent);






static inline struct send_info *IPDispatchP__getSendInfo(void );










static void IPDispatchP__SENDINFO_DECR(struct send_info *si);





static inline error_t IPDispatchP__SplitControl__start(void );
#line 184
static inline void IPDispatchP__RadioControl__startDone(error_t error);
#line 199
static inline void IPDispatchP__RadioControl__stopDone(error_t error);



static inline void IPDispatchP__Boot__booted(void );
#line 218
static void IPDispatchP__deliver(struct lowpan_reconstruct *recon);
#line 256
static inline void IPDispatchP__reconstruct_age(void *elt);
#line 281
static inline void IPDispatchP__ip_print_heap(void );










static inline void IPDispatchP__ExpireTimer__fired(void );
#line 308
static inline struct lowpan_reconstruct *IPDispatchP__get_reconstruct(uint16_t key, uint16_t tag);
#line 340
static inline message_t *IPDispatchP__Ieee154Receive__receive(message_t *msg, void *msg_payload, uint8_t len);
#line 423
static inline void IPDispatchP__sendTask__runTask(void );
#line 480
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data);
#line 577
static inline void IPDispatchP__Ieee154Send__sendDone(message_t *msg, error_t error);
#line 648
static inline void IPDispatchP__BlipStatistics__clear(void );
# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



Ieee154PacketInjectorP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/Ieee154PacketInjectorP.nc"
message_t Ieee154PacketInjectorP__injectionBuffer[1000];




static inline message_t *Ieee154PacketInjectorP__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
# 60 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
uint8_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__free[1000];
uint8_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__index[1000];
/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t * /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[1000][12];
/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[1000][12];

static inline error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void );
#line 88
static inline /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t */*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[1000];
uint8_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[1000];
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t * /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[1000][12];
/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[1000][12];

static inline error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void );
#line 88
static inline /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t */*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
/*IPDispatchC.QueueC*/QueueC__0__queue_t  /*IPDispatchC.QueueC*/QueueC__0__queue[1000][12];
uint8_t /*IPDispatchC.QueueC*/QueueC__0__head[1000];
uint8_t /*IPDispatchC.QueueC*/QueueC__0__tail[1000];
uint8_t /*IPDispatchC.QueueC*/QueueC__0__size[1000];

static inline bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void );



static inline /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__head(void );



static void /*IPDispatchC.QueueC*/QueueC__0__printQueue(void );
#line 85
static /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(/*IPDispatchC.QueueC*/QueueC__0__queue_t newVal);
# 60 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
uint8_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[1000];
uint8_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[1000];
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t * /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[1000][3];
/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[1000][3];

static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void );
#line 88
static inline /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t */*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void );
#line 103
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *newVal);
# 113 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
static void IPStackControlP__SplitControl__startDone(error_t error);
#line 138
static void IPStackControlP__SplitControl__stopDone(error_t error);
#line 104
static error_t IPStackControlP__SubSplitControl__start(void );
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool IPStackControlP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
static error_t IPStackControlP__RoutingControl__start(void );









static error_t IPStackControlP__RoutingControl__stop(void );
#line 95
static error_t IPStackControlP__StdControl__start(void );
# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__SplitControl__start(void );



static inline void IPStackControlP__SubSplitControl__startDone(error_t error);
#line 37
static inline void IPStackControlP__SubSplitControl__stopDone(error_t error);



static inline void IPStackControlP__IPAddress__changed(bool valid);






static inline error_t IPStackControlP__StdControl__default__start(void );
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void ICMPCoreP__ICMP_IP__recv(
# 49 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCoreP.nc"
uint8_t arg_0x41281c70, 
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool ICMPCoreP__IPAddress__setSource(struct ip6_hdr *hdr);
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPCoreP__IP__send(struct ip6_packet *msg);
# 58 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 98
static error_t ICMPCoreP__ICMP_IP__send(uint8_t type, struct ip6_packet *pkt);










static inline void ICMPCoreP__IPAddress__changed(bool valid);

static inline void ICMPCoreP__ICMP_IP__default__recv(uint8_t type, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
# 21 "/home/bo/tinyos-morten/tos/lib/net/blip/IPPacketP.nc"
static inline int IPPacketP__IPPacket__findHeader(void *payload, size_t len, 
uint8_t first_type, uint8_t search_type);
# 52 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static error_t NoDhcpC__IPAddress__setAddress(struct in6_addr *addr);
# 49 "/home/bo/tinyos-morten/tos/lib/net/blip/dhcp/NoDhcpC.nc"
static inline void NoDhcpC__Boot__booted(void );







static inline void NoDhcpC__IPAddress__changed(bool valid);
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool UdpP__IPAddress__setSource(struct ip6_hdr *hdr);
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
static void UdpP__UDP__recvfrom(
# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
uint8_t arg_0x412940d8, 
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
struct sockaddr_in6 *src, void *payload, 
uint16_t len, struct ip6_metadata *meta);
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t UdpP__IP__send(struct ip6_packet *msg);
# 22 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
enum UdpP____nesc_unnamed4406 {
  UdpP__N_CLIENTS = 3U
};


uint16_t UdpP__local_ports[1000][UdpP__N_CLIENTS];

enum UdpP____nesc_unnamed4407 {
  UdpP__LOCAL_PORT_START = 51024U, 
  UdpP__LOCAL_PORT_STOP = 54999U
};
uint16_t UdpP__last_localport[1000];

static inline uint16_t UdpP__alloc_lport(uint8_t clnt);
#line 53
static inline error_t UdpP__Init__init(void );





static error_t UdpP__UDP__bind(uint8_t clnt, uint16_t port);
#line 71
static inline void UdpP__IP__recv(struct ip6_hdr *iph, void *packet, size_t len, struct ip6_metadata *meta);
#line 122
static error_t UdpP__UDP__sendto(uint8_t clnt, struct sockaddr_in6 *dest, void *payload, 
uint16_t len);







static inline error_t UdpP__UDP__sendtov(uint8_t clnt, struct sockaddr_in6 *dest, 
struct ip_iovec *iov);
#line 175
static inline void UdpP__BlipStatistics__clear(void );
#line 187
static inline void UdpP__UDP__default__recvfrom(uint8_t clnt, struct sockaddr_in6 *from, void *payload, 
uint16_t len, struct ip6_metadata *meta);



static inline void UdpP__IPAddress__changed(bool global_valid);
# 20 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
static bool RPLRankP__RPLOF__recomputeRoutes(void );
#line 4
static bool RPLRankP__RPLOF__OCP(uint16_t ocp);


static bool RPLRankP__RPLOF__objectSupported(uint16_t objectType);






static uint16_t RPLRankP__RPLOF__getRank(void );
static void RPLRankP__RPLOF__resetRank(void );

static bool RPLRankP__RPLOF__recalcualateRank(void );




static void RPLRankP__RPLOF__setMinHopRankIncrease(uint16_t val);
#line 9
static uint16_t RPLRankP__RPLOF__getObjectValue(void );

static struct in6_addr *RPLRankP__RPLOF__getParent(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t RPLRankP__newParentSearch__postTask(void );
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool RPLRankP__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t RPLRankP__IP_DIO__send(struct ip6_packet *msg);
# 41 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
static void RPLRankP__RouteInfo__resetTrickle(void );
#line 56
static void RPLRankP__RouteInfo__inconsistency(void );
#line 49
static void RPLRankP__RouteInfo__setDODAGConfig(uint8_t DIOIntDouble, uint8_t DIOIntMin, 
uint8_t DIORedun, uint8_t MaxRankInc, uint8_t MinHopRankInc);
#line 45
static uint8_t RPLRankP__RouteInfo__getInstanceID(void );
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static void RPLRankP__IP_DIO_Filter__recv(struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 350 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
enum RPLRankP____nesc_unnamed4408 {
#line 350
  RPLRankP__newParentSearch = 12U
};
#line 350
typedef int RPLRankP____nesc_sillytask_newParentSearch[RPLRankP__newParentSearch];
#line 95
uint16_t RPLRankP__nodeRank[1000];
uint16_t RPLRankP__minRank[1000];
bool RPLRankP__leafState[1000];

struct in6_addr;

uint8_t RPLRankP__parentNum[1000];
uint16_t RPLRankP__VERSION[1000];

uint16_t RPLRankP__MAX_RANK_INCREASE[1000];






struct in6_addr RPLRankP__DODAGID[1000];
struct in6_addr RPLRankP__DODAG_MAX[1000];
uint8_t RPLRankP__METRICID[1000];
uint16_t RPLRankP__OCP[1000];


uint8_t RPLRankP__Prf[1000];


bool RPLRankP__ignore[1000];
bool RPLRankP__ROOT[1000];
bool RPLRankP__m_running[1000];

parent_t RPLRankP__parentSet[1000][20];

static void RPLRankP__resetValid(void );
static void RPLRankP__getNewRank(void );
#line 139
static error_t RPLRankP__StdControl__start(void );
#line 159
static inline parent_t *RPLRankP__RPLParentTable__get(uint8_t i);




static inline void RPLRankP__RPLRankInfo__declareRoot(void );
#line 178
static uint8_t RPLRankP__getParent(struct in6_addr *node);


static uint16_t RPLRankP__RPLRankInfo__getRank(struct in6_addr *node);
#line 208
static error_t RPLRankP__RPLRankInfo__getDefaultRoute(struct in6_addr *next);









static inline bool RPLRankP__exceedThreshold(uint8_t indexset, uint8_t ID);








static uint8_t RPLRankP__getParent(struct in6_addr *node);
#line 255
static void RPLRankP__resetValid(void );









static void RPLRankP__RPLRankInfo__inconsistencyDetected(void );









static inline uint8_t RPLRankP__RPLRankInfo__hasParent(void );



static inline bool RPLRankP__RPLRankInfo__isLeaf(void );




static inline uint8_t RPLRankP__getPreExistingParent(struct in6_addr *node);
#line 299
static inline uint16_t RPLRankP__RPLRankInfo__getEtx(void );



static void RPLRankP__insertParent(parent_t parent);
#line 340
static void RPLRankP__evictParent(uint8_t indexset);









static inline void RPLRankP__newParentSearch__runTask(void );






static inline void RPLRankP__evictAll(void );
#line 400
static inline bool RPLRankP__ForwardingEvents__initiate(struct ip6_packet *pkt, 
struct in6_addr *next_hop);
#line 456
static inline bool RPLRankP__ForwardingEvents__approve(struct ip6_hdr *iph, struct ip6_route *route, 
struct in6_addr *next_hop);
#line 517
static inline void RPLRankP__ForwardingEvents__linkResult(struct in6_addr *node, struct send_info *info);
#line 562
static inline bool RPLRankP__compareParent(parent_t oldP, parent_t newP);



static void RPLRankP__getNewRank(void );
#line 599
static inline void RPLRankP__parseDIO(struct ip6_hdr *iph, struct dio_base_t *dio);
#line 906
static inline void RPLRankP__IP_DIO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
#line 933
static inline error_t RPLRankP__IP_DIO_Filter__send(struct ip6_packet *msg);



static inline void RPLRankP__IPAddress__changed(bool global_valid);
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__send(struct ip6_packet *msg);
# 40 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLDAORoutingEngine__startDAO(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__postTask(void );
# 136 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__getNow(void );
#line 92
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__isRunning(void );
#line 64
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__startPeriodic(uint32_t dt);
#line 78
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__stop(void );
# 46 "/home/bo/tinyos-morten/tos/interfaces/Random.nc"
static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__Random__rand32(void );
# 92 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__isRunning(void );
#line 73
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__startOneShot(uint32_t dt);




static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__postTask(void );
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getLLAddr(struct in6_addr *addr);
#line 44
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__isLocalAddress(struct in6_addr *addr);
#line 34
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__postTask(void );
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__send(struct ip6_packet *msg);
# 95 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRank.nc"
static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent(void );
#line 75
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__declareRoot(void );





static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(struct in6_addr *node);
#line 98
static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getEtx(void );
#line 96
static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__isLeaf(void );
#line 91
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__inconsistencyDetected(void );
#line 110
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getDefaultRoute(struct in6_addr *next_hop);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__postTask(void );
#line 67
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask(void );
# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__start(void );
# 123 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4409 {
#line 123
  RPLRoutingEngineP__0__sendDIOTask = 13U
};
#line 123
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_sendDIOTask[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4410 {
#line 124
  RPLRoutingEngineP__0__sendDISTask = 14U
};
#line 124
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_sendDISTask[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4411 {
#line 125
  RPLRoutingEngineP__0__init = 15U
};
#line 125
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_init[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init];
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4412 {
#line 126
  RPLRoutingEngineP__0__initDIO = 16U
};
#line 126
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_initDIO[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO];
#line 171
enum /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_unnamed4413 {
#line 171
  RPLRoutingEngineP__0__computeRemaining = 17U
};
#line 171
typedef int /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0____nesc_sillytask_computeRemaining[/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining];
#line 75
uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[1000];
uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[1000];
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag[1000];
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[1000];
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF[1000];
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[1000];
bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[1000];

uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[1000];
uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK[1000];
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE[1000];

uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID[1000];
struct in6_addr /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[1000];
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[1000];
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP[1000];
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF[1000];

uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter[1000];
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter[1000];

uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble[1000];
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin[1000];
uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun[1000];
uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc[1000];
uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc[1000];

uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN[1000];

uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdio[1000];
uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdis[1000];

bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO[1000];

struct in6_addr;

struct in6_addr /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[1000];
struct in6_addr;
struct in6_addr /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[1000];
struct in6_addr /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR[1000];


static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__resetTrickleTime(void );
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime(void );
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeTrickleRemaining(void );
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__nextTrickleTime(void );
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected(void );







static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__runTask(void );
#line 165
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__runTask(void );





static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__runTask(void );



static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__runTask(void );
#line 315
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__runTask(void );
#line 347
uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__INCONSISTENCY_COUNT[1000];

static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected(void );
#line 372
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__resetTrickleTime(void );






static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime(void );










static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeTrickleRemaining(void );







static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__nextTrickleTime(void );










static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency(void );



static inline bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__hasDODAG(void );



static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getMOP(void );



static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next);



static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDODAGConfig(uint8_t IntDouble, 
uint8_t IntMin, 
uint8_t Redun, 
uint8_t RankInc, 
uint8_t HopRankInc);
#line 442
static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID(void );







static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle(void );





static inline uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getRank(void );



static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn);



static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDTSN(void );




static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RootControl__setRoot(void );
#line 488
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__start(void );










static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__stop(void );






static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__fired(void );



static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__fired(void );





static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__fired(void );
#line 531
static inline bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__compare_ip6_addr(struct in6_addr *node1, struct in6_addr *node2);
#line 543
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
#line 567
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
#line 677
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__changed(bool global_valid);
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
static 
#line 94
/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t * 


/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__get(void );
#line 89
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(
#line 85
/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t * newVal);
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__send(struct ip6_packet *msg);
# 52 "/home/bo/tinyos-morten/tos/interfaces/Random.nc"
static uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16(void );
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__postTask(void );
# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__startPeriodic(uint32_t dt);
# 90 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__enqueue(
#line 86
/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t  newVal);
#line 81
static 
#line 79
/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t  

/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__dequeue(void );
#line 58
static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__size(void );
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getLLAddr(struct in6_addr *addr);




static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getGlobalAddr(struct in6_addr *addr);
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__postTask(void );
# 92 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__isRunning(void );
#line 73
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(uint32_t dt);
#line 92
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__isRunning(void );
#line 64
static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startPeriodic(uint32_t dt);








static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(uint32_t dt);




static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__stop(void );
# 52 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getMOP(void );
#line 45
static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getInstanceID(void );







static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn);
#line 42
static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__hasDODAG(void );

static uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank(void );









static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDTSN(void );
#line 43
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next_hop);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry */*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits);
#line 16
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__delRoute(route_key_t key);
#line 10
static route_key_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 101 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
enum /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_unnamed4414 {
#line 101
  RPLDAORoutingEngineP__0__sendDAO = 18U
};
#line 101
typedef int /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_sillytask_sendDAO[/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO];
#line 184
enum /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_unnamed4415 {
#line 184
  RPLDAORoutingEngineP__0__initDAO = 19U
};
#line 184
typedef int /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0____nesc_sillytask_initDAO[/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO];
#line 69
uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_double_count[1000];
uint32_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[1000];
uint32_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[1000];


uint32_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time[1000];


uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__daoseq[1000];

struct in6_addr /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__MY_ADDR[1000];

uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_SEQUENCE[1000];
uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_CONTROL[1000];

downwards_table_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[1000][ROUTE_TABLE_SZ];
uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[1000];
bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running[1000];

static inline error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__start(void );





static inline error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__stop(void );




uint32_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__count[1000];

static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__runTask(void );
#line 148
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO(void );
#line 176
static inline bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState(void );









static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__fired(void );









static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__runTask(void );
#line 258
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__fired(void );




static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__fired(void );
#line 283
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta);
#line 391
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__newParent(void );






static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__changed(bool global_valid);
# 48 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t  /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[1000][5];
uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[1000];
uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail[1000];
uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[1000];

static inline bool /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__empty(void );



static inline uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size(void );



static inline uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__maxSize(void );



static inline /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__head(void );



static void /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__printQueue(void );
#line 85
static inline /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__dequeue(void );
#line 97
static error_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__enqueue(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t newVal);
# 60 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
uint8_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[1000];
uint8_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[1000];
/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t * /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[1000][5];
/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool[1000][5];

static inline error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Init__init(void );
#line 88
static /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t */*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__get(void );
#line 103
static error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__put(/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t *newVal);
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(struct ip6_packet *msg);





static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414cf248, 
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);





static inline error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(uint8_t code, struct ip6_packet *msg);



static inline void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);
# 2 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLParentTable.nc"
static parent_t *RPLOF0P__ParentTable__get(uint8_t parent_index);
# 42 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
static void RPLOF0P__RPLDAO__newParent(void );
# 56 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
static void RPLOF0P__RPLRoute__inconsistency(void );
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static route_key_t RPLOF0P__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, 
struct in6_addr *next_hop, uint8_t ifindex);
# 15 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
uint16_t RPLOF0P__nodeRank[1000];
uint16_t RPLOF0P__minMetric[1000];
uint16_t RPLOF0P__prevParent[1000];



uint16_t RPLOF0P__desiredParent[1000];
uint16_t RPLOF0P__nodeEtx[1000];
bool RPLOF0P__newParent[1000];
uint16_t RPLOF0P__min_hop_rank_inc[1000];


static inline bool RPLOF0P__RPLOF__OCP(uint16_t ocp);






static inline bool RPLOF0P__RPLOF__objectSupported(uint16_t objectType);







static inline void RPLOF0P__RPLOF__setMinHopRankIncrease(uint16_t val);



static inline uint16_t RPLOF0P__RPLOF__getObjectValue(void );




static struct in6_addr *RPLOF0P__RPLOF__getParent(void );





static inline uint16_t RPLOF0P__RPLOF__getRank(void );



static inline bool RPLOF0P__RPLOF__recalcualateRank(void );
#line 89
static bool RPLOF0P__RPLOF__recomputeRoutes(void );
#line 180
static inline void RPLOF0P__RPLOF__resetRank(void );
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__send(struct ip6_packet *msg);





static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
uint8_t arg_0x414cf248, 
# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
struct ip6_hdr *hdr, void *packet, 
size_t len, struct ip6_metadata *meta);
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);





static inline error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(uint8_t code, struct ip6_packet *msg);



static inline void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
static error_t UDPShellP__UDP__sendto(struct sockaddr_in6 *dest, void *payload, 
uint16_t len);
#line 12
static error_t UDPShellP__UDP__bind(uint16_t port);
# 11 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
static char *UDPShellP__ShellCommand__eval(
# 30 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x414e0e20, 
# 11 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
int argc, char **argv);
# 3 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/RegisterShellCommand.nc"
static char *UDPShellP__RegisterShellCommand__getCommandName(
# 31 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
uint8_t arg_0x414de650);
# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
static error_t UDPShellP__ICMPPing__ping(struct in6_addr *target, uint16_t period, uint16_t n);
# 48 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
struct sockaddr_in6 UDPShellP__session_endpoint[1000];

uint64_t UDPShellP__uptime[1000];

enum UDPShellP____nesc_unnamed4416 {
  UDPShellP__N_EXTERNAL = 1U
};


enum UDPShellP____nesc_unnamed4417 {
  UDPShellP__N_BUILTINS = 5, 

  UDPShellP__N_ARGS = 10, 
  UDPShellP__CMD_HELP = 0, 
  UDPShellP__CMD_ECHO = 1, 
  UDPShellP__CMD_PING6 = 2, 
  UDPShellP__CMD_TRACERT6 = 3, 

  UDPShellP__CMD_NO_CMD = 0xfe, 
  UDPShellP__CMDNAMSIZ = 10
};

struct UDPShellP__cmd_name {
  uint8_t c_len;
  char c_name[UDPShellP__CMDNAMSIZ];
};
struct UDPShellP__cmd_builtin {
  void (*action)(int arg_0x41527dd0, char **arg_0x41526010);
};

struct UDPShellP__cmd_name UDPShellP__externals[1000][UDPShellP__N_EXTERNAL];


static inline void UDPShellP__Boot__booted(void );
#line 101
char UDPShellP__reply_buf[1000][MAX_REPLY_LEN];
char *UDPShellP__help_str[1000];
const char *UDPShellP__ping_fmt[1000];
const char *UDPShellP__ping_summary[1000];
char *UDPShellP__ident_string[1000];




static void UDPShellP__action_help(int argc, char **argv);
#line 140
static char *UDPShellP__ShellCommand__getBuffer(uint8_t cmd_id, uint16_t len);





static inline void UDPShellP__ShellCommand__write(uint8_t cmd_id, char *str, int len);



static void UDPShellP__action_echo(int argc, char **argv);
#line 168
static void UDPShellP__action_ping6(int argc, char **argv);








static inline void UDPShellP__action_uptime(int argc, char **argv);
#line 189
static inline void UDPShellP__action_ident(int argc, char **argv);




struct UDPShellP__cmd_name UDPShellP__builtins[1000][UDPShellP__N_BUILTINS];




struct UDPShellP__cmd_builtin UDPShellP__builtin_actions[1000][UDPShellP__N_BUILTINS];








static inline void UDPShellP__init_argv(char *cmd, uint16_t len, char **argv, int *argc);
#line 227
static int UDPShellP__lookup_cmd(char *cmd, int dbsize, struct UDPShellP__cmd_name *db);









static inline void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta);
#line 263
static inline void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats);










static inline void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n);
#line 287
static inline char *UDPShellP__ShellCommand__default__eval(uint8_t cmd_id, int argc, char **argv);


static inline char *UDPShellP__RegisterShellCommand__default__getCommandName(uint8_t cmd_id);
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
static error_t ICMPPingP__IP_ECHO__send(struct ip6_packet *msg);
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
static bool ICMPPingP__IPAddress__setSource(struct ip6_hdr *hdr);
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
static void ICMPPingP__ICMPPing__pingDone(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x4153e068, 
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
uint16_t ping_rcv, uint16_t ping_n);
#line 8
static void ICMPPingP__ICMPPing__pingReply(
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint8_t arg_0x4153e068, 
# 8 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
struct in6_addr *source, struct icmp_stats *stats);
# 136 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static uint32_t ICMPPingP__PingTimer__getNow(void );
#line 92
static bool ICMPPingP__PingTimer__isRunning(void );
#line 64
static void ICMPPingP__PingTimer__startPeriodic(uint32_t dt);
#line 78
static void ICMPPingP__PingTimer__stop(void );
# 43 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
uint16_t ICMPPingP__ping_seq[1000];
#line 43
uint16_t ICMPPingP__ping_n[1000];
#line 43
uint16_t ICMPPingP__ping_rcv[1000];
#line 43
uint16_t ICMPPingP__ping_ident[1000];
struct in6_addr ICMPPingP__ping_dest[1000];

static inline void ICMPPingP__sendPing(struct in6_addr *dest, uint16_t seqno);
#line 84
static inline error_t ICMPPingP__ICMPPing__ping(uint8_t client, struct in6_addr *target, 
uint16_t period, 
uint16_t n);










static inline void ICMPPingP__PingTimer__fired(void );
#line 109
static inline void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta);
#line 125
static inline void ICMPPingP__ICMPPing__default__pingReply(uint8_t client, struct in6_addr *source, 
struct icmp_stats *ping_stats);


static inline void ICMPPingP__ICMPPing__default__pingDone(uint8_t client, uint16_t n, uint16_t m);



static inline void ICMPPingP__IPAddress__changed(bool global_valid);
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
static char *RouteCmdP__ShellCommand__getBuffer(uint16_t len);





static void RouteCmdP__ShellCommand__write(char *str, int len);
# 22 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
static struct route_entry *RouteCmdP__ForwardingTable__getTable(int *size);
# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
static void RouteCmdP__Timer__startOneShot(uint32_t dt);
# 43 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/RouteCmdP.nc"
char *RouteCmdP__header[1000];



#line 44
struct RouteCmdP____nesc_unnamed4418 {
  int ifindex;
  char *name;
} RouteCmdP__ifaces[1000][3];

static inline char *RouteCmdP__ifnam(int ifidx);








int RouteCmdP__cur_entry[1000];
static inline void RouteCmdP__Timer__fired(void );
#line 92
static inline char *RouteCmdP__ShellCommand__eval(int argc, char **argv);
# 5 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommandP.nc"
static inline char */*RouteCmdC.ShellCommandC.ShellCommandP*/ShellCommandP__0__RegisterShellCommand__getCommandName(void );
# 78 "/home/bo/tinyos-morten/tos/lib/tossim/heap.c"
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

# 317 "/home/bo/tinyos-morten/tos/lib/tossim/sim_log.c"
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

# 130 "/home/bo/tinyos-morten/tos/lib/tossim/sim_noise.c"
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

# 64 "/home/bo/tinyos-morten/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP__SimMote__isOn(void )
#line 64
{
  return SimMoteP__isOn[sim_node()];
}

# 172 "/home/bo/tinyos-morten/tos/lib/tossim/sim_log.c"
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

# 161 "/home/bo/tinyos-morten/tos/lib/tossim/sim_gain.c"
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

# 55 "/home/bo/tinyos-morten/tos/lib/tossim/randomlib.c"
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

# 284 "/home/bo/tinyos-morten/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 284
{
  dummy = 5;
}

# 50 "/home/bo/tinyos-morten/tos/lib/tossim/sim_packet.c"
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

# 87 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline tossim_header_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__getHeader(message_t *amsg)
#line 87
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 345
static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__payloadLength(message_t *msg)
#line 345
{
  return __nesc_ntoh_uint8(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__getHeader(msg)->length.data);
}

# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 218 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 298 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_header_t );
}

# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 161 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 237 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 269
static inline uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
inline static uint8_t AMPacketInjectorP__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 106
inline static uint8_t AMPacketInjectorP__Packet__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 353 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__maxPayloadLength(void )
#line 353
{
  return sizeof(tossim_header_t ) + 90;
}

# 59 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 105 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void )
{
  return /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength();
}

# 59 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 131 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength();
}

# 59 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 228 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__maxPayloadLength();
}

# 59 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 308 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength() - sizeof(ieee154_header_t );
}

# 59 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 171 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void )
{
  return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength() - /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 59 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 247 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength() - sizeof(activemessage_header_t );
}

#line 284
static inline void */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  return (void *)msg + /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

# 126 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
inline static void * AMPacketInjectorP__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 341 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__headerLength(message_t *msg)
#line 341
{
  return 1;
}

# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 213 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 293 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_header_t );
}

# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 156 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 67 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline activemessage_header_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

#line 206
static __inline am_id_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.data);
}

# 147 "/home/bo/tinyos-morten/tos/interfaces/AMPacket.nc"
inline static am_id_t AMPacketInjectorP__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 89 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
static inline message_t *AMPacketInjectorP__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 89
{
#line 89
  return msg;
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
inline static message_t * AMPacketInjectorP__Receive__receive(am_id_t arg_0x40ed61d8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = AMPacketInjectorP__Receive__default__receive(arg_0x40ed61d8, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 62 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
static inline void AMPacketInjectorP__active_message_deliver_handle(sim_event_t *evt)
#line 62
{
  message_t *m = (message_t *)evt->data;

#line 64
  sim_log_debug(234U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());

  memcpy(AMPacketInjectorP__injectionMsg[sim_node()], m, sizeof(message_t ));
  AMPacketInjectorP__injectionMsg[sim_node()] = AMPacketInjectorP__Receive__receive(AMPacketInjectorP__AMPacket__type(AMPacketInjectorP__injectionMsg[sim_node()]), AMPacketInjectorP__injectionMsg[sim_node()], AMPacketInjectorP__Packet__getPayload(AMPacketInjectorP__injectionMsg[sim_node()], AMPacketInjectorP__Packet__maxPayloadLength()), AMPacketInjectorP__Packet__payloadLength(AMPacketInjectorP__injectionMsg[sim_node()]));
}

static inline sim_event_t *AMPacketInjectorP__allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 70
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 72
  evt->mote = node;
  evt->time = t;
  evt->handle = AMPacketInjectorP__active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

# 89 "/home/bo/tinyos-morten/tos/chips/atm128/sim/atm128hardware.h"
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

# 85 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP__Scheduler__runNextTask()) {
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP__sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP__Scheduler__init(void )
{
  sim_log_debug(96U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP__m_next[sim_node()], SimSchedulerBasicP__NO_TASK, sizeof SimSchedulerBasicP__m_next[sim_node()]);
    SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__NO_TASK;
    SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;

    SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP__sim_scheduler_event_init(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
  }
}

# 57 "/home/bo/tinyos-morten/tos/interfaces/Scheduler.nc"
inline static void SimMainP__Scheduler__init(void ){
#line 57
  SimSchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 120 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP__popTask(void )
{
  if (SimSchedulerBasicP__m_head[sim_node()] != SimSchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP__m_head[sim_node()];

#line 125
      SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_head[sim_node()]];
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;
        }
      SimSchedulerBasicP__m_next[sim_node()][id] = SimSchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP__NO_TASK;
    }
}

# 111 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(am_id_t id, message_t *msg, error_t error)
{
  sim_log_debug(115U, "Bo-AM", "AM:default Send Done @ %s.\n", sim_time_string());
}

# 110 "/home/bo/tinyos-morten/tos/interfaces/AMSend.nc"
inline static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x40938700, message_t * msg, error_t error){
#line 110
    /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__default__sendDone(arg_0x40938700, msg, error);
#line 110
}
#line 110
# 99 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  sim_log_debug(114U, "Bo-AM", "AM:Send Done @ %s.\n", sim_time_string());
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 120 "/home/bo/tinyos-morten/tos/interfaces/Resource.nc"
inline static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 133 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.data, 0x3f);

  sim_log_debug(128U, "Bo-Network", "Network:Send @ %s.\n", sim_time_string());
  return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 68 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending[sim_node()]);

#line 71
  if (result != SUCCESS) 
    {
      /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending[sim_node()], result);
    }
  sim_log_debug(120U, "Bo-AutoResource", "AutoResource:Send.\n");
}

# 165 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 165
{
}

# 102 "/home/bo/tinyos-morten/tos/interfaces/Resource.nc"
inline static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x409d4310){
#line 102
  switch (arg_0x409d4310) {
#line 102
    case 0U:
#line 102
      /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x409d4310);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 171 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/home/bo/tinyos-morten/tos/interfaces/ResourceConfigure.nc"
inline static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x409d39b8){
#line 59
    /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x409d39b8);
#line 59
}
#line 59
# 155 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId[sim_node()];
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[sim_node()]);
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[sim_node()]);
}

# 246 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t IPDispatchP__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(IPDispatchP__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
inline static IPDispatchP__SendQueue__t  IPDispatchP__SendQueue__dequeue(void ){
#line 81
  struct send_entry *__nesc_result;
#line 81

#line 81
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 89 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
inline static error_t IPDispatchP__SendEntryPool__put(IPDispatchP__SendEntryPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t IPDispatchP__FragPool__put(IPDispatchP__FragPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 59 "/home/bo/tinyos-morten/tos/interfaces/PacketLink.nc"
inline static uint16_t IPDispatchP__PacketLink__getRetries(message_t * msg){
#line 59
  unsigned short __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(0U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 196 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg)
{
  return /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(msg);
}

# 85 "/home/bo/tinyos-morten/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 206 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline bool /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(message_t *msg)
{
  return /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(msg);
}

# 71 "/home/bo/tinyos-morten/tos/interfaces/PacketLink.nc"
inline static bool IPDispatchP__PacketLink__wasDelivered(message_t * msg){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__wasDelivered(msg);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 20 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static bool RPLRankP__RPLOF__recomputeRoutes(void ){
#line 20
  unsigned char __nesc_result;
#line 20

#line 20
  __nesc_result = RPLOF0P__RPLOF__recomputeRoutes();
#line 20

#line 20
  return __nesc_result;
#line 20
}
#line 20
# 218 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__exceedThreshold(uint8_t indexset, uint8_t ID)
#line 218
{
  return RPLRankP__parentSet[sim_node()][indexset].etx_hop > 200;
}

# 11 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static struct in6_addr *RPLRankP__RPLOF__getParent(void ){
#line 11
  struct in6_addr *__nesc_result;
#line 11

#line 11
  __nesc_result = RPLOF0P__RPLOF__getParent();
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 517 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__ForwardingEvents__linkResult(struct in6_addr *node, struct send_info *info)
#line 517
{
  uint8_t indexset;
#line 518
  uint8_t myParent;
  uint16_t etx_now = info->link_transmissions;





  myParent = RPLRankP__getParent(RPLRankP__RPLOF__getParent());

  if (RPLRankP__nodeRank[sim_node()] == ROOT_RANK) {
      return;
    }

  for (indexset = 0; indexset < 20; indexset++) {
      if (RPLRankP__parentSet[sim_node()][indexset].valid && 
      !memcmp(& RPLRankP__parentSet[sim_node()][indexset].parentIP, node, sizeof(struct in6_addr ))) {
          break;
        }
    }

  if (indexset != 20) {
      RPLRankP__parentSet[sim_node()][indexset].etx_hop = (RPLRankP__parentSet[sim_node()][indexset].etx_hop * 6 + etx_now * 10 * 4) / 10;

      if (RPLRankP__exceedThreshold(indexset, RPLRankP__METRICID[sim_node()])) {
          RPLRankP__evictParent(indexset);
          if (indexset == myParent && RPLRankP__parentNum[sim_node()] > 0) {
            RPLRankP__RPLOF__recomputeRoutes();
            }
        }





      RPLRankP__getNewRank();

      ;
#line 554
      ;

      return;
    }
}

# 316 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__ForwardingEvents__default__linkResult(uint8_t idx, struct in6_addr *host, 
struct send_info *info)
#line 317
{
}

# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static void IPForwardingEngineP__ForwardingEvents__linkResult(uint8_t arg_0x40fb0088, struct in6_addr *dest, struct send_info *info){
#line 39
  switch (arg_0x40fb0088) {
#line 39
    case RPL_IFACE:
#line 39
      RPLRankP__ForwardingEvents__linkResult(dest, info);
#line 39
      break;
#line 39
    default:
#line 39
      IPForwardingEngineP__ForwardingEvents__default__linkResult(arg_0x40fb0088, dest, info);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 147 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRouteKey(route_key_t key)
#line 147
{
  int i;

#line 149
  for (i = 0; i < ROUTE_TABLE_SZ; i++) {
      if (IPForwardingEngineP__routing_table[sim_node()][i].valid && 
      IPForwardingEngineP__routing_table[sim_node()][i].key == key) {
        return &IPForwardingEngineP__routing_table[sim_node()][i];
        }
    }
#line 154
  return (void *)0;
}

#line 274
static inline void IPForwardingEngineP__IPForward__sendDone(uint8_t ifindex, struct send_info *status)
#line 274
{
  struct route_entry *entry;
  int key = (int )status->upper_data;

#line 277
  sim_log_debug(268U, "IPForwardingEngine", "IPForwardingEngineP: sendDone @ %s: iface: %i key: %i\n", sim_time_string(), ifindex, key);
  if (key != ROUTE_INVAL_KEY) {
      entry = IPForwardingEngineP__ForwardingTable__lookupRouteKey(key);
      if (entry) {
          sim_log_debug(269U, "IPForwardingEngine", "got entry... signal %d\n", status->link_transmissions);
          IPForwardingEngineP__ForwardingEvents__linkResult(ifindex, & entry->next_hop, status);
        }
    }
}

# 22 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
inline static void IPNeighborDiscoveryP__IPForward__sendDone(struct send_info *status){
#line 22
  IPForwardingEngineP__IPForward__sendDone(ROUTE_IFACE_154, status);
#line 22
}
#line 22
# 136 "/home/bo/tinyos-morten/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPLower__sendDone(struct send_info *status)
#line 136
{
  sim_log_debug(279U, "IPND", "IPND: Send Done @ %s\n", sim_time_string());
  IPNeighborDiscoveryP__IPForward__sendDone(status);
}

# 22 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPLower.nc"
inline static void IPDispatchP__IPLower__sendDone(struct send_info *status){
#line 22
  IPNeighborDiscoveryP__IPLower__sendDone(status);
#line 22
}
#line 22
# 61 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__resume(void )
{
}

# 79 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 126 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__turnOff(void )
#line 126
{

  if (!/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()]) {
      sim_log_error(180U, "Driver.error", "Driver: already OFF\n");
      return EALREADY;
    }
  else 
#line 131
    {
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()] = FALSE;
      sim_log_debug(181U, "Driver.debug", "Driver: turning radio OFF\n");
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask__postTask();
      return SUCCESS;
    }
}

# 44 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__turnOff();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 57 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__suspend(void )
{
}

# 72 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 97 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop(void )
{
  error_t error;

  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] != /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOff();

      if (error == SUCCESS) {
        /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF;
        }
    }
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 130 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 65 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static inline /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*IPDispatchC.QueueC*/QueueC__0__queue[sim_node()][/*IPDispatchC.QueueC*/QueueC__0__head[sim_node()]];
}

# 73 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
inline static IPDispatchP__SendQueue__t  IPDispatchP__SendQueue__head(void ){
#line 73
  struct send_entry *__nesc_result;
#line 73

#line 73
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 577 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__Ieee154Send__sendDone(message_t *msg, error_t error)
#line 577
{
  struct send_entry *s_entry = IPDispatchP__SendQueue__head();

  IPDispatchP__radioBusy[sim_node()] = FALSE;

  sim_log_debug(292U, "IPDispatch", "IPDispatchP: sendDone @ %s: %p %i\n", sim_time_string(), msg, error);

  if (IPDispatchP__state[sim_node()] == IPDispatchP__S_STOPPING) {
      IPDispatchP__RadioControl__stop();
      IPDispatchP__state[sim_node()] = IPDispatchP__S_STOPPED;
      goto done;
    }

  s_entry->info->link_transmissions += IPDispatchP__PacketLink__getRetries(msg);
  IPDispatchP__IPLower__sendDone(s_entry->info);

  if (!IPDispatchP__PacketLink__wasDelivered(msg)) {
      sim_log_debug(293U, "IPDispatch", "IPDispatchP: sendDone: was not delivered! @ %s (%i tries)\n", sim_time_string(), IPDispatchP__PacketLink__getRetries(msg));
      s_entry->info->failed = TRUE;
    }





  done: 

    IPDispatchP__SENDINFO_DECR(s_entry->info);
  IPDispatchP__FragPool__put(s_entry->msg);
  IPDispatchP__SendEntryPool__put(s_entry);
  IPDispatchP__SendQueue__dequeue();

  IPDispatchP__sendTask__postTask();
}

# 97 "/home/bo/tinyos-morten/tos/interfaces/Ieee154Send.nc"
inline static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  IPDispatchP__Ieee154Send__sendDone(msg, error);
#line 97
}
#line 97
# 127 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
  sim_log_debug(123U, "Bo-154Message", "154Message:Send Done @ %s.\n", sim_time_string());
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 79 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
  sim_log_debug(121U, "Bo-AutoResource", "AutoResource:Send Done.\n");
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 217 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.data) == 0x3f) {
    /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 222
    /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
#line 223
  sim_log_debug(129U, "Bo-Network", "Network:Send Done @ %s.\n", sim_time_string());
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 81 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
  sim_log_debug(132U, "Bo-Unique", "Unique:Send Done @ %s.\n", sim_time_string());
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 232 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] != /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg[sim_node()] = msg;
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries[sim_node()] = 0;
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  sim_log_debug(164U, "Bo-MessageBuffer", "MessageBuffer:Send @ %s.\n", sim_time_string());
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 357 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__metadataLength(message_t *msg)
#line 357
{
  return 0;
}

# 65 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

# 65 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 136 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

# 65 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 233 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline uint8_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__metadataLength(msg) + sizeof(link_metadata_t );
}

#line 181
static inline link_metadata_t */*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__metadataLength(msg);
}

#line 201
static inline uint16_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(message_t *msg)
{
  return /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->retryDelay;
}

#line 77
static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask(void )
{
  uint16_t retries;

  for (; 0; ) ;

  retries = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[sim_node()]);

  if (/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] == /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDDONE) 
    {
      if (/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__wasAcked(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[sim_node()])) {
        /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL + SUCCESS;
        }
      else {
#line 89
        if (++/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries[sim_node()] < retries) 
          {
            uint16_t delay;

            /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING;
            delay = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetryDelay(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[sim_node()]);

            if (delay > 0) 
              {
                /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__startOneShot(delay);
                return;
              }
          }
        else {
          /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL + FAIL;
          }
        }
    }
#line 106
  if (/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] == /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING) 
    {
      /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDDONE;

      if (/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__send(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[sim_node()]) != SUCCESS) {
        /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
        }
      return;
    }

  if (/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] >= /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL) 
    {
      error_t error = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] - /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SIGNAL;


      if (retries > 0) {
        /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[sim_node()], /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries[sim_node()]);
        }
      /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY;
      /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__sendDone(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[sim_node()], error);
    }
}

# 222 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 109 "/home/bo/tinyos-morten/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/bo/tinyos-morten/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 139 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 226 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()];

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

# 116 "/home/bo/tinyos-morten/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/bo/tinyos-morten/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/bo/tinyos-morten/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/bo/tinyos-morten/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

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
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 97 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

# 48 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t *IPDispatchP__getLowpanPayload(struct packed_lowmsg *lowmsg)
#line 48
{
  uint8_t len = 0;






  if (lowmsg->headers & LOWMSG_FRAG1_HDR) {
    len += LOWMSG_FRAG1_LEN;
    }
#line 58
  if (lowmsg->headers & LOWMSG_FRAGN_HDR) {
    len += LOWMSG_FRAGN_LEN;
    }
#line 60
  return lowmsg->data + len;
}

#line 166
static __inline uint8_t IPDispatchP__hasFragNHeader(struct packed_lowmsg *msg)
#line 166
{
  return msg->headers & LOWMSG_FRAGN_HDR;
}

#line 68
static __inline uint16_t IPDispatchP__getHeaderBitmap(struct packed_lowmsg *lowmsg)
#line 68
{
  uint16_t headers = 0;
  uint8_t *buf = lowmsg->data;
  int16_t len = lowmsg->len;

#line 72
  if (buf == (void *)0) {
#line 72
    return headers;
    }
  if (len > 0 && *buf >> 6 == LOWPAN_NALP_PATTERN) {
      return LOWMSG_NALP;
    }
#line 98
  if (len > 0 && *buf >> 3 == LOWPAN_FRAG1_PATTERN) {
      headers |= LOWMSG_FRAG1_HDR;
      buf += LOWMSG_FRAG1_LEN;
      len -= LOWMSG_FRAG1_LEN;
    }
  if (len > 0 && *buf >> 3 == LOWPAN_FRAGN_PATTERN) {
      headers |= LOWMSG_FRAGN_HDR;
      buf += LOWMSG_FRAGN_LEN;
      len -= LOWMSG_FRAGN_LEN;
    }
  return headers;
}

# 79 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static inline int IPDispatchP__lowpan_recon_add(struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len)
#line 80
{
  struct packed_lowmsg msg;
  uint8_t *buf;

  msg.data = pkt;
  msg.len = len;
  msg.headers = IPDispatchP__getHeaderBitmap(&msg);
  if (msg.headers == LOWMSG_NALP) {
#line 87
    return -1;
    }
  if (!IPDispatchP__hasFragNHeader(&msg)) {
      return -2;
    }

  buf = IPDispatchP__getLowpanPayload(&msg);
  len -= buf - pkt;

  if (recon->r_size < recon->r_bytes_rcvd + len) {
#line 96
    return -3;
    }

  ip_memcpy((uint8_t *)recon->r_buf + recon->r_bytes_rcvd, (uint8_t *)buf, len);
  recon->r_bytes_rcvd += len;

  return 0;
}

# 163 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__hasFrag1Header(struct packed_lowmsg *msg)
#line 163
{
  return msg->headers & LOWMSG_FRAG1_HDR;
}

# 308 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline struct lowpan_reconstruct *IPDispatchP__get_reconstruct(uint16_t key, uint16_t tag)
#line 308
{
  struct lowpan_reconstruct *ret = (void *)0;
  int i;



  for (i = 0; i < N_RECONSTRUCTIONS; i++) {
      struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)&IPDispatchP__recon_data[sim_node()][i];

      if (recon->r_tag == tag && 
      recon->r_source_key == key) {

          if (recon->r_timeout > T_UNUSED) {
              recon->r_timeout = T_ACTIVE;
              ret = recon;
              goto done;
            }
          else {
#line 325
            if (recon->r_timeout < T_UNUSED) {


                ret = (void *)0;
                goto done;
              }
            }
        }
#line 332
      if (recon->r_timeout == T_UNUSED) {
        ret = recon;
        }
    }
#line 335
  done: 

    return ret;
}

# 272 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__getFragDgramTag(struct packed_lowmsg *msg, uint16_t *tag)
#line 272
{
  uint8_t *buf = msg->data;

#line 274
  if (buf == (void *)0 || tag == (void *)0) {
#line 274
    return 1;
    }



  if (*buf >> 3 != LOWPAN_FRAG1_PATTERN && 
  *buf >> 3 != LOWPAN_FRAGN_PATTERN) {
#line 280
    return 1;
    }
#line 281
  buf += 2;

  *tag = (((uint16_t )* (uint16_t *)buf >> 8) | ((uint16_t )* (uint16_t *)buf << 8)) & 0xffff;
  return 0;
}

# 43 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static inline uint8_t *IPDispatchP__unpack_ieee154_hdr(uint8_t *buf, struct ieee154_frame_addr *frame)
#line 43
{
  uint16_t fcf = ((uint16_t )buf[2] << 8) | buf[1];

  frame->ieee_dstpan = ((uint16_t )buf[5] << 8) | buf[4];
  frame->ieee_src.ieee_mode = (fcf >> IEEE154_FCF_SRC_ADDR_MODE) & 0x3;
  frame->ieee_dst.ieee_mode = (fcf >> IEEE154_FCF_DEST_ADDR_MODE) & 0x3;

  buf += IEEE154_MIN_HDR_SZ;

  if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT) {
      ip_memcpy((uint8_t *)& frame->ieee_dst.ieee_addr.saddr, (uint8_t *)buf, 2);
      buf += 2;
    }
  else {
#line 55
    if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_EXT) {
        ip_memcpy((uint8_t *)& frame->ieee_dst.ieee_addr.laddr, (uint8_t *)buf, 8);
        buf += 8;
      }
    }
  if (frame->ieee_src.ieee_mode == IEEE154_ADDR_SHORT) {
      ip_memcpy((uint8_t *)& frame->ieee_src.ieee_addr.saddr, (uint8_t *)buf, 2);
      buf += 2;
    }
  else {
#line 63
    if (frame->ieee_src.ieee_mode == IEEE154_ADDR_EXT) {
        ip_memcpy((uint8_t *)& frame->ieee_src.ieee_addr.laddr, (uint8_t *)buf, 8);
        buf += 8;
      }
    }
#line 67
  return buf;
}

# 340 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline message_t *IPDispatchP__Ieee154Receive__receive(message_t *msg, void *msg_payload, uint8_t len)
#line 340
{
  struct packed_lowmsg lowmsg;
  struct ieee154_frame_addr frame_address;
  uint8_t *buf = msg_payload;

  sim_log_debug(284U, "IPDispatch", "IPDispatchP: -- RECEIVE -- @ %s len : %i\n", sim_time_string(), len);

  ;


  buf = IPDispatchP__unpack_ieee154_hdr(msg_payload, &frame_address);
  len -= buf - (uint8_t *)msg_payload;


  lowmsg.data = buf;
  lowmsg.len = len;
  lowmsg.headers = IPDispatchP__getHeaderBitmap(&lowmsg);
  if (lowmsg.headers == LOWMSG_NALP) {
      goto fail;
    }

  if (IPDispatchP__hasFrag1Header(&lowmsg) || IPDispatchP__hasFragNHeader(&lowmsg)) {

      int rv;
      struct lowpan_reconstruct *recon;
      uint16_t tag;
#line 365
      uint16_t source_key;

      source_key = ieee154_hashaddr(& frame_address.ieee_src);
      IPDispatchP__getFragDgramTag(&lowmsg, &tag);
      recon = IPDispatchP__get_reconstruct(source_key, tag);
      if (!recon) {
          goto fail;
        }

      if (IPDispatchP__hasFrag1Header(&lowmsg)) {
          if (recon->r_buf != (void *)0) {
#line 375
            goto fail;
            }
#line 376
          rv = IPDispatchP__lowpan_recon_start(&frame_address, recon, buf, len);
        }
      else 
#line 377
        {
          rv = IPDispatchP__lowpan_recon_add(recon, buf, len);
        }

      if (rv < 0) {
          recon->r_timeout = T_FAILED1;
          goto fail;
        }
      else 
#line 384
        {

          recon->r_timeout = T_ACTIVE;
          recon->r_source_key = source_key;
          recon->r_tag = tag;
        }

      if (recon->r_size == recon->r_bytes_rcvd) {
          IPDispatchP__deliver(recon);
        }
    }
  else {

      int rv;
      struct lowpan_reconstruct recon;

      buf = IPDispatchP__getLowpanPayload(&lowmsg);
      if ((rv = IPDispatchP__lowpan_recon_start(&frame_address, &recon, buf, len)) < 0) {
          goto fail;
        }

      if (recon.r_size == recon.r_bytes_rcvd) {
          IPDispatchP__deliver(&recon);
        }
      else 
#line 407
        {

          ip_free(recon.r_buf);
        }
    }
  goto done;
  fail: 
    ;
  done: 
    return msg;
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
inline static message_t * Ieee154PacketInjectorP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = IPDispatchP__Ieee154Receive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/Ieee154PacketInjectorP.nc"
static inline message_t *Ieee154PacketInjectorP__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 57
{
  return Ieee154PacketInjectorP__Receive__receive(msg, payload, len);
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
inline static message_t * /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = Ieee154PacketInjectorP__SubReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/home/bo/tinyos-morten/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 224 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 276 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 190 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.data);
}

#line 234
static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 237
  return addr == /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR;
}

# 184 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 184
  unsigned char __nesc_result;
#line 184

#line 184
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 184

#line 184
  return __nesc_result;
#line 184
}
#line 184
# 144 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  sim_log_debug(125U, "Bo-154Message", "154Message:Receive @ %s.\n", sim_time_string());
  if (/*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 151
    return msg;
    }
}

# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 163 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
inline static message_t * /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(am_id_t arg_0x40955c08, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(arg_0x40955c08, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 158 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(id, msg, payload, len);
#line 160
  ;
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
inline static message_t * /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x409377a0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0x409377a0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
static inline message_t *AMPacketInjectorP__SubReceive__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 56
{
  return AMPacketInjectorP__Receive__receive(id, msg, payload, len);
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/Receive.nc"
inline static message_t * /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x40937108, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = AMPacketInjectorP__SubReceive__receive(arg_0x40937108, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/home/bo/tinyos-morten/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 170 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}

# 141 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t TossimRadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 145 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline am_addr_t TossimRadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return TossimRadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = TossimRadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 186 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

#line 180
static __inline bool /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

#line 183
  return addr == /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

#line 72
static inline void */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 132
static inline message_t */*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  am_id_t id = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
  void *payload = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
  uint8_t len = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

  msg = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);

  sim_log_debug(116U, "Bo-AM", "AM:Receive @ %s.\n", sim_time_string());
  return msg;
}

# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 226 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  sim_log_debug(130U, "Bo-Network", "Network:receive @ %s.\n", sim_time_string());
  if (__nesc_ntoh_leuint8(/*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.data) == 0x3f) {
    return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
    }
  else {
#line 232
    return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 326 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[sim_node()] == 0) {
            {
#line 336
              __nesc_atomic_end(__nesc_atomic); 
#line 336
              return;
            }
            }
#line 338
          msg = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[sim_node()][/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[sim_node()]];
        }
#line 339
        __nesc_atomic_end(__nesc_atomic); }
      sim_log_debug(165U, "Bo-MessageBuffer", "MessageBuffer:Receive @ %s.\n", sim_time_string());
      msg = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);


      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[sim_node()][/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[sim_node()]] = msg;

          if (++/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[sim_node()] >= /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[sim_node()] = 0;
            }
          --/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[sim_node()];
        }
#line 352
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 129 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
  sim_log_debug(134U, "Bo-PLink", "PLink:Send Done @ %s.\n", sim_time_string());
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 247 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t TossimRadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
}

# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = TossimRadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 72 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline bool /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
#line 72
{
  return /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()] == /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__NO_CLIENT;
}

# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 98 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] != /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg[sim_node()] = msg;
  /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));
  sim_log_debug(166U, "Bo-Collision", "Collision:Send @ %s.\n", sim_time_string());

  return SUCCESS;
}

# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 189 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] == /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries[sim_node()] <= /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg[sim_node()]);
      if (/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[sim_node()] == SUCCESS) {
        /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    sim_log_debug(163U, "Bo-MessageBuffer", "MessageBuffer:Send Done @ %s.\n", sim_time_string());
    }
#line 215
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg[sim_node()], /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[sim_node()]);
}

#line 176
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
#line 48
}
#line 48
# 121 "UDPEchoP.nc"
static inline void UDPEchoP__RadioControl__stopDone(error_t e)
#line 121
{
}

# 138 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static void IPStackControlP__SplitControl__stopDone(error_t error){
#line 138
  UDPEchoP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 37 "/home/bo/tinyos-morten/tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__SubSplitControl__stopDone(error_t error)
#line 37
{
  IPStackControlP__SplitControl__stopDone(error);
}

# 138 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static void IPDispatchP__SplitControl__stopDone(error_t error){
#line 138
  IPStackControlP__SubSplitControl__stopDone(error);
#line 138
}
#line 138
# 199 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__RadioControl__stopDone(error_t error)
#line 199
{
  IPDispatchP__SplitControl__stopDone(error);
}

# 138 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  IPDispatchP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 118 "UDPEchoP.nc"
static inline void UDPEchoP__RadioControl__startDone(error_t e)
#line 118
{
}

# 113 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static void IPStackControlP__SplitControl__startDone(error_t error){
#line 113
  UDPEchoP__RadioControl__startDone(error);
#line 113
}
#line 113
# 69 "/home/bo/tinyos-morten/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 88 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__start(void )
#line 88
{
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO();
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running[sim_node()] = TRUE;
  return SUCCESS;
}

# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__RoutingControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 60 "/home/bo/tinyos-morten/tos/lib/net/blip/IPAddressP.nc"
static inline bool IPAddressP__IPAddress__getGlobalAddr(struct in6_addr *addr)
#line 60
{
  *addr = IPAddressP__m_addr[sim_node()];
  return IPAddressP__m_valid_addr[sim_node()];
}

# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPStackControlP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 48 "/home/bo/tinyos-morten/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__StdControl__default__start(void )
#line 48
{
#line 48
  return SUCCESS;
}

# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__StdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = IPStackControlP__StdControl__default__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 16 "/home/bo/tinyos-morten/tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__SubSplitControl__startDone(error_t error)
#line 16
{
  struct in6_addr addr;

#line 18
  if (error == SUCCESS) {
      IPStackControlP__StdControl__start();
    }


  if (IPStackControlP__IPAddress__getGlobalAddr(&addr)) {
      IPStackControlP__RoutingControl__start();
    }

  IPStackControlP__SplitControl__startDone(error);
}

# 113 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static void IPDispatchP__SplitControl__startDone(error_t error){
#line 113
  IPStackControlP__SubSplitControl__startDone(error);
#line 113
}
#line 113
# 154 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void IPDispatchP__ExpireTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
# 63 "/home/bo/tinyos-morten/tos/system/NoLedsC.nc"
static inline void NoLedsC__Leds__led2Toggle(void )
#line 63
{
}

# 100 "/home/bo/tinyos-morten/tos/interfaces/Leds.nc"
inline static void IPDispatchP__Leds__led2Toggle(void ){
#line 100
  NoLedsC__Leds__led2Toggle();
#line 100
}
#line 100
# 184 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__RadioControl__startDone(error_t error)
#line 184
{




  if (error == SUCCESS) {
      IPDispatchP__Leds__led2Toggle();
      IPDispatchP__ExpireTimer__startPeriodic(FRAG_EXPIRE_TIME);
      IPDispatchP__state[sim_node()] = IPDispatchP__S_RUNNING;
      IPDispatchP__radioBusy[sim_node()] = FALSE;
    }

  IPDispatchP__SplitControl__startDone(error);
}

# 113 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  IPDispatchP__RadioControl__startDone(error);
#line 113
}
#line 113
# 144 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()];


  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = s;
        }
      }
    }
}

#line 265
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
#line 48
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
}
#line 48
# 47 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/TaskletC.nc"
static inline void TaskletC__tasklet__runTask(void )
{
  TaskletC__Tasklet__run();
}

# 89 "/home/bo/tinyos-morten/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/home/bo/tinyos-morten/tos/interfaces/Random.nc"
inline static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom[sim_node()] = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error);
#line 56
}
#line 56
#line 48
inline static error_t /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 95 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/CsmaLayerP.nc"
static inline void /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubCCA__done(error_t error)
{
  for (; 0; ) ;

  if (error == SUCCESS && (error = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubSend__send(/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__txMsg[sim_node()])) == SUCCESS) {
    /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[sim_node()] = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__STATE_SEND;
    }
  else {
      /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[sim_node()] = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__STATE_READY;
      /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__RadioSend__sendDone(EBUSY);
    }
}

# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioCCA__done(error_t error){
#line 52
  /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubCCA__done(error);
#line 52
}
#line 52
# 211 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC__Model__clearChannel(void )
#line 211
{
  sim_log_debug(212U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC__packetNoise((void *)0), CpmModelC__clearThreshold[sim_node()]);
  return CpmModelC__packetNoise((void *)0) < CpmModelC__clearThreshold[sim_node()];
}

# 56 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC__Model__clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 327 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask__runTask(void )
#line 327
{
  bool clear = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__clearChannel();

#line 329
  sim_log_debug(199U, "Driver.trace", "Driver: Is channel clear? %hhu\n", clear);
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioCCA__done(clear ? SUCCESS : FAIL);
}

# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioState.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__done(void ){
#line 69
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 122 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask__runTask(void )
#line 122
{
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__done();
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
inline static uint8_t IPDispatchP__BarePacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 81 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline error_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(message_t *msg)
{
  sim_log_debug(127U, "Bo-Network", "Network:Send @ %s.\n", sim_time_string());
  return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 138 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SendNotifier__default__aboutToSend(am_addr_t addr, message_t *msg)
{
}

# 59 "/home/bo/tinyos-morten/tos/interfaces/SendNotifier.nc"
inline static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SendNotifier__aboutToSend(am_addr_t dest, message_t * msg){
#line 59
  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SendNotifier__default__aboutToSend(dest, msg);
#line 59
}
#line 59
# 84 "/home/bo/tinyos-morten/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 84
{
  return ActiveMessageAddressC__group[sim_node()];
}

# 55 "/home/bo/tinyos-morten/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned short __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 229 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_panid_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

# 173 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static ieee154_panid_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__localPan(void ){
#line 173
  unsigned short __nesc_result;
#line 173

#line 173
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
#line 173

#line 173
  return __nesc_result;
#line 173
}
#line 173
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

# 185 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.data, pan);
}

# 136 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(msg, pan);
#line 136
}
#line 136
# 195 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.data, addr);
}

# 146 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(msg, addr);
#line 146
}
#line 146
#line 178
inline static ieee154_saddr_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__localAddr(void ){
#line 178
  unsigned short __nesc_result;
#line 178

#line 178
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr();
#line 178

#line 178
  return __nesc_result;
#line 178
}
#line 178
# 205 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.data, addr);
}

# 156 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(msg, addr);
#line 156
}
#line 156
# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 349 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
#line 349
{
  __nesc_hton_uint8(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__getHeader(msg)->length.data, length);
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 223 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 303 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(ieee154_header_t ));
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 102 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__setPayloadLength(message_t *msg, uint8_t length)
{
  /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__setPayloadLength(msg, length);
#line 54
}
#line 54
# 73 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__setPayloadLength(msg, len);
}

# 69 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__createDataFrame(message_t *msg){
#line 69
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
#line 69
}
#line 69
# 97 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data) & /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

# 63 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 59 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 78 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__maxPayloadLength(void )
{
  return /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__maxPayloadLength();
}

#line 108
static inline error_t /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__send(ieee154_saddr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__maxPayloadLength()) {
    return EINVAL;
    }

  if (!/*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isDataFrame(msg)) {
    /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__createDataFrame(msg);
    }
  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__setPayloadLength(msg, len);
  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setSrcAddr(msg, /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__localAddr());
  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setDestAddr(msg, addr);
  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__setDestPan(msg, /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__localPan());

  /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SendNotifier__aboutToSend(addr, msg);
  sim_log_debug(122U, "Bo-154Message", "154Message:Send @ %s.\n", sim_time_string());
  return /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__send(msg);
}

# 67 "/home/bo/tinyos-morten/tos/interfaces/Ieee154Send.nc"
inline static error_t IPDispatchP__Ieee154Send__send(ieee154_saddr_t addr, message_t *msg, uint8_t len){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__send(addr, msg, len);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static inline bool /*IPDispatchC.QueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*IPDispatchC.QueueC*/QueueC__0__size[sim_node()] == 0;
}

# 50 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
inline static bool IPDispatchP__SendQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 423 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__sendTask__runTask(void )
#line 423
{
  struct send_entry *s_entry;

  sim_log_debug(285U, "IPDispatch", "IPDispatchP: sendTask() - sending @ %s\n", sim_time_string());

  if (IPDispatchP__radioBusy[sim_node()] || IPDispatchP__state[sim_node()] != IPDispatchP__S_RUNNING) {
#line 428
    return;
    }
#line 429
  if (IPDispatchP__SendQueue__empty()) {
#line 429
    return;
    }
  s_entry = IPDispatchP__SendQueue__head();






  if (s_entry->info->failed) {
      sim_log_debug(286U, "Drops", "drops: sendTask: dropping failed fragment\n");
      goto fail;
    }




  if (
#line 444
  IPDispatchP__Ieee154Send__send(s_entry->frame_addr->ieee_dst.ieee_addr.saddr, 
  s_entry->msg, 
  IPDispatchP__BarePacket__payloadLength(s_entry->msg)) != SUCCESS) {
      sim_log_debug(287U, "Drops", "drops: sendTask: send failed\n");
      goto fail;
    }
  else 
#line 449
    {
      IPDispatchP__radioBusy[sim_node()] = TRUE;
    }

  return;
  fail: 
    sim_log_debug(288U, "IPDispatch", "SEND FAIL\n");
  IPDispatchP__sendTask__postTask();
  ;



  s_entry->info->failed = TRUE;
  IPDispatchP__SENDINFO_DECR(s_entry->info);
  IPDispatchP__FragPool__put(s_entry->msg);
  IPDispatchP__SendEntryPool__put(s_entry);
  IPDispatchP__SendQueue__dequeue();
}

# 350 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__newParentSearch__runTask(void )
#line 350
{

  RPLRankP__RPLOF__recomputeRoutes();
  RPLRankP__getNewRank();
}

# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73
# 390 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeTrickleRemaining(void )
#line 390
{

  uint32_t remain;

#line 393
  remain = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[sim_node()] - /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[sim_node()];
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag[sim_node()] = TRUE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__startOneShot(remain);
}

#line 171
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__runTask(void )
#line 171
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeTrickleRemaining();
}

#line 165
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__runTask(void )
#line 165
{
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[sim_node()]) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
    }
}

# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(5U, dt);
#line 64
}
#line 64
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 129 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__runTask(void )
#line 129
{

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP[sim_node()] = RPL_MOP_Storing_No_Multicast;





  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()]);




  ROOT_RANK = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc[sim_node()];


  memset(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[sim_node()].in6_u.u6_addr8, 0, 16);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[sim_node()].in6_u.u6_addr8[0] = 0xFF;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[sim_node()].in6_u.u6_addr8[1] = 0x2;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[sim_node()].in6_u.u6_addr8[15] = 0x1A;

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[sim_node()]) {

      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[sim_node()]);





      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__postTask();
    }
  else 
#line 159
    {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__startPeriodic(DIS_INTERVAL);
    }
}

# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(155, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 46 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline error_t /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(uint8_t code, struct ip6_packet *msg)
#line 46
{
  return /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__send(msg);
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__send(ICMPV6_CODE_DIS, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getLLAddr(struct in6_addr *addr){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = IPAddressP__IPAddress__getLLAddr(addr);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 315 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__runTask(void )
#line 315
{
  struct ip6_packet pkt;
  struct ip_iovec v[1];
  struct dis_base_t msg;
  uint16_t length;

  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[sim_node()]) {
    return;
    }
  length = sizeof(struct dis_base_t );
  msg.icmpv6.type = 155;
  msg.icmpv6.code = ICMPV6_CODE_DIS;
  __nesc_hton_uint16(msg.icmpv6.checksum.data, 0);


  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;

  v[0].iov_base = (uint8_t *)&msg;
  v[0].iov_len = sizeof(struct dis_base_t );
  v[0].iov_next = (void *)0;
  pkt.ip6_data = &v[0];

  ip_memcpy((uint8_t *)& pkt.ip6_hdr.ip6_dst, (uint8_t *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[sim_node()], 16);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getLLAddr(& pkt.ip6_hdr.ip6_src);



  sim_log_debug(320U, "Bo-RoutingEngine", "RPL>> sendDIS %d %lu \n", TOS_NODE_ID, ++/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdis[sim_node()]);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__send(&pkt);
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(155, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 46 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline error_t /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(uint8_t code, struct ip6_packet *msg)
#line 46
{
  return /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__send(msg);
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t RPLRankP__IP_DIO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(ICMPV6_CODE_DIO, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 933 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline error_t RPLRankP__IP_DIO_Filter__send(struct ip6_packet *msg)
#line 933
{
  return RPLRankP__IP_DIO__send(msg);
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = RPLRankP__IP_DIO_Filter__send(msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 46 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static inline uint16_t RPLOF0P__RPLOF__getObjectValue(void )
#line 46
{
  return RPLOF0P__nodeEtx[sim_node()];
}

# 9 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static uint16_t RPLRankP__RPLOF__getObjectValue(void ){
#line 9
  unsigned short __nesc_result;
#line 9

#line 9
  __nesc_result = RPLOF0P__RPLOF__getObjectValue();
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 299 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline uint16_t RPLRankP__RPLRankInfo__getEtx(void )
#line 299
{
  return RPLRankP__RPLOF__getObjectValue();
}

# 98 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRank.nc"
inline static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getEtx(void ){
#line 98
  unsigned short __nesc_result;
#line 98

#line 98
  __nesc_result = RPLRankP__RPLRankInfo__getEtx();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
#line 81
inline static uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(struct in6_addr *node){
#line 81
  unsigned short __nesc_result;
#line 81

#line 81
  __nesc_result = RPLRankP__RPLRankInfo__getRank(node);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 40 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLDAORoutingEngine__startDAO(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 175 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__runTask(void )
#line 175
{
  struct ip6_packet pkt;
  struct ip_iovec v[1];
  uint8_t data[60];
  struct dio_base_t msg;
  struct dio_body_t body;
  struct dio_metric_header_t metric_header;
  struct dio_etx_t etx_value;
  struct dio_dodag_config_t dodag_config;
  uint16_t length;






  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[sim_node()] || !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()]) {
      sim_log_debug(318U, "Bo-RoutingEngine", "NoTxDIO %d %d %d\n", /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter[sim_node()], /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun[sim_node()], /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()]);
      return;
    }

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLDAORoutingEngine__startDAO();



  msg.icmpv6.type = 155;
  msg.icmpv6.code = ICMPV6_CODE_DIO;
  __nesc_hton_uint16(msg.icmpv6.checksum.data, 0);
  msg.flags.flags_chunk = 0;
  msg.flags.flags_chunk = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE[sim_node()] << 7;
  msg.flags.flags_chunk |= /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP[sim_node()] << 3;
  msg.flags.flags_chunk |= /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF[sim_node()] << 0;
  __nesc_hton_uint8(msg.version.data, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[sim_node()]);
  msg.instance_id.id = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID[sim_node()];
  msg.dtsn = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN[sim_node()];
  ip_memcpy((uint8_t *)& msg.dodagID, (uint8_t *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[sim_node()], sizeof(struct in6_addr ));

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[sim_node()]) {

      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getGlobalAddr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[sim_node()]);



      __nesc_hton_uint16(msg.dagRank.data, ROOT_RANK);
    }
  else 
#line 219
    {
      __nesc_hton_uint16(msg.dagRank.data, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()]));
    }

  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF[sim_node()]) {
      __nesc_hton_uint8(dodag_config.type.data, RPL_DODAG_CONFIG_TYPE);
      __nesc_hton_uint8(dodag_config.length.data, 14);
      dodag_config.flags = 0;
      dodag_config.A = 0;
      dodag_config.PCS = 0;



      __nesc_hton_uint16(dodag_config.ocp.data, 0);

      __nesc_hton_uint8(dodag_config.default_lifetime.data, 0xFF);
      __nesc_hton_uint16(dodag_config.lifetime_unit.data, 0xFFFF);
      __nesc_hton_uint8(dodag_config.DIOIntDoubl.data, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble[sim_node()]);
      __nesc_hton_uint8(dodag_config.DIOIntMin.data, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin[sim_node()]);
      __nesc_hton_uint8(dodag_config.DIORedun.data, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun[sim_node()]);
      __nesc_hton_uint16(dodag_config.MaxRankInc.data, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc[sim_node()]);
      __nesc_hton_uint16(dodag_config.MinHopRankInc.data, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc[sim_node()]);
      __nesc_hton_uint8(dodag_config.reserved.data, 0);


      __nesc_hton_uint16(etx_value.etx.data, /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getEtx());

      metric_header.routing_obj_type = 7;
      metric_header.reserved = 0;
      metric_header.R_flag = 0;
      metric_header.G_flag = 1;
      metric_header.A_flag = 0;
      metric_header.O_flag = 0;
      metric_header.C_flag = 0;
      __nesc_hton_uint16(metric_header.object_len.data, 2);

      body.type = RPL_DODAG_METRIC_CONTAINER_TYPE;
      body.container_len = 6;









      length = sizeof(struct dio_base_t ) + sizeof(struct dio_dodag_config_t );
      ip_memcpy((uint8_t *)&data, (uint8_t *)&msg, sizeof(struct dio_base_t ));
      ip_memcpy((uint8_t *)&data + sizeof(struct dio_base_t ), (uint8_t *)&dodag_config, sizeof(struct dio_dodag_config_t ));



      v[0].iov_base = (uint8_t *)&data;
      v[0].iov_len = length;
      v[0].iov_next = (void *)0;

      pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
      pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;

      pkt.ip6_data = &v[0];
    }
  else 

    {
      length = sizeof(struct dio_base_t );
      pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
      pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;

      v[0].iov_base = (uint8_t *)&msg;
      v[0].iov_len = sizeof(struct dio_base_t );
      v[0].iov_next = (void *)0;

      pkt.ip6_data = &v[0];
    }




  sim_log_debug(319U, "Bo-RoutingEngine", "TXDIO %d %lu \n", TOS_NODE_ID, ++/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdio[sim_node()]);



  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO[sim_node()]) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO[sim_node()] = FALSE;
      ip_memcpy((uint8_t *)& pkt.ip6_hdr.ip6_dst, (uint8_t *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR[sim_node()], 16);
    }
  else 
#line 305
    {
      ip_memcpy((uint8_t *)& pkt.ip6_hdr.ip6_dst, (uint8_t *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[sim_node()], 16);
    }
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__getLLAddr(& pkt.ip6_hdr.ip6_src);



  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__send(&pkt);
}

# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(7U, dt);
#line 73
}
#line 73
# 169 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].isrunning;
}

# 92 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(7U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 89 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 90 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__enqueue(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 110 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRank.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getDefaultRoute(struct in6_addr *next_hop){
#line 110
  unsigned char __nesc_result;
#line 110

#line 110
  __nesc_result = RPLRankP__RPLRankInfo__getDefaultRoute(next_hop);
#line 110

#line 110
  return __nesc_result;
#line 110
}
#line 110
# 421 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next)
#line 421
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getDefaultRoute(next);
}

# 43 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDefaultRoute(struct in6_addr *next_hop){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDefaultRoute(next_hop);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 442 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID(void )
#line 442
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID[sim_node()];
}

# 45 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getInstanceID(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 456 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline uint16_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getRank(void )
#line 456
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()]);
}

# 44 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank(void ){
#line 44
  unsigned short __nesc_result;
#line 44

#line 44
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getRank();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 413 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__hasDODAG(void )
#line 413
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()];
}

# 42 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__hasDODAG(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__hasDODAG();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
inline static /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__t * /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__get(void ){
#line 97
  struct __nesc_unnamed4366 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 196 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__runTask(void )
#line 196
{
  error_t error;
  dao_entry_t *dao_msg;
  uint16_t length = sizeof(struct dao_base_t );

  dao_msg = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__get();
  if (dao_msg == (void *)0) {
      return;
    }

  if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__hasDODAG() || /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank() == ROOT_RANK) {
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);
      return;
    }


  dao_msg->dao_base.icmpv6.type = 155;
  dao_msg->dao_base.icmpv6.code = ICMPV6_CODE_DAO;
  __nesc_hton_uint16(dao_msg->dao_base.icmpv6.checksum.data, 0);
  dao_msg->dao_base.DAOsequence = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__daoseq[sim_node()];
  dao_msg->dao_base.instance_id.id = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getInstanceID();

  dao_msg->dao_base.target_option.type = RPL_TARGET_TYPE;
  dao_msg->dao_base.target_option.option_length = 18;
  dao_msg->dao_base.target_option.prefix_length = sizeof(struct in6_addr ) * 8;


  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getGlobalAddr(&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__MY_ADDR[sim_node()]);



  ip_memcpy((uint8_t *)& dao_msg->dao_base.target_option.target_prefix, (uint8_t *)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__MY_ADDR[sim_node()], sizeof(struct in6_addr ));

  dao_msg->dao_base.transit_info_option.type = RPL_TRANSIT_INFORMATION_TYPE;
  dao_msg->dao_base.transit_info_option.option_length = 22;
  dao_msg->dao_base.transit_info_option.path_sequence = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_SEQUENCE[sim_node()];
  dao_msg->dao_base.transit_info_option.path_control = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_CONTROL[sim_node()];
  dao_msg->dao_base.transit_info_option.path_lifetime = DEFAULT_LIFETIME;
  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDefaultRoute(& dao_msg->dao_base.transit_info_option.parent_address) != SUCCESS) {
    return;
    }
  dao_msg->v[0].iov_base = (uint8_t *)& dao_msg->dao_base;
  dao_msg->v[0].iov_len = length;
  dao_msg->v[0].iov_next = (void *)0;

  dao_msg->s_pkt.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  dao_msg->s_pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
  dao_msg->s_pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )length << 8) | ((uint16_t )length >> 8)) & 0xffff;
  dao_msg->s_pkt.ip6_data = &dao_msg->v[0];

  error = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__enqueue(dao_msg);

  if (error != SUCCESS) {
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);
      return;
    }
  else 
#line 251
    {
      if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__isRunning()) {
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[sim_node()]);
        }
    }
}

# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static inline uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size(void )
#line 57
{
  return /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[sim_node()];
}

# 58 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
inline static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__send(ICMPV6_CODE_DAO, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getLLAddr(struct in6_addr *addr){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = IPAddressP__IPAddress__getLLAddr(addr);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 53 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static inline bool /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[sim_node()] == 0;
}









static inline /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__head(void )
#line 65
{
  return /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[sim_node()][/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[sim_node()]];
}

#line 85
static inline /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__dequeue(void )
#line 85
{
  /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t t = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__head();

#line 87
  sim_log_debug(331U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[sim_node()]);
  if (!/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__empty()) {
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[sim_node()]++;
      if (/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[sim_node()] == 5) {
#line 90
        /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[sim_node()] = 0;
        }
#line 91
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[sim_node()]--;
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__printQueue();
    }
  return t;
}

# 81 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
inline static /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__t  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__dequeue(void ){
#line 81
  struct __nesc_unnamed4366 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 417 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getMOP(void )
#line 417
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP[sim_node()];
}

# 52 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getMOP(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getMOP();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 101 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__runTask(void )
#line 101
{
  dao_entry_t *dao_msg;





  struct in6_addr next_hop;

  struct dao_base_t *dao;

  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank() == ROOT_RANK) {
      return;
    }

  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__size() > 0 && /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getMOP() != 0) {
      dao_msg = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__dequeue();




      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__getLLAddr(& dao_msg->s_pkt.ip6_hdr.ip6_src);
      if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDefaultRoute(&next_hop) != SUCCESS) {

        return;
        }
#line 126
      ip_memcpy((uint8_t *)& dao_msg->s_pkt.ip6_hdr.ip6_dst, (uint8_t *)&next_hop, sizeof(struct in6_addr ));







      dao = (struct dao_base_t *)dao_msg->s_pkt.ip6_data->iov_base;

      sim_log_debug(322U, "RPLDAORoutingEngine", "RPLDAORouting:>> sendDAO %d %lu \n", TOS_NODE_ID, ++/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__count[sim_node()]);
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__send(& dao_msg->s_pkt);
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);

      if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__size()) {


          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__postTask();
        }
    }
}

# 221 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x40381ce8){
#line 75
  switch (arg_0x40381ce8) {
#line 75
    case /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send:
#line 75
      /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case TaskletC__tasklet:
#line 75
      TaskletC__tasklet__runTask();
#line 75
      break;
#line 75
    case /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    case /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask:
#line 75
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask:
#line 75
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask__runTask();
#line 75
      break;
#line 75
    case IPDispatchP__sendTask:
#line 75
      IPDispatchP__sendTask__runTask();
#line 75
      break;
#line 75
    case RPLRankP__newParentSearch:
#line 75
      RPLRankP__newParentSearch__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__initDIO__runTask();
#line 75
      break;
#line 75
    case /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining:
#line 75
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__runTask();
#line 75
      break;
#line 75
    case /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO:
#line 75
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__runTask();
#line 75
      break;
#line 75
    case /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO:
#line 75
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP__TaskBasic__default__runTask(arg_0x40381ce8);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool RPLRankP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 21 "/home/bo/tinyos-morten/tos/lib/net/blip/Ieee154AddressP.nc"
static inline ieee154_panid_t Ieee154AddressP__Ieee154Address__getPanId(void )
#line 21
{
  return Ieee154AddressP__m_panid[sim_node()];
}

# 5 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_panid_t IPAddressP__Ieee154Address__getPanId(void ){
#line 5
  unsigned short __nesc_result;
#line 5

#line 5
  __nesc_result = Ieee154AddressP__Ieee154Address__getPanId();
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 24 "/home/bo/tinyos-morten/tos/lib/net/blip/Ieee154AddressP.nc"
static inline ieee154_saddr_t Ieee154AddressP__Ieee154Address__getShortAddr(void )
#line 24
{
  return Ieee154AddressP__m_saddr[sim_node()];
}

# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_saddr_t IPAddressP__Ieee154Address__getShortAddr(void ){
#line 6
  unsigned short __nesc_result;
#line 6

#line 6
  __nesc_result = Ieee154AddressP__Ieee154Address__getShortAddr();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6

inline static ieee154_laddr_t IPAddressP__Ieee154Address__getExtAddr(void ){
#line 7
  struct ieee_eui64 __nesc_result;
#line 7

#line 7
  __nesc_result = Ieee154AddressP__Ieee154Address__getExtAddr();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 31 "/home/bo/tinyos-morten/tos/platforms/micaz/LocalIeeeEui64C.nc"
static inline ieee_eui64_t LocalIeeeEui64C__LocalIeeeEui64__getId(void )
#line 31
{
  ieee_eui64_t id;

  id.data[0] = 0x00;
  id.data[1] = 0x12;
  id.data[2] = 0x6d;




  id.data[3] = 'L';
  id.data[4] = 'O';

  id.data[5] = 0;
  id.data[6] = TOS_NODE_ID >> 8;
  id.data[7] = TOS_NODE_ID & 0xff;
  return id;
}

# 48 "/home/bo/tinyos-morten/tos/interfaces/LocalIeeeEui64.nc"
inline static ieee_eui64_t Ieee154AddressP__LocalIeeeEui64__getId(void ){
#line 48
  struct ieee_eui64 __nesc_result;
#line 48

#line 48
  __nesc_result = LocalIeeeEui64C__LocalIeeeEui64__getId();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 324 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__IPForward__default__send(uint8_t ifindex, struct in6_addr *next_hop, 
struct ip6_packet *pkt, 
void *data)
#line 326
{




  return SUCCESS;
}

# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
inline static error_t IPForwardingEngineP__IPForward__send(uint8_t arg_0x40fae138, struct in6_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  switch (arg_0x40fae138) {
#line 18
    case ROUTE_IFACE_154:
#line 18
      __nesc_result = IPNeighborDiscoveryP__IPForward__send(next_hop, msg, data);
#line 18
      break;
#line 18
    default:
#line 18
      __nesc_result = IPForwardingEngineP__IPForward__default__send(arg_0x40fae138, next_hop, msg, data);
#line 18
      break;
#line 18
    }
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 45 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint8_t RPLRankP__RouteInfo__getInstanceID(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getInstanceID();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 400 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__ForwardingEvents__initiate(struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 401
{

  struct ip_iovec v;
  uint16_t len;
  rpl_data_hdr_t data_hdr;


  return TRUE;


  if (pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt == IANA_ICMP) {
    return TRUE;
    }
  data_hdr.ip6_ext_outer.ip6e_nxt = pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt;
  data_hdr.ip6_ext_outer.ip6e_len = sizeof(rpl_data_hdr_t );

  data_hdr.ip6_ext_inner.ip6e_nxt = RPL_HBH_RANK_TYPE;
  data_hdr.ip6_ext_inner.ip6e_len = sizeof(rpl_data_hdr_t ) - 4;
  data_hdr.bitflag = 0;
  data_hdr.bitflag = 0 << 7;
  data_hdr.bitflag |= 0 << 6;
  data_hdr.bitflag |= 0 << 5;




  data_hdr.instance_id.id = RPLRankP__RouteInfo__getInstanceID();
  __nesc_hton_uint16(data_hdr.senderRank.data, RPLRankP__nodeRank[sim_node()]);
  pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IPV6_HOP;

  len = (((uint16_t )pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;


  v.iov_base = (uint8_t *)&data_hdr;
  v.iov_len = sizeof(rpl_data_hdr_t );
  v.iov_next = pkt->ip6_data;


  pkt->ip6_data = &v;
  len = len + v.iov_len;
  pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )len << 8) | ((uint16_t )len >> 8)) & 0xffff;



  return TRUE;
}

# 312 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline bool IPForwardingEngineP__ForwardingEvents__default__initiate(uint8_t idx, struct ip6_packet *pkt, 
struct in6_addr *next_hop)
#line 313
{
  return TRUE;
}

# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static bool IPForwardingEngineP__ForwardingEvents__initiate(uint8_t arg_0x40fb0088, struct ip6_packet *pkt, struct in6_addr *next_hop){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  switch (arg_0x40fb0088) {
#line 12
    case RPL_IFACE:
#line 12
      __nesc_result = RPLRankP__ForwardingEvents__initiate(pkt, next_hop);
#line 12
      break;
#line 12
    default:
#line 12
      __nesc_result = IPForwardingEngineP__ForwardingEvents__default__initiate(arg_0x40fb0088, pkt, next_hop);
#line 12
      break;
#line 12
    }
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 128 "/home/bo/tinyos-morten/tos/lib/net/blip/IPAddressP.nc"
static inline bool IPAddressP__IPAddress__isLLAddress(struct in6_addr *addr)
#line 128
{
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff) || (
  addr->in6_u.u6_addr8[0] == 0xff && (
  addr->in6_u.u6_addr8[1] & 0x0f) <= 2)) {
    return TRUE;
    }
#line 133
  return FALSE;
}

# 50 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPForwardingEngineP__IPAddress__isLLAddress(struct in6_addr *addr){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = IPAddressP__IPAddress__isLLAddress(addr);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
#line 44
inline static bool IPForwardingEngineP__IPAddress__isLocalAddress(struct in6_addr *addr){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IPAddressP__IPAddress__isLocalAddress(addr);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void IPForwardingEngineP__PrintTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(3U, dt);
#line 64
}
#line 64
#line 92
inline static bool IPForwardingEngineP__PrintTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(3U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 162 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__IP__send(struct ip6_packet *pkt)
#line 162
{

  struct route_entry *next_hop_entry = 
  IPForwardingEngineP__ForwardingTable__lookupRoute(pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8, 128);

  if (!IPForwardingEngineP__PrintTimer__isRunning()) {
    IPForwardingEngineP__PrintTimer__startPeriodic(10000);
    }
  if (IPForwardingEngineP__IPAddress__isLocalAddress(& pkt->ip6_hdr.ip6_dst) && 
  pkt->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {
      sim_log_debug(263U, "IPForwardingEngine", "IPForwardingEngineP: Forwarding -- send with local unicast address! @ %s\n", sim_time_string());
      return FAIL;
    }
  else {
#line 174
    if (IPForwardingEngineP__IPAddress__isLLAddress(& pkt->ip6_hdr.ip6_dst) && (
    !next_hop_entry || next_hop_entry->prefixlen < 128)) {
#line 187
        sim_log_debug(264U, "IPForwardingEngine", "IPForwardingEngineP: Forwarding -- send to LL address @ %s\n", sim_time_string());
        pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = 1;
        return IPForwardingEngineP__IPForward__send(ROUTE_IFACE_154, & pkt->ip6_hdr.ip6_dst, pkt, 
        (void *)ROUTE_INVAL_KEY);
      }
    else {
#line 191
      if (next_hop_entry) {
          sim_log_debug(265U, "IPForwardingEngine", "IPForwardingEngineP: Forwarding -- got from routing table @ %s\n", sim_time_string());


          if (!IPForwardingEngineP__ForwardingEvents__initiate(next_hop_entry->ifindex, pkt, 
          & next_hop_entry->next_hop)) {
            return FAIL;
            }
          return IPForwardingEngineP__IPForward__send(next_hop_entry->ifindex, & next_hop_entry->next_hop, pkt, 
          (void *)next_hop_entry->key);
        }
      }
    }
#line 202
  return FAIL;
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t IPProtocolsP__SubIP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPForwardingEngineP__IP__send(msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 139 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id)
{
  return SimSchedulerBasicP__m_next[sim_node()][id] != SimSchedulerBasicP__NO_TASK || SimSchedulerBasicP__m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP__pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP__isWaiting(id)) 
    {
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_head[sim_node()] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_tail[sim_node()]] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP__sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 61 "/home/bo/tinyos-morten/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP__SimMote__getStartTime(void )
#line 61
{
  return SimMoteP__startTime[sim_node()];
}

# 127 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP__notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP__notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4319 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 5 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static ieee154_panid_t IPNeighborDiscoveryP__Ieee154Address__getPanId(void ){
#line 5
  unsigned short __nesc_result;
#line 5

#line 5
  __nesc_result = Ieee154AddressP__Ieee154Address__getPanId();
#line 5

#line 5
  return __nesc_result;
#line 5
}
#line 5
# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPNeighborDiscoveryP__IPAddress__getLLAddr(struct in6_addr *addr){
#line 29
  unsigned char __nesc_result;
#line 29

#line 29
  __nesc_result = IPAddressP__IPAddress__getLLAddr(addr);
#line 29

#line 29
  return __nesc_result;
#line 29
}
#line 29
# 191 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay)
{
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->retryDelay = retryDelay;
}

# 53 "/home/bo/tinyos-morten/tos/interfaces/PacketLink.nc"
inline static void IPDispatchP__PacketLink__setRetryDelay(message_t *msg, uint16_t retryDelay){
#line 53
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetryDelay(msg, retryDelay);
#line 53
}
#line 53
#line 46
inline static void IPDispatchP__PacketLink__setRetries(message_t * msg, uint16_t maxRetries){
#line 46
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(msg, maxRetries);
#line 46
}
#line 46
# 61 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 12;
}

#line 57
static inline uint8_t /*IPDispatchC.QueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*IPDispatchC.QueueC*/QueueC__0__size[sim_node()];
}

#line 97
static inline error_t /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(/*IPDispatchC.QueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*IPDispatchC.QueueC*/QueueC__0__Queue__size() < /*IPDispatchC.QueueC*/QueueC__0__Queue__maxSize()) {
      sim_log_debug(309U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*IPDispatchC.QueueC*/QueueC__0__size[sim_node()]);
      /*IPDispatchC.QueueC*/QueueC__0__queue[sim_node()][/*IPDispatchC.QueueC*/QueueC__0__tail[sim_node()]] = newVal;
      /*IPDispatchC.QueueC*/QueueC__0__tail[sim_node()]++;
      if (/*IPDispatchC.QueueC*/QueueC__0__tail[sim_node()] == 12) {
#line 102
        /*IPDispatchC.QueueC*/QueueC__0__tail[sim_node()] = 0;
        }
#line 103
      /*IPDispatchC.QueueC*/QueueC__0__size[sim_node()]++;
      /*IPDispatchC.QueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/home/bo/tinyos-morten/tos/interfaces/Queue.nc"
inline static error_t IPDispatchP__SendQueue__enqueue(IPDispatchP__SendQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*IPDispatchC.QueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 166 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length + /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET);
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 242 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 274
static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(msg, len);
}

# 94 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
#line 106
inline static uint8_t IPDispatchP__BarePacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 83 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  return /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg);
}



static inline void */*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__getPayload(message_t *msg, uint8_t len)
{
  return /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__getPayload(msg, len);
}

# 122 "/home/bo/tinyos-morten/tos/interfaces/Ieee154Send.nc"
inline static void *IPDispatchP__Ieee154Send__getPayload(message_t *msg, uint8_t len){
#line 122
  void *__nesc_result;
#line 122

#line 122
  __nesc_result = /*TossimRadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__getPayload(msg, len);
#line 122

#line 122
  return __nesc_result;
#line 122
}
#line 122
# 337 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__setFragDgramOffset(struct packed_lowmsg *msg, uint8_t size)
#line 337
{
  uint8_t *buf = msg->data;

#line 339
  if (buf == (void *)0) {
#line 339
    return 1;
    }




  if (*buf >> 3 != LOWPAN_FRAGN_PATTERN) {
#line 345
    return 1;
    }
#line 346
  buf += 4;
  *buf = size;
  return 0;
}

#line 321
static __inline uint8_t IPDispatchP__setFragDgramTag(struct packed_lowmsg *msg, uint16_t tag)
#line 321
{
  uint8_t *buf = msg->data;

#line 323
  if (buf == (void *)0) {
#line 323
    return 1;
    }




  if (*buf >> 3 != LOWPAN_FRAG1_PATTERN && 
  *buf >> 3 != LOWPAN_FRAGN_PATTERN) {
#line 330
    return 1;
    }
#line 331
  buf += 2;

  buf[0] = tag >> 8;
  buf[1] = tag & 0xff;
  return 0;
}

#line 301
static __inline uint8_t IPDispatchP__setFragDgramSize(struct packed_lowmsg *msg, uint16_t size)
#line 301
{
  uint8_t *buf = msg->data;

#line 303
  if (buf == (void *)0) {
#line 303
    return 1;
    }



  if (*buf >> 3 != LOWPAN_FRAG1_PATTERN && 
  *buf >> 3 != LOWPAN_FRAGN_PATTERN) {
#line 309
    return 1;
    }
#line 310
  size = size & 0x7ff;


  *buf &= 0xf8;
  *buf |= size >> 8;
  buf[1] = size & 0xff;


  return 0;
}

#line 114
static __inline uint8_t IPDispatchP__setupHeaders(struct packed_lowmsg *packed, uint16_t headers)
#line 114
{
  uint8_t *buf = packed->data;
  uint16_t len = packed->len;

#line 117
  if (packed == (void *)0) {
#line 117
    return 1;
    }
#line 118
  if (buf == (void *)0) {
#line 118
    return 1;
    }
#line 119
  packed->headers = 0;
#line 136
  if (headers & LOWMSG_FRAG1_HDR) {
      if (len < LOWMSG_FRAG1_LEN) {
#line 137
        return 1;
        }
#line 138
      packed->headers |= LOWMSG_FRAG1_HDR;
      *buf = LOWPAN_FRAG1_PATTERN << 3;
      buf += LOWMSG_FRAG1_LEN;
      len -= LOWMSG_FRAG1_LEN;
    }
  if (headers & LOWMSG_FRAGN_HDR) {
      if (len < LOWMSG_FRAGN_LEN) {
#line 144
        return 1;
        }
#line 145
      packed->headers |= LOWMSG_FRAGN_HDR;
      *buf = LOWPAN_FRAGN_PATTERN << 3;
    }
  return 0;
}

# 263 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__pack_udp(uint8_t *buf, size_t cnt, struct ip6_packet *packet, int offset)
#line 263
{
  struct udp_hdr udp;

  if (cnt < 7) {
      return -1;
    }

  if (iov_read(packet->ip6_data, offset, sizeof(struct udp_hdr ), (void *)&udp) != 
  sizeof(struct udp_hdr )) {
      return -1;
    }

  *buf = LOWPAN_NHC_UDP_PATTERN | LOWPAN_NHC_UDP_PORT_FULL;
  ip_memcpy((uint8_t *)buf + 1, (uint8_t *)& udp.srcport, 4);
  ip_memcpy((uint8_t *)buf + 5, (uint8_t *)& udp.chksum, 2);
  return 7;
}

static inline int IPDispatchP__pack_ipnh(uint8_t *dest, size_t cnt, uint8_t *type, struct ip6_packet *packet, int offset)
#line 281
{
  struct ip6_ext ext;


  if (iov_read(packet->ip6_data, offset, 2, (void *)&ext) != 2) {
    return -1;
    }
  if (ext.ip6e_len > cnt) {
    return -1;
    }
  *dest = LOWPAN_NHC_IPV6_PATTERN;
  switch (*type) {
      case IPV6_HOP: 
        *dest |= LOWPAN_NHC_EID_HOP;
#line 294
      break;
      case IPV6_ROUTING: 
        *dest |= LOWPAN_NHC_EID_ROUTING;
#line 296
      break;
      case IPV6_FRAG: 
        *dest |= LOWPAN_NHC_EID_FRAG;
#line 298
      break;
      case IPV6_DEST: 
        *dest |= LOWPAN_NHC_EID_DEST;
#line 300
      break;
      case IPV6_MOBILITY: 
        *dest |= LOWPAN_NHC_EID_MOBILE;
#line 302
      break;
      default: 
        return -1;
    }



  *type = ext.ip6e_nxt;

  if ((((((
#line 310
  ext.ip6e_nxt == IPV6_HOP || ext.ip6e_nxt == IPV6_ROUTING) || ext.ip6e_nxt == IPV6_FRAG) || 
  ext.ip6e_nxt == IPV6_DEST) || ext.ip6e_nxt == IPV6_MOBILITY) || ext.ip6e_nxt == IPV6_IPV6) || 
  ext.ip6e_nxt == IANA_UDP) {
      *dest |= LOWPAN_NHC_NH;
    }
  else 
#line 314
    {

      dest++;
      *dest = ext.ip6e_nxt;
    }

  dest++;
  * dest++ = ext.ip6e_len;


  if (iov_read(packet->ip6_data, offset + 2, ext.ip6e_len - 2, dest) != ext.ip6e_len - 2) {
    return -1;
    }
  return ext.ip6e_len;
}

static inline int IPDispatchP__pack_nhc_chain(uint8_t **dest, size_t cnt, struct ip6_packet *packet)
#line 330
{
  uint8_t nxt = packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt;
  int offset = 0;
#line 332
  int rv;




  while (((((nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) {
      int extra;

#line 340
      rv = IPDispatchP__pack_ipnh(*dest, cnt, &nxt, packet, offset);

      if (rv < 0) {
#line 342
        return -1;
        }



      extra = * *dest & LOWPAN_NHC_NH ? 0 : 1;
      *dest += rv + extra;
      offset += rv;
      cnt -= rv;
    }

  if (nxt == IANA_UDP) {
      rv = IPDispatchP__pack_udp(*dest, cnt, packet, offset);

      if (rv < 0) {
#line 356
        return -1;
        }
#line 357
      offset += sizeof(struct udp_hdr );
      *dest += rv;
    }
  return offset;
}

#line 237
static inline uint8_t *IPDispatchP__pack_multicast(uint8_t *buf, struct in6_addr *addr, uint8_t *flags)
#line 237
{

  *flags = 0;
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xff02 << 8) | ((uint16_t )0xff02 >> 8)) & 0xffff) && 
  IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 120) == 0) {
      *flags |= LOWPAN_IPHC_AM_M_8;
      *buf = addr->in6_u.u6_addr8[15];
      return buf + 1;
    }
  else {
#line 245
    if (IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 104) == 0) {
        *flags |= LOWPAN_IPHC_AM_M_32;
        *buf = addr->in6_u.u6_addr8[1];
        ip_memcpy((uint8_t *)buf + 1, (uint8_t *)&addr->in6_u.u6_addr8[13], 3);
        return buf + 4;
      }
    else {
#line 250
      if (IPDispatchP__bit_range_zero_p(addr->in6_u.u6_addr8, 16, 88) == 0) {
          *flags |= LOWPAN_IPHC_AM_M_48;
          *buf = addr->in6_u.u6_addr8[1];
          ip_memcpy((uint8_t *)buf + 1, (uint8_t *)&addr->in6_u.u6_addr8[11], 5);
          return buf + 6;
        }
      else 
#line 255
        {
          *flags += LOWPAN_IPHC_AM_M_128;
          ip_memcpy((uint8_t *)buf, (uint8_t *)addr->in6_u.u6_addr8, 16);
          return buf + 16;
        }
      }
    }
}

# 16 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static int IPDispatchP__NeighborDiscovery__matchContext(struct in6_addr *addr, uint8_t *ctx){
#line 16
  int __nesc_result;
#line 16

#line 16
  __nesc_result = IPNeighborDiscoveryP__NeighborDiscovery__matchContext(addr, ctx);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 101 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline int IPDispatchP__lowpan_extern_match_context(struct in6_addr *addr, uint8_t *ctx_id)
#line 101
{
  return IPDispatchP__NeighborDiscovery__matchContext(addr, ctx_id);
}

# 150 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static __inline uint8_t *IPDispatchP__pack_hlim(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 150
{
  if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 1) {
      *dispatch |= LOWPAN_IPHC_HLIM_1;
    }
  else {
#line 153
    if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 64) {
        *dispatch |= LOWPAN_IPHC_HLIM_64;
      }
    else {
#line 155
      if (hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim == 255) {
          *dispatch |= LOWPAN_IPHC_HLIM_255;
        }
      else 
#line 157
        {
          *dispatch |= LOWPAN_IPHC_HLIM_NONE;
          * buf++ = hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim;
        }
      }
    }
#line 161
  return buf;
}

#line 138
static __inline uint8_t *IPDispatchP__pack_nh(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 138
{
  uint8_t nxt = hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt;

  if ((((((
#line 140
  nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) || 
  nxt == IANA_UDP) {
      *dispatch |= LOWPAN_IPHC_NH_MASK;
    }
  else 
#line 144
    {
      * buf++ = hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt;
    }
  return buf;
}

#line 107
static __inline uint8_t *IPDispatchP__pack_tcfl(uint8_t *buf, struct ip6_hdr *hdr, uint8_t *dispatch)
#line 107
{
  uint32_t flow = ntohl(hdr->ip6_ctlun.ip6_un1.ip6_un1_flow) & 0x000fffff;
  uint8_t tc = (ntohl(hdr->ip6_ctlun.ip6_un1.ip6_un1_flow) >> 20) & 0xff;

#line 110
  if (flow == 0 && tc == 0) {

      *dispatch |= LOWPAN_IPHC_TF_NONE;
    }
  else {
#line 113
    if (flow == 0) {
        *dispatch |= LOWPAN_IPHC_TF_ECN_DSCP;
        *buf = (tc >> 2) & 0xff;
        *buf |= (tc << 6) & 0xff;
        buf++;
      }
    else {
#line 118
      if ((tc & 0x3) == tc) {
          *dispatch |= LOWPAN_IPHC_TF_ECN_FL;
          *buf = (tc << 6) & 0xff;
          *buf |= (flow >> 16) & 0x0f;
          *(buf + 1) = (flow >> 8) & 0xff;
          *(buf + 2) = flow & 0xff;
          buf += 3;
        }
      else 
#line 125
        {
          *dispatch |= LOWPAN_IPHC_TF_ECN_DSCP_FL;
          *buf = (tc >> 2) & 0xff;
          *buf |= (tc << 6) & 0xff;

          *(buf + 1) = (flow >> 16) & 0x0f;
          *(buf + 2) = (flow >> 8) & 0xff;
          *(buf + 3) = flow & 0xff;
          buf += 4;
        }
      }
    }
#line 135
  return buf;
}

#line 363
static inline uint8_t *IPDispatchP__lowpan_pack_headers(struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt)
#line 365
{
  uint8_t *dispatch;
#line 366
  uint8_t temp_dispatch;
#line 366
  uint8_t ctx_match_length;

  if ((packet->ip6_hdr.ip6_ctlun.ip6_un2_vfc & 0xf0) != 0x60) {
      return (void *)0;
    }
#line 383
  dispatch = buf;
  *dispatch = LOWPAN_DISPATCH_BYTE_VAL;
  *(dispatch + 1) = 0;
  buf += 2;

  buf = IPDispatchP__pack_tcfl(buf, & packet->ip6_hdr, dispatch);
  buf = IPDispatchP__pack_nh(buf, & packet->ip6_hdr, dispatch);
  buf = IPDispatchP__pack_hlim(buf, & packet->ip6_hdr, dispatch);


  ctx_match_length = IPDispatchP__lowpan_extern_match_context(& packet->ip6_hdr.ip6_src, &temp_dispatch);
  temp_dispatch = 0;
  buf = IPDispatchP__pack_address(buf, & packet->ip6_hdr.ip6_src, ctx_match_length, 
  & frame->ieee_src, frame->ieee_dstpan, &temp_dispatch);
  *(dispatch + 1) |= temp_dispatch << LOWPAN_IPHC_SAM_SHIFT;

  if (packet->ip6_hdr.ip6_dst.in6_u.u6_addr8[0] != 0xff) {

      ctx_match_length = IPDispatchP__lowpan_extern_match_context(& packet->ip6_hdr.ip6_dst, &temp_dispatch);
      temp_dispatch = 0;
      buf = IPDispatchP__pack_address(buf, & packet->ip6_hdr.ip6_dst, ctx_match_length, 
      & frame->ieee_dst, frame->ieee_dstpan, &temp_dispatch);
      *(dispatch + 1) |= temp_dispatch << LOWPAN_IPHC_DAM_SHIFT;
    }
  else 
#line 406
    {

      buf = IPDispatchP__pack_multicast(buf, & packet->ip6_hdr.ip6_dst, &temp_dispatch);
      *(dispatch + 1) |= (temp_dispatch << LOWPAN_IPHC_DAM_SHIFT) | LOWPAN_IPHC_AM_M;
    }

  return buf;
}

# 105 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static inline int IPDispatchP__lowpan_frag_get(uint8_t *frag, size_t len, 
struct ip6_packet *packet, 
struct ieee154_frame_addr *frame, 
struct lowpan_ctx *ctx)
#line 108
{
  uint8_t *buf;
#line 109
  uint8_t *lowpan_buf;
#line 109
  uint8_t *ieee_buf = frag;
  uint16_t extra_payload;


  buf = lowpan_buf = IPDispatchP__pack_ieee154_header(frag, len, frame);
  if (ctx->offset == 0) {
      int offset = 0;








      buf = IPDispatchP__lowpan_pack_headers(packet, frame, buf, len - (buf - frag));
      if (!buf) {
#line 125
        return -1;
        }

      offset = IPDispatchP__pack_nhc_chain(&buf, len - (buf - ieee_buf), packet);
      if (offset < 0) {
#line 129
        return -2;
        }


      extra_payload = ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) - offset;


      if (extra_payload > len - (buf - ieee_buf)) {
          struct packed_lowmsg lowmsg;

#line 138
          memmove(lowpan_buf + LOWMSG_FRAG1_LEN, 
          lowpan_buf, 
          buf - lowpan_buf);

          lowmsg.data = lowpan_buf;
          lowmsg.len = LOWMSG_FRAG1_LEN;
          lowmsg.headers = 0;
          IPDispatchP__setupHeaders(&lowmsg, LOWMSG_FRAG1_HDR);
          IPDispatchP__setFragDgramSize(&lowmsg, ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ));
          IPDispatchP__setFragDgramTag(&lowmsg, ctx->tag);

          lowpan_buf += LOWMSG_FRAG1_LEN;
          buf += LOWMSG_FRAG1_LEN;

          extra_payload = len - (buf - ieee_buf);
          extra_payload -= extra_payload % 8;
        }


      if (iov_read(packet->ip6_data, offset, extra_payload, buf) != extra_payload) {
          return -3;
        }

      ctx->offset = offset + extra_payload + sizeof(struct ip6_hdr );
      return buf - frag + extra_payload;
    }
  else 
#line 163
    {
      struct packed_lowmsg lowmsg;

#line 165
      buf = lowpan_buf = IPDispatchP__pack_ieee154_header(frag, len, frame);


      lowmsg.data = lowpan_buf;
      lowmsg.len = LOWMSG_FRAGN_LEN;
      lowmsg.headers = 0;
      IPDispatchP__setupHeaders(&lowmsg, LOWMSG_FRAGN_HDR);
      if (IPDispatchP__setFragDgramSize(&lowmsg, ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ))) {
        return -5;
        }
#line 174
      if (IPDispatchP__setFragDgramTag(&lowmsg, ctx->tag)) {
        return -6;
        }
#line 176
      if (IPDispatchP__setFragDgramOffset(&lowmsg, ctx->offset / 8)) {
        return -7;
        }
#line 178
      buf += LOWMSG_FRAGN_LEN;

      extra_payload = ((((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )packet->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff) + sizeof(struct ip6_hdr ) - ctx->offset;
      if (extra_payload > len - (buf - ieee_buf)) {
          extra_payload = len - (buf - ieee_buf);
          extra_payload -= extra_payload % 8;
        }

      if (iov_read(packet->ip6_data, ctx->offset - sizeof(struct ip6_hdr ), extra_payload, buf) != extra_payload) {
          return -4;
        }

      ctx->offset += extra_payload;

      if (extra_payload == 0) {
#line 192
        return 0;
        }
      else {
#line 193
        return lowpan_buf - ieee_buf + LOWMSG_FRAGN_LEN + extra_payload;
        }
    }
}

# 361 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__clear(message_t *msg)
#line 361
{
}

# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(message_t *msg){
#line 70
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 115 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(message_t *msg)
{
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags = 0;
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__clear(msg);
}

# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 141 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(message_t *msg)
{

  /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__clear(msg);
}

# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 238 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__clear(message_t *msg)
{
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->maxRetries = 0;
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__SubPacket__clear(msg);
}

# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 162 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setFramePending(message_t *msg, bool pending)
{
  unsigned char *__nesc_temp45;
  unsigned char *__nesc_temp44;

#line 164
  if (pending) {
    (__nesc_temp44 = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp44, __nesc_ntoh_leuint16(__nesc_temp44) | (1 << IEEE154_FCF_FRAME_PENDING)));
    }
  else {
#line 167
    (__nesc_temp45 = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp45, __nesc_ntoh_leuint16(__nesc_temp45) & ~ (uint16_t )(1 << IEEE154_FCF_FRAME_PENDING)));
    }
}

#line 318
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(message_t *msg)
{
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(msg, FALSE);
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setFramePending(msg, FALSE);
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__clear(msg);
}

# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(message_t *msg){
#line 70
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__clear(msg);
#line 70
}
#line 70
# 181 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(message_t *msg)
{
  /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__clear(msg);
}

# 70 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(message_t *msg){
#line 70
  /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__clear(msg);
#line 70
}
#line 70
# 257 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(message_t *msg)
{
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__clear(msg);
}



static inline void /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(message_t *msg)
{
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__clear(msg);
}

# 65 "/home/bo/tinyos-morten/tos/interfaces/Packet.nc"
inline static void IPDispatchP__BarePacket__clear(message_t * msg){
#line 65
  /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__clear(msg);
#line 65
}
#line 65
# 88 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
static inline /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t */*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__free[sim_node()]) {
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *rval = /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[sim_node()][/*IPDispatchC.FragPool.PoolP*/PoolP__0__index[sim_node()]];

#line 91
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[sim_node()][/*IPDispatchC.FragPool.PoolP*/PoolP__0__index[sim_node()]] = (void *)0;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__free[sim_node()]--;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__index[sim_node()]++;
      if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__index[sim_node()] == 12) {
          /*IPDispatchC.FragPool.PoolP*/PoolP__0__index[sim_node()] = 0;
        }
      sim_log_debug(297U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPDispatchC.FragPool.PoolP*/PoolP__0__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
inline static IPDispatchP__FragPool__t * IPDispatchP__FragPool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
static inline /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t */*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[sim_node()]) {
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *rval = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[sim_node()][/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[sim_node()]];

#line 91
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[sim_node()][/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[sim_node()]] = (void *)0;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[sim_node()]--;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[sim_node()]++;
      if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[sim_node()] == 12) {
          /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[sim_node()] = 0;
        }
      sim_log_debug(301U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
inline static IPDispatchP__SendEntryPool__t * IPDispatchP__SendEntryPool__get(void ){
#line 97
  struct send_entry *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
static inline /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t */*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get(void )
#line 88
{
  if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[sim_node()]) {
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *rval = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[sim_node()][/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[sim_node()]];

#line 91
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[sim_node()][/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[sim_node()]] = (void *)0;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[sim_node()]--;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[sim_node()]++;
      if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[sim_node()] == 3) {
          /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[sim_node()] = 0;
        }
      sim_log_debug(312U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
inline static IPDispatchP__SendInfoPool__t * IPDispatchP__SendInfoPool__get(void ){
#line 97
  struct send_info *__nesc_result;
#line 97

#line 97
  __nesc_result = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 151 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline struct send_info *IPDispatchP__getSendInfo(void )
#line 151
{
  struct send_info *ret = IPDispatchP__SendInfoPool__get();

#line 153
  if (ret == (void *)0) {
#line 153
    return ret;
    }
#line 154
  ret->_refcount = 1;
  ret->upper_data = (void *)0;
  ret->failed = FALSE;
  ret->link_transmissions = 0;
  ret->link_fragments = 0;
  return ret;
}

#line 480
static inline error_t IPDispatchP__IPLower__send(struct ieee154_frame_addr *frame_addr, 
struct ip6_packet *msg, 
void *data)
#line 482
{
  struct lowpan_ctx ctx;
  struct send_info *s_info;
  struct send_entry *s_entry;
  message_t *outgoing;

  int frag_len = 1;
  error_t rc = SUCCESS;

  if (IPDispatchP__state[sim_node()] != IPDispatchP__S_RUNNING) {
      return EOFF;
    }


  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc &= ~0xf0;
  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc |= 0x60;

  ctx.tag = IPDispatchP__current_local_label[sim_node()]++;
  ctx.offset = 0;

  s_info = IPDispatchP__getSendInfo();
  if (s_info == (void *)0) {
      rc = ERETRY;
      goto cleanup_outer;
    }
  s_info->upper_data = data;

  while (frag_len > 0) {
      s_entry = IPDispatchP__SendEntryPool__get();
      outgoing = IPDispatchP__FragPool__get();

      if (s_entry == (void *)0 || outgoing == (void *)0) {
          if (s_entry != (void *)0) {
            IPDispatchP__SendEntryPool__put(s_entry);
            }
#line 516
          if (outgoing != (void *)0) {
            IPDispatchP__FragPool__put(outgoing);
            }

          s_info->failed = TRUE;
          sim_log_debug(289U, "IPDispatch", "drops: IP send: no fragments\n");
          rc = ERETRY;
          goto done;
        }

      IPDispatchP__BarePacket__clear(outgoing);
      frag_len = IPDispatchP__lowpan_frag_get(IPDispatchP__Ieee154Send__getPayload(outgoing, 0), 
      IPDispatchP__BarePacket__maxPayloadLength(), 
      msg, 
      frame_addr, 
      &ctx);
      if (frag_len < 0) {
          sim_log_debug(290U, "IPDispatch", " get frag error: %i\n", frag_len);
        }


      IPDispatchP__BarePacket__setPayloadLength(outgoing, frag_len);

      if (frag_len <= 0) {
          IPDispatchP__FragPool__put(outgoing);
          IPDispatchP__SendEntryPool__put(s_entry);
          goto done;
        }

      if (IPDispatchP__SendQueue__enqueue(s_entry) != SUCCESS) {
          ;
          s_info->failed = TRUE;
          sim_log_debug(291U, "IPDispatch", "drops: IP send: enqueue failed\n");
          goto done;
        }

      s_info->link_fragments++;
      s_entry->msg = outgoing;
      s_entry->info = s_info;
      s_entry->frame_addr = frame_addr;


      if (frame_addr->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT && 
      frame_addr->ieee_dst.ieee_addr.saddr == IEEE154_BROADCAST_ADDR) {
          IPDispatchP__PacketLink__setRetries(s_entry->msg, 0);
        }
      else 
#line 561
        {
          IPDispatchP__PacketLink__setRetries(s_entry->msg, 3);
        }
      IPDispatchP__PacketLink__setRetryDelay(s_entry->msg, 103);

      s_info->_refcount++;
    }

  done: 
    ;
  IPDispatchP__SENDINFO_DECR(s_info);
  IPDispatchP__sendTask__postTask();
  cleanup_outer: 
    return rc;
}

# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPLower.nc"
inline static error_t IPNeighborDiscoveryP__IPLower__send(struct ieee154_frame_addr *next_hop, struct ip6_packet *msg, void *data){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = IPDispatchP__IPLower__send(next_hop, msg, data);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 65 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline int IPDispatchP__iid_eui_cmp(uint8_t *iid, uint8_t *eui)
#line 65
{
  return iid[0] == (eui[7] ^ 0x2) && 
  iid[1] == eui[6] && 
  iid[2] == eui[5] && 
  iid[3] == eui[4] && 
  iid[4] == eui[3] && 
  iid[5] == eui[2] && 
  iid[6] == eui[1] && 
  iid[7] == eui[0];
}

# 103 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[sim_node()] >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[sim_node()] + /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[sim_node()];

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[sim_node()][emptyIndex] = newVal;
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[sim_node()]++;
      sim_log_debug(313U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[sim_node()]);
      return SUCCESS;
    }
}

# 89 "/home/bo/tinyos-morten/tos/interfaces/Pool.nc"
inline static error_t IPDispatchP__SendInfoPool__put(IPDispatchP__SendInfoPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 61 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static inline uint8_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__maxSize(void )
#line 61
{
  return 5;
}

# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(9U, dt);
#line 64
}
#line 64
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(8U, dt);
#line 64
}
#line 64
# 164 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].isrunning = FALSE;
}

# 78 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
# 372 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__resetTrickleTime(void )
#line 372
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop();
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[sim_node()] = 2 << (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin[sim_node()] - 1);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter[sim_node()] = 0;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter[sim_node()] = 0;
}

# 46 "/home/bo/tinyos-morten/tos/interfaces/Random.nc"
inline static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__Random__rand32(void ){
#line 46
  unsigned int __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 91 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRank.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__inconsistencyDetected(void ){
#line 91
  RPLRankP__RPLRankInfo__inconsistencyDetected();
#line 91
}
#line 91
# 349 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected(void )
#line 349
{

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__INCONSISTENCY_COUNT[sim_node()]++;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__inconsistencyDetected();


  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
}

#line 409
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency(void )
#line 409
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected();
}

# 56 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void RPLOF0P__RPLRoute__inconsistency(void ){
#line 56
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency();
#line 56
}
#line 56
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static route_key_t RPLOF0P__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, struct in6_addr *next_hop, uint8_t ifindex){
#line 10
  int __nesc_result;
#line 10

#line 10
  __nesc_result = IPForwardingEngineP__ForwardingTable__addRoute(prefix, prefix_len_bits, next_hop, ifindex);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 62 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline struct route_entry *IPForwardingEngineP__alloc_entry(int pfxlen)
#line 62
{
  int i;

  if (IPForwardingEngineP__routing_table[sim_node()][ROUTE_TABLE_SZ - 1].valid) {
#line 65
    return (void *)0;
    }
  for (i = 0; i < ROUTE_TABLE_SZ; i++) {


      if (! IPForwardingEngineP__routing_table[sim_node()][i].valid) {
#line 70
        goto init_entry;
        }
      else {
        if (IPForwardingEngineP__routing_table[sim_node()][i].prefixlen >= pfxlen) {
#line 73
          continue;
          }
        }


      memmove((void *)&IPForwardingEngineP__routing_table[sim_node()][i + 1], (void *)&IPForwardingEngineP__routing_table[sim_node()][i], 
      sizeof(struct route_entry ) * (ROUTE_TABLE_SZ - i - 1));
      goto init_entry;
    }
  return (void *)0;
  init_entry: 
    IPForwardingEngineP__routing_table[sim_node()][i].valid = 1;
  IPForwardingEngineP__routing_table[sim_node()][i].key = ++IPForwardingEngineP__last_key[sim_node()];
  return &IPForwardingEngineP__routing_table[sim_node()][i];
}

# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(8U, dt);
#line 73
}
#line 73





inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(8U);
#line 78
}
#line 78
# 391 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__newParent(void )
#line 391
{
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[sim_node()] = 1024;
#line 392
  ;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_double_count[sim_node()] = 0;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__stop();
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[sim_node()]);
}

# 42 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngine.nc"
inline static void RPLOF0P__RPLDAO__newParent(void ){
#line 42
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__newParent();
#line 42
}
#line 42
# 159 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline parent_t *RPLRankP__RPLParentTable__get(uint8_t i)
#line 159
{
  return &RPLRankP__parentSet[sim_node()][i];
}

# 2 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLParentTable.nc"
inline static parent_t *RPLOF0P__ParentTable__get(uint8_t parent_index){
#line 2
  struct __nesc_unnamed4371 *__nesc_result;
#line 2

#line 2
  __nesc_result = RPLRankP__RPLParentTable__get(parent_index);
#line 2

#line 2
  return __nesc_result;
#line 2
}
#line 2
# 61 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static inline bool RPLOF0P__RPLOF__recalcualateRank(void )
#line 61
{
  uint16_t prevEtx;
#line 62
  uint16_t prevRank;
  parent_t *parentNode = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent[sim_node()]);

  if (RPLOF0P__desiredParent[sim_node()] == 20) {
      RPLOF0P__nodeRank[sim_node()] = INFINITE_RANK;
      return FALSE;
    }

  prevEtx = RPLOF0P__nodeEtx[sim_node()];
  prevRank = RPLOF0P__nodeRank[sim_node()];


  RPLOF0P__nodeEtx[sim_node()] = parentNode->etx_hop;
  RPLOF0P__nodeRank[sim_node()] = parentNode->rank + RPLOF0P__min_hop_rank_inc[sim_node()];

  if (RPLOF0P__nodeRank[sim_node()] < RPLOF0P__min_hop_rank_inc[sim_node()]) {
    RPLOF0P__nodeRank[sim_node()] = INFINITE_RANK;
    }
  if (RPLOF0P__newParent[sim_node()]) {
      RPLOF0P__newParent[sim_node()] = FALSE;
      return TRUE;
    }
  else 
#line 83
    {
      return FALSE;
    }
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static bool RPLRankP__RPLOF__recalcualateRank(void ){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = RPLOF0P__RPLOF__recalcualateRank();
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 57 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static inline uint16_t RPLOF0P__RPLOF__getRank(void )
#line 57
{
  return RPLOF0P__nodeRank[sim_node()];
}

# 14 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static uint16_t RPLRankP__RPLOF__getRank(void ){
#line 14
  unsigned short __nesc_result;
#line 14

#line 14
  __nesc_result = RPLOF0P__RPLOF__getRank();
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t RPLRankP__newParentSearch__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(RPLRankP__newParentSearch);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 357 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__evictAll(void )
#line 357
{
  uint8_t indexset;
#line 358
  uint8_t myParent;

  myParent = RPLRankP__getParent(RPLRankP__RPLOF__getParent());

  for (indexset = 0; indexset < 20; indexset++) {
      if (RPLRankP__parentSet[sim_node()][indexset].valid && RPLRankP__parentSet[sim_node()][indexset].rank >= RPLRankP__nodeRank[sim_node()]) {
          RPLRankP__parentSet[sim_node()][indexset].valid = FALSE;
          RPLRankP__parentNum[sim_node()]--;
          ;
#line 366
          ;
          if (indexset == myParent) {

              RPLRankP__newParentSearch__postTask();
              return;
            }
        }
    }
}

# 175 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.data, dsn);
}

# 125 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void TossimRadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 126 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void TossimRadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  TossimRadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  TossimRadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 105 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void TossimRadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack){
#line 105
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(msg, ack);
#line 105
}
#line 105
# 88 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void TossimRadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack)
{
  TossimRadioP__Ieee154PacketLayer__setAckRequired(msg, ack);
}

# 49 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack){
#line 49
  TossimRadioP__SoftwareAckConfig__setAckRequired(msg, ack);
#line 49
}
#line 49
# 182 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg)
{
  /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(msg, TRUE);

  return SUCCESS;
}

# 59 "/home/bo/tinyos-morten/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 145 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline error_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(message_t *msg)
{
  if (/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] != /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY) {
    return EBUSY;
    }

  if (/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(msg) > 0) {
    /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketAcknowledgements__requestAck(msg);
    }
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[sim_node()] = msg;
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries[sim_node()] = 0;
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[sim_node()] = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_SENDING;
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
  sim_log_debug(135U, "Bo-PLink", "PLink:Send @ %s.\n", sim_time_string());
  return SUCCESS;
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 90 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__timeInMs(void )
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

# 73 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__clear(message_t *msg){
#line 55
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
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

# 99 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg){
#line 99
  unsigned char __nesc_result;
#line 99

#line 99
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg);
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
#line 141
inline static uint16_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 257 "/usr/lib/ncc/nesc_nx.h"
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

# 483 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg)
#line 483
{
  free(msg);
}

# 312 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__shouldAck(message_t *msg)
#line 312
{





  sim_log_debug(198U, "Driver.debug", "Driver: never ACK messages\n");
  return FALSE;
}

# 61 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC__Model__shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 200 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.data);
}

# 151 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 356 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[sim_node()] >= /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[sim_node()] + /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[sim_node()];

#line 367
          if (idx >= /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[sim_node()][idx];
          /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[sim_node()][idx] = msg;

          ++/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[sim_node()];
          /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 376
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP__flags[sim_node()][idx] |= 1 << bit;
}

# 51 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 136 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void TossimRadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  TossimRadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[sim_node()][idx] & (1 << bit);
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 170 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.data);
}

# 120 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t TossimRadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 121 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint8_t TossimRadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return TossimRadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = TossimRadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 151 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t TossimRadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 131 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline am_addr_t TossimRadioP__UniqueConfig__getSender(message_t *msg)
{
  return TossimRadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = TossimRadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 118 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 118
{
}

# 80 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 80
}
#line 80
# 94 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[sim_node()][NeighborhoodP__last[sim_node()]] == node) 
    {
      if (NeighborhoodP__ages[sim_node()][NeighborhoodP__last[sim_node()]] == NeighborhoodP__time[sim_node()]) {
        return NeighborhoodP__last[sim_node()];
        }
      NeighborhoodP__ages[sim_node()][NeighborhoodP__last[sim_node()]] = ++NeighborhoodP__time[sim_node()];
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

          if (NeighborhoodP__nodes[sim_node()][i] == node) 
            {
              NeighborhoodP__last[sim_node()] = i;
              if (NeighborhoodP__ages[sim_node()][i] == NeighborhoodP__time[sim_node()]) {
                return i;
                }
              NeighborhoodP__ages[sim_node()][i] = ++NeighborhoodP__time[sim_node()];
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time[sim_node()] - NeighborhoodP__ages[sim_node()][i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last[sim_node()] = oldest;
          NeighborhoodP__nodes[sim_node()][oldest] = node;
          NeighborhoodP__ages[sim_node()][oldest] = ++NeighborhoodP__time[sim_node()];
          NeighborhoodP__flags[sim_node()][oldest] = 0;
        }
    }

  if ((NeighborhoodP__time[sim_node()] & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[sim_node()][i] | 0x7F) != NeighborhoodP__time[sim_node()]) {
            NeighborhoodP__ages[sim_node()][i] = NeighborhoodP__time[sim_node()] & 0x80;
            }
        }
    }
  return NeighborhoodP__last[sim_node()];
}

# 71 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 95 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[sim_node()][idx];

      if (diff == 0) 
        {
          /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[sim_node()][idx] = dsn;
  sim_log_debug(133U, "Bo-Unique", "Unique:Receive @ %s.\n", sim_time_string());
  return /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 65 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 168 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool TossimRadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 65 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size TossimRadioP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 263 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t TossimRadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t t;


  t = TossimRadioP__RadioAlarm__getNow();


  if (TossimRadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    t += (uint16_t )(32 * (-5 + 16 + 11 + 5) * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
    }
  else {
#line 274
    t += (uint16_t )(32 * (-5 + 5) * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
    }
  return t;
}

# 57 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = TossimRadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 170 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier[sim_node()] = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier[sim_node()] - /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();
  sim_log_debug(168U, "Bo-Collision", "Collision:Receive @ %s.\n", sim_time_string());
  if (delay > 0) 
    {
      if (/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] == /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] |= /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
#line 191
  return /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 127 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

#line 130
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(ack, /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.data, /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.data, __nesc_ntoh_leuint8(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.data));
}

# 88 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void TossimRadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack){
#line 88
  /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(data, ack);
#line 88
}
#line 88
# 98 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void TossimRadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  TossimRadioP__Ieee154PacketLayer__createAckReply(data, ack);
}

# 80 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack){
#line 80
  TossimRadioP__SoftwareAckConfig__createAckPacket(data, ack);
#line 80
}
#line 80
# 93 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool TossimRadioP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return TossimRadioP__Ieee154PacketLayer__requiresAckReply(msg);
}

# 75 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = TossimRadioP__SoftwareAckConfig__requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error){
#line 56
  /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 66 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}








static inline void /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(uint8_t bit, message_t *msg, bool value)
{
  if (value) {
    /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(bit, msg);
    }
  else {
#line 85
    /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(bit, msg);
    }
}

# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__setValue(message_t *msg, bool value){
#line 45
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(0U, msg, value);
#line 45
}
#line 45
# 119 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id)
#line 119
{

  if (id == /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()]) {
      sim_log_debug(109U, "RadioAlarm.debug", "RadioAlarm: cancelling alarm for client %hhu\n", id);
      /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__currentEvent[sim_node()]->cancelled = TRUE;
      /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()] = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__NO_CLIENT;
    }
  else 
#line 125
    {
      sim_log_error(110U, "RadioAlarm.error", "RadioAlarm: cannot cancel alarm for client %hhu\n", id);
    }
}

# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void ){
#line 55
  /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(2U);
#line 55
}
#line 55
# 116 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data) & /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 75 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool TossimRadioP__Ieee154PacketLayer__isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 78 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool TossimRadioP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return TossimRadioP__Ieee154PacketLayer__isAckFrame(msg);
}

# 62 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = TossimRadioP__SoftwareAckConfig__isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 146 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline message_t */*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg)
{
  bool ack = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg);

#line 149
  sim_log_debug(174U, "Bo-SoftwareAck", "SoftwareAck:Receive @ %s.\n", sim_time_string());
  for (; 0; ) ;

  if (/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] == /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT) 
    {
      for (; 0; ) ;

      /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel();
      /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__setValue(/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[sim_node()], ack);

      /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
      /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
    }

  if (ack) {
    return msg;
    }
  if (/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(msg)) 
    {
      /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(msg, &/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg[sim_node()]);


      if (/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(&/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg[sim_node()]) == SUCCESS) {
        /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND;
        }
      else {
#line 174
        for (; 0; ) ;
        }
    }
  return /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(msg);
}

# 53 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 316 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 321
    notFull = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[sim_node()] < /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 321
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 87 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 165 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 136 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.data) == __nesc_ntoh_leuint8(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.data)
   && (__nesc_ntoh_leuint16(header->fcf.data) & /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 94 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool TossimRadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 83 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool TossimRadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return TossimRadioP__Ieee154PacketLayer__verifyAckReply(data, ack);
}

# 69 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = TossimRadioP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 138 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg)
{
  if (/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) {
    return /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] == /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT && /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[sim_node()], msg);
    }
  else {
#line 143
    return /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(msg);
    }
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 63 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 61 "/home/bo/tinyos-morten/tos/lib/timer/LocalTime.nc"
inline static uint32_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__LocalTime__get(void ){
#line 61
  unsigned int __nesc_result;
#line 61

#line 61
  __nesc_result = /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 82 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "/home/bo/tinyos-morten/tos/interfaces/PacketTimeStamp.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeStamp__set(message_t * msg, /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeStamp__size_type value){
#line 78
  /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__set(message_t *msg){
#line 50
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 50
}
#line 50
# 258 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__receive(message_t *msg)
#line 258
{






  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()] && !/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting[sim_node()]) {


      memcpy(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()], msg, sizeof(message_t ));

      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__set(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()]);
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeStamp__set(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()], /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__LocalTime__get());

      if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__isDataFrame(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()])) {
          sim_log_debug(192U, "Driver.debug", "Driver: receiving packet from %hu @ %s\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getSrcAddr(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()]), sim_time_string());
        }
      else 
#line 275
        {
          sim_log_debug(193U, "Driver.debug", "Driver: receiving ACK @ %s\n", sim_time_string());
        }
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__dbg_message(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()]);

      if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioReceive__header(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()])) {
          /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()] = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioReceive__receive(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[sim_node()]);
        }
    }
  else {

      if (!/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()]) {
          sim_log_debug(194U, "Driver.debug", "Driver: discarding packet from %hu as radio is OFF\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getSrcAddr(msg));
        }
      else {
#line 288
        if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting[sim_node()]) {
            sim_log_debug(195U, "Driver.debug", "Driver: discarding packet from %hu as we are TRANSMITTING\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getSrcAddr(msg));
          }
        else 
#line 290
          {
            sim_log_debug(196U, "Driver.debug", "Driver: discarding packet from %hu due to TOSSIM hardware addr recognition\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getSrcAddr(msg));
          }
        }
    }
}

# 60 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__receive(message_t *msg){
#line 60
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__receive(msg);
#line 60
}
#line 60
# 260 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg)
#line 260
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];

#line 263
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC__shouldReceive(msg->power - noise);
}

#line 296
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt)
#line 296
{
  CpmModelC__receive_message_t *mine = (CpmModelC__receive_message_t *)evt->data;
  CpmModelC__receive_message_t *predecessor = (void *)0;
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];

  sim_log_debug(214U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
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
    if (mine == CpmModelC__outstandingReceptionHead[sim_node()]) {
        CpmModelC__outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(215U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 317
  sim_log_debug(216U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC__checkReceive(mine)) {
      sim_log_debug(217U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 327
      __nesc_hton_int8(meta->strength.data, mine->strength);

      sim_log_debug_clear(218U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC__Model__receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(219U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(220U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
          sim_log_debug_clear(221U, "CpmModelC", " scheduling ack.\n");
          CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC__free_receive_message(mine);
        }

      CpmModelC__receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(222U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
              sim_log_debug_clear(223U, "CpmModelC", " scheduling ack.\n");
              CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC__free_receive_message(mine);
            }
        }
      else {
          CpmModelC__free_receive_message(mine);
        }
      CpmModelC__receiving[sim_node()] = 0;
      sim_log_debug_clear(224U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 467
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg)
#line 467
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 469
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC__sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void )
#line 479
{
  return (CpmModelC__receive_message_t *)malloc(sizeof(CpmModelC__receive_message_t ));
}

#line 369
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 369
{
  sim_event_t *evt;
  CpmModelC__receive_message_t *list;
  CpmModelC__receive_message_t *rcv = CpmModelC__allocate_receive_message();
  double noiseStr = CpmModelC__packetNoise(rcv);

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
      sim_log_debug(225U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 396
    if (!CpmModelC__shouldReceive(power - noiseStr)) {
        sim_log_debug(226U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 400
      if (CpmModelC__receiving[sim_node()]) {
          sim_log_debug(227U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 404
        if (CpmModelC__transmitting[sim_node()] && rcv->start < CpmModelC__transmissionEndTime[sim_node()] && CpmModelC__transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(228U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC__transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC__receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 412
  list = CpmModelC__outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC__shouldReceive(list->power - rcv->power)) {
          sim_log_debug(229U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC__outstandingReceptionHead[sim_node()];
  CpmModelC__outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC__allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 428
{
  int prevNode = sim_node();

#line 430
  sim_log_debug(230U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC__enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 436
{
  CpmModelC__receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 439
  CpmModelC__requestAck[sim_node()] = ack;
  CpmModelC__outgoing[sim_node()] = msg;
  CpmModelC__transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(231U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 446
      CpmModelC__sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC__outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(232U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC__Model__putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 407 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__isSet(message_t *msg)
#line 407
{
  return /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__TimeSyncFlag__get(msg);
}

# 108 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/CsmaLayerP.nc"
static inline void /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[sim_node()] = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__STATE_READY;
  /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__RadioSend__sendDone(error);
  sim_log_debug(176U, "Bo-Csma", "Csma:SendDone @ %s.\n", sim_time_string());
}

# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 169 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmit_done(sim_event_t *evt)
#line 169
{
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()] = (void *)0;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting[sim_node()] = FALSE;
  sim_log_debug(184U, "Driver.debug", "Driver: Transmission DONE @ %s\n", sim_time_string());
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioSend__sendDone(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()] ? SUCCESS : EOFF);
}

static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmit_start(sim_event_t *evt)
#line 176
{
  sim_time_t duration;

  duration = 8 * __nesc_ntoh_uint8(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__getHeader(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()])->length.data);
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getAckRequired(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()])) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmit_done;

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__isDataFrame(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()])) {
      sim_log_debug(185U, "Driver.debug", "Driver: Transmitting packet to %hu with ACK? %hhu\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getDestAddr(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()]), /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getAckRequired(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()]));
    }
  else 
#line 193
    {
      sim_log_debug(186U, "Driver.debug", "Driver: Transmitting ACK to %hu @ %s\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getDestAddr(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()]), sim_time_string());
    }

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__isSet(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()])) {
      void *timesync = (void *)/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()] + /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__get(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()]);

#line 199
      sim_log_debug(187U, "Driver.trace", "Driver: Updateing event time based on offset %hhu\n", /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__get(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()]));
      __nesc_hton_int32((* (timesync_relative_t *)timesync).data, __nesc_ntoh_uint32((* (timesync_absolute_t *)timesync).data) - /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__LocalTime__get());
    }

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__putOnAirTo(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getDestAddr(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()]), /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()], /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Ieee154PacketLayer__getAckRequired(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()]), evt->time, 0.0, 0.0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(188U, "Driver.debug", "Driver: Transmission time %llu us...\n", duration * 1000000ULL / sim_ticks_per_sec());


  sim_queue_insert(evt);
}

# 210 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg)
{
  return /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) != 0xFFFF;
}

# 162 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool TossimRadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 73 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool TossimRadioP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return TossimRadioP__Ieee154PacketLayer__requiresAckWait(msg);
}

# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = TossimRadioP__SoftwareAckConfig__requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 45 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(2U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45





inline static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(2U, timeout);
#line 50
}
#line 50
# 58 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline sim_time_t /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__clock_to_sim(sim_time_t t)
#line 58
{
  t *= sim_ticks_per_sec();
  t /= /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__TICKS_PER_SECOND;
  return t;
}

# 112 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void TossimRadioP__SoftwareAckConfig__reportChannelError(void )
{
}

# 86 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void ){
#line 86
  TossimRadioP__SoftwareAckConfig__reportChannelError();
#line 86
}
#line 86
# 128 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError();

  /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
  /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
}

# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 256 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t TossimRadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
}

# 46 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = TossimRadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg){
#line 55
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 78 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg)
{
  error_t error;

#line 81
  sim_log_debug(169U, "Bo-SoftwareAck", "SoftwareAck:Send @ %s.\n", sim_time_string());
  if (/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] == /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) 
    {
      if ((error = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(msg)) == SUCCESS) 
        {
          /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(msg);
          /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_DATA_SEND;
          /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[sim_node()] = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 48 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 256 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] == /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 63 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 63
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 111 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier[sim_node()] - /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] == /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 127
    if (/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] & /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 130
      error = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg[sim_node()]);
      }
    }
#line 132
  if (error != SUCCESS) 
    {
      if ((/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] & ~/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] = (/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] & /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg[sim_node()])));
        }
      else 
        {
          if (/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] & /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 279 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline void TossimRadioP__RadioAlarm__fired(void )
{
}

# 155 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
#line 155
{
}

# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x409088b0){
#line 60
  switch (arg_0x409088b0) {
#line 60
    case 0U:
#line 60
      TossimRadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 2U:
#line 60
      /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x409088b0);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 81 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm_fired(sim_event_t *evt)
#line 81
{
  if (! evt->cancelled) {
      uint8_t temp = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()];

#line 84
      sim_log_debug(105U, "RadioAlarm.debug", "RadioAlarm: fired for client %hhu\n", /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()]);
      /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()] = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__NO_CLIENT;
      /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(temp);
    }
  else 
#line 87
    {
      sim_log_debug(106U, "RadioAlarm.debug", "RadioAlarm: event cancelled\n");
    }
}

#line 64
static inline sim_time_t /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__sim_to_clock(sim_time_t t)
#line 64
{
  t *= /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__TICKS_PER_SECOND;
  t /= sim_ticks_per_sec();
  return t;
}

# 63 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool TossimRadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 185 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline bool TossimRadioP__CsmaConfig__requiresSoftwareCCA(message_t *msg)
{
  return TossimRadioP__Ieee154PacketLayer__isDataFrame(msg);
}

# 41 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/CsmaConfig.nc"
inline static bool /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__Config__requiresSoftwareCCA(message_t *msg){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = TossimRadioP__CsmaConfig__requiresSoftwareCCA(msg);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 333 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioCCA__request(void )
#line 333
{
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__ccaDoneTask__postTask();
  return SUCCESS;
}

# 44 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioCCA.nc"
inline static error_t /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubCCA__request(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioCCA__request();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 238 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t TossimRadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
}

# 51 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = TossimRadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 107 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimRadioP.nc"
static inline uint16_t TossimRadioP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(1000 * (1024ULL * 1024ULL) / (1000ULL * 1000ULL));
}

# 43 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = TossimRadioP__SoftwareAckConfig__getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 64 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static inline sim_time_t /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__sim_to_clock(sim_time_t t)
#line 64
{
  t *= /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__TICKS_PER_SECOND;
  t /= sim_ticks_per_sec();
  return t;
}

# 230 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__prr_estimate_from_snr(double SNR)
#line 230
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 239
  sim_log_debug(213U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
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

# 40 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(3U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 297 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__acked(message_t *msg)
#line 297
{









  sim_log_error(197U, "Driver.error", "Driver: should never receive ACKs\n");
}

# 59 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__acked(message_t *msg){
#line 59
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__acked(msg);
#line 59
}
#line 59
# 151 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__arr_estimate_from_snr(double SNR)
#line 151
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 157
  sim_log_debug(210U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
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

static inline int CpmModelC__shouldAckReceive(double snr)
#line 166
{
  double prr = CpmModelC__arr_estimate_from_snr(snr);
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

static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt)
#line 178
{






  if (
#line 184
  CpmModelC__requestAck[sim_node()] && 
  CpmModelC__outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC__receive_message_t *rcv = (CpmModelC__receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC__packetNoise(rcv);
      double snr = power - noise;

#line 191
      if (CpmModelC__shouldAckReceive(snr)) {
          CpmModelC__Model__acked(CpmModelC__outgoing[sim_node()]);
        }
    }
  CpmModelC__free_receive_message((CpmModelC__receive_message_t *)evt->data);
}

#line 459
static inline void CpmModelC__Model__setPendingTransmission(void )
#line 459
{
  CpmModelC__transmitting[sim_node()] = TRUE;
  sim_log_debug(233U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC__transmitting[sim_node()], sim_time_string());
}

# 57 "/home/bo/tinyos-morten/tos/lib/tossim/GainRadioModel.nc"
inline static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__setPendingTransmission(void ){
#line 57
  CpmModelC__Model__setPendingTransmission();
#line 57
}
#line 57
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 255 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_4944.c"
static __inline uint8_t IPDispatchP__getFragDgramSize(struct packed_lowmsg *msg, uint16_t *size)
#line 255
{
  uint8_t *buf = msg->data;
  uint8_t s[2];

#line 258
  if (buf == (void *)0 || size == (void *)0) {
#line 258
    return 1;
    }



  if (*buf >> 3 != LOWPAN_FRAG1_PATTERN && 
  *buf >> 3 != LOWPAN_FRAGN_PATTERN) {
#line 264
    return 1;
    }
  s[0] = *buf & 0x7;
  buf++;
  s[1] = *buf;
  *size = ((uint16_t )s[0] << 8) | s[1];
  return 0;
}

# 574 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static inline uint8_t *IPDispatchP__unpack_udp(uint8_t *dest, uint8_t *nxt_hdr, uint8_t *buf)
#line 574
{
  struct udp_hdr *udp = (struct udp_hdr *)dest;
  uint8_t dispatch = * buf++;

  *nxt_hdr = IANA_UDP;


  udp->len = 0;

  udp->chksum = 0;


  switch (dispatch & LOWPAN_NHC_UDP_PORT_MASK) {
      case LOWPAN_NHC_UDP_PORT_FULL: 
        udp->srcport = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((buf[2] << 8) | buf[3]) << 8) | ((uint16_t )((buf[2] << 8) | buf[3]) >> 8)) & 0xffff;
      buf += 4;
      break;
      case LOWPAN_NHC_UDP_PORT_SRC_FULL: 
        udp->srcport = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((0xF0 << 8) | buf[2]) << 8) | ((uint16_t )((0xF0 << 8) | buf[2]) >> 8)) & 0xffff;
      buf += 3;
      break;
      case LOWPAN_NHC_UDP_PORT_DST_FULL: 
        udp->srcport = (((uint16_t )((0xF0 << 8) | buf[0]) << 8) | ((uint16_t )((0xF0 << 8) | buf[0]) >> 8)) & 0xffff;
      udp->dstport = (((uint16_t )((buf[1] << 8) | buf[2]) << 8) | ((uint16_t )((buf[1] << 8) | buf[2]) >> 8)) & 0xffff;
      buf += 3;
      break;
      case LOWPAN_NHC_UDP_PORT_SHORT: 
        udp->srcport = (((uint16_t )(0xF0B0 | (buf[0] >> 4)) << 8) | ((uint16_t )(0xF0B0 | (buf[0] >> 4)) >> 8)) & 0xffff;
      udp->dstport = 0xF0B0 | (buf[0] & 0xf);
      udp->dstport = (((uint16_t )udp->dstport << 8) | ((uint16_t )udp->dstport >> 8)) & 0xffff;
      buf += 1;
      break;
    }

  if (!(dispatch & LOWPAN_NHC_UDP_CKSUM)) {
      udp->chksum = (((uint16_t )((buf[0] << 8) | buf[1]) << 8) | ((uint16_t )((buf[0] << 8) | buf[1]) >> 8)) & 0xffff;
      buf += 2;
    }

  return buf;
}

#line 631
static inline uint8_t *IPDispatchP__unpack_ipnh(uint8_t *dest, size_t cnt, uint8_t *nxt_hdr, uint8_t *buf)
#line 631
{
  if ((*buf & LOWPAN_NHC_IPV6_MASK) == LOWPAN_NHC_IPV6_PATTERN) {
      struct ip6_ext *ext = (struct ip6_ext *)dest;
      uint8_t length;



      switch (*buf & LOWPAN_NHC_EID_MASK) {
          case LOWPAN_NHC_EID_HOP: 
            *nxt_hdr = IPV6_HOP;
#line 640
          break;
          case LOWPAN_NHC_EID_ROUTING: 
            *nxt_hdr = IPV6_ROUTING;
#line 642
          break;
          case LOWPAN_NHC_EID_FRAG: 
            *nxt_hdr = IPV6_FRAG;
#line 644
          break;
          case LOWPAN_NHC_EID_DEST: 
            *nxt_hdr = IPV6_DEST;
#line 646
          break;
          case LOWPAN_NHC_EID_MOBILE: 
            *nxt_hdr = IPV6_MOBILITY;
#line 648
          break;
          case LOWPAN_NHC_EID_IPV6: 

            *nxt_hdr = IPV6_IPV6;
#line 651
          break;
          default: 
            return (void *)0;
        }


      if (!(*buf & LOWPAN_NHC_NH)) {
          buf++;
          ext->ip6e_nxt = *buf;
        }
      buf += 1;
      length = * buf++;

      if (cnt < length - 2) {
        return (void *)0;
        }

      ip_memcpy((uint8_t *)dest + 2, (uint8_t *)buf, length - 2);
      ext->ip6e_len = length;

      return buf + length - 2;
    }
  else {
#line 672
    if ((*buf & LOWPAN_NHC_UDP_MASK) == LOWPAN_NHC_UDP_PATTERN) {

        return IPDispatchP__unpack_udp(dest, nxt_hdr, buf);
      }
    }
#line 676
  return (void *)0;
}

static inline uint8_t *IPDispatchP__unpack_nhc_chain(struct lowpan_reconstruct *recon, 
uint8_t **dest, size_t cnt, 
uint8_t *nxt_hdr, uint8_t *buf)
#line 681
{
  uint8_t *dispatch;
  int has_nhc = 1;

  do {
      recon->r_transport_header = *dest;
      dispatch = buf;
      buf = IPDispatchP__unpack_ipnh(*dest, cnt, nxt_hdr, buf);

      if (!buf) {
#line 690
        return (void *)0;
        }
      if ((*dispatch & LOWPAN_NHC_IPV6_MASK) == LOWPAN_NHC_IPV6_PATTERN) {
          struct ip6_ext *ext = (struct ip6_ext *)*dest;

          *dest += ext->ip6e_len;
          cnt -= ext->ip6e_len;

          if (*dispatch & LOWPAN_NHC_NH && ext->ip6e_len > 0) {
              nxt_hdr = & ext->ip6e_nxt;
            }
          else 
#line 700
            {
              has_nhc = 0;
            }
        }
      else {
#line 703
        if ((*dispatch & LOWPAN_NHC_UDP_MASK) == LOWPAN_NHC_UDP_PATTERN) {
            struct udp_hdr *udp = (struct udp_hdr *)*dest;

#line 705
            recon->r_app_len = & udp->len;
            has_nhc = 0;
            *dest += sizeof(struct udp_hdr );
          }
        else 
#line 708
          {
#line 708
            has_nhc = 0;
          }
        }
    }
  while (
#line 709
  has_nhc);
  return buf;
}

#line 542
static inline uint8_t *IPDispatchP__unpack_multicast(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf)
#line 543
{
  memset(addr->in6_u.u6_addr8, 0, 16);

  if (!(dispatch & LOWPAN_IPHC_AC_CONTEXT)) {
      int amount;

#line 548
      switch (dispatch & LOWPAN_IPHC_AM_MASK) {
          case LOWPAN_IPHC_AM_M_128: 
            ip_memcpy((uint8_t *)addr->in6_u.u6_addr8, (uint8_t *)buf, 16);
          return buf + 16;
          case LOWPAN_IPHC_AM_M_48: 
            amount = 5;
          goto copy;
          case LOWPAN_IPHC_AM_M_32: 
            amount = 3;
          copy: 
            addr->in6_u.u6_addr8[0] = 0xff;
          addr->in6_u.u6_addr8[1] = buf[0];
          ip_memcpy((uint8_t *)&addr->in6_u.u6_addr8[16 - amount], (uint8_t *)buf + 1, amount);
          return buf + 1 + amount;
          case LOWPAN_IPHC_AM_M_8: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xff02 << 8) | ((uint16_t )0xff02 >> 8)) & 0xffff;
          addr->in6_u.u6_addr8[15] = buf[0];
          return buf + 1;
        }
    }
  else 
#line 567
    {
    }


  return (void *)0;
}

#line 458
static inline uint8_t *IPDispatchP__unpack_hlim(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 458
{
  switch (dispatch & LOWPAN_IPHC_HLIM_MASK) {
      case LOWPAN_IPHC_HLIM_1: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 1;
      break;
      case LOWPAN_IPHC_HLIM_64: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 64;
      break;
      case LOWPAN_IPHC_HLIM_255: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = 255;
      break;
      default: 
        hdr->ip6_ctlun.ip6_un1.ip6_un1_hlim = *buf;
      return buf + 1;
    }
  return buf;
}

#line 449
static inline uint8_t *IPDispatchP__unpack_nh(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 449
{
  if ((dispatch & LOWPAN_IPHC_NH_MASK) == LOWPAN_IPHC_NH_INLINE) {
      hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt = *buf;
      return buf + 1;
    }
  else 
#line 453
    {
      return buf;
    }
}

#line 415
static inline uint8_t *IPDispatchP__unpack_tcfl(struct ip6_hdr *hdr, uint8_t dispatch, uint8_t *buf)
#line 415
{
  uint8_t fl[3] = { 0, 0, 0 };
  uint8_t tc = 0;

  switch (dispatch & LOWPAN_IPHC_TF_MASK) {
      case LOWPAN_IPHC_TF_ECN_DSCP: 
        tc = (*buf >> 6) & 0xff;
      tc |= (*buf << 2) & 0xff;
      buf += 1;
      break;
      case LOWPAN_IPHC_TF_ECN_FL: 
        tc = (*buf >> 6) & 0xff;
      fl[2] = buf[0] & 0x0f;
      fl[1] = buf[1];
      fl[0] = buf[2];
      buf += 3;
      break;
      case LOWPAN_IPHC_TF_ECN_DSCP_FL: 
        tc = (*buf >> 6) & 0xff;
      tc |= (*buf << 2) & 0xff;
      fl[2] = buf[1] & 0x0f;
      fl[1] = buf[2];
      fl[0] = buf[3];
      buf += 4;
      break;
    }

  hdr->ip6_ctlun.ip6_un1.ip6_un1_flow = ntohl((((((uint32_t )0x6 << 28) | ((uint32_t )tc << 20)) | ((uint32_t )fl[2] << 16)) | ((uint32_t )fl[1] << 8)) | fl[0]);



  return buf;
}

#line 713
static inline uint8_t *IPDispatchP__lowpan_unpack_headers(struct lowpan_reconstruct *recon, 
struct ieee154_frame_addr *frame, 
uint8_t *buf, size_t cnt)
#line 715
{
  uint8_t *dispatch;
#line 716
  uint8_t *unpack_start = buf;
#line 716
  uint8_t *unpack_end;
  int contexts[2] = { 0, 0 };
  uint8_t *dest = recon->r_buf;
  size_t dst_cnt = recon->r_size;
  struct ip6_hdr *hdr = (struct ip6_hdr *)dest;

  dispatch = buf;
  buf += 2;

  if ((*dispatch & LOWPAN_DISPATCH_BYTE_MASK) != LOWPAN_DISPATCH_BYTE_VAL) {
      return (void *)0;
    }


  if ((*(dispatch + 1) & LOWPAN_IPHC_CID_MASK) == LOWPAN_IPHC_CID_PRESENT) {
      contexts[0] = (*buf >> 4) & 0xf;
      contexts[1] = *buf & 0xf;
      buf += 1;
    }


  buf = IPDispatchP__unpack_tcfl(hdr, *dispatch, buf);
  buf = IPDispatchP__unpack_nh(hdr, *dispatch, buf);
  buf = IPDispatchP__unpack_hlim(hdr, *dispatch, buf);



  buf = IPDispatchP__unpack_address(& hdr->ip6_src, 
  *(dispatch + 1) >> LOWPAN_IPHC_SAM_SHIFT, 
  contexts[0], 
  buf, 
  & frame->ieee_src, 
  frame->ieee_dstpan);
  if (!buf) {
      return (void *)0;
    }


  if (*(dispatch + 1) & LOWPAN_IPHC_M) {

      buf = IPDispatchP__unpack_multicast(& hdr->ip6_dst, 
      *(dispatch + 1) >> LOWPAN_IPHC_DAM_SHIFT, 
      contexts[1], 
      buf);
    }
  else {
      buf = IPDispatchP__unpack_address(& hdr->ip6_dst, 
      *(dispatch + 1) >> LOWPAN_IPHC_DAM_SHIFT, 
      contexts[1], 
      buf, 
      & frame->ieee_dst, 
      frame->ieee_dstpan);
    }
  if (!buf) {
      return (void *)0;
    }




  unpack_end = (uint8_t *)(hdr + 1);
  if (*dispatch & LOWPAN_IPHC_NH_MASK) {
      buf = IPDispatchP__unpack_nhc_chain(recon, 
      &unpack_end, 
      dst_cnt - sizeof(struct ip6_hdr ), 
      & hdr->ip6_ctlun.ip6_un1.ip6_un1_nxt, 
      buf);
      if (!buf) {
          return (void *)0;
        }
    }



  ip_memcpy((uint8_t *)unpack_end, (uint8_t *)buf, cnt - (buf - unpack_start));


  return unpack_end + (cnt - (buf - unpack_start));
}

# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool IPNeighborDiscoveryP__IPAddress__getGlobalAddr(struct in6_addr *addr){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = IPAddressP__IPAddress__getGlobalAddr(addr);
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 51 "/home/bo/tinyos-morten/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline int IPNeighborDiscoveryP__NeighborDiscovery__getContext(uint8_t context, 
struct in6_addr *ctx)
#line 52
{
  struct in6_addr me;

#line 54
  if (!IPNeighborDiscoveryP__IPAddress__getGlobalAddr(&me)) {
#line 54
    return 0;
    }
#line 55
  if (context == 0) {


      ip_memcpy((uint8_t *)ctx->in6_u.u6_addr8, (uint8_t *)me.in6_u.u6_addr8, 8);
      return 64;
    }
  else 
#line 60
    {
      return 0;
    }
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/NeighborDiscovery.nc"
inline static int IPDispatchP__NeighborDiscovery__getContext(uint8_t context, struct in6_addr *ctx){
#line 17
  int __nesc_result;
#line 17

#line 17
  __nesc_result = IPNeighborDiscoveryP__NeighborDiscovery__getContext(context, ctx);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 97 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline int IPDispatchP__lowpan_extern_read_context(struct in6_addr *addr, int context)
#line 97
{
  return IPDispatchP__NeighborDiscovery__getContext(context, addr);
}

# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 56 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void RPLRankP__RouteInfo__inconsistency(void ){
#line 56
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__inconsistency();
#line 56
}
#line 56
# 456 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__ForwardingEvents__approve(struct ip6_hdr *iph, struct ip6_route *route, 
struct in6_addr *next_hop)
#line 457
{

  rpl_data_hdr_t *data_hdr = (rpl_data_hdr_t *)route;
  bool inconsistent = FALSE;
  uint8_t o_bit = (data_hdr->bitflag & 0x80) >> 7;


  return TRUE;

  ;
#line 466
  ;




  if (__nesc_ntoh_uint16(data_hdr->senderRank.data) == ROOT_RANK) {
      o_bit = 1;
      goto approve;
    }

  if (o_bit && __nesc_ntoh_uint16(data_hdr->senderRank.data) > RPLRankP__nodeRank[sim_node()]) {

      inconsistent = TRUE;
    }
  else {
#line 479
    if (!o_bit && __nesc_ntoh_uint16(data_hdr->senderRank.data) < RPLRankP__nodeRank[sim_node()]) {
        inconsistent = TRUE;
      }
    }
  if (RPLRankP__RPLRankInfo__getRank(next_hop) >= RPLRankP__nodeRank[sim_node()]) {


      data_hdr->bitflag |= 1 << 7;
    }


  if (inconsistent) {
      if ((data_hdr->bitflag & 0x40) >> 6) {


          RPLRankP__RouteInfo__inconsistency();
          ;
#line 495
          ;
          return FALSE;
        }
      else 
#line 497
        {

          data_hdr->bitflag |= 1 << 6;






          goto approve;
        }
    }

  approve: 
    ;
#line 511
  ;
  __nesc_hton_uint16(data_hdr->senderRank.data, RPLRankP__nodeRank[sim_node()]);
  return TRUE;
}

# 307 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline bool IPForwardingEngineP__ForwardingEvents__default__approve(uint8_t idx, struct ip6_hdr *iph, 
struct ip6_route *rhdr, 
struct in6_addr *next_hop)
#line 309
{
  return TRUE;
}

# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingEvents.nc"
inline static bool IPForwardingEngineP__ForwardingEvents__approve(uint8_t arg_0x40fb0088, struct ip6_hdr *iph, struct ip6_route *rhdr, struct in6_addr *next_hop){
#line 28
  unsigned char __nesc_result;
#line 28

#line 28
  switch (arg_0x40fb0088) {
#line 28
    case RPL_IFACE:
#line 28
      __nesc_result = RPLRankP__ForwardingEvents__approve(iph, rhdr, next_hop);
#line 28
      break;
#line 28
    default:
#line 28
      __nesc_result = IPForwardingEngineP__ForwardingEvents__default__approve(arg_0x40fb0088, iph, rhdr, next_hop);
#line 28
      break;
#line 28
    }
#line 28

#line 28
  return __nesc_result;
#line 28
}
#line 28
# 21 "/home/bo/tinyos-morten/tos/lib/net/blip/IPPacketP.nc"
static inline int IPPacketP__IPPacket__findHeader(void *payload, size_t len, 
uint8_t first_type, uint8_t search_type)
#line 22
{
  int off = 0;
  uint8_t nxt = first_type;
  struct ip6_ext *ext = payload;

  while ((search_type == 0xff && (((((
  nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6)) || 
  search_type != nxt) {

      if (off > len - sizeof(struct ip6_ext )) {
        return -1;
        }

      if (ext->ip6e_len == 0) {
        return -1;
        }
      nxt = ext->ip6e_nxt;
      off += ext->ip6e_len;
    }

  if (nxt == IPV6_NONEXT) {
    return -1;
    }
  else {
#line 46
    return off;
    }
}

# 14 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPPacket.nc"
inline static int IPForwardingEngineP__IPPacket__findHeader(void *payload, size_t len, uint8_t first_type, uint8_t search_type){
#line 14
  int __nesc_result;
#line 14

#line 14
  __nesc_result = IPPacketP__IPPacket__findHeader(payload, len, first_type, search_type);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 44 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__isLocalAddress(struct in6_addr *addr){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = IPAddressP__IPAddress__isLocalAddress(addr);
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 543 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 544
{
  sim_log_debug(321U, "Bo-RoutingEngine", "Receiving DIS %d\n", TOS_NODE_ID);

  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[sim_node()]) {
#line 547
    return;
    }
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF[sim_node()]) {

      return;
    }

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__isLocalAddress(& iph->ip6_dst)) {

      if (iph->ip6_dst.in6_u.u6_addr8[0] == 0xff && (
      iph->ip6_dst.in6_u.u6_addr8[1] & 0xf) <= 0x3) {
          /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
        }
      else 
#line 559
        {
          /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO[sim_node()] = TRUE;
          ip_memcpy((uint8_t *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR[sim_node()], (uint8_t *)& iph->ip6_src, sizeof(struct in6_addr ));
          /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask();
        }
    }
}

# 50 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 51
{
}

# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(uint8_t arg_0x414cf248, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x414cf248) {
#line 23
    case ICMPV6_CODE_DIS:
#line 23
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIS__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__default__recv(arg_0x414cf248, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 40
{
  struct icmp6_hdr *icmph = packet;

  /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__IP__recv(icmph->code, iph, packet, len, meta);
}

# 92 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(8U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static route_key_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__addRoute(const uint8_t *prefix, int prefix_len_bits, struct in6_addr *next_hop, uint8_t ifindex){
#line 10
  int __nesc_result;
#line 10

#line 10
  __nesc_result = IPForwardingEngineP__ForwardingTable__addRoute(prefix, prefix_len_bits, next_hop, ifindex);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 464 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDTSN(void )
#line 464
{
  return /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN[sim_node()];
}

# 54 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static uint8_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDTSN(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__getDTSN();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 460 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn)
#line 460
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN[sim_node()] = dtsn;
}

# 53 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__setDTSN(uint8_t dtsn){
#line 53
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDTSN(dtsn);
#line 53
}
#line 53
# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static struct route_entry */*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__lookupRoute(const uint8_t *prefix, int prefix_len_bits){
#line 18
  struct route_entry *__nesc_result;
#line 18

#line 18
  __nesc_result = IPForwardingEngineP__ForwardingTable__lookupRoute(prefix, prefix_len_bits);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 176 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline bool /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState(void )
#line 176
{

  return TRUE;
}

#line 283
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 284
{
  dao_entry_t *dao_msg;
  error_t error;

  struct dao_base_t *dao = (struct dao_base_t *)payload;
  struct route_entry *entry;
  route_key_t new_key = ROUTE_INVAL_KEY;

  sim_log_debug(323U, "RPLDAORoutingEngine", "RPLDAORouting:receive DAO: %i\n", /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState());
  if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running[sim_node()]) {
#line 293
    return;
    }







  entry = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__lookupRoute(dao->target_option.target_prefix.in6_u.u6_addr8, 
  dao->target_option.prefix_length);
  if (entry != (void *)0 && entry->prefixlen == dao->target_option.prefix_length) {

      if (memcmp(entry->next_hop.in6_u.u6_addr8, iph->ip6_src.in6_u.u6_addr8, 16) == 0) {
        }
      else {



          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__setDTSN(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getDTSN() + 1);
          if (dao->target_option.prefix_length > 0) {
            new_key = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__addRoute(dao->target_option.target_prefix.in6_u.u6_addr8, 
            dao->target_option.prefix_length, 
            & iph->ip6_src, 
            RPL_IFACE);
            }
        }
    }
  else 
#line 319
    {

      if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[sim_node()] == ROUTE_TABLE_SZ) {
          sim_log_debug(324U, "RPLDAORoutingEngine", "RPLDAORouting:Downward table full -- not adding route\n");
          return;
        }
      sim_log_debug(325U, "RPLDAORoutingEngine", "RPLDAORouting: Add new route\n");
      if (dao->target_option.prefix_length > 0) {
          new_key = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__addRoute(dao->target_option.target_prefix.in6_u.u6_addr8, 
          dao->target_option.prefix_length, 
          & iph->ip6_src, 
          RPL_IFACE);
        }







      if (new_key != ROUTE_INVAL_KEY) {
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[sim_node()][/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[sim_node()]].lifetime = dao->transit_info_option.path_lifetime;
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[sim_node()][/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[sim_node()]].key = new_key;

          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[sim_node()]++;
        }
    }
#line 357
  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank() == ROOT_RANK) {

      return;
    }
  else 
#line 360
    {
      if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__isRunning()) {
        /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[sim_node()]);
        }
    }
#line 364
  dao_msg = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__get();
  if (dao_msg == (void *)0) {
      return;
    }



  ip_memcpy((uint8_t *)& dao_msg->s_pkt.ip6_hdr, (uint8_t *)iph, sizeof(struct ip6_hdr ));


  ip_memcpy((uint8_t *)& dao_msg->dao_base, (uint8_t *)(uint8_t *)payload, sizeof(struct dao_base_t ));
  dao_msg->v[0].iov_base = (uint8_t *)& dao_msg->dao_base;
  dao_msg->v[0].iov_len = (((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;
  dao_msg->v[0].iov_next = (void *)0;
  dao_msg->s_pkt.ip6_data = &dao_msg->v[0];

  error = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendQueue__enqueue(dao_msg);
  if (error != SUCCESS) {
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__SendPool__put(dao_msg);
      return;
    }
}

# 275 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline uint8_t RPLRankP__RPLRankInfo__hasParent(void )
#line 275
{
  return RPLRankP__parentNum[sim_node()];
}

# 95 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRank.nc"
inline static uint8_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = RPLRankP__RPLRankInfo__hasParent();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 531 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__compare_ip6_addr(struct in6_addr *node1, struct in6_addr *node2)
#line 531
{
  return !memcmp(node1, node2, sizeof(struct in6_addr ));
}

# 279 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__RPLRankInfo__isLeaf(void )
#line 279
{

  return RPLRankP__leafState[sim_node()];
}

# 96 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRank.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__isLeaf(void ){
#line 96
  unsigned char __nesc_result;
#line 96

#line 96
  __nesc_result = RPLRankP__RPLRankInfo__isLeaf();
#line 96

#line 96
  return __nesc_result;
#line 96
}
#line 96
# 78 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(5U);
#line 78
}
#line 78
#line 92
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(5U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 189 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static uint32_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(5U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 567 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 568
{
  struct dio_base_t *dio = (struct dio_base_t *)payload;

#line 570
  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[sim_node()]) {
#line 570
    return;
    }
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[sim_node()]) {
      return;
    }

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun[sim_node()] != 0xFF) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter[sim_node()]++;
    }
  else 
#line 578
    {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter[sim_node()] = 0xFF;
    }


  if (__nesc_ntoh_uint16(dio->dagRank.data) == INFINITE_RANK) {
      if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()]) != INFINITE_RANK && /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__getNow() % 2 == 1) {

          /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask();
        }
      return;
    }

  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent() && /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__isRunning()) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__stop();
    }


  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF[sim_node()] = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__isLeaf();


  if ((
#line 598
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF[sim_node()] && !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()])
   || !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__compare_ip6_addr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[sim_node()], & dio->dodagID)) {








      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()] = TRUE;


      goto accept_dodag;
    }



  if (
#line 614
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID[sim_node()] == dio->instance_id.id && 
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__compare_ip6_addr(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[sim_node()], & dio->dodagID) && 
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[sim_node()] != __nesc_ntoh_uint8(dio->version.data) && 
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()]) {




      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
    }
  else {

    if (
#line 626
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()]) != /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[sim_node()] && 
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()] && 
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[sim_node()] != INFINITE_RANK) {



        if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()]) > /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK[sim_node()] + /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc[sim_node()] && 
        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[sim_node()] != INFINITE_RANK) {
            /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()] = FALSE;
            /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[sim_node()] = INFINITE_RANK;
          }
        else 
#line 636
          {
            if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK[sim_node()] > /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()])) {
                /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK[sim_node()] = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()]);
              }
            /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[sim_node()] = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__getRank(&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[sim_node()]);
          }

        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__inconsistencyDetected();
        return;
      }
    }
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent() && !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()]) {
      goto accept_dodag;
    }
  else {
#line 649
    if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__hasParent() && !/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[sim_node()]) {



        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()] = FALSE;
        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE[sim_node()] = dio->flags.flags_chunk & 0x80;

        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop();

        /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
      }
    }
#line 660
  return;
  accept_dodag: 



    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()] = TRUE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP[sim_node()] = (dio->flags.flags_chunk & 0x3c) >> 3;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF[sim_node()] = dio->flags.flags_chunk & 0x07;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID[sim_node()] = dio->instance_id.id;
  ip_memcpy((uint8_t *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[sim_node()], (uint8_t *)& dio->dodagID, sizeof(struct in6_addr ));
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE[sim_node()] = dio->flags.flags_chunk & 0x80;

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
  return;
}

# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static void RPLRankP__IP_DIO_Filter__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IP_DIO__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 562 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline bool RPLRankP__compareParent(parent_t oldP, parent_t newP)
#line 562
{
  return oldP.etx_hop + oldP.etx <= newP.etx_hop + newP.etx;
}

# 27 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static inline bool RPLOF0P__RPLOF__OCP(uint16_t ocp)
#line 27
{
  if (ocp == 0) {
    return TRUE;
    }
#line 30
  return FALSE;
}

# 4 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static bool RPLRankP__RPLOF__OCP(uint16_t ocp){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = RPLOF0P__RPLOF__OCP(ocp);
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 34 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static inline bool RPLOF0P__RPLOF__objectSupported(uint16_t objectType)
#line 34
{
  if (objectType == 7) {
      return TRUE;
    }

  return TRUE;
}

# 7 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static bool RPLRankP__RPLOF__objectSupported(uint16_t objectType){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = RPLOF0P__RPLOF__objectSupported(objectType);
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 42 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static inline void RPLOF0P__RPLOF__setMinHopRankIncrease(uint16_t val)
#line 42
{
  RPLOF0P__min_hop_rank_inc[sim_node()] = val;
}

# 22 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static void RPLRankP__RPLOF__setMinHopRankIncrease(uint16_t val){
#line 22
  RPLOF0P__RPLOF__setMinHopRankIncrease(val);
#line 22
}
#line 22
# 425 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDODAGConfig(uint8_t IntDouble, 
uint8_t IntMin, 
uint8_t Redun, 
uint8_t RankInc, 
uint8_t HopRankInc)
#line 429
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble[sim_node()] = IntDouble;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin[sim_node()] = IntMin;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun[sim_node()] = Redun;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc[sim_node()] = RankInc;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc[sim_node()] = HopRankInc;
}

# 49 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void RPLRankP__RouteInfo__setDODAGConfig(uint8_t DIOIntDouble, uint8_t DIOIntMin, uint8_t DIORedun, uint8_t MaxRankInc, uint8_t MinHopRankInc){
#line 49
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__setDODAGConfig(DIOIntDouble, DIOIntMin, DIORedun, MaxRankInc, MinHopRankInc);
#line 49
}
#line 49
# 180 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static inline void RPLOF0P__RPLOF__resetRank(void )
#line 180
{
  RPLOF0P__nodeRank[sim_node()] = INFINITE_RANK;
  RPLOF0P__minMetric[sim_node()] = 0xFFFF;
}

# 15 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF.nc"
inline static void RPLRankP__RPLOF__resetRank(void ){
#line 15
  RPLOF0P__RPLOF__resetRank();
#line 15
}
#line 15
# 599 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__parseDIO(struct ip6_hdr *iph, struct dio_base_t *dio)
#line 599
{
  uint16_t pParentRank;
  struct in6_addr rDODAGID;
  uint16_t etx = 0xFFFF;
  parent_t tempParent;
  uint8_t parentIndex;
#line 604
  uint8_t myParent;
  uint16_t preRank;
  uint8_t tempPrf;
  bool newDodag = FALSE;

  struct dio_body_t *dio_body;
  struct dio_metric_header_t *dio_metric_header;
  struct dio_etx_t *dio_etx;
  struct dio_dodag_config_t *dio_dodag_config;
  struct dio_prefix_t *dio_prefix;
  uint8_t *newPoint;
  uint16_t trackLength = (((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;


  if (RPLRankP__nodeRank[sim_node()] == ROOT_RANK) {
#line 618
    return;
    }

  if (__nesc_ntoh_uint8(dio->version.data) != RPLRankP__VERSION[sim_node()] && !memcmp(& dio->dodagID, &RPLRankP__DODAGID[sim_node()], sizeof(struct in6_addr ))) {

      RPLRankP__parentNum[sim_node()] = 0;
      RPLRankP__VERSION[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
      RPLRankP__RPLOF__resetRank();
      RPLRankP__nodeRank[sim_node()] = INFINITE_RANK;
      RPLRankP__minRank[sim_node()] = INFINITE_RANK;
      RPLRankP__resetValid();
    }







  pParentRank = __nesc_ntoh_uint16(dio->dagRank.data);


  ip_memcpy((uint8_t *)&rDODAGID, (uint8_t *)& dio->dodagID, sizeof(struct in6_addr ));
  tempPrf = dio->flags.flags_chunk & 0x07;

  if (! !memcmp(&RPLRankP__DODAGID[sim_node()], &RPLRankP__DODAG_MAX[sim_node()], sizeof(struct in6_addr )) && 
  ! !memcmp(&RPLRankP__DODAGID[sim_node()], &rDODAGID, sizeof(struct in6_addr ))) {

      if (RPLRankP__Prf[sim_node()] < tempPrf) {

          RPLRankP__ignore[sim_node()] = TRUE;
          return;
        }
      else {
#line 650
        if (RPLRankP__Prf[sim_node()] > tempPrf) {

            RPLRankP__Prf[sim_node()] = tempPrf;
            ip_memcpy((uint8_t *)&RPLRankP__DODAGID[sim_node()], (uint8_t *)&rDODAGID, sizeof(struct in6_addr ));
            RPLRankP__parentNum[sim_node()] = 0;
            RPLRankP__VERSION[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
            RPLRankP__RPLOF__resetRank();
            RPLRankP__nodeRank[sim_node()] = INFINITE_RANK;
            RPLRankP__minRank[sim_node()] = INFINITE_RANK;

            RPLRankP__resetValid();
            newDodag = TRUE;
          }
        else 
#line 662
          {

            newDodag = TRUE;
          }
        }
    }
  else {
#line 666
    if (!memcmp(&RPLRankP__DODAGID[sim_node()], &RPLRankP__DODAG_MAX[sim_node()], sizeof(struct in6_addr ))) {

        RPLRankP__Prf[sim_node()] = tempPrf;
        ip_memcpy((uint8_t *)&RPLRankP__DODAGID[sim_node()], (uint8_t *)&rDODAGID, sizeof(struct in6_addr ));
        RPLRankP__parentNum[sim_node()] = 0;
        RPLRankP__VERSION[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
        RPLRankP__RPLOF__resetRank();
        RPLRankP__nodeRank[sim_node()] = INFINITE_RANK;
        RPLRankP__minRank[sim_node()] = INFINITE_RANK;

        newDodag = TRUE;
        RPLRankP__resetValid();
      }
    else 
#line 678
      {
      }
    }



  trackLength -= sizeof(struct dio_base_t );
  newPoint = (uint8_t *)(struct dio_base_t *)(dio + 1);
  dio_body = (struct dio_body_t *)newPoint;

  RPLRankP__METRICID[sim_node()] = 0;
  RPLRankP__OCP[sim_node()] = 0;



  if (dio_body->type == 2) {

      trackLength -= sizeof(struct dio_body_t );

      newPoint = (uint8_t *)(struct dio_body_t *)(dio_body + 1);
      dio_metric_header = (struct dio_metric_header_t *)newPoint;
      trackLength -= sizeof(struct dio_metric_header_t );

      if (dio_metric_header->routing_obj_type) {



          newPoint = (uint8_t *)(dio_metric_header + 1);
          dio_etx = (struct dio_etx_t *)newPoint;
          trackLength -= sizeof(struct dio_etx_t );
          etx = __nesc_ntoh_uint16(dio_etx->etx.data);

          RPLRankP__METRICID[sim_node()] = 7;
          newPoint = (uint8_t *)(struct dio_etx_t *)(dio_etx + 1);
        }
    }
  else 
#line 713
    {
      etx = pParentRank * 10;
    }



  dio_prefix = (struct dio_prefix_t *)newPoint;

  if (trackLength > 0 && dio_prefix->type == 3) {
      trackLength -= sizeof(struct dio_prefix_t );
      if (RPLRankP__ignore[sim_node()] == FALSE) {
        }
    }






  dio_dodag_config = (struct dio_dodag_config_t *)newPoint;



  if (trackLength > 0 && __nesc_ntoh_uint8(dio_dodag_config->type.data) == 4) {

      trackLength -= sizeof(struct dio_dodag_config_t );



      if (RPLRankP__ignore[sim_node()] == FALSE) {

          RPLRankP__OCP[sim_node()] = __nesc_ntoh_uint16(dio_dodag_config->ocp.data);

          RPLRankP__MAX_RANK_INCREASE[sim_node()] = __nesc_ntoh_uint16(dio_dodag_config->MaxRankInc.data);


          RPLRankP__RouteInfo__setDODAGConfig(__nesc_ntoh_uint8(dio_dodag_config->DIOIntDoubl.data), __nesc_ntoh_uint8(
          dio_dodag_config->DIOIntMin.data), __nesc_ntoh_uint8(
          dio_dodag_config->DIORedun.data), __nesc_ntoh_uint16(
          dio_dodag_config->MaxRankInc.data), __nesc_ntoh_uint16(
          dio_dodag_config->MinHopRankInc.data));
          RPLRankP__RPLOF__setMinHopRankIncrease(__nesc_ntoh_uint16(dio_dodag_config->MinHopRankInc.data));
        }
    }
#line 770
  ;
#line 770
  ;


  ip_memcpy((uint8_t *)& tempParent.parentIP, (uint8_t *)& iph->ip6_src, sizeof(struct in6_addr ));
  tempParent.rank = pParentRank;
  tempParent.etx_hop = 35;
  tempParent.valid = TRUE;
  tempParent.etx = etx;

  if ((!RPLRankP__RPLOF__objectSupported(RPLRankP__METRICID[sim_node()]) || !RPLRankP__RPLOF__OCP(RPLRankP__OCP[sim_node()])) && RPLRankP__parentNum[sim_node()] == 0) {


      RPLRankP__insertParent(tempParent);
      RPLRankP__RPLOF__recomputeRoutes();

      RPLRankP__nodeRank[sim_node()] = INFINITE_RANK;
      RPLRankP__leafState[sim_node()] = TRUE;
      return;
    }

  if ((parentIndex = RPLRankP__getParent(& iph->ip6_src)) != 20) {




      if (newDodag) {

          if (RPLRankP__parentNum[sim_node()] != 0) {

              RPLRankP__RPLOF__recomputeRoutes();

              myParent = RPLRankP__getParent(RPLRankP__RPLOF__getParent());

              if (!RPLRankP__compareParent(RPLRankP__parentSet[sim_node()][myParent], tempParent)) {

                  RPLRankP__Prf[sim_node()] = tempPrf;
                  ip_memcpy((uint8_t *)&RPLRankP__DODAGID[sim_node()], (uint8_t *)&rDODAGID, sizeof(struct in6_addr ));
                  RPLRankP__parentNum[sim_node()] = 0;
                  RPLRankP__VERSION[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
                  RPLRankP__resetValid();
                  RPLRankP__insertParent(tempParent);
                  RPLRankP__RPLOF__recomputeRoutes();
                  RPLRankP__getNewRank();
                }
              else 
#line 813
                {

                  RPLRankP__RPLOF__recomputeRoutes();
                  RPLRankP__getNewRank();
                  RPLRankP__ignore[sim_node()] = TRUE;
                }
            }
          else 
#line 819
            {

              RPLRankP__Prf[sim_node()] = tempPrf;
              ip_memcpy((uint8_t *)&RPLRankP__DODAGID[sim_node()], (uint8_t *)&rDODAGID, sizeof(struct in6_addr ));
              RPLRankP__parentNum[sim_node()] = 0;
              RPLRankP__VERSION[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
              RPLRankP__resetValid();
              RPLRankP__insertParent(tempParent);
              RPLRankP__RPLOF__recomputeRoutes();
              RPLRankP__getNewRank();
            }
        }
      else {


          RPLRankP__parentSet[sim_node()][parentIndex].rank = pParentRank;
          RPLRankP__parentSet[sim_node()][parentIndex].etx = etx;
          RPLRankP__RPLOF__recomputeRoutes();
          RPLRankP__getNewRank();
          RPLRankP__ignore[sim_node()] = TRUE;
        }
    }
  else {




      if (RPLRankP__parentNum[sim_node()] > 20) {
        return;
        }




      if (newDodag) {


          if (RPLRankP__parentNum[sim_node()] != 0) {
              RPLRankP__RPLOF__recomputeRoutes();
              myParent = RPLRankP__getParent(RPLRankP__RPLOF__getParent());
              if (!RPLRankP__compareParent(RPLRankP__parentSet[sim_node()][myParent], tempParent)) {


                  RPLRankP__Prf[sim_node()] = tempPrf;
                  ip_memcpy((uint8_t *)&RPLRankP__DODAGID[sim_node()], (uint8_t *)&rDODAGID, sizeof(struct in6_addr ));
                  RPLRankP__parentNum[sim_node()] = 0;
                  RPLRankP__VERSION[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
                  RPLRankP__resetValid();
                  RPLRankP__insertParent(tempParent);
                  RPLRankP__RPLOF__recomputeRoutes();
                  RPLRankP__getNewRank();
                }
              else 
#line 870
                {

                  RPLRankP__ignore[sim_node()] = TRUE;
                }
            }
          else 
#line 874
            {


              RPLRankP__Prf[sim_node()] = tempPrf;
              ip_memcpy((uint8_t *)&RPLRankP__DODAGID[sim_node()], (uint8_t *)&rDODAGID, sizeof(struct in6_addr ));
              RPLRankP__parentNum[sim_node()] = 0;
              RPLRankP__VERSION[sim_node()] = __nesc_ntoh_uint8(dio->version.data);
              RPLRankP__resetValid();
              RPLRankP__insertParent(tempParent);
              RPLRankP__RPLOF__recomputeRoutes();
              RPLRankP__getNewRank();
            }
        }
      else 
#line 886
        {


          RPLRankP__insertParent(tempParent);
          RPLRankP__RPLOF__recomputeRoutes();
          preRank = RPLRankP__nodeRank[sim_node()];
          RPLRankP__getNewRank();
        }
    }
}










static inline void RPLRankP__IP_DIO__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 907
{
  struct dio_base_t *dio;

#line 909
  dio = (struct dio_base_t *)payload;

  if (!RPLRankP__m_running[sim_node()]) {
#line 911
    return;
    }



  if (RPLRankP__nodeRank[sim_node()] != ROOT_RANK && __nesc_ntoh_uint16(dio->dagRank.data) != 0xFFFF) {
    RPLRankP__parseDIO(iph, dio);
    }

  if (__nesc_ntoh_uint16(dio->dagRank.data) == 0xFFFF && RPLRankP__getParent(& iph->ip6_src) != 20) {
    RPLRankP__evictParent(RPLRankP__getParent(& iph->ip6_src));
    }

  if (RPLRankP__nodeRank[sim_node()] > __nesc_ntoh_uint16(dio->dagRank.data) || __nesc_ntoh_uint16(dio->dagRank.data) == INFINITE_RANK) {
      if (!RPLRankP__ignore[sim_node()]) {

          RPLRankP__IP_DIO_Filter__recv(iph, payload, len, meta);
        }
      RPLRankP__ignore[sim_node()] = FALSE;
    }
}

# 50 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(uint8_t code, struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 51
{
}

# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(uint8_t arg_0x414cf248, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x414cf248) {
#line 23
    case ICMPV6_CODE_DIO:
#line 23
      RPLRankP__IP_DIO__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case ICMPV6_CODE_DAO:
#line 23
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IP_DAO__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__default__recv(arg_0x414cf248, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCodeDispatchP.nc"
static inline void /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(struct ip6_hdr *iph, void *packet, 
size_t len, struct ip6_metadata *meta)
#line 40
{
  struct icmp6_hdr *icmph = packet;

  /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__IP__recv(icmph->code, iph, packet, len, meta);
}

# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPShellP__UDP__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(2U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 263 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__ICMPPing__pingReply(struct in6_addr *source, struct icmp_stats *stats)
#line 263
{
  int len;

#line 265
  len = inet_ntop6(source, UDPShellP__reply_buf[sim_node()], MAX_REPLY_LEN);
  if (len > 0) {
      len += snprintf(UDPShellP__reply_buf[sim_node()] + len - 1, MAX_REPLY_LEN - len + 1, UDPShellP__ping_fmt[sim_node()], 
      stats->seq, stats->ttl, stats->rtt);
      UDPShellP__reply_buf[sim_node()][len] = '\0';
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], UDPShellP__reply_buf[sim_node()], len);
    }
}

# 125 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__ICMPPing__default__pingReply(uint8_t client, struct in6_addr *source, 
struct icmp_stats *ping_stats)
#line 126
{
}

# 8 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static void ICMPPingP__ICMPPing__pingReply(uint8_t arg_0x4153e068, struct in6_addr *source, struct icmp_stats *stats){
#line 8
  switch (arg_0x4153e068) {
#line 8
    case 0U:
#line 8
      UDPShellP__ICMPPing__pingReply(source, stats);
#line 8
      break;
#line 8
    default:
#line 8
      ICMPPingP__ICMPPing__default__pingReply(arg_0x4153e068, source, stats);
#line 8
      break;
#line 8
    }
#line 8
}
#line 8
# 136 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static uint32_t ICMPPingP__PingTimer__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(10U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 109 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__IP_ECHO__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 112
{
  icmp_echo_hdr_t *req = (icmp_echo_hdr_t *)packet;
  nx_uint32_t *sendTime = (nx_uint32_t *)(req + 1);
  struct icmp_stats p_stat;

  p_stat.seq = __nesc_ntoh_uint16(req->seqno.data);
  p_stat.ttl = iph->ip6_ctlun.ip6_un1.ip6_un1_hlim;
  p_stat.rtt = ICMPPingP__PingTimer__getNow() - __nesc_ntoh_uint32((*sendTime).data);
  ICMPPingP__ICMPPing__pingReply(__nesc_ntoh_uint16(req->ident.data), & iph->ip6_src, &p_stat);
  ICMPPingP__ping_rcv[sim_node()]++;
}

# 111 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__ICMP_IP__default__recv(uint8_t type, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 112
{
}

# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static void ICMPCoreP__ICMP_IP__recv(uint8_t arg_0x41281c70, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x41281c70) {
#line 23
    case ICMP_TYPE_ECHO_REPLY:
#line 23
      ICMPPingP__IP_ECHO__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case 155:
#line 23
      /*RPLRoutingC.ICMP_RA.ICMPCodeDispatchP*/ICMPCodeDispatchP__1__RA__recv(hdr, packet, len, meta);
#line 23
      /*RPLRoutingEngineC.ICMP_RS.ICMPCodeDispatchP*/ICMPCodeDispatchP__0__RA__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      ICMPCoreP__ICMP_IP__default__recv(arg_0x41281c70, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
#line 17
inline static error_t ICMPCoreP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_ICMP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool ICMPCoreP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 58 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IP__recv(struct ip6_hdr *iph, 
void *packet, 
size_t len, 
struct ip6_metadata *meta)
#line 61
{
  struct ip6_hdr *hdr = iph;
  struct ip6_packet reply;
  struct ip_iovec v;
  struct icmp6_hdr *req = (struct icmp6_hdr *)packet;

  switch (req->type) {
      case ICMP_TYPE_ECHO_REQUEST: 
        sim_log_debug(314U, "ICMPCore", "This case??\n");
      req->type = ICMP_TYPE_ECHO_REPLY;
      req->cksum = 0;

      memset(&reply, 0, sizeof reply);
      ip_memcpy((uint8_t *)reply.ip6_hdr.ip6_dst.in6_u.u6_addr8, (uint8_t *)hdr->ip6_src.in6_u.u6_addr8, 16);
      ICMPCoreP__IPAddress__setSource(& reply.ip6_hdr);

      reply.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
      reply.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
      reply.ip6_data = &v;

      v.iov_next = (void *)0;
      v.iov_base = (void *)req;
      v.iov_len = len;

      reply.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )len << 8) | ((uint16_t )len >> 8)) & 0xffff;
      req->cksum = (((uint16_t )msg_cksum(& reply.ip6_hdr, reply.ip6_data, IANA_ICMP) << 8) | ((uint16_t )msg_cksum(& reply.ip6_hdr, reply.ip6_data, IANA_ICMP) >> 8)) & 0xffff;


      ICMPCoreP__IP__send(&reply);
      break;

      default: 
        sim_log_debug(315U, "ICMPCore", "ICMPCore:Receive @ %s\n", sim_time_string());
      ICMPCoreP__ICMP_IP__recv(req->type, iph, packet, len, meta);
    }
}

# 164 "UDPEchoP.nc"
static inline void UDPEchoP__UDPSend__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 165
{
  radio_count_msg_t *message_rec = (radio_count_msg_t *)data;


  inet_ntop6(& from->sin6_addr, UDPEchoP__UDPSend__recvfrom__print_buf3[sim_node()], 128);
  sim_log_debug(258U, "MsgExchange", "MsgExchange: Receive: Got response from address = %s Port = %i\n", UDPEchoP__UDPSend__recvfrom__print_buf3[sim_node()], (((uint16_t )from->sin6_port >> 8) | ((uint16_t )from->sin6_port << 8)) & 0xffff);
  sim_log_debug(259U, "MsgExchange", "MsgExchange: Time: %s \n", sim_time_string());
  sim_log_debug(260U, "MsgRequests", "Response: Node %i answered Node %i %s \n", 4, 2, sim_time_string());
}

# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPEchoP__UDPReceive__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(1U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 147 "UDPEchoP.nc"
static inline void UDPEchoP__UDPReceive__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 148
{



  inet_ntop6(& from->sin6_addr, UDPEchoP__UDPReceive__recvfrom__print_buf3[sim_node()], 128);
  sim_log_debug(252U, "MsgExchange", "MsgExchange: Receive: Received Data from address = %s Port = %i\n", UDPEchoP__UDPReceive__recvfrom__print_buf3[sim_node()], (((uint16_t )from->sin6_port >> 8) | ((uint16_t )from->sin6_port << 8)) & 0xffff);
  sim_log_debug(253U, "MsgExchange", "MsgExchange: Time: %s \n", sim_time_string());
  sim_log_debug(254U, "MsgExchange", "MsgExchange: Receive: Received Data: %i \n", data);
  sim_log_debug(255U, "MsgExchange", "Time: %s \n", sim_time_string());
  sim_log_debug(256U, "MsgExchange", "MsgExchange: Send: Sending response to address = %s Port = %i\n", UDPEchoP__UDPReceive__recvfrom__print_buf3[sim_node()], (((uint16_t )from->sin6_port >> 8) | ((uint16_t )from->sin6_port << 8)) & 0xffff);
  sim_log_debug(257U, "MsgExchange", "MsgExchange: Time: %s \n", sim_time_string());
  UDPEchoP__UDPReceive__sendto(from, data, len);
}

# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void RouteCmdP__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(11U, dt);
#line 73
}
#line 73
# 146 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__ShellCommand__write(uint8_t cmd_id, char *str, int len)
#line 146
{
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], str, len);
}

# 24 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
inline static void RouteCmdP__ShellCommand__write(char *str, int len){
#line 24
  UDPShellP__ShellCommand__write(/*RouteCmdC.ShellCommandC*/ShellCommandC__0__CMD_ID, str, len);
#line 24
}
#line 24
#line 18
inline static char *RouteCmdP__ShellCommand__getBuffer(uint16_t len){
#line 18
  char *__nesc_result;
#line 18

#line 18
  __nesc_result = UDPShellP__ShellCommand__getBuffer(/*RouteCmdC.ShellCommandC*/ShellCommandC__0__CMD_ID, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 92 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/RouteCmdP.nc"
static inline char *RouteCmdP__ShellCommand__eval(int argc, char **argv)
#line 92
{
  char *cur;
#line 93
  char *buf = RouteCmdP__ShellCommand__getBuffer(MAX_REPLY_LEN);

  cur = buf;
  ip_memcpy((uint8_t *)cur, (uint8_t *)RouteCmdP__header[sim_node()], strlen(RouteCmdP__header[sim_node()]));
  cur += strlen(RouteCmdP__header[sim_node()]);
  RouteCmdP__ShellCommand__write(buf, cur - buf);
  RouteCmdP__cur_entry[sim_node()] = 0;


  RouteCmdP__Timer__startOneShot(100);
  return (void *)0;
}

# 287 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static inline char *UDPShellP__ShellCommand__default__eval(uint8_t cmd_id, int argc, char **argv)
#line 287
{
  return (void *)0;
}

# 11 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommand.nc"
inline static char *UDPShellP__ShellCommand__eval(uint8_t arg_0x414e0e20, int argc, char **argv){
#line 11
  char *__nesc_result;
#line 11

#line 11
  switch (arg_0x414e0e20) {
#line 11
    case /*RouteCmdC.ShellCommandC*/ShellCommandC__0__CMD_ID:
#line 11
      __nesc_result = RouteCmdP__ShellCommand__eval(argc, argv);
#line 11
      break;
#line 11
    default:
#line 11
      __nesc_result = UDPShellP__ShellCommand__default__eval(arg_0x414e0e20, argc, argv);
#line 11
      break;
#line 11
    }
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 208 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__init_argv(char *cmd, uint16_t len, char **argv, int *argc)
#line 208
{
  int inArg = 0;

#line 210
  *argc = 0;
  while (len > 0 && *argc < UDPShellP__N_ARGS) {
      if ((((*cmd == ' ' || *cmd == '\n') || *cmd == '\t') || *cmd == '\0') || len == 1) {
          if (inArg) {
              *argc = *argc + 1;
              inArg = 0;
              *cmd = '\0';
            }
        }
      else {
#line 218
        if (!inArg) {
            argv[*argc] = cmd;
            inArg = 1;
          }
        }
#line 222
      cmd++;
      len--;
    }
}











static inline void UDPShellP__UDP__recvfrom(struct sockaddr_in6 *from, void *data, 
uint16_t len, struct ip6_metadata *meta)
#line 238
{
  char *argv[UDPShellP__N_ARGS];
  int argc;
#line 240
  int cmd;

  ip_memcpy((uint8_t *)&UDPShellP__session_endpoint[sim_node()], (uint8_t *)from, sizeof(struct sockaddr_in6 ));
  UDPShellP__init_argv((char *)data, len, argv, &argc);

  if (argc > 0) {
      cmd = UDPShellP__lookup_cmd(argv[0], UDPShellP__N_BUILTINS, UDPShellP__builtins[sim_node()]);
      if (cmd != UDPShellP__CMD_NO_CMD) {
          UDPShellP__builtin_actions[sim_node()][cmd].action(argc, argv);
          return;
        }
      cmd = UDPShellP__lookup_cmd(argv[0], UDPShellP__N_EXTERNAL, UDPShellP__externals[sim_node()]);
      if (cmd != UDPShellP__CMD_NO_CMD) {
          char *reply = UDPShellP__ShellCommand__eval(cmd, argc, argv);

#line 254
          if (reply != (void *)0) {
            UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], reply, strlen(reply));
            }
#line 256
          return;
        }
      cmd = snprintf(UDPShellP__reply_buf[sim_node()], MAX_REPLY_LEN, "sdsh: %s: command not found\n", argv[0]);
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], UDPShellP__reply_buf[sim_node()], cmd);
    }
}

# 187 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__UDP__default__recvfrom(uint8_t clnt, struct sockaddr_in6 *from, void *payload, 
uint16_t len, struct ip6_metadata *meta)
#line 188
{
}

# 29 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
inline static void UdpP__UDP__recvfrom(uint8_t arg_0x412940d8, struct sockaddr_in6 *src, void *payload, uint16_t len, struct ip6_metadata *meta){
#line 29
  switch (arg_0x412940d8) {
#line 29
    case 0U:
#line 29
      UDPEchoP__UDPSend__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    case 1U:
#line 29
      UDPEchoP__UDPReceive__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    case 2U:
#line 29
      UDPShellP__UDP__recvfrom(src, payload, len, meta);
#line 29
      break;
#line 29
    default:
#line 29
      UdpP__UDP__default__recvfrom(arg_0x412940d8, src, payload, len, meta);
#line 29
      break;
#line 29
    }
#line 29
}
#line 29
# 71 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__IP__recv(struct ip6_hdr *iph, void *packet, size_t len, struct ip6_metadata *meta)
#line 71
{
  uint8_t i;
  struct sockaddr_in6 addr;
  struct udp_hdr *udph = (struct udp_hdr *)packet;
  uint16_t my_cksum;
#line 75
  uint16_t rx_cksum = (((uint16_t )udph->chksum >> 8) | ((uint16_t )udph->chksum << 8)) & 0xffff;
  struct ip_iovec v;

  sim_log_debug(317U, "UDP", "UDP - IP.recv: len: %i (%i, %i) srcport: %i dstport: %i\n", (((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff, len, (((uint16_t )udph->len >> 8) | ((uint16_t )udph->len << 8)) & 0xffff, (((uint16_t )udph->srcport >> 8) | ((uint16_t )udph->srcport << 8)) & 0xffff, (((uint16_t )udph->dstport >> 8) | ((uint16_t )udph->dstport << 8)) & 0xffff);



  for (i = 0; i < UdpP__N_CLIENTS; i++) 
    if (UdpP__local_ports[sim_node()][i] == udph->dstport) {
      break;
      }
  if (i == UdpP__N_CLIENTS) {

      return;
    }
  ip_memcpy((uint8_t *)& addr.sin6_addr, (uint8_t *)& iph->ip6_src, 16);
  addr.sin6_port = udph->srcport;

  udph->chksum = 0;
  v.iov_base = packet;
  v.iov_len = len;
  v.iov_next = (void *)0;

  my_cksum = msg_cksum(iph, &v, IANA_UDP);
  ;
#line 99
  ;
  if (rx_cksum != my_cksum) {
      ;
      ;
#line 102
      ;

      ;
#line 104
      ;
      ;
#line 105
      ;

      return;
    }

  ;
  UdpP__UDP__recvfrom(i, &addr, (void *)(udph + 1), len - sizeof(struct udp_hdr ), meta);
}

# 41 "/home/bo/tinyos-morten/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__IP__default__recv(uint8_t nxt_hdr, struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 42
{
}

# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPProtocolsP__IP__recv(uint8_t arg_0x40f8e578, struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  switch (arg_0x40f8e578) {
#line 23
    case IANA_UDP:
#line 23
      UdpP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    case IANA_ICMP:
#line 23
      ICMPCoreP__IP__recv(hdr, packet, len, meta);
#line 23
      break;
#line 23
    default:
#line 23
      IPProtocolsP__IP__default__recv(arg_0x40f8e578, hdr, packet, len, meta);
#line 23
      break;
#line 23
    }
#line 23
}
#line 23
# 15 "/home/bo/tinyos-morten/tos/lib/net/blip/IPProtocolsP.nc"
static inline void IPProtocolsP__SubIP__recv(struct ip6_hdr *iph, 
void *payload, 
size_t len, 
struct ip6_metadata *meta)
#line 18
{
  struct ip6_ext *cur = (struct ip6_ext *)(iph + 1);
  uint8_t nxt = iph->ip6_ctlun.ip6_un1.ip6_un1_nxt;

  while (((((nxt == IPV6_HOP || nxt == IPV6_ROUTING) || nxt == IPV6_FRAG) || 
  nxt == IPV6_DEST) || nxt == IPV6_MOBILITY) || nxt == IPV6_IPV6) {
      nxt = cur->ip6e_nxt;
      cur = (struct ip6_ext *)((uint8_t *)cur + cur->ip6e_len);
    }

  len -= (char *)cur - (char *)payload;
  sim_log_debug(261U, "IPProtocols", "IP protocol receive @ %s\n", sim_time_string());
  IPProtocolsP__IP__recv(nxt, iph, cur, len, meta);
}

# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPForwardingEngineP__IP__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  IPProtocolsP__SubIP__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 334 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPRaw__default__recv(struct ip6_hdr *iph, void *payload, 
size_t len, struct ip6_metadata *meta)
#line 335
{
}

# 23 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static void IPForwardingEngineP__IPRaw__recv(struct ip6_hdr *hdr, void *packet, size_t len, struct ip6_metadata *meta){
#line 23
  IPForwardingEngineP__IPRaw__default__recv(hdr, packet, len, meta);
#line 23
}
#line 23
# 209 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPForward__recv(uint8_t ifindex, struct ip6_hdr *iph, void *payload, 
struct ip6_metadata *meta)
#line 210
{
  struct ip6_packet pkt;
  struct in6_addr *next_hop;
  size_t len = (((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )iph->ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff;
  struct ip_iovec v[1];
  route_key_t next_hop_key = ROUTE_INVAL_KEY;
  uint8_t next_hop_ifindex;


  IPForwardingEngineP__IPRaw__recv(iph, payload, len, meta);

  if (IPForwardingEngineP__IPAddress__isLocalAddress(& iph->ip6_dst)) {

      sim_log_debug(266U, "IPForwardingEngine", "IPForwardingEngineP: Local delivery @ %s\n", sim_time_string());
      IPForwardingEngineP__IP__recv(iph, payload, len, meta);
    }
  else 
#line 225
    {

      int header_off = IPForwardingEngineP__IPPacket__findHeader(payload, len, 
      iph->ip6_ctlun.ip6_un1.ip6_un1_nxt, IPV6_ROUTING);

#line 229
      if (! -- iph->ip6_ctlun.ip6_un1.ip6_un1_hlim) {


          return;
        }

      if (header_off >= 0) {




          return;
        }
      else 
#line 241
        {

          struct route_entry *next_hop_entry = 
          IPForwardingEngineP__ForwardingTable__lookupRoute(iph->ip6_dst.in6_u.u6_addr8, 
          128);

#line 246
          if (next_hop_entry == (void *)0) {



              return;
            }
          next_hop = & next_hop_entry->next_hop;
          next_hop_key = next_hop_entry->key;
          next_hop_ifindex = next_hop_entry->ifindex;
        }

      ip_memcpy((uint8_t *)& pkt.ip6_hdr, (uint8_t *)iph, sizeof(struct ip6_hdr ));
      pkt.ip6_data = &v[0];
      v[0].iov_next = (void *)0;
      v[0].iov_base = payload;
      v[0].iov_len = len;




      if (!IPForwardingEngineP__ForwardingEvents__approve(next_hop_ifindex, iph, 
      (struct ip6_route *)payload, next_hop)) {
        return;
        }
#line 269
      sim_log_debug(267U, "IPForwardingEngine", "IPForwardingEngineP: Recv: Forward Packet @ %s\n", sim_time_string());
      IPForwardingEngineP__IPForward__send(next_hop_ifindex, next_hop, &pkt, (void *)next_hop_key);
    }
}

# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPForward.nc"
inline static void IPNeighborDiscoveryP__IPForward__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta){
#line 28
  IPForwardingEngineP__IPForward__recv(ROUTE_IFACE_154, iph, payload, meta);
#line 28
}
#line 28
# 131 "/home/bo/tinyos-morten/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta)
#line 131
{
  sim_log_debug(278U, "IPND", "IPND: Receive @ %s\n", sim_time_string());
  IPNeighborDiscoveryP__IPForward__recv(iph, payload, meta);
}

# 28 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPLower.nc"
inline static void IPDispatchP__IPLower__recv(struct ip6_hdr *iph, void *payload, struct ip6_metadata *meta){
#line 28
  IPNeighborDiscoveryP__IPLower__recv(iph, payload, meta);
#line 28
}
#line 28
# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t UdpP__IP__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = IPProtocolsP__IP__send(IANA_UDP, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 35 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
static inline uint16_t UdpP__alloc_lport(uint8_t clnt)
#line 35
{
  int i;
#line 36
  int done = 0;
  uint16_t compare = (((uint16_t )UdpP__last_localport[sim_node()] << 8) | ((uint16_t )UdpP__last_localport[sim_node()] >> 8)) & 0xffff;

#line 38
  UdpP__last_localport[sim_node()] = UdpP__last_localport[sim_node()] < UdpP__LOCAL_PORT_START ? UdpP__last_localport[sim_node()] + 1 : UdpP__LOCAL_PORT_START;
  while (!done) {
      done = 1;
      for (i = 0; i < UdpP__N_CLIENTS; i++) {
          if (UdpP__local_ports[sim_node()][i] == compare) {
              UdpP__last_localport[sim_node()] = UdpP__last_localport[sim_node()] < UdpP__LOCAL_PORT_START ? UdpP__last_localport[sim_node()] + 1 : UdpP__LOCAL_PORT_START;
              compare = (((uint16_t )UdpP__last_localport[sim_node()] << 8) | ((uint16_t )UdpP__last_localport[sim_node()] >> 8)) & 0xffff;
              done = 0;
              break;
            }
        }
    }
  return UdpP__last_localport[sim_node()];
}

# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool UdpP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 131 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
static inline error_t UdpP__UDP__sendtov(uint8_t clnt, struct sockaddr_in6 *dest, 
struct ip_iovec *iov)
#line 132
{
  error_t rc;
  struct ip6_packet pkt;
  struct udp_hdr udp;
  struct ip_iovec v[1];
  size_t len = iov_len(iov);



  memset((uint8_t *)& pkt.ip6_hdr, 0, sizeof  pkt.ip6_hdr);
  memset((uint8_t *)&udp, 0, sizeof udp);
  ip_memcpy((uint8_t *)& pkt.ip6_hdr.ip6_dst, (uint8_t *)dest->sin6_addr.in6_u.u6_addr8, 16);
  UdpP__IPAddress__setSource(& pkt.ip6_hdr);
  if (UdpP__local_ports[sim_node()][clnt] == 0 && (
  UdpP__local_ports[sim_node()][clnt] = UdpP__alloc_lport(clnt)) == 0) {
      return FAIL;
    }

  udp.srcport = UdpP__local_ports[sim_node()][clnt];
  udp.dstport = dest->sin6_port;
  udp.len = (((uint16_t )(len + sizeof(struct udp_hdr )) << 8) | ((uint16_t )(len + sizeof(struct udp_hdr )) >> 8)) & 0xffff;
  udp.chksum = 0;


  pkt.ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_UDP;
  pkt.ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = udp.len;


  v[0].iov_base = (uint8_t *)&udp;
  v[0].iov_len = sizeof(struct udp_hdr );
  v[0].iov_next = iov;
  pkt.ip6_data = &v[0];

  udp.chksum = (((uint16_t )msg_cksum(& pkt.ip6_hdr, v, IANA_UDP) << 8) | ((uint16_t )msg_cksum(& pkt.ip6_hdr, v, IANA_UDP) >> 8)) & 0xffff;

  rc = UdpP__IP__send(&pkt);
  ;
  return rc;
}

# 284 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline uint8_t RPLRankP__getPreExistingParent(struct in6_addr *node)
#line 284
{

  uint8_t indexset;

#line 287
  if (RPLRankP__parentNum[sim_node()] == 0) {
      return 20;
    }

  for (indexset = 0; indexset < 20; indexset++) {
      if (!memcmp(& RPLRankP__parentSet[sim_node()][indexset].parentIP, node, sizeof(struct in6_addr ))) {
          return indexset;
        }
    }
  return 20;
}

# 41 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngine.nc"
inline static void RPLRankP__RouteInfo__resetTrickle(void ){
#line 41
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
#line 41
}
#line 41
# 138 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static inline void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired(void )
{
  for (; 0; ) ;

  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__send__postTask();
}

# 18 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPEchoP__UDPSend__sendto(struct sockaddr_in6 *dest, void *payload, uint16_t len){
#line 18
  unsigned char __nesc_result;
#line 18

#line 18
  __nesc_result = UdpP__UDP__sendto(0U, dest, payload, len);
#line 18

#line 18
  return __nesc_result;
#line 18
}
#line 18
# 54 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get(void )
#line 54
{
#line 54
  return (atm128RegFile[sim_node()][27U] & (1 << 1)) != 0;
}

# 43 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static bool LedsP__Led1__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 60 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    atm128RegFile[sim_node()][27U] ^= 1 << 1;
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 42
}
#line 42
# 99 "/home/bo/tinyos-morten/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  sim_log_debug(241U, "LedsC", "LEDS: Led""1"" %s.\n", LedsP__Led1__get() ? "off" : "on");
#line 101
  ;
}

# 83 "/home/bo/tinyos-morten/tos/interfaces/Leds.nc"
inline static void UDPEchoP__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void UDPEchoP__StatusTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
# 124 "UDPEchoP.nc"
static inline void UDPEchoP__StatusTimer__fired(void )
#line 124
{
  unsigned short __nesc_temp47;
  unsigned char *__nesc_temp46;

#line 125
  if (!UDPEchoP__timerStarted[sim_node()]) {
      UDPEchoP__StatusTimer__startPeriodic(1024 * 10L);
      UDPEchoP__timerStarted[sim_node()] = TRUE;
    }

  if (TOS_NODE_ID == 2) {
      (__nesc_temp46 = UDPEchoP__stats[sim_node()].seqno.data, __nesc_hton_uint16(__nesc_temp46, (__nesc_temp47 = __nesc_ntoh_uint16(__nesc_temp46)) + 1), __nesc_temp47);
      __nesc_hton_uint16(UDPEchoP__stats[sim_node()].sender.data, TOS_NODE_ID);
      __nesc_hton_uint16(UDPEchoP__payload[sim_node()].counter.data, UDPEchoP__sequence_nr[sim_node()]++);
      __nesc_hton_uint16(UDPEchoP__payload[sim_node()].ist.data, WAITTIME);
      __nesc_hton_uint8(UDPEchoP__payload[sim_node()].senderID.data, 2);
      __nesc_hton_uint8(UDPEchoP__payload[sim_node()].receiverID.data, 4);
      __nesc_hton_int8(UDPEchoP__payload[sim_node()].data[0].data, 0xFF);
      __nesc_hton_int8(UDPEchoP__payload[sim_node()].data[DATA_SIZE - 1].data, 0xFF);
      UDPEchoP__Leds__led1Toggle();
      sim_log_debug(249U, "MsgExchange", "MsgExchang: Send: Node %i is sending UDP Message to Node = %X ....%X... %X on Port = %i   \n", TOS_NODE_ID, (((uint16_t )UDPEchoP__route_dest[sim_node()].sin6_addr.in6_u.u6_addr16[0] >> 8) | ((uint16_t )UDPEchoP__route_dest[sim_node()].sin6_addr.in6_u.u6_addr16[0] << 8)) & 0xffff, (((uint16_t )UDPEchoP__route_dest[sim_node()].sin6_addr.in6_u.u6_addr16[3] >> 8) | ((uint16_t )UDPEchoP__route_dest[sim_node()].sin6_addr.in6_u.u6_addr16[3] << 8)) & 0xffff, (((uint16_t )UDPEchoP__route_dest[sim_node()].sin6_addr.in6_u.u6_addr16[7] >> 8) | ((uint16_t )UDPEchoP__route_dest[sim_node()].sin6_addr.in6_u.u6_addr16[7] << 8)) & 0xffff, (((uint16_t )UDPEchoP__route_dest[sim_node()].sin6_port >> 8) | ((uint16_t )UDPEchoP__route_dest[sim_node()].sin6_port << 8)) & 0xffff);
      sim_log_debug(250U, "MsgExchange", "MsgExchang: Time: %s \n", sim_time_string());
      sim_log_debug(251U, "MsgRequests", "Request: Node %i calls Node %i %s \n", 2, 4, sim_time_string());
      UDPEchoP__UDPSend__sendto(&UDPEchoP__route_dest[sim_node()], &UDPEchoP__payload[sim_node()], sizeof UDPEchoP__payload[sim_node()]);
    }
}

# 281 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__ip_print_heap(void )
#line 281
{
}

#line 256
static inline void IPDispatchP__reconstruct_age(void *elt)
#line 256
{
  struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)elt;

#line 258
  if (recon->r_timeout != T_UNUSED) {
    sim_log_debug(281U, "IPDispatch", "IPDispatchP: recon src: 0x%x tag: 0x%x buf: %p recvd: %i/%i\n", recon->r_source_key, recon->r_tag, recon->r_buf, recon->r_bytes_rcvd, recon->r_size);
    }

  switch (recon->r_timeout) {
      case T_ACTIVE: 
        recon->r_timeout = T_ZOMBIE;
#line 264
      break;
      case T_FAILED1: 
        recon->r_timeout = T_FAILED2;
#line 266
      break;
      case T_ZOMBIE: 
        case T_FAILED2: 

          sim_log_debug(282U, "IPDispatch", "IPDispatchP: timing out buffer: src: %i tag: %i\n", recon->r_source_key, recon->r_tag);
      if (recon->r_buf != (void *)0) {
          sim_log_debug(283U, "IPDispatch", "IPDispatchP: free(%p)\n", recon->r_buf);
          ip_free(recon->r_buf);
        }
      recon->r_timeout = T_UNUSED;
      recon->r_buf = (void *)0;
      break;
    }
}

#line 292
static inline void IPDispatchP__ExpireTimer__fired(void )
#line 292
{
  table_map(&IPDispatchP__recon_cache[sim_node()], IPDispatchP__reconstruct_age);







  IPDispatchP__ip_print_heap();
}

# 287 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__PrintTimer__fired(void )
#line 287
{
  int i;


  sim_log_debug_clear(270U, "IPForwardingEngine", "destination                 gateway            interface\n");
  for (i = 0; i < ROUTE_TABLE_SZ; i++) {
      if (IPForwardingEngineP__routing_table[sim_node()][i].valid) {

#line 294
          inet_ntop6(& IPForwardingEngineP__routing_table[sim_node()][i].prefix, IPForwardingEngineP__PrintTimer__fired__print_buf[sim_node()], 64);
#line 294
          sim_log_debug_clear(271U, "IPForwardingEngine", IPForwardingEngineP__PrintTimer__fired__print_buf[sim_node()]);
          sim_log_debug_clear(272U, "IPForwardingEngine", "/%i\t\t", IPForwardingEngineP__routing_table[sim_node()][i].prefixlen);

          inet_ntop6(& IPForwardingEngineP__routing_table[sim_node()][i].next_hop, IPForwardingEngineP__PrintTimer__fired__print_buff[sim_node()], 64);
          sim_log_debug_clear(273U, "IPForwardingEngine", IPForwardingEngineP__PrintTimer__fired__print_buff[sim_node()]);


          sim_log_debug_clear(274U, "IPForwardingEngine", "\t\t\t%i\n", IPForwardingEngineP__routing_table[sim_node()][i].ifindex);
        }
    }
}

# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 92 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static bool /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(4U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 398 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__nextTrickleTime(void )
#line 398
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag[sim_node()] = FALSE;
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter[sim_node()] < /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble[sim_node()]) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter[sim_node()]++;
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[sim_node()] *= 2;
    }
  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__isRunning()) {
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime();
    }
}

#line 516
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__fired(void )
#line 516
{
  if (/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag[sim_node()]) {


      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__nextTrickleTime();
    }
  else 
#line 521
    {



      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDIOTask__postTask();

      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__computeRemaining__postTask();
    }
}

# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 506 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__fired(void )
#line 506
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sendDISTask__postTask();
}

static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__fired(void )
#line 510
{

  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[sim_node()]++;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle();
}

# 52 "/home/bo/tinyos-morten/tos/interfaces/Random.nc"
inline static uint16_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 258 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__fired(void )
#line 258
{
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__sendDAO__postTask();
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[sim_node()] + /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16() % 100);
}

# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 186 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__fired(void )
#line 186
{
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__initDAO__postTask();
  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_double_count[sim_node()] < 10) {
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[sim_node()] = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[sim_node()] * 2 + /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16() % 100;
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_double_count[sim_node()]++;
    }
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__stop();
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[sim_node()]);
}

# 114 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline error_t IPForwardingEngineP__ForwardingTable__delRoute(route_key_t key)
#line 114
{
  int i;

#line 116
  for (i = 0; i < ROUTE_TABLE_SZ; i++) {
      if (IPForwardingEngineP__routing_table[sim_node()][i].key == key) {
          memmove((void *)&IPForwardingEngineP__routing_table[sim_node()][i], (void *)&IPForwardingEngineP__routing_table[sim_node()][i + 1], 
          sizeof(struct route_entry ) * (ROUTE_TABLE_SZ - i - 1));
          return SUCCESS;
        }
    }
  return FAIL;
}

# 16 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__delRoute(route_key_t key){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = IPForwardingEngineP__ForwardingTable__delRoute(key);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 263 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__fired(void )
#line 263
{

  uint8_t i;
#line 265
  uint8_t j;

#line 266
  if (!/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__getStoreState()) {
    return;
    }
  for (i = 0; i < /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[sim_node()]; i++) {
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[sim_node()][i].lifetime -= /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[sim_node()];
      if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[sim_node()][i].lifetime <= /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[sim_node()]) {

          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__ForwardingTable__delRoute(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[sim_node()][i].key);
          for (j = i; j < /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[sim_node()] - 1; j++) {
              /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[sim_node()][j] = /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[sim_node()][j + 1];
            }
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[sim_node()][/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[sim_node()] - 1].lifetime = 0;
          /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[sim_node()]--;
        }
    }
}

# 17 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IP.nc"
inline static error_t ICMPPingP__IP_ECHO__send(struct ip6_packet *msg){
#line 17
  unsigned char __nesc_result;
#line 17

#line 17
  __nesc_result = ICMPCoreP__ICMP_IP__send(ICMP_TYPE_ECHO_REPLY, msg);
#line 17

#line 17
  return __nesc_result;
#line 17
}
#line 17
# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static bool ICMPPingP__IPAddress__setSource(struct ip6_hdr *hdr){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = IPAddressP__IPAddress__setSource(hdr);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 46 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__sendPing(struct in6_addr *dest, uint16_t seqno)
#line 46
{
  struct ip6_packet *ipmsg = (struct ip6_packet *)ip_malloc(sizeof(struct ip6_packet ) + 
  sizeof(icmp_echo_hdr_t ) + 
  sizeof(nx_uint32_t ));
  icmp_echo_hdr_t *e_hdr = (icmp_echo_hdr_t *)(ipmsg + 1);
  nx_uint32_t *sendTime = (nx_uint32_t *)(e_hdr + 1);
  struct ip_iovec v;

  if (ipmsg == (void *)0) {
#line 54
    return;
    }

  v.iov_base = (void *)(ipmsg + 1);
  v.iov_len = sizeof(icmp_echo_hdr_t ) + sizeof(nx_uint32_t );
  v.iov_next = (void *)0;
  ipmsg->ip6_data = &v;


  __nesc_hton_uint8(e_hdr->type.data, ICMP_TYPE_ECHO_REQUEST);
  __nesc_hton_uint8(e_hdr->code.data, 0);
  __nesc_hton_uint16(e_hdr->cksum.data, 0);
  __nesc_hton_uint16(e_hdr->ident.data, ICMPPingP__ping_ident[sim_node()]);
  __nesc_hton_uint16(e_hdr->seqno.data, seqno);
  __nesc_hton_uint32((*sendTime).data, ICMPPingP__PingTimer__getNow());


  memset(& ipmsg->ip6_hdr, 0, sizeof(struct ip6_hdr ));
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt = IANA_ICMP;
  ipmsg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )v.iov_len << 8) | ((uint16_t )v.iov_len >> 8)) & 0xffff;
  ip_memcpy((uint8_t *)& ipmsg->ip6_hdr.ip6_dst, (uint8_t *)dest->in6_u.u6_addr8, 16);
  ICMPPingP__IPAddress__setSource(& ipmsg->ip6_hdr);

  __nesc_hton_uint16(e_hdr->cksum.data, msg_cksum(& ipmsg->ip6_hdr, ipmsg->ip6_data, IANA_ICMP));

  ICMPPingP__IP_ECHO__send(ipmsg);
  ip_free(ipmsg);
}

# 78 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void ICMPPingP__PingTimer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(10U);
#line 78
}
#line 78
# 274 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__ICMPPing__pingDone(uint16_t ping_rcv, uint16_t ping_n)
#line 274
{
  int len;

#line 276
  len = snprintf(UDPShellP__reply_buf[sim_node()], MAX_REPLY_LEN, UDPShellP__ping_summary[sim_node()], ping_n, ping_rcv);
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], UDPShellP__reply_buf[sim_node()], len);
}

# 129 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__ICMPPing__default__pingDone(uint8_t client, uint16_t n, uint16_t m)
#line 129
{
}

# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static void ICMPPingP__ICMPPing__pingDone(uint8_t arg_0x4153e068, uint16_t ping_rcv, uint16_t ping_n){
#line 10
  switch (arg_0x4153e068) {
#line 10
    case 0U:
#line 10
      UDPShellP__ICMPPing__pingDone(ping_rcv, ping_n);
#line 10
      break;
#line 10
    default:
#line 10
      ICMPPingP__ICMPPing__default__pingDone(arg_0x4153e068, ping_rcv, ping_n);
#line 10
      break;
#line 10
    }
#line 10
}
#line 10
# 97 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__PingTimer__fired(void )
#line 97
{

  if (ICMPPingP__ping_seq[sim_node()] == ICMPPingP__ping_n[sim_node()]) {
      ICMPPingP__ICMPPing__pingDone(ICMPPingP__ping_ident[sim_node()], ICMPPingP__ping_rcv[sim_node()], ICMPPingP__ping_n[sim_node()]);
      ICMPPingP__PingTimer__stop();
      return;
    }
  ICMPPingP__sendPing(&ICMPPingP__ping_dest[sim_node()], ICMPPingP__ping_seq[sim_node()]);
  ICMPPingP__ping_seq[sim_node()]++;
}

# 49 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/RouteCmdP.nc"
static inline char *RouteCmdP__ifnam(int ifidx)
#line 49
{
  int i;

#line 51
  for (i = 0; i < sizeof RouteCmdP__ifaces[sim_node()] / sizeof RouteCmdP__ifaces[sim_node()][0]; i++) {
      if (RouteCmdP__ifaces[sim_node()][i].ifindex == ifidx) {
        return RouteCmdP__ifaces[sim_node()][i].name;
        }
    }
#line 55
  return (void *)0;
}

# 157 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline struct route_entry *IPForwardingEngineP__ForwardingTable__getTable(int *n)
#line 157
{
  *n = ROUTE_TABLE_SZ;
  return IPForwardingEngineP__routing_table[sim_node()];
}

# 22 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ForwardingTable.nc"
inline static struct route_entry *RouteCmdP__ForwardingTable__getTable(int *size){
#line 22
  struct route_entry *__nesc_result;
#line 22

#line 22
  __nesc_result = IPForwardingEngineP__ForwardingTable__getTable(size);
#line 22

#line 22
  return __nesc_result;
#line 22
}
#line 22
# 59 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/RouteCmdP.nc"
static inline void RouteCmdP__Timer__fired(void )
#line 59
{

  struct route_entry *entry;
  int n;
  char *cur;
#line 63
  char *buf = RouteCmdP__ShellCommand__getBuffer(MAX_REPLY_LEN);

#line 64
  cur = buf;

  entry = RouteCmdP__ForwardingTable__getTable(&n);
  if (!buf || !entry) {
    return;
    }
  for (; RouteCmdP__cur_entry[sim_node()] < n; RouteCmdP__cur_entry[sim_node()]++) {
      if (entry[RouteCmdP__cur_entry[sim_node()]].valid) {
          cur += inet_ntop6(& entry[RouteCmdP__cur_entry[sim_node()]].prefix, cur, MAX_REPLY_LEN - (cur - buf)) - 1;
          cur += snprintf(cur, MAX_REPLY_LEN - (cur - buf), "/%i\t\t", entry[RouteCmdP__cur_entry[sim_node()]].prefixlen);
          cur += inet_ntop6(& entry[RouteCmdP__cur_entry[sim_node()]].next_hop, cur, MAX_REPLY_LEN - (cur - buf)) - 1;
          if (MAX_REPLY_LEN - (cur - buf) < 6) {
#line 75
            continue;
            }
#line 76
          * cur++ = '\t';
#line 76
          * cur++ = '\t';
          strncpy(cur, RouteCmdP__ifnam(entry[RouteCmdP__cur_entry[sim_node()]].ifindex), MAX_REPLY_LEN - (cur - buf));
          cur += 3;
          * cur++ = '\n';
          if (MAX_REPLY_LEN - (cur - buf) > MAX_REPLY_LEN / 2) {
              RouteCmdP__ShellCommand__write(buf, cur - buf);
              RouteCmdP__Timer__startOneShot(100);
              RouteCmdP__cur_entry[sim_node()]++;
              return;
            }
        }
    }
  if (cur > buf) {
    RouteCmdP__ShellCommand__write(buf, cur - buf);
    }
}

# 204 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x40c61868){
#line 83
  switch (arg_0x40c61868) {
#line 83
    case 0U:
#line 83
      /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__DelayTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      UDPEchoP__StatusTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      IPDispatchP__ExpireTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      IPForwardingEngineP__PrintTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__InitDISTimer__fired();
#line 83
      break;
#line 83
    case 6U:
#line 83
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IncreaseVersionTimer__fired();
#line 83
      break;
#line 83
    case 7U:
#line 83
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__fired();
#line 83
      break;
#line 83
    case 8U:
#line 83
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__fired();
#line 83
      break;
#line 83
    case 9U:
#line 83
      /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__fired();
#line 83
      break;
#line 83
    case 10U:
#line 83
      ICMPPingP__PingTimer__fired();
#line 83
      break;
#line 83
    case 11U:
#line 83
      RouteCmdP__Timer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x40c61868);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 54 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 54
}
#line 54
# 61 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP__Timer0__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 577 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__cancel_compare(void )
#line 577
{
  sim_log_debug(162U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP__compare[sim_node()]);
  if (HplAtm128Timer0AsyncP__compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP__compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP__notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP__Timer0__getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP__oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP__lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP__oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP__schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP__cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP__overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__overflow[sim_node()]->cancelled = 1;
      sim_log_debug(161U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP__overflow[sim_node()]);
      HplAtm128Timer0AsyncP__overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP__timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(158U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(159U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP__configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP__timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP__allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP__configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP__overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__cancel_overflow();
    }
  HplAtm128Timer0AsyncP__overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP__notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP__Timer0__set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP__Timer0__get();

#line 299
  sim_log_debug(151U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP__shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP__clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP__lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP__lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP__schedule_new_overflow();
      HplAtm128Timer0AsyncP__notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP__timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(141U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(142U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(143U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP__Timer0__set(0);
        }
      else {
          sim_log_debug(144U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(145U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(146U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(147U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP__configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(148U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP__timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 70 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer0__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 58 "/home/bo/tinyos-morten/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/home/bo/tinyos-morten/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 85 "/home/bo/tinyos-morten/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/bo/tinyos-morten/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/bo/tinyos-morten/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 60 "/home/bo/tinyos-morten/tos/system/FcfsResourceQueueC.nc"
static inline bool /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] == /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/home/bo/tinyos-morten/tos/interfaces/ResourceQueue.nc"
inline static bool /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/home/bo/tinyos-morten/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] != /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[sim_node()];

#line 72
        /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[sim_node()][/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[sim_node()]];
        if (/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[sim_node()] == /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail[sim_node()] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[sim_node()][id] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
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
      /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/home/bo/tinyos-morten/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "/home/bo/tinyos-morten/tos/interfaces/TaskBasic.nc"
inline static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 173 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
static inline void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/home/bo/tinyos-morten/tos/interfaces/ResourceConfigure.nc"
inline static void /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x409d39b8){
#line 65
    /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x409d39b8);
#line 65
}
#line 65
# 51 "/home/bo/tinyos-morten/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    * (volatile uint8_t *)&atm128RegFile[sim_node()][0x35] = 1 << SE;
  }
}

# 38 "/home/bo/tinyos-morten/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__SubInit__default__init(void )
#line 38
{
  return SUCCESS;
}

# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP__SubInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 59 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 41 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 62 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 62
{
#line 62
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 44 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 26 "/home/bo/tinyos-morten/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 26
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
  sim_log_debug(47U, "Pins", "Setting bit %i of port %i.\n", (int )0, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 0;
}

# 40 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
  sim_log_debug(48U, "Pins", "Setting bit %i of port %i.\n", (int )1, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 1;
}

# 40 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
  sim_log_debug(49U, "Pins", "Setting bit %i of port %i.\n", (int )2, (int )27U);
  atm128RegFile[sim_node()][27U] |= 1 << 2;
}

# 40 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 63 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 0;
}

# 46 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 63 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 1;
}

# 46 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 63 "/home/bo/tinyos-morten/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 63
{
#line 63
  atm128RegFile[sim_node()][26U] |= 1 << 2;
}

# 46 "/home/bo/tinyos-morten/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/home/bo/tinyos-morten/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    sim_log_debug(235U, "Init", "LEDS: initialized.\n");
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 21 "/home/bo/tinyos-morten/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 21
{
  return SUCCESS;
}

# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 58 "/home/bo/tinyos-morten/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
inline static error_t SimMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/bo/tinyos-morten/tos/interfaces/Scheduler.nc"
inline static bool SimMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 55 "/home/bo/tinyos-morten/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[sim_node()], /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[sim_node()]);
  return SUCCESS;
}

# 63 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber[sim_node()] = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 55 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[sim_node()][i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 447 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0AsyncP__Compare__start();
#line 65
}
#line 65
# 364 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(153U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(control);
#line 46
}
#line 46
# 561 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/home/bo/tinyos-morten/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 306 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[sim_node()][i] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[sim_node()] + i;

  return SUCCESS;
}

# 55 "/home/bo/tinyos-morten/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 114 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Init__init(void )
#line 114
{
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()] = FALSE;
  return SUCCESS;
}

# 15 "/home/bo/tinyos-morten/tos/lib/net/blip/Ieee154AddressP.nc"
static inline error_t Ieee154AddressP__Init__init(void )
#line 15
{
  Ieee154AddressP__m_saddr[sim_node()] = TOS_NODE_ID;
  Ieee154AddressP__m_panid[sim_node()] = TOS_AM_GROUP;
  return SUCCESS;
}

# 65 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
static inline error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[sim_node()][i] = &/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[sim_node()][i];
    }
  /*IPDispatchC.FragPool.PoolP*/PoolP__0__free[sim_node()] = 12;
  /*IPDispatchC.FragPool.PoolP*/PoolP__0__index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[sim_node()][i] = &/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[sim_node()][i];
    }
  /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[sim_node()] = 12;
  /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[sim_node()] = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[sim_node()][i] = &/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[sim_node()][i];
    }
  /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[sim_node()] = 3;
  /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[sim_node()] = 0;
  return SUCCESS;
}

# 175 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__BlipStatistics__clear(void )
#line 175
{
}

#line 53
static inline error_t UdpP__Init__init(void )
#line 53
{
  UdpP__BlipStatistics__clear();
  memset((uint8_t *)UdpP__local_ports[sim_node()], 0, sizeof(uint16_t ) * UdpP__N_CLIENTS);
  return SUCCESS;
}

# 65 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
static inline error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 5; i++) {
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[sim_node()][i] = &/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool[sim_node()][i];
    }
  /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[sim_node()] = 5;
  /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[sim_node()] = 0;
  return SUCCESS;
}

# 62 "/home/bo/tinyos-morten/tos/interfaces/Init.nc"
inline static error_t SimMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, UdpP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*IPDispatchC.FragPool.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, Ieee154AddressP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 73 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void UDPEchoP__StatusTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPEchoP__UDPReceive__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(1U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 164 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__RPLRankInfo__declareRoot(void )
#line 164
{
  RPLRankP__ROOT[sim_node()] = TRUE;

  RPLRankP__nodeRank[sim_node()] = ROOT_RANK;
}

# 75 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRank.nc"
inline static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__declareRoot(void ){
#line 75
  RPLRankP__RPLRankInfo__declareRoot();
#line 75
}
#line 75
# 469 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RootControl__setRoot(void )
#line 469
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[sim_node()] = TRUE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[sim_node()] = TRUE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRankInfo__declareRoot();
  return SUCCESS;
}

# 41 "/home/bo/tinyos-morten/tos/lib/net/RootControl.nc"
inline static error_t UDPEchoP__RootControl__setRoot(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RootControl__setRoot();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 118 "/home/bo/tinyos-morten/tos/lib/net/blip/PrintfUART.h"
static inline void printfUART_init()
#line 118
{
}

# 648 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__BlipStatistics__clear(void )
#line 648
{
  memset((uint8_t *)&IPDispatchP__stats[sim_node()], 0, sizeof(ip_statistics_t ));
}

# 34 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/BlipStatistics.nc"
inline static void UDPEchoP__IPStats__clear(void ){
#line 34
  IPDispatchP__BlipStatistics__clear();
#line 34
}
#line 34
# 104 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static error_t IPDispatchP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 168 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline error_t IPDispatchP__SplitControl__start(void )
#line 168
{
  return IPDispatchP__RadioControl__start();
}

# 104 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static error_t IPStackControlP__SubSplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPDispatchP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/IPStackControlP.nc"
static inline error_t IPStackControlP__SplitControl__start(void )
#line 12
{
  return IPStackControlP__SubSplitControl__start();
}

# 104 "/home/bo/tinyos-morten/tos/interfaces/SplitControl.nc"
inline static error_t UDPEchoP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = IPStackControlP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 77 "UDPEchoP.nc"
static inline void UDPEchoP__Boot__booted(void )
#line 77
{
  memset((uint8_t *)&UDPEchoP__payload[sim_node()], 0, sizeof UDPEchoP__payload[sim_node()]);
  UDPEchoP__RadioControl__start();
  UDPEchoP__timerStarted[sim_node()] = FALSE;

  UDPEchoP__IPStats__clear();
  printfUART_init();




  if (TOS_NODE_ID == 1) {
      sim_log_debug(245U, "UDPEchoP", "Basestation ID = %d. is grounded\n", TOS_NODE_ID);
      UDPEchoP__RootControl__setRoot();
      UDPEchoP__UDPReceive__bind(1);
    }




  if (TOS_NODE_ID == 2) {
      UDPEchoP__route_dest[sim_node()].sin6_port = (((uint16_t )3 << 8) | ((uint16_t )3 >> 8)) & 0xffff;
      inet_pton6("fec0::4", & UDPEchoP__route_dest[sim_node()].sin6_addr);
      sim_log_debug(246U, "UDPEchoP", "Bind in TOS_ID = %i to Port = %i\n", TOS_NODE_ID, 2);
      UDPEchoP__UDPReceive__bind(2);
      UDPEchoP__StatusTimer__startOneShot(WAITTIME);
    }


  if (TOS_NODE_ID == 4) {
      sim_log_debug(247U, "UDPEchoP", "Bind in TOS_ID = %i to Port = %i\n", TOS_NODE_ID, 3);
      UDPEchoP__route_dest[sim_node()].sin6_port = (((uint16_t )3 << 8) | ((uint16_t )3 >> 8)) & 0xffff;
      inet_pton6("fec0::4", & UDPEchoP__route_dest[sim_node()].sin6_addr);
      UDPEchoP__UDPReceive__bind(3);
      UDPEchoP__StatusTimer__startOneShot(WAITTIME);
    }


  sim_log_debug(248U, "Boot", "booted: %i\n", TOS_NODE_ID);
}

# 57 "/home/bo/tinyos-morten/tos/lib/net/blip/dhcp/NoDhcpC.nc"
static inline void NoDhcpC__IPAddress__changed(bool valid)
#line 57
{
}

# 94 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__stop(void )
#line 94
{
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running[sim_node()] = FALSE;
  return FAIL;
}

# 95 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
inline static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = RPLRankP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 499 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__stop(void )
#line 499
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[sim_node()] = FALSE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__start();
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop();
  return SUCCESS;
}

# 105 "/home/bo/tinyos-morten/tos/interfaces/StdControl.nc"
inline static error_t IPStackControlP__RoutingControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__stop();
#line 105
  __nesc_result = ecombine(__nesc_result, /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__StdControl__stop());
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 41 "/home/bo/tinyos-morten/tos/lib/net/blip/IPStackControlP.nc"
static inline void IPStackControlP__IPAddress__changed(bool valid)
#line 41
{
  if (valid) {
    IPStackControlP__RoutingControl__start();
    }
  else {
#line 45
    IPStackControlP__RoutingControl__stop();
    }
}

# 337 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static inline void IPForwardingEngineP__IPAddress__changed(bool global_valid)
#line 337
{
}

# 109 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static inline void ICMPCoreP__IPAddress__changed(bool valid)
#line 109
{
}

# 142 "/home/bo/tinyos-morten/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__IPAddress__changed(bool global_valid)
#line 142
{
}

# 192 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
static inline void UdpP__IPAddress__changed(bool global_valid)
#line 192
{
}

# 937 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static inline void RPLRankP__IPAddress__changed(bool global_valid)
#line 937
{
}

# 677 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static inline void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__changed(bool global_valid)
#line 677
{
}

# 398 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static inline void /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__changed(bool global_valid)
#line 398
{
}

# 133 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline void ICMPPingP__IPAddress__changed(bool global_valid)
#line 133
{
}

# 56 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static void IPAddressP__IPAddress__changed(bool valid){
#line 56
  ICMPPingP__IPAddress__changed(valid);
#line 56
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__IPAddress__changed(valid);
#line 56
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__IPAddress__changed(valid);
#line 56
  RPLRankP__IPAddress__changed(valid);
#line 56
  UdpP__IPAddress__changed(valid);
#line 56
  IPNeighborDiscoveryP__IPAddress__changed(valid);
#line 56
  ICMPCoreP__IPAddress__changed(valid);
#line 56
  IPForwardingEngineP__IPAddress__changed(valid);
#line 56
  IPStackControlP__IPAddress__changed(valid);
#line 56
  NoDhcpC__IPAddress__changed(valid);
#line 56
}
#line 56
# 141 "/home/bo/tinyos-morten/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static inline void IPNeighborDiscoveryP__Ieee154Address__changed(void )
#line 141
{
}

# 166 "/home/bo/tinyos-morten/tos/lib/net/blip/IPAddressP.nc"
static inline void IPAddressP__Ieee154Address__changed(void )
#line 166
{
}

# 10 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static void Ieee154AddressP__Ieee154Address__changed(void ){
#line 10
  IPAddressP__Ieee154Address__changed();
#line 10
  IPNeighborDiscoveryP__Ieee154Address__changed();
#line 10
}
#line 10
# 41 "/home/bo/tinyos-morten/tos/lib/net/blip/Ieee154AddressP.nc"
static inline error_t Ieee154AddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr)
#line 41
{
  Ieee154AddressP__m_saddr[sim_node()] = addr;



  Ieee154AddressP__Ieee154Address__changed();
  return SUCCESS;
}

# 8 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/Ieee154Address.nc"
inline static error_t IPAddressP__Ieee154Address__setShortAddr(ieee154_saddr_t addr){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = Ieee154AddressP__Ieee154Address__setShortAddr(addr);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 136 "/home/bo/tinyos-morten/tos/lib/net/blip/IPAddressP.nc"
static inline error_t IPAddressP__IPAddress__setAddress(struct in6_addr *addr)
#line 136
{
  IPAddressP__m_addr[sim_node()] = *addr;





  if (
#line 139
  IPAddressP__m_addr[sim_node()].in6_u.u6_addr8[8] == 0 && 
  IPAddressP__m_addr[sim_node()].in6_u.u6_addr8[9] == 0 && 
  IPAddressP__m_addr[sim_node()].in6_u.u6_addr8[10] == 0 && 
  IPAddressP__m_addr[sim_node()].in6_u.u6_addr8[11] == 0 && 
  IPAddressP__m_addr[sim_node()].in6_u.u6_addr8[12] == 0 && 
  IPAddressP__m_addr[sim_node()].in6_u.u6_addr8[13] == 0) {
      IPAddressP__Ieee154Address__setShortAddr((((uint16_t )IPAddressP__m_addr[sim_node()].in6_u.u6_addr16[7] >> 8) | ((uint16_t )IPAddressP__m_addr[sim_node()].in6_u.u6_addr16[7] << 8)) & 0xffff);
      IPAddressP__m_short_addr[sim_node()] = TRUE;
    }
  else 
#line 147
    {
      IPAddressP__Ieee154Address__setShortAddr(0);
      IPAddressP__m_short_addr[sim_node()] = FALSE;
    }


  IPAddressP__m_valid_addr[sim_node()] = TRUE;
  IPAddressP__IPAddress__changed(TRUE);
  return SUCCESS;
}

# 52 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/IPAddress.nc"
inline static error_t NoDhcpC__IPAddress__setAddress(struct in6_addr *addr){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = IPAddressP__IPAddress__setAddress(addr);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 49 "/home/bo/tinyos-morten/tos/lib/net/blip/dhcp/NoDhcpC.nc"
static inline void NoDhcpC__Boot__booted(void )
#line 49
{
  struct in6_addr addr;

#line 51
  memset(&addr, 0, sizeof addr);
  inet_pton6("fec0::", &addr);
  addr.in6_u.u6_addr16[7] = (((uint16_t )TOS_NODE_ID << 8) | ((uint16_t )TOS_NODE_ID >> 8)) & 0xffff;
  NoDhcpC__IPAddress__setAddress(&addr);
}

# 144 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static inline void IPDispatchP__reconstruct_clear(void *ent)
#line 144
{
  struct lowpan_reconstruct *recon = (struct lowpan_reconstruct *)ent;

#line 146
  memset((uint8_t *)& recon->r_meta, 0, sizeof(struct ip6_metadata ));
  recon->r_timeout = T_UNUSED;
  recon->r_buf = (void *)0;
}

#line 203
static inline void IPDispatchP__Boot__booted(void )
#line 203
{
  IPDispatchP__BlipStatistics__clear();

  ip_malloc_init();


  table_init(&IPDispatchP__recon_cache[sim_node()], IPDispatchP__recon_data[sim_node()], sizeof(struct lowpan_reconstruct ), N_RECONSTRUCTIONS);
  table_map(&IPDispatchP__recon_cache[sim_node()], IPDispatchP__reconstruct_clear);

  IPDispatchP__SplitControl__start();
}

# 12 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/UDP.nc"
inline static error_t UDPShellP__UDP__bind(uint16_t port){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = UdpP__UDP__bind(2U, port);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 5 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/ShellCommandP.nc"
static inline char */*RouteCmdC.ShellCommandC.ShellCommandP*/ShellCommandP__0__RegisterShellCommand__getCommandName(void )
#line 5
{
  return "route";
}

# 290 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static inline char *UDPShellP__RegisterShellCommand__default__getCommandName(uint8_t cmd_id)
#line 290
{
  return (void *)0;
}

# 3 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/RegisterShellCommand.nc"
inline static char *UDPShellP__RegisterShellCommand__getCommandName(uint8_t arg_0x414de650){
#line 3
  char *__nesc_result;
#line 3

#line 3
  switch (arg_0x414de650) {
#line 3
    case /*RouteCmdC.ShellCommandC*/ShellCommandC__0__CMD_ID:
#line 3
      __nesc_result = /*RouteCmdC.ShellCommandC.ShellCommandP*/ShellCommandP__0__RegisterShellCommand__getCommandName();
#line 3
      break;
#line 3
    default:
#line 3
      __nesc_result = UDPShellP__RegisterShellCommand__default__getCommandName(arg_0x414de650);
#line 3
      break;
#line 3
    }
#line 3

#line 3
  return __nesc_result;
#line 3
}
#line 3
# 81 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__Boot__booted(void )
#line 81
{
  int i;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 83
    {
      UDPShellP__uptime[sim_node()] = 0;
    }
#line 85
    __nesc_atomic_end(__nesc_atomic); }



  for (i = 0; i < UDPShellP__N_EXTERNAL; i++) {
      UDPShellP__externals[sim_node()][i].c_name[UDPShellP__CMDNAMSIZ - 1] = '\0';
      strncpy(UDPShellP__externals[sim_node()][i].c_name, UDPShellP__RegisterShellCommand__getCommandName(i), UDPShellP__CMDNAMSIZ);
      UDPShellP__externals[sim_node()][i].c_len = strlen(UDPShellP__externals[sim_node()][i].c_name);
    }
  UDPShellP__UDP__bind(2000);
}

# 60 "/home/bo/tinyos-morten/tos/interfaces/Boot.nc"
inline static void SimMainP__Boot__booted(void ){
#line 60
  UDPShellP__Boot__booted();
#line 60
  IPDispatchP__Boot__booted();
#line 60
  NoDhcpC__Boot__booted();
#line 60
  UDPEchoP__Boot__booted();
#line 60
}
#line 60
# 144 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static inline error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__turnOn(void )
#line 144
{

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()]) {
      sim_log_error(182U, "Driver.error", "Driver: already ON\n");
      return EALREADY;
    }
  else 
#line 149
    {
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()] = TRUE;
      sim_log_debug(183U, "Driver.debug", "Driver: turning radio ON\n");
      /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__stateDoneTask__postTask();
      return SUCCESS;
    }
}

# 56 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioState__turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 55 "/home/bo/tinyos-morten/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP__SimMote__getEuid(void )
#line 55
{
  return SimMoteP__euid[sim_node()];
}

#line 58
static inline void SimMoteP__SimMote__setEuid(long long int e)
#line 58
{
  SimMoteP__euid[sim_node()] = e;
}







static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size)
#line 68
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 85
static inline void SimMoteP__SimMote__turnOff(void )
#line 85
{
  SimMoteP__isOn[sim_node()] = FALSE;
}

#line 157
static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e)
#line 157
{
  char buf[128];

#line 159
  sim_print_now(buf, 128);

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(104U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP__SimMote__turnOn();
}

# 64 "/home/bo/tinyos-morten/tos/lib/timer/Timer.nc"
inline static void ICMPPingP__PingTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(10U, dt);
#line 64
}
#line 64
#line 92
inline static bool ICMPPingP__PingTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(10U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 84 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPPingP.nc"
static inline error_t ICMPPingP__ICMPPing__ping(uint8_t client, struct in6_addr *target, 
uint16_t period, 
uint16_t n)
#line 86
{
  if (ICMPPingP__PingTimer__isRunning()) {
#line 87
    return ERETRY;
    }
#line 88
  ICMPPingP__PingTimer__startPeriodic(period);
  ip_memcpy((uint8_t *)&ICMPPingP__ping_dest[sim_node()], (uint8_t *)target, 16);
  ICMPPingP__ping_n[sim_node()] = n;
  ICMPPingP__ping_seq[sim_node()] = 0;
  ICMPPingP__ping_rcv[sim_node()] = 0;
  ICMPPingP__ping_ident[sim_node()] = client;
  return SUCCESS;
}

# 6 "/home/bo/tinyos-morten/tos/lib/net/blip/interfaces/ICMPPing.nc"
inline static error_t UDPShellP__ICMPPing__ping(struct in6_addr *target, uint16_t period, uint16_t n){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = ICMPPingP__ICMPPing__ping(0U, target, period, n);
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 177 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static inline void UDPShellP__action_uptime(int argc, char **argv)
#line 177
{
}










static inline void UDPShellP__action_ident(int argc, char **argv)
#line 189
{
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], UDPShellP__ident_string[sim_node()], strlen(UDPShellP__ident_string[sim_node()]));
}

# 46 "/home/bo/tinyos-morten/tos/lib/tossim/sim_event_queue.c"
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

# 246 "/home/bo/tinyos-morten/tos/lib/tossim/sim_log.c"
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

# 121 "/home/bo/tinyos-morten/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 197 "/home/bo/tinyos-morten/tos/lib/tossim/heap.c"
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

# 55 "/home/bo/tinyos-morten/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 114 "/home/bo/tinyos-morten/tos/lib/tossim/heap.c"
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

# 60 "/home/bo/tinyos-morten/tos/lib/tossim/sim_event_queue.c"
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

# 57 "/home/bo/tinyos-morten/tos/lib/tossim/sim_tossim.c"
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

# 234 "/home/bo/tinyos-morten/tos/lib/tossim/sim_log.c"
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

# 67 "/home/bo/tinyos-morten/tos/lib/tossim/sim_noise.c"
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

# 102 "/home/bo/tinyos-morten/tos/lib/tossim/sim_tossim.c"
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

# 134 "/home/bo/tinyos-morten/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 134
{
  bool result;
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  result = SimMoteP__SimMote__isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/home/bo/tinyos-morten/tos/lib/tossim/sim_log.c"
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

# 156 "/home/bo/tinyos-morten/tos/lib/tossim/sim_tossim.c"
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

# 57 "/home/bo/tinyos-morten/tos/lib/tossim/sim_csma.c"
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

# 16 "/home/bo/tinyos-morten/tos/lib/tossim/sim_gain.c"
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

# 84 "/home/bo/tinyos-morten/tos/lib/tossim/sim_noise.c"
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

# 103 "/home/bo/tinyos-morten/tos/lib/tossim/randomlib.c"
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

# 364 "/home/bo/tinyos-morten/tos/lib/tossim/sim_noise.c"
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

# 261 "/home/bo/tinyos-morten/tos/lib/tossim/sim_log.c"
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

# 54 "/home/bo/tinyos-morten/tos/lib/tossim/sim_packet.c"
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

# 82 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/AMPacketInjectorP.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 82
{
  sim_event_t *evt = AMPacketInjectorP__allocate_deliver_event(node, msg, t);

#line 84
  sim_queue_insert(evt);
}

# 232 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

#line 279
static uint8_t /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void )
{
  return /*TossimRadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength();
}

# 110 "/home/bo/tinyos-morten/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 90;
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

# 51 "/home/bo/tinyos-morten/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP__Scheduler__init();





      SimMainP__PlatformInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;





      SimMainP__SoftwareInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(95U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP__Boot__booted();





  return 0;
}

# 180 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP__popTask();
      if (nextTask == SimSchedulerBasicP__NO_TASK) 
        {
          sim_log_debug(97U, "Scheduler", "Told to run next task, but no task to run.\n");
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
  sim_log_debug(98U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

# 181 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static uint16_t RPLRankP__RPLRankInfo__getRank(struct in6_addr *node)
#line 181
{
  uint8_t indexset;
  struct in6_addr my_addr;


  RPLRankP__IPAddress__getGlobalAddr(&my_addr);




  if (!memcmp(&my_addr, node, sizeof(struct in6_addr ))) {

      if (RPLRankP__ROOT[sim_node()]) {
          RPLRankP__nodeRank[sim_node()] = ROOT_RANK;
        }
      return RPLRankP__nodeRank[sim_node()];
    }

  indexset = RPLRankP__getParent(node);

  if (indexset != 20) {
      return RPLRankP__parentSet[sim_node()][indexset].rank;
    }

  return 0x1234;
}

#line 227
static uint8_t RPLRankP__getParent(struct in6_addr *node)
#line 227
{
  uint8_t indexset;

#line 229
  if (RPLRankP__parentNum[sim_node()] == 0) {
      return 20;
    }
  for (indexset = 0; indexset < 20; indexset++) {

      if (!memcmp(& RPLRankP__parentSet[sim_node()][indexset].parentIP, node, sizeof(struct in6_addr )) && 
      RPLRankP__parentSet[sim_node()][indexset].valid) {
          return indexset;
        }
    }
  return 20;
}

# 69 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static void /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(326U, "QueueC", "head <-");
  for (i = /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[sim_node()]; i < /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[sim_node()] + /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[sim_node()]; i++) {
      sim_log_debug_clear(327U, "QueueC", "[");
      for (j = 0; j < sizeof(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[sim_node()][i % 5])[j];

#line 77
          sim_log_debug_clear(328U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(329U, "QueueC", "] ");
    }
  sim_log_debug_clear(330U, "QueueC", "<- tail\n");
}

# 37 "/home/bo/tinyos-morten/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__getLLAddr(struct in6_addr *addr)
#line 37
{
  ieee154_panid_t panid = IPAddressP__Ieee154Address__getPanId();
  ieee154_saddr_t saddr = IPAddressP__Ieee154Address__getShortAddr();
  ieee154_laddr_t laddr = IPAddressP__Ieee154Address__getExtAddr();

  memset(addr->in6_u.u6_addr8, 0, 16);
  addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
  if (IPAddressP__m_short_addr[sim_node()]) {
      addr->in6_u.u6_addr16[4] = (((uint16_t )panid << 8) | ((uint16_t )panid >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[5] = (((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[6] = (((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff;
      addr->in6_u.u6_addr16[7] = (((uint16_t )saddr << 8) | ((uint16_t )saddr >> 8)) & 0xffff;
      addr->in6_u.u6_addr8[8] &= ~0x2;
    }
  else 
#line 50
    {
      int i;

#line 52
      for (i = 0; i < 8; i++) 
        addr->in6_u.u6_addr8[8 + i] = laddr.data[7 - i];
      addr->in6_u.u6_addr8[8] ^= 0x2;
    }

  return TRUE;
}

# 27 "/home/bo/tinyos-morten/tos/lib/net/blip/Ieee154AddressP.nc"
static ieee154_laddr_t Ieee154AddressP__Ieee154Address__getExtAddr(void )
#line 27
{
  ieee154_laddr_t addr = Ieee154AddressP__LocalIeeeEui64__getId();
  int i;
  uint8_t tmp;


  for (i = 0; i < 4; i++) {
      tmp = addr.data[i];
      addr.data[i] = addr.data[7 - i];
      addr.data[7 - i] = tmp;
    }
  return addr;
}

# 208 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static error_t RPLRankP__RPLRankInfo__getDefaultRoute(struct in6_addr *next)
#line 208
{


  if (RPLRankP__parentNum[sim_node()]) {
      ip_memcpy((uint8_t *)next, (uint8_t *)RPLRankP__RPLOF__getParent(), sizeof(struct in6_addr ));
      return SUCCESS;
    }
  return FAIL;
}

# 51 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static struct in6_addr *RPLOF0P__RPLOF__getParent(void )
#line 51
{
  parent_t *parentNode = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent[sim_node()]);

#line 53
  return & parentNode->parentIP;
}

# 98 "/home/bo/tinyos-morten/tos/lib/net/blip/icmp/ICMPCoreP.nc"
static error_t ICMPCoreP__ICMP_IP__send(uint8_t type, struct ip6_packet *pkt)
#line 98
{
  struct icmp6_hdr *req = (struct icmp6_hdr *)pkt->ip6_data->iov_base;

#line 100
  if (pkt->ip6_data->iov_len >= sizeof(struct icmp6_hdr ) && 
  pkt->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_nxt == IANA_ICMP) {
      req->cksum = 0;
      req->cksum = (((uint16_t )msg_cksum(& pkt->ip6_hdr, pkt->ip6_data, IANA_ICMP) << 8) | ((uint16_t )msg_cksum(& pkt->ip6_hdr, pkt->ip6_data, IANA_ICMP) >> 8)) & 0xffff;
    }
  sim_log_debug(316U, "ICMPCore", "ICMPCore:Send @ %s\n", sim_time_string());
  return ICMPCoreP__IP__send(pkt);
}

# 33 "/home/bo/tinyos-morten/tos/lib/net/blip/IPProtocolsP.nc"
static error_t IPProtocolsP__IP__send(uint8_t nxt_hdr, struct ip6_packet *msg)
#line 33
{
  msg->ip6_hdr.ip6_ctlun.ip6_un2_vfc = 0x60;
  msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_hlim = 16;
  sim_log_debug(262U, "IPProtocols", "IP Protocol send - nxt_hdr: %i iov_len: %i plen: %u\n", nxt_hdr, iov_len(msg->ip6_data), (((uint16_t )msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen >> 8) | ((uint16_t )msg->ip6_hdr.ip6_ctlun.ip6_un1.ip6_un1_plen << 8)) & 0xffff);

  return IPProtocolsP__SubIP__send(msg);
}

# 132 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static struct route_entry *IPForwardingEngineP__ForwardingTable__lookupRoute(const uint8_t *prefix, 
int prefix_len_bits)
#line 133
{
  int i;

#line 135
  for (i = 0; i < ROUTE_TABLE_SZ; i++) {
      if (IPForwardingEngineP__routing_table[sim_node()][i].valid && (
      IPForwardingEngineP__routing_table[sim_node()][i].prefixlen == 0 || (
      memcmp(prefix, IPForwardingEngineP__routing_table[sim_node()][i].prefix.in6_u.u6_addr8, (
      prefix_len_bits < IPForwardingEngineP__routing_table[sim_node()][i].prefixlen ? prefix_len_bits : IPForwardingEngineP__routing_table[sim_node()][i].prefixlen) / 8) == 0 && 
      prefix_len_bits))) {

          return &IPForwardingEngineP__routing_table[sim_node()][i];
        }
    }
  return (void *)0;
}

# 144 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 205 "/home/bo/tinyos-morten/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(99U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(100U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP__sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP__sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP__sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 161 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP__Timer0__get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP__last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP__sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP__shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(150U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP__last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP__lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP__lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP__lastZero[sim_node()];
}

# 106 "/home/bo/tinyos-morten/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 106
{
  long long int result;
  int tmp = sim_node();

#line 109
  sim_set_node(mote);
  result = SimMoteP__SimMote__getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP__Timer0__getScale();

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
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 457
{
  sim_log_debug(156U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 87 "/home/bo/tinyos-morten/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__isLocalAddress(struct in6_addr *addr)
#line 87
{
  ieee154_panid_t panid = IPAddressP__Ieee154Address__getPanId();
  ieee154_saddr_t saddr = IPAddressP__Ieee154Address__getShortAddr();
  ieee154_laddr_t eui = IPAddressP__Ieee154Address__getExtAddr();

  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff)) {


      if (
#line 94
      IPAddressP__m_short_addr[sim_node()] && 
      addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff) && 
      addr->in6_u.u6_addr16[6] == ((((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff)) {
          if (((((uint16_t )addr->in6_u.u6_addr16[4] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[4] << 8)) & 0xffff) == (panid & ~0x200) && (((
          (uint16_t )addr->in6_u.u6_addr16[7] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[7] << 8)) & 0xffff) == saddr) {
              return TRUE;
            }
          else 
#line 100
            {
              return FALSE;
            }
        }

      return addr->in6_u.u6_addr8[8] == (eui.data[7] ^ 0x2) && 
      addr->in6_u.u6_addr8[9] == eui.data[6] && 
      addr->in6_u.u6_addr8[10] == eui.data[5] && 
      addr->in6_u.u6_addr8[11] == eui.data[4] && 
      addr->in6_u.u6_addr8[12] == eui.data[3] && 
      addr->in6_u.u6_addr8[13] == eui.data[2] && 
      addr->in6_u.u6_addr8[14] == eui.data[1] && 
      addr->in6_u.u6_addr8[15] == eui.data[0];
    }
  else {
#line 114
    if (addr->in6_u.u6_addr8[0] == 0xff) {

        if ((addr->in6_u.u6_addr8[1] & 0x0f) <= 2) {

            return TRUE;
          }
      }
    else {
#line 120
      if (memcmp(addr->in6_u.u6_addr8, IPAddressP__m_addr[sim_node()].in6_u.u6_addr8, 16) == 0) {
          return TRUE;
        }
      }
    }
#line 123
  return FALSE;
}

# 102 "/home/bo/tinyos-morten/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static error_t IPNeighborDiscoveryP__IPForward__send(struct in6_addr *next, struct ip6_packet *msg, void *ptr)
#line 102
{
  struct ieee154_frame_addr fr_addr;
  struct in6_addr local_addr;

#line 105
  fr_addr.ieee_dstpan = IPNeighborDiscoveryP__Ieee154Address__getPanId();
  IPNeighborDiscoveryP__IPAddress__getLLAddr(&local_addr);

  sim_log_debug(275U, "IPND", "IPND: IPNeighborDiscovery - send @ %s - next: \n", sim_time_string());
  ;





  if (IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(&local_addr, & fr_addr.ieee_src) != SUCCESS) {
      sim_log_debug(276U, "IPND", "IPND - local address resolution failed\n");
      return FAIL;
    }

  if (IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(next, & fr_addr.ieee_dst) != SUCCESS) {
      sim_log_debug(277U, "IPND", "IPND - next-hop address resolution failed\n");
      return FAIL;
    }




  return IPNeighborDiscoveryP__IPLower__send(&fr_addr, msg, ptr);
}

#line 65
static error_t IPNeighborDiscoveryP__NeighborDiscovery__resolveAddress(struct in6_addr *addr, 
ieee154_addr_t *link_addr)
#line 66
{
  ieee154_panid_t panid = IPNeighborDiscoveryP__Ieee154Address__getPanId();

  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff)) {
      if (addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00FF << 8) | ((uint16_t )0x00FF >> 8)) & 0xffff) && 
      addr->in6_u.u6_addr16[6] == ((((uint16_t )0xFE00 << 8) | ((uint16_t )0xFE00 >> 8)) & 0xffff)) {

          if (((((uint16_t )addr->in6_u.u6_addr16[4] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[4] << 8)) & 0xffff) == (panid & ~0x0200)) {
              link_addr->ieee_mode = IEEE154_ADDR_SHORT;
              link_addr->ieee_addr.saddr = (((uint16_t )addr->in6_u.u6_addr16[7] >> 8) | ((uint16_t )addr->in6_u.u6_addr16[7] << 8)) & 0xffff;
            }
          else 
#line 76
            {
              return FAIL;
            }
        }
      else 
#line 79
        {
          int i;

#line 81
          link_addr->ieee_mode = IEEE154_ADDR_EXT;
          for (i = 0; i < 8; i++) 
            link_addr->ieee_addr.laddr.data[i] = addr->in6_u.u6_addr8[15 - i];
          link_addr->ieee_addr.laddr.data[7] ^= 0x2;
        }
      return SUCCESS;
    }
  else {
#line 87
    if (addr->in6_u.u6_addr8[0] == 0xff) {

        if ((addr->in6_u.u6_addr8[1] & 0x0f) == 0x02) {
            link_addr->ieee_mode = IEEE154_ADDR_SHORT;
            link_addr->ieee_addr.saddr = IEEE154_BROADCAST_ADDR;
            return SUCCESS;
          }
      }
    }
  return FAIL;
}

# 103 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
static error_t /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__Pool__put(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[sim_node()] >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[sim_node()] + /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[sim_node()];

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[sim_node()][emptyIndex] = newVal;
      /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[sim_node()]++;
      sim_log_debug(302U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[sim_node()]);
      return SUCCESS;
    }
}

#line 103
static error_t /*IPDispatchC.FragPool.PoolP*/PoolP__0__Pool__put(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*IPDispatchC.FragPool.PoolP*/PoolP__0__free[sim_node()] >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*IPDispatchC.FragPool.PoolP*/PoolP__0__index[sim_node()] + /*IPDispatchC.FragPool.PoolP*/PoolP__0__free[sim_node()];

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[sim_node()][emptyIndex] = newVal;
      /*IPDispatchC.FragPool.PoolP*/PoolP__0__free[sim_node()]++;
      sim_log_debug(298U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*IPDispatchC.FragPool.PoolP*/PoolP__0__free[sim_node()]);
      return SUCCESS;
    }
}

# 149 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack)
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;

#line 151
  if (ack) {
    (__nesc_temp42 = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) | (1 << IEEE154_FCF_ACK_REQ)));
    }
  else {
#line 154
    (__nesc_temp43 = /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) & ~ (uint16_t )(1 << IEEE154_FCF_ACK_REQ)));
    }
}

#line 77
static ieee154_header_t */*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

#line 102
static void /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg)
{





  __nesc_hton_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data, (__nesc_ntoh_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data) & /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE)
   | /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE);
}

# 54 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static flags_metadata_t */*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}

# 16 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/ieee154_header.c"
static uint8_t *IPDispatchP__pack_ieee154_header(uint8_t *buf, size_t cnt, 
struct ieee154_frame_addr *frame)
#line 17
{
  uint8_t *ieee_hdr = buf;
  uint16_t fcf;







  buf = buf + IEEE154_MIN_HDR_SZ;
  if (frame->ieee_dst.ieee_mode == IEEE154_ADDR_SHORT) {
#line 28
      uint16_t tmpval = frame->ieee_dst.ieee_addr.saddr;

#line 28
      ip_memcpy((uint8_t *)buf, (uint8_t *)&tmpval, 2);
#line 28
      buf += 2;
    }
  else 
#line 28
    {
#line 28
      ip_memcpy((uint8_t *)buf, (uint8_t *)& frame->ieee_dst.ieee_addr.laddr, 8);
#line 28
      buf += 8;
    }
#line 28
  ;
  if (frame->ieee_src.ieee_mode == IEEE154_ADDR_SHORT) {
#line 29
      uint16_t tmpval = frame->ieee_src.ieee_addr.saddr;

#line 29
      ip_memcpy((uint8_t *)buf, (uint8_t *)&tmpval, 2);
#line 29
      buf += 2;
    }
  else 
#line 29
    {
#line 29
      ip_memcpy((uint8_t *)buf, (uint8_t *)& frame->ieee_src.ieee_addr.laddr, 8);
#line 29
      buf += 8;
    }
#line 29
  ;

  fcf = IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE;
  fcf |= frame->ieee_src.ieee_mode << IEEE154_FCF_SRC_ADDR_MODE;
  fcf |= frame->ieee_dst.ieee_mode << IEEE154_FCF_DEST_ADDR_MODE;

  ieee_hdr[1] = fcf & 0xff;
  ieee_hdr[2] = fcf >> 8;
  ieee_hdr[4] = frame->ieee_dstpan & 0xff;
  ieee_hdr[5] = frame->ieee_dstpan >> 8;

  return buf;
}

# 39 "/home/bo/tinyos-morten/tos/lib/net/blip/IPNeighborDiscoveryP.nc"
static int IPNeighborDiscoveryP__NeighborDiscovery__matchContext(struct in6_addr *addr, 
uint8_t *ctx)
#line 40
{
  struct in6_addr me;

#line 42
  if (!IPNeighborDiscoveryP__IPAddress__getGlobalAddr(&me)) {
#line 42
    return 0;
    }
#line 43
  if (memcmp(me.in6_u.u6_addr8, addr->in6_u.u6_addr8, 8) == 0) {
      *ctx = 0;
      return 64;
    }
  else 
#line 46
    {
      return 0;
    }
}

# 171 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static uint8_t *IPDispatchP__pack_address(uint8_t *buf, struct in6_addr *addr, int context_match_len, 
ieee154_addr_t *l2addr, ieee154_panid_t pan, uint8_t *flags)
#line 172
{
  *flags = 0;
  if (addr->in6_u.u6_addr16[0] == ((((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff) && addr->in6_u.u6_addr16[1] == 0 && addr->in6_u.u6_addr16[2] == 0 && addr->in6_u.u6_addr16[3] == 0) {



      if (
#line 177
      addr->in6_u.u6_addr16[4] == 0 && 
      addr->in6_u.u6_addr16[5] == 0 && 
      addr->in6_u.u6_addr16[6] == 0) {

          *flags |= LOWPAN_IPHC_AM_16;
          ip_memcpy((uint8_t *)buf, (uint8_t *)&addr->in6_u.u6_addr8[14], 2);
          return buf += 2;
        }
      else {



        if ((
#line 185
        addr->in6_u.u6_addr16[4] == ((((uint16_t )pan << 8) | ((uint16_t )pan >> 8)) & 0xffff) && 
        addr->in6_u.u6_addr16[5] == ((((uint16_t )0x00ff << 8) | ((uint16_t )0x00ff >> 8)) & 0xffff) && 
        addr->in6_u.u6_addr16[6] == ((((uint16_t )0xfe00 << 8) | ((uint16_t )0xfe00 >> 8)) & 0xffff) && (
        l2addr->ieee_mode == IEEE154_ADDR_SHORT && 
        addr->in6_u.u6_addr16[7] == ((((uint16_t )l2addr->ieee_addr.saddr << 8) | ((uint16_t )l2addr->ieee_addr.saddr >> 8)) & 0xffff))) || (

        l2addr->ieee_mode == IEEE154_ADDR_EXT && 
        IPDispatchP__iid_eui_cmp(&addr->in6_u.u6_addr8[8], l2addr->ieee_addr.laddr.data))) {

            *flags |= LOWPAN_IPHC_AM_0;
            return buf;
          }
        else 
#line 196
          {
            *flags |= LOWPAN_IPHC_AM_64;
            ip_memcpy((uint8_t *)buf, (uint8_t *)&addr->in6_u.u6_addr8[8], 8);
            return buf + 8;
          }
        }
    }
  else {
#line 201
    if (context_match_len > 0) {
        int extra = 0;

        *flags |= LOWPAN_IPHC_AC_CONTEXT;
        if (context_match_len == 128) {
            *flags |= LOWPAN_IPHC_AM_0;
          }
        else {
#line 207
          if (IPDispatchP__bit_range_zero_p(&addr->in6_u.u6_addr8[0], context_match_len, 112) == 0) {
              *flags |= LOWPAN_IPHC_AM_16;
              ip_memcpy((uint8_t *)buf, (uint8_t *)&addr->in6_u.u6_addr8[14], 2);
              extra = 2;
            }
          else {
#line 211
            if (IPDispatchP__bit_range_zero_p(&addr->in6_u.u6_addr8[0], context_match_len, 64) == 0) {
                *flags |= LOWPAN_IPHC_AM_64;
                ip_memcpy((uint8_t *)buf, (uint8_t *)&addr->in6_u.u6_addr8[8], 8);
                extra = 8;
              }
            else 
#line 215
              {
                *flags |= LOWPAN_IPHC_AM_128;
                *flags &= ~LOWPAN_IPHC_AC_CONTEXT;
                ip_memcpy((uint8_t *)buf, (uint8_t *)&addr->in6_u.u6_addr8[0], 16);
                extra = 16;
              }
            }
          }
#line 221
        return buf + extra;
      }
    else {
#line 222
      if (addr->in6_u.u6_addr16[0] == 0 && addr->in6_u.u6_addr16[1] == 0 && addr->in6_u.u6_addr16[2] == 0 && addr->in6_u.u6_addr16[3] == 0 && addr->in6_u.u6_addr16[4] == 0 && addr->in6_u.u6_addr16[5] == 0 && addr->in6_u.u6_addr16[6] == 0 && addr->in6_u.u6_addr16[7] == 0) {

          *flags |= LOWPAN_IPHC_AC_CONTEXT | LOWPAN_IPHC_AM_128;
          return buf;
        }
      else 
#line 226
        {

          *flags |= LOWPAN_IPHC_AM_128;
          ip_memcpy((uint8_t *)buf, (uint8_t *)addr->in6_u.u6_addr8, 16);
          return buf + 16;
        }
      }
    }
}

#line 78
static int IPDispatchP__bit_range_zero_p(uint8_t *buf, int start, int end)
#line 78
{
  int start_byte = start / 8;
  int end_byte = end / 8;
  int i;
  uint8_t start_mask = 0xff << (8 - start % 8);
  uint8_t end_mask = 0xff << (8 - end % 8);



  if ((buf[start_byte] & start_mask) != 0) {
      return -1;
    }
  if ((buf[end_byte] & end_mask) != 0) {
      return -1;
    }
  for (i = start_byte; i < end_byte; i++) {
      if (buf[i] != 0) {
#line 94
        return -1;
        }
    }
#line 96
  return 0;
}

# 107 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__maxPayloadLength(void )
{
  return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength();
}

#line 92
static uint8_t /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 69 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static void /*IPDispatchC.QueueC*/QueueC__0__printQueue(void )
#line 69
{

  int i;
#line 71
  int j;

#line 72
  sim_log_debug(303U, "QueueC", "head <-");
  for (i = /*IPDispatchC.QueueC*/QueueC__0__head[sim_node()]; i < /*IPDispatchC.QueueC*/QueueC__0__head[sim_node()] + /*IPDispatchC.QueueC*/QueueC__0__size[sim_node()]; i++) {
      sim_log_debug_clear(304U, "QueueC", "[");
      for (j = 0; j < sizeof(/*IPDispatchC.QueueC*/QueueC__0__queue_t ); j++) {
          uint8_t v = ((uint8_t *)&/*IPDispatchC.QueueC*/QueueC__0__queue[sim_node()][i % 12])[j];

#line 77
          sim_log_debug_clear(305U, "QueueC", "%0.2hhx", v);
        }
      sim_log_debug_clear(306U, "QueueC", "] ");
    }
  sim_log_debug_clear(307U, "QueueC", "<- tail\n");
}

# 186 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static void /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__setRetries(message_t *msg, uint16_t maxRetries)
{
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->maxRetries = maxRetries;
}

# 162 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__SENDINFO_DECR(struct send_info *si)
#line 162
{
  if (-- si->_refcount == 0) {
      IPDispatchP__SendInfoPool__put(si);
    }
}

# 103 "/home/bo/tinyos-morten/tos/system/PoolP.nc"
static error_t /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__put(/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t *newVal)
#line 103
{
  if (/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[sim_node()] >= 5) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[sim_node()] + /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[sim_node()];

#line 109
      if (emptyIndex >= 5) {
          emptyIndex -= 5;
        }
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[sim_node()][emptyIndex] = newVal;
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[sim_node()]++;
      sim_log_debug(336U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[sim_node()]);
      return SUCCESS;
    }
}

#line 88
static /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t */*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__Pool__get(void )
#line 88
{
  if (/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[sim_node()]) {
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool_t *rval = /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[sim_node()][/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[sim_node()]];

#line 91
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[sim_node()][/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[sim_node()]] = (void *)0;
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[sim_node()]--;
      /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[sim_node()]++;
      if (/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[sim_node()] == 5) {
          /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[sim_node()] = 0;
        }
      sim_log_debug(335U, "PoolP", "%s size is %i\n", __FUNCTION__, (int )/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[sim_node()]);
      return rval;
    }
  return (void *)0;
}

# 97 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static error_t /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__enqueue(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue_t newVal)
#line 97
{
  if (/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__size() < /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__Queue__maxSize()) {
      sim_log_debug(332U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[sim_node()]);
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[sim_node()][/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail[sim_node()]] = newVal;
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail[sim_node()]++;
      if (/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail[sim_node()] == 5) {
#line 102
        /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail[sim_node()] = 0;
        }
#line 103
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[sim_node()]++;
      /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 159 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 148 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLDAORoutingEngineP.nc"
static error_t /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO(void )
#line 148
{


  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RemoveTimer__startPeriodic(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time[sim_node()]);
#line 164
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__startPeriodic(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[sim_node()]);
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__DelayDAOTimer__startOneShot(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[sim_node()] + /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__Random__rand16() % 100);

  if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__GenerateDAOTimer__isRunning()) {
      return SUCCESS;
    }
  else {
#line 169
    if (/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLRouteInfo__getRank() == ROOT_RANK) {
        return SUCCESS;
      }
    else 
#line 171
      {
        return /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__RPLDAORouteInfo__startDAO();
      }
    }
}

# 69 "/home/bo/tinyos-morten/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
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
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed[sim_node()] = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 450 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLRouteInfo__resetTrickle(void )
#line 450
{
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__resetTrickleTime();
  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__isRunning()) {
    /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime();
    }
}

#line 379
static void /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__chooseAdvertiseTime(void )
#line 379
{
  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[sim_node()]) {
      return;
    }
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__stop();
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[sim_node()] = /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[sim_node()];
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[sim_node()] /= 2;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[sim_node()] += /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__Random__rand32() % /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[sim_node()];
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__TrickleTimer__startOneShot(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[sim_node()]);
}

# 89 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLOF0P.nc"
static bool RPLOF0P__RPLOF__recomputeRoutes(void )
#line 89
{

  uint8_t indexset;
  uint8_t min = 0;
#line 92
  uint8_t count = 0;
  uint16_t minDesired;
  parent_t *parentNode;

  parentNode = RPLOF0P__ParentTable__get(min);

  while (! parentNode->valid && min < 20 && parentNode->rank != INFINITE_RANK) {
      min++;
      parentNode = RPLOF0P__ParentTable__get(min);
    }

  minDesired = parentNode->etx_hop + parentNode->rank * 10;

  if (min == 20) {
      RPLOF0P__RPLOF__resetRank();
      RPLOF0P__RPLRoute__inconsistency();
      return FALSE;
    }


  parentNode = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent[sim_node()]);
  if (((((uint16_t )parentNode->parentIP.in6_u.u6_addr16[7] << 8) | ((uint16_t )parentNode->parentIP.in6_u.u6_addr16[7] >> 8)) & 0xffff) != 0) {
      RPLOF0P__minMetric[sim_node()] = parentNode->etx_hop + parentNode->rank * 10;
    }


  if (min == RPLOF0P__desiredParent[sim_node()]) {
    RPLOF0P__minMetric[sim_node()] = minDesired;
    }
  for (indexset = min + 1; indexset < 20; indexset++) {

      parentNode = RPLOF0P__ParentTable__get(indexset);




      if (
#line 127
      parentNode->valid && parentNode->etx_hop >= 0 && 
      parentNode->etx_hop + parentNode->rank * 10 < minDesired && parentNode->rank < RPLOF0P__nodeRank[sim_node()] && parentNode->rank != INFINITE_RANK) {
          count++;
          min = indexset;
          minDesired = parentNode->etx_hop + parentNode->rank * 10;

          if (min == RPLOF0P__desiredParent[sim_node()]) {

              RPLOF0P__minMetric[sim_node()] = minDesired;
            }
        }
      else {
#line 137
        if (min == RPLOF0P__desiredParent[sim_node()]) {
            RPLOF0P__minMetric[sim_node()] = minDesired;
          }
        }
    }
  parentNode = RPLOF0P__ParentTable__get(min);

  if (parentNode->rank == INFINITE_RANK) {

      RPLOF0P__desiredParent[sim_node()] = 20;
      return FAIL;
    }

  if (minDesired * 10 + 5 >= RPLOF0P__minMetric[sim_node()] * 10 && RPLOF0P__minMetric[sim_node()] != 0) {


      min = RPLOF0P__desiredParent[sim_node()];
      minDesired = RPLOF0P__minMetric[sim_node()];
    }

  RPLOF0P__minMetric[sim_node()] = minDesired;
  RPLOF0P__desiredParent[sim_node()] = min;
  parentNode = RPLOF0P__ParentTable__get(RPLOF0P__desiredParent[sim_node()]);





  RPLOF0P__ForwardingTable__addRoute((void *)0, 0, & parentNode->parentIP, RPL_IFACE);

  if (RPLOF0P__prevParent[sim_node()] != parentNode->parentIP.in6_u.u6_addr16[7]) {

      sim_log_debug(337U, "printf", "#L %u 0\n", (uint8_t )((((uint16_t )RPLOF0P__prevParent[sim_node()] << 8) | ((uint16_t )RPLOF0P__prevParent[sim_node()] >> 8)) & 0xffff));
      sim_log_debug(338U, "printf", "#L %u 1 %d\n", (uint8_t )((((uint16_t )parentNode->parentIP.in6_u.u6_addr16[7] << 8) | ((uint16_t )parentNode->parentIP.in6_u.u6_addr16[7] >> 8)) & 0xffff), TOS_NODE_ID);
      RPLOF0P__newParent[sim_node()] = TRUE;
      RPLOF0P__RPLDAO__newParent();
    }
  RPLOF0P__prevParent[sim_node()] = parentNode->parentIP.in6_u.u6_addr16[7];

  return TRUE;
}

# 265 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static void RPLRankP__RPLRankInfo__inconsistencyDetected(void )
#line 265
{
  RPLRankP__parentNum[sim_node()] = 0;
  RPLRankP__RPLOF__resetRank();
  RPLRankP__nodeRank[sim_node()] = INFINITE_RANK;
  RPLRankP__resetValid();
}

#line 255
static void RPLRankP__resetValid(void )
#line 255
{
  uint8_t indexset;

#line 257
  for (indexset = 0; indexset < 20; indexset++) {
      RPLRankP__parentSet[sim_node()][indexset].valid = FALSE;
    }
}

# 89 "/home/bo/tinyos-morten/tos/lib/net/blip/IPForwardingEngineP.nc"
static route_key_t IPForwardingEngineP__ForwardingTable__addRoute(const uint8_t *prefix, 
int prefix_len_bits, 
struct in6_addr *next_hop, 
uint8_t ifindex)
#line 92
{
  struct route_entry *entry;

  if (prefix_len_bits % 8 != 0 || prefix_len_bits > 128) {
#line 95
    return ROUTE_INVAL_KEY;
    }
#line 96
  entry = IPForwardingEngineP__ForwardingTable__lookupRoute(prefix, prefix_len_bits);
  if (entry == (void *)0 || entry->prefixlen != prefix_len_bits) {



      entry = IPForwardingEngineP__alloc_entry(prefix_len_bits);
    }
  if (entry == (void *)0) {
    return ROUTE_INVAL_KEY;
    }
  entry->prefixlen = prefix_len_bits;
  entry->ifindex = ifindex;
  ip_memcpy((uint8_t *)& entry->prefix, (uint8_t *)prefix, prefix_len_bits / 8);
  if (next_hop) {
    ip_memcpy((uint8_t *)& entry->next_hop, (uint8_t *)next_hop, sizeof(struct in6_addr ));
    }
#line 111
  return entry->key;
}

# 566 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static void RPLRankP__getNewRank(void )
#line 566
{
  uint16_t prevRank = RPLRankP__nodeRank[sim_node()];
  bool newParent = FALSE;

  newParent = RPLRankP__RPLOF__recalcualateRank();
  RPLRankP__nodeRank[sim_node()] = RPLRankP__RPLOF__getRank();

  ;
#line 573
  ;

  if (newParent) {
      RPLRankP__minRank[sim_node()] = RPLRankP__nodeRank[sim_node()];
      return;
    }

  if (RPLRankP__nodeRank[sim_node()] < RPLRankP__minRank[sim_node()]) {
      RPLRankP__minRank[sim_node()] = RPLRankP__nodeRank[sim_node()];
      return;
    }



  if (
#line 586
  RPLRankP__nodeRank[sim_node()] > prevRank && 
  RPLRankP__nodeRank[sim_node()] - RPLRankP__minRank[sim_node()] > RPLRankP__MAX_RANK_INCREASE[sim_node()] && RPLRankP__MAX_RANK_INCREASE[sim_node()] != 0) {


      ;
#line 590
      ;
      RPLRankP__nodeRank[sim_node()] = INFINITE_RANK;
      RPLRankP__minRank[sim_node()] = INFINITE_RANK;
      RPLRankP__RouteInfo__inconsistency();
      return;
    }
  RPLRankP__evictAll();
}

# 76 "/home/bo/tinyos-morten/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 76
{
  if (!ActiveMessageAddressC__set[sim_node()]) {
      ActiveMessageAddressC__addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC__set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC__addr[sim_node()];
}

# 69 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static error_t /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber[sim_node()]);
  return /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
  sim_log_debug(131U, "Bo-Unique", "Unique:Send @ %s.\n", sim_time_string());
}

# 196 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/PacketLinkLayerP.nc"
static uint16_t /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__PacketLink__getRetries(message_t *msg)
{
  return /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__getMeta(msg)->maxRetries;
}

# 85 "/home/bo/tinyos-morten/tos/system/QueueC.nc"
static /*IPDispatchC.QueueC*/QueueC__0__queue_t /*IPDispatchC.QueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*IPDispatchC.QueueC*/QueueC__0__queue_t t = /*IPDispatchC.QueueC*/QueueC__0__Queue__head();

#line 87
  sim_log_debug(308U, "QueueC", "%s: size is %hhu\n", __FUNCTION__, /*IPDispatchC.QueueC*/QueueC__0__size[sim_node()]);
  if (!/*IPDispatchC.QueueC*/QueueC__0__Queue__empty()) {
      /*IPDispatchC.QueueC*/QueueC__0__head[sim_node()]++;
      if (/*IPDispatchC.QueueC*/QueueC__0__head[sim_node()] == 12) {
#line 90
        /*IPDispatchC.QueueC*/QueueC__0__head[sim_node()] = 0;
        }
#line 91
      /*IPDispatchC.QueueC*/QueueC__0__size[sim_node()]--;
      /*IPDispatchC.QueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 274 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg)
#line 274
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];

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
static double CpmModelC__noise_hash_generation(void )
#line 126
{
  double CT = CpmModelC__timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(208U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(209U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 213 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static error_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioSend__send(message_t *msg)
#line 213
{
  sim_time_t delay;

  if (!/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[sim_node()]) {
      sim_log_error(189U, "Driver.error", "Driver: sending when radio is OFF\n");
      return EOFF;
    }

  if (/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()] != (void *)0) {
      sim_log_error(190U, "Driver.error", "Driver: already sending\n");
      return EBUSY;
    }

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()] = msg;

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__clear(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[sim_node()]);




  delay = sim_csma_rxtx_delay();
  delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[sim_node()].mote = sim_node();
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[sim_node()].time = sim_time() + delay;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[sim_node()].force = 0;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[sim_node()].cancelled = 0;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[sim_node()].handle = /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmit_start;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;

  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting[sim_node()] = TRUE;
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__Model__setPendingTransmission();
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeStamp__set(msg, /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__LocalTime__get());

  sim_log_debug(191U, "Driver.debug", "Driver: Starting transmission in %llu us...\n", delay * 1000000ULL / sim_ticks_per_sec());
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__dbg_message(msg);

  sim_queue_insert(&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[sim_node()]);

  return SUCCESS;
}

# 144 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.data) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

# 97 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static void /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error)
{

  if (/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] == /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
      sim_log_debug(170U, "Bo-SoftwareAck", "SoftwareAck:Send Done @ %s.\n", sim_time_string());
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;
      sim_log_debug(171U, "Bo-SoftwareAck", "SoftwareAck:Send Done @ %s.\n", sim_time_string());
      if (error == SUCCESS && /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[sim_node()]) && /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree()) 
        {
          /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout());
          /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
          sim_log_debug(172U, "Bo-SoftwareAck", "SoftwareAck:Send Done @ %s.\n", sim_time_string());
        }
      else 
        {
          /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[sim_node()] = /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error);
          sim_log_debug(173U, "Bo-SoftwareAck", "SoftwareAck:Send Done @ %s.\n", sim_time_string());
        }
    }
}

# 92 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static void /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, uint16_t timeout)
#line 92
{

  if (/*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()] != /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__NO_CLIENT) {

      sim_log_error(107U, "RadioAlarm.error", "RadioAlarm: already being used by client %hhu\n", /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()]);
    }
  else {

      sim_event_t *alarmEvent = sim_queue_allocate_event();

      alarmEvent->time = sim_time() + /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__clock_to_sim(timeout);
      alarmEvent->force = FALSE;
      alarmEvent->cancelled = FALSE;
      alarmEvent->handle = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm_fired;
      alarmEvent->cleanup = sim_queue_cleanup_none;

      /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()] = id;
      /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__currentEvent[sim_node()] = alarmEvent;

      sim_log_debug(108U, "RadioAlarm.debug", "RadioAlarm: scheduling event with timeout %hu for client %hhu\n", timeout, /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[sim_node()]);

      sim_queue_insert(alarmEvent);
    }
}

# 97 "/home/bo/tinyos-morten/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 131 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static uint16_t /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
#line 131
{
  uint16_t now;
  sim_time_t elapsed = sim_time() - sim_mote_start_time(sim_node());

#line 134
  elapsed = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__sim_to_clock(elapsed);
  now = (uint16_t )(elapsed & 0xFFFF);
  sim_log_debug(111U, "RadioAlarm.trace", "RadioAlarm: now is  %hu\n", now);
  return now;
}

# 72 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/CsmaLayerP.nc"
static error_t /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__RadioSend__send(message_t *msg)
{
  error_t error;

#line 75
  sim_log_debug(175U, "Bo-Csma", "Csma:Send @ %s.\n", sim_time_string());

  if (/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[sim_node()] == /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__STATE_READY) 
    {
      if (/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__Config__requiresSoftwareCCA(msg)) 
        {
          /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__txMsg[sim_node()] = msg;

          if ((error = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubCCA__request()) == SUCCESS) {
            /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[sim_node()] = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__STATE_CCA_WAIT;
            }
        }
      else {
#line 86
        if ((error = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__SubSend__send(msg)) == SUCCESS) {
          /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[sim_node()] = /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__STATE_SEND;
          }
        }
    }
  else {
#line 90
    error = EBUSY;
    }
  return error;
}

# 84 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom[sim_node()];
      /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom[sim_node()] += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
}

# 219 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[sim_node()] = error;
  if (error == SUCCESS) {
    /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 227
    /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 156 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static void /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[sim_node()] = /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
  sim_log_debug(167U, "Bo-Collision", "Collision:Send Done @ %s.\n", sim_time_string());
}

# 61 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static bool /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit) ? TRUE : FALSE;
}

# 411 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static uint8_t /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__PacketTimeSyncOffset__get(message_t *msg)
#line 411
{
  return /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__headerLength(msg) + /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 143 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/RadioAlarmP.nc"
static uint32_t /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__LocalTime__get(void )
#line 143
{
  uint32_t lt;
  sim_time_t elapsed = sim_time() - sim_mote_start_time(sim_node());

#line 146
  elapsed = /*TossimDriverLayerC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__1__sim_to_clock(elapsed);
  lt = (uint32_t )(elapsed & 0xFFFFFFFF);
  sim_log_debug(207U, "RadioAlarm.trace", "RadioAlarm: localtime is %lu\n", lt);
  return lt;
}

# 248 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC__shouldReceive(double SNR)
#line 248
{
  double prr = CpmModelC__prr_estimate_from_snr(SNR);
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

# 50 "/home/bo/tinyos-morten/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*TossimRadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(1U, msg);
#line 50
}
#line 50
# 60 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static timestamp_metadata_t */*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*TossimRadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 95 "/home/bo/tinyos-morten/tos/lib/rfxlink/sim/TossimDriverLayerP.nc"
static void /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__dbg_message(message_t *msg)
#line 95
{
  uint8_t i;

  sim_log_debug(177U, "Driver.trace", " - message (rssi: %hhu, ack: %hhu):", /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__RSSIFlag__get(msg), 0);







  for (i = 0; i < sizeof(message_t ); i++) {
      sim_log_debug_clear(178U, "Driver.trace", " %hhu", *((uint8_t *)msg + i));
    }
  sim_log_debug_clear(179U, "Driver.trace", "\n");
}

# 217 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*TossimRadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 216 "/home/bo/tinyos-morten/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r)
#line 216
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC__sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 488 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRoutingEngineP.nc"
static error_t /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__StdControl__start(void )
#line 488
{


  if (!/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[sim_node()]) {
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__init__postTask();
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RankControl__start();
      /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[sim_node()] = TRUE;
    }
  return SUCCESS;
}

# 139 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static error_t RPLRankP__StdControl__start(void )
#line 139
{
  uint8_t indexset;

  RPLRankP__DODAG_MAX[sim_node()].in6_u.u6_addr16[7] = (((uint16_t )0 << 8) | ((uint16_t )0 >> 8)) & 0xffff;

  ip_memcpy((uint8_t *)&RPLRankP__DODAGID[sim_node()], (uint8_t *)&RPLRankP__DODAG_MAX[sim_node()], sizeof(struct in6_addr ));

  for (indexset = 0; indexset < 20; indexset++) {
      RPLRankP__parentSet[sim_node()][indexset].valid = FALSE;
    }

  RPLRankP__m_running[sim_node()] = TRUE;
  return SUCCESS;
}

# 128 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static network_header_t */*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*TossimRadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 18 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan_frag.c"
static int IPDispatchP__lowpan_recon_start(struct ieee154_frame_addr *frame_addr, 
struct lowpan_reconstruct *recon, 
uint8_t *pkt, size_t len)
#line 20
{
  uint8_t *unpack_point;
#line 21
  uint8_t *unpack_end;
  struct packed_lowmsg msg;

  msg.data = pkt;
  msg.len = len;
  msg.headers = IPDispatchP__getHeaderBitmap(&msg);
  if (msg.headers == LOWMSG_NALP) {
#line 27
    return -1;
    }

  unpack_point = IPDispatchP__getLowpanPayload(&msg);
  len -= unpack_point - pkt;


  if (IPDispatchP__hasFrag1Header(&msg)) {
      IPDispatchP__getFragDgramTag(&msg, & recon->r_tag);
      IPDispatchP__getFragDgramSize(&msg, & recon->r_size);
    }
  else 
#line 37
    {
      recon->r_size = LIB6LOWPAN_MAX_LEN + LOWPAN_LINK_MTU;
    }
  recon->r_buf = ip_malloc(recon->r_size);
  if (! recon->r_buf) {
#line 41
    return -2;
    }
#line 42
  memset(recon->r_buf, 0, recon->r_size);
  recon->r_app_len = (void *)0;

  if (*unpack_point == LOWPAN_IPV6_PATTERN) {

      unpack_point++;
#line 47
      len--;
      ip_memcpy((uint8_t *)recon->r_buf, (uint8_t *)unpack_point, len);
      unpack_end = recon->r_buf + len;
    }
  else 
#line 50
    {

      unpack_end = IPDispatchP__lowpan_unpack_headers(recon, 
      frame_addr, 
      unpack_point, len);
    }

  if (!unpack_end) {
      ip_free(recon->r_buf);
      return -3;
    }

  if (!IPDispatchP__hasFrag1Header(&msg)) {
      recon->r_size = unpack_end - recon->r_buf;
    }
  recon->r_bytes_rcvd = unpack_end - recon->r_buf;
  ((struct ip6_hdr *)recon->r_buf)->ip6_ctlun.ip6_un1.ip6_un1_plen = ((
  (uint16_t )(recon->r_size - sizeof(struct ip6_hdr )) << 8) | ((uint16_t )(recon->r_size - sizeof(struct ip6_hdr )) >> 8)) & 0xffff;

  if (recon->r_app_len) {
      * recon->r_app_len = ((
      (uint16_t )(recon->r_size - (recon->r_transport_header - recon->r_buf)) << 8) | ((uint16_t )(recon->r_size - (recon->r_transport_header - recon->r_buf)) >> 8)) & 0xffff;
    }



  return 0;
}

# 476 "/home/bo/tinyos-morten/support/sdk/c/blip/lib6lowpan/lib6lowpan.c"
static uint8_t *IPDispatchP__unpack_address(struct in6_addr *addr, uint8_t dispatch, 
int context, uint8_t *buf, 
ieee154_addr_t *frame, ieee154_panid_t pan)
#line 478
{
  memset(addr, 0, 16);
  if (!(dispatch & LOWPAN_IPHC_AC_CONTEXT)) {

      switch (dispatch & LOWPAN_IPHC_AM_MASK) {
          case LOWPAN_IPHC_AM_128: 
            ip_memcpy((uint8_t *)addr, (uint8_t *)buf, 16);
          return buf + 16;
          case LOWPAN_IPHC_AM_64: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          ip_memcpy((uint8_t *)&addr->in6_u.u6_addr8[8], (uint8_t *)buf, 8);
          return buf + 8;
          case LOWPAN_IPHC_AM_16: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          ip_memcpy((uint8_t *)&addr->in6_u.u6_addr8[14], (uint8_t *)buf, 2);
          return buf + 2;
          default: 
            addr->in6_u.u6_addr16[0] = (((uint16_t )0xfe80 << 8) | ((uint16_t )0xfe80 >> 8)) & 0xffff;
          if (frame->ieee_mode == IEEE154_ADDR_EXT) {
              int i;

#line 498
              for (i = 0; i < 8; i++) 
                addr->in6_u.u6_addr8[i + 8] = frame->ieee_addr.laddr.data[7 - i];
              addr->in6_u.u6_addr8[8] ^= 0x2;
            }
          else 
#line 501
            {
              addr->in6_u.u6_addr16[4] = (((uint16_t )pan << 8) | ((uint16_t )pan >> 8)) & 0xffff;
              addr->in6_u.u6_addr8[11] = 0xff;
              addr->in6_u.u6_addr8[12] = 0xfe;
              addr->in6_u.u6_addr16[7] = (((uint16_t )frame->ieee_addr.saddr << 8) | ((uint16_t )frame->ieee_addr.saddr >> 8)) & 0xffff;
            }
          return buf;
        }
    }
  else 
#line 509
    {

      if ((dispatch & LOWPAN_IPHC_AM_MASK) == LOWPAN_IPHC_AM_128) {

          return buf;
        }
      else 
#line 514
        {
          int ctxlen = IPDispatchP__lowpan_extern_read_context(addr, context);

#line 516
          switch (dispatch & LOWPAN_IPHC_AM_MASK) {
              case LOWPAN_IPHC_AM_64: 
                ip_memcpy((uint8_t *)&addr->in6_u.u6_addr8[8], (uint8_t *)buf, 8);
              return buf + 8;
              case LOWPAN_IPHC_AM_16: 
                ip_memcpy((uint8_t *)&addr->in6_u.u6_addr8[14], (uint8_t *)buf, 2);
              return buf + 2;
              case LOWPAN_IPHC_AM_0: 


                if (ctxlen <= 64 && frame->ieee_mode == IEEE154_ADDR_EXT) {
                    int i;

#line 528
                    for (i = 0; i < 8; i++) 
                      addr->in6_u.u6_addr8[i + 8] = frame->ieee_addr.laddr.data[7 - i];
                    addr->in6_u.u6_addr8[8] ^= 0x2;
                  }
                else {
#line 531
                  if (ctxlen <= 112) {
                      memset(&addr->in6_u.u6_addr8[8], 0, 8);
                      addr->in6_u.u6_addr16[7] = (((uint16_t )frame->ieee_addr.saddr << 8) | ((uint16_t )frame->ieee_addr.saddr >> 8)) & 0xffff;
                    }
                  }
#line 535
              return buf;
            }
        }
    }
  return (void *)0;
}

# 218 "/home/bo/tinyos-morten/tos/lib/net/blip/IPDispatchP.nc"
static void IPDispatchP__deliver(struct lowpan_reconstruct *recon)
#line 218
{
  struct ip6_hdr *iph = (struct ip6_hdr *)recon->r_buf;

  sim_log_debug(280U, "IPDispatch", "IPDispatchP: deliver [%i]: \n", recon->r_bytes_rcvd);
  ;
#line 222
  ;


  iph->ip6_ctlun.ip6_un1.ip6_un1_plen = (((uint16_t )(recon->r_bytes_rcvd - sizeof(struct ip6_hdr )) << 8) | ((uint16_t )(recon->r_bytes_rcvd - sizeof(struct ip6_hdr )) >> 8)) & 0xffff;
  IPDispatchP__IPLower__recv(iph, (void *)(iph + 1), (void *)0);


  ip_free(recon->r_buf);
  recon->r_timeout = T_UNUSED;
  recon->r_buf = (void *)0;
}

# 227 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static int UDPShellP__lookup_cmd(char *cmd, int dbsize, struct UDPShellP__cmd_name *db)
#line 227
{
  int i;

#line 229
  for (i = 0; i < dbsize; i++) {

      if (
#line 230
      memcmp(cmd, db[i].c_name, db[i].c_len) == 0
       && cmd[db[i].c_len] == '\0') {
        return i;
        }
    }
#line 234
  return UDPShellP__CMD_NO_CMD;
}

#line 140
static char *UDPShellP__ShellCommand__getBuffer(uint8_t cmd_id, uint16_t len)
#line 140
{
  UDPShellP__reply_buf[sim_node()][0] = '\0';
  if (len <= MAX_REPLY_LEN) {
#line 142
    return UDPShellP__reply_buf[sim_node()];
    }
#line 143
  return (void *)0;
}

# 122 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
static error_t UdpP__UDP__sendto(uint8_t clnt, struct sockaddr_in6 *dest, void *payload, 
uint16_t len)
#line 123
{
  struct ip_iovec v[1];

#line 125
  v[0].iov_base = payload;
  v[0].iov_len = len;
  v[0].iov_next = (void *)0;
  return UdpP__UDP__sendtov(clnt, dest, &v[0]);
}

# 65 "/home/bo/tinyos-morten/tos/lib/net/blip/IPAddressP.nc"
static bool IPAddressP__IPAddress__setSource(struct ip6_hdr *hdr)
#line 65
{
  enum __nesc_unnamed4419 {
#line 66
    LOCAL, GLOBAL
  } 
#line 66
  type = GLOBAL;

  if (hdr->ip6_dst.in6_u.u6_addr8[0] == 0xff) {

      if ((hdr->ip6_dst.in6_u.u6_addr8[1] & 0x0f) <= 0x2) {
          type = LOCAL;
        }
    }
  else {
#line 73
    if (hdr->ip6_dst.in6_u.u6_addr8[0] == 0xfe) {

        if ((hdr->ip6_dst.in6_u.u6_addr8[1] & 0xf0) <= 0x80) {
            type = LOCAL;
          }
      }
    }
  if (type == LOCAL) {
      return IPAddressP__IPAddress__getLLAddr(& hdr->ip6_src);
    }
  else 
#line 82
    {
      return IPAddressP__IPAddress__getGlobalAddr(& hdr->ip6_src);
    }
}

# 303 "/home/bo/tinyos-morten/tos/lib/net/rpl/RPLRankP.nc"
static void RPLRankP__insertParent(parent_t parent)
#line 303
{
  uint8_t indexset;
  uint16_t tempEtx_hop;

  indexset = RPLRankP__getPreExistingParent(& parent.parentIP);



  if (indexset != 20) 
    {
      tempEtx_hop = RPLRankP__parentSet[sim_node()][indexset].etx_hop;
      RPLRankP__parentSet[sim_node()][indexset] = parent;

      if (tempEtx_hop > 35 && tempEtx_hop < 3) {
          tempEtx_hop = tempEtx_hop - 35;
          if (tempEtx_hop < 10) {
            tempEtx_hop = 35;
            }
        }
      else 
#line 320
        {
          tempEtx_hop = 35;
        }

      RPLRankP__parentSet[sim_node()][indexset].etx_hop = tempEtx_hop;
      RPLRankP__parentNum[sim_node()]++;

      return;
    }

  for (indexset = 0; indexset < 20; indexset++) {
      if (! RPLRankP__parentSet[sim_node()][indexset].valid) {
          RPLRankP__parentSet[sim_node()][indexset] = parent;
          RPLRankP__parentNum[sim_node()]++;
          break;
        }
    }
}


static void RPLRankP__evictParent(uint8_t indexset)
#line 340
{
  RPLRankP__parentSet[sim_node()][indexset].valid = FALSE;
  RPLRankP__parentNum[sim_node()]--;
  ;
#line 343
  ;
  if (RPLRankP__parentNum[sim_node()] == 0) {

      RPLRankP__RouteInfo__resetTrickle();
    }
}

# 73 "/home/bo/tinyos-morten/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

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
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 212 "/home/bo/tinyos-morten/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      sim_log_debug(136U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              sim_log_debug(137U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(138U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          sim_log_debug(139U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          sim_log_debug(140U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
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
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 463 "/home/bo/tinyos-morten/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 463
{
  sim_log_debug(157U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP__schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP__schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP__compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__cancel_compare();
    }
  if (HplAtm128Timer0AsyncP__Timer0__getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP__allocate_compare();

#line 273
      HplAtm128Timer0AsyncP__configure_compare(newEvent);

      HplAtm128Timer0AsyncP__compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

#line 100
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP__inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP__Timer0__overflow();
  HplAtm128Timer0AsyncP__inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP__Timer0__get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP__shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP__clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP__last_zero()) % (1 << HplAtm128Timer0AsyncP__shiftFromScale());

  sim_log_debug(160U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP__Compare__fired();
}

#line 231
static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP__Timer0__get();
  uint8_t compareVal = HplAtm128Timer0AsyncP__Compare__get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP__shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP__clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP__last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP__clock_to_sim(1 << HplAtm128Timer0AsyncP__shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(149U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 97 "/home/bo/tinyos-morten/tos/system/SimpleArbiterP.nc"
static error_t /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state[sim_node()] == /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[sim_node()] == id) {
          if (/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state[sim_node()] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 59 "/home/bo/tinyos-morten/tos/lib/net/blip/UdpP.nc"
static error_t UdpP__UDP__bind(uint8_t clnt, uint16_t port)
#line 59
{
  int i;

#line 61
  port = (((uint16_t )port << 8) | ((uint16_t )port >> 8)) & 0xffff;
  if (port > 0) {
      for (i = 0; i < UdpP__N_CLIENTS; i++) 
        if (i != clnt && UdpP__local_ports[sim_node()][i] == port) {
          return FAIL;
          }
    }
#line 67
  UdpP__local_ports[sim_node()][clnt] = port;
  return SUCCESS;
}

# 76 "/home/bo/tinyos-morten/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static error_t /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] != /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[sim_node()] = /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 90 "/home/bo/tinyos-morten/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 90
{
  long long int result;
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  result = SimMoteP__SimMote__getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 99
{
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  SimMoteP__SimMote__setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 115
{
  int result;
  int tmpID = sim_node();

#line 118
  sim_set_node(mote);
  result = SimMoteP__SimMote__getVariableInfo(name, ptr, len);
  sim_log_debug(102U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 125
{
  int tmpID = sim_node();

#line 127
  sim_set_node(mote);
  SimMoteP__startTime[sim_node()] = t;
  sim_log_debug(103U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 143
{
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  SimMoteP__SimMote__turnOn();
  sim_set_node(tmp);
}

#line 72
static void SimMoteP__SimMote__turnOn(void )
#line 72
{
  if (!SimMoteP__isOn[sim_node()]) {
      if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP__startTime[sim_node()] = sim_time();
      sim_log_debug(101U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
      SimMoteP__isOn[sim_node()] = TRUE;
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
  SimMoteP__SimMote__turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 166
{
  int tmp = sim_node();

#line 168
  sim_set_node(mote);

  if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP__bootEvent[sim_node()]->time == SimMoteP__startTime[sim_node()]) {

          SimMoteP__bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP__bootEvent[sim_node()]->time = SimMoteP__startTime[sim_node()];
  SimMoteP__bootEvent[sim_node()]->mote = mote;
  SimMoteP__bootEvent[sim_node()]->force = TRUE;
  SimMoteP__bootEvent[sim_node()]->data = (void *)0;
  SimMoteP__bootEvent[sim_node()]->handle = SimMoteP__sim_mote_boot_handle;
  SimMoteP__bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP__bootEvent[sim_node()]);

  sim_set_node(tmp);
}

# 110 "/home/bo/tinyos-morten/tos/lib/net/blip/shell/UDPShellP.nc"
static void UDPShellP__action_help(int argc, char **argv)
#line 110
{
  int i = 0;
  char *pos = UDPShellP__reply_buf[sim_node()];

#line 113
  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], UDPShellP__help_str[sim_node()], strlen(UDPShellP__help_str[sim_node()]));
  if (UDPShellP__N_EXTERNAL > 0) {
      strcpy(pos, "\t\t[");
      pos += 3;
      for (i = 0; i < UDPShellP__N_EXTERNAL; i++) {
          if (UDPShellP__externals[sim_node()][i].c_len + 4 < MAX_REPLY_LEN - (pos - UDPShellP__reply_buf[sim_node()])) {
              ip_memcpy((uint8_t *)pos, (uint8_t *)UDPShellP__externals[sim_node()][i].c_name, UDPShellP__externals[sim_node()][i].c_len);
              pos += UDPShellP__externals[sim_node()][i].c_len;
              if (i < UDPShellP__N_EXTERNAL - 1) {
                  pos[0] = ',';
                  pos[1] = ' ';
                  pos += 2;
                }
            }
          else 
#line 126
            {
              pos[0] = '.';
              pos[1] = '.';
              pos[2] = '.';
              pos += 3;
              break;
            }
        }
      * pos++ = ']';
      * pos++ = '\n';
      UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], UDPShellP__reply_buf[sim_node()], pos - UDPShellP__reply_buf[sim_node()]);
    }
}











static void UDPShellP__action_echo(int argc, char **argv)
#line 150
{
  int i;
#line 151
  int arg_len;
  char *payload = UDPShellP__reply_buf[sim_node()];

  if (argc < 2) {
#line 154
    return;
    }
#line 155
  for (i = 1; i < argc; i++) {
      arg_len = strlen(argv[i]);
      if (payload - UDPShellP__reply_buf[sim_node()] + arg_len + 1 > MAX_REPLY_LEN) {
#line 157
        break;
        }
#line 158
      ip_memcpy((uint8_t *)payload, (uint8_t *)argv[i], arg_len);
      payload += arg_len;
      *payload = ' ';
      payload++;
    }
  *(payload - 1) = '\n';

  UDPShellP__UDP__sendto(&UDPShellP__session_endpoint[sim_node()], UDPShellP__reply_buf[sim_node()], payload - UDPShellP__reply_buf[sim_node()]);
}

static void UDPShellP__action_ping6(int argc, char **argv)
#line 168
{
  struct in6_addr dest;

  if (argc < 2) {
#line 171
    return;
    }
#line 172
  inet_pton6(argv[1], &dest);
  UDPShellP__ICMPPing__ping(&dest, 1024, 10);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP__0 */

  /* Module HplAtm128GeneralIOPinP__1 */

  /* Module HplAtm128GeneralIOPinP__2 */

  /* Module HplAtm128GeneralIOPinP__3 */

  /* Module HplAtm128GeneralIOPinP__4 */

  /* Module HplAtm128GeneralIOPinP__5 */

  /* Module HplAtm128GeneralIOPinP__6 */

  /* Module HplAtm128GeneralIOPinP__7 */

  /* Module HplAtm128GeneralIOPinP__8 */

  /* Module HplAtm128GeneralIOPinP__9 */

  /* Module HplAtm128GeneralIOPinP__10 */

  /* Module HplAtm128GeneralIOPinP__11 */

  /* Module HplAtm128GeneralIOPinP__12 */

  /* Module HplAtm128GeneralIOPinP__13 */

  /* Module HplAtm128GeneralIOPinP__14 */

  /* Module HplAtm128GeneralIOPinP__15 */

  /* Module HplAtm128GeneralIOPinP__16 */

  /* Module HplAtm128GeneralIOPinP__17 */

  /* Module HplAtm128GeneralIOPinP__18 */

  /* Module HplAtm128GeneralIOPinP__19 */

  /* Module HplAtm128GeneralIOPinP__20 */

  /* Module HplAtm128GeneralIOPinP__21 */

  /* Module HplAtm128GeneralIOPinP__22 */

  /* Module HplAtm128GeneralIOPinP__23 */

  /* Module HplAtm128GeneralIOPinP__24 */

  /* Module HplAtm128GeneralIOPinP__25 */

  /* Module HplAtm128GeneralIOPinP__26 */

  /* Module HplAtm128GeneralIOPinP__27 */

  /* Module HplAtm128GeneralIOPinP__28 */

  /* Module HplAtm128GeneralIOPinP__29 */

  /* Module HplAtm128GeneralIOPinP__30 */

  /* Module HplAtm128GeneralIOPinP__31 */

  /* Module HplAtm128GeneralIOPinP__32 */

  /* Module HplAtm128GeneralIOPinP__33 */

  /* Module HplAtm128GeneralIOPinP__34 */

  /* Module HplAtm128GeneralIOPinP__35 */

  /* Module HplAtm128GeneralIOPinP__36 */

  /* Module HplAtm128GeneralIOPinP__37 */

  /* Module HplAtm128GeneralIOPinP__38 */

  /* Module HplAtm128GeneralIOPinP__39 */

  /* Module HplAtm128GeneralIOPinP__40 */

  /* Module HplAtm128GeneralIOPinP__41 */

  /* Module HplAtm128GeneralIOPinP__42 */

  /* Module HplAtm128GeneralIOPinP__43 */

  /* Module HplAtm128GeneralIOPinP__44 */

  /* Module HplAtm128GeneralIOPinP__45 */

  /* Module HplAtm128GeneralIOPinP__46 */

  /* Module HplAtm128GeneralIOPinP__47 */

  /* Module HplAtm128GeneralIOSlowPinP__0 */

  /* Module HplAtm128GeneralIOSlowPinP__1 */

  /* Module HplAtm128GeneralIOSlowPinP__2 */

  /* Module HplAtm128GeneralIOSlowPinP__3 */

  /* Module HplAtm128GeneralIOSlowPinP__4 */

  /* Module HplAtm128GeneralIOSlowPinP__5 */

  /* Module HplAtm128GeneralIOSlowPinP__6 */

  /* Module HplAtm128GeneralIOSlowPinP__7 */

  /* Module HplAtm128GeneralIOSlowPinP__8 */

  /* Module HplAtm128GeneralIOSlowPinP__9 */

  /* Module HplAtm128GeneralIOSlowPinP__10 */

  /* Module HplAtm128GeneralIOSlowPinP__11 */

  /* Module HplAtm128GeneralIOSlowPinP__12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP__m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP__euid"))
  {
    *addr = (uintptr_t)&SimMoteP__euid[__nesc_mote];
    *size = sizeof(SimMoteP__euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__startTime"))
  {
    *addr = (uintptr_t)&SimMoteP__startTime[__nesc_mote];
    *size = sizeof(SimMoteP__startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__isOn"))
  {
    *addr = (uintptr_t)&SimMoteP__isOn[__nesc_mote];
    *size = sizeof(SimMoteP__isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP__bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP__bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimRadioP */

  /* Module RadioAlarmP__0 */
  if (!strcmp(varname, "/*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[__nesc_mote];
    *size = sizeof(/*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__currentEvent"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__currentEvent[__nesc_mote];
    *size = sizeof(/*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__currentEvent[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageLayerP__0 */

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC__set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC__addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__addr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC__group"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__group[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__group[__nesc_mote]);
    return 0;
  }

  /* Module AutoResourceAcquireLayerC__0 */
  if (!strcmp(varname, "/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending[__nesc_mote];
    *size = sizeof(/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending[__nesc_mote]);
    return 0;
  }

  /* Module FcfsResourceQueueC__0 */
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail[__nesc_mote]);
    return 0;
  }

  /* Module SimpleArbiterP__0 */
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId[__nesc_mote]);
    return 0;
  }

  /* Module Ieee154MessageLayerC__0 */

  /* Module TinyosNetworkLayerC__0 */

  /* Module Ieee154PacketLayerP__0 */

  /* Module UniqueLayerP__0 */
  if (!strcmp(varname, "/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber[__nesc_mote];
    *size = sizeof(/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[__nesc_mote];
    *size = sizeof(/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[__nesc_mote]);
    return 0;
  }

  /* Module NeighborhoodP */
  if (!strcmp(varname, "NeighborhoodP__nodes"))
  {
    *addr = (uintptr_t)&NeighborhoodP__nodes[__nesc_mote];
    *size = sizeof(NeighborhoodP__nodes[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborhoodP__ages"))
  {
    *addr = (uintptr_t)&NeighborhoodP__ages[__nesc_mote];
    *size = sizeof(NeighborhoodP__ages[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborhoodP__flags"))
  {
    *addr = (uintptr_t)&NeighborhoodP__flags[__nesc_mote];
    *size = sizeof(NeighborhoodP__flags[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborhoodP__time"))
  {
    *addr = (uintptr_t)&NeighborhoodP__time[__nesc_mote];
    *size = sizeof(NeighborhoodP__time[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "NeighborhoodP__last"))
  {
    *addr = (uintptr_t)&NeighborhoodP__last[__nesc_mote];
    *size = sizeof(NeighborhoodP__last[__nesc_mote]);
    return 0;
  }

  /* Module LowPowerListeningDummyP__0 */

  /* Module PacketLinkLayerP__0 */
  if (!strcmp(varname, "/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[__nesc_mote];
    *size = sizeof(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[__nesc_mote];
    *size = sizeof(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries[__nesc_mote];
    *size = sizeof(/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP__0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC__0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC__0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC__0 */

  /* Module MessageBufferLayerP__0 */
  if (!strcmp(varname, "/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[__nesc_mote];
    *size = sizeof(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg[__nesc_mote];
    *size = sizeof(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[__nesc_mote];
    *size = sizeof(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries[__nesc_mote];
    *size = sizeof(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[__nesc_mote];
    *size = sizeof(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[__nesc_mote];
    *size = sizeof(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[__nesc_mote];
    *size = sizeof(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[__nesc_mote];
    *size = sizeof(/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[__nesc_mote]);
    return 0;
  }

  /* Module TaskletC */

  /* Module RandomCollisionLayerP__0 */
  if (!strcmp(varname, "/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[__nesc_mote];
    *size = sizeof(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg[__nesc_mote];
    *size = sizeof(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier[__nesc_mote];
    *size = sizeof(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom[__nesc_mote];
    *size = sizeof(/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgC */
  if (!strcmp(varname, "RandomMlcgC__seed"))
  {
    *addr = (uintptr_t)&RandomMlcgC__seed[__nesc_mote];
    *size = sizeof(RandomMlcgC__seed[__nesc_mote]);
    return 0;
  }

  /* Module SoftwareAckLayerC__0 */
  if (!strcmp(varname, "/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg[__nesc_mote];
    *size = sizeof(/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg[__nesc_mote]);
    return 0;
  }

  /* Module CsmaLayerP__0 */
  if (!strcmp(varname, "/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__txMsg"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__txMsg[__nesc_mote];
    *size = sizeof(/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__txMsg[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state"))
  {
    *addr = (uintptr_t)&/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[__nesc_mote];
    *size = sizeof(/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[__nesc_mote]);
    return 0;
  }

  /* Module TimeStampingLayerP__0 */

  /* Module MetadataFlagsLayerC__0 */

  /* Module TossimDriverLayerP__0 */
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__buffer"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__buffer[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer"))
  {
    *addr = (uintptr_t)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[__nesc_mote];
    *size = sizeof(/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module RadioAlarmP__1 */

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC__outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC__outgoing[__nesc_mote];
    *size = sizeof(CpmModelC__outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC__requestAck[__nesc_mote];
    *size = sizeof(CpmModelC__requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__receiving"))
  {
    *addr = (uintptr_t)&CpmModelC__receiving[__nesc_mote];
    *size = sizeof(CpmModelC__receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC__transmitting[__nesc_mote];
    *size = sizeof(CpmModelC__transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC__transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC__transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC__outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC__outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC__clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC__clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module AMPacketInjectorP */
  if (!strcmp(varname, "AMPacketInjectorP__injectionBuffer"))
  {
    *addr = (uintptr_t)&AMPacketInjectorP__injectionBuffer[__nesc_mote];
    *size = sizeof(AMPacketInjectorP__injectionBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMPacketInjectorP__injectionMsg"))
  {
    *addr = (uintptr_t)&AMPacketInjectorP__injectionMsg[__nesc_mote];
    *size = sizeof(AMPacketInjectorP__injectionMsg[__nesc_mote]);
    return 0;
  }

  /* Module LedsP */

  /* Module UDPEchoP */
  if (!strcmp(varname, "UDPEchoP__timerStarted"))
  {
    *addr = (uintptr_t)&UDPEchoP__timerStarted[__nesc_mote];
    *size = sizeof(UDPEchoP__timerStarted[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPEchoP__stats"))
  {
    *addr = (uintptr_t)&UDPEchoP__stats[__nesc_mote];
    *size = sizeof(UDPEchoP__stats[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPEchoP__route_dest"))
  {
    *addr = (uintptr_t)&UDPEchoP__route_dest[__nesc_mote];
    *size = sizeof(UDPEchoP__route_dest[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPEchoP__payload"))
  {
    *addr = (uintptr_t)&UDPEchoP__payload[__nesc_mote];
    *size = sizeof(UDPEchoP__payload[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPEchoP__sequence_nr"))
  {
    *addr = (uintptr_t)&UDPEchoP__sequence_nr[__nesc_mote];
    *size = sizeof(UDPEchoP__sequence_nr[__nesc_mote]);
    return 0;
  }

  /* Module IPProtocolsP */

  /* Module IPForwardingEngineP */
  if (!strcmp(varname, "IPForwardingEngineP__routing_table"))
  {
    *addr = (uintptr_t)&IPForwardingEngineP__routing_table[__nesc_mote];
    *size = sizeof(IPForwardingEngineP__routing_table[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "IPForwardingEngineP__last_key"))
  {
    *addr = (uintptr_t)&IPForwardingEngineP__last_key[__nesc_mote];
    *size = sizeof(IPForwardingEngineP__last_key[__nesc_mote]);
    return 0;
  }

  /* Module IPNeighborDiscoveryP */

  /* Module IPAddressP */
  if (!strcmp(varname, "IPAddressP__m_valid_addr"))
  {
    *addr = (uintptr_t)&IPAddressP__m_valid_addr[__nesc_mote];
    *size = sizeof(IPAddressP__m_valid_addr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "IPAddressP__m_short_addr"))
  {
    *addr = (uintptr_t)&IPAddressP__m_short_addr[__nesc_mote];
    *size = sizeof(IPAddressP__m_short_addr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "IPAddressP__m_addr"))
  {
    *addr = (uintptr_t)&IPAddressP__m_addr[__nesc_mote];
    *size = sizeof(IPAddressP__m_addr[__nesc_mote]);
    return 0;
  }

  /* Module Ieee154AddressP */
  if (!strcmp(varname, "Ieee154AddressP__m_saddr"))
  {
    *addr = (uintptr_t)&Ieee154AddressP__m_saddr[__nesc_mote];
    *size = sizeof(Ieee154AddressP__m_saddr[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Ieee154AddressP__m_panid"))
  {
    *addr = (uintptr_t)&Ieee154AddressP__m_panid[__nesc_mote];
    *size = sizeof(Ieee154AddressP__m_panid[__nesc_mote]);
    return 0;
  }

  /* Module LocalIeeeEui64C */

  /* Module NoLedsC */

  /* Module IPDispatchP */
  if (!strcmp(varname, "IPDispatchP__state"))
  {
    *addr = (uintptr_t)&IPDispatchP__state[__nesc_mote];
    *size = sizeof(IPDispatchP__state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "IPDispatchP__radioBusy"))
  {
    *addr = (uintptr_t)&IPDispatchP__radioBusy[__nesc_mote];
    *size = sizeof(IPDispatchP__radioBusy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "IPDispatchP__current_local_label"))
  {
    *addr = (uintptr_t)&IPDispatchP__current_local_label[__nesc_mote];
    *size = sizeof(IPDispatchP__current_local_label[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "IPDispatchP__stats"))
  {
    *addr = (uintptr_t)&IPDispatchP__stats[__nesc_mote];
    *size = sizeof(IPDispatchP__stats[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "IPDispatchP__recon_cache"))
  {
    *addr = (uintptr_t)&IPDispatchP__recon_cache[__nesc_mote];
    *size = sizeof(IPDispatchP__recon_cache[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "IPDispatchP__recon_data"))
  {
    *addr = (uintptr_t)&IPDispatchP__recon_data[__nesc_mote];
    *size = sizeof(IPDispatchP__recon_data[__nesc_mote]);
    return 0;
  }

  /* Module Ieee154PacketInjectorP */
  if (!strcmp(varname, "Ieee154PacketInjectorP__injectionBuffer"))
  {
    *addr = (uintptr_t)&Ieee154PacketInjectorP__injectionBuffer[__nesc_mote];
    *size = sizeof(Ieee154PacketInjectorP__injectionBuffer[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__0 */
  if (!strcmp(varname, "/*IPDispatchC.FragPool.PoolP*/PoolP__0__free"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.FragPool.PoolP*/PoolP__0__free[__nesc_mote];
    *size = sizeof(/*IPDispatchC.FragPool.PoolP*/PoolP__0__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.FragPool.PoolP*/PoolP__0__index"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.FragPool.PoolP*/PoolP__0__index[__nesc_mote];
    *size = sizeof(/*IPDispatchC.FragPool.PoolP*/PoolP__0__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.FragPool.PoolP*/PoolP__0__queue"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[__nesc_mote];
    *size = sizeof(/*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[__nesc_mote];
    *size = sizeof(/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__1 */
  if (!strcmp(varname, "/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[__nesc_mote];
    *size = sizeof(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[__nesc_mote];
    *size = sizeof(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[__nesc_mote];
    *size = sizeof(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[__nesc_mote];
    *size = sizeof(/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__0 */
  if (!strcmp(varname, "/*IPDispatchC.QueueC*/QueueC__0__queue"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.QueueC*/QueueC__0__queue[__nesc_mote];
    *size = sizeof(/*IPDispatchC.QueueC*/QueueC__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.QueueC*/QueueC__0__head"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.QueueC*/QueueC__0__head[__nesc_mote];
    *size = sizeof(/*IPDispatchC.QueueC*/QueueC__0__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.QueueC*/QueueC__0__tail"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.QueueC*/QueueC__0__tail[__nesc_mote];
    *size = sizeof(/*IPDispatchC.QueueC*/QueueC__0__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.QueueC*/QueueC__0__size"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.QueueC*/QueueC__0__size[__nesc_mote];
    *size = sizeof(/*IPDispatchC.QueueC*/QueueC__0__size[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__2 */
  if (!strcmp(varname, "/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[__nesc_mote];
    *size = sizeof(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[__nesc_mote];
    *size = sizeof(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[__nesc_mote];
    *size = sizeof(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool"))
  {
    *addr = (uintptr_t)&/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[__nesc_mote];
    *size = sizeof(/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[__nesc_mote]);
    return 0;
  }

  /* Module IPStackControlP */

  /* Module ICMPCoreP */

  /* Module IPPacketP */

  /* Module NoDhcpC */

  /* Module UdpP */
  if (!strcmp(varname, "UdpP__local_ports"))
  {
    *addr = (uintptr_t)&UdpP__local_ports[__nesc_mote];
    *size = sizeof(UdpP__local_ports[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UdpP__last_localport"))
  {
    *addr = (uintptr_t)&UdpP__last_localport[__nesc_mote];
    *size = sizeof(UdpP__last_localport[__nesc_mote]);
    return 0;
  }

  /* Module RPLRankP */
  if (!strcmp(varname, "RPLRankP__nodeRank"))
  {
    *addr = (uintptr_t)&RPLRankP__nodeRank[__nesc_mote];
    *size = sizeof(RPLRankP__nodeRank[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__minRank"))
  {
    *addr = (uintptr_t)&RPLRankP__minRank[__nesc_mote];
    *size = sizeof(RPLRankP__minRank[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__leafState"))
  {
    *addr = (uintptr_t)&RPLRankP__leafState[__nesc_mote];
    *size = sizeof(RPLRankP__leafState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__parentNum"))
  {
    *addr = (uintptr_t)&RPLRankP__parentNum[__nesc_mote];
    *size = sizeof(RPLRankP__parentNum[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__VERSION"))
  {
    *addr = (uintptr_t)&RPLRankP__VERSION[__nesc_mote];
    *size = sizeof(RPLRankP__VERSION[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__MAX_RANK_INCREASE"))
  {
    *addr = (uintptr_t)&RPLRankP__MAX_RANK_INCREASE[__nesc_mote];
    *size = sizeof(RPLRankP__MAX_RANK_INCREASE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__DODAGID"))
  {
    *addr = (uintptr_t)&RPLRankP__DODAGID[__nesc_mote];
    *size = sizeof(RPLRankP__DODAGID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__DODAG_MAX"))
  {
    *addr = (uintptr_t)&RPLRankP__DODAG_MAX[__nesc_mote];
    *size = sizeof(RPLRankP__DODAG_MAX[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__METRICID"))
  {
    *addr = (uintptr_t)&RPLRankP__METRICID[__nesc_mote];
    *size = sizeof(RPLRankP__METRICID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__OCP"))
  {
    *addr = (uintptr_t)&RPLRankP__OCP[__nesc_mote];
    *size = sizeof(RPLRankP__OCP[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__Prf"))
  {
    *addr = (uintptr_t)&RPLRankP__Prf[__nesc_mote];
    *size = sizeof(RPLRankP__Prf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__ignore"))
  {
    *addr = (uintptr_t)&RPLRankP__ignore[__nesc_mote];
    *size = sizeof(RPLRankP__ignore[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__ROOT"))
  {
    *addr = (uintptr_t)&RPLRankP__ROOT[__nesc_mote];
    *size = sizeof(RPLRankP__ROOT[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__m_running"))
  {
    *addr = (uintptr_t)&RPLRankP__m_running[__nesc_mote];
    *size = sizeof(RPLRankP__m_running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLRankP__parentSet"))
  {
    *addr = (uintptr_t)&RPLRankP__parentSet[__nesc_mote];
    *size = sizeof(RPLRankP__parentSet[__nesc_mote]);
    return 0;
  }

  /* Module RPLRoutingEngineP__0 */
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdio"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdio[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdio[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdis"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdis[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdis[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__INCONSISTENCY_COUNT"))
  {
    *addr = (uintptr_t)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__INCONSISTENCY_COUNT[__nesc_mote];
    *size = sizeof(/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__INCONSISTENCY_COUNT[__nesc_mote]);
    return 0;
  }

  /* Module RPLDAORoutingEngineP__0 */
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_double_count"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_double_count[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_double_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__daoseq"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__daoseq[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__daoseq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__MY_ADDR"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__MY_ADDR[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__MY_ADDR[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_SEQUENCE"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_SEQUENCE[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_SEQUENCE[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_CONTROL"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_CONTROL[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_CONTROL[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__count"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__count[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__count[__nesc_mote]);
    return 0;
  }

  /* Module QueueC__1 */
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[__nesc_mote]);
    return 0;
  }

  /* Module PoolP__3 */
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool"))
  {
    *addr = (uintptr_t)&/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool[__nesc_mote];
    *size = sizeof(/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool[__nesc_mote]);
    return 0;
  }

  /* Module ICMPCodeDispatchP__0 */

  /* Module RPLOF0P */
  if (!strcmp(varname, "RPLOF0P__nodeRank"))
  {
    *addr = (uintptr_t)&RPLOF0P__nodeRank[__nesc_mote];
    *size = sizeof(RPLOF0P__nodeRank[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLOF0P__minMetric"))
  {
    *addr = (uintptr_t)&RPLOF0P__minMetric[__nesc_mote];
    *size = sizeof(RPLOF0P__minMetric[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLOF0P__prevParent"))
  {
    *addr = (uintptr_t)&RPLOF0P__prevParent[__nesc_mote];
    *size = sizeof(RPLOF0P__prevParent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLOF0P__desiredParent"))
  {
    *addr = (uintptr_t)&RPLOF0P__desiredParent[__nesc_mote];
    *size = sizeof(RPLOF0P__desiredParent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLOF0P__nodeEtx"))
  {
    *addr = (uintptr_t)&RPLOF0P__nodeEtx[__nesc_mote];
    *size = sizeof(RPLOF0P__nodeEtx[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLOF0P__newParent"))
  {
    *addr = (uintptr_t)&RPLOF0P__newParent[__nesc_mote];
    *size = sizeof(RPLOF0P__newParent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RPLOF0P__min_hop_rank_inc"))
  {
    *addr = (uintptr_t)&RPLOF0P__min_hop_rank_inc[__nesc_mote];
    *size = sizeof(RPLOF0P__min_hop_rank_inc[__nesc_mote]);
    return 0;
  }

  /* Module ICMPCodeDispatchP__1 */

  /* Module UDPShellP */
  if (!strcmp(varname, "UDPShellP__session_endpoint"))
  {
    *addr = (uintptr_t)&UDPShellP__session_endpoint[__nesc_mote];
    *size = sizeof(UDPShellP__session_endpoint[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__uptime"))
  {
    *addr = (uintptr_t)&UDPShellP__uptime[__nesc_mote];
    *size = sizeof(UDPShellP__uptime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__externals"))
  {
    *addr = (uintptr_t)&UDPShellP__externals[__nesc_mote];
    *size = sizeof(UDPShellP__externals[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__reply_buf"))
  {
    *addr = (uintptr_t)&UDPShellP__reply_buf[__nesc_mote];
    *size = sizeof(UDPShellP__reply_buf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__help_str"))
  {
    *addr = (uintptr_t)&UDPShellP__help_str[__nesc_mote];
    *size = sizeof(UDPShellP__help_str[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__ping_fmt"))
  {
    *addr = (uintptr_t)&UDPShellP__ping_fmt[__nesc_mote];
    *size = sizeof(UDPShellP__ping_fmt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__ping_summary"))
  {
    *addr = (uintptr_t)&UDPShellP__ping_summary[__nesc_mote];
    *size = sizeof(UDPShellP__ping_summary[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__ident_string"))
  {
    *addr = (uintptr_t)&UDPShellP__ident_string[__nesc_mote];
    *size = sizeof(UDPShellP__ident_string[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__builtins"))
  {
    *addr = (uintptr_t)&UDPShellP__builtins[__nesc_mote];
    *size = sizeof(UDPShellP__builtins[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "UDPShellP__builtin_actions"))
  {
    *addr = (uintptr_t)&UDPShellP__builtin_actions[__nesc_mote];
    *size = sizeof(UDPShellP__builtin_actions[__nesc_mote]);
    return 0;
  }

  /* Module ICMPPingP */
  if (!strcmp(varname, "ICMPPingP__ping_seq"))
  {
    *addr = (uintptr_t)&ICMPPingP__ping_seq[__nesc_mote];
    *size = sizeof(ICMPPingP__ping_seq[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ICMPPingP__ping_n"))
  {
    *addr = (uintptr_t)&ICMPPingP__ping_n[__nesc_mote];
    *size = sizeof(ICMPPingP__ping_n[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ICMPPingP__ping_rcv"))
  {
    *addr = (uintptr_t)&ICMPPingP__ping_rcv[__nesc_mote];
    *size = sizeof(ICMPPingP__ping_rcv[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ICMPPingP__ping_ident"))
  {
    *addr = (uintptr_t)&ICMPPingP__ping_ident[__nesc_mote];
    *size = sizeof(ICMPPingP__ping_ident[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ICMPPingP__ping_dest"))
  {
    *addr = (uintptr_t)&ICMPPingP__ping_dest[__nesc_mote];
    *size = sizeof(ICMPPingP__ping_dest[__nesc_mote]);
    return 0;
  }

  /* Module RouteCmdP */
  if (!strcmp(varname, "RouteCmdP__header"))
  {
    *addr = (uintptr_t)&RouteCmdP__header[__nesc_mote];
    *size = sizeof(RouteCmdP__header[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RouteCmdP__ifaces"))
  {
    *addr = (uintptr_t)&RouteCmdP__ifaces[__nesc_mote];
    *size = sizeof(RouteCmdP__ifaces[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "RouteCmdP__cur_entry"))
  {
    *addr = (uintptr_t)&RouteCmdP__cur_entry[__nesc_mote];
    *size = sizeof(RouteCmdP__cur_entry[__nesc_mote]);
    return 0;
  }

  /* Module ShellCommandP__0 */

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP__0 */

  /* Module HplAtm128GeneralIOPinP__1 */

  /* Module HplAtm128GeneralIOPinP__2 */

  /* Module HplAtm128GeneralIOPinP__3 */

  /* Module HplAtm128GeneralIOPinP__4 */

  /* Module HplAtm128GeneralIOPinP__5 */

  /* Module HplAtm128GeneralIOPinP__6 */

  /* Module HplAtm128GeneralIOPinP__7 */

  /* Module HplAtm128GeneralIOPinP__8 */

  /* Module HplAtm128GeneralIOPinP__9 */

  /* Module HplAtm128GeneralIOPinP__10 */

  /* Module HplAtm128GeneralIOPinP__11 */

  /* Module HplAtm128GeneralIOPinP__12 */

  /* Module HplAtm128GeneralIOPinP__13 */

  /* Module HplAtm128GeneralIOPinP__14 */

  /* Module HplAtm128GeneralIOPinP__15 */

  /* Module HplAtm128GeneralIOPinP__16 */

  /* Module HplAtm128GeneralIOPinP__17 */

  /* Module HplAtm128GeneralIOPinP__18 */

  /* Module HplAtm128GeneralIOPinP__19 */

  /* Module HplAtm128GeneralIOPinP__20 */

  /* Module HplAtm128GeneralIOPinP__21 */

  /* Module HplAtm128GeneralIOPinP__22 */

  /* Module HplAtm128GeneralIOPinP__23 */

  /* Module HplAtm128GeneralIOPinP__24 */

  /* Module HplAtm128GeneralIOPinP__25 */

  /* Module HplAtm128GeneralIOPinP__26 */

  /* Module HplAtm128GeneralIOPinP__27 */

  /* Module HplAtm128GeneralIOPinP__28 */

  /* Module HplAtm128GeneralIOPinP__29 */

  /* Module HplAtm128GeneralIOPinP__30 */

  /* Module HplAtm128GeneralIOPinP__31 */

  /* Module HplAtm128GeneralIOPinP__32 */

  /* Module HplAtm128GeneralIOPinP__33 */

  /* Module HplAtm128GeneralIOPinP__34 */

  /* Module HplAtm128GeneralIOPinP__35 */

  /* Module HplAtm128GeneralIOPinP__36 */

  /* Module HplAtm128GeneralIOPinP__37 */

  /* Module HplAtm128GeneralIOPinP__38 */

  /* Module HplAtm128GeneralIOPinP__39 */

  /* Module HplAtm128GeneralIOPinP__40 */

  /* Module HplAtm128GeneralIOPinP__41 */

  /* Module HplAtm128GeneralIOPinP__42 */

  /* Module HplAtm128GeneralIOPinP__43 */

  /* Module HplAtm128GeneralIOPinP__44 */

  /* Module HplAtm128GeneralIOPinP__45 */

  /* Module HplAtm128GeneralIOPinP__46 */

  /* Module HplAtm128GeneralIOPinP__47 */

  /* Module HplAtm128GeneralIOSlowPinP__0 */

  /* Module HplAtm128GeneralIOSlowPinP__1 */

  /* Module HplAtm128GeneralIOSlowPinP__2 */

  /* Module HplAtm128GeneralIOSlowPinP__3 */

  /* Module HplAtm128GeneralIOSlowPinP__4 */

  /* Module HplAtm128GeneralIOSlowPinP__5 */

  /* Module HplAtm128GeneralIOSlowPinP__6 */

  /* Module HplAtm128GeneralIOSlowPinP__7 */

  /* Module HplAtm128GeneralIOSlowPinP__8 */

  /* Module HplAtm128GeneralIOSlowPinP__9 */

  /* Module HplAtm128GeneralIOSlowPinP__10 */

  /* Module HplAtm128GeneralIOSlowPinP__11 */

  /* Module HplAtm128GeneralIOSlowPinP__12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP__m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_next[__nesc_mote]);
  SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP__euid[__nesc_mote], 0, sizeof SimMoteP__euid[__nesc_mote]);
  memset((void *)&SimMoteP__startTime[__nesc_mote], 0, sizeof SimMoteP__startTime[__nesc_mote]);
  memset((void *)&SimMoteP__isOn[__nesc_mote], 0, sizeof SimMoteP__isOn[__nesc_mote]);
  memset((void *)&SimMoteP__bootEvent[__nesc_mote], 0, sizeof SimMoteP__bootEvent[__nesc_mote]);

  /* Module TossimRadioP */

  /* Module RadioAlarmP__0 */
  /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__client[__nesc_mote] = /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__NO_CLIENT;
  /*TossimRadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__currentEvent[__nesc_mote] = (void *)0;

  /* Module ActiveMessageLayerP__0 */

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC__set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC__addr[__nesc_mote], 0, sizeof ActiveMessageAddressC__addr[__nesc_mote]);
  ActiveMessageAddressC__group[__nesc_mote] = TOS_AM_GROUP;

  /* Module AutoResourceAcquireLayerC__0 */
  memset((void *)&/*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending[__nesc_mote], 0, sizeof /*TossimRadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending[__nesc_mote]);

  /* Module FcfsResourceQueueC__0 */
  memset((void *)&/*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[__nesc_mote], 0, sizeof /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[__nesc_mote]);
  /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead[__nesc_mote] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
  /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail[__nesc_mote] = /*TossimRadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

  /* Module SimpleArbiterP__0 */
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state[__nesc_mote] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
  /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId[__nesc_mote] = /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
  memset((void *)&/*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId[__nesc_mote], 0, sizeof /*TossimRadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId[__nesc_mote]);

  /* Module Ieee154MessageLayerC__0 */

  /* Module TinyosNetworkLayerC__0 */

  /* Module Ieee154PacketLayerP__0 */

  /* Module UniqueLayerP__0 */
  memset((void *)&/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber[__nesc_mote], 0, sizeof /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber[__nesc_mote]);
  memset((void *)&/*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[__nesc_mote], 0, sizeof /*TossimRadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[__nesc_mote]);

  /* Module NeighborhoodP */
  memset((void *)&NeighborhoodP__nodes[__nesc_mote], 0, sizeof NeighborhoodP__nodes[__nesc_mote]);
  memset((void *)&NeighborhoodP__ages[__nesc_mote], 0, sizeof NeighborhoodP__ages[__nesc_mote]);
  memset((void *)&NeighborhoodP__flags[__nesc_mote], 0, sizeof NeighborhoodP__flags[__nesc_mote]);
  memset((void *)&NeighborhoodP__time[__nesc_mote], 0, sizeof NeighborhoodP__time[__nesc_mote]);
  memset((void *)&NeighborhoodP__last[__nesc_mote], 0, sizeof NeighborhoodP__last[__nesc_mote]);

  /* Module LowPowerListeningDummyP__0 */

  /* Module PacketLinkLayerP__0 */
  /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__state[__nesc_mote] = /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__STATE_READY;
  memset((void *)&/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[__nesc_mote], 0, sizeof /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__currentMsg[__nesc_mote]);
  memset((void *)&/*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries[__nesc_mote], 0, sizeof /*TossimRadioC.PacketLinkLayerC.PacketLinkLayerP*/PacketLinkLayerP__0__totalRetries[__nesc_mote]);

  /* Module Atm128AlarmAsyncP__0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP__inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP__lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP__oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP__compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP__compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP__overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP__overflow[__nesc_mote]);

  /* Module AlarmToTimerC__0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC__0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC__0 */

  /* Module MessageBufferLayerP__0 */
  memset((void *)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[__nesc_mote], 0, sizeof /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state[__nesc_mote]);
  memset((void *)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg[__nesc_mote], 0, sizeof /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg[__nesc_mote]);
  memset((void *)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[__nesc_mote], 0, sizeof /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError[__nesc_mote]);
  memset((void *)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries[__nesc_mote], 0, sizeof /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries[__nesc_mote]);
  memset((void *)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[__nesc_mote], 0, sizeof /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[__nesc_mote]);
  memset((void *)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[__nesc_mote], 0, sizeof /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[__nesc_mote]);
  memset((void *)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[__nesc_mote], 0, sizeof /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead[__nesc_mote]);
  memset((void *)&/*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[__nesc_mote], 0, sizeof /*TossimRadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize[__nesc_mote]);

  /* Module TaskletC */

  /* Module RandomCollisionLayerP__0 */
  memset((void *)&/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[__nesc_mote], 0, sizeof /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state[__nesc_mote]);
  memset((void *)&/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg[__nesc_mote], 0, sizeof /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg[__nesc_mote]);
  memset((void *)&/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier[__nesc_mote], 0, sizeof /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier[__nesc_mote]);
  memset((void *)&/*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom[__nesc_mote], 0, sizeof /*TossimRadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom[__nesc_mote]);

  /* Module RandomMlcgC */
  memset((void *)&RandomMlcgC__seed[__nesc_mote], 0, sizeof RandomMlcgC__seed[__nesc_mote]);

  /* Module SoftwareAckLayerC__0 */
  memset((void *)&/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[__nesc_mote], 0, sizeof /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state[__nesc_mote]);
  memset((void *)&/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[__nesc_mote], 0, sizeof /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg[__nesc_mote]);
  memset((void *)&/*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg[__nesc_mote], 0, sizeof /*TossimRadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg[__nesc_mote]);

  /* Module CsmaLayerP__0 */
  memset((void *)&/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__txMsg[__nesc_mote], 0, sizeof /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__txMsg[__nesc_mote]);
  memset((void *)&/*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[__nesc_mote], 0, sizeof /*TossimRadioC.CsmaLayerC.CsmaLayerP*/CsmaLayerP__0__state[__nesc_mote]);

  /* Module TimeStampingLayerP__0 */

  /* Module MetadataFlagsLayerC__0 */

  /* Module TossimDriverLayerP__0 */
  memset((void *)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[__nesc_mote], 0, sizeof /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__running[__nesc_mote]);
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__transmitting[__nesc_mote] = FALSE;
  memset((void *)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[__nesc_mote], 0, sizeof /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sending[__nesc_mote]);
  memset((void *)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[__nesc_mote], 0, sizeof /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__sendEvent[__nesc_mote]);
  memset((void *)&/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__buffer[__nesc_mote], 0, sizeof /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__buffer[__nesc_mote]);
  /*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__bufferPointer[__nesc_mote] = &/*TossimDriverLayerC.Driver*/TossimDriverLayerP__0__buffer[__nesc_mote];

  /* Module RadioAlarmP__1 */

  /* Module CpmModelC */
  memset((void *)&CpmModelC__outgoing[__nesc_mote], 0, sizeof CpmModelC__outgoing[__nesc_mote]);
  memset((void *)&CpmModelC__requestAck[__nesc_mote], 0, sizeof CpmModelC__requestAck[__nesc_mote]);
  CpmModelC__receiving[__nesc_mote] = 0;
  CpmModelC__transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC__transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC__transmissionEndTime[__nesc_mote]);
  CpmModelC__outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC__clearThreshold[__nesc_mote] = -72.0;

  /* Module AMPacketInjectorP */
  memset((void *)&AMPacketInjectorP__injectionBuffer[__nesc_mote], 0, sizeof AMPacketInjectorP__injectionBuffer[__nesc_mote]);
  AMPacketInjectorP__injectionMsg[__nesc_mote] = &AMPacketInjectorP__injectionBuffer[__nesc_mote];

  /* Module LedsP */

  /* Module UDPEchoP */
  memset((void *)&UDPEchoP__timerStarted[__nesc_mote], 0, sizeof UDPEchoP__timerStarted[__nesc_mote]);
  memset((void *)&UDPEchoP__stats[__nesc_mote], 0, sizeof UDPEchoP__stats[__nesc_mote]);
  memset((void *)&UDPEchoP__route_dest[__nesc_mote], 0, sizeof UDPEchoP__route_dest[__nesc_mote]);
  memset((void *)&UDPEchoP__payload[__nesc_mote], 0, sizeof UDPEchoP__payload[__nesc_mote]);
  UDPEchoP__sequence_nr[__nesc_mote] = 0;
  memset((void *)&UDPEchoP__UDPReceive__recvfrom__print_buf3[__nesc_mote], 0, sizeof UDPEchoP__UDPReceive__recvfrom__print_buf3[__nesc_mote]);
  memset((void *)&UDPEchoP__UDPSend__recvfrom__print_buf3[__nesc_mote], 0, sizeof UDPEchoP__UDPSend__recvfrom__print_buf3[__nesc_mote]);

  /* Module IPProtocolsP */

  /* Module IPForwardingEngineP */
  memset((void *)&IPForwardingEngineP__routing_table[__nesc_mote], 0, sizeof IPForwardingEngineP__routing_table[__nesc_mote]);
  IPForwardingEngineP__last_key[__nesc_mote] = 1;
  memset((void *)&IPForwardingEngineP__PrintTimer__fired__print_buff[__nesc_mote], 0, sizeof IPForwardingEngineP__PrintTimer__fired__print_buff[__nesc_mote]);
  memset((void *)&IPForwardingEngineP__PrintTimer__fired__print_buf[__nesc_mote], 0, sizeof IPForwardingEngineP__PrintTimer__fired__print_buf[__nesc_mote]);

  /* Module IPNeighborDiscoveryP */

  /* Module IPAddressP */
  IPAddressP__m_valid_addr[__nesc_mote] = FALSE;
  IPAddressP__m_short_addr[__nesc_mote] = FALSE;
  memset((void *)&IPAddressP__m_addr[__nesc_mote], 0, sizeof IPAddressP__m_addr[__nesc_mote]);

  /* Module Ieee154AddressP */
  memset((void *)&Ieee154AddressP__m_saddr[__nesc_mote], 0, sizeof Ieee154AddressP__m_saddr[__nesc_mote]);
  memset((void *)&Ieee154AddressP__m_panid[__nesc_mote], 0, sizeof Ieee154AddressP__m_panid[__nesc_mote]);

  /* Module LocalIeeeEui64C */

  /* Module NoLedsC */

  /* Module IPDispatchP */
  IPDispatchP__state[__nesc_mote] = IPDispatchP__S_STOPPED;
  memset((void *)&IPDispatchP__radioBusy[__nesc_mote], 0, sizeof IPDispatchP__radioBusy[__nesc_mote]);
  IPDispatchP__current_local_label[__nesc_mote] = 0;
  memset((void *)&IPDispatchP__stats[__nesc_mote], 0, sizeof IPDispatchP__stats[__nesc_mote]);
  memset((void *)&IPDispatchP__recon_cache[__nesc_mote], 0, sizeof IPDispatchP__recon_cache[__nesc_mote]);
  memset((void *)&IPDispatchP__recon_data[__nesc_mote], 0, sizeof IPDispatchP__recon_data[__nesc_mote]);

  /* Module Ieee154PacketInjectorP */
  memset((void *)&Ieee154PacketInjectorP__injectionBuffer[__nesc_mote], 0, sizeof Ieee154PacketInjectorP__injectionBuffer[__nesc_mote]);

  /* Module PoolP__0 */
  memset((void *)&/*IPDispatchC.FragPool.PoolP*/PoolP__0__free[__nesc_mote], 0, sizeof /*IPDispatchC.FragPool.PoolP*/PoolP__0__free[__nesc_mote]);
  memset((void *)&/*IPDispatchC.FragPool.PoolP*/PoolP__0__index[__nesc_mote], 0, sizeof /*IPDispatchC.FragPool.PoolP*/PoolP__0__index[__nesc_mote]);
  memset((void *)&/*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[__nesc_mote], 0, sizeof /*IPDispatchC.FragPool.PoolP*/PoolP__0__queue[__nesc_mote]);
  memset((void *)&/*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[__nesc_mote], 0, sizeof /*IPDispatchC.FragPool.PoolP*/PoolP__0__pool[__nesc_mote]);

  /* Module PoolP__1 */
  memset((void *)&/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[__nesc_mote], 0, sizeof /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__free[__nesc_mote]);
  memset((void *)&/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[__nesc_mote], 0, sizeof /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__index[__nesc_mote]);
  memset((void *)&/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[__nesc_mote], 0, sizeof /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__queue[__nesc_mote]);
  memset((void *)&/*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[__nesc_mote], 0, sizeof /*IPDispatchC.SendEntryPool.PoolP*/PoolP__1__pool[__nesc_mote]);

  /* Module QueueC__0 */
  memset((void *)&/*IPDispatchC.QueueC*/QueueC__0__queue[__nesc_mote], 0, sizeof /*IPDispatchC.QueueC*/QueueC__0__queue[__nesc_mote]);
  /*IPDispatchC.QueueC*/QueueC__0__head[__nesc_mote] = 0;
  /*IPDispatchC.QueueC*/QueueC__0__tail[__nesc_mote] = 0;
  /*IPDispatchC.QueueC*/QueueC__0__size[__nesc_mote] = 0;

  /* Module PoolP__2 */
  memset((void *)&/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[__nesc_mote], 0, sizeof /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__free[__nesc_mote]);
  memset((void *)&/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[__nesc_mote], 0, sizeof /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__index[__nesc_mote]);
  memset((void *)&/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[__nesc_mote], 0, sizeof /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__queue[__nesc_mote]);
  memset((void *)&/*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[__nesc_mote], 0, sizeof /*IPDispatchC.SendInfoPool.PoolP*/PoolP__2__pool[__nesc_mote]);

  /* Module IPStackControlP */

  /* Module ICMPCoreP */

  /* Module IPPacketP */

  /* Module NoDhcpC */

  /* Module UdpP */
  memset((void *)&UdpP__local_ports[__nesc_mote], 0, sizeof UdpP__local_ports[__nesc_mote]);
  UdpP__last_localport[__nesc_mote] = UdpP__LOCAL_PORT_START;

  /* Module RPLRankP */
  RPLRankP__nodeRank[__nesc_mote] = INFINITE_RANK;
  RPLRankP__minRank[__nesc_mote] = INFINITE_RANK;
  RPLRankP__leafState[__nesc_mote] = FALSE;
  RPLRankP__parentNum[__nesc_mote] = 0;
  RPLRankP__VERSION[__nesc_mote] = 0;
  RPLRankP__MAX_RANK_INCREASE[__nesc_mote] = 1;
  memset((void *)&RPLRankP__DODAGID[__nesc_mote], 0, sizeof RPLRankP__DODAGID[__nesc_mote]);
  memset((void *)&RPLRankP__DODAG_MAX[__nesc_mote], 0, sizeof RPLRankP__DODAG_MAX[__nesc_mote]);
  memset((void *)&RPLRankP__METRICID[__nesc_mote], 0, sizeof RPLRankP__METRICID[__nesc_mote]);
  memset((void *)&RPLRankP__OCP[__nesc_mote], 0, sizeof RPLRankP__OCP[__nesc_mote]);
  RPLRankP__Prf[__nesc_mote] = 0xFF;
  RPLRankP__ignore[__nesc_mote] = FALSE;
  RPLRankP__ROOT[__nesc_mote] = FALSE;
  RPLRankP__m_running[__nesc_mote] = FALSE;
  memset((void *)&RPLRankP__parentSet[__nesc_mote], 0, sizeof RPLRankP__parentSet[__nesc_mote]);

  /* Module RPLRoutingEngineP__0 */
  memset((void *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[__nesc_mote], 0, sizeof /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__tricklePeriod[__nesc_mote]);
  memset((void *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[__nesc_mote], 0, sizeof /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__randomTime[__nesc_mote]);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__sentDIOFlag[__nesc_mote] = FALSE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_ROOT[__nesc_mote] = FALSE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__I_AM_LEAF[__nesc_mote] = FALSE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__running[__nesc_mote] = FALSE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__hasDODAG[__nesc_mote] = FALSE;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__node_rank[__nesc_mote] = INFINITE_RANK;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__LOWRANK[__nesc_mote] = INFINITE_RANK;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__GROUND_STATE[__nesc_mote] = 1;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__RPLInstanceID[__nesc_mote] = 0;
  memset((void *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[__nesc_mote], 0, sizeof /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGID[__nesc_mote]);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DODAGVersionNumber[__nesc_mote] = 0;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MOP[__nesc_mote] = RPL_MOP_Storing_No_Multicast;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DAG_PREF[__nesc_mote] = 7;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__redunCounter[__nesc_mote] = 0xFF;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__doubleCounter[__nesc_mote] = 0;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntDouble[__nesc_mote] = 11;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIOIntMin[__nesc_mote] = 8;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DIORedun[__nesc_mote] = 0xFF;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MinHopRankInc[__nesc_mote] = 1;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MaxRankInc[__nesc_mote] = 3;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__DTSN[__nesc_mote] = 2;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdio[__nesc_mote] = 0;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__countdis[__nesc_mote] = 0;
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO[__nesc_mote] = FALSE;
  memset((void *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[__nesc_mote], 0, sizeof /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__ADDR_MY_IP[__nesc_mote]);
  memset((void *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[__nesc_mote], 0, sizeof /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__MULTICAST_ADDR[__nesc_mote]);
  memset((void *)&/*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR[__nesc_mote], 0, sizeof /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__UNICAST_DIO_ADDR[__nesc_mote]);
  /*RPLRoutingEngineC.Routing*/RPLRoutingEngineP__0__INCONSISTENCY_COUNT[__nesc_mote] = 0;

  /* Module RPLDAORoutingEngineP__0 */
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_double_count[__nesc_mote] = 0;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__dao_rate[__nesc_mote] = 1024;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__delay_dao[__nesc_mote] = 256;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__remove_time[__nesc_mote] = 60 * 1024U;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__daoseq[__nesc_mote] = 0;
  memset((void *)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__MY_ADDR[__nesc_mote], 0, sizeof /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__MY_ADDR[__nesc_mote]);
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_SEQUENCE[__nesc_mote] = 0;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__PATH_CONTROL[__nesc_mote] = 0;
  memset((void *)&/*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[__nesc_mote], 0, sizeof /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table[__nesc_mote]);
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__downwards_table_count[__nesc_mote] = 0;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__m_running[__nesc_mote] = FALSE;
  /*RPLDAORoutingEngineC.DAORouting*/RPLDAORoutingEngineP__0__count[__nesc_mote] = 0;

  /* Module QueueC__1 */
  memset((void *)&/*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[__nesc_mote], 0, sizeof /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__queue[__nesc_mote]);
  /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__head[__nesc_mote] = 0;
  /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__tail[__nesc_mote] = 0;
  /*RPLDAORoutingEngineC.SendQueueP*/QueueC__1__size[__nesc_mote] = 0;

  /* Module PoolP__3 */
  memset((void *)&/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[__nesc_mote], 0, sizeof /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__free[__nesc_mote]);
  memset((void *)&/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[__nesc_mote], 0, sizeof /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__index[__nesc_mote]);
  memset((void *)&/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[__nesc_mote], 0, sizeof /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__queue[__nesc_mote]);
  memset((void *)&/*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool[__nesc_mote], 0, sizeof /*RPLDAORoutingEngineC.SendPoolP.PoolP*/PoolP__3__pool[__nesc_mote]);

  /* Module ICMPCodeDispatchP__0 */

  /* Module RPLOF0P */
  RPLOF0P__nodeRank[__nesc_mote] = INFINITE_RANK;
  RPLOF0P__minMetric[__nesc_mote] = 0xFFFF;
  memset((void *)&RPLOF0P__prevParent[__nesc_mote], 0, sizeof RPLOF0P__prevParent[__nesc_mote]);
  RPLOF0P__desiredParent[__nesc_mote] = 20;
  RPLOF0P__nodeEtx[__nesc_mote] = 10;
  RPLOF0P__newParent[__nesc_mote] = FALSE;
  RPLOF0P__min_hop_rank_inc[__nesc_mote] = 1;

  /* Module ICMPCodeDispatchP__1 */

  /* Module UDPShellP */
  memset((void *)&UDPShellP__session_endpoint[__nesc_mote], 0, sizeof UDPShellP__session_endpoint[__nesc_mote]);
  memset((void *)&UDPShellP__uptime[__nesc_mote], 0, sizeof UDPShellP__uptime[__nesc_mote]);
  memset((void *)&UDPShellP__externals[__nesc_mote], 0, sizeof UDPShellP__externals[__nesc_mote]);
  memset((void *)&UDPShellP__reply_buf[__nesc_mote], 0, sizeof UDPShellP__reply_buf[__nesc_mote]);
  UDPShellP__help_str[__nesc_mote] = "sdsh-0.9\tbuiltins: [help, echo, ping6, uptime, ident]\n";
  UDPShellP__ping_fmt[__nesc_mote] = " icmp_seq=%i ttl=%i time=%i ms\n";
  UDPShellP__ping_summary[__nesc_mote] = "%i packets transmitted, %i received\n";
  UDPShellP__ident_string[__nesc_mote] = "\t[app: ""UDPEchoC""]\n\t[user: ""bo""]\n\t[host: ""bo-laptop""]\n\t[time: ""0x4e106e2bL""]\n";
  memcpy((void *)&UDPShellP__builtins[__nesc_mote], (void *)&(struct UDPShellP__cmd_name [UDPShellP__N_BUILTINS]){ { 4, "help" }, { 4, "echo" }, { 5, "ping6" }, { 6, "uptime" }, { 5, "ident" } }, sizeof UDPShellP__builtins[__nesc_mote]);
  memcpy((void *)&UDPShellP__builtin_actions[__nesc_mote], (void *)&(struct UDPShellP__cmd_builtin [UDPShellP__N_BUILTINS]){ { UDPShellP__action_help }, { UDPShellP__action_echo }, { UDPShellP__action_ping6 }, { UDPShellP__action_uptime }, { UDPShellP__action_ident } }, sizeof UDPShellP__builtin_actions[__nesc_mote]);

  /* Module ICMPPingP */
  memset((void *)&ICMPPingP__ping_seq[__nesc_mote], 0, sizeof ICMPPingP__ping_seq[__nesc_mote]);
  memset((void *)&ICMPPingP__ping_n[__nesc_mote], 0, sizeof ICMPPingP__ping_n[__nesc_mote]);
  memset((void *)&ICMPPingP__ping_rcv[__nesc_mote], 0, sizeof ICMPPingP__ping_rcv[__nesc_mote]);
  memset((void *)&ICMPPingP__ping_ident[__nesc_mote], 0, sizeof ICMPPingP__ping_ident[__nesc_mote]);
  memset((void *)&ICMPPingP__ping_dest[__nesc_mote], 0, sizeof ICMPPingP__ping_dest[__nesc_mote]);

  /* Module RouteCmdP */
  RouteCmdP__header[__nesc_mote] = "destination\t\tgateway\t\tiface\n";
  memcpy((void *)&RouteCmdP__ifaces[__nesc_mote], (void *)&(struct RouteCmdP____nesc_unnamed4418 [3]){ { 0, "any" }, { 1, "pan" }, { 2, "ppp" } }, sizeof RouteCmdP__ifaces[__nesc_mote]);
  memset((void *)&RouteCmdP__cur_entry[__nesc_mote], 0, sizeof RouteCmdP__cur_entry[__nesc_mote]);

  /* Module ShellCommandP__0 */

}
