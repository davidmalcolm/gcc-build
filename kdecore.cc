# 1 "../kdecore/libkdecore_la_all_cpp.cpp"
# 1 "<built-in>"



# 1 "<command line>"
# 1 "../kdecore/libkdecore_la_all_cpp.cpp"
# 1 "../config.h" 1
# 13 "../config.h"









# 34 "../config.h"










# 55 "../config.h"







# 74 "../config.h"


# 86 "../config.h"























































# 176 "../config.h"

























































# 266 "../config.h"











# 290 "../config.h"



























# 336 "../config.h"


















# 372 "../config.h"


































# 438 "../config.h"































































































# 577 "../config.h"





















# 617 "../config.h"




# 633 "../config.h"







































# 699 "../config.h"












# 761 "../config.h"
# 793 "../config.h"
extern "C"

int mkstemps(char *, int);
# 829 "../config.h"
extern "C"

unsigned long strlcat(char*, const char*, unsigned long);






extern "C"

unsigned long strlcpy(char*, const char*, unsigned long);
# 905 "../config.h"




# 920 "../config.h"
# 937 "../config.h"
# 3 "../kdecore/libkdecore_la_all_cpp.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/libintl.cpp" 1
# 50 "/coolo/prod/kdelibs/kdecore/libintl.cpp"
# 1 "../config.h" 1
# 13 "../config.h"









# 34 "../config.h"










# 55 "../config.h"







# 74 "../config.h"


# 86 "../config.h"























































# 176 "../config.h"

























































# 266 "../config.h"











# 290 "../config.h"



























# 336 "../config.h"


















# 372 "../config.h"


































# 438 "../config.h"































































































# 577 "../config.h"





















# 617 "../config.h"




# 633 "../config.h"







































# 699 "../config.h"












# 761 "../config.h"
# 793 "../config.h"
extern "C"

int mkstemps(char *, int);
# 829 "../config.h"
extern "C"

unsigned long strlcat(char*, const char*, unsigned long);






extern "C"

unsigned long strlcpy(char*, const char*, unsigned long);
# 905 "../config.h"




# 920 "../config.h"
# 937 "../config.h"
# 51 "/coolo/prod/kdelibs/kdecore/libintl.cpp" 2

# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 39 "/coolo/prod/qt-copy/include/qglobal.h"




# 116 "/coolo/prod/qt-copy/include/qglobal.h"
# 171 "/coolo/prod/qt-copy/include/qglobal.h"
# 275 "/coolo/prod/qt-copy/include/qglobal.h"
# 292 "/coolo/prod/qt-copy/include/qglobal.h"
# 512 "/coolo/prod/qt-copy/include/qglobal.h"
# 550 "/coolo/prod/qt-copy/include/qglobal.h"
# 573 "/coolo/prod/qt-copy/include/qglobal.h"
# 591 "/coolo/prod/qt-copy/include/qglobal.h"
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned uint;
typedef unsigned long ulong;
typedef char *pchar;
typedef uchar *puchar;
typedef const char *pcchar;







const bool FALSE = 0;
const bool TRUE = !0;
# 628 "/coolo/prod/qt-copy/include/qglobal.h"
# 642 "/coolo/prod/qt-copy/include/qglobal.h"








inline int qRound( double d )
{
    return d >= 0.0 ? int(d + 0.5) : int( d - ((int)d-1) + 0.5 ) + ((int)d-1);
}
# 675 "/coolo/prod/qt-copy/include/qglobal.h"
typedef signed char Q_INT8;
typedef unsigned char Q_UINT8;
typedef short Q_INT16;
typedef unsigned short Q_UINT16;
typedef int Q_INT32;
typedef unsigned int Q_UINT32;




typedef long Q_LONG;
typedef unsigned long Q_ULONG;







typedef long long Q_INT64;
typedef unsigned long long Q_UINT64;

typedef Q_INT64 Q_LLONG;
typedef Q_UINT64 Q_ULLONG;







    typedef Q_ULONG QtOffset;







class QDataStream;
# 740 "/coolo/prod/qt-copy/include/qglobal.h"
# 1 "/coolo/prod/qt-copy/include/qconfig.h" 1







# 741 "/coolo/prod/qt-copy/include/qglobal.h" 2
# 750 "/coolo/prod/qt-copy/include/qglobal.h"
# 1 "/coolo/prod/qt-copy/include/qmodules.h" 1

# 751 "/coolo/prod/qt-copy/include/qglobal.h" 2
# 802 "/coolo/prod/qt-copy/include/qglobal.h"



# 1 "/coolo/prod/qt-copy/include/qfeatures.h" 1
# 432 "/coolo/prod/qt-copy/include/qfeatures.h"
# 807 "/coolo/prod/qt-copy/include/qglobal.h" 2
# 856 "/coolo/prod/qt-copy/include/qglobal.h"
# 873 "/coolo/prod/qt-copy/include/qglobal.h"
 const char *qVersion();
 bool qSysInfo( int *wordSize, bool *bigEndian );
 bool qSharedBuild();
# 899 "/coolo/prod/qt-copy/include/qglobal.h"


















# 935 "/coolo/prod/qt-copy/include/qglobal.h"
 void qDebug( const char *, ... )

    __attribute__ ((format (printf, 1, 2)))

;

 void qWarning( const char *, ... )

    __attribute__ ((format (printf, 1, 2)))

;

 void qFatal( const char *, ... )

    __attribute__ ((format (printf, 1, 2)))

;

 void qSystemWarning( const char *, int code = -1 );
# 983 "/coolo/prod/qt-copy/include/qglobal.h"
# 999 "/coolo/prod/qt-copy/include/qglobal.h"
 bool qt_check_pointer( bool c, const char *, int );


# 1013 "/coolo/prod/qt-copy/include/qglobal.h"
enum QtMsgType { QtDebugMsg, QtWarningMsg, QtFatalMsg };

typedef void (*QtMsgHandler)(QtMsgType, const char *);
 QtMsgHandler qInstallMsgHandler( QtMsgHandler );





 void qSuppressObsoleteWarnings( bool = TRUE );

 void qObsolete( const char *obj, const char *oldfunc,
                   const char *newfunc );
 void qObsolete( const char *obj, const char *oldfunc );
 void qObsolete( const char *message );






 const char *qInstallPath();
 const char *qInstallPathDocs();
 const char *qInstallPathHeaders();
 const char *qInstallPathLibs();
 const char *qInstallPathBins();
 const char *qInstallPathPlugins();
 const char *qInstallPathData();
 const char *qInstallPathTranslations();
 const char *qInstallPathSysconf();
# 1059 "/coolo/prod/qt-copy/include/qglobal.h"
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 53 "/coolo/prod/kdelibs/kdecore/libintl.cpp" 2

# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 20 "/usr/include/features.h" 3 4
# 109 "/usr/include/features.h" 3 4



# 127 "/usr/include/features.h" 3 4


#undef _XOPEN_SOURCE


#undef _BSD_SOURCE

# 160 "/usr/include/features.h" 3 4
# 176 "/usr/include/features.h" 3 4















#undef __USE_ISOC99
# 211 "/usr/include/features.h" 3 4



























# 256 "/usr/include/features.h" 3 4



# 271 "/usr/include/features.h" 3 4

















# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 20 "/usr/include/sys/cdefs.h" 3 4
# 44 "/usr/include/sys/cdefs.h" 3 4





# 70 "/usr/include/sys/cdefs.h" 3 4






# 104 "/usr/include/sys/cdefs.h" 3 4











# 151 "/usr/include/sys/cdefs.h" 3 4
# 174 "/usr/include/sys/cdefs.h" 3 4
# 183 "/usr/include/sys/cdefs.h" 3 4
# 192 "/usr/include/sys/cdefs.h" 3 4







# 213 "/usr/include/sys/cdefs.h" 3 4
# 223 "/usr/include/sys/cdefs.h" 3 4
# 249 "/usr/include/sys/cdefs.h" 3 4
# 292 "/usr/include/features.h" 2 3 4
# 314 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 315 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4




# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 188 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4








typedef __SIZE_TYPE__ size_t;
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 264 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
# 291 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 344 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_wchar_t
# 399 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
# 408 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_NULL
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {





# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 26 "/usr/include/bits/waitflags.h" 3 4

# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 29 "/usr/include/bits/waitstatus.h" 3 4
























# 1 "/usr/include/endian.h" 1 3 4
# 20 "/usr/include/endian.h" 3 4
# 32 "/usr/include/endian.h" 3 4


# 1 "/usr/include/bits/endian.h" 1 3 4






# 38 "/usr/include/endian.h" 2 3 4










# 64 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

        unsigned int __w_termsig:7;
        unsigned int __w_coredump:1;
        unsigned int __w_retcode:8;
        unsigned int:16;







      } __wait_terminated;
    struct
      {

        unsigned int __w_stopval:8;
        unsigned int __w_stopsig:8;
        unsigned int:16;






      } __wait_stopped;
  };

# 44 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 64 "/usr/include/stdlib.h" 3 4
# 85 "/usr/include/stdlib.h" 3 4




typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;






__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;












extern size_t __ctype_get_mb_cur_max (void) throw ();




extern double atof (__const char *__nptr) throw () __attribute__ ((__pure__));

extern int atoi (__const char *__nptr) throw () __attribute__ ((__pure__));

extern long int atol (__const char *__nptr) throw () __attribute__ ((__pure__));





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__));





extern double strtod (__const char *__restrict __nptr,
                      char **__restrict __endptr) throw ();





extern float strtof (__const char *__restrict __nptr,
                     char **__restrict __endptr) throw ();

extern long double strtold (__const char *__restrict __nptr,
                            char **__restrict __endptr) throw ();





extern long int strtol (__const char *__restrict __nptr,
                        char **__restrict __endptr, int __base) throw ();

extern unsigned long int strtoul (__const char *__restrict __nptr,
                                  char **__restrict __endptr, int __base)
     throw ();




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
                             char **__restrict __endptr, int __base) throw ();

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
                                       char **__restrict __endptr, int __base)
     throw ();





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
                              char **__restrict __endptr, int __base) throw ();

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
                                        char **__restrict __endptr, int __base)
     throw ();

# 225 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 22 "/usr/include/xlocale.h" 3 4





typedef struct __locale_struct
{

  struct locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;
# 226 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (__const char *__restrict __nptr,
                          char **__restrict __endptr, int __base,
                          __locale_t __loc) throw ();

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
                                    char **__restrict __endptr,
                                    int __base, __locale_t __loc) throw ();

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
                                char **__restrict __endptr, int __base,
                                __locale_t __loc) throw ();

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
                                          char **__restrict __endptr,
                                          int __base, __locale_t __loc)
     throw ();

extern double strtod_l (__const char *__restrict __nptr,
                        char **__restrict __endptr, __locale_t __loc)
     throw ();

extern float strtof_l (__const char *__restrict __nptr,
                       char **__restrict __endptr, __locale_t __loc) throw ();

extern long double strtold_l (__const char *__restrict __nptr,
                              char **__restrict __endptr,
                              __locale_t __loc) throw ();






extern double __strtod_internal (__const char *__restrict __nptr,
                                 char **__restrict __endptr, int __group)
     throw ();
extern float __strtof_internal (__const char *__restrict __nptr,
                                char **__restrict __endptr, int __group)
     throw ();
extern long double __strtold_internal (__const char *__restrict __nptr,
                                       char **__restrict __endptr,
                                       int __group) throw ();

extern long int __strtol_internal (__const char *__restrict __nptr,
                                   char **__restrict __endptr,
                                   int __base, int __group) throw ();


extern unsigned long int __strtoul_internal (__const char *__restrict __nptr,
                                             char **__restrict __endptr,
                                             int __base, int __group) throw ();



__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
                                         char **__restrict __endptr,
                                         int __base, int __group) throw ();


__extension__
extern unsigned long long int __strtoull_internal (__const char *
                                                   __restrict __nptr,
                                                   char **__restrict __endptr,
                                                   int __base, int __group)
     throw ();
# 408 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw ();


extern long int a64l (__const char *__s) throw () __attribute__ ((__pure__));


# 1 "/usr/include/sys/types.h" 1 3 4
# 25 "/usr/include/sys/types.h" 3 4



extern "C" {

# 1 "/usr/include/bits/types.h" 1 3 4
# 25 "/usr/include/bits/types.h" 3 4


# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 19 "/usr/include/bits/wordsize.h" 3 4
# 29 "/usr/include/bits/types.h" 2 3 4

# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 32 "/usr/include/bits/types.h" 2 3 4


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




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;





__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 103 "/usr/include/bits/types.h" 3 4

# 128 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 25 "/usr/include/bits/typesizes.h" 3 4






# 129 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef int __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long long int __fsfilcnt64_t;




typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef int __intptr_t;


typedef unsigned int __socklen_t;
# 32 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;



typedef __loff_t loff_t;



typedef __ino_t ino_t;





typedef __ino64_t ino64_t;



typedef __dev_t dev_t;



typedef __gid_t gid_t;



typedef __mode_t mode_t;



typedef __nlink_t nlink_t;



typedef __uid_t uid_t;




typedef __off_t off_t;





typedef __off64_t off64_t;



typedef __pid_t pid_t;



typedef __id_t id_t;



typedef __ssize_t ssize_t;




typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;




typedef __key_t key_t;




# 1 "/usr/include/time.h" 1 3 4
# 54 "/usr/include/time.h" 3 4





typedef __clock_t clock_t;






#undef __need_clock_t







typedef __time_t time_t;






#undef __need_time_t







typedef __clockid_t clockid_t;










typedef __timer_t timer_t;


#undef __need_timer_t
# 134 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;


typedef __suseconds_t suseconds_t;



# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 184 "/usr/include/sys/types.h" 3 4




typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));












# 1 "/usr/include/sys/select.h" 1 3 4
# 23 "/usr/include/sys/select.h" 3 4







# 1 "/usr/include/bits/select.h" 1 3 4
# 26 "/usr/include/bits/select.h" 3 4
# 37 "/usr/include/bits/select.h" 3 4








# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 21 "/usr/include/bits/sigset.h" 3 4

typedef int __sig_atomic_t;



typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4


typedef __sigset_t sigset_t;



# 1 "/usr/include/time.h" 1 3 4
# 83 "/usr/include/time.h" 3 4
#undef __need_time_t
# 114 "/usr/include/time.h" 3 4



struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };


#undef __need_timespec
# 45 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 60 "/usr/include/bits/time.h" 3 4
#undef __need_timeval





struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;








typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * sizeof (__fd_mask))];




  } fd_set;

#define FD_SET(fd,fds) \
    (fds)->fds_bits[(fd) / (8 * sizeof(__fd_mask))] |= ((__fd_mask)1) << ((fd) % (8*sizeof(__fd_mask)))
#define FD_ISSET(fd,fds) \
    (((fds)->fds_bits[(fd) / (8 * sizeof(__fd_mask))] & (((__fd_mask)1) << ((fd) % (8*sizeof(__fd_mask))))) != 0)



typedef __fd_mask fd_mask;








extern "C" {






extern int select (int __nfds, fd_set *__restrict __readfds,
                   fd_set *__restrict __writefds,
                   fd_set *__restrict __exceptfds,
                   struct timeval *__restrict __timeout) throw ();





extern int pselect (int __nfds, fd_set *__restrict __readfds,
                    fd_set *__restrict __writefds,
                    fd_set *__restrict __exceptfds,
                    const struct timespec *__restrict __timeout,
                    const __sigset_t *__restrict __sigmask) throw ();


}
# 217 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 21 "/usr/include/sys/sysmacros.h" 3 4






# 220 "/usr/include/sys/types.h" 2 3 4




typedef __blksize_t blksize_t;





typedef __blkcnt_t blkcnt_t;


typedef __fsblkcnt_t fsblkcnt_t;


typedef __fsfilcnt_t fsfilcnt_t;
# 258 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 20 "/usr/include/bits/pthreadtypes.h" 3 4

# 1 "/usr/include/bits/sched.h" 1 3 4
# 81 "/usr/include/bits/sched.h" 3 4

struct __sched_param
  {
    int __sched_priority;
  };
#undef __need_schedparam
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4


struct _pthread_fastlock
{
  long int __status;
  int __spinlock;

};



typedef struct _pthread_descr_struct *_pthread_descr;




typedef struct __pthread_attr_s
{
  int __detachstate;
  int __schedpolicy;
  struct __sched_param __schedparam;
  int __inheritsched;
  int __scope;
  size_t __guardsize;
  int __stackaddr_set;
  void *__stackaddr;
  size_t __stacksize;
} pthread_attr_t;





__extension__ typedef long long __pthread_cond_align_t;




typedef struct
{
  struct _pthread_fastlock __c_lock;
  _pthread_descr __c_waiting;
  char __padding[48 - sizeof (struct _pthread_fastlock)
                 - sizeof (_pthread_descr) - sizeof (__pthread_cond_align_t)];
  __pthread_cond_align_t __align;
} pthread_cond_t;



typedef struct
{
  int __dummy;
} pthread_condattr_t;


typedef unsigned int pthread_key_t;





typedef struct
{
  int __m_reserved;
  int __m_count;
  _pthread_descr __m_owner;
  int __m_kind;
  struct _pthread_fastlock __m_lock;
} pthread_mutex_t;



typedef struct
{
  int __mutexkind;
} pthread_mutexattr_t;



typedef int pthread_once_t;




typedef struct _pthread_rwlock_t
{
  struct _pthread_fastlock __rw_lock;
  int __rw_readers;
  _pthread_descr __rw_writer;
  _pthread_descr __rw_read_waiting;
  _pthread_descr __rw_write_waiting;
  int __rw_kind;
  int __rw_pshared;
} pthread_rwlock_t;



typedef struct
{
  int __lockkind;
  int __pshared;
} pthread_rwlockattr_t;




typedef volatile int pthread_spinlock_t;


typedef struct {
  struct _pthread_fastlock __ba_lock;
  int __ba_required;
  int __ba_present;
  _pthread_descr __ba_waiting;
} pthread_barrier_t;


typedef struct {
  int __pshared;
} pthread_barrierattr_t;





typedef unsigned long int pthread_t;
# 267 "/usr/include/sys/types.h" 2 3 4


}
# 415 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
                        size_t __statelen) throw ();



extern char *setstate (char *__statebuf) throw ();







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
                     int32_t *__restrict __result) throw ();

extern int srandom_r (unsigned int __seed, struct random_data *__buf) throw ();

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
                        size_t __statelen,
                        struct random_data *__restrict __buf) throw ();

extern int setstate_r (char *__restrict __statebuf,
                       struct random_data *__restrict __buf) throw ();






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw ();


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3]) throw ();


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3]) throw ();


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3]) throw ();
extern void lcong48 (unsigned short int __param[7]) throw ();





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
                      double *__restrict __result) throw ();
extern int erand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      double *__restrict __result) throw ();


extern int lrand48_r (struct drand48_data *__restrict __buffer,
                      long int *__restrict __result) throw ();
extern int nrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      long int *__restrict __result) throw ();


extern int mrand48_r (struct drand48_data *__restrict __buffer,
                      long int *__restrict __result) throw ();
extern int jrand48_r (unsigned short int __xsubi[3],
                      struct drand48_data *__restrict __buffer,
                      long int *__restrict __result) throw ();


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw ();

extern int seed48_r (unsigned short int __seed16v[3],
                     struct drand48_data *__buffer) throw ();

extern int lcong48_r (unsigned short int __param[7],
                      struct drand48_data *__buffer) throw ();








extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__));

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__));







extern void *realloc (void *__ptr, size_t __size) throw () __attribute__ ((__malloc__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 20 "/usr/include/alloca.h" 3 4



# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();




}
# 577 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__));




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw ();





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw ();






extern void exit (int __status) throw () __attribute__ ((__noreturn__));






extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw ();




extern char *__secure_getenv (__const char *__name) throw ();





extern int putenv (char *__string) throw ();





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw ();


extern int unsetenv (__const char *__name) throw ();






extern int clearenv (void) throw ();
# 661 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw ();







extern int mkstemp (char *__template) throw ();
# 678 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) throw ();
# 688 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw ();





extern int system (__const char *__command) throw ();







extern char *canonicalize_file_name (__const char *__name) throw ();
# 712 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
                       char *__restrict __resolved) throw ();





typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;






extern void *bsearch (__const void *__key, __const void *__base,
                      size_t __nmemb, size_t __size, __compar_fn_t __compar);



extern void qsort (void *__base, size_t __nmemb, size_t __size,
                   __compar_fn_t __compar);



extern int abs (int __x) throw () __attribute__ ((__const__));
extern long int labs (long int __x) throw () __attribute__ ((__const__));



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__));







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__));




__extension__ extern lldiv_t lldiv (long long int __numer,
                                    long long int __denom)
     throw () __attribute__ ((__const__));

# 776 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign) throw ();




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign) throw ();




extern char *gcvt (double __value, int __ndigit, char *__buf) throw ();




extern char *qecvt (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign) throw ();
extern char *qfcvt (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign) throw ();
extern char *qgcvt (long double __value, int __ndigit, char *__buf) throw ();




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf,
                   size_t __len) throw ();
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
                   int *__restrict __sign, char *__restrict __buf,
                   size_t __len) throw ();

extern int qecvt_r (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign,
                    char *__restrict __buf, size_t __len) throw ();
extern int qfcvt_r (long double __value, int __ndigit,
                    int *__restrict __decpt, int *__restrict __sign,
                    char *__restrict __buf, size_t __len) throw ();







extern int mblen (__const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
                   __const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
                        __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
                        __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (__const char *__response) throw ();
# 858 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
                      char *__const *__restrict __tokens,
                      char **__restrict __valuep) throw ();





extern void setkey (__const char *__key) throw ();







extern int posix_openpt (int __oflag) throw ();







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw ();






extern int ptsname_r (int __fd, char *__buf, size_t __buflen) throw ();


extern int getpt (void) throw ();






extern int getloadavg (double __loadavg[], int __nelem) throw ();





}
# 55 "/coolo/prod/kdelibs/kdecore/libintl.cpp" 2


# 1 "/usr/include/string.h" 1 3 4
# 24 "/usr/include/string.h" 3 4



extern "C" {


# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 397 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef NULL

# 408 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_NULL
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
                     __const void *__restrict __src, size_t __n) throw ();


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw ();






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
                      int __c, size_t __n)
     throw ();





extern void *memset (void *__s, int __c, size_t __n) throw ();


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern void *memchr (__const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__));





extern void *rawmemchr (__const void *__s, int __c) throw () __attribute__ ((__pure__));


extern void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__));





extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw ();

extern char *strncpy (char *__restrict __dest,
                      __const char *__restrict __src, size_t __n) throw ();


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw ();

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
                      size_t __n) throw ();


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));

extern size_t strxfrm (char *__restrict __dest,
                       __const char *__restrict __src, size_t __n) throw ();

# 117 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
                         __locale_t __l) throw ();




extern char *strdup (__const char *__s) throw () __attribute__ ((__malloc__));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__));




# 149 "/usr/include/string.h" 3 4
# 160 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c) throw () __attribute__ ((__pure__));

extern char *strrchr (__const char *__s, int __c) throw () __attribute__ ((__pure__));





extern char *strchrnul (__const char *__s, int __c) throw () __attribute__ ((__pure__));





extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__));

extern char *strpbrk (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__));

extern char *strstr (__const char *__haystack, __const char *__needle)
     throw () __attribute__ ((__pure__));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw ();




extern char *__strtok_r (char *__restrict __s,
                         __const char *__restrict __delim,
                         char **__restrict __save_ptr) throw ();

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
                       char **__restrict __save_ptr) throw ();




extern char *strcasestr (__const char *__haystack, __const char *__needle)
     throw () __attribute__ ((__pure__));






extern void *memmem (__const void *__haystack, size_t __haystacklen,
                     __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__));



extern void *__mempcpy (void *__restrict __dest,
                        __const void *__restrict __src, size_t __n) throw ();
extern void *mempcpy (void *__restrict __dest,
                      __const void *__restrict __src, size_t __n) throw ();





extern size_t strlen (__const char *__s) throw () __attribute__ ((__pure__));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__));





extern char *strerror (int __errnum) throw ();




extern char *strerror_r (int __errnum, char *__buf, size_t __buflen) throw ();




extern void __bzero (void *__s, size_t __n) throw ();



extern void bcopy (__const void *__src, void *__dest, size_t __n) throw ();


extern void bzero (void *__s, size_t __n) throw ();


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern char *index (__const char *__s, int __c) throw () __attribute__ ((__pure__));


extern char *rindex (__const char *__s, int __c) throw () __attribute__ ((__pure__));



extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
                         __locale_t __loc) throw () __attribute__ ((__pure__));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
                          size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__));





extern char *strsep (char **__restrict __stringp,
                     __const char *__restrict __delim) throw ();




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__));


extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw ();
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw ();



extern char *__stpncpy (char *__restrict __dest,
                        __const char *__restrict __src, size_t __n) throw ();
extern char *stpncpy (char *__restrict __dest,
                      __const char *__restrict __src, size_t __n) throw ();


extern char *strfry (char *__string) throw ();


extern void *memfrob (void *__s, size_t __n) throw ();






extern char *basename (__const char *__filename) throw ();
# 379 "/usr/include/string.h" 3 4
}
# 58 "/coolo/prod/kdelibs/kdecore/libintl.cpp" 2





# 1 "/usr/include/fcntl.h" 1 3 4
# 24 "/usr/include/fcntl.h" 3 4




extern "C" {



# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 29 "/usr/include/bits/fcntl.h" 3 4
















































struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };









# 34 "/usr/include/fcntl.h" 2 3 4



# 1 "/usr/include/sys/stat.h" 1 3 4
# 24 "/usr/include/sys/stat.h" 3 4










# 1 "/usr/include/time.h" 1 3 4
# 83 "/usr/include/time.h" 3 4
#undef __need_time_t
# 125 "/usr/include/time.h" 3 4
#undef __need_timespec
# 38 "/usr/include/sys/stat.h" 2 3 4
# 103 "/usr/include/sys/stat.h" 3 4
extern "C" {

# 1 "/usr/include/bits/stat.h" 1 3 4
# 24 "/usr/include/bits/stat.h" 3 4




struct stat
  {
    __dev_t st_dev;
    unsigned short int __pad1;

    __ino_t st_ino;



    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;

    __off_t st_size;



    __blksize_t st_blksize;


    __blkcnt_t st_blocks;
# 70 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 85 "/usr/include/bits/stat.h" 3 4
    unsigned long int __unused4;
    unsigned long int __unused5;



  };


struct stat64
  {
    __dev_t st_dev;
    unsigned int __pad1;

    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned int __pad2;
    __off64_t st_size;
    __blksize_t st_blksize;

    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 127 "/usr/include/bits/stat.h" 3 4
    __ino64_t st_ino;
  };














# 106 "/usr/include/sys/stat.h" 2 3 4
























# 154 "/usr/include/sys/stat.h" 3 4




























extern int stat (__const char *__restrict __file,
                 struct stat *__restrict __buf) throw ();



extern int fstat (int __fd, struct stat *__buf) throw ();
# 226 "/usr/include/sys/stat.h" 3 4
extern int stat64 (__const char *__restrict __file,
                   struct stat64 *__restrict __buf) throw ();
extern int fstat64 (int __fd, struct stat64 *__buf) throw ();






extern int lstat (__const char *__restrict __file,
                  struct stat *__restrict __buf) throw ();
# 248 "/usr/include/sys/stat.h" 3 4
extern int lstat64 (__const char *__restrict __file,
                    struct stat64 *__restrict __buf) throw ();





extern int chmod (__const char *__file, __mode_t __mode) throw ();





extern int lchmod (__const char *__file, __mode_t __mode) throw ();




extern int fchmod (int __fd, __mode_t __mode) throw ();





extern __mode_t umask (__mode_t __mask) throw ();




extern __mode_t getumask (void) throw ();



extern int mkdir (__const char *__path, __mode_t __mode) throw ();





extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     throw ();




extern int mkfifo (__const char *__path, __mode_t __mode) throw ();
# 319 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf) throw ();
extern int __xstat (int __ver, __const char *__filename,
                    struct stat *__stat_buf) throw ();
extern int __lxstat (int __ver, __const char *__filename,
                     struct stat *__stat_buf) throw ();
# 343 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     throw ();
extern int __xstat64 (int __ver, __const char *__filename,
                      struct stat64 *__stat_buf) throw ();
extern int __lxstat64 (int __ver, __const char *__filename,
                       struct stat64 *__stat_buf) throw ();

extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
                     __dev_t *__dev) throw ();




extern __inline__ int stat (__const char *__path,
                            struct stat *__statbuf) throw ()
{
  return __xstat (3, __path, __statbuf);
}


extern __inline__ int lstat (__const char *__path,
                             struct stat *__statbuf) throw ()
{
  return __lxstat (3, __path, __statbuf);
}


extern __inline__ int fstat (int __fd, struct stat *__statbuf) throw ()
{
  return __fxstat (3, __fd, __statbuf);
}


extern __inline__ int mknod (__const char *__path, __mode_t __mode,
                             __dev_t __dev) throw ()
{
  return __xmknod (1, __path, __mode, &__dev);
}





extern __inline__ int stat64 (__const char *__path,
                              struct stat64 *__statbuf) throw ()
{
  return __xstat64 (3, __path, __statbuf);
}


extern __inline__ int lstat64 (__const char *__path,
                               struct stat64 *__statbuf) throw ()
{
  return __lxstat64 (3, __path, __statbuf);
}


extern __inline__ int fstat64 (int __fd, struct stat64 *__statbuf) throw ()
{
  return __fxstat64 (3, __fd, __statbuf);
}




}
# 38 "/usr/include/fcntl.h" 2 3 4















extern int fcntl (int __fd, int __cmd, ...) throw ();





extern int open (__const char *__file, int __oflag, ...) throw ();
# 76 "/usr/include/fcntl.h" 3 4
extern int open64 (__const char *__file, int __oflag, ...) throw ();






extern int creat (__const char *__file, __mode_t __mode) throw ();
# 93 "/usr/include/fcntl.h" 3 4
extern int creat64 (__const char *__file, __mode_t __mode) throw ();
# 106 "/usr/include/fcntl.h" 3 4


extern int lockf (int __fd, int __cmd, __off_t __len) throw ();
# 122 "/usr/include/fcntl.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) throw ();







extern int posix_fadvise (int __fd, __off_t __offset, size_t __len,
                          int __advise) throw ();
# 142 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, __off64_t __offset, size_t __len,
                            int __advise) throw ();





extern int posix_fallocate (int __fd, __off_t __offset, size_t __len) throw ();
# 160 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, __off64_t __offset, size_t __len)
     throw ();



}
# 64 "/coolo/prod/kdelibs/kdecore/libintl.cpp" 2



# 1 "/usr/include/unistd.h" 1 3 4
# 24 "/usr/include/unistd.h" 3 4



extern "C" {












































# 175 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 21 "/usr/include/bits/posix_opt.h" 3 4










































































# 176 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 19 "/usr/include/bits/wordsize.h" 3 4
# 24 "/usr/include/bits/environments.h" 2 3 4
# 61 "/usr/include/bits/environments.h" 3 4





# 180 "/usr/include/unistd.h" 2 3 4



# 197 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 397 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef NULL

# 408 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_NULL
# 200 "/usr/include/unistd.h" 2 3 4
# 240 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;





typedef __socklen_t socklen_t;







extern int access (__const char *__name, int __type) throw ();




extern int euidaccess (__const char *__name, int __type) throw ();









# 290 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 302 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence) throw ();



extern int close (int __fd) throw ();



extern ssize_t read (int __fd, void *__buf, size_t __nbytes) throw ();


extern ssize_t write (int __fd, __const void *__buf, size_t __n) throw ();



extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
     throw ();
extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
                       __off_t __offset) throw ();
# 340 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
                        __off64_t __offset) throw ();


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
                         __off64_t __offset) throw ();







extern int pipe (int __pipedes[2]) throw ();
# 362 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 371 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds) throw ();






extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();



extern int usleep (__useconds_t __useconds) throw ();





extern int pause (void) throw ();



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw ();



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw ();




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw ();




extern int chdir (__const char *__path) throw ();



extern int fchdir (int __fd) throw ();
# 423 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw ();





extern char *get_current_dir_name (void) throw ();






extern char *getwd (char *__buf) throw ();




extern int dup (int __fd) throw ();


extern int dup2 (int __fd, int __fd2) throw ();


extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
                   char *__const __envp[]) throw ();




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw ();




extern int execv (__const char *__path, char *__const __argv[]) throw ();



extern int execle (__const char *__path, __const char *__arg, ...) throw ();



extern int execl (__const char *__path, __const char *__arg, ...) throw ();



extern int execvp (__const char *__file, char *__const __argv[]) throw ();




extern int execlp (__const char *__file, __const char *__arg, ...) throw ();




extern int nice (int __inc) throw ();




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 25 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,
    _PC_MAX_CANON,
    _PC_MAX_INPUT,
    _PC_NAME_MAX,
    _PC_PATH_MAX,
    _PC_PIPE_BUF,
    _PC_CHOWN_RESTRICTED,
    _PC_NO_TRUNC,
    _PC_VDISABLE,
    _PC_SYNC_IO,
    _PC_ASYNC_IO,
    _PC_PRIO_IO,
    _PC_SOCK_MAXBUF,
    _PC_FILESIZEBITS,
    _PC_REC_INCR_XFER_SIZE,
    _PC_REC_MAX_XFER_SIZE,
    _PC_REC_MIN_XFER_SIZE,
    _PC_REC_XFER_ALIGN,
    _PC_ALLOC_SIZE_MIN,
    _PC_SYMLINK_MAX
  };


enum
  {
    _SC_ARG_MAX,
    _SC_CHILD_MAX,
    _SC_CLK_TCK,
    _SC_NGROUPS_MAX,
    _SC_OPEN_MAX,
    _SC_STREAM_MAX,
    _SC_TZNAME_MAX,
    _SC_JOB_CONTROL,
    _SC_SAVED_IDS,
    _SC_REALTIME_SIGNALS,
    _SC_PRIORITY_SCHEDULING,
    _SC_TIMERS,
    _SC_ASYNCHRONOUS_IO,
    _SC_PRIORITIZED_IO,
    _SC_SYNCHRONIZED_IO,
    _SC_FSYNC,
    _SC_MAPPED_FILES,
    _SC_MEMLOCK,
    _SC_MEMLOCK_RANGE,
    _SC_MEMORY_PROTECTION,
    _SC_MESSAGE_PASSING,
    _SC_SEMAPHORES,
    _SC_SHARED_MEMORY_OBJECTS,
    _SC_AIO_LISTIO_MAX,
    _SC_AIO_MAX,
    _SC_AIO_PRIO_DELTA_MAX,
    _SC_DELAYTIMER_MAX,
    _SC_MQ_OPEN_MAX,
    _SC_MQ_PRIO_MAX,
    _SC_VERSION,
    _SC_PAGESIZE,
    _SC_RTSIG_MAX,
    _SC_SEM_NSEMS_MAX,
    _SC_SEM_VALUE_MAX,
    _SC_SIGQUEUE_MAX,
    _SC_TIMER_MAX,



    _SC_BC_BASE_MAX,
    _SC_BC_DIM_MAX,
    _SC_BC_SCALE_MAX,
    _SC_BC_STRING_MAX,
    _SC_COLL_WEIGHTS_MAX,
    _SC_EQUIV_CLASS_MAX,
    _SC_EXPR_NEST_MAX,
    _SC_LINE_MAX,
    _SC_RE_DUP_MAX,
    _SC_CHARCLASS_NAME_MAX,

    _SC_2_VERSION,
    _SC_2_C_BIND,
    _SC_2_C_DEV,
    _SC_2_FORT_DEV,
    _SC_2_FORT_RUN,
    _SC_2_SW_DEV,
    _SC_2_LOCALEDEF,

    _SC_PII,
    _SC_PII_XTI,
    _SC_PII_SOCKET,
    _SC_PII_INTERNET,
    _SC_PII_OSI,
    _SC_POLL,
    _SC_SELECT,
    _SC_UIO_MAXIOV,
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
    _SC_PII_INTERNET_STREAM,
    _SC_PII_INTERNET_DGRAM,
    _SC_PII_OSI_COTS,
    _SC_PII_OSI_CLTS,
    _SC_PII_OSI_M,
    _SC_T_IOV_MAX,


    _SC_THREADS,
    _SC_THREAD_SAFE_FUNCTIONS,
    _SC_GETGR_R_SIZE_MAX,
    _SC_GETPW_R_SIZE_MAX,
    _SC_LOGIN_NAME_MAX,
    _SC_TTY_NAME_MAX,
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
    _SC_THREAD_KEYS_MAX,
    _SC_THREAD_STACK_MIN,
    _SC_THREAD_THREADS_MAX,
    _SC_THREAD_ATTR_STACKADDR,
    _SC_THREAD_ATTR_STACKSIZE,
    _SC_THREAD_PRIORITY_SCHEDULING,
    _SC_THREAD_PRIO_INHERIT,
    _SC_THREAD_PRIO_PROTECT,
    _SC_THREAD_PROCESS_SHARED,

    _SC_NPROCESSORS_CONF,
    _SC_NPROCESSORS_ONLN,
    _SC_PHYS_PAGES,
    _SC_AVPHYS_PAGES,
    _SC_ATEXIT_MAX,
    _SC_PASS_MAX,

    _SC_XOPEN_VERSION,
    _SC_XOPEN_XCU_VERSION,
    _SC_XOPEN_UNIX,
    _SC_XOPEN_CRYPT,
    _SC_XOPEN_ENH_I18N,
    _SC_XOPEN_SHM,

    _SC_2_CHAR_TERM,
    _SC_2_C_VERSION,
    _SC_2_UPE,

    _SC_XOPEN_XPG2,
    _SC_XOPEN_XPG3,
    _SC_XOPEN_XPG4,

    _SC_CHAR_BIT,
    _SC_CHAR_MAX,
    _SC_CHAR_MIN,
    _SC_INT_MAX,
    _SC_INT_MIN,
    _SC_LONG_BIT,
    _SC_WORD_BIT,
    _SC_MB_LEN_MAX,
    _SC_NZERO,
    _SC_SSIZE_MAX,
    _SC_SCHAR_MAX,
    _SC_SCHAR_MIN,
    _SC_SHRT_MAX,
    _SC_SHRT_MIN,
    _SC_UCHAR_MAX,
    _SC_UINT_MAX,
    _SC_ULONG_MAX,
    _SC_USHRT_MAX,

    _SC_NL_ARGMAX,
    _SC_NL_LANGMAX,
    _SC_NL_MSGMAX,
    _SC_NL_NMAX,
    _SC_NL_SETMAX,
    _SC_NL_TEXTMAX,

    _SC_XBS5_ILP32_OFF32,
    _SC_XBS5_ILP32_OFFBIG,
    _SC_XBS5_LP64_OFF64,
    _SC_XBS5_LPBIG_OFFBIG,

    _SC_XOPEN_LEGACY,
    _SC_XOPEN_REALTIME,
    _SC_XOPEN_REALTIME_THREADS,

    _SC_ADVISORY_INFO,
    _SC_BARRIERS,
    _SC_BASE,
    _SC_C_LANG_SUPPORT,
    _SC_C_LANG_SUPPORT_R,
    _SC_CLOCK_SELECTION,
    _SC_CPUTIME,
    _SC_THREAD_CPUTIME,
    _SC_DEVICE_IO,
    _SC_DEVICE_SPECIFIC,
    _SC_DEVICE_SPECIFIC_R,
    _SC_FD_MGMT,
    _SC_FIFO,
    _SC_PIPE,
    _SC_FILE_ATTRIBUTES,
    _SC_FILE_LOCKING,
    _SC_FILE_SYSTEM,
    _SC_MONOTONIC_CLOCK,
    _SC_MULTI_PROCESS,
    _SC_SINGLE_PROCESS,
    _SC_NETWORKING,
    _SC_READER_WRITER_LOCKS,
    _SC_SPIN_LOCKS,
    _SC_REGEXP,
    _SC_REGEX_VERSION,
    _SC_SHELL,
    _SC_SIGNALS,
    _SC_SPAWN,
    _SC_SPORADIC_SERVER,
    _SC_THREAD_SPORADIC_SERVER,
    _SC_SYSTEM_DATABASE,
    _SC_SYSTEM_DATABASE_R,
    _SC_TIMEOUTS,
    _SC_TYPED_MEMORY_OBJECTS,
    _SC_USER_GROUPS,
    _SC_USER_GROUPS_R,
    _SC_2_PBS,
    _SC_2_PBS_ACCOUNTING,
    _SC_2_PBS_LOCATE,
    _SC_2_PBS_MESSAGE,
    _SC_2_PBS_TRACK,
    _SC_SYMLOOP_MAX,
    _SC_STREAMS,
    _SC_2_PBS_CHECKPOINT,

    _SC_V6_ILP32_OFF32,
    _SC_V6_ILP32_OFFBIG,
    _SC_V6_LP64_OFF64,
    _SC_V6_LPBIG_OFFBIG,

    _SC_HOST_NAME_MAX,
    _SC_TRACE,
    _SC_TRACE_EVENT_FILTER,
    _SC_TRACE_INHERIT,
    _SC_TRACE_LOG
  };


enum
  {
    _CS_PATH,

    _CS_V6_WIDTH_RESTRICTED_ENVS,

    _CS_GNU_LIBC_VERSION,
    _CS_GNU_LIBPTHREAD_VERSION,

    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS,
    _CS_LFS_LIBS,
    _CS_LFS_LINTFLAGS,
    _CS_LFS64_CFLAGS,
    _CS_LFS64_LDFLAGS,
    _CS_LFS64_LIBS,
    _CS_LFS64_LINTFLAGS,

    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
    _CS_XBS5_ILP32_OFF32_LIBS,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
    _CS_XBS5_ILP32_OFFBIG_LIBS,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
    _CS_XBS5_LP64_OFF64_CFLAGS,
    _CS_XBS5_LP64_OFF64_LDFLAGS,
    _CS_XBS5_LP64_OFF64_LIBS,
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
    _CS_POSIX_V6_LP64_OFF64_LIBS,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
  };
# 501 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name) throw ();


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw () __attribute__ ((__const__));



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();




extern __pid_t getpgrp (void) throw ();
# 536 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 562 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();
# 580 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw ();



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw ();




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();




extern int seteuid (__uid_t __uid) throw ();






extern int setgid (__gid_t __gid) throw ();




extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();




extern int setegid (__gid_t __gid) throw ();





extern int getresuid (__uid_t *__euid, __uid_t *__ruid, __uid_t *__suid);



extern int getresgid (__gid_t *__egid, __gid_t *__rgid, __gid_t *__sgid);



extern int setresuid (__uid_t __euid, __uid_t __ruid, __uid_t __suid);



extern int setresgid (__gid_t __egid, __gid_t __rgid, __gid_t __sgid);






extern __pid_t fork (void) throw ();






extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen) throw ();



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (__const char *__from, __const char *__to) throw ();



extern int symlink (__const char *__from, __const char *__to) throw ();




extern int readlink (__const char *__restrict __path, char *__restrict __buf,
                     size_t __len) throw ();



extern int unlink (__const char *__name) throw ();


extern int rmdir (__const char *__path) throw ();



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();



extern char *getlogin (void) throw ();




extern int getlogin_r (char *__name, size_t __name_len) throw ();




extern int setlogin (__const char *__name) throw ();







# 1 "/usr/include/getopt.h" 1 3 4
# 38 "/usr/include/getopt.h" 3 4
extern "C" {
# 47 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 61 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 145 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts);
# 175 "/usr/include/getopt.h" 3 4
}



#undef __need_getopt
# 745 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw ();






extern int sethostname (__const char *__name, size_t __len) throw ();



extern int sethostid (long int __id) throw ();





extern int getdomainname (char *__name, size_t __len) throw ();
extern int setdomainname (__const char *__name, size_t __len) throw ();





extern int vhangup (void) throw ();


extern int revoke (__const char *__file) throw ();







extern int profil (unsigned short int *__sample_buffer, size_t __size,
                   size_t __offset, unsigned int __scale) throw ();





extern int acct (__const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw ();






extern int chroot (__const char *__path) throw ();



extern char *getpass (__const char *__prompt) throw ();





extern int fsync (int __fd) throw ();






extern long int gethostid (void) throw ();


extern void sync (void) throw ();




extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int truncate (__const char *__file, __off_t __length) throw ();
# 854 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length) throw ();




extern int ftruncate (int __fd, __off_t __length) throw ();
# 869 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw ();





extern int getdtablesize (void) throw ();
# 884 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw ();





extern void *sbrk (intptr_t __delta) throw ();
# 905 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 945 "/usr/include/unistd.h" 3 4
# 956 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes) throw ();







extern char *crypt (__const char *__key, __const char *__salt) throw ();



extern void encrypt (char *__block, int __edflag) throw ();






extern void swab (__const void *__restrict __from, void *__restrict __to,
                  ssize_t __n) throw ();







extern char *ctermid (char *__s) throw ();
# 1001 "/usr/include/unistd.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
                           void (*__parent) (void),
                           void (*__child) (void)) throw ();


}
# 68 "/coolo/prod/kdelibs/kdecore/libintl.cpp" 2



# 1 "/usr/include/sys/mman.h" 1 3 4
# 21 "/usr/include/sys/mman.h" 3 4



# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 27 "/usr/include/sys/mman.h" 2 3 4
# 42 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/include/bits/mman.h" 1 3 4
# 33 "/usr/include/bits/mman.h" 3 4




























# 43 "/usr/include/sys/mman.h" 2 3 4



extern "C" {
# 58 "/usr/include/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
                   int __flags, int __fd, __off_t __offset) throw ();
# 71 "/usr/include/sys/mman.h" 3 4
extern void *mmap64 (void *__addr, size_t __len, int __prot,
                     int __flags, int __fd, __off64_t __offset) throw ();




extern int munmap (void *__addr, size_t __len) throw ();




extern int mprotect (void *__addr, size_t __len, int __prot) throw ();




extern int msync (void *__addr, size_t __len, int __flags) throw ();




extern int madvise (void *__addr, size_t __len, int __advice) throw ();



extern int posix_madvise (void *__addr, size_t __len, int __advice) throw ();




extern int mlock (__const void *__addr, size_t __len) throw ();


extern int munlock (__const void *__addr, size_t __len) throw ();




extern int mlockall (int __flags) throw ();



extern int munlockall (void) throw ();





extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
                     int __may_move) throw ();






extern int mincore (void *__start, size_t __len, unsigned char *__vec);




extern int shm_open (__const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (__const char *__name);

}
# 72 "/coolo/prod/kdelibs/kdecore/libintl.cpp" 2





typedef Q_UINT32 nls_uint32;

struct loaded_domain
{
  const char *data;

  int use_mmap;
  size_t mmap_size;

  int must_swap;
  nls_uint32 nstrings;
  struct string_desc *orig_tab;
  struct string_desc *trans_tab;
  nls_uint32 hash_size;
  nls_uint32 *hash_tab;
};

struct kde_loaded_l10nfile
{
  const char *filename;
  int decided;

  const void *data;

  kde_loaded_l10nfile() : filename(0), decided(0), data(0) {}
};

void k_nl_load_domain(struct kde_loaded_l10nfile *__domain);

static inline nls_uint32
SWAP (nls_uint32 i)
{
  return (i << 24) | ((i & 0xff00) << 8) | ((i >> 8) & 0xff00) | (i >> 24);
}











static inline unsigned long hash_string (const char *__str_param);




struct mo_file_header
{

  nls_uint32 magic;

  nls_uint32 revision;

  nls_uint32 nstrings;

  nls_uint32 orig_tab_offset;

  nls_uint32 trans_tab_offset;

  nls_uint32 hash_tab_size;

  nls_uint32 hash_tab_offset;
};

struct string_desc
{

  nls_uint32 length;

  nls_uint32 offset;
};


char *k_nl_find_msg (struct kde_loaded_l10nfile *domain_file,
                        const char *msgid);

char *
k_nl_find_msg (struct kde_loaded_l10nfile *domain_file, const char *msgid)
{
  size_t top, act, bottom;
  struct loaded_domain *domain;

  if (domain_file->decided == 0)
    k_nl_load_domain (domain_file);

  if (domain_file->data == __null)
    return __null;

  domain = (struct loaded_domain *) domain_file->data;


  if (domain->hash_size > 2 && domain->hash_tab != __null)
    {

      nls_uint32 len = strlen (msgid);
      nls_uint32 hash_val = hash_string (msgid);
      nls_uint32 idx = hash_val % domain->hash_size;
      nls_uint32 incr = 1 + (hash_val % (domain->hash_size - 2));
      nls_uint32 nstr = ((domain->must_swap) ? SWAP (domain->hash_tab[idx]) : (domain->hash_tab[idx]));

      if (nstr == 0)

        return __null;

      if (((domain->must_swap) ? SWAP (domain->orig_tab[nstr - 1].length) : (domain->orig_tab[nstr - 1].length)) == len
          && strcmp (msgid,
                     domain->data + ((domain->must_swap) ? SWAP (domain->orig_tab[nstr - 1].offset) : (domain->orig_tab[nstr - 1].offset))) == 0)

        return (char *) domain->data + ((domain->must_swap) ? SWAP (domain->trans_tab[nstr - 1].offset) : (domain->trans_tab[nstr - 1].offset));


      while (1)
        {
          if (idx >= domain->hash_size - incr)
            idx -= domain->hash_size - incr;
          else
            idx += incr;

          nstr = ((domain->must_swap) ? SWAP (domain->hash_tab[idx]) : (domain->hash_tab[idx]));
          if (nstr == 0)

            return __null;

          if (((domain->must_swap) ? SWAP (domain->orig_tab[nstr - 1].length) : (domain->orig_tab[nstr - 1].length)) == len
              && strcmp (msgid,
                         domain->data + ((domain->must_swap) ? SWAP (domain->orig_tab[nstr - 1].offset) : (domain->orig_tab[nstr - 1].offset)))

                 == 0)
            return (char *) domain->data
              + ((domain->must_swap) ? SWAP (domain->trans_tab[nstr - 1].offset) : (domain->trans_tab[nstr - 1].offset));
        }

    }



  bottom = 0;
  top = domain->nstrings;
  act = top;
  while (bottom < top)
    {
      int cmp_val;

      act = (bottom + top) / 2;
      cmp_val = strcmp (msgid, domain->data
                               + ((domain->must_swap) ? SWAP (domain->orig_tab[act].offset) : (domain->orig_tab[act].offset)));

      if (cmp_val < 0)
        top = act;
      else if (cmp_val > 0)
        bottom = act + 1;
      else
        break;
    }


  return bottom >= top ? __null : (char *) domain->data
                                + ((domain->must_swap) ? SWAP (domain->trans_tab[act].offset) : (domain->trans_tab[act].offset));

}




static inline unsigned long
hash_string (const char *str_param)
{
  unsigned long int hval, g;
  const char *str = str_param;


  hval = 0;
  while (*str != '\0')
    {
      hval <<= 4;
      hval += (unsigned long) *str++;
      g = hval & ((unsigned long) 0xf << (32 - 4));
      if (g != 0)
        {
          hval ^= g >> (32 - 8);
          hval ^= g;
        }
    }
  return hval;
}



void
k_nl_load_domain (struct kde_loaded_l10nfile *domain_file)
{
  int fd;
  struct stat st;
  struct mo_file_header *data = (struct mo_file_header *) -1;

  int use_mmap = 0;

  struct loaded_domain *domain;

  domain_file->decided = 1;
  domain_file->data = __null;





  if (domain_file->filename == __null)
    return;


  fd = open (domain_file->filename, 00);
  if (fd == -1)
    return;


  if (fstat (fd, &st) != 0
      || st.st_size < (off_t) sizeof (struct mo_file_header))
    {

      close (fd);
      return;
    }




  data = (struct mo_file_header *) mmap (__null, st.st_size, 0x1,
                                         0x02, fd, 0);

  if (data != (struct mo_file_header *) -1)
    {

      close (fd);
      use_mmap = 1;
    }




  if (data == (struct mo_file_header *) -1)
    {
      off_t to_read;
      char *read_ptr;

      data = (struct mo_file_header *) malloc (st.st_size);
      if (data == __null)
        return;

      to_read = st.st_size;
      read_ptr = (char *) data;
      do
        {
          long int nb = (long int) read (fd, read_ptr, to_read);
          if (nb == -1)
            {
              close (fd);
              return;
            }

          read_ptr += nb;
          to_read -= nb;
        }
      while (to_read > 0);

      close (fd);
    }



  if (data->magic != 0x950412de && data->magic != 0xde120495)
    {


      if (use_mmap)
        munmap ((char *) data, st.st_size);
      else

        free (data);
      return;
    }

  domain_file->data
    = (struct loaded_domain *) malloc (sizeof (struct loaded_domain));
  if (domain_file->data == __null)
    return;

  domain = (struct loaded_domain *) domain_file->data;
  domain->data = (char *) data;

  domain->use_mmap = use_mmap;
  domain->mmap_size = st.st_size;

  domain->must_swap = data->magic != 0x950412de;


  switch (((domain->must_swap) ? SWAP (data->revision) : (data->revision)))
    {
    case 0:
      domain->nstrings = ((domain->must_swap) ? SWAP (data->nstrings) : (data->nstrings));
      domain->orig_tab = (struct string_desc *)
        ((char *) data + ((domain->must_swap) ? SWAP (data->orig_tab_offset) : (data->orig_tab_offset)));
      domain->trans_tab = (struct string_desc *)
        ((char *) data + ((domain->must_swap) ? SWAP (data->trans_tab_offset) : (data->trans_tab_offset)));
      domain->hash_size = ((domain->must_swap) ? SWAP (data->hash_tab_size) : (data->hash_tab_size));
      domain->hash_tab = (nls_uint32 *)
        ((char *) data + ((domain->must_swap) ? SWAP (data->hash_tab_offset) : (data->hash_tab_offset)));
      break;
    default:


      if (use_mmap)
        munmap ((char *) data, st.st_size);
      else

        free (data);
      free (domain);
      domain_file->data = __null;
      return;
    }
}

void
k_nl_unload_domain (struct loaded_domain *domain)
{

  if (domain->use_mmap)
    munmap ((caddr_t) domain->data, domain->mmap_size);
  else

    free ((void *) domain->data);

  free (domain);
}
# 4 "../kdecore/libkdecore_la_all_cpp.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 1
# 23 "/coolo/prod/kdelibs/kdecore/kapplication.cpp"
# 1 "../config.h" 1
# 13 "../config.h"









# 34 "../config.h"










# 55 "../config.h"







# 74 "../config.h"


# 86 "../config.h"























































# 176 "../config.h"

























































# 266 "../config.h"











# 290 "../config.h"



























# 336 "../config.h"


















# 372 "../config.h"


































# 438 "../config.h"































































































# 577 "../config.h"





















# 617 "../config.h"




# 633 "../config.h"







































# 699 "../config.h"












# 761 "../config.h"
# 793 "../config.h"
extern "C"

int mkstemps(char *, int);
# 829 "../config.h"
extern "C"

unsigned long strlcat(char*, const char*, unsigned long);






extern "C"

unsigned long strlcpy(char*, const char*, unsigned long);
# 905 "../config.h"




# 920 "../config.h"
# 937 "../config.h"
# 24 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

#undef QT_NO_TRANSLATION
# 1 "/coolo/prod/qt-copy/include/qtranslator.h" 1
# 40 "/coolo/prod/qt-copy/include/qtranslator.h"


# 1 "/coolo/prod/qt-copy/include/qobject.h" 1
# 39 "/coolo/prod/qt-copy/include/qobject.h"


# 1 "/coolo/prod/qt-copy/include/qobjectdefs.h" 1
# 39 "/coolo/prod/qt-copy/include/qobjectdefs.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qobjectdefs.h" 2






# 63 "/coolo/prod/qt-copy/include/qobjectdefs.h"
# 72 "/coolo/prod/qt-copy/include/qobjectdefs.h"
struct QUObject;
# 88 "/coolo/prod/qt-copy/include/qobjectdefs.h"




# 117 "/coolo/prod/qt-copy/include/qobjectdefs.h"
# 137 "/coolo/prod/qt-copy/include/qobjectdefs.h"
# 148 "/coolo/prod/qt-copy/include/qobjectdefs.h"

class QObject;
class QMetaObject;
class QSignal;
class QConnection;
class QEvent;
struct QMetaData;
class QConnectionList;
class QConnectionListIt;
class QSignalVec;
class QObjectList;
class QObjectListIt;
class QMemberDict;

 void *qt_find_obj_child( QObject *, const char *, const char * );


 void *qt_inheritedBy( QMetaObject *super, const QObject *cls );
# 182 "/coolo/prod/qt-copy/include/qobjectdefs.h"
template <typename T>
 T qt_cast(const QObject *object)
{ return (T)qt_inheritedBy( ((T)0)->staticMetaObject(), object ); }
# 43 "/coolo/prod/qt-copy/include/qobject.h" 2
# 1 "/coolo/prod/qt-copy/include/qwindowdefs.h" 1
# 40 "/coolo/prod/qt-copy/include/qwindowdefs.h"



# 1 "/coolo/prod/qt-copy/include/qstring.h" 1
# 39 "/coolo/prod/qt-copy/include/qstring.h"


# 1 "/coolo/prod/qt-copy/include/qcstring.h" 1
# 40 "/coolo/prod/qt-copy/include/qcstring.h"


# 1 "/coolo/prod/qt-copy/include/qmemarray.h" 1
# 39 "/coolo/prod/qt-copy/include/qmemarray.h"


# 1 "/coolo/prod/qt-copy/include/qgarray.h" 1
# 39 "/coolo/prod/qt-copy/include/qgarray.h"


# 1 "/coolo/prod/qt-copy/include/qshared.h" 1
# 39 "/coolo/prod/qt-copy/include/qshared.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qshared.h" 2



struct QShared
{
    QShared() : count( 1 ) { }
    void ref() { count++; }
    bool deref() { return !--count; }
    uint count;
};
# 43 "/coolo/prod/qt-copy/include/qgarray.h" 2



class QGArray
{
friend class QBuffer;
public:


    struct array_data : public QShared {
        array_data():data(0),len(0)



            {}
        char *data;
        uint len;



    };
    QGArray();
    enum Optimization { MemOptim, SpeedOptim };
protected:
    QGArray( int, int );
    QGArray( int size );
    QGArray( const QGArray &a );
    virtual ~QGArray();

    QGArray &operator=( const QGArray &a ) { return assign( a ); }

    virtual void detach() { duplicate(*this); }


    char *data() const { return shd->data; }
    uint nrefs() const { return shd->count; }
    uint size() const { return shd->len; }
    bool isEqual( const QGArray &a ) const;

    bool resize( uint newsize, Optimization optim );
    bool resize( uint newsize );

    bool fill( const char *d, int len, uint sz );

    QGArray &assign( const QGArray &a );
    QGArray &assign( const char *d, uint len );
    QGArray &duplicate( const QGArray &a );
    QGArray &duplicate( const char *d, uint len );
    void store( const char *d, uint len );

    array_data *sharedBlock() const { return shd; }
    void setSharedBlock( array_data *p ) { shd=(array_data*)p; }

    QGArray &setRawData( const char *d, uint len );
    void resetRawData( const char *d, uint len );

    int find( const char *d, uint index, uint sz ) const;
    int contains( const char *d, uint sz ) const;

    void sort( uint sz );
    int bsearch( const char *d, uint sz ) const;

    char *at( uint index ) const;

    bool setExpand( uint index, const char *d, uint sz );

protected:
    virtual array_data *newData();
    virtual void deleteData( array_data *p );

private:
    static void msg_index( uint );
    array_data *shd;
};


inline char *QGArray::at( uint index ) const
{

    if ( index >= size() ) {
        msg_index( index );
        index = 0;
    }

    return &shd->data[index];
}
# 43 "/coolo/prod/qt-copy/include/qmemarray.h" 2



template<class type>
class QMemArray : public QGArray
{
public:
    typedef type* Iterator;
    typedef const type* ConstIterator;
    typedef type ValueType;

protected:
    QMemArray( int, int ) : QGArray( 0, 0 ) {}

public:
    QMemArray() {}
    QMemArray( int size ) : QGArray(size*sizeof(type)) {}
    QMemArray( const QMemArray<type> &a ) : QGArray(a) {}
   ~QMemArray() {}
    QMemArray<type> &operator=(const QMemArray<type> &a)
                                { return (QMemArray<type>&)QGArray::assign(a); }
    type *data() const { return (type *)QGArray::data(); }
    uint nrefs() const { return QGArray::nrefs(); }
    uint size() const { return QGArray::size()/sizeof(type); }
    uint count() const { return size(); }
    bool isEmpty() const { return QGArray::size() == 0; }
    bool isNull() const { return QGArray::data() == 0; }
    bool resize( uint size ) { return QGArray::resize(size*sizeof(type)); }
    bool resize( uint size, Optimization optim ) { return QGArray::resize(size*sizeof(type), optim); }
    bool truncate( uint pos ) { return QGArray::resize(pos*sizeof(type)); }
    bool fill( const type &d, int size = -1 )
        { return QGArray::fill((char*)&d,size,sizeof(type) ); }
    void detach() { QGArray::detach(); }
    QMemArray<type> copy() const
        { QMemArray<type> tmp; return tmp.duplicate(*this); }
    QMemArray<type>& assign( const QMemArray<type>& a )
        { return (QMemArray<type>&)QGArray::assign(a); }
    QMemArray<type>& assign( const type *a, uint n )
        { return (QMemArray<type>&)QGArray::assign((char*)a,n*sizeof(type)); }
    QMemArray<type>& duplicate( const QMemArray<type>& a )
        { return (QMemArray<type>&)QGArray::duplicate(a); }
    QMemArray<type>& duplicate( const type *a, uint n )
        { return (QMemArray<type>&)QGArray::duplicate((char*)a,n*sizeof(type)); }
    QMemArray<type>& setRawData( const type *a, uint n )
        { return (QMemArray<type>&)QGArray::setRawData((char*)a,
                                                     n*sizeof(type)); }
    void resetRawData( const type *a, uint n )
        { QGArray::resetRawData((char*)a,n*sizeof(type)); }
    int find( const type &d, uint i=0 ) const
        { return QGArray::find((char*)&d,i,sizeof(type)); }
    int contains( const type &d ) const
        { return QGArray::contains((char*)&d,sizeof(type)); }
    void sort() { QGArray::sort(sizeof(type)); }
    int bsearch( const type &d ) const
        { return QGArray::bsearch((const char*)&d,sizeof(type)); }

    type& operator[]( int i ) const
        { return (type &)(*(type *)QGArray::at(i*sizeof(type))); }
    type& at( uint i ) const
        { return (type &)(*(type *)QGArray::at(i*sizeof(type))); }
         operator const type*() const { return (const type *)QGArray::data(); }
    bool operator==( const QMemArray<type> &a ) const { return isEqual(a); }
    bool operator!=( const QMemArray<type> &a ) const { return !isEqual(a); }
    Iterator begin() { return data(); }
    Iterator end() { return data() + size(); }
    ConstIterator begin() const { return data(); }
    ConstIterator end() const { return data() + size(); }
};





# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 118 "/coolo/prod/qt-copy/include/qmemarray.h" 2
# 44 "/coolo/prod/qt-copy/include/qcstring.h" 2
# 53 "/coolo/prod/qt-copy/include/qcstring.h"
 void *qmemmove( void *dst, const void *src, uint len );

 char *qstrdup( const char * );

 inline uint qstrlen( const char *str )
{ return str ? (uint)strlen(str) : 0u; }

 inline char *qstrcpy( char *dst, const char *src )
{ return src ? strcpy(dst, src) : 0; }

 char *qstrncpy( char *dst, const char *src, uint len );

 inline int qstrcmp( const char *str1, const char *str2 )
{
    return ( str1 && str2 ) ? strcmp( str1, str2 )
                            : ( str1 ? 1 : ( str2 ? -1 : 0 ) );
}

 inline int qstrncmp( const char *str1, const char *str2, uint len )
{
    return ( str1 && str2 ) ? strncmp( str1, str2, len )
                            : ( str1 ? 1 : ( str2 ? -1 : 0 ) );
}

 int qstricmp( const char *, const char * );

 int qstrnicmp( const char *, const char *, uint len );
# 98 "/coolo/prod/qt-copy/include/qcstring.h"
 Q_UINT16 qChecksum( const char *s, uint len );
# 116 "/coolo/prod/qt-copy/include/qcstring.h"
typedef QMemArray<char> QByteArray;



 QByteArray qCompress( const uchar* data, int nbytes );
 QByteArray qUncompress( const uchar* data, int nbytes );
 inline QByteArray qCompress( const QByteArray& data)
{ return qCompress( (const uchar*)data.data(), data.size() ); }
 inline QByteArray qUncompress( const QByteArray& data )
{ return qUncompress( (const uchar*)data.data(), data.size() ); }






 QDataStream &operator<<( QDataStream &, const QByteArray & );
 QDataStream &operator>>( QDataStream &, QByteArray & );






class QRegExp;

class QCString : public QByteArray
{
public:
    QCString() {}
    QCString( int size );
    QCString( const QCString &s ) : QByteArray( s ) {}
    QCString( const char *str );
    QCString( const char *str, uint maxlen );
    ~QCString();

    QCString &operator=( const QCString &s );
    QCString &operator=( const char *str );

    bool isNull() const;
    bool isEmpty() const;
    uint length() const;
    bool resize( uint newlen );
    bool truncate( uint pos );
    bool fill( char c, int len = -1 );

    QCString copy() const;

    QCString &sprintf( const char *format, ... );

    int find( char c, int index=0, bool cs=TRUE ) const;
    int find( const char *str, int index=0, bool cs=TRUE ) const;

    int find( const QRegExp &, int index=0 ) const;

    int findRev( char c, int index=-1, bool cs=TRUE) const;
    int findRev( const char *str, int index=-1, bool cs=TRUE) const;

    int findRev( const QRegExp &, int index=-1 ) const;

    int contains( char c, bool cs=TRUE ) const;
    int contains( const char *str, bool cs=TRUE ) const;

    int contains( const QRegExp & ) const;

    QCString left( uint len ) const;
    QCString right( uint len ) const;
    QCString mid( uint index, uint len=0xffffffff) const;

    QCString leftJustify( uint width, char fill=' ', bool trunc=FALSE)const;
    QCString rightJustify( uint width, char fill=' ',bool trunc=FALSE)const;

    QCString lower() const;
    QCString upper() const;

    QCString stripWhiteSpace() const;
    QCString simplifyWhiteSpace() const;

    QCString &insert( uint index, const char * );
    QCString &insert( uint index, char );
    QCString &append( const char * );
    QCString &prepend( const char * );
    QCString &remove( uint index, uint len );
    QCString &replace( uint index, uint len, const char * );

    QCString &replace( const QRegExp &, const char * );

    QCString &replace( char c, const char *after );
    QCString &replace( const char *, const char * );
    QCString &replace( char, char );

    short toShort( bool *ok=0 ) const;
    ushort toUShort( bool *ok=0 ) const;
    int toInt( bool *ok=0 ) const;
    uint toUInt( bool *ok=0 ) const;
    long toLong( bool *ok=0 ) const;
    ulong toULong( bool *ok=0 ) const;
    float toFloat( bool *ok=0 ) const;
    double toDouble( bool *ok=0 ) const;

    QCString &setStr( const char *s );
    QCString &setNum( short );
    QCString &setNum( ushort );
    QCString &setNum( int );
    QCString &setNum( uint );
    QCString &setNum( long );
    QCString &setNum( ulong );
    QCString &setNum( float, char f='g', int prec=6 );
    QCString &setNum( double, char f='g', int prec=6 );

    bool setExpand( uint index, char c );

                operator const char *() const;
    QCString &operator+=( const char *str );
    QCString &operator+=( char c );
private:
    int find( const char *str, int index, bool cs, uint l ) const;
};






 QDataStream &operator<<( QDataStream &, const QCString & );
 QDataStream &operator>>( QDataStream &, QCString & );






inline QCString &QCString::operator=( const QCString &s )
{ return (QCString&)assign( s ); }

inline QCString &QCString::operator=( const char *str )
{ return (QCString&)duplicate( str, qstrlen(str)+1 ); }

inline bool QCString::isNull() const
{ return data() == 0; }

inline bool QCString::isEmpty() const
{ return data() == 0 || *data() == '\0'; }

inline uint QCString::length() const
{ return qstrlen( data() ); }

inline bool QCString::truncate( uint pos )
{ return resize(pos+1); }

inline QCString QCString::copy() const
{ return QCString( data() ); }

inline QCString &QCString::prepend( const char *s )
{ return insert(0,s); }

inline QCString &QCString::append( const char *s )
{ return operator+=(s); }

inline QCString &QCString::setNum( short n )
{ return setNum((long)n); }

inline QCString &QCString::setNum( ushort n )
{ return setNum((ulong)n); }

inline QCString &QCString::setNum( int n )
{ return setNum((long)n); }

inline QCString &QCString::setNum( uint n )
{ return setNum((ulong)n); }

inline QCString &QCString::setNum( float n, char f, int prec )
{ return setNum((double)n,f,prec); }

inline QCString::operator const char *() const
{ return (const char *)data(); }






 inline bool operator==( const QCString &s1, const QCString &s2 )
{ return qstrcmp( s1.data(), s2.data() ) == 0; }

 inline bool operator==( const QCString &s1, const char *s2 )
{ return qstrcmp( s1.data(), s2 ) == 0; }

 inline bool operator==( const char *s1, const QCString &s2 )
{ return qstrcmp( s1, s2.data() ) == 0; }

 inline bool operator!=( const QCString &s1, const QCString &s2 )
{ return qstrcmp( s1.data(), s2.data() ) != 0; }

 inline bool operator!=( const QCString &s1, const char *s2 )
{ return qstrcmp( s1.data(), s2 ) != 0; }

 inline bool operator!=( const char *s1, const QCString &s2 )
{ return qstrcmp( s1, s2.data() ) != 0; }

 inline bool operator<( const QCString &s1, const QCString& s2 )
{ return qstrcmp( s1.data(), s2.data() ) < 0; }

 inline bool operator<( const QCString &s1, const char *s2 )
{ return qstrcmp( s1.data(), s2 ) < 0; }

 inline bool operator<( const char *s1, const QCString &s2 )
{ return qstrcmp( s1, s2.data() ) < 0; }

 inline bool operator<=( const QCString &s1, const QCString &s2 )
{ return qstrcmp( s1.data(), s2.data() ) <= 0; }

 inline bool operator<=( const QCString &s1, const char *s2 )
{ return qstrcmp( s1.data(), s2 ) <= 0; }

 inline bool operator<=( const char *s1, const QCString &s2 )
{ return qstrcmp( s1, s2.data() ) <= 0; }

 inline bool operator>( const QCString &s1, const QCString &s2 )
{ return qstrcmp( s1.data(), s2.data() ) > 0; }

 inline bool operator>( const QCString &s1, const char *s2 )
{ return qstrcmp( s1.data(), s2 ) > 0; }

 inline bool operator>( const char *s1, const QCString &s2 )
{ return qstrcmp( s1, s2.data() ) > 0; }

 inline bool operator>=( const QCString &s1, const QCString& s2 )
{ return qstrcmp( s1.data(), s2.data() ) >= 0; }

 inline bool operator>=( const QCString &s1, const char *s2 )
{ return qstrcmp( s1.data(), s2 ) >= 0; }

 inline bool operator>=( const char *s1, const QCString &s2 )
{ return qstrcmp( s1, s2.data() ) >= 0; }

 inline const QCString operator+( const QCString &s1,
                                          const QCString &s2 )
{
    QCString tmp( s1.data() );
    tmp += s2;
    return tmp;
}

 inline const QCString operator+( const QCString &s1, const char *s2 )
{
    QCString tmp( s1.data() );
    tmp += s2;
    return tmp;
}

 inline const QCString operator+( const char *s1, const QCString &s2 )
{
    QCString tmp( s1 );
    tmp += s2;
    return tmp;
}

 inline const QCString operator+( const QCString &s1, char c2 )
{
    QCString tmp( s1.data() );
    tmp += c2;
    return tmp;
}

 inline const QCString operator+( char c1, const QCString &s2 )
{
    QCString tmp;
    tmp += c1;
    tmp += s2;
    return tmp;
}
# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 389 "/coolo/prod/qt-copy/include/qcstring.h" 2
# 43 "/coolo/prod/qt-copy/include/qstring.h" 2



# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 1 3 4









# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/syslimits.h" 1 3 4





# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 24 "/usr/include/limits.h" 3 4







# 144 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 26 "/usr/include/bits/posix1_lim.h" 3 4





































































# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 26 "/usr/include/bits/local_lim.h" 3 4







# 1 "/usr/include/linux/limits.h" 1 3 4




# 37 "/usr/include/bits/local_lim.h" 2 3 4



#undef NR_OPEN
#undef __undef_NR_OPEN



#undef LINK_MAX
#undef __undef_LINK_MAX



#undef OPEN_MAX
#undef __undef_OPEN_MAX























# 127 "/usr/include/bits/posix1_lim.h" 2 3 4



# 145 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 24 "/usr/include/bits/posix2_lim.h" 3 4















































# 149 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 31 "/usr/include/bits/xopen_lim.h" 3 4

# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 40 "/usr/include/bits/stdio_lim.h" 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 66 "/usr/include/bits/xopen_lim.h" 3 4

















# 110 "/usr/include/bits/xopen_lim.h" 3 4
# 130 "/usr/include/bits/xopen_lim.h" 3 4
# 153 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/syslimits.h" 2 3 4
#undef _GCC_NEXT_LIMITS_H
# 12 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 2 3 4





# 27 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 3 4







# 51 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 3 4




























# 106 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 3 4




# 47 "/coolo/prod/qt-copy/include/qstring.h" 2
# 68 "/coolo/prod/qt-copy/include/qstring.h"
class QRegExp;
class QString;
class QCharRef;
template <class T> class QDeepCopy;

class QChar {
public:
    QChar();
    QChar( char c );
    QChar( uchar c );
    QChar( uchar c, uchar r );
    QChar( const QChar& c );
    QChar( ushort rc );
    QChar( short rc );
    QChar( uint rc );
    QChar( int rc );

    static const QChar null;
    static const QChar replacement;
    static const QChar byteOrderMark;
    static const QChar byteOrderSwapped;
    static const QChar nbsp;



    enum Category
    {
        NoCategory,

        Mark_NonSpacing,
        Mark_SpacingCombining,
        Mark_Enclosing,

        Number_DecimalDigit,
        Number_Letter,
        Number_Other,

        Separator_Space,
        Separator_Line,
        Separator_Paragraph,

        Other_Control,
        Other_Format,
        Other_Surrogate,
        Other_PrivateUse,
        Other_NotAssigned,

        Letter_Uppercase,
        Letter_Lowercase,
        Letter_Titlecase,
        Letter_Modifier,
        Letter_Other,

        Punctuation_Connector,
        Punctuation_Dash,
        Punctuation_Dask = Punctuation_Dash,
        Punctuation_Open,
        Punctuation_Close,
        Punctuation_InitialQuote,
        Punctuation_FinalQuote,
        Punctuation_Other,

        Symbol_Math,
        Symbol_Currency,
        Symbol_Modifier,
        Symbol_Other
    };

    enum Direction
    {
        DirL, DirR, DirEN, DirES, DirET, DirAN, DirCS, DirB, DirS, DirWS, DirON,
        DirLRE, DirLRO, DirAL, DirRLE, DirRLO, DirPDF, DirNSM, DirBN
    };

    enum Decomposition
    {
        Single, Canonical, Font, NoBreak, Initial, Medial,
        Final, Isolated, Circle, Super, Sub, Vertical,
        Wide, Narrow, Small, Square, Compat, Fraction
    };

    enum Joining
    {
        OtherJoining, Dual, Right, Center
    };

    enum CombiningClass
    {
        Combining_BelowLeftAttached = 200,
        Combining_BelowAttached = 202,
        Combining_BelowRightAttached = 204,
        Combining_LeftAttached = 208,
        Combining_RightAttached = 210,
        Combining_AboveLeftAttached = 212,
        Combining_AboveAttached = 214,
        Combining_AboveRightAttached = 216,

        Combining_BelowLeft = 218,
        Combining_Below = 220,
        Combining_BelowRight = 222,
        Combining_Left = 224,
        Combining_Right = 226,
        Combining_AboveLeft = 228,
        Combining_Above = 230,
        Combining_AboveRight = 232,

        Combining_DoubleBelow = 233,
        Combining_DoubleAbove = 234,
        Combining_IotaSubscript = 240
    };



    int digitValue() const;
    QChar lower() const;
    QChar upper() const;

    Category category() const;
    Direction direction() const;
    Joining joining() const;
    bool mirrored() const;
    QChar mirroredChar() const;
    const QString &decomposition() const;
    Decomposition decompositionTag() const;
    unsigned char combiningClass() const;

    char latin1() const { return ucs > 0xff ? 0 : (char) ucs; }
    ushort unicode() const { return ucs; }
    ushort &unicode() { return ucs; }


    operator char() const { return latin1(); }


    bool isNull() const { return unicode()==0; }
    bool isPrint() const;
    bool isPunct() const;
    bool isSpace() const;
    bool isMark() const;
    bool isLetter() const;
    bool isNumber() const;
    bool isLetterOrNumber() const;
    bool isDigit() const;
    bool isSymbol() const;

    uchar cell() const { return ((uchar) ucs & 0xff); }
    uchar row() const { return ((uchar) (ucs>>8)&0xff); }
    void setCell( uchar cell ) { ucs = (ucs & 0xff00) + cell; }
    void setRow( uchar row ) { ucs = (((ushort) row)<<8) + (ucs&0xff); }

    static bool networkOrdered() {
        int wordSize;
        bool bigEndian = FALSE;
        qSysInfo( &wordSize, &bigEndian );
        return bigEndian;
    }

    friend inline bool operator==( char ch, QChar c );
    friend inline bool operator==( QChar c, char ch );
    friend inline bool operator==( QChar c1, QChar c2 );
    friend inline bool operator!=( QChar c1, QChar c2 );
    friend inline bool operator!=( char ch, QChar c );
    friend inline bool operator!=( QChar c, char ch );
    friend inline bool operator<=( QChar c, char ch );
    friend inline bool operator<=( char ch, QChar c );
    friend inline bool operator<=( QChar c1, QChar c2 );

private:
    ushort ucs;



} ;

inline QChar::QChar() : ucs( 0 )



{
}
inline QChar::QChar( char c ) : ucs( (uchar)c )



{
}
inline QChar::QChar( uchar c ) : ucs( c )



{
}
inline QChar::QChar( uchar c, uchar r ) : ucs( (r << 8) | c )



{
}
inline QChar::QChar( const QChar& c ) : ucs( c.ucs )



{
}

inline QChar::QChar( ushort rc ) : ucs( rc )



{
}
inline QChar::QChar( short rc ) : ucs( (ushort) rc )



{
}
inline QChar::QChar( uint rc ) : ucs( (ushort ) (rc & 0xffff) )



{
}
inline QChar::QChar( int rc ) : ucs( (ushort) (rc & 0xffff) )



{
}

inline bool operator==( char ch, QChar c )
{
    return ((uchar) ch) == c.ucs;
}

inline bool operator==( QChar c, char ch )
{
    return ((uchar) ch) == c.ucs;
}

inline bool operator==( QChar c1, QChar c2 )
{
    return c1.ucs == c2.ucs;
}

inline bool operator!=( QChar c1, QChar c2 )
{
    return c1.ucs != c2.ucs;
}

inline bool operator!=( char ch, QChar c )
{
    return ((uchar)ch) != c.ucs;
}

inline bool operator!=( QChar c, char ch )
{
    return ((uchar) ch) != c.ucs;
}

inline bool operator<=( QChar c, char ch )
{
    return c.ucs <= ((uchar) ch);
}

inline bool operator<=( char ch, QChar c )
{
    return ((uchar) ch) <= c.ucs;
}

inline bool operator<=( QChar c1, QChar c2 )
{
    return c1.ucs <= c2.ucs;
}

inline bool operator>=( QChar c, char ch ) { return ch <= c; }
inline bool operator>=( char ch, QChar c ) { return c <= ch; }
inline bool operator>=( QChar c1, QChar c2 ) { return c2 <= c1; }
inline bool operator<( QChar c, char ch ) { return !(ch<=c); }
inline bool operator<( char ch, QChar c ) { return !(c<=ch); }
inline bool operator<( QChar c1, QChar c2 ) { return !(c2<=c1); }
inline bool operator>( QChar c, char ch ) { return !(ch>=c); }
inline bool operator>( char ch, QChar c ) { return !(c>=ch); }
inline bool operator>( QChar c1, QChar c2 ) { return !(c2>=c1); }


struct QStringData : public QShared {
    QStringData() :
        QShared(), unicode(0), ascii(0), len(0), issimpletext(TRUE), maxl(0), islatin1(FALSE) { ref(); }
    QStringData(QChar *u, uint l, uint m) :
        QShared(), unicode(u), ascii(0), len(l), issimpletext(FALSE), maxl(m), islatin1(FALSE) { }
    ~QStringData() { if ( unicode ) delete[] ((char*)unicode);
                     if ( ascii ) delete[] ascii; }

    void deleteSelf();
    QChar *unicode;
    char *ascii;
    void setDirty() {
        if ( ascii ) {
            delete [] ascii;
            ascii = 0;
        }
        issimpletext = FALSE;
    }



    uint len : 30;

    uint issimpletext : 1;



    uint maxl : 30;

    uint islatin1 : 1;

private:

    QStringData( const QStringData& );
    QStringData& operator=( const QStringData& );

};


class QString
{
public:
    QString();
    QString( QChar );
    QString( const QString & );
    QString( const QByteArray& );
    QString( const QChar* unicode, uint length );

    QString( const char *str );




    ~QString();

    QString &operator=( const QString & );
    QString &operator=( const char * );



    QString &operator=( const QCString& );
    QString &operator=( QChar c );
    QString &operator=( char c );

    static const QString null;

    bool isNull() const;
    bool isEmpty() const;
    uint length() const;
    void truncate( uint pos );

    QString & fill( QChar c, int len = -1 );

    QString copy() const;

    QString arg( long a, int fieldWidth = 0, int base = 10 ) const;
    QString arg( ulong a, int fieldWidth = 0, int base = 10 ) const;
    QString arg( Q_LLONG a, int fieldwidth=0, int base=10 ) const;
    QString arg( Q_ULLONG a, int fieldwidth=0, int base=10 ) const;
    QString arg( int a, int fieldWidth = 0, int base = 10 ) const;
    QString arg( uint a, int fieldWidth = 0, int base = 10 ) const;
    QString arg( short a, int fieldWidth = 0, int base = 10 ) const;
    QString arg( ushort a, int fieldWidth = 0, int base = 10 ) const;
    QString arg( double a, int fieldWidth = 0, char fmt = 'g',
                 int prec = -1 ) const;
    QString arg( char a, int fieldWidth = 0 ) const;
    QString arg( QChar a, int fieldWidth = 0 ) const;
    QString arg( const QString& a, int fieldWidth = 0 ) const;
    QString arg( const QString& a1, const QString& a2 ) const;
    QString arg( const QString& a1, const QString& a2,
                 const QString& a3 ) const;
    QString arg( const QString& a1, const QString& a2, const QString& a3,
                 const QString& a4 ) const;


    QString &sprintf( const char* format, ... )

        __attribute__ ((format (printf, 2, 3)))

        ;


    int find( QChar c, int index=0, bool cs=TRUE ) const;
    int find( char c, int index=0, bool cs=TRUE ) const;
    int find( const QString &str, int index=0, bool cs=TRUE ) const;

    int find( const QRegExp &, int index=0 ) const;


    int find( const char* str, int index=0 ) const;

    int findRev( QChar c, int index=-1, bool cs=TRUE) const;
    int findRev( char c, int index=-1, bool cs=TRUE) const;
    int findRev( const QString &str, int index=-1, bool cs=TRUE) const;

    int findRev( const QRegExp &, int index=-1 ) const;


    int findRev( const char* str, int index=-1 ) const;

    int contains( QChar c, bool cs=TRUE ) const;
    int contains( char c, bool cs=TRUE ) const
                    { return contains(QChar(c), cs); }

    int contains( const char* str, bool cs=TRUE ) const;

    int contains( const QString &str, bool cs=TRUE ) const;

    int contains( const QRegExp & ) const;


    enum SectionFlags {
        SectionDefault = 0x00,
        SectionSkipEmpty = 0x01,
        SectionIncludeLeadingSep = 0x02,
        SectionIncludeTrailingSep = 0x04,
        SectionCaseInsensitiveSeps = 0x08
    };
    QString section( QChar sep, int start, int end = 0xffffffff, int flags = SectionDefault ) const;
    QString section( char sep, int start, int end = 0xffffffff, int flags = SectionDefault ) const;

    QString section( const char *in_sep, int start, int end = 0xffffffff, int flags = SectionDefault ) const;

    QString section( const QString &in_sep, int start, int end = 0xffffffff, int flags = SectionDefault ) const;

    QString section( const QRegExp &reg, int start, int end = 0xffffffff, int flags = SectionDefault ) const;


    QString left( uint len ) const;
    QString right( uint len ) const;
    QString mid( uint index, uint len=0xffffffff) const;

    QString leftJustify( uint width, QChar fill=' ', bool trunc=FALSE)const;
    QString rightJustify( uint width, QChar fill=' ',bool trunc=FALSE)const;

    QString lower() const;
    QString upper() const;

    QString stripWhiteSpace() const;
    QString simplifyWhiteSpace() const;

    QString &insert( uint index, const QString & );

    QString &insert( uint index, const QByteArray & );
    QString &insert( uint index, const char * );

    QString &insert( uint index, const QChar*, uint len );
    QString &insert( uint index, QChar );
    QString &insert( uint index, char c ) { return insert(index,QChar(c)); }
    QString &append( char );
    QString &append( QChar );
    QString &append( const QString & );

    QString &append( const QByteArray & );
    QString &append( const char * );




    QString &prepend( char );
    QString &prepend( QChar );
    QString &prepend( const QString & );

    QString &prepend( const QByteArray & );
    QString &prepend( const char * );




    QString &remove( uint index, uint len );




    QString &remove( const QString & );
    QString &remove( const QString &, bool cs );

    QString &remove( QChar c );
    QString &remove( char c )
    { return remove( QChar(c) ); }

    QString &remove( const char * );


    QString &remove( const QRegExp & );

    QString &replace( uint index, uint len, const QString & );
    QString &replace( uint index, uint len, const QChar*, uint clen );
    QString &replace( uint index, uint len, QChar );
    QString &replace( uint index, uint len, char c )
    { return replace( index, len, QChar(c) ); }







    QString &replace( QChar c, const QString & );
    QString &replace( QChar c, const QString &, bool );


    QString &replace( char c, const QString & after )
    { return replace( QChar(c), after, TRUE ); }
    QString &replace( char c, const QString & after, bool cs )
    { return replace( QChar(c), after, cs ); }


    QString &replace( const QString &, const QString & );
    QString &replace( const QString &, const QString &, bool );


    QString &replace( const QRegExp &, const QString & );

    QString &replace( QChar, QChar );

    short toShort( bool *ok=0, int base=10 ) const;
    ushort toUShort( bool *ok=0, int base=10 ) const;
    int toInt( bool *ok=0, int base=10 ) const;
    uint toUInt( bool *ok=0, int base=10 ) const;
    long toLong( bool *ok=0, int base=10 ) const;
    ulong toULong( bool *ok=0, int base=10 ) const;
    Q_LLONG toLongLong( bool *ok=0, int base=10 ) const;
    Q_ULLONG toULongLong( bool *ok=0, int base=10 ) const;
    float toFloat( bool *ok=0 ) const;
    double toDouble( bool *ok=0 ) const;

    QString &setNum( short, int base=10 );
    QString &setNum( ushort, int base=10 );
    QString &setNum( int, int base=10 );
    QString &setNum( uint, int base=10 );
    QString &setNum( long, int base=10 );
    QString &setNum( ulong, int base=10 );
    QString &setNum( Q_LLONG, int base=10 );
    QString &setNum( Q_ULLONG, int base=10 );
    QString &setNum( float, char f='g', int prec=6 );
    QString &setNum( double, char f='g', int prec=6 );

    static QString number( long, int base=10 );
    static QString number( ulong, int base=10);
    static QString number( Q_LLONG, int base=10 );
    static QString number( Q_ULLONG, int base=10);
    static QString number( int, int base=10 );
    static QString number( uint, int base=10);
    static QString number( double, char f='g', int prec=6 );

    void setExpand( uint index, QChar c );

    QString &operator+=( const QString &str );




    QString &operator+=( const QByteArray &str );

    QString &operator+=( const char *str );




    QString &operator+=( QChar c );
    QString &operator+=( char c );

    QChar at( uint i ) const
        { return i < d->len ? d->unicode[i] : QChar::null; }
    QChar operator[]( int i ) const { return at((uint)i); }
    QCharRef at( uint i );
    QCharRef operator[]( int i );

    QChar constref(uint i) const
        { return at(i); }
    QChar& ref(uint i)
        {
            if ( d->count != 1 || i >= d->len )
                subat( i );
            d->setDirty();
            return d->unicode[i];
        }

    const QChar* unicode() const { return d->unicode; }
    const char* ascii() const;
    static QString fromAscii(const char*, int len=-1);
    const char* latin1() const;
    static QString fromLatin1(const char*, int len=-1);
    QCString utf8() const;
    static QString fromUtf8(const char*, int len=-1);
    QCString local8Bit() const;
    static QString fromLocal8Bit(const char*, int len=-1);
    bool operator!() const;







    static QString fromUcs2( const unsigned short *ucs2 );
    const unsigned short *ucs2() const;

    QString &setUnicode( const QChar* unicode, uint len );
    QString &setUnicodeCodes( const ushort* unicode_as_ushorts, uint len );
    QString &setAscii( const char*, int len=-1 );
    QString &setLatin1( const char*, int len=-1 );

    int compare( const QString& s ) const;
    static int compare( const QString& s1, const QString& s2 )
    { return s1.compare( s2 ); }

    int localeAwareCompare( const QString& s ) const;
    static int localeAwareCompare( const QString& s1, const QString& s2 )
    { return s1.localeAwareCompare( s2 ); }


    friend QDataStream &operator>>( QDataStream &, QString & );


    void compose();
# 701 "/coolo/prod/qt-copy/include/qstring.h"
    bool startsWith( const QString& str ) const;
    bool startsWith( const QString& str, bool cs ) const;


    bool endsWith( const QString& str ) const;
    bool endsWith( const QString& str, bool cs ) const;


    void setLength( uint newLength );

    uint capacity() const;
    void reserve( uint minCapacity );
    void squeeze();

    bool simpleText() const { if ( !d->issimpletext ) checkSimpleText(); return (bool)d->issimpletext; }
    bool isRightToLeft() const;


private:
    QString( int size, bool );

    void deref();
    void real_detach();
    void subat( uint );
    QString multiArg( int numArgs, const QString& a1, const QString& a2,
                      const QString& a3 = QString::null,
                      const QString& a4 = QString::null ) const;

    void checkSimpleText() const;
    void grow( uint newLength );

    QString &insertHelper( uint index, const char *s, uint len=(2147483647 * 2U + 1U) );
    QString &operatorPlusEqHelper( const char *s, uint len2=(2147483647 * 2U + 1U) );


    static QChar* latin1ToUnicode( const char*, uint * len, uint maxlen=(uint)-1 );
    static QChar* latin1ToUnicode( const QByteArray&, uint * len );
    static char* unicodeToLatin1( const QChar*, uint len );

    QStringData *d;
    static QStringData* shared_null;
    static QStringData* makeSharedNull();

    friend class QConstString;
    friend class QTextStream;
    QString( QStringData* dd, bool ) : d(dd) { }


    void detach();
    friend class QDeepCopy<QString>;
};

class QCharRef {
    friend class QString;
    QString& s;
    uint p;
    QCharRef(QString* str, uint pos) : s(*str), p(pos) { }

public:




    ushort unicode() const { return s.constref(p).unicode(); }
    char latin1() const { return s.constref(p).latin1(); }


    QCharRef operator=(char c ) { s.ref(p)=c; return *this; }
    QCharRef operator=(uchar c ) { s.ref(p)=c; return *this; }
    QCharRef operator=(QChar c ) { s.ref(p)=c; return *this; }
    QCharRef operator=(const QCharRef& c ) { s.ref(p)=c.unicode(); return *this; }
    QCharRef operator=(ushort rc ) { s.ref(p)=rc; return *this; }
    QCharRef operator=(short rc ) { s.ref(p)=rc; return *this; }
    QCharRef operator=(uint rc ) { s.ref(p)=rc; return *this; }
    QCharRef operator=(int rc ) { s.ref(p)=rc; return *this; }

    operator QChar () const { return s.constref(p); }


    bool isNull() const { return unicode()==0; }
    bool isPrint() const { return s.constref(p).isPrint(); }
    bool isPunct() const { return s.constref(p).isPunct(); }
    bool isSpace() const { return s.constref(p).isSpace(); }
    bool isMark() const { return s.constref(p).isMark(); }
    bool isLetter() const { return s.constref(p).isLetter(); }
    bool isNumber() const { return s.constref(p).isNumber(); }
    bool isLetterOrNumber() { return s.constref(p).isLetterOrNumber(); }
    bool isDigit() const { return s.constref(p).isDigit(); }

    int digitValue() const { return s.constref(p).digitValue(); }
    QChar lower() const { return s.constref(p).lower(); }
    QChar upper() const { return s.constref(p).upper(); }

    QChar::Category category() const { return s.constref(p).category(); }
    QChar::Direction direction() const { return s.constref(p).direction(); }
    QChar::Joining joining() const { return s.constref(p).joining(); }
    bool mirrored() const { return s.constref(p).mirrored(); }
    QChar mirroredChar() const { return s.constref(p).mirroredChar(); }
    const QString &decomposition() const { return s.constref(p).decomposition(); }
    QChar::Decomposition decompositionTag() const { return s.constref(p).decompositionTag(); }
    unsigned char combiningClass() const { return s.constref(p).combiningClass(); }


    uchar cell() const { return s.constref(p).cell(); }
    uchar row() const { return s.constref(p).row(); }

};

inline QCharRef QString::at( uint i ) { return QCharRef(this,i); }
inline QCharRef QString::operator[]( int i ) { return at((uint)i); }


class QConstString : private QString {
public:
    QConstString( const QChar* unicode, uint length );
    ~QConstString();
    const QString& string() const { return *this; }
};






 QDataStream &operator<<( QDataStream &, const QString & );
 QDataStream &operator>>( QDataStream &, QString & );
# 838 "/coolo/prod/qt-copy/include/qstring.h"
inline QString::QString() :
    d(shared_null ? shared_null : makeSharedNull())
{
    d->ref();
}

inline QString::~QString()
{
    if ( d->deref() ) {
        if ( d != shared_null )
            d->deleteSelf();
    }
}


inline void QString::detach()
{ real_detach(); }

inline QString QString::section( QChar sep, int start, int end, int flags ) const
{ return section(QString(sep), start, end, flags); }

inline QString QString::section( char sep, int start, int end, int flags ) const
{ return section(QChar(sep), start, end, flags); }


inline QString QString::section( const char *in_sep, int start, int end, int flags ) const
{ return section(QString(in_sep), start, end, flags); }


inline QString &QString::operator=( QChar c )
{ *this = QString(c); return *this; }

inline QString &QString::operator=( char c )
{ *this = QString(QChar(c)); return *this; }

inline bool QString::isNull() const
{ return unicode() == 0; }

inline bool QString::operator!() const
{ return isNull(); }

inline uint QString::length() const
{ return d->len; }

inline uint QString::capacity() const
{ return d->maxl; }

inline bool QString::isEmpty() const
{ return length() == 0; }

inline QString QString::copy() const
{ return QString( *this ); }


inline QString &QString::insert( uint index, const char *s )
{ return insertHelper( index, s ); }

inline QString &QString::insert( uint index, const QByteArray &s )
{
    int pos = s.find( 0 );
    return insertHelper( index, s, pos==-1 ? s.size() : pos );
}


inline QString &QString::prepend( const QString & s )
{ return insert(0,s); }

inline QString &QString::prepend( QChar c )
{ return insert(0,c); }

inline QString &QString::prepend( char c )
{ return insert(0,c); }


inline QString &QString::prepend( const QByteArray & s )
{ return insert(0,s); }


inline QString &QString::append( const QString & s )
{ return operator+=(s); }


inline QString &QString::append( const QByteArray &s )
{ return operator+=(s); }

inline QString &QString::append( const char * s )
{ return operator+=(s); }


inline QString &QString::append( QChar c )
{ return operator+=(c); }

inline QString &QString::append( char c )
{ return operator+=(c); }


inline QString &QString::operator+=( const QByteArray &s )
{
    int pos = s.find( 0 );
    return operatorPlusEqHelper( s, pos==-1 ? s.size() : pos );
}
# 952 "/coolo/prod/qt-copy/include/qstring.h"
inline QString &QString::setNum( short n, int base )
{ return setNum((Q_LLONG)n, base); }

inline QString &QString::setNum( ushort n, int base )
{ return setNum((Q_ULLONG)n, base); }

inline QString &QString::setNum( int n, int base )
{ return setNum((Q_LLONG)n, base); }

inline QString &QString::setNum( uint n, int base )
{ return setNum((Q_ULLONG)n, base); }

inline QString &QString::setNum( float n, char f, int prec )
{ return setNum((double)n,f,prec); }

inline QString QString::arg( int a, int fieldWidth, int base ) const
{ return arg( (Q_LLONG)a, fieldWidth, base ); }

inline QString QString::arg( uint a, int fieldWidth, int base ) const
{ return arg( (Q_ULLONG)a, fieldWidth, base ); }

inline QString QString::arg( short a, int fieldWidth, int base ) const
{ return arg( (Q_LLONG)a, fieldWidth, base ); }

inline QString QString::arg( ushort a, int fieldWidth, int base ) const
{ return arg( (Q_ULLONG)a, fieldWidth, base ); }

inline QString QString::arg( const QString& a1, const QString& a2 ) const {
    return multiArg( 2, a1, a2 );
}

inline QString QString::arg( const QString& a1, const QString& a2,
                             const QString& a3 ) const {
    return multiArg( 3, a1, a2, a3 );
}

inline QString QString::arg( const QString& a1, const QString& a2,
                             const QString& a3, const QString& a4 ) const {
    return multiArg( 4, a1, a2, a3, a4 );
}

inline int QString::find( char c, int index, bool cs ) const
{ return find(QChar(c), index, cs); }

inline int QString::findRev( char c, int index, bool cs ) const
{ return findRev( QChar(c), index, cs ); }


inline int QString::find( const char* str, int index ) const
{ return find(QString::fromAscii(str), index); }

inline int QString::findRev( const char* str, int index ) const
{ return findRev(QString::fromAscii(str), index); }







 bool operator!=( const QString &s1, const QString &s2 );
 bool operator<( const QString &s1, const QString &s2 );
 bool operator<=( const QString &s1, const QString &s2 );
 bool operator==( const QString &s1, const QString &s2 );
 bool operator>( const QString &s1, const QString &s2 );
 bool operator>=( const QString &s1, const QString &s2 );

 bool operator!=( const QString &s1, const char *s2 );
 bool operator<( const QString &s1, const char *s2 );
 bool operator<=( const QString &s1, const char *s2 );
 bool operator==( const QString &s1, const char *s2 );
 bool operator>( const QString &s1, const char *s2 );
 bool operator>=( const QString &s1, const char *s2 );
 bool operator!=( const char *s1, const QString &s2 );
 bool operator<( const char *s1, const QString &s2 );
 bool operator<=( const char *s1, const QString &s2 );
 bool operator==( const char *s1, const QString &s2 );

 bool operator>=( const char *s1, const QString &s2 );


 inline const QString operator+( const QString &s1, const QString &s2 )
{
    QString tmp( s1 );
    tmp += s2;
    return tmp;
}


 inline const QString operator+( const QString &s1, const char *s2 )
{
    QString tmp( s1 );
    tmp += QString::fromAscii(s2);
    return tmp;
}

 inline const QString operator+( const char *s1, const QString &s2 )
{
    QString tmp = QString::fromAscii( s1 );
    tmp += s2;
    return tmp;
}


 inline const QString operator+( const QString &s1, QChar c2 )
{
    QString tmp( s1 );
    tmp += c2;
    return tmp;
}

 inline const QString operator+( const QString &s1, char c2 )
{
    QString tmp( s1 );
    tmp += c2;
    return tmp;
}

 inline const QString operator+( QChar c1, const QString &s2 )
{
    QString tmp;
    tmp += c1;
    tmp += s2;
    return tmp;
}

 inline const QString operator+( char c1, const QString &s2 )
{
    QString tmp;
    tmp += c1;
    tmp += s2;
    return tmp;
}
# 1094 "/coolo/prod/qt-copy/include/qstring.h"
# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 1096 "/coolo/prod/qt-copy/include/qstring.h" 2
# 45 "/coolo/prod/qt-copy/include/qwindowdefs.h" 2
# 1 "/coolo/prod/qt-copy/include/qnamespace.h" 1
# 39 "/coolo/prod/qt-copy/include/qnamespace.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qnamespace.h" 2



class QColor;
class QCursor;


class Qt {
public:
    static const QColor & color0;
    static const QColor & color1;
    static const QColor & black;
    static const QColor & white;
    static const QColor & darkGray;
    static const QColor & gray;
    static const QColor & lightGray;
    static const QColor & red;
    static const QColor & green;
    static const QColor & blue;
    static const QColor & cyan;
    static const QColor & magenta;
    static const QColor & yellow;
    static const QColor & darkRed;
    static const QColor & darkGreen;
    static const QColor & darkBlue;
    static const QColor & darkCyan;
    static const QColor & darkMagenta;
    static const QColor & darkYellow;


    enum ButtonState {
        NoButton = 0x0000,
        LeftButton = 0x0001,
        RightButton = 0x0002,
        MidButton = 0x0004,
        MouseButtonMask = 0x0007,
        ShiftButton = 0x0100,
        ControlButton = 0x0200,
        AltButton = 0x0400,
        MetaButton = 0x0800,
        KeyButtonMask = 0x0f00,
        Keypad = 0x4000
    };



    enum Orientation {
        Horizontal = 0,
        Vertical
    };


    enum SortOrder {
        Ascending,
        Descending
    };






    enum AlignmentFlags {
        AlignAuto = 0x0000,
        AlignLeft = 0x0001,
        AlignRight = 0x0002,
        AlignHCenter = 0x0004,
        AlignJustify = 0x0008,
        AlignHorizontal_Mask = AlignLeft | AlignRight | AlignHCenter | AlignJustify,
        AlignTop = 0x0010,
        AlignBottom = 0x0020,
        AlignVCenter = 0x0040,
        AlignVertical_Mask = AlignTop | AlignBottom | AlignVCenter,
        AlignCenter = AlignVCenter | AlignHCenter
    };


    enum TextFlags {
        SingleLine = 0x0080,
        DontClip = 0x0100,
        ExpandTabs = 0x0200,
        ShowPrefix = 0x0400,
        WordBreak = 0x0800,
        BreakAnywhere = 0x1000,

        DontPrint = 0x2000,
        Underline = 0x01000000,
        Overline = 0x02000000,
        StrikeOut = 0x04000000,
        IncludeTrailingSpaces = 0x08000000,

        NoAccel = 0x4000
    };


    typedef uint WState;


    enum WidgetState {
        WState_Created = 0x00000001,
        WState_Disabled = 0x00000002,
        WState_Visible = 0x00000004,
        WState_ForceHide = 0x00000008,
        WState_OwnCursor = 0x00000010,
        WState_MouseTracking = 0x00000020,
        WState_CompressKeys = 0x00000040,
        WState_BlockUpdates = 0x00000080,
        WState_InPaintEvent = 0x00000100,
        WState_Reparented = 0x00000200,
        WState_ConfigPending = 0x00000400,
        WState_Resized = 0x00000800,
        WState_AutoMask = 0x00001000,
        WState_Polished = 0x00002000,
        WState_DND = 0x00004000,
        WState_Reserved0 = 0x00008000,
        WState_Reserved1 = 0x00010000,
        WState_OwnSizePolicy = 0x00020000,
        WState_CreatedHidden = 0x00040000,
        WState_Maximized = 0x00080000,
        WState_Minimized = 0x00100000,
        WState_ForceDisabled = 0x00200000,
        WState_Exposed = 0x00400000,
        WState_HasMouse = 0x00800000
    };


    typedef uint WFlags;


    enum WidgetFlags {
        WType_TopLevel = 0x00000001,
        WType_Dialog = 0x00000002,
        WType_Popup = 0x00000004,
        WType_Desktop = 0x00000008,
        WType_Mask = 0x0000000f,

        WStyle_Customize = 0x00000010,
        WStyle_NormalBorder = 0x00000020,
        WStyle_DialogBorder = 0x00000040,
        WStyle_NoBorder = 0x00002000,
        WStyle_Title = 0x00000080,
        WStyle_SysMenu = 0x00000100,
        WStyle_Minimize = 0x00000200,
        WStyle_Maximize = 0x00000400,
        WStyle_MinMax = WStyle_Minimize | WStyle_Maximize,
        WStyle_Tool = 0x00000800,
        WStyle_StaysOnTop = 0x00001000,
        WStyle_ContextHelp = 0x00004000,
        WStyle_Reserved = 0x00008000,
        WStyle_Mask = 0x0000fff0,

        WDestructiveClose = 0x00010000,
        WPaintDesktop = 0x00020000,
        WPaintUnclipped = 0x00040000,
        WPaintClever = 0x00080000,
        WResizeNoErase = 0x00100000,
        WMouseNoMask = 0x00200000,
        WStaticContents = 0x00400000,
        WRepaintNoErase = 0x00800000,

        WX11BypassWM = 0x01000000,
        WWinOwnDC = 0x00000000,
        WMacNoSheet = 0x00000000,
        WMacDrawer = 0x00000000,
# 218 "/coolo/prod/qt-copy/include/qnamespace.h"
        WGroupLeader = 0x02000000,
        WShowModal = 0x04000000,
        WNoMousePropagation = 0x08000000,
        WSubWindow = 0x10000000,

        WStyle_Splash = 0x20000000,




        WNoAutoErase = WRepaintNoErase | WResizeNoErase







    };





    enum ImageConversionFlags {
        ColorMode_Mask = 0x00000003,
        AutoColor = 0x00000000,
        ColorOnly = 0x00000003,
        MonoOnly = 0x00000002,


        AlphaDither_Mask = 0x0000000c,
        ThresholdAlphaDither = 0x00000000,
        OrderedAlphaDither = 0x00000004,
        DiffuseAlphaDither = 0x00000008,
        NoAlpha = 0x0000000c,

        Dither_Mask = 0x00000030,
        DiffuseDither = 0x00000000,
        OrderedDither = 0x00000010,
        ThresholdDither = 0x00000020,


        DitherMode_Mask = 0x000000c0,
        AutoDither = 0x00000000,
        PreferDither = 0x00000040,
        AvoidDither = 0x00000080
    };


    enum BGMode {
        TransparentMode,
        OpaqueMode
    };
# 287 "/coolo/prod/qt-copy/include/qnamespace.h"
    enum GUIStyle {
        WindowsStyle = 1,
        MotifStyle = 4
    };
# 302 "/coolo/prod/qt-copy/include/qnamespace.h"
    enum SequenceMatch {
        NoMatch,
        PartialMatch,
        Identical
    };


    enum Modifier {
        META = 0x00100000,
        SHIFT = 0x00200000,
        CTRL = 0x00400000,
        ALT = 0x00800000,
        MODIFIER_MASK = 0x00f00000,
        UNICODE_ACCEL = 0x10000000,

        ASCII_ACCEL = UNICODE_ACCEL
    };


    enum Key {
        Key_Escape = 0x1000,
        Key_Tab = 0x1001,
        Key_Backtab = 0x1002, Key_BackTab = Key_Backtab,
        Key_Backspace = 0x1003, Key_BackSpace = Key_Backspace,
        Key_Return = 0x1004,
        Key_Enter = 0x1005,
        Key_Insert = 0x1006,
        Key_Delete = 0x1007,
        Key_Pause = 0x1008,
        Key_Print = 0x1009,
        Key_SysReq = 0x100a,
        Key_Clear = 0x100b,
        Key_Home = 0x1010,
        Key_End = 0x1011,
        Key_Left = 0x1012,
        Key_Up = 0x1013,
        Key_Right = 0x1014,
        Key_Down = 0x1015,
        Key_Prior = 0x1016, Key_PageUp = Key_Prior,
        Key_Next = 0x1017, Key_PageDown = Key_Next,
        Key_Shift = 0x1020,
        Key_Control = 0x1021,
        Key_Meta = 0x1022,
        Key_Alt = 0x1023,
        Key_CapsLock = 0x1024,
        Key_NumLock = 0x1025,
        Key_ScrollLock = 0x1026,
        Key_F1 = 0x1030,
        Key_F2 = 0x1031,
        Key_F3 = 0x1032,
        Key_F4 = 0x1033,
        Key_F5 = 0x1034,
        Key_F6 = 0x1035,
        Key_F7 = 0x1036,
        Key_F8 = 0x1037,
        Key_F9 = 0x1038,
        Key_F10 = 0x1039,
        Key_F11 = 0x103a,
        Key_F12 = 0x103b,
        Key_F13 = 0x103c,
        Key_F14 = 0x103d,
        Key_F15 = 0x103e,
        Key_F16 = 0x103f,
        Key_F17 = 0x1040,
        Key_F18 = 0x1041,
        Key_F19 = 0x1042,
        Key_F20 = 0x1043,
        Key_F21 = 0x1044,
        Key_F22 = 0x1045,
        Key_F23 = 0x1046,
        Key_F24 = 0x1047,
        Key_F25 = 0x1048,
        Key_F26 = 0x1049,
        Key_F27 = 0x104a,
        Key_F28 = 0x104b,
        Key_F29 = 0x104c,
        Key_F30 = 0x104d,
        Key_F31 = 0x104e,
        Key_F32 = 0x104f,
        Key_F33 = 0x1050,
        Key_F34 = 0x1051,
        Key_F35 = 0x1052,
        Key_Super_L = 0x1053,
        Key_Super_R = 0x1054,
        Key_Menu = 0x1055,
        Key_Hyper_L = 0x1056,
        Key_Hyper_R = 0x1057,
        Key_Help = 0x1058,
        Key_Direction_L = 0x1059,
        Key_Direction_R = 0x1060,
        Key_Space = 0x20,
        Key_Any = Key_Space,
        Key_Exclam = 0x21,
        Key_QuoteDbl = 0x22,
        Key_NumberSign = 0x23,
        Key_Dollar = 0x24,
        Key_Percent = 0x25,
        Key_Ampersand = 0x26,
        Key_Apostrophe = 0x27,
        Key_ParenLeft = 0x28,
        Key_ParenRight = 0x29,
        Key_Asterisk = 0x2a,
        Key_Plus = 0x2b,
        Key_Comma = 0x2c,
        Key_Minus = 0x2d,
        Key_Period = 0x2e,
        Key_Slash = 0x2f,
        Key_0 = 0x30,
        Key_1 = 0x31,
        Key_2 = 0x32,
        Key_3 = 0x33,
        Key_4 = 0x34,
        Key_5 = 0x35,
        Key_6 = 0x36,
        Key_7 = 0x37,
        Key_8 = 0x38,
        Key_9 = 0x39,
        Key_Colon = 0x3a,
        Key_Semicolon = 0x3b,
        Key_Less = 0x3c,
        Key_Equal = 0x3d,
        Key_Greater = 0x3e,
        Key_Question = 0x3f,
        Key_At = 0x40,
        Key_A = 0x41,
        Key_B = 0x42,
        Key_C = 0x43,
        Key_D = 0x44,
        Key_E = 0x45,
        Key_F = 0x46,
        Key_G = 0x47,
        Key_H = 0x48,
        Key_I = 0x49,
        Key_J = 0x4a,
        Key_K = 0x4b,
        Key_L = 0x4c,
        Key_M = 0x4d,
        Key_N = 0x4e,
        Key_O = 0x4f,
        Key_P = 0x50,
        Key_Q = 0x51,
        Key_R = 0x52,
        Key_S = 0x53,
        Key_T = 0x54,
        Key_U = 0x55,
        Key_V = 0x56,
        Key_W = 0x57,
        Key_X = 0x58,
        Key_Y = 0x59,
        Key_Z = 0x5a,
        Key_BracketLeft = 0x5b,
        Key_Backslash = 0x5c,
        Key_BracketRight = 0x5d,
        Key_AsciiCircum = 0x5e,
        Key_Underscore = 0x5f,
        Key_QuoteLeft = 0x60,
        Key_BraceLeft = 0x7b,
        Key_Bar = 0x7c,
        Key_BraceRight = 0x7d,
        Key_AsciiTilde = 0x7e,



        Key_nobreakspace = 0x0a0,
        Key_exclamdown = 0x0a1,
        Key_cent = 0x0a2,
        Key_sterling = 0x0a3,
        Key_currency = 0x0a4,
        Key_yen = 0x0a5,
        Key_brokenbar = 0x0a6,
        Key_section = 0x0a7,
        Key_diaeresis = 0x0a8,
        Key_copyright = 0x0a9,
        Key_ordfeminine = 0x0aa,
        Key_guillemotleft = 0x0ab,
        Key_notsign = 0x0ac,
        Key_hyphen = 0x0ad,
        Key_registered = 0x0ae,
        Key_macron = 0x0af,
        Key_degree = 0x0b0,
        Key_plusminus = 0x0b1,
        Key_twosuperior = 0x0b2,
        Key_threesuperior = 0x0b3,
        Key_acute = 0x0b4,
        Key_mu = 0x0b5,
        Key_paragraph = 0x0b6,
        Key_periodcentered = 0x0b7,
        Key_cedilla = 0x0b8,
        Key_onesuperior = 0x0b9,
        Key_masculine = 0x0ba,
        Key_guillemotright = 0x0bb,
        Key_onequarter = 0x0bc,
        Key_onehalf = 0x0bd,
        Key_threequarters = 0x0be,
        Key_questiondown = 0x0bf,
        Key_Agrave = 0x0c0,
        Key_Aacute = 0x0c1,
        Key_Acircumflex = 0x0c2,
        Key_Atilde = 0x0c3,
        Key_Adiaeresis = 0x0c4,
        Key_Aring = 0x0c5,
        Key_AE = 0x0c6,
        Key_Ccedilla = 0x0c7,
        Key_Egrave = 0x0c8,
        Key_Eacute = 0x0c9,
        Key_Ecircumflex = 0x0ca,
        Key_Ediaeresis = 0x0cb,
        Key_Igrave = 0x0cc,
        Key_Iacute = 0x0cd,
        Key_Icircumflex = 0x0ce,
        Key_Idiaeresis = 0x0cf,
        Key_ETH = 0x0d0,
        Key_Ntilde = 0x0d1,
        Key_Ograve = 0x0d2,
        Key_Oacute = 0x0d3,
        Key_Ocircumflex = 0x0d4,
        Key_Otilde = 0x0d5,
        Key_Odiaeresis = 0x0d6,
        Key_multiply = 0x0d7,
        Key_Ooblique = 0x0d8,
        Key_Ugrave = 0x0d9,
        Key_Uacute = 0x0da,
        Key_Ucircumflex = 0x0db,
        Key_Udiaeresis = 0x0dc,
        Key_Yacute = 0x0dd,
        Key_THORN = 0x0de,
        Key_ssharp = 0x0df,
        Key_agrave = 0x0e0,
        Key_aacute = 0x0e1,
        Key_acircumflex = 0x0e2,
        Key_atilde = 0x0e3,
        Key_adiaeresis = 0x0e4,
        Key_aring = 0x0e5,
        Key_ae = 0x0e6,
        Key_ccedilla = 0x0e7,
        Key_egrave = 0x0e8,
        Key_eacute = 0x0e9,
        Key_ecircumflex = 0x0ea,
        Key_ediaeresis = 0x0eb,
        Key_igrave = 0x0ec,
        Key_iacute = 0x0ed,
        Key_icircumflex = 0x0ee,
        Key_idiaeresis = 0x0ef,
        Key_eth = 0x0f0,
        Key_ntilde = 0x0f1,
        Key_ograve = 0x0f2,
        Key_oacute = 0x0f3,
        Key_ocircumflex = 0x0f4,
        Key_otilde = 0x0f5,
        Key_odiaeresis = 0x0f6,
        Key_division = 0x0f7,
        Key_oslash = 0x0f8,
        Key_ugrave = 0x0f9,
        Key_uacute = 0x0fa,
        Key_ucircumflex = 0x0fb,
        Key_udiaeresis = 0x0fc,
        Key_yacute = 0x0fd,
        Key_thorn = 0x0fe,
        Key_ydiaeresis = 0x0ff,



        Key_Back = 0x1061,
        Key_Forward = 0x1062,
        Key_Stop = 0x1063,
        Key_Refresh = 0x1064,

        Key_VolumeDown = 0x1070,
        Key_VolumeMute = 0x1071,
        Key_VolumeUp = 0x1072,
        Key_BassBoost = 0x1073,
        Key_BassUp = 0x1074,
        Key_BassDown = 0x1075,
        Key_TrebleUp = 0x1076,
        Key_TrebleDown = 0x1077,

        Key_MediaPlay = 0x1080,
        Key_MediaStop = 0x1081,
        Key_MediaPrev = 0x1082,
        Key_MediaNext = 0x1083,
        Key_MediaRecord = 0x1084,

        Key_HomePage = 0x1090,
        Key_Favorites = 0x1091,
        Key_Search = 0x1092,
        Key_Standby = 0x1093,
        Key_OpenUrl = 0x1094,

        Key_LaunchMail = 0x10a0,
        Key_LaunchMedia = 0x10a1,
        Key_Launch0 = 0x10a2,
        Key_Launch1 = 0x10a3,
        Key_Launch2 = 0x10a4,
        Key_Launch3 = 0x10a5,
        Key_Launch4 = 0x10a6,
        Key_Launch5 = 0x10a7,
        Key_Launch6 = 0x10a8,
        Key_Launch7 = 0x10a9,
        Key_Launch8 = 0x10aa,
        Key_Launch9 = 0x10ab,
        Key_LaunchA = 0x10ac,
        Key_LaunchB = 0x10ad,
        Key_LaunchC = 0x10ae,
        Key_LaunchD = 0x10af,
        Key_LaunchE = 0x10b0,
        Key_LaunchF = 0x10b1,

        Key_MediaLast = 0x1fff,

        Key_unknown = 0xffff
    };


    enum ArrowType {
        UpArrow,
        DownArrow,
        LeftArrow,
        RightArrow
    };


    enum RasterOp {
        CopyROP,
        OrROP,
        XorROP,
        NotAndROP, EraseROP=NotAndROP,
        NotCopyROP,
        NotOrROP,
        NotXorROP,
        AndROP, NotEraseROP=AndROP,
        NotROP,
        ClearROP,
        SetROP,
        NopROP,
        AndNotROP,
        OrNotROP,
        NandROP,
        NorROP, LastROP=NorROP
    };


    enum PenStyle {
        NoPen,
        SolidLine,
        DashLine,
        DotLine,
        DashDotLine,
        DashDotDotLine,
        MPenStyle = 0x0f
    };


    enum PenCapStyle {
        FlatCap = 0x00,
        SquareCap = 0x10,
        RoundCap = 0x20,
        MPenCapStyle = 0x30
    };


    enum PenJoinStyle {
        MiterJoin = 0x00,
        BevelJoin = 0x40,
        RoundJoin = 0x80,
        MPenJoinStyle = 0xc0
    };


    enum BrushStyle {
        NoBrush,
        SolidPattern,
        Dense1Pattern,
        Dense2Pattern,
        Dense3Pattern,
        Dense4Pattern,
        Dense5Pattern,
        Dense6Pattern,
        Dense7Pattern,
        HorPattern,
        VerPattern,
        CrossPattern,
        BDiagPattern,
        FDiagPattern,
        DiagCrossPattern,
        CustomPattern=24
    };


    enum MacintoshVersion {

        MV_Unknown = 0x0000,


        MV_9 = 0x0001,
        MV_10_DOT_0 = 0x0002,
        MV_10_DOT_1 = 0x0003,
        MV_10_DOT_2 = 0x0004,
        MV_10_DOT_3 = 0x0005,


        MV_CHEETAH = MV_10_DOT_0,
        MV_PUMA = MV_10_DOT_1,
        MV_JAGUAR = MV_10_DOT_2,
        MV_PANTHER = MV_10_DOT_3
    };


    enum WindowsVersion {
        WV_32s = 0x0001,
        WV_95 = 0x0002,
        WV_98 = 0x0003,
        WV_Me = 0x0004,
        WV_DOS_based = 0x000f,

        WV_NT = 0x0010,
        WV_2000 = 0x0020,
        WV_XP = 0x0030,
        WV_NT_based = 0x00f0
    };


    enum UIEffect {
        UI_General,
        UI_AnimateMenu,
        UI_FadeMenu,
        UI_AnimateCombo,
        UI_AnimateTooltip,
        UI_FadeTooltip,
        UI_AnimateToolBox
    };


    enum CursorShape {
        ArrowCursor,
        UpArrowCursor,
        CrossCursor,
        WaitCursor,
        IbeamCursor,
        SizeVerCursor,
        SizeHorCursor,
        SizeBDiagCursor,
        SizeFDiagCursor,
        SizeAllCursor,
        BlankCursor,
        SplitVCursor,
        SplitHCursor,
        PointingHandCursor,
        ForbiddenCursor,
        WhatsThisCursor,
        LastCursor = WhatsThisCursor,
        BitmapCursor = 24
    };



    static const QCursor & arrowCursor;
    static const QCursor & upArrowCursor;
    static const QCursor & crossCursor;
    static const QCursor & waitCursor;
    static const QCursor & ibeamCursor;
    static const QCursor & sizeVerCursor;
    static const QCursor & sizeHorCursor;
    static const QCursor & sizeBDiagCursor;
    static const QCursor & sizeFDiagCursor;
    static const QCursor & sizeAllCursor;
    static const QCursor & blankCursor;
    static const QCursor & splitVCursor;

    static const QCursor & splitHCursor;

    static const QCursor & pointingHandCursor;
    static const QCursor & forbiddenCursor;
    static const QCursor & whatsThisCursor;


    enum TextFormat {
        PlainText,
        RichText,
        AutoText,
        LogText
    };


    enum AnchorAttribute {
        AnchorName,
        AnchorHref
    };


    enum Dock {
        DockUnmanaged,
        DockTornOff,
        DockTop,
        DockBottom,
        DockRight,
        DockLeft,
        DockMinimized
# 809 "/coolo/prod/qt-copy/include/qnamespace.h"
    };

    typedef Dock ToolBarDock;


    enum DateFormat {
        TextDate,
        ISODate,
        LocalDate
    };


    enum TimeSpec {
        LocalTime,
        UTC
    };


    enum BackgroundMode {
        FixedColor,
        FixedPixmap,
        NoBackground,
        PaletteForeground,
        PaletteButton,
        PaletteLight,
        PaletteMidlight,
        PaletteDark,
        PaletteMid,
        PaletteText,
        PaletteBrightText,
        PaletteBase,
        PaletteBackground,
        PaletteShadow,
        PaletteHighlight,
        PaletteHighlightedText,
        PaletteButtonText,
        PaletteLink,
        PaletteLinkVisited,
        X11ParentRelative
    };

    typedef uint ComparisonFlags;


    enum StringComparisonMode {
        CaseSensitive = 0x00001,
        BeginsWith = 0x00002,
        EndsWith = 0x00004,
        Contains = 0x00008,
        ExactMatch = 0x00010
    };


    enum Corner {
        TopLeft = 0x00000,
        TopRight = 0x00001,
        BottomLeft = 0x00002,
        BottomRight = 0x00003
    };
# 876 "/coolo/prod/qt-copy/include/qnamespace.h"
    typedef unsigned long HANDLE;



};


class QInternal {
public:
    enum PaintDeviceFlags {
        UndefinedDevice = 0x00,
        Widget = 0x01,
        Pixmap = 0x02,
        Printer = 0x03,
        Picture = 0x04,
        System = 0x05,
        DeviceTypeMask = 0x0f,
        ExternalDevice = 0x10,

        CompatibilityMode = 0x20
    };
};
# 46 "/coolo/prod/qt-copy/include/qwindowdefs.h" 2




class QPaintDevice;
class QPaintDeviceMetrics;
class QWidget;
class QWidgetMapper;
class QDialog;
class QColor;
class QColorGroup;
class QPalette;
class QCursor;
class QPoint;
class QSize;
class QRect;
class QPointArray;
class QPainter;
class QRegion;
class QFont;
class QFontMetrics;
class QFontInfo;
class QPen;
class QBrush;
class QWMatrix;
class QPixmap;
class QBitmap;
class QMovie;
class QImage;
class QImageIO;
class QPicture;
class QPrinter;
class QAccel;
class QTimer;
class QTime;
class QClipboard;




class QWidgetList;
class QWidgetListIt;
# 140 "/coolo/prod/qt-copy/include/qwindowdefs.h"
typedef struct _XDisplay Display;
typedef union _XEvent XEvent;
typedef struct _XGC *GC;
typedef struct _XRegion *Region;
typedef unsigned long WId;

 Display *qt_xdisplay();
 int qt_xscreen();
 WId qt_xrootwin();
 WId qt_xrootwin( int scrn );
 GC qt_xget_readonly_gc( int scrn, bool monochrome );
 GC qt_xget_temp_gc( int scrn, bool monochrome );
# 163 "/coolo/prod/qt-copy/include/qwindowdefs.h"
class QApplication;







typedef Q_INT32 QCOORD;
const QCOORD QCOORD_MAX = 2147483647;
const QCOORD QCOORD_MIN = -QCOORD_MAX - 1;

typedef unsigned int QRgb;

 const char *qAppName();



typedef void (*QtCleanUpFunction)();
 void qAddPostRoutine( QtCleanUpFunction );
 void qRemovePostRoutine( QtCleanUpFunction );
# 44 "/coolo/prod/qt-copy/include/qobject.h" 2

# 1 "/coolo/prod/qt-copy/include/qevent.h" 1
# 39 "/coolo/prod/qt-copy/include/qevent.h"



# 1 "/coolo/prod/qt-copy/include/qregion.h" 1
# 39 "/coolo/prod/qt-copy/include/qregion.h"



# 1 "/coolo/prod/qt-copy/include/qrect.h" 1
# 39 "/coolo/prod/qt-copy/include/qrect.h"


# 1 "/coolo/prod/qt-copy/include/qsize.h" 1
# 39 "/coolo/prod/qt-copy/include/qsize.h"


# 1 "/coolo/prod/qt-copy/include/qpoint.h" 1
# 39 "/coolo/prod/qt-copy/include/qpoint.h"






class QPoint
{
public:
    QPoint();
    QPoint( int xpos, int ypos );

    bool isNull() const;

    int x() const;
    int y() const;
    void setX( int x );
    void setY( int y );

    int manhattanLength() const;

    QCOORD &rx();
    QCOORD &ry();

    QPoint &operator+=( const QPoint &p );
    QPoint &operator-=( const QPoint &p );
    QPoint &operator*=( int c );
    QPoint &operator*=( double c );
    QPoint &operator/=( int c );
    QPoint &operator/=( double c );

    friend inline bool operator==( const QPoint &, const QPoint & );
    friend inline bool operator!=( const QPoint &, const QPoint & );
    friend inline const QPoint operator+( const QPoint &, const QPoint & );
    friend inline const QPoint operator-( const QPoint &, const QPoint & );
    friend inline const QPoint operator*( const QPoint &, int );
    friend inline const QPoint operator*( int, const QPoint & );
    friend inline const QPoint operator*( const QPoint &, double );
    friend inline const QPoint operator*( double, const QPoint & );
    friend inline const QPoint operator-( const QPoint & );
    friend inline const QPoint operator/( const QPoint &, int );
    friend inline const QPoint operator/( const QPoint &, double );

private:
    static void warningDivByZero();





    QCOORD xp;
    QCOORD yp;

};






 QDataStream &operator<<( QDataStream &, const QPoint & );
 QDataStream &operator>>( QDataStream &, QPoint & );






inline QPoint::QPoint()
{ xp=0; yp=0; }

inline QPoint::QPoint( int xpos, int ypos )
{ xp=(QCOORD)xpos; yp=(QCOORD)ypos; }

inline bool QPoint::isNull() const
{ return xp == 0 && yp == 0; }

inline int QPoint::x() const
{ return xp; }

inline int QPoint::y() const
{ return yp; }

inline void QPoint::setX( int x )
{ xp = (QCOORD)x; }

inline void QPoint::setY( int y )
{ yp = (QCOORD)y; }

inline QCOORD &QPoint::rx()
{ return xp; }

inline QCOORD &QPoint::ry()
{ return yp; }

inline QPoint &QPoint::operator+=( const QPoint &p )
{ xp+=p.xp; yp+=p.yp; return *this; }

inline QPoint &QPoint::operator-=( const QPoint &p )
{ xp-=p.xp; yp-=p.yp; return *this; }

inline QPoint &QPoint::operator*=( int c )
{ xp*=(QCOORD)c; yp*=(QCOORD)c; return *this; }

inline QPoint &QPoint::operator*=( double c )
{ xp=(QCOORD)(xp*c); yp=(QCOORD)(yp*c); return *this; }

inline bool operator==( const QPoint &p1, const QPoint &p2 )
{ return p1.xp == p2.xp && p1.yp == p2.yp; }

inline bool operator!=( const QPoint &p1, const QPoint &p2 )
{ return p1.xp != p2.xp || p1.yp != p2.yp; }

inline const QPoint operator+( const QPoint &p1, const QPoint &p2 )
{ return QPoint(p1.xp+p2.xp, p1.yp+p2.yp); }

inline const QPoint operator-( const QPoint &p1, const QPoint &p2 )
{ return QPoint(p1.xp-p2.xp, p1.yp-p2.yp); }

inline const QPoint operator*( const QPoint &p, int c )
{ return QPoint(p.xp*c, p.yp*c); }

inline const QPoint operator*( int c, const QPoint &p )
{ return QPoint(p.xp*c, p.yp*c); }

inline const QPoint operator*( const QPoint &p, double c )
{ return QPoint((QCOORD)(p.xp*c), (QCOORD)(p.yp*c)); }

inline const QPoint operator*( double c, const QPoint &p )
{ return QPoint((QCOORD)(p.xp*c), (QCOORD)(p.yp*c)); }

inline const QPoint operator-( const QPoint &p )
{ return QPoint(-p.xp, -p.yp); }

inline QPoint &QPoint::operator/=( int c )
{

    if ( c == 0 )
        warningDivByZero();

    xp/=(QCOORD)c;
    yp/=(QCOORD)c;
    return *this;
}

inline QPoint &QPoint::operator/=( double c )
{

    if ( c == 0.0 )
        warningDivByZero();

    xp=(QCOORD)(xp/c);
    yp=(QCOORD)(yp/c);
    return *this;
}

inline const QPoint operator/( const QPoint &p, int c )
{

    if ( c == 0 )
        QPoint::warningDivByZero();

    return QPoint(p.xp/c, p.yp/c);
}

inline const QPoint operator/( const QPoint &p, double c )
{

    if ( c == 0.0 )
        QPoint::warningDivByZero();

    return QPoint((QCOORD)(p.xp/c), (QCOORD)(p.yp/c));
}

# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 216 "/coolo/prod/qt-copy/include/qpoint.h" 2
# 43 "/coolo/prod/qt-copy/include/qsize.h" 2


class QSize

{
public:

    enum ScaleMode {
        ScaleFree,
        ScaleMin,
        ScaleMax
    };

    QSize();
    QSize( int w, int h );

    bool isNull() const;
    bool isEmpty() const;
    bool isValid() const;

    int width() const;
    int height() const;
    void setWidth( int w );
    void setHeight( int h );
    void transpose();

    void scale( int w, int h, ScaleMode mode );
    void scale( const QSize &s, ScaleMode mode );

    QSize expandedTo( const QSize & ) const;
    QSize boundedTo( const QSize & ) const;

    QCOORD &rwidth();
    QCOORD &rheight();

    QSize &operator+=( const QSize & );
    QSize &operator-=( const QSize & );
    QSize &operator*=( int c );
    QSize &operator*=( double c );
    QSize &operator/=( int c );
    QSize &operator/=( double c );

    friend inline bool operator==( const QSize &, const QSize & );
    friend inline bool operator!=( const QSize &, const QSize & );
    friend inline const QSize operator+( const QSize &, const QSize & );
    friend inline const QSize operator-( const QSize &, const QSize & );
    friend inline const QSize operator*( const QSize &, int );
    friend inline const QSize operator*( int, const QSize & );
    friend inline const QSize operator*( const QSize &, double );
    friend inline const QSize operator*( double, const QSize & );
    friend inline const QSize operator/( const QSize &, int );
    friend inline const QSize operator/( const QSize &, double );

private:
    static void warningDivByZero();

    QCOORD wd;
    QCOORD ht;
};






 QDataStream &operator<<( QDataStream &, const QSize & );
 QDataStream &operator>>( QDataStream &, QSize & );






inline QSize::QSize()
{ wd = ht = -1; }

inline QSize::QSize( int w, int h )
{ wd=(QCOORD)w; ht=(QCOORD)h; }

inline bool QSize::isNull() const
{ return wd==0 && ht==0; }

inline bool QSize::isEmpty() const
{ return wd<1 || ht<1; }

inline bool QSize::isValid() const
{ return wd>=0 && ht>=0; }

inline int QSize::width() const
{ return wd; }

inline int QSize::height() const
{ return ht; }

inline void QSize::setWidth( int w )
{ wd=(QCOORD)w; }

inline void QSize::setHeight( int h )
{ ht=(QCOORD)h; }

inline QCOORD &QSize::rwidth()
{ return wd; }

inline QCOORD &QSize::rheight()
{ return ht; }

inline QSize &QSize::operator+=( const QSize &s )
{ wd+=s.wd; ht+=s.ht; return *this; }

inline QSize &QSize::operator-=( const QSize &s )
{ wd-=s.wd; ht-=s.ht; return *this; }

inline QSize &QSize::operator*=( int c )
{ wd*=(QCOORD)c; ht*=(QCOORD)c; return *this; }

inline QSize &QSize::operator*=( double c )
{ wd=(QCOORD)(wd*c); ht=(QCOORD)(ht*c); return *this; }

inline bool operator==( const QSize &s1, const QSize &s2 )
{ return s1.wd == s2.wd && s1.ht == s2.ht; }

inline bool operator!=( const QSize &s1, const QSize &s2 )
{ return s1.wd != s2.wd || s1.ht != s2.ht; }

inline const QSize operator+( const QSize & s1, const QSize & s2 )
{ return QSize(s1.wd+s2.wd, s1.ht+s2.ht); }

inline const QSize operator-( const QSize &s1, const QSize &s2 )
{ return QSize(s1.wd-s2.wd, s1.ht-s2.ht); }

inline const QSize operator*( const QSize &s, int c )
{ return QSize(s.wd*c, s.ht*c); }

inline const QSize operator*( int c, const QSize &s )
{ return QSize(s.wd*c, s.ht*c); }

inline const QSize operator*( const QSize &s, double c )
{ return QSize((QCOORD)(s.wd*c), (QCOORD)(s.ht*c)); }

inline const QSize operator*( double c, const QSize &s )
{ return QSize((QCOORD)(s.wd*c), (QCOORD)(s.ht*c)); }

inline QSize &QSize::operator/=( int c )
{

    if ( c == 0 )
        warningDivByZero();

    wd/=(QCOORD)c; ht/=(QCOORD)c;
    return *this;
}

inline QSize &QSize::operator/=( double c )
{

    if ( c == 0.0 )
        warningDivByZero();

    wd=(QCOORD)(wd/c); ht=(QCOORD)(ht/c);
    return *this;
}

inline const QSize operator/( const QSize &s, int c )
{

    if ( c == 0 )
        QSize::warningDivByZero();

    return QSize(s.wd/c, s.ht/c);
}

inline const QSize operator/( const QSize &s, double c )
{

    if ( c == 0.0 )
        QSize::warningDivByZero();

    return QSize((QCOORD)(s.wd/c), (QCOORD)(s.ht/c));
}

inline QSize QSize::expandedTo( const QSize & otherSize ) const
{
    return QSize( ((otherSize.wd) < (wd) ? (wd) : (otherSize.wd)), ((otherSize.ht) < (ht) ? (ht) : (otherSize.ht)) );
}

inline QSize QSize::boundedTo( const QSize & otherSize ) const
{
    return QSize( ((wd) < (otherSize.wd) ? (wd) : (otherSize.wd)), ((ht) < (otherSize.ht) ? (ht) : (otherSize.ht)) );
}
# 43 "/coolo/prod/qt-copy/include/qrect.h" 2







class QRect
{
public:
    QRect() { x1 = y1 = 0; x2 = y2 = -1; }
    QRect( const QPoint &topleft, const QPoint &bottomright );
    QRect( const QPoint &topleft, const QSize &size );
    QRect( int left, int top, int width, int height );

    bool isNull() const;
    bool isEmpty() const;
    bool isValid() const;
    QRect normalize() const;

    int left() const;
    int top() const;
    int right() const;
    int bottom() const;

    QCOORD &rLeft();
    QCOORD &rTop();
    QCOORD &rRight();
    QCOORD &rBottom();

    int x() const;
    int y() const;
    void setLeft( int pos );
    void setTop( int pos );
    void setRight( int pos );
    void setBottom( int pos );
    void setX( int x );
    void setY( int y );

    void setTopLeft( const QPoint &p );
    void setBottomRight( const QPoint &p );
    void setTopRight( const QPoint &p );
    void setBottomLeft( const QPoint &p );

    QPoint topLeft() const;
    QPoint bottomRight() const;
    QPoint topRight() const;
    QPoint bottomLeft() const;
    QPoint center() const;

    void rect( int *x, int *y, int *w, int *h ) const;
    void coords( int *x1, int *y1, int *x2, int *y2 ) const;

    void moveLeft( int pos );
    void moveTop( int pos );
    void moveRight( int pos );
    void moveBottom( int pos );
    void moveTopLeft( const QPoint &p );
    void moveBottomRight( const QPoint &p );
    void moveTopRight( const QPoint &p );
    void moveBottomLeft( const QPoint &p );
    void moveCenter( const QPoint &p );
    void moveBy( int dx, int dy );

    void setRect( int x, int y, int w, int h );
    void setCoords( int x1, int y1, int x2, int y2 );
    void addCoords( int x1, int y1, int x2, int y2 );

    QSize size() const;
    int width() const;
    int height() const;
    void setWidth( int w );
    void setHeight( int h );
    void setSize( const QSize &s );

    QRect operator|(const QRect &r) const;
    QRect operator&(const QRect &r) const;
    QRect& operator|=(const QRect &r);
    QRect& operator&=(const QRect &r);

    bool contains( const QPoint &p, bool proper=FALSE ) const;
    bool contains( int x, int y ) const;
    bool contains( int x, int y, bool proper ) const;
    bool contains( const QRect &r, bool proper=FALSE ) const;
    QRect unite( const QRect &r ) const;
    QRect intersect( const QRect &r ) const;
    bool intersects( const QRect &r ) const;

    friend bool operator==( const QRect &, const QRect & );
    friend bool operator!=( const QRect &, const QRect & );

private:

    friend void qt_setCoords( QRect *r, int xp1, int yp1, int xp2, int yp2 );







    QCOORD x1;
    QCOORD y1;
    QCOORD x2;
    QCOORD y2;

};

 bool operator==( const QRect &, const QRect & );
 bool operator!=( const QRect &, const QRect & );






 QDataStream &operator<<( QDataStream &, const QRect & );
 QDataStream &operator>>( QDataStream &, QRect & );






inline QRect::QRect( int left, int top, int width, int height )
{
    x1 = (QCOORD)left;
    y1 = (QCOORD)top;
    x2 = (QCOORD)(left+width-1);
    y2 = (QCOORD)(top+height-1);
}

inline bool QRect::isNull() const
{ return x2 == x1-1 && y2 == y1-1; }

inline bool QRect::isEmpty() const
{ return x1 > x2 || y1 > y2; }

inline bool QRect::isValid() const
{ return x1 <= x2 && y1 <= y2; }

inline int QRect::left() const
{ return x1; }

inline int QRect::top() const
{ return y1; }

inline int QRect::right() const
{ return x2; }

inline int QRect::bottom() const
{ return y2; }

inline QCOORD &QRect::rLeft()
{ return x1; }

inline QCOORD & QRect::rTop()
{ return y1; }

inline QCOORD & QRect::rRight()
{ return x2; }

inline QCOORD & QRect::rBottom()
{ return y2; }

inline int QRect::x() const
{ return x1; }

inline int QRect::y() const
{ return y1; }

inline void QRect::setLeft( int pos )
{ x1 = (QCOORD)pos; }

inline void QRect::setTop( int pos )
{ y1 = (QCOORD)pos; }

inline void QRect::setRight( int pos )
{ x2 = (QCOORD)pos; }

inline void QRect::setBottom( int pos )
{ y2 = (QCOORD)pos; }

inline void QRect::setX( int x )
{ x1 = (QCOORD)x; }

inline void QRect::setY( int y )
{ y1 = (QCOORD)y; }

inline QPoint QRect::topLeft() const
{ return QPoint(x1, y1); }

inline QPoint QRect::bottomRight() const
{ return QPoint(x2, y2); }

inline QPoint QRect::topRight() const
{ return QPoint(x2, y1); }

inline QPoint QRect::bottomLeft() const
{ return QPoint(x1, y2); }

inline QPoint QRect::center() const
{ return QPoint((x1+x2)/2, (y1+y2)/2); }

inline int QRect::width() const
{ return x2 - x1 + 1; }

inline int QRect::height() const
{ return y2 - y1 + 1; }

inline QSize QRect::size() const
{ return QSize(x2-x1+1, y2-y1+1); }

inline bool QRect::contains( int x, int y, bool proper ) const
{
    if ( proper )
        return x > x1 && x < x2 &&
               y > y1 && y < y2;
    else
        return x >= x1 && x <= x2 &&
               y >= y1 && y <= y2;
}

inline bool QRect::contains( int x, int y ) const
{
    return x >= x1 && x <= x2 &&
           y >= y1 && y <= y2;
}
# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 273 "/coolo/prod/qt-copy/include/qrect.h" 2
# 44 "/coolo/prod/qt-copy/include/qregion.h" 2



struct QRegionPrivate;


class QRegion
{
public:
    enum RegionType { Rectangle, Ellipse };

    QRegion();
    QRegion( int x, int y, int w, int h, RegionType = Rectangle );
    QRegion( const QRect &, RegionType = Rectangle );
    QRegion( const QPointArray &, bool winding=FALSE );
    QRegion( const QRegion & );
    QRegion( const QBitmap & );
   ~QRegion();
    QRegion &operator=( const QRegion & );

    bool isNull() const;
    bool isEmpty() const;

    bool contains( const QPoint &p ) const;
    bool contains( const QRect &r ) const;

    void translate( int dx, int dy );

    QRegion unite( const QRegion & ) const;
    QRegion intersect( const QRegion &) const;
    QRegion subtract( const QRegion & ) const;
    QRegion eor( const QRegion & ) const;

    QRect boundingRect() const;
    QMemArray<QRect> rects() const;
    void setRects( const QRect *, int );

    const QRegion operator|( const QRegion & ) const;
    const QRegion operator+( const QRegion & ) const;
    const QRegion operator&( const QRegion & ) const;
    const QRegion operator-( const QRegion & ) const;
    const QRegion operator^( const QRegion & ) const;
    QRegion& operator|=( const QRegion & );
    QRegion& operator+=( const QRegion & );
    QRegion& operator&=( const QRegion & );
    QRegion& operator-=( const QRegion & );
    QRegion& operator^=( const QRegion & );

    bool operator==( const QRegion & ) const;
    bool operator!=( const QRegion &r ) const
                        { return !(operator==(r)); }




    Region handle() const { if(!data->rgn) updateX11Region(); return data->rgn; }
# 108 "/coolo/prod/qt-copy/include/qregion.h"
    friend QDataStream &operator<<( QDataStream &, const QRegion & );
    friend QDataStream &operator>>( QDataStream &, QRegion & );

private:
    QRegion( bool );
    QRegion copy() const;
    void detach();




    void updateX11Region() const;
    void *clipRectangles( int &num ) const;
    friend void *qt_getClipRects( const QRegion &, int & );

    void exec( const QByteArray &, int ver = 0 );
    struct QRegionData : public QShared {



        Region rgn;
        void *xrectangles;
        QRegionPrivate *region;







        bool is_null;
    } *data;







};









 QDataStream &operator<<( QDataStream &, const QRegion & );
 QDataStream &operator>>( QDataStream &, QRegion & );
# 44 "/coolo/prod/qt-copy/include/qevent.h" 2

# 1 "/coolo/prod/qt-copy/include/qmime.h" 1
# 39 "/coolo/prod/qt-copy/include/qmime.h"



# 1 "/coolo/prod/qt-copy/include/qmap.h" 1
# 39 "/coolo/prod/qt-copy/include/qmap.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qmap.h" 2

# 1 "/coolo/prod/qt-copy/include/qdatastream.h" 1
# 39 "/coolo/prod/qt-copy/include/qdatastream.h"


# 1 "/coolo/prod/qt-copy/include/qiodevice.h" 1
# 39 "/coolo/prod/qt-copy/include/qiodevice.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qiodevice.h" 2




















class QIODevice
{
public:



    typedef Q_ULONG Offset;


    QIODevice();
    virtual ~QIODevice();

    int flags() const { return ioMode; }
    int mode() const { return ioMode & 0x00ff; }
    int state() const { return ioMode & 0xf000; }

    bool isDirectAccess() const { return ((ioMode & 0x0100) == 0x0100); }
    bool isSequentialAccess() const { return ((ioMode & 0x0200) == 0x0200); }
    bool isCombinedAccess() const { return ((ioMode & 0x0300) == 0x0300); }
    bool isBuffered() const { return ((ioMode & 0x0040) != 0x0040); }
    bool isRaw() const { return ((ioMode & 0x0040) == 0x0040); }
    bool isSynchronous() const { return ((ioMode & 0x0080) != 0x0080); }
    bool isAsynchronous() const { return ((ioMode & 0x0080) == 0x0080); }
    bool isTranslated() const { return ((ioMode & 0x0010) == 0x0010); }
    bool isReadable() const { return ((ioMode & 0x0001) == 0x0001); }
    bool isWritable() const { return ((ioMode & 0x0002) == 0x0002); }
    bool isReadWrite() const { return ((ioMode & 0x0003) == 0x0003); }
    bool isInactive() const { return state() == 0; }
    bool isOpen() const { return state() == 0x1000; }

    int status() const { return ioSt; }
    void resetStatus() { ioSt = 0; }

    virtual bool open( int mode ) = 0;
    virtual void close() = 0;
    virtual void flush() = 0;

    virtual Offset size() const = 0;
    virtual Offset at() const;
    virtual bool at( Offset );
    virtual bool atEnd() const;
    bool reset() { return at(0); }

    virtual Q_LONG readBlock( char *data, Q_ULONG maxlen ) = 0;
    virtual Q_LONG writeBlock( const char *data, Q_ULONG len ) = 0;
    virtual Q_LONG readLine( char *data, Q_ULONG maxlen );
    Q_LONG writeBlock( const QByteArray& data );
    virtual QByteArray readAll();

    virtual int getch() = 0;
    virtual int putch( int ) = 0;
    virtual int ungetch( int ) = 0;

protected:
    void setFlags( int f ) { ioMode = f; }
    void setType( int );
    void setMode( int );
    void setState( int );
    void setStatus( int );
    Offset ioIndex;

private:
    int ioMode;
    int ioSt;

private:

    QIODevice( const QIODevice & );
    QIODevice &operator=( const QIODevice & );

};
# 43 "/coolo/prod/qt-copy/include/qdatastream.h" 2




class QDataStream
{
public:
    QDataStream();
    QDataStream( QIODevice * );
    QDataStream( QByteArray, int mode );
    virtual ~QDataStream();

    QIODevice *device() const;
    void setDevice( QIODevice * );
    void unsetDevice();

    bool atEnd() const;
    bool eof() const;

    enum ByteOrder { BigEndian, LittleEndian };
    int byteOrder() const;
    void setByteOrder( int );

    bool isPrintableData() const;
    void setPrintableData( bool );

    int version() const;
    void setVersion( int );

    QDataStream &operator>>( Q_INT8 &i );
    QDataStream &operator>>( Q_UINT8 &i );
    QDataStream &operator>>( Q_INT16 &i );
    QDataStream &operator>>( Q_UINT16 &i );
    QDataStream &operator>>( Q_INT32 &i );
    QDataStream &operator>>( Q_UINT32 &i );
    QDataStream &operator>>( Q_INT64 &i );
    QDataStream &operator>>( Q_UINT64 &i );
    QDataStream &operator>>( Q_LONG &i );
    QDataStream &operator>>( Q_ULONG &i );

    QDataStream &operator>>( float &f );
    QDataStream &operator>>( double &f );
    QDataStream &operator>>( char *&str );

    QDataStream &operator<<( Q_INT8 i );
    QDataStream &operator<<( Q_UINT8 i );
    QDataStream &operator<<( Q_INT16 i );
    QDataStream &operator<<( Q_UINT16 i );
    QDataStream &operator<<( Q_INT32 i );
    QDataStream &operator<<( Q_UINT32 i );
    QDataStream &operator<<( Q_INT64 i );
    QDataStream &operator<<( Q_UINT64 i );
    QDataStream &operator<<( Q_LONG i );
    QDataStream &operator<<( Q_ULONG i );
    QDataStream &operator<<( float f );
    QDataStream &operator<<( double f );
    QDataStream &operator<<( const char *str );

    QDataStream &readBytes( char *&, uint &len );
    QDataStream &readRawBytes( char *, uint len );

    QDataStream &writeBytes( const char *, uint len );
    QDataStream &writeRawBytes( const char *, uint len );

private:
    QIODevice *dev;
    bool owndev;
    int byteorder;
    bool printable;
    bool noswap;
    int ver;

private:

    QDataStream( const QDataStream & );
    QDataStream &operator=( const QDataStream & );

};






inline QIODevice *QDataStream::device() const
{ return dev; }

inline bool QDataStream::atEnd() const
{ return dev ? dev->atEnd() : TRUE; }

inline bool QDataStream::eof() const
{ return atEnd(); }

inline int QDataStream::byteOrder() const
{ return byteorder; }

inline bool QDataStream::isPrintableData() const
{ return printable; }

inline void QDataStream::setPrintableData( bool p )
{ printable = p; }

inline int QDataStream::version() const
{ return ver; }

inline void QDataStream::setVersion( int v )
{ ver = v; }

inline QDataStream &QDataStream::operator>>( Q_UINT8 &i )
{ return *this >> (Q_INT8&)i; }

inline QDataStream &QDataStream::operator>>( Q_UINT16 &i )
{ return *this >> (Q_INT16&)i; }

inline QDataStream &QDataStream::operator>>( Q_UINT32 &i )
{ return *this >> (Q_INT32&)i; }

inline QDataStream &QDataStream::operator>>( Q_UINT64 &i )
{ return *this >> (Q_INT64&)i; }

inline QDataStream &QDataStream::operator>>( Q_ULONG &i )
{ return *this >> (Q_LONG&)i; }

inline QDataStream &QDataStream::operator<<( Q_UINT8 i )
{ return *this << (Q_INT8)i; }

inline QDataStream &QDataStream::operator<<( Q_UINT16 i )
{ return *this << (Q_INT16)i; }

inline QDataStream &QDataStream::operator<<( Q_UINT32 i )
{ return *this << (Q_INT32)i; }

inline QDataStream &QDataStream::operator<<( Q_UINT64 i )
{ return *this << (Q_INT64)i; }

inline QDataStream &QDataStream::operator<<( Q_ULONG i )
{ return *this << (Q_LONG)i; }
# 45 "/coolo/prod/qt-copy/include/qmap.h" 2
# 1 "/coolo/prod/qt-copy/include/qpair.h" 1
# 37 "/coolo/prod/qt-copy/include/qpair.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 41 "/coolo/prod/qt-copy/include/qpair.h" 2



template <class T1, class T2>
struct QPair
{
    typedef T1 first_type;
    typedef T2 second_type;

    QPair()
        : first( T1() ), second( T2() )
    {}
    QPair( const T1& t1, const T2& t2 )
        : first( t1 ), second( t2 )
    {}

    T1 first;
    T2 second;
};

template <class T1, class T2>
 bool operator==( const QPair<T1, T2>& x, const QPair<T1, T2>& y )
{
    return x.first == y.first && x.second == y.second;
}

template <class T1, class T2>
 bool operator<( const QPair<T1, T2>& x, const QPair<T1, T2>& y )
{
    return x.first < y.first ||
           ( !( y.first < x.first ) && x.second < y.second );
}

template <class T1, class T2>
 QPair<T1, T2> qMakePair( const T1& x, const T2& y )
{
    return QPair<T1, T2>( x, y );
}


template <class T1, class T2>
inline QDataStream& operator>>( QDataStream& s, QPair<T1, T2>& p )
{
    s >> p.first >> p.second;
    return s;
}

template <class T1, class T2>
inline QDataStream& operator<<( QDataStream& s, const QPair<T1, T2>& p )
{
    s << p.first << p.second;
    return s;
}
# 46 "/coolo/prod/qt-copy/include/qmap.h" 2
# 1 "/coolo/prod/qt-copy/include/qvaluelist.h" 1
# 39 "/coolo/prod/qt-copy/include/qvaluelist.h"


# 1 "/coolo/prod/qt-copy/include/qtl.h" 1
# 39 "/coolo/prod/qt-copy/include/qtl.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qtl.h" 2
# 1 "/coolo/prod/qt-copy/include/qtextstream.h" 1
# 39 "/coolo/prod/qt-copy/include/qtextstream.h"




# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4


extern "C" {

# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 397 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef NULL

# 408 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_NULL
# 35 "/usr/include/stdio.h" 2 3 4









typedef struct _IO_FILE FILE;








#undef __need_FILE





typedef struct _IO_FILE __FILE;


#undef __need___FILE




# 1 "/usr/include/libio.h" 1 3 4
# 30 "/usr/include/libio.h" 3 4

# 1 "/usr/include/_G_config.h" 1 3 4








# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 344 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_wchar_t








typedef unsigned int wint_t;

#undef __need_wint_t
# 397 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef NULL

# 408 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_NULL
# 15 "/usr/include/_G_config.h" 2 3 4
# 23 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 47 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 356 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_wint_t
# 49 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 21 "/usr/include/bits/wchar.h" 3 4

# 51 "/usr/include/wchar.h" 2 3 4
# 63 "/usr/include/wchar.h" 3 4







typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;

#undef __need_mbstate_t
# 25 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 1 "/usr/include/gconv.h" 1 3 4
# 24 "/usr/include/gconv.h" 3 4


# 1 "/usr/include/wchar.h" 1 3 4
# 47 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 356 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_wint_t
# 49 "/usr/include/wchar.h" 2 3 4
# 63 "/usr/include/wchar.h" 3 4

# 81 "/usr/include/wchar.h" 3 4
#undef __need_mbstate_t
# 29 "/usr/include/gconv.h" 2 3 4
# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 344 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_wchar_t
# 32 "/usr/include/gconv.h" 2 3 4




enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
                            __const unsigned char **, __const unsigned char *,
                            unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
                                  struct __gconv_step_data *, void *,
                                  __const unsigned char *,
                                  __const unsigned char **,
                                  __const unsigned char *, unsigned char **,
                                  size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
                                          __const unsigned char *,
                                          unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
                                        size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  __const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));















# 33 "/usr/include/libio.h" 2 3 4




# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stdarg.h" 1 3 4
# 37 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stdarg.h" 3 4
#undef __need___va_list




typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4

#undef _IO_va_list
# 76 "/usr/include/libio.h" 3 4












# 105 "/usr/include/libio.h" 3 4












struct _IO_jump_t; struct _IO_FILE;
# 172 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 195 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 263 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;



  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

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
# 311 "/usr/include/libio.h" 3 4
  __off64_t _offset;





  void *__pad1;
  void *__pad2;

  int _mode;

  char _unused2[15 * sizeof (int) - 2 * sizeof (void *)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;

# 350 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
                                 size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
                             void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *) throw ();
extern int __uflow (_IO_FILE *) throw ();
extern int __overflow (_IO_FILE *, int) throw ();
extern wint_t __wunderflow (_IO_FILE *) throw ();
extern wint_t __wuflow (_IO_FILE *) throw ();
extern wint_t __woverflow (_IO_FILE *, wint_t) throw ();

















extern int _IO_getc (_IO_FILE *__fp) throw ();
extern int _IO_putc (int __c, _IO_FILE *__fp) throw ();
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp) throw ();




extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 454 "/usr/include/libio.h" 3 4


extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
                        __gnuc_va_list, int *__restrict) throw ();
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
                         __gnuc_va_list) throw ();
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t) throw ();
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t) throw ();

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int) throw ();
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int) throw ();

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 520 "/usr/include/libio.h" 3 4
}
# 73 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;









typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;







# 118 "/usr/include/stdio.h" 3 4




# 138 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 24 "/usr/include/bits/stdio_lim.h" 3 4







# 139 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;




extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();






extern FILE *tmpfile (void) throw ();
# 171 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) throw ();



extern FILE *tmpfile64 (void) throw ();





extern char *tmpnam_r (char *__s) throw ();
# 193 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__));





extern int fclose (FILE *__stream) throw ();

extern int fflush (FILE *__stream) throw ();




extern int fflush_unlocked (FILE *__stream) throw ();




extern int fcloseall (void) throw ();






extern FILE *fopen (__const char *__restrict __filename,
                    __const char *__restrict __modes) throw ();

extern FILE *freopen (__const char *__restrict __filename,
                      __const char *__restrict __modes,
                      FILE *__restrict __stream) throw ();
# 239 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
                      __const char *__restrict __modes) throw ();
extern FILE *freopen64 (__const char *__restrict __filename,
                        __const char *__restrict __modes,
                        FILE *__restrict __stream) throw ();




extern FILE *fdopen (int __fd, __const char *__modes) throw ();





extern FILE *fopencookie (void *__restrict __magic_cookie,
                          __const char *__restrict __modes,
                          _IO_cookie_io_functions_t __io_funcs) throw ();


extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes) throw ();




extern FILE *open_memstream (char **__restrict __bufloc,
                             size_t *__restrict __sizeloc) throw ();






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
                    int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
                       size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();





extern int fprintf (FILE *__restrict __stream,
                    __const char *__restrict __format, ...) throw ();

extern int printf (__const char *__restrict __format, ...) throw ();

extern int sprintf (char *__restrict __s,
                    __const char *__restrict __format, ...) throw ();


extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
                     __gnuc_va_list __arg) throw ();

extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg)
     throw ();

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
                     __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
                     __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
                      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
                      __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));
extern int __asprintf (char **__restrict __ptr,
                       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int asprintf (char **__restrict __ptr,
                     __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));


extern int vdprintf (int __fd, __const char *__restrict __fmt,
                     __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));





extern int fscanf (FILE *__restrict __stream,
                   __const char *__restrict __format, ...) throw ();

extern int scanf (__const char *__restrict __format, ...) throw ();

extern int sscanf (__const char *__restrict __s,
                   __const char *__restrict __format, ...) throw ();





extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
                    __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));


extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 1, 0)));


extern int vsscanf (__const char *__restrict __s,
                    __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));






extern int fgetc (FILE *__stream) throw ();
extern int getc (FILE *__stream) throw ();


extern int getchar (void) throw ();







extern int getc_unlocked (FILE *__stream) throw ();
extern int getchar_unlocked (void) throw ();




extern int fgetc_unlocked (FILE *__stream) throw ();





extern int fputc (int __c, FILE *__stream) throw ();
extern int putc (int __c, FILE *__stream) throw ();


extern int putchar (int __c) throw ();







extern int fputc_unlocked (int __c, FILE *__stream) throw ();




extern int putc_unlocked (int __c, FILE *__stream) throw ();
extern int putchar_unlocked (int __c) throw ();





extern int getw (FILE *__stream) throw ();


extern int putw (int __w, FILE *__stream) throw ();





extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     throw ();



extern char *gets (char *__s) throw ();




extern char *fgets_unlocked (char *__restrict __s, int __n,
                             FILE *__restrict __stream) throw ();
# 461 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                               size_t *__restrict __n, int __delimiter,
                               FILE *__restrict __stream) throw ();
extern __ssize_t getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) throw ();


extern __ssize_t getline (char **__restrict __lineptr,
                            size_t *__restrict __n,
                            FILE *__restrict __stream) throw ();





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream)
     throw ();


extern int puts (__const char *__s) throw ();



extern int ungetc (int __c, FILE *__stream) throw ();



extern size_t fread (void *__restrict __ptr, size_t __size,
                     size_t __n, FILE *__restrict __stream) throw ();

extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
                      size_t __n, FILE *__restrict __s) throw ();




extern int fputs_unlocked (__const char *__restrict __s,
                           FILE *__restrict __stream) throw ();




extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream) throw ();
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
                               size_t __n, FILE *__restrict __stream) throw ();





extern int fseek (FILE *__stream, long int __off, int __whence) throw ();

extern long int ftell (FILE *__stream) throw ();

extern void rewind (FILE *__stream) throw ();

# 528 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence) throw ();

extern __off_t ftello (FILE *__stream) throw ();
# 544 "/usr/include/stdio.h" 3 4



extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos)
     throw ();

extern int fsetpos (FILE *__stream, __const fpos_t *__pos) throw ();
# 563 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence) throw ();
extern __off64_t ftello64 (FILE *__stream) throw ();
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos)
     throw ();
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos) throw ();




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw ();

extern int ferror (FILE *__stream) throw ();




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw ();
extern int ferror_unlocked (FILE *__stream) throw ();





extern void perror (__const char *__s) throw ();






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 600 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw ();




extern int fileno_unlocked (FILE *__stream) throw ();






extern FILE *popen (__const char *__command, __const char *__modes) throw ();


extern int pclose (FILE *__stream) throw ();





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s) throw ();




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
                           __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
                            __const char *__restrict __format,
                            __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw ();


extern void funlockfile (FILE *__stream) throw ();
# 677 "/usr/include/stdio.h" 3 4
}
# 45 "/coolo/prod/qt-copy/include/qtextstream.h" 2



class QTextCodec;
class QTextDecoder;

class QTextStreamPrivate;

class QTextStream
{
public:
    enum Encoding { Locale, Latin1, Unicode, UnicodeNetworkOrder,
                    UnicodeReverse, RawUnicode, UnicodeUTF8 };

    void setEncoding( Encoding );

    void setCodec( QTextCodec* );
    QTextCodec *codec();


    QTextStream();
    QTextStream( QIODevice * );
    QTextStream( QString*, int mode );
    QTextStream( QString&, int mode );
    QTextStream( QByteArray, int mode );
    QTextStream( FILE *, int mode );
    virtual ~QTextStream();

    QIODevice *device() const;
    void setDevice( QIODevice * );
    void unsetDevice();

    bool atEnd() const;
    bool eof() const;

    QTextStream &operator>>( QChar & );
    QTextStream &operator>>( char & );
    QTextStream &operator>>( signed short & );
    QTextStream &operator>>( unsigned short & );
    QTextStream &operator>>( signed int & );
    QTextStream &operator>>( unsigned int & );
    QTextStream &operator>>( signed long & );
    QTextStream &operator>>( unsigned long & );
    QTextStream &operator>>( float & );
    QTextStream &operator>>( double & );
    QTextStream &operator>>( char * );
    QTextStream &operator>>( QString & );
    QTextStream &operator>>( QCString & );

    QTextStream &operator<<( QChar );
    QTextStream &operator<<( char );
    QTextStream &operator<<( signed short );
    QTextStream &operator<<( unsigned short );
    QTextStream &operator<<( signed int );
    QTextStream &operator<<( unsigned int );
    QTextStream &operator<<( signed long );
    QTextStream &operator<<( unsigned long );
    QTextStream &operator<<( float );
    QTextStream &operator<<( double );
    QTextStream &operator<<( const char* );
    QTextStream &operator<<( const QString & );
    QTextStream &operator<<( const QCString & );
    QTextStream &operator<<( void * );

    QTextStream &readRawBytes( char *, uint len );
    QTextStream &writeRawBytes( const char* , uint len );

    QString readLine();
    QString read();
    void skipWhiteSpace();

    enum {
        skipws = 0x0001,
        left = 0x0002,
        right = 0x0004,
        internal = 0x0008,
        bin = 0x0010,
        oct = 0x0020,
        dec = 0x0040,
        hex = 0x0080,
        showbase = 0x0100,
        showpoint = 0x0200,
        uppercase = 0x0400,
        showpos = 0x0800,
        scientific= 0x1000,
        fixed = 0x2000
    };

    static const int basefield;
    static const int adjustfield;
    static const int floatfield;

    int flags() const;
    int flags( int f );
    int setf( int bits );
    int setf( int bits, int mask );
    int unsetf( int bits );

    void reset();

    int width() const;
    int width( int );
    int fill() const;
    int fill( int );
    int precision() const;
    int precision( int );

private:
    long input_int();
    void init();
    QTextStream &output_int( int, ulong, bool );
    QIODevice *dev;

    int fflags;
    int fwidth;
    int fillchar;
    int fprec;
    bool doUnicodeHeader;
    bool owndev;
    QTextCodec *mapper;
    QTextStreamPrivate * d;
    QChar unused1;
    bool latin1;
    bool internalOrder;
    bool networkOrder;
    void *unused2;

    QChar eat_ws();
    uint ts_getline( QChar* );
    void ts_ungetc( QChar );
    QChar ts_getc();
    uint ts_getbuf( QChar*, uint );
    void ts_putc(int);
    void ts_putc(QChar);
    bool ts_isspace(QChar);
    bool ts_isdigit(QChar);
    ulong input_bin();
    ulong input_oct();
    ulong input_dec();
    ulong input_hex();
    double input_double();
    QTextStream &writeBlock( const char* p, uint len );
    QTextStream &writeBlock( const QChar* p, uint len );

private:

    QTextStream( const QTextStream & );
    QTextStream &operator=( const QTextStream & );

};

typedef QTextStream QTS;

class QTextIStream : public QTextStream {
public:
    QTextIStream( const QString* s ) :
        QTextStream((QString*)s,0x0001) { }
    QTextIStream( QByteArray ba ) :
        QTextStream(ba,0x0001) { }
    QTextIStream( FILE *f ) :
        QTextStream(f,0x0001) { }

private:

    QTextIStream( const QTextIStream & );
    QTextIStream &operator=( const QTextIStream & );

};

class QTextOStream : public QTextStream {
public:
    QTextOStream( QString* s ) :
        QTextStream(s,0x0002) { }
    QTextOStream( QByteArray ba ) :
        QTextStream(ba,0x0002) { }
    QTextOStream( FILE *f ) :
        QTextStream(f,0x0002) { }

private:

    QTextOStream( const QTextOStream & );
    QTextOStream &operator=( const QTextOStream & );

};





inline QIODevice *QTextStream::device() const
{ return dev; }

inline bool QTextStream::atEnd() const
{ return dev ? dev->atEnd() : FALSE; }

inline bool QTextStream::eof() const
{ return atEnd(); }

inline int QTextStream::flags() const
{ return fflags; }

inline int QTextStream::flags( int f )
{ int oldf = fflags; fflags = f; return oldf; }

inline int QTextStream::setf( int bits )
{ int oldf = fflags; fflags |= bits; return oldf; }

inline int QTextStream::setf( int bits, int mask )
{ int oldf = fflags; fflags = (fflags & ~mask) | (bits & mask); return oldf; }

inline int QTextStream::unsetf( int bits )
{ int oldf = fflags; fflags &= ~bits; return oldf; }

inline int QTextStream::width() const
{ return fwidth; }

inline int QTextStream::width( int w )
{ int oldw = fwidth; fwidth = w; return oldw; }

inline int QTextStream::fill() const
{ return fillchar; }

inline int QTextStream::fill( int f )
{ int oldc = fillchar; fillchar = f; return oldc; }

inline int QTextStream::precision() const
{ return fprec; }

inline int QTextStream::precision( int p )
{ int oldp = fprec; fprec = p; return oldp; }




inline QChar QTextStream::ts_getc()
{ QChar r; return ( ts_getbuf( &r,1 ) == 1 ? r : QChar((ushort)0xffff) ); }





typedef QTextStream & (*QTSFUNC)(QTextStream &);
typedef int (QTextStream::*QTSMFI)(int);

class QTSManip {
public:
    QTSManip( QTSMFI m, int a ) { mf=m; arg=a; }
    void exec( QTextStream &s ) { (s.*mf)(arg); }
private:
    QTSMFI mf;
    int arg;
};

 inline QTextStream &operator>>( QTextStream &s, QTSFUNC f )
{ return (*f)( s ); }

 inline QTextStream &operator<<( QTextStream &s, QTSFUNC f )
{ return (*f)( s ); }

 inline QTextStream &operator<<( QTextStream &s, QTSManip m )
{ m.exec(s); return s; }

 QTextStream &bin( QTextStream &s );
 QTextStream &oct( QTextStream &s );
 QTextStream &dec( QTextStream &s );
 QTextStream &hex( QTextStream &s );
 QTextStream &endl( QTextStream &s );
 QTextStream &flush( QTextStream &s );
 QTextStream &ws( QTextStream &s );
 QTextStream &reset( QTextStream &s );

 inline QTSManip qSetW( int w )
{
    QTSMFI func = &QTextStream::width;
    return QTSManip(func,w);
}

 inline QTSManip qSetFill( int f )
{
    QTSMFI func = &QTextStream::fill;
    return QTSManip(func,f);
}

 inline QTSManip qSetPrecision( int p )
{
    QTSMFI func = &QTextStream::precision;
    return QTSManip(func,p);
}
# 44 "/coolo/prod/qt-copy/include/qtl.h" 2




template <class T>
class QTextOStreamIterator
{
protected:
    QTextOStream& stream;
    QString separator;

public:
    QTextOStreamIterator( QTextOStream& s) : stream( s ) {}
    QTextOStreamIterator( QTextOStream& s, const QString& sep )
        : stream( s ), separator( sep ) {}
    QTextOStreamIterator<T>& operator= ( const T& x ) {
        stream << x;
        if ( !separator.isEmpty() )
            stream << separator;
        return *this;
    }
    QTextOStreamIterator<T>& operator*() { return *this; }
    QTextOStreamIterator<T>& operator++() { return *this; }
    QTextOStreamIterator<T>& operator++(int) { return *this; }
};


template <class InputIterator, class OutputIterator>
inline OutputIterator qCopy( InputIterator _begin, InputIterator _end,
                             OutputIterator _dest )
{
    while( _begin != _end )
        *_dest++ = *_begin++;
    return _dest;
}

template <class BiIterator, class BiOutputIterator>
inline BiOutputIterator qCopyBackward( BiIterator _begin, BiIterator _end,
                                       BiOutputIterator _dest )
{
    while ( _begin != _end )
        *--_dest = *--_end;
    return _dest;
}

template <class InputIterator1, class InputIterator2>
inline bool qEqual( InputIterator1 first1, InputIterator1 last1, InputIterator2 first2 )
{

    for ( ; first1 != last1; ++first1, ++first2 )
        if ( *first1 != *first2 )
            return FALSE;
    return TRUE;
}

template <class ForwardIterator, class T>
inline void qFill( ForwardIterator first, ForwardIterator last, const T& val )
{
    for ( ; first != last; ++first )
        *first = val;
}
# 121 "/coolo/prod/qt-copy/include/qtl.h"
template <class InputIterator, class T>
inline InputIterator qFind( InputIterator first, InputIterator last,
                            const T& val )
{
    while ( first != last && *first != val )
        ++first;
    return first;
}

template <class InputIterator, class T, class Size>
inline void qCount( InputIterator first, InputIterator last, const T& value,
                    Size& n )
{
    for ( ; first != last; ++first )
        if ( *first == value )
            ++n;
}

template <class T>
inline void qSwap( T& _value1, T& _value2 )
{
    T tmp = _value1;
    _value1 = _value2;
    _value2 = tmp;
}


template <class InputIterator>
 void qBubbleSort( InputIterator b, InputIterator e )
{

    InputIterator last = e;
    --last;

    if ( last == b )
        return;


    while( b != last ) {
        bool swapped = FALSE;
        InputIterator swap_pos = b;
        InputIterator x = e;
        InputIterator y = x;
        y--;
        do {
            --x;
            --y;
            if ( *x < *y ) {
                swapped = TRUE;
                qSwap( *x, *y );
                swap_pos = y;
            }
        } while( y != b );
        if ( !swapped )
            return;
        b = swap_pos;
        b++;
    }
}


template <class Container>
inline void qBubbleSort( Container &c )
{
  qBubbleSort( c.begin(), c.end() );
}


template <class Value>
 void qHeapSortPushDown( Value* heap, int first, int last )
{
    int r = first;
    while ( r <= last / 2 ) {
        if ( last == 2 * r ) {

            if ( heap[2 * r] < heap[r] )
                qSwap( heap[r], heap[2 * r] );
            r = last;
        } else {

            if ( heap[2 * r] < heap[r] && !(heap[2 * r + 1] < heap[2 * r]) ) {

                qSwap( heap[r], heap[2 * r] );
                r *= 2;
            } else if ( heap[2 * r + 1] < heap[r]
                        && heap[2 * r + 1] < heap[2 * r] ) {

                qSwap( heap[r], heap[2 * r + 1] );
                r = 2 * r + 1;
            } else {
                r = last;
            }
        }
    }
}


template <class InputIterator, class Value>
 void qHeapSortHelper( InputIterator b, InputIterator e, Value, uint n )
{

    InputIterator insert = b;
    Value* realheap = new Value[n];

    Value* heap = realheap - 1;
    int size = 0;
    for( ; insert != e; ++insert ) {
        heap[++size] = *insert;
        int i = size;
        while( i > 1 && heap[i] < heap[i / 2] ) {
            qSwap( heap[i], heap[i / 2] );
            i /= 2;
        }
    }


    for( uint i = n; i > 0; i-- ) {
        *b++ = heap[1];
        if ( i > 1 ) {
            heap[1] = heap[i];
            qHeapSortPushDown( heap, 1, (int)i - 1 );
        }
    }

    delete[] realheap;
}


template <class InputIterator>
 void qHeapSort( InputIterator b, InputIterator e )
{

    if ( b == e )
        return;


    InputIterator it = b;
    uint n = 0;
    while ( it != e ) {
        ++n;
        ++it;
    }



    qHeapSortHelper( b, e, *b, n );
}


template <class Container>
 void qHeapSort( Container &c )
{
    if ( c.begin() == c.end() )
        return;



    qHeapSortHelper( c.begin(), c.end(), *(c.begin()), (uint)c.count() );
}

template <class Container>
class QBackInsertIterator
{
public:
    explicit QBackInsertIterator( Container &c )
        : container( &c )
    {
    }

    QBackInsertIterator<Container>&
    operator=( const typename Container::value_type &value )
    {
        container->push_back( value );
        return *this;
    }

    QBackInsertIterator<Container>& operator*()
    {
        return *this;
    }

    QBackInsertIterator<Container>& operator++()
    {
        return *this;
    }

    QBackInsertIterator<Container>& operator++(int)
    {
        return *this;
    }

protected:
    Container *container;
};

template <class Container>
inline QBackInsertIterator<Container> qBackInserter( Container &c )
{
    return QBackInsertIterator<Container>( c );
}
# 43 "/coolo/prod/qt-copy/include/qvaluelist.h" 2
# 58 "/coolo/prod/qt-copy/include/qvaluelist.h"
template <class T>
class QValueListNode
{
public:
    QValueListNode( const T& t ) : data( t ) { }
    QValueListNode() { }





    QValueListNode<T>* next;
    QValueListNode<T>* prev;
    T data;
};

template<class T>
class QValueListIterator
{
 public:



    typedef QValueListNode<T>* NodePtr;



    typedef T value_type;
    typedef size_t size_type;



    typedef int difference_type;

    typedef T* pointer;
    typedef T& reference;




    NodePtr node;




    QValueListIterator() : node( 0 ) {}
    QValueListIterator( NodePtr p ) : node( p ) {}
    QValueListIterator( const QValueListIterator<T>& it ) : node( it.node ) {}

    bool operator==( const QValueListIterator<T>& it ) const { return node == it.node; }
    bool operator!=( const QValueListIterator<T>& it ) const { return node != it.node; }
    const T& operator*() const { return node->data; }
    T& operator*() { return node->data; }



    QValueListIterator<T>& operator++() {
        node = node->next;
        return *this;
    }

    QValueListIterator<T> operator++(int) {
        QValueListIterator<T> tmp = *this;
        node = node->next;
        return tmp;
    }

    QValueListIterator<T>& operator--() {
        node = node->prev;
        return *this;
    }

    QValueListIterator<T> operator--(int) {
        QValueListIterator<T> tmp = *this;
        node = node->prev;
        return tmp;
    }

    QValueListIterator<T>& operator+=( int j ) {
        while ( j-- )
            node = node->next;
        return *this;
    }

    QValueListIterator<T>& operator-=( int j ) {
        while ( j-- )
            node = node->prev;
        return *this;
    }

};

template<class T>
class QValueListConstIterator
{
 public:



    typedef QValueListNode<T>* NodePtr;



    typedef T value_type;
    typedef size_t size_type;



    typedef int difference_type;

    typedef const T* pointer;
    typedef const T& reference;




    NodePtr node;




    QValueListConstIterator() : node( 0 ) {}
    QValueListConstIterator( NodePtr p ) : node( p ) {}
    QValueListConstIterator( const QValueListConstIterator<T>& it ) : node( it.node ) {}
    QValueListConstIterator( const QValueListIterator<T>& it ) : node( it.node ) {}

    bool operator==( const QValueListConstIterator<T>& it ) const { return node == it.node; }
    bool operator!=( const QValueListConstIterator<T>& it ) const { return node != it.node; }
    const T& operator*() const { return node->data; }



    QValueListConstIterator<T>& operator++() {
        node = node->next;
        return *this;
    }

    QValueListConstIterator<T> operator++(int) {
        QValueListConstIterator<T> tmp = *this;
        node = node->next;
        return tmp;
    }

    QValueListConstIterator<T>& operator--() {
        node = node->prev;
        return *this;
    }

    QValueListConstIterator<T> operator--(int) {
        QValueListConstIterator<T> tmp = *this;
        node = node->prev;
        return tmp;
    }
};

template <class T>
class QValueListPrivate : public QShared
{
public:



    typedef QValueListIterator<T> Iterator;
    typedef QValueListConstIterator<T> ConstIterator;
    typedef QValueListNode<T> Node;
    typedef QValueListNode<T>* NodePtr;
    typedef size_t size_type;




    QValueListPrivate();
    QValueListPrivate( const QValueListPrivate<T>& _p );

    void derefAndDelete()
    {
        if ( deref() )
            delete this;
    }





    ~QValueListPrivate();

    Iterator insert( Iterator it, const T& x );
    Iterator remove( Iterator it );
    NodePtr find( NodePtr start, const T& x ) const;
    int findIndex( NodePtr start, const T& x ) const;
    uint contains( const T& x ) const;
    uint remove( const T& x );
    NodePtr at( size_type i ) const;
    void clear();

    NodePtr node;
    size_type nodes;
};

template <class T>
 QValueListPrivate<T>::QValueListPrivate()
{
    node = new Node; node->next = node->prev = node; nodes = 0;
}

template <class T>
 QValueListPrivate<T>::QValueListPrivate( const QValueListPrivate<T>& _p )
    : QShared()
{
    node = new Node; node->next = node->prev = node; nodes = 0;
    Iterator b( _p.node->next );
    Iterator e( _p.node );
    Iterator i( node );
    while( b != e )
        insert( i, *b++ );
}

template <class T>
 QValueListPrivate<T>::~QValueListPrivate() {
    NodePtr p = node->next;
    while( p != node ) {
        NodePtr x = p->next;
        delete p;
        p = x;
    }
    delete node;
}

template <class T>
 typename QValueListPrivate<T>::Iterator QValueListPrivate<T>::insert( typename QValueListPrivate<T>::Iterator it, const T& x )
{
    NodePtr p = new Node( x );
    p->next = it.node;
    p->prev = it.node->prev;
    it.node->prev->next = p;
    it.node->prev = p;
    nodes++;
    return p;
}

template <class T>
 typename QValueListPrivate<T>::Iterator QValueListPrivate<T>::remove( typename QValueListPrivate<T>::Iterator it )
{
    ((it.node != node) ? (void)0 : qWarning("ASSERT: \"%s\" in %s (%d)","it.node != node","/coolo/prod/qt-copy/include/qvaluelist.h",301));
    NodePtr next = it.node->next;
    NodePtr prev = it.node->prev;
    prev->next = next;
    next->prev = prev;
    delete it.node;
    nodes--;
    return Iterator( next );
}

template <class T>
 typename QValueListPrivate<T>::NodePtr QValueListPrivate<T>::find( typename QValueListPrivate<T>::NodePtr start, const T& x ) const
{
    ConstIterator first( start );
    ConstIterator last( node );
    while( first != last) {
        if ( *first == x )
            return first.node;
        ++first;
    }
    return last.node;
}

template <class T>
 int QValueListPrivate<T>::findIndex( typename QValueListPrivate<T>::NodePtr start, const T& x ) const
{
    ConstIterator first( start );
    ConstIterator last( node );
    int pos = 0;
    while( first != last) {
        if ( *first == x )
            return pos;
        ++first;
        ++pos;
    }
    return -1;
}

template <class T>
 uint QValueListPrivate<T>::contains( const T& x ) const
{
    uint result = 0;
    Iterator first = Iterator( node->next );
    Iterator last = Iterator( node );
    while( first != last) {
        if ( *first == x )
            ++result;
        ++first;
    }
    return result;
}

template <class T>
 uint QValueListPrivate<T>::remove( const T& x )
{
    uint result = 0;
    Iterator first = Iterator( node->next );
    Iterator last = Iterator( node );
    while( first != last) {
        if ( *first == x ) {
            first = remove( first );
            ++result;
        } else
            ++first;
    }
    return result;
}

template <class T>
 typename QValueListPrivate<T>::NodePtr QValueListPrivate<T>::at( size_type i ) const
{
    ((i <= nodes) ? (void)0 : qWarning("ASSERT: \"%s\" in %s (%d)","i <= nodes","/coolo/prod/qt-copy/include/qvaluelist.h",372));
    NodePtr p = node->next;
    for( size_type x = 0; x < i; ++x )
        p = p->next;
    return p;
}

template <class T>
 void QValueListPrivate<T>::clear()
{
    nodes = 0;
    NodePtr p = node->next;
    while( p != node ) {
        NodePtr next = p->next;
        delete p;
        p = next;
    }
    node->next = node->prev = node;
}












template <class T> class QDeepCopy;

template <class T>
class QValueList
{
public:



    typedef QValueListIterator<T> iterator;
    typedef QValueListConstIterator<T> const_iterator;
    typedef T value_type;
    typedef value_type* pointer;
    typedef const value_type* const_pointer;
    typedef value_type& reference;
    typedef const value_type& const_reference;
    typedef size_t size_type;



    typedef int difference_type;





    QValueList() { sh = new QValueListPrivate<T>; }
    QValueList( const QValueList<T>& l ) { sh = l.sh; sh->ref(); }







    ~QValueList() { sh->derefAndDelete(); }

    QValueList<T>& operator= ( const QValueList<T>& l )
    {
        l.sh->ref();
        sh->derefAndDelete();
        sh = l.sh;
        return *this;
    }
# 471 "/coolo/prod/qt-copy/include/qvaluelist.h"
    bool operator== ( const QValueList<T>& l ) const;
    bool operator!= ( const QValueList<T>& l ) const { return !( *this == l ); }
    iterator begin() { detach(); return iterator( sh->node->next ); }
    const_iterator begin() const { return const_iterator( sh->node->next ); }
    const_iterator constBegin() const { return const_iterator( sh->node->next ); }
    iterator end() { detach(); return iterator( sh->node ); }
    const_iterator end() const { return const_iterator( sh->node ); }
    const_iterator constEnd() const { return const_iterator( sh->node ); }
    iterator insert( iterator it, const T& x ) { detach(); return sh->insert( it, x ); }
    uint remove( const T& x ) { detach(); return sh->remove( x ); }
    void clear();


    QValueList<T>& operator<< ( const T& x )
    {
        append( x );
        return *this;
    }

    size_type size() const { return sh->nodes; }
    bool empty() const { return sh->nodes == 0; }
    void push_front( const T& x ) { detach(); sh->insert( begin(), x ); }
    void push_back( const T& x ) { detach(); sh->insert( end(), x ); }
    iterator erase( iterator pos ) { detach(); return sh->remove( pos ); }
    iterator erase( iterator first, iterator last );
    reference front() { ; return *begin(); }
    const_reference front() const { ; return *begin(); }
    reference back() { ; return *(--end()); }
    const_reference back() const { ; return *(--end()); }
    void pop_front() { ; erase( begin() ); }
    void pop_back() {
        ;
        iterator tmp = end();
        erase( --tmp );
    }
    void insert( iterator pos, size_type n, const T& x );
# 517 "/coolo/prod/qt-copy/include/qvaluelist.h"
    QValueList<T> operator+ ( const QValueList<T>& l ) const;
    QValueList<T>& operator+= ( const QValueList<T>& l );

    iterator fromLast() { detach(); return iterator( sh->node->prev ); }
    const_iterator fromLast() const { return const_iterator( sh->node->prev ); }

    bool isEmpty() const { return ( sh->nodes == 0 ); }

    iterator append( const T& x ) { detach(); return sh->insert( end(), x ); }
    iterator prepend( const T& x ) { detach(); return sh->insert( begin(), x ); }

    iterator remove( iterator it ) { detach(); return sh->remove( it ); }

    T& first() { ; detach(); return sh->node->next->data; }
    const T& first() const { ; return sh->node->next->data; }
    T& last() { ; detach(); return sh->node->prev->data; }
    const T& last() const { ; return sh->node->prev->data; }

    T& operator[] ( size_type i ) { ; detach(); return sh->at(i)->data; }
    const T& operator[] ( size_type i ) const { ; return sh->at(i)->data; }
    iterator at( size_type i ) { ; detach(); return iterator( sh->at(i) ); }
    const_iterator at( size_type i ) const { ; return const_iterator( sh->at(i) ); }
    iterator find ( const T& x ) { detach(); return iterator( sh->find( sh->node->next, x) ); }
    const_iterator find ( const T& x ) const { return const_iterator( sh->find( sh->node->next, x) ); }
    iterator find ( iterator it, const T& x ) { detach(); return iterator( sh->find( it.node, x ) ); }
    const_iterator find ( const_iterator it, const T& x ) const { return const_iterator( sh->find( it.node, x ) ); }
    int findIndex( const T& x ) const { return sh->findIndex( sh->node->next, x) ; }
    size_type contains( const T& x ) const { return sh->contains( x ); }

    size_type count() const { return sh->nodes; }

    QValueList<T>& operator+= ( const T& x )
    {
        append( x );
        return *this;
    }
    typedef QValueListIterator<T> Iterator;
    typedef QValueListConstIterator<T> ConstIterator;
    typedef T ValueType;

protected:



    void detach() { if ( sh->count > 1 ) detachInternal(); }




    QValueListPrivate<T>* sh;

private:
    void detachInternal();

    friend class QDeepCopy< QValueList<T> >;
};

template <class T>
 bool QValueList<T>::operator== ( const QValueList<T>& l ) const
{
    if ( size() != l.size() )
        return FALSE;
    const_iterator it2 = begin();
    const_iterator it = l.begin();
    for( ; it != l.end(); ++it, ++it2 )
        if ( !( *it == *it2 ) )
            return FALSE;
    return TRUE;
}

template <class T>
 void QValueList<T>::clear()
{
    if ( sh->count == 1 ) sh->clear(); else { sh->deref(); sh = new QValueListPrivate<T>; }
}

template <class T>
 typename QValueList<T>::iterator QValueList<T>::erase( typename QValueList<T>::iterator first, typename QValueList<T>::iterator last )
{
    while ( first != last )
        erase( first++ );
    return last;
}


template <class T>
 void QValueList<T>::insert( typename QValueList<T>::iterator pos, size_type n, const T& x )
{
    for ( ; n > 0; --n )
        insert( pos, x );
}

template <class T>
 QValueList<T> QValueList<T>::operator+ ( const QValueList<T>& l ) const
{
    QValueList<T> l2( *this );
    for( const_iterator it = l.begin(); it != l.end(); ++it )
        l2.append( *it );
    return l2;
}

template <class T>
 QValueList<T>& QValueList<T>::operator+= ( const QValueList<T>& l )
{
    for( const_iterator it = l.begin(); it != l.end(); ++it )
        append( *it );
    return *this;
}

template <class T>
 void QValueList<T>::detachInternal()
{
    sh->deref(); sh = new QValueListPrivate<T>( *sh );
}


template <class T>
 QDataStream& operator>>( QDataStream& s, QValueList<T>& l )
{
    l.clear();
    Q_UINT32 c;
    s >> c;
    for( Q_UINT32 i = 0; i < c; ++i )
    {
        T t;
        s >> t;
        l.append( t );
        if ( s.atEnd() )
            break;
    }
    return s;
}

template <class T>
 QDataStream& operator<<( QDataStream& s, const QValueList<T>& l )
{
    s << (Q_UINT32)l.size();
    QValueListConstIterator<T> it = l.begin();
    for( ; it != l.end(); ++it )
        s << *it;
    return s;
}


# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 664 "/coolo/prod/qt-copy/include/qvaluelist.h" 2
# 47 "/coolo/prod/qt-copy/include/qmap.h" 2
# 56 "/coolo/prod/qt-copy/include/qmap.h"
struct QMapNodeBase
{
    enum Color { Red, Black };

    QMapNodeBase* left;
    QMapNodeBase* right;
    QMapNodeBase* parent;

    Color color;

    QMapNodeBase* minimum() {
        QMapNodeBase* x = this;
        while ( x->left )
            x = x->left;
        return x;
    }

    QMapNodeBase* maximum() {
        QMapNodeBase* x = this;
        while ( x->right )
            x = x->right;
        return x;
    }
};


template <class K, class T>
struct QMapNode : public QMapNodeBase
{
    QMapNode( const K& _key, const T& _data ) { data = _data; key = _key; }
    QMapNode( const K& _key ) { key = _key; }
    QMapNode( const QMapNode<K,T>& _n ) { key = _n.key; data = _n.data; }
    QMapNode() { }
    T data;
    K key;
};


template<class K, class T>
class QMapIterator
{
 public:



    typedef QMapNode< K, T >* NodePtr;



    typedef T value_type;



    typedef int difference_type;

    typedef T* pointer;
    typedef T& reference;




    QMapNode<K,T>* node;




    QMapIterator() : node( 0 ) {}
    QMapIterator( QMapNode<K,T>* p ) : node( p ) {}
    QMapIterator( const QMapIterator<K,T>& it ) : node( it.node ) {}

    bool operator==( const QMapIterator<K,T>& it ) const { return node == it.node; }
    bool operator!=( const QMapIterator<K,T>& it ) const { return node != it.node; }
    T& operator*() { return node->data; }
    const T& operator*() const { return node->data; }



    const K& key() const { return node->key; }
    T& data() { return node->data; }
    const T& data() const { return node->data; }

private:
    int inc();
    int dec();

public:
    QMapIterator<K,T>& operator++() {
        inc();
        return *this;
    }

    QMapIterator<K,T> operator++(int) {
        QMapIterator<K,T> tmp = *this;
        inc();
        return tmp;
    }

    QMapIterator<K,T>& operator--() {
        dec();
        return *this;
    }

    QMapIterator<K,T> operator--(int) {
        QMapIterator<K,T> tmp = *this;
        dec();
        return tmp;
    }
};

template <class K, class T>
 int QMapIterator<K,T>::inc()
{
    QMapNodeBase* tmp = node;
    if ( tmp->right ) {
        tmp = tmp->right;
        while ( tmp->left )
            tmp = tmp->left;
    } else {
        QMapNodeBase* y = tmp->parent;
        while (tmp == y->right) {
            tmp = y;
            y = y->parent;
        }
        if (tmp->right != y)
            tmp = y;
    }
    node = (NodePtr)tmp;
    return 0;
}

template <class K, class T>
 int QMapIterator<K,T>::dec()
{
    QMapNodeBase* tmp = node;
    if (tmp->color == QMapNodeBase::Red &&
        tmp->parent->parent == tmp ) {
        tmp = tmp->right;
    } else if (tmp->left != 0) {
        QMapNodeBase* y = tmp->left;
        while ( y->right )
            y = y->right;
        tmp = y;
    } else {
        QMapNodeBase* y = tmp->parent;
        while (tmp == y->left) {
            tmp = y;
            y = y->parent;
        }
        tmp = y;
    }
    node = (NodePtr)tmp;
    return 0;
}

template<class K, class T>
class QMapConstIterator
{
 public:



    typedef QMapNode< K, T >* NodePtr;



    typedef T value_type;



    typedef int difference_type;

    typedef const T* pointer;
    typedef const T& reference;





    QMapNode<K,T>* node;




    QMapConstIterator() : node( 0 ) {}
    QMapConstIterator( QMapNode<K,T>* p ) : node( p ) {}
    QMapConstIterator( const QMapConstIterator<K,T>& it ) : node( it.node ) {}
    QMapConstIterator( const QMapIterator<K,T>& it ) : node( it.node ) {}

    bool operator==( const QMapConstIterator<K,T>& it ) const { return node == it.node; }
    bool operator!=( const QMapConstIterator<K,T>& it ) const { return node != it.node; }
    const T& operator*() const { return node->data; }



    const K& key() const { return node->key; }
    const T& data() const { return node->data; }

private:
    int inc();
    int dec();

public:
    QMapConstIterator<K,T>& operator++() {
        inc();
        return *this;
    }

    QMapConstIterator<K,T> operator++(int) {
        QMapConstIterator<K,T> tmp = *this;
        inc();
        return tmp;
    }

    QMapConstIterator<K,T>& operator--() {
        dec();
        return *this;
    }

    QMapConstIterator<K,T> operator--(int) {
        QMapConstIterator<K,T> tmp = *this;
        dec();
        return tmp;
    }
};

template <class K, class T>
 int QMapConstIterator<K,T>::inc()
{
    QMapNodeBase* tmp = node;
    if ( tmp->right ) {
        tmp = tmp->right;
        while ( tmp->left )
            tmp = tmp->left;
    } else {
        QMapNodeBase* y = tmp->parent;
        while (tmp == y->right) {
            tmp = y;
            y = y->parent;
        }
        if (tmp->right != y)
            tmp = y;
    }
    node = (NodePtr)tmp;
    return 0;
}

template <class K, class T>
 int QMapConstIterator<K,T>::dec()
{
    QMapNodeBase* tmp = node;
    if (tmp->color == QMapNodeBase::Red &&
        tmp->parent->parent == tmp ) {
        tmp = tmp->right;
    } else if (tmp->left != 0) {
        QMapNodeBase* y = tmp->left;
        while ( y->right )
            y = y->right;
        tmp = y;
    } else {
        QMapNodeBase* y = tmp->parent;
        while (tmp == y->left) {
            tmp = y;
            y = y->parent;
        }
        tmp = y;
    }
    node = (NodePtr)tmp;
    return 0;
}


class QMapPrivateBase : public QShared
{
public:
    QMapPrivateBase() {
        node_count = 0;
    }
    QMapPrivateBase( const QMapPrivateBase* _map) {
        node_count = _map->node_count;
    }




    void rotateLeft( QMapNodeBase* x, QMapNodeBase*& root);
    void rotateRight( QMapNodeBase* x, QMapNodeBase*& root );
    void rebalance( QMapNodeBase* x, QMapNodeBase*& root );
    QMapNodeBase* removeAndRebalance( QMapNodeBase* z, QMapNodeBase*& root,
                                      QMapNodeBase*& leftmost,
                                      QMapNodeBase*& rightmost );




    int node_count;
};


template <class Key, class T>
class QMapPrivate : public QMapPrivateBase
{
public:



    typedef QMapIterator< Key, T > Iterator;
    typedef QMapConstIterator< Key, T > ConstIterator;
    typedef QMapNode< Key, T > Node;
    typedef QMapNode< Key, T >* NodePtr;




    QMapPrivate();
    QMapPrivate( const QMapPrivate< Key, T >* _map );
    ~QMapPrivate() { clear(); delete header; }

    NodePtr copy( NodePtr p );
    void clear();
    void clear( NodePtr p );

    Iterator begin() { return Iterator( (NodePtr)(header->left ) ); }
    Iterator end() { return Iterator( header ); }
    ConstIterator begin() const { return ConstIterator( (NodePtr)(header->left ) ); }
    ConstIterator end() const { return ConstIterator( header ); }

    ConstIterator find(const Key& k) const;

    void remove( Iterator it ) {
        NodePtr del = (NodePtr) removeAndRebalance( it.node, header->parent, header->left, header->right );
        delete del;
        --node_count;
    }
# 414 "/coolo/prod/qt-copy/include/qmap.h"
    Iterator insertSingle( const Key& k );
    Iterator insert( QMapNodeBase* x, QMapNodeBase* y, const Key& k );

protected:



    const Key& key( QMapNodeBase* b ) const { return ((NodePtr)b)->key; }




    NodePtr header;
};


template <class Key, class T>
 QMapPrivate<Key,T>::QMapPrivate() {
    header = new Node;
    header->color = QMapNodeBase::Red;
    header->parent = 0;
    header->left = header->right = header;
}
template <class Key, class T>
 QMapPrivate<Key,T>::QMapPrivate( const QMapPrivate< Key, T >* _map ) : QMapPrivateBase( _map ) {
    header = new Node;
    header->color = QMapNodeBase::Red;
    if ( _map->header->parent == 0 ) {
        header->parent = 0;
        header->left = header->right = header;
    } else {
        header->parent = copy( (NodePtr)(_map->header->parent) );
        header->parent->parent = header;
        header->left = header->parent->minimum();
        header->right = header->parent->maximum();
    }
}

template <class Key, class T>
 typename QMapPrivate<Key,T>::NodePtr QMapPrivate<Key,T>::copy( typename QMapPrivate<Key,T>::NodePtr p )
{
    if ( !p )
        return 0;
    NodePtr n = new Node( *p );
    n->color = p->color;
    if ( p->left ) {
        n->left = copy( (NodePtr)(p->left) );
        n->left->parent = n;
    } else {
        n->left = 0;
    }
    if ( p->right ) {
        n->right = copy( (NodePtr)(p->right) );
        n->right->parent = n;
    } else {
        n->right = 0;
    }
    return n;
}

template <class Key, class T>
 void QMapPrivate<Key,T>::clear()
{
    clear( (NodePtr)(header->parent) );
    header->color = QMapNodeBase::Red;
    header->parent = 0;
    header->left = header->right = header;
    node_count = 0;
}

template <class Key, class T>
 void QMapPrivate<Key,T>::clear( typename QMapPrivate<Key,T>::NodePtr p )
{
    while ( p != 0 ) {
        clear( (NodePtr)p->right );
        NodePtr y = (NodePtr)p->left;
        delete p;
        p = y;
    }
}

template <class Key, class T>
 typename QMapPrivate<Key,T>::ConstIterator QMapPrivate<Key,T>::find(const Key& k) const
{
    QMapNodeBase* y = header;
    QMapNodeBase* x = header->parent;

    while ( x != 0 ) {

        if ( !( key(x) < k ) ) {
            y = x;
            x = x->left;
        } else {
            x = x->right;
        }
    }



    if ( y == header || k < key(y) )
        return ConstIterator( header );
    return ConstIterator( (NodePtr)y );
}

template <class Key, class T>
 typename QMapPrivate<Key,T>::Iterator QMapPrivate<Key,T>::insertSingle( const Key& k )
{

    QMapNodeBase* y = header;
    QMapNodeBase* x = header->parent;
    bool result = TRUE;
    while ( x != 0 ) {
        result = ( k < key(x) );
        y = x;
        x = result ? x->left : x->right;
    }

    Iterator j( (NodePtr)y );
    if ( result ) {

        if ( j == begin() ) {
            return insert(x, y, k );
        } else {

            --j;
        }
    }

    if ( (j.node->key) < k )
        return insert(x, y, k );

    return j;
}


template <class Key, class T>
 typename QMapPrivate<Key,T>::Iterator QMapPrivate<Key,T>::insert( QMapNodeBase* x, QMapNodeBase* y, const Key& k )
{
    NodePtr z = new Node( k );
    if (y == header || x != 0 || k < key(y) ) {
        y->left = z;
        if ( y == header ) {
            header->parent = z;
            header->right = z;
        } else if ( y == header->left )
            header->left = z;
    } else {
        y->right = z;
        if ( y == header->right )
            header->right = z;
    }
    z->parent = y;
    z->left = 0;
    z->right = 0;
    rebalance( z, header->parent );
    ++node_count;
    return Iterator(z);
}













template <class T> class QDeepCopy;

template<class Key, class T>
class QMap
{
public:



    typedef Key key_type;
    typedef T mapped_type;
    typedef QPair<const key_type, mapped_type> value_type;
    typedef value_type* pointer;
    typedef const value_type* const_pointer;
    typedef value_type& reference;
    typedef const value_type& const_reference;



    typedef int difference_type;

    typedef size_t size_type;
    typedef QMapIterator<Key,T> iterator;
    typedef QMapConstIterator<Key,T> const_iterator;
    typedef QPair<iterator,bool> insert_pair;

    typedef QMapIterator< Key, T > Iterator;
    typedef QMapConstIterator< Key, T > ConstIterator;
    typedef T ValueType;
    typedef QMapPrivate< Key, T > Priv;




    QMap()
    {
        sh = new QMapPrivate< Key, T >;
    }
    QMap( const QMap<Key,T>& m )
    {
        sh = m.sh; sh->ref();
    }
# 641 "/coolo/prod/qt-copy/include/qmap.h"
    ~QMap()
    {
        if ( sh->deref() )
            delete sh;
    }
    QMap<Key,T>& operator= ( const QMap<Key,T>& m );
# 660 "/coolo/prod/qt-copy/include/qmap.h"
    iterator begin() { detach(); return sh->begin(); }
    iterator end() { detach(); return sh->end(); }
    const_iterator begin() const { return ((const Priv*)sh)->begin(); }
    const_iterator end() const { return ((const Priv*)sh)->end(); }
    const_iterator constBegin() const { return begin(); }
    const_iterator constEnd() const { return end(); }

    iterator replace( const Key& k, const T& v )
    {
        remove( k );
        return insert( k, v );
    }

    size_type size() const
    {
        return sh->node_count;
    }
    bool empty() const
    {
        return sh->node_count == 0;
    }
    QPair<iterator,bool> insert( const value_type& x );

    void erase( iterator it )
    {
        detach();
        sh->remove( it );
    }
    void erase( const key_type& k );
    size_type count( const key_type& k ) const;
    T& operator[] ( const Key& k );
    void clear();

    iterator find ( const Key& k )
    {
        detach();
        return iterator( sh->find( k ).node );
    }
    const_iterator find ( const Key& k ) const { return sh->find( k ); }

    const T& operator[] ( const Key& k ) const
        { ; return sh->find( k ).data(); }
    bool contains ( const Key& k ) const
        { return find( k ) != end(); }


    size_type count() const { return sh->node_count; }

    QValueList<Key> keys() const {
        QValueList<Key> r;
        for (const_iterator i=begin(); i!=end(); ++i)
            r.append(i.key());
        return r;
    }

    QValueList<T> values() const {
        QValueList<T> r;
        for (const_iterator i=begin(); i!=end(); ++i)
            r.append(*i);
        return r;
    }

    bool isEmpty() const { return sh->node_count == 0; }

    iterator insert( const Key& key, const T& value, bool overwrite = TRUE );
    void remove( iterator it ) { detach(); sh->remove( it ); }
    void remove( const Key& k );
# 735 "/coolo/prod/qt-copy/include/qmap.h"
protected:



    void detach() { if ( sh->count > 1 ) detachInternal(); }

    Priv* sh;
private:
    void detachInternal();

    friend class QDeepCopy< QMap<Key,T> >;
};

template<class Key, class T>
 QMap<Key,T>& QMap<Key,T>::operator= ( const QMap<Key,T>& m )
{
    m.sh->ref();
    if ( sh->deref() )
        delete sh;
    sh = m.sh;
    return *this;
}

template<class Key, class T>
 typename QMap<Key,T>::insert_pair QMap<Key,T>::insert( const typename QMap<Key,T>::value_type& x )
{
    detach();
    size_type n = size();
    iterator it = sh->insertSingle( x.first );
    bool inserted = FALSE;
    if ( n < size() ) {
        inserted = TRUE;
        it.data() = x.second;
    }
    return QPair<iterator,bool>( it, inserted );
}

template<class Key, class T>
 void QMap<Key,T>::erase( const Key& k )
{
    detach();
    iterator it( sh->find( k ).node );
    if ( it != end() )
        sh->remove( it );
}

template<class Key, class T>
 typename QMap<Key,T>::size_type QMap<Key,T>::count( const Key& k ) const
{
    const_iterator it( sh->find( k ).node );
    if ( it != end() ) {
        size_type c = 0;
        while ( it != end() ) {
            ++it;
            ++c;
        }
        return c;
    }
    return 0;
}

template<class Key, class T>
 T& QMap<Key,T>::operator[] ( const Key& k )
{
    detach();
    QMapNode<Key,T>* p = sh->find( k ).node;
    if ( p != sh->end().node )
        return p->data;
    return insert( k, T() ).data();
}

template<class Key, class T>
 void QMap<Key,T>::clear()
{
    if ( sh->count == 1 )
        sh->clear();
    else {
        sh->deref();
        sh = new QMapPrivate<Key,T>;
    }
}

template<class Key, class T>
 typename QMap<Key,T>::iterator QMap<Key,T>::insert( const Key& key, const T& value, bool overwrite )
{
    detach();
    size_type n = size();
    iterator it = sh->insertSingle( key );
    if ( overwrite || n < size() )
        it.data() = value;
    return it;
}

template<class Key, class T>
 void QMap<Key,T>::remove( const Key& k )
{
    detach();
    iterator it( sh->find( k ).node );
    if ( it != end() )
        sh->remove( it );
}

template<class Key, class T>
 void QMap<Key,T>::detachInternal()
{
    sh->deref(); sh = new QMapPrivate<Key,T>( sh );
}



template<class Key, class T>
 QDataStream& operator>>( QDataStream& s, QMap<Key,T>& m ) {
    m.clear();
    Q_UINT32 c;
    s >> c;
    for( Q_UINT32 i = 0; i < c; ++i ) {
        Key k; T t;
        s >> k >> t;
        m.insert( k, t );
        if ( s.atEnd() )
            break;
    }
    return s;
}


template<class Key, class T>
 QDataStream& operator<<( QDataStream& s, const QMap<Key,T>& m ) {
    s << (Q_UINT32)m.size();
    QMapConstIterator<Key,T> it = m.begin();
    for( ; it != m.end(); ++it )
        s << it.key() << it.data();
    return s;
}


# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 873 "/coolo/prod/qt-copy/include/qmap.h" 2
# 44 "/coolo/prod/qt-copy/include/qmime.h" 2




class QImageDrag;
class QTextDrag;

class QMimeSource
{
    friend class QClipboardData;

public:
    QMimeSource();
    virtual ~QMimeSource();
    virtual const char* format( int n = 0 ) const = 0;
    virtual bool provides( const char* ) const;
    virtual QByteArray encodedData( const char* ) const = 0;
    int serialNumber() const;

private:
    int ser_no;
    enum { NoCache, Text, Graphics } cacheType;
    union
    {
        struct
        {
            QString *str;
            QCString *subtype;
        } txt;
        struct
        {
            QImage *img;
            QPixmap *pix;
        } gfx;
    } cache;
    void clearCache();


    friend class QImageDrag;
    friend class QTextDrag;

};

inline int QMimeSource::serialNumber() const
{ return ser_no; }

class QStringList;
class QMimeSourceFactoryData;

class QMimeSourceFactory {
public:
    QMimeSourceFactory();
    virtual ~QMimeSourceFactory();

    static QMimeSourceFactory* defaultFactory();
    static void setDefaultFactory( QMimeSourceFactory* );
    static QMimeSourceFactory* takeDefaultFactory();
    static void addFactory( QMimeSourceFactory *f );
    static void removeFactory( QMimeSourceFactory *f );

    virtual const QMimeSource* data(const QString& abs_name) const;
    virtual QString makeAbsolute(const QString& abs_or_rel_name, const QString& context) const;
    const QMimeSource* data(const QString& abs_or_rel_name, const QString& context) const;

    virtual void setText( const QString& abs_name, const QString& text );
    virtual void setImage( const QString& abs_name, const QImage& im );
    virtual void setPixmap( const QString& abs_name, const QPixmap& pm );
    virtual void setData( const QString& abs_name, QMimeSource* data );
    virtual void setFilePath( const QStringList& );
    virtual QStringList filePath() const;
    void addFilePath( const QString& );
    virtual void setExtensionType( const QString& ext, const char* mimetype );

private:
    QMimeSource *dataInternal(const QString& abs_name, const QMap<QString, QString> &extensions ) const;
    QMimeSourceFactoryData* d;
};
# 46 "/coolo/prod/qt-copy/include/qevent.h" 2



class QEvent: public Qt
{
public:
    enum Type {
# 61 "/coolo/prod/qt-copy/include/qevent.h"
        None = 0,


        Timer = 1,
        MouseButtonPress = 2,
        MouseButtonRelease = 3,
        MouseButtonDblClick = 4,
        MouseMove = 5,
        KeyPress = 6,
        KeyRelease = 7,
        FocusIn = 8,
        FocusOut = 9,
        Enter = 10,
        Leave = 11,
        Paint = 12,
        Move = 13,
        Resize = 14,
        Create = 15,
        Destroy = 16,
        Show = 17,
        Hide = 18,
        Close = 19,
        Quit = 20,
        Reparent = 21,
        ShowMinimized = 22,
        ShowNormal = 23,
        WindowActivate = 24,
        WindowDeactivate = 25,
        ShowToParent = 26,
        HideToParent = 27,
        ShowMaximized = 28,
        ShowFullScreen = 29,
        Accel = 30,
        Wheel = 31,
        AccelAvailable = 32,
        CaptionChange = 33,
        IconChange = 34,
        ParentFontChange = 35,
        ApplicationFontChange = 36,
        ParentPaletteChange = 37,
        ApplicationPaletteChange = 38,
        PaletteChange = 39,
        Clipboard = 40,
        Speech = 42,
        SockAct = 50,
        AccelOverride = 51,
        DeferredDelete = 52,
        DragEnter = 60,
        DragMove = 61,
        DragLeave = 62,
        Drop = 63,
        DragResponse = 64,
        ChildInserted = 70,
        ChildRemoved = 71,
        LayoutHint = 72,
        ShowWindowRequest = 73,
        ActivateControl = 80,
        DeactivateControl = 81,
        ContextMenu = 82,
        IMStart = 83,
        IMCompose = 84,
        IMEnd = 85,
        Accessibility = 86,
        TabletMove = 87,
        LocaleChange = 88,
        LanguageChange = 89,
        LayoutDirectionChange = 90,
        Style = 91,
        TabletPress = 92,
        TabletRelease = 93,
        User = 1000,
        MaxUser = 65535
    };


    QEvent( Type type ) : t(type), posted(FALSE), spont(FALSE) {}
    virtual ~QEvent();
    Type type() const { return t; }
    bool spontaneous() const { return spont; }
protected:
    Type t;
private:
    uint posted : 1;
    uint spont : 1;


    friend class QApplication;
    friend class QAccelManager;
    friend class QBaseApplication;
    friend class QETWidget;
};


class QTimerEvent : public QEvent
{
public:
    QTimerEvent( int timerId )
        : QEvent(Timer), id(timerId) {}
    int timerId() const { return id; }
protected:
    int id;
};


class QMouseEvent : public QEvent
{
public:
    QMouseEvent( Type type, const QPoint &pos, int button, int state );

    QMouseEvent( Type type, const QPoint &pos, const QPoint&globalPos,
                 int button, int state )
        : QEvent(type), p(pos), g(globalPos), b((ushort)button),s((ushort)state),accpt(TRUE) {};

    const QPoint &pos() const { return p; }
    const QPoint &globalPos() const { return g; }
    int x() const { return p.x(); }
    int y() const { return p.y(); }
    int globalX() const { return g.x(); }
    int globalY() const { return g.y(); }
    ButtonState button() const { return (ButtonState) b; }
    ButtonState state() const { return (ButtonState) s; }
    ButtonState stateAfter() const;
    bool isAccepted() const { return accpt; }
    void accept() { accpt = TRUE; }
    void ignore() { accpt = FALSE; }
protected:
    QPoint p;
    QPoint g;
    ushort b;
    ushort s;
    uint accpt:1;
};



class QWheelEvent : public QEvent
{
public:
    QWheelEvent( const QPoint &pos, int delta, int state, Orientation orient = Vertical );
    QWheelEvent( const QPoint &pos, const QPoint& globalPos, int delta, int state, Orientation orient = Vertical )
        : QEvent(Wheel), p(pos), g(globalPos), d(delta), s((ushort)state),
          accpt(TRUE), o(orient) {}
    int delta() const { return d; }
    const QPoint &pos() const { return p; }
    const QPoint &globalPos() const { return g; }
    int x() const { return p.x(); }
    int y() const { return p.y(); }
    int globalX() const { return g.x(); }
    int globalY() const { return g.y(); }
    ButtonState state() const { return ButtonState(s); }
    Orientation orientation() const { return o; }
    bool isAccepted() const { return accpt; }
    void accept() { accpt = TRUE; }
    void ignore() { accpt = FALSE; }
protected:
    QPoint p;
    QPoint g;
    int d;
    ushort s;
    bool accpt;
    Orientation o;
};


class QTabletEvent : public QEvent
{
public:
    enum TabletDevice { NoDevice = -1, Puck, Stylus, Eraser };
    QTabletEvent( Type t, const QPoint &pos, const QPoint &globalPos, int device,
                  int pressure, int xTilt, int yTilt, const QPair<int,int> &uId );
    QTabletEvent( const QPoint &pos, const QPoint &globalPos, int device,
                  int pressure, int xTilt, int yTilt, const QPair<int,int> &uId )
        : QEvent( TabletMove ), mPos( pos ), mGPos( globalPos ), mDev( device ),
          mPress( pressure ), mXT( xTilt ), mYT( yTilt ), mType( uId.first ),
          mPhy( uId.second ), mbAcc(TRUE)
    {}
    int pressure() const { return mPress; }
    int xTilt() const { return mXT; }
    int yTilt() const { return mYT; }
    const QPoint &pos() const { return mPos; }
    const QPoint &globalPos() const { return mGPos; }
    int x() const { return mPos.x(); }
    int y() const { return mPos.y(); }
    int globalX() const { return mGPos.x(); }
    int globalY() const { return mGPos.y(); }
    TabletDevice device() const { return TabletDevice(mDev); }
    int isAccepted() const { return mbAcc; }
    void accept() { mbAcc = TRUE; }
    void ignore() { mbAcc = FALSE; }
    QPair<int,int> uniqueId() { return QPair<int,int>( mType, mPhy); }
protected:
    QPoint mPos;
    QPoint mGPos;
    int mDev,
        mPress,
        mXT,
        mYT,
        mType,
        mPhy;
    bool mbAcc;

};

class QKeyEvent : public QEvent
{
public:
    QKeyEvent( Type type, int key, int ascii, int state,
                const QString& text=QString::null, bool autorep=FALSE, ushort count=1 )
        : QEvent(type), txt(text), k((ushort)key), s((ushort)state),
            a((uchar)ascii), accpt(TRUE), autor(autorep), c(count)
    {
        if ( key >= Key_Back && key <= Key_MediaLast )
            accpt = FALSE;
    }
    int key() const { return k; }
    int ascii() const { return a; }
    ButtonState state() const { return ButtonState(s); }
    ButtonState stateAfter() const;
    bool isAccepted() const { return accpt; }
    QString text() const { return txt; }
    bool isAutoRepeat() const { return autor; }
    int count() const { return int(c); }
    void accept() { accpt = TRUE; }
    void ignore() { accpt = FALSE; }

protected:
    QString txt;
    ushort k, s;
    uchar a;
    uint accpt:1;
    uint autor:1;
    ushort c;
};


class QFocusEvent : public QEvent
{
public:

    QFocusEvent( Type type )
        : QEvent(type) {}

    bool gotFocus() const { return type() == FocusIn; }
    bool lostFocus() const { return type() == FocusOut; }

    enum Reason { Mouse, Tab, Backtab, ActiveWindow, Popup, Shortcut, Other };
    static Reason reason();
    static void setReason( Reason reason );
    static void resetReason();

private:
    static Reason m_reason;
    static Reason prev_reason;
};


class QPaintEvent : public QEvent
{
public:
    QPaintEvent( const QRegion& paintRegion, bool erased = TRUE)
        : QEvent(Paint),
          rec(paintRegion.boundingRect()),
          reg(paintRegion),
          erase(erased){}
    QPaintEvent( const QRect &paintRect, bool erased = TRUE )
        : QEvent(Paint),
          rec(paintRect),
          reg(paintRect),
          erase(erased){}
    const QRect &rect() const { return rec; }
    const QRegion &region() const { return reg; }
    bool erased() const { return erase; }
protected:
    friend class QApplication;
    friend class QBaseApplication;
    QRect rec;
    QRegion reg;
    bool erase;
};


class QMoveEvent : public QEvent
{
public:
    QMoveEvent( const QPoint &pos, const QPoint &oldPos )
        : QEvent(Move), p(pos), oldp(oldPos) {}
    const QPoint &pos() const { return p; }
    const QPoint &oldPos()const { return oldp;}
protected:
    QPoint p, oldp;
    friend class QApplication;
    friend class QBaseApplication;
};


class QResizeEvent : public QEvent
{
public:
    QResizeEvent( const QSize &size, const QSize &oldSize )
        : QEvent(Resize), s(size), olds(oldSize) {}
    const QSize &size() const { return s; }
    const QSize &oldSize()const { return olds;}
protected:
    QSize s, olds;
    friend class QApplication;
    friend class QBaseApplication;
};


class QCloseEvent : public QEvent
{
public:
    QCloseEvent()
        : QEvent(Close), accpt(FALSE) {}
    bool isAccepted() const { return accpt; }
    void accept() { accpt = TRUE; }
    void ignore() { accpt = FALSE; }
protected:
    bool accpt;
};


class QShowEvent : public QEvent
{
public:
    QShowEvent()
        : QEvent(Show) {}
};


class QHideEvent : public QEvent
{
public:
    QHideEvent()
        : QEvent(Hide) {}
};

class QContextMenuEvent : public QEvent
{
public:
    enum Reason { Mouse, Keyboard, Other };
    QContextMenuEvent( Reason reason, const QPoint &pos, const QPoint &globalPos, int state )
        : QEvent( ContextMenu ), p( pos ), gp( globalPos ), accpt( TRUE ), consum( TRUE ),
        reas( reason ), s((ushort)state) {}
    QContextMenuEvent( Reason reason, const QPoint &pos, int state );

    int x() const { return p.x(); }
    int y() const { return p.y(); }
    int globalX() const { return gp.x(); }
    int globalY() const { return gp.y(); }

    const QPoint& pos() const { return p; }
    const QPoint& globalPos() const { return gp; }

    ButtonState state() const { return (ButtonState) s; }
    bool isAccepted() const { return accpt; }
    bool isConsumed() const { return consum; }
    void consume() { accpt = FALSE; consum = TRUE; }
    void accept() { accpt = TRUE; consum = TRUE; }
    void ignore() { accpt = FALSE; consum = FALSE; }

    Reason reason() const { return Reason( reas ); }

protected:
    QPoint p;
    QPoint gp;
    bool accpt;
    bool consum;
    uint reas:8;
    ushort s;
};


class QIMEvent : public QEvent
{
public:
    QIMEvent( Type type, const QString &text, int cursorPosition )
        : QEvent(type), txt(text), cpos(cursorPosition), a(TRUE) {}
    const QString &text() const { return txt; }
    int cursorPos() const { return cpos; }
    bool isAccepted() const { return a; }
    void accept() { a = TRUE; }
    void ignore() { a = FALSE; }
    int selectionLength() const;

private:
    QString txt;
    int cpos;
    bool a;
};

class QIMComposeEvent : public QIMEvent
{
public:
    QIMComposeEvent( Type type, const QString &text, int cursorPosition,
                     int selLength )
        : QIMEvent( type, text, cursorPosition ), selLen( selLength ) { }

private:
    int selLen;

    friend class QIMEvent;
};

inline int QIMEvent::selectionLength() const
{
    if ( type() != IMCompose ) return 0;
    QIMComposeEvent *that = (QIMComposeEvent *) this;
    return that->selLen;
}
# 479 "/coolo/prod/qt-copy/include/qevent.h"
class QDropEvent : public QEvent, public QMimeSource
{
public:
    QDropEvent( const QPoint& pos, Type typ=Drop )
        : QEvent(typ), p(pos),
          act(0), accpt(0), accptact(0), resv(0),
          d(0)
        {}
    const QPoint &pos() const { return p; }
    bool isAccepted() const { return accpt || accptact; }
    void accept(bool y=TRUE) { accpt = y; }
    void ignore() { accpt = FALSE; }

    bool isActionAccepted() const { return accptact; }
    void acceptAction(bool y=TRUE) { accptact = y; }
    enum Action { Copy, Link, Move, Private, UserAction=100 };
    void setAction( Action a ) { act = (uint)a; }
    Action action() const { return Action(act); }

    QWidget* source() const;
    const char* format( int n = 0 ) const;
    QByteArray encodedData( const char* ) const;
    bool provides( const char* ) const;

    QByteArray data(const char* f) const { return encodedData(f); }

    void setPoint( const QPoint& np ) { p = np; }

protected:
    QPoint p;
    uint act:8;
    uint accpt:1;
    uint accptact:1;
    uint resv:5;
    void * d;
};



class QDragMoveEvent : public QDropEvent
{
public:
    QDragMoveEvent( const QPoint& pos, Type typ=DragMove )
        : QDropEvent(pos,typ),
          rect( pos, QSize( 1, 1 ) ) {}
    QRect answerRect() const { return rect; }
    void accept( bool y=TRUE ) { QDropEvent::accept(y); }
    void accept( const QRect & r) { accpt = TRUE; rect = r; }
    void ignore( const QRect & r) { accpt =FALSE; rect = r; }
    void ignore() { QDropEvent::ignore(); }

protected:
    QRect rect;
};


class QDragEnterEvent : public QDragMoveEvent
{
public:
    QDragEnterEvent( const QPoint& pos ) :
        QDragMoveEvent(pos, DragEnter) { }
};



class QDragResponseEvent : public QEvent
{
public:
    QDragResponseEvent( bool accepted )
        : QEvent(DragResponse), a(accepted) {}
    bool dragAccepted() const { return a; }
protected:
    bool a;
};


class QDragLeaveEvent : public QEvent
{
public:
    QDragLeaveEvent()
        : QEvent(DragLeave) {}
};



class QChildEvent : public QEvent
{
public:
    QChildEvent( Type type, QObject *child )
        : QEvent(type), c(child) {}
    QObject *child() const { return c; }
    bool inserted() const { return t == ChildInserted; }
    bool removed() const { return t == ChildRemoved; }
protected:
    QObject *c;
};


class QCustomEvent : public QEvent
{
public:
    QCustomEvent( int type );
    QCustomEvent( Type type, void *data )
        : QEvent(type), d(data) {};
    void *data() const { return d; }
    void setData( void* data ) { d = data; }
private:
    void *d;
};
# 46 "/coolo/prod/qt-copy/include/qobject.h" 2




class QMetaObject;
class QVariant;
class QMetaProperty;
class QPostEventList;
class QSenderObjectList;
class QObjectPrivate;

class QObjectUserData;

struct QUObject;

class QObject: public Qt
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   

public:
    QObject( QObject *parent=0, const char *name=0 );
    virtual ~QObject();
# 79 "/coolo/prod/qt-copy/include/qobject.h"
    virtual bool event( QEvent * );
    virtual bool eventFilter( QObject *, QEvent * );

    bool isA( const char * ) const;
    bool inherits( const char * ) const;

    const char *name() const;
    const char *name( const char * defaultName ) const;

    virtual void setName( const char *name );
    bool isWidgetType() const { return isWidget; }
    bool highPriority() const { return FALSE; }

    bool signalsBlocked() const { return blockSig; }
    void blockSignals( bool b );

    int startTimer( int interval );
    void killTimer( int id );
    void killTimers();

    QObject *child( const char *objName, const char *inheritsClass = 0, bool recursiveSearch = TRUE );
    const QObjectList *children() const { return childObjects; }

    static const QObjectList *objectTrees();

    QObjectList *queryList( const char *inheritsClass = 0,
                                  const char *objName = 0,
                                  bool regexpMatch = TRUE,
                                  bool recursiveSearch = TRUE ) const;

    virtual void insertChild( QObject * );
    virtual void removeChild( QObject * );

    void installEventFilter( const QObject * );
    void removeEventFilter( const QObject * );

    static bool connect( const QObject *sender, const char *signal,
                          const QObject *receiver, const char *member );
    bool connect( const QObject *sender, const char *signal,
                          const char *member ) const;
    static bool disconnect( const QObject *sender, const char *signal,
                             const QObject *receiver, const char *member );
    bool disconnect( const char *signal=0,
                             const QObject *receiver=0, const char *member=0 );
    bool disconnect( const QObject *receiver, const char *member=0 );
    static void connectInternal( const QObject *sender, int signal_index,
                          const QObject *receiver, int membcode, int member_index );
    static bool disconnectInternal( const QObject *sender, int signal_index,
                             const QObject *receiver, int membcode, int member_index );

    void dumpObjectTree();
    void dumpObjectInfo();


    virtual bool setProperty( const char *name, const QVariant& value );
    virtual QVariant property( const char *name ) const;
# 144 "/coolo/prod/qt-copy/include/qobject.h"
    static uint registerUserData();
    void setUserData( uint id, QObjectUserData* data);
    QObjectUserData* userData( uint id ) const;


protected:
    void destroyed();
    void destroyed( QObject* obj );

public:
    QObject *parent() const { return parentObj; }

public :
    void deleteLater();

private :
    void cleanupEventFilter( QObject* );

protected:
    bool activate_filters( QEvent * );
    QConnectionList *receivers( const char* signal ) const;
    QConnectionList *receivers( int signal ) const;
    void activate_signal( int signal );
    void activate_signal( int signal, int );
    void activate_signal( int signal, double );
    void activate_signal( int signal, QString );
    void activate_signal_bool( int signal, bool );
    void activate_signal( QConnectionList *clist, QUObject *o );

    const QObject *sender();

    virtual void timerEvent( QTimerEvent * );
    virtual void childEvent( QChildEvent * );
    virtual void customEvent( QCustomEvent * );

    virtual void connectNotify( const char *signal );
    virtual void disconnectNotify( const char *signal );
    virtual bool checkConnectArgs( const char *signal, const QObject *receiver,
                                   const char *member );
    static QCString normalizeSignalSlot( const char *signalSlot );

private:
    uint isSignal : 1;
    uint isWidget : 1;
    uint pendTimer : 1;
    uint blockSig : 1;
    uint wasDeleted : 1;
    uint isTree : 1;

    const char *objname;
    QObject *parentObj;
    QObjectList *childObjects;
    QSignalVec *connections;
    QSenderObjectList *senderObjects;
    QObjectList *eventFilters;
    QPostEventList *postedEvents;
    QObjectPrivate* d;

    static QMetaObject* staticQtMetaObject();

    friend class QApplication;
    friend class QBaseApplication;
    friend class QWidget;
    friend class QSignal;

private:

    QObject( const QObject & );
    QObject &operator=( const QObject & );

};



class QObjectUserData {
public:
    virtual ~QObjectUserData();
};



inline bool QObject::connect( const QObject *sender, const char *signal,
                              const char *member ) const
{
    return connect( sender, signal, this, member );
}


inline bool QObject::disconnect( const char *signal,
                                 const QObject *receiver, const char *member )
{
    return disconnect( this, signal, receiver, member );
}


inline bool QObject::disconnect( const QObject *receiver, const char *member )
{
    return disconnect( this, 0, receiver, member );
}
# 257 "/coolo/prod/qt-copy/include/qobject.h"
# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 259 "/coolo/prod/qt-copy/include/qobject.h" 2
# 44 "/coolo/prod/qt-copy/include/qtranslator.h" 2





class QTranslatorPrivate;

class QTranslatorMessage
{
public:
    QTranslatorMessage();
    QTranslatorMessage( const char * context,
                        const char * sourceText,
                        const char * comment,
                        const QString& translation = QString::null );
    QTranslatorMessage( QDataStream & );
    QTranslatorMessage( const QTranslatorMessage & m );

    QTranslatorMessage & operator=( const QTranslatorMessage & m );

    uint hash() const { return h; }
    const char *context() const { return cx; }
    const char *sourceText() const { return st; }
    const char *comment() const { return cm; }

    void setTranslation( const QString & translation ) { tn = translation; }
    QString translation() const { return tn; }

    enum Prefix { NoPrefix, Hash, HashContext, HashContextSourceText,
                  HashContextSourceTextComment };
    void write( QDataStream & s, bool strip = FALSE,
                Prefix prefix = HashContextSourceTextComment ) const;
    Prefix commonPrefix( const QTranslatorMessage& ) const;

    bool operator==( const QTranslatorMessage& m ) const;
    bool operator!=( const QTranslatorMessage& m ) const
    { return !operator==( m ); }
    bool operator<( const QTranslatorMessage& m ) const;
    bool operator<=( const QTranslatorMessage& m ) const
    { return !m.operator<( *this ); }
    bool operator>( const QTranslatorMessage& m ) const
    { return m.operator<( *this ); }
    bool operator>=( const QTranslatorMessage& m ) const
    { return !operator<( m ); }

private:
    uint h;
    QCString cx;
    QCString st;
    QCString cm;
    QString tn;

    enum Tag { Tag_End = 1, Tag_SourceText16, Tag_Translation, Tag_Context16,
               Tag_Hash, Tag_SourceText, Tag_Context, Tag_Comment,
               Tag_Obsolete1 };
};


class QTranslator: public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
    QTranslator( QObject * parent = 0, const char * name = 0 );
    ~QTranslator();






    virtual QTranslatorMessage findMessage( const char *, const char *,
                                            const char * = 0 ) const;

    bool load( const QString & filename,
               const QString & directory = QString::null,
               const QString & search_delimiters = QString::null,
               const QString & suffix = QString::null );
    bool load( const uchar *data, int len ) {
        clear();
        return do_load( data, len );
    }

    void clear();


    enum SaveMode { Everything, Stripped };

    bool save( const QString & filename, SaveMode mode = Everything );

    void insert( const QTranslatorMessage& );
    void insert( const char *context, const char *sourceText, const QString &translation ) {
        insert( QTranslatorMessage(context, sourceText, "", translation) );
    }
    void remove( const QTranslatorMessage& );
    void remove( const char *context, const char *sourceText ) {
        remove( QTranslatorMessage(context, sourceText, "") );
    }
    bool contains( const char *, const char *, const char * comment = 0 ) const;

    void squeeze( SaveMode = Everything );
    void unsqueeze();

    QValueList<QTranslatorMessage> messages() const;


    bool isEmpty() const;

private:

    QTranslator( const QTranslator & );
    QTranslator &operator=( const QTranslator & );


    bool do_load( const uchar *data, int len );

    QTranslatorPrivate * d;
};
# 27 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/qt-copy/include/qdir.h" 1
# 39 "/coolo/prod/qt-copy/include/qdir.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qdir.h" 2
# 1 "/coolo/prod/qt-copy/include/qstrlist.h" 1
# 39 "/coolo/prod/qt-copy/include/qstrlist.h"



# 1 "/coolo/prod/qt-copy/include/qptrlist.h" 1
# 37 "/coolo/prod/qt-copy/include/qptrlist.h"


# 1 "/coolo/prod/qt-copy/include/qglist.h" 1
# 39 "/coolo/prod/qt-copy/include/qglist.h"


# 1 "/coolo/prod/qt-copy/include/qptrcollection.h" 1
# 37 "/coolo/prod/qt-copy/include/qptrcollection.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 41 "/coolo/prod/qt-copy/include/qptrcollection.h" 2



class QGVector;
class QGList;
class QGDict;


class QPtrCollection
{
public:
    bool autoDelete() const { return del_item; }
    void setAutoDelete( bool enable ) { del_item = enable; }

    virtual uint count() const = 0;
    virtual void clear() = 0;

    typedef void *Item;

protected:
    QPtrCollection() { del_item = FALSE; }
    QPtrCollection(const QPtrCollection &) { del_item = FALSE; }
    virtual ~QPtrCollection() {}

    bool del_item;

    virtual Item newItem( Item );
    virtual void deleteItem( Item ) = 0;
};
# 43 "/coolo/prod/qt-copy/include/qglist.h" 2


class QLNode
{
friend class QGList;
friend class QGListIterator;
friend class QGListStdIterator;
public:
    QPtrCollection::Item getData() { return data; }
private:
    QPtrCollection::Item data;
    QLNode *prev;
    QLNode *next;
    QLNode( QPtrCollection::Item d ) { data = d; }
};

class QGListIteratorList;

class QGList : public QPtrCollection
{
friend class QGListIterator;
friend class QGListIteratorList;
friend class QGVector;
public:
    uint count() const;


    QDataStream &read( QDataStream & );
    QDataStream &write( QDataStream & ) const;

protected:
    QGList();
    QGList( const QGList & );
    virtual ~QGList();

    QGList &operator=( const QGList & );
    bool operator==( const QGList& ) const;

    void inSort( QPtrCollection::Item );
    void append( QPtrCollection::Item );
    bool insertAt( uint index, QPtrCollection::Item );
    void relinkNode( QLNode * );
    bool removeNode( QLNode * );
    bool remove( QPtrCollection::Item = 0 );
    bool removeRef( QPtrCollection::Item = 0 );
    bool removeFirst();
    bool removeLast();
    bool removeAt( uint );
    bool replaceAt( uint, QPtrCollection::Item );
    QPtrCollection::Item takeNode( QLNode * );
    QPtrCollection::Item take();
    QPtrCollection::Item takeAt( uint index );
    QPtrCollection::Item takeFirst();
    QPtrCollection::Item takeLast();

    void sort();
    void clear();

    int findRef( QPtrCollection::Item, bool = TRUE );
    int find( QPtrCollection::Item, bool = TRUE );

    uint containsRef( QPtrCollection::Item ) const;
    uint contains( QPtrCollection::Item ) const;

    QPtrCollection::Item at( uint index );
    int at() const;
    QLNode *currentNode() const;

    QPtrCollection::Item get() const;

    QPtrCollection::Item cfirst() const;
    QPtrCollection::Item clast() const;
    QPtrCollection::Item first();
    QPtrCollection::Item last();
    QPtrCollection::Item next();
    QPtrCollection::Item prev();

    void toVector( QGVector * ) const;

    virtual int compareItems( QPtrCollection::Item, QPtrCollection::Item );


    virtual QDataStream &read( QDataStream &, QPtrCollection::Item & );
    virtual QDataStream &write( QDataStream &, QPtrCollection::Item ) const;


    QLNode* begin() const { return firstNode; }
    QLNode* end() const { return 0; }
    QLNode* erase( QLNode* it );

private:
    void prepend( QPtrCollection::Item );

    void heapSortPushDown( QPtrCollection::Item* heap, int first, int last );

    QLNode *firstNode;
    QLNode *lastNode;
    QLNode *curNode;
    int curIndex;
    uint numNodes;
    QGListIteratorList *iterators;

    QLNode *locate( uint );
    QLNode *unlink();
};


inline uint QGList::count() const
{
    return numNodes;
}

inline bool QGList::removeFirst()
{
    first();
    return remove();
}

inline bool QGList::removeLast()
{
    last();
    return remove();
}

inline int QGList::at() const
{
    return curIndex;
}

inline QPtrCollection::Item QGList::at( uint index )
{
    QLNode *n = locate( index );
    return n ? n->data : 0;
}

inline QLNode *QGList::currentNode() const
{
    return curNode;
}

inline QPtrCollection::Item QGList::get() const
{
    return curNode ? curNode->data : 0;
}

inline QPtrCollection::Item QGList::cfirst() const
{
    return firstNode ? firstNode->data : 0;
}

inline QPtrCollection::Item QGList::clast() const
{
    return lastNode ? lastNode->data : 0;
}







 QDataStream &operator>>( QDataStream &, QGList & );
 QDataStream &operator<<( QDataStream &, const QGList & );






class QGListIterator
{
friend class QGList;
friend class QGListIteratorList;
protected:
    QGListIterator( const QGList & );
    QGListIterator( const QGListIterator & );
    QGListIterator &operator=( const QGListIterator & );
   ~QGListIterator();

    bool atFirst() const;
    bool atLast() const;
    QPtrCollection::Item toFirst();
    QPtrCollection::Item toLast();

    QPtrCollection::Item get() const;
    QPtrCollection::Item operator()();
    QPtrCollection::Item operator++();
    QPtrCollection::Item operator+=(uint);
    QPtrCollection::Item operator--();
    QPtrCollection::Item operator-=(uint);

protected:
    QGList *list;

private:
    QLNode *curNode;
};


inline bool QGListIterator::atFirst() const
{
    return curNode == list->firstNode;
}

inline bool QGListIterator::atLast() const
{
    return curNode == list->lastNode;
}

inline QPtrCollection::Item QGListIterator::get() const
{
    return curNode ? curNode->data : 0;
}

class QGListStdIterator
{
public:
    inline QGListStdIterator( QLNode* n ) : node( n ){}
    inline operator QLNode* () { return node; }
protected:
    inline QLNode *next() { return node->next; }
    QLNode *node;
};
# 41 "/coolo/prod/qt-copy/include/qptrlist.h" 2


template<class type>
class QPtrListStdIterator : public QGListStdIterator
{
public:
    inline QPtrListStdIterator( QLNode* n ): QGListStdIterator(n){}
    type *operator*() { return node ? (type *)node->getData() : 0; }
    inline QPtrListStdIterator<type> operator++()
    { return node = next(); return *this; }
    inline QPtrListStdIterator<type> operator++(int)
    { QLNode* n = node; node = next(); return QPtrListStdIterator<type>( n ); }
    inline bool operator==( const QPtrListStdIterator<type>& it ) const { return node == it.node; }
    inline bool operator!=( const QPtrListStdIterator<type>& it ) const { return node != it.node; }
};


template<class type>
class QPtrList



        : public QGList

{
public:

    QPtrList() {}
    QPtrList( const QPtrList<type> &l ) : QGList(l) {}
    ~QPtrList() { clear(); }
    QPtrList<type> &operator=(const QPtrList<type> &l)
                        { return (QPtrList<type>&)QGList::operator=(l); }
    bool operator==( const QPtrList<type> &list ) const
    { return QGList::operator==( list ); }
    bool operator!=( const QPtrList<type> &list ) const
    { return !QGList::operator==( list ); }
    uint count() const { return QGList::count(); }
    bool isEmpty() const { return QGList::count() == 0; }
    bool insert( uint i, const type *d){ return QGList::insertAt(i,(QPtrCollection::Item)d); }
    void inSort( const type *d ) { QGList::inSort((QPtrCollection::Item)d); }
    void prepend( const type *d ) { QGList::insertAt(0,(QPtrCollection::Item)d); }
    void append( const type *d ) { QGList::append((QPtrCollection::Item)d); }
    bool remove( uint i ) { return QGList::removeAt(i); }
    bool remove() { return QGList::remove((QPtrCollection::Item)0); }
    bool remove( const type *d ) { return QGList::remove((QPtrCollection::Item)d); }
    bool removeRef( const type *d ) { return QGList::removeRef((QPtrCollection::Item)d); }
    void removeNode( QLNode *n ) { QGList::removeNode(n); }
    bool removeFirst() { return QGList::removeFirst(); }
    bool removeLast() { return QGList::removeLast(); }
    type *take( uint i ) { return (type *)QGList::takeAt(i); }
    type *take() { return (type *)QGList::take(); }
    type *takeNode( QLNode *n ) { return (type *)QGList::takeNode(n); }
    void clear() { QGList::clear(); }
    void sort() { QGList::sort(); }
    int find( const type *d ) { return QGList::find((QPtrCollection::Item)d); }
    int findNext( const type *d ) { return QGList::find((QPtrCollection::Item)d,FALSE); }
    int findRef( const type *d ) { return QGList::findRef((QPtrCollection::Item)d); }
    int findNextRef( const type *d ){ return QGList::findRef((QPtrCollection::Item)d,FALSE);}
    uint contains( const type *d ) const { return QGList::contains((QPtrCollection::Item)d); }
    uint containsRef( const type *d ) const
                                        { return QGList::containsRef((QPtrCollection::Item)d); }
    bool replace( uint i, const type *d ) { return QGList::replaceAt( i, (QPtrCollection::Item)d ); }
    type *at( uint i ) { return (type *)QGList::at(i); }
    int at() const { return QGList::at(); }
    type *current() const { return (type *)QGList::get(); }
    QLNode *currentNode() const { return QGList::currentNode(); }
    type *getFirst() const { return (type *)QGList::cfirst(); }
    type *getLast() const { return (type *)QGList::clast(); }
    type *first() { return (type *)QGList::first(); }
    type *last() { return (type *)QGList::last(); }
    type *next() { return (type *)QGList::next(); }
    type *prev() { return (type *)QGList::prev(); }
    void toVector( QGVector *vec )const{ QGList::toVector(vec); }



    typedef QPtrListStdIterator<type> Iterator;
    typedef QPtrListStdIterator<type> ConstIterator;
    inline Iterator begin() { return QGList::begin(); }
    inline ConstIterator begin() const { return QGList::begin(); }
    inline ConstIterator constBegin() const { return QGList::begin(); }
    inline Iterator end() { return QGList::end(); }
    inline ConstIterator end() const { return QGList::end(); }
    inline ConstIterator constEnd() const { return QGList::end(); }
    inline Iterator erase( Iterator it ) { return QGList::erase( it ); }

    typedef Iterator iterator;
    typedef ConstIterator const_iterator;
# 138 "/coolo/prod/qt-copy/include/qptrlist.h"
private:
    void deleteItem( Item d );
};


template<> inline void QPtrList<void>::deleteItem( QPtrCollection::Item )
{
}


template<class type> inline void QPtrList<type>::deleteItem( QPtrCollection::Item d )
{
    if ( del_item ) delete (type *)d;
}

template<class type>
class QPtrListIterator : public QGListIterator
{
public:
    QPtrListIterator(const QPtrList<type> &l) :QGListIterator((QGList &)l) {}
   ~QPtrListIterator() {}
    uint count() const { return list->count(); }
    bool isEmpty() const { return list->count() == 0; }
    bool atFirst() const { return QGListIterator::atFirst(); }
    bool atLast() const { return QGListIterator::atLast(); }
    type *toFirst() { return (type *)QGListIterator::toFirst(); }
    type *toLast() { return (type *)QGListIterator::toLast(); }
    operator type *() const { return (type *)QGListIterator::get(); }
    type *operator*() { return (type *)QGListIterator::get(); }







    type *current() const { return (type *)QGListIterator::get(); }
    type *operator()() { return (type *)QGListIterator::operator()();}
    type *operator++() { return (type *)QGListIterator::operator++(); }
    type *operator+=(uint j) { return (type *)QGListIterator::operator+=(j);}
    type *operator--() { return (type *)QGListIterator::operator--(); }
    type *operator-=(uint j) { return (type *)QGListIterator::operator-=(j);}
    QPtrListIterator<type>& operator=(const QPtrListIterator<type>&it)
                              { QGListIterator::operator=(it); return *this; }
};






# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 191 "/coolo/prod/qt-copy/include/qptrlist.h" 2
# 44 "/coolo/prod/qt-copy/include/qstrlist.h" 2
# 52 "/coolo/prod/qt-copy/include/qstrlist.h"
typedef QPtrListIterator<char> QStrListIterator;


class QStrList : public QPtrList<char>
{
public:
    QStrList( bool deepCopies=TRUE ) { dc = deepCopies; del_item = deepCopies; }
    QStrList( const QStrList & );
    ~QStrList() { clear(); }
    QStrList& operator=( const QStrList & );

private:
    QPtrCollection::Item newItem( QPtrCollection::Item d ) { return dc ? qstrdup( (const char*)d ) : d; }
    void deleteItem( QPtrCollection::Item d ) { if ( del_item ) delete[] (char*)d; }
    int compareItems( QPtrCollection::Item s1, QPtrCollection::Item s2 ) { return qstrcmp((const char*)s1,
                                                         (const char*)s2); }

    QDataStream &read( QDataStream &s, QPtrCollection::Item &d )
                                { s >> (char *&)d; return s; }
    QDataStream &write( QDataStream &s, QPtrCollection::Item d ) const
                                { return s << (const char *)d; }

    bool dc;
};


class QStrIList : public QStrList
{
public:
    QStrIList( bool deepCopies=TRUE ) : QStrList( deepCopies ) {}
    ~QStrIList() { clear(); }
private:
    int compareItems( QPtrCollection::Item s1, QPtrCollection::Item s2 )
                                { return qstricmp((const char*)s1,
                                                    (const char*)s2); }
};


inline QStrList & QStrList::operator=( const QStrList &strList )
{
    clear();
    dc = strList.dc;
    del_item = dc;
    QPtrList<char>::operator=( strList );
    return *this;
}

inline QStrList::QStrList( const QStrList &strList )
    : QPtrList<char>( strList )
{
    dc = FALSE;
    operator=( strList );
}
# 44 "/coolo/prod/qt-copy/include/qdir.h" 2
# 1 "/coolo/prod/qt-copy/include/qfileinfo.h" 1
# 39 "/coolo/prod/qt-copy/include/qfileinfo.h"


# 1 "/coolo/prod/qt-copy/include/qfile.h" 1
# 39 "/coolo/prod/qt-copy/include/qfile.h"







class QDir;
class QFilePrivate;

class QFile : public QIODevice
{
public:
    QFile();
    QFile( const QString &name );
   ~QFile();

    QString name() const;
    void setName( const QString &name );

    typedef QCString (*EncoderFn)( const QString &fileName );
    typedef QString (*DecoderFn)( const QCString &localfileName );
    static QCString encodeName( const QString &fileName );
    static QString decodeName( const QCString &localFileName );
    static void setEncodingFunction( EncoderFn );
    static void setDecodingFunction( DecoderFn );

    bool exists() const;
    static bool exists( const QString &fileName );

    bool remove();
    static bool remove( const QString &fileName );

    bool open( int );
    bool open( int, FILE * );
    bool open( int, int );
    void close();
    void flush();

    Offset size() const;
    Offset at() const;
    bool at( Offset );
    bool atEnd() const;

    Q_LONG readBlock( char *data, Q_ULONG len );
    Q_LONG writeBlock( const char *data, Q_ULONG len );
    Q_LONG writeBlock( const QByteArray& data )
                      { return QIODevice::writeBlock(data); }
    Q_LONG readLine( char *data, Q_ULONG maxlen );
    Q_LONG readLine( QString &, Q_ULONG maxlen );

    int getch();
    int putch( int );
    int ungetch( int );

    int handle() const;

    QString errorString() const;

protected:
    void setErrorString( const QString& );
    QString fn;
    FILE *fh;
    int fd;
    Offset length;
    bool ext_f;
    QFilePrivate *d;

private:
    void init();
    void setErrorStringErrno( int );
    QCString ungetchBuffer;

private:

    QFile( const QFile & );
    QFile &operator=( const QFile & );

};


inline QString QFile::name() const
{ return fn; }

inline QIODevice::Offset QFile::at() const
{ return ioIndex; }
# 43 "/coolo/prod/qt-copy/include/qfileinfo.h" 2
# 1 "/coolo/prod/qt-copy/include/qdatetime.h" 1
# 39 "/coolo/prod/qt-copy/include/qdatetime.h"
# 51 "/coolo/prod/qt-copy/include/qdatetime.h"
class QDate
{
public:
    QDate() { jd = 0; }
    QDate( int y, int m, int d );

    bool isNull() const { return jd == 0; }
    bool isValid() const;

    int year() const;
    int month() const;
    int day() const;
    int dayOfWeek() const;
    int dayOfYear() const;
    int daysInMonth() const;
    int daysInYear() const;
    int weekNumber( int *yearNum = 0 ) const;






    static QString shortMonthName( int month );
    static QString shortDayName( int weekday );
    static QString longMonthName( int month );
    static QString longDayName( int weekday );



    QString toString( Qt::DateFormat f = Qt::TextDate ) const;

    QString toString( const QString& format ) const;

    bool setYMD( int y, int m, int d );

    QDate addDays( int days ) const;
    QDate addMonths( int months ) const;
    QDate addYears( int years ) const;
    int daysTo( const QDate & ) const;

    bool operator==( const QDate &d ) const { return jd == d.jd; }
    bool operator!=( const QDate &d ) const { return jd != d.jd; }
    bool operator<( const QDate &d ) const { return jd < d.jd; }
    bool operator<=( const QDate &d ) const { return jd <= d.jd; }
    bool operator>( const QDate &d ) const { return jd > d.jd; }
    bool operator>=( const QDate &d ) const { return jd >= d.jd; }

    static QDate currentDate();
    static QDate currentDate( Qt::TimeSpec );

    static QDate fromString( const QString& s, Qt::DateFormat f = Qt::TextDate );

    static bool isValid( int y, int m, int d );
    static bool leapYear( int year );

    static uint gregorianToJulian( int y, int m, int d );
    static void julianToGregorian( uint jd, int &y, int &m, int &d );
private:
    uint jd;
    friend class QDateTime;

    friend QDataStream &operator<<( QDataStream &, const QDate & );
    friend QDataStream &operator>>( QDataStream &, QDate & );

};






class QTime
{
public:
    QTime() { ds=0; }
    QTime( int h, int m, int s=0, int ms=0 );

    bool isNull() const { return ds == 0; }
    bool isValid() const;

    int hour() const;
    int minute() const;
    int second() const;
    int msec() const;


    QString toString( Qt::DateFormat f = Qt::TextDate ) const;

    QString toString( const QString& format ) const;

    bool setHMS( int h, int m, int s, int ms=0 );

    QTime addSecs( int secs ) const;
    int secsTo( const QTime & ) const;
    QTime addMSecs( int ms ) const;
    int msecsTo( const QTime & ) const;

    bool operator==( const QTime &d ) const { return ds == d.ds; }
    bool operator!=( const QTime &d ) const { return ds != d.ds; }
    bool operator<( const QTime &d ) const { return ds < d.ds; }
    bool operator<=( const QTime &d ) const { return ds <= d.ds; }
    bool operator>( const QTime &d ) const { return ds > d.ds; }
    bool operator>=( const QTime &d ) const { return ds >= d.ds; }

    static QTime currentTime();
    static QTime currentTime( Qt::TimeSpec );

    static QTime fromString( const QString& s, Qt::DateFormat f = Qt::TextDate );

    static bool isValid( int h, int m, int s, int ms=0 );

    void start();
    int restart();
    int elapsed() const;

private:
    static bool currentTime( QTime * );
    static bool currentTime( QTime *, Qt::TimeSpec );

    uint ds;
    friend class QDateTime;

    friend QDataStream &operator<<( QDataStream &, const QTime & );
    friend QDataStream &operator>>( QDataStream &, QTime & );

};






class QDateTime
{
public:
    QDateTime() {}
    QDateTime( const QDate & );
    QDateTime( const QDate &, const QTime & );

    bool isNull() const { return d.isNull() && t.isNull(); }
    bool isValid() const { return d.isValid() && t.isValid(); }

    QDate date() const { return d; }
    QTime time() const { return t; }
    uint toTime_t() const;
    void setDate( const QDate &date ) { d = date; }
    void setTime( const QTime &time ) { t = time; }
    void setTime_t( uint secsSince1Jan1970UTC );
    void setTime_t( uint secsSince1Jan1970UTC, Qt::TimeSpec );


    QString toString( Qt::DateFormat f = Qt::TextDate ) const;

    QString toString( const QString& format ) const;

    QDateTime addDays( int days ) const;
    QDateTime addMonths( int months ) const;
    QDateTime addYears( int years ) const;
    QDateTime addSecs( int secs ) const;
    int daysTo( const QDateTime & ) const;
    int secsTo( const QDateTime & ) const;

    bool operator==( const QDateTime &dt ) const;
    bool operator!=( const QDateTime &dt ) const;
    bool operator<( const QDateTime &dt ) const;
    bool operator<=( const QDateTime &dt ) const;
    bool operator>( const QDateTime &dt ) const;
    bool operator>=( const QDateTime &dt ) const;

    static QDateTime currentDateTime();
    static QDateTime currentDateTime( Qt::TimeSpec );

    static QDateTime fromString( const QString& s, Qt::DateFormat f = Qt::TextDate );

private:
    QDate d;
    QTime t;

    friend QDataStream &operator<<( QDataStream &, const QDateTime &);
    friend QDataStream &operator>>( QDataStream &, QDateTime & );

};







 QDataStream &operator<<( QDataStream &, const QDate & );
 QDataStream &operator>>( QDataStream &, QDate & );
 QDataStream &operator<<( QDataStream &, const QTime & );
 QDataStream &operator>>( QDataStream &, QTime & );
 QDataStream &operator<<( QDataStream &, const QDateTime & );
 QDataStream &operator>>( QDataStream &, QDateTime & );
# 44 "/coolo/prod/qt-copy/include/qfileinfo.h" 2



class QDir;
struct QFileInfoCache;
template <class T> class QDeepCopy;


class QFileInfo
{
public:
    enum PermissionSpec {
        ReadOwner = 04000, WriteOwner = 02000, ExeOwner = 01000,
        ReadUser = 00400, WriteUser = 00200, ExeUser = 00100,
        ReadGroup = 00040, WriteGroup = 00020, ExeGroup = 00010,
        ReadOther = 00004, WriteOther = 00002, ExeOther = 00001 };

    QFileInfo();
    QFileInfo( const QString &file );
    QFileInfo( const QFile & );

    QFileInfo( const QDir &, const QString &fileName );

    QFileInfo( const QFileInfo & );
   ~QFileInfo();

    QFileInfo &operator=( const QFileInfo & );

    void setFile( const QString &file );
    void setFile( const QFile & );

    void setFile( const QDir &, const QString &fileName );

    bool exists() const;
    void refresh() const;
    bool caching() const;
    void setCaching( bool );

    QString filePath() const;
    QString fileName() const;

    QString absFilePath() const;

    QString baseName( bool complete = FALSE ) const;
    QString extension( bool complete = TRUE ) const;


    QString dirPath( bool absPath = FALSE ) const;


    QDir dir( bool absPath = FALSE ) const;

    bool isReadable() const;
    bool isWritable() const;
    bool isExecutable() const;
    bool isHidden() const;


    bool isRelative() const;
    bool convertToAbs();


    bool isFile() const;
    bool isDir() const;
    bool isSymLink() const;

    QString readLink() const;

    QString owner() const;
    uint ownerId() const;
    QString group() const;
    uint groupId() const;

    bool permission( int permissionSpec ) const;






    uint size() const;


    QDateTime created() const;
    QDateTime lastModified() const;
    QDateTime lastRead() const;

private:
    void doStat() const;
    static void slashify( QString & );
    static void makeAbs( QString & );

    QString fn;
    QFileInfoCache *fic;
    bool cache;

    bool symLink;


    void detach();
    friend class QDeepCopy< QFileInfo >;
};


inline bool QFileInfo::caching() const
{
    return cache;
}
# 45 "/coolo/prod/qt-copy/include/qdir.h" 2




typedef QPtrList<QFileInfo> QFileInfoList;
typedef QPtrListIterator<QFileInfo> QFileInfoListIterator;
class QStringList;
template <class T> class QDeepCopy;


class QDir
{
public:
    enum FilterSpec { Dirs = 0x001,
                      Files = 0x002,
                      Drives = 0x004,
                      NoSymLinks = 0x008,
                      All = 0x007,
                      TypeMask = 0x00F,

                      Readable = 0x010,
                      Writable = 0x020,
                      Executable = 0x040,
                      RWEMask = 0x070,

                      Modified = 0x080,
                      Hidden = 0x100,
                      System = 0x200,
                      AccessMask = 0x3F0,

                      DefaultFilter = -1 };

    enum SortSpec { Name = 0x00,
                      Time = 0x01,
                      Size = 0x02,
                      Unsorted = 0x03,
                      SortByMask = 0x03,

                      DirsFirst = 0x04,
                      Reversed = 0x08,
                      IgnoreCase = 0x10,
                      DefaultSort = -1 };

    QDir();
    QDir( const QString &path, const QString &nameFilter = QString::null,
          int sortSpec = Name | IgnoreCase, int filterSpec = All );
    QDir( const QDir & );

    virtual ~QDir();

    QDir &operator=( const QDir & );
    QDir &operator=( const QString &path );

    virtual void setPath( const QString &path );
    virtual QString path() const;
    virtual QString absPath() const;
    virtual QString canonicalPath() const;

    virtual QString dirName() const;
    virtual QString filePath( const QString &fileName,
                              bool acceptAbsPath = TRUE ) const;
    virtual QString absFilePath( const QString &fileName,
                                 bool acceptAbsPath = TRUE ) const;

    static QString convertSeparators( const QString &pathName );

    virtual bool cd( const QString &dirName, bool acceptAbsPath = TRUE );
    virtual bool cdUp();

    QString nameFilter() const;
    virtual void setNameFilter( const QString &nameFilter );
    FilterSpec filter() const;
    virtual void setFilter( int filterSpec );
    SortSpec sorting() const;
    virtual void setSorting( int sortSpec );

    bool matchAllDirs() const;
    virtual void setMatchAllDirs( bool );

    uint count() const;
    QString operator[]( int ) const;

    virtual QStrList encodedEntryList( int filterSpec = DefaultFilter,
                                       int sortSpec = DefaultSort ) const;
    virtual QStrList encodedEntryList( const QString &nameFilter,
                                       int filterSpec = DefaultFilter,
                                       int sortSpec = DefaultSort ) const;
    virtual QStringList entryList( int filterSpec = DefaultFilter,
                                   int sortSpec = DefaultSort ) const;
    virtual QStringList entryList( const QString &nameFilter,
                                   int filterSpec = DefaultFilter,
                                   int sortSpec = DefaultSort ) const;

    virtual const QFileInfoList *entryInfoList( int filterSpec = DefaultFilter,
                                                int sortSpec = DefaultSort ) const;
    virtual const QFileInfoList *entryInfoList( const QString &nameFilter,
                                                int filterSpec = DefaultFilter,
                                                int sortSpec = DefaultSort ) const;

    static const QFileInfoList *drives();

    virtual bool mkdir( const QString &dirName,
                        bool acceptAbsPath = TRUE ) const;
    virtual bool rmdir( const QString &dirName,
                        bool acceptAbsPath = TRUE ) const;

    virtual bool isReadable() const;
    virtual bool exists() const;
    virtual bool isRoot() const;

    virtual bool isRelative() const;
    virtual void convertToAbs();

    virtual bool operator==( const QDir & ) const;
    virtual bool operator!=( const QDir & ) const;

    virtual bool remove( const QString &fileName,
                         bool acceptAbsPath = TRUE );
    virtual bool rename( const QString &name, const QString &newName,
                         bool acceptAbsPaths = TRUE );
    virtual bool exists( const QString &name,
                         bool acceptAbsPath = TRUE );

    static char separator();

    static bool setCurrent( const QString &path );
    static QDir current();
    static QDir home();
    static QDir root();
    static QString currentDirPath();
    static QString homeDirPath();
    static QString rootDirPath();

    static bool match( const QStringList &filters, const QString &fileName );
    static bool match( const QString &filter, const QString &fileName );
    static QString cleanDirPath( const QString &dirPath );
    static bool isRelativePath( const QString &path );
    void refresh() const;

private:




    void init();
    virtual bool readDirEntries( const QString &nameFilter,
                                 int FilterSpec, int SortSpec );

    static void slashify( QString & );

    QString dPath;
    QStringList *fList;
    QFileInfoList *fiList;
    QString nameFilt;
    FilterSpec filtS;
    SortSpec sortS;
    uint dirty : 1;
    uint allDirs : 1;

    void detach();
    friend class QDeepCopy< QDir >;
};


inline QString QDir::path() const
{
    return dPath;
}

inline QString QDir::nameFilter() const
{
    return nameFilt;
}

inline QDir::FilterSpec QDir::filter() const
{
    return filtS;
}

inline QDir::SortSpec QDir::sorting() const
{
    return sortS;
}

inline bool QDir::matchAllDirs() const
{
    return allDirs;
}

inline bool QDir::operator!=( const QDir &d ) const
{
    return !(*this == d);
}


struct QDirSortItem {
    QString filename_cache;
    QFileInfo* item;
};
# 29 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

# 1 "/coolo/prod/qt-copy/include/qwidgetlist.h" 1
# 39 "/coolo/prod/qt-copy/include/qwidgetlist.h"


# 1 "/coolo/prod/qt-copy/include/qwidget.h" 1
# 39 "/coolo/prod/qt-copy/include/qwidget.h"




# 1 "/coolo/prod/qt-copy/include/qpaintdevice.h" 1
# 39 "/coolo/prod/qt-copy/include/qpaintdevice.h"
# 51 "/coolo/prod/qt-copy/include/qpaintdevice.h"
class QIODevice;
class QString;
class QTextItem;



struct QPaintDeviceX11Data;


union QPDevCmdParam {
    int ival;
    int *ivec;
    QString *str;
    const QPoint *point;
    const QRect *rect;
    const QPointArray *ptarr;
    const QPixmap *pixmap;
    const QImage *image;
    const QColor *color;
    const QFont *font;
    const QPen *pen;
    const QBrush *brush;
    const QRegion *rgn;
    const QWMatrix *matrix;
    const QTextItem *textItem;
    QIODevice *device;
};



class QPaintDevice
{
public:
    virtual ~QPaintDevice();

    int devType() const;
    bool isExtDev() const;
    bool paintingActive() const;

    virtual void setResolution( int );
    virtual int resolution() const;






    virtual Qt::HANDLE handle() const;
    virtual Qt::HANDLE x11RenderHandle() const;







    Display *x11Display() const;
    int x11Screen() const;
    int x11Depth() const;
    int x11Cells() const;
    Qt::HANDLE x11Colormap() const;
    bool x11DefaultColormap() const;
    void *x11Visual() const;
    bool x11DefaultVisual() const;

    static Display *x11AppDisplay();
    static int x11AppScreen();

    static int x11AppDpiX();
    static int x11AppDpiY();
    static void x11SetAppDpiX(int);
    static void x11SetAppDpiY(int);
    static int x11AppDepth();
    static int x11AppCells();
    static Qt::HANDLE x11AppRootWindow();
    static Qt::HANDLE x11AppColormap();
    static bool x11AppDefaultColormap();
    static void *x11AppVisual();
    static bool x11AppDefaultVisual();



    static int x11AppDepth( int screen );
    static int x11AppCells( int screen );
    static Qt::HANDLE x11AppRootWindow( int screen );
    static Qt::HANDLE x11AppColormap( int screen );
    static void *x11AppVisual( int screen );
    static bool x11AppDefaultColormap( int screen );
    static bool x11AppDefaultVisual( int screen );
    static int x11AppDpiX( int );
    static int x11AppDpiY( int );
    static void x11SetAppDpiX( int, int );
    static void x11SetAppDpiY( int, int );
# 153 "/coolo/prod/qt-copy/include/qpaintdevice.h"
    enum PDevCmd {
        PdcNOP = 0,
        PdcDrawPoint = 1,
        PdcDrawFirst = PdcDrawPoint,
        PdcMoveTo = 2,
        PdcLineTo = 3,
        PdcDrawLine = 4,
        PdcDrawRect = 5,
        PdcDrawRoundRect = 6,
        PdcDrawEllipse = 7,
        PdcDrawArc = 8,
        PdcDrawPie = 9,
        PdcDrawChord = 10,
        PdcDrawLineSegments = 11,
        PdcDrawPolyline = 12,
        PdcDrawPolygon = 13,
        PdcDrawCubicBezier = 14,
        PdcDrawText = 15,
        PdcDrawTextFormatted = 16,
        PdcDrawPixmap = 17,
        PdcDrawImage = 18,
        PdcDrawText2 = 19,
        PdcDrawText2Formatted = 20,
        PdcDrawTextItem = 21,
        PdcDrawLast = PdcDrawTextItem,



        PdcBegin = 30,
        PdcEnd = 31,
        PdcSave = 32,
        PdcRestore = 33,
        PdcSetdev = 34,
        PdcSetBkColor = 40,
        PdcSetBkMode = 41,
        PdcSetROP = 42,
        PdcSetBrushOrigin = 43,
        PdcSetFont = 45,
        PdcSetPen = 46,
        PdcSetBrush = 47,
        PdcSetTabStops = 48,
        PdcSetTabArray = 49,
        PdcSetUnit = 50,
        PdcSetVXform = 51,
        PdcSetWindow = 52,
        PdcSetViewport = 53,
        PdcSetWXform = 54,
        PdcSetWMatrix = 55,
        PdcSaveWMatrix = 56,
        PdcRestoreWMatrix = 57,
        PdcSetClip = 60,
        PdcSetClipRegion = 61,

        PdcReservedStart = 0,
        PdcReservedStop = 199
    };

protected:
    QPaintDevice( uint devflags );




    Qt::HANDLE hd;
    Qt::HANDLE rendhd;

    void copyX11Data( const QPaintDevice * );
    void cloneX11Data( const QPaintDevice * );
    virtual void setX11Data( const QPaintDeviceX11Data* );
    QPaintDeviceX11Data* getX11Data( bool def=FALSE ) const;
# 232 "/coolo/prod/qt-copy/include/qpaintdevice.h"
    virtual bool cmd( int, QPainter *, QPDevCmdParam * );
    virtual int metric( int ) const;
    virtual int fontMet( QFont *, int, const char * = 0, int = 0 ) const;
    virtual int fontInf( QFont *, int ) const;

    ushort devFlags;
    ushort painters;

    friend class QPainter;
    friend class QPaintDeviceMetrics;







    friend void bitBlt( QPaintDevice *, int, int,
                                 const QPaintDevice *,
                                 int, int, int, int, Qt::RasterOp, bool );


    friend void qt_init_internal( int *, char **, Display *, Qt::HANDLE, Qt::HANDLE );
    friend void qt_cleanup();


private:

    static Display *x_appdisplay;
    static int x_appscreen;

    static int x_appdepth;
    static int x_appcells;
    static Qt::HANDLE x_approotwindow;
    static Qt::HANDLE x_appcolormap;
    static bool x_appdefcolormap;
    static void *x_appvisual;
    static bool x_appdefvisual;


    static int *x_appdepth_arr;
    static int *x_appcells_arr;
    static Qt::HANDLE *x_approotwindow_arr;
    static Qt::HANDLE *x_appcolormap_arr;
    static bool *x_appdefcolormap_arr;
    static void **x_appvisual_arr;
    static bool *x_appdefvisual_arr;

    QPaintDeviceX11Data* x11Data;


private:

    QPaintDevice( const QPaintDevice & );
    QPaintDevice &operator=( const QPaintDevice & );

};



void bitBlt( QPaintDevice *dst, int dx, int dy,
             const QPaintDevice *src, int sx=0, int sy=0, int sw=-1, int sh=-1,
             Qt::RasterOp = Qt::CopyROP, bool ignoreMask=FALSE );


void bitBlt( QPaintDevice *dst, int dx, int dy,
             const QImage *src, int sx=0, int sy=0, int sw=-1, int sh=-1,
             int conversion_flags=0 );




struct QPaintDeviceX11Data : public QShared {
    Display* x_display;
    int x_screen;
    int x_depth;
    int x_cells;
    Qt::HANDLE x_colormap;
    bool x_defcolormap;
    void* x_visual;
    bool x_defvisual;
};







inline int QPaintDevice::devType() const
{ return devFlags & QInternal::DeviceTypeMask; }

inline bool QPaintDevice::isExtDev() const
{ return (devFlags & QInternal::ExternalDevice) != 0; }

inline bool QPaintDevice::paintingActive() const
{ return painters != 0; }


inline Display *QPaintDevice::x11Display() const
{ return x11Data ? x11Data->x_display : x_appdisplay; }

inline int QPaintDevice::x11Screen() const
{ return x11Data ? x11Data->x_screen : x_appscreen; }

inline int QPaintDevice::x11Depth() const
{ return x11Data ? x11Data->x_depth : x_appdepth; }

inline int QPaintDevice::x11Cells() const
{ return x11Data ? x11Data->x_cells : x_appcells; }

inline Qt::HANDLE QPaintDevice::x11Colormap() const
{ return x11Data ? x11Data->x_colormap : x_appcolormap; }

inline bool QPaintDevice::x11DefaultColormap() const
{ return x11Data ? x11Data->x_defcolormap : x_appdefcolormap; }

inline void *QPaintDevice::x11Visual() const
{ return x11Data ? x11Data->x_visual : x_appvisual; }

inline bool QPaintDevice::x11DefaultVisual() const
{ return x11Data ? x11Data->x_defvisual : x_appdefvisual; }

inline Display *QPaintDevice::x11AppDisplay()
{ return x_appdisplay; }

inline int QPaintDevice::x11AppScreen()
{ return x_appscreen; }

inline int QPaintDevice::x11AppDepth( int screen )
{ return x_appdepth_arr[ screen == -1 ? x_appscreen : screen ]; }

inline int QPaintDevice::x11AppCells( int screen )
{ return x_appcells_arr[ screen == -1 ? x_appscreen : screen ]; }

inline Qt::HANDLE QPaintDevice::x11AppRootWindow( int screen )
{ return x_approotwindow_arr[ screen == -1 ? x_appscreen : screen ]; }

inline Qt::HANDLE QPaintDevice::x11AppColormap( int screen )
{ return x_appcolormap_arr[ screen == -1 ? x_appscreen : screen ]; }

inline bool QPaintDevice::x11AppDefaultColormap( int screen )
{ return x_appdefcolormap_arr[ screen == -1 ? x_appscreen : screen ]; }

inline void *QPaintDevice::x11AppVisual( int screen )
{ return x_appvisual_arr[ screen == -1 ? x_appscreen : screen ]; }

inline bool QPaintDevice::x11AppDefaultVisual( int screen )
{ return x_appdefvisual_arr[ screen == -1 ? x_appscreen : screen ]; }

inline int QPaintDevice::x11AppDepth()
{ return x_appdepth; }

inline int QPaintDevice::x11AppCells()
{ return x_appcells; }

inline Qt::HANDLE QPaintDevice::x11AppRootWindow()
{ return x_approotwindow; }

inline Qt::HANDLE QPaintDevice::x11AppColormap()
{ return x_appcolormap; }

inline bool QPaintDevice::x11AppDefaultColormap()
{ return x_appdefcolormap; }

inline void *QPaintDevice::x11AppVisual()
{ return x_appvisual; }

inline bool QPaintDevice::x11AppDefaultVisual()
{ return x_appdefvisual; }





inline void bitBlt( QPaintDevice *dst, const QPoint &dp,
                    const QPaintDevice *src, const QRect &sr =QRect(0,0,-1,-1),
                    Qt::RasterOp rop=Qt::CopyROP, bool ignoreMask=FALSE )
{
    bitBlt( dst, dp.x(), dp.y(), src, sr.x(), sr.y(), sr.width(), sr.height(),
            rop, ignoreMask );
}
# 45 "/coolo/prod/qt-copy/include/qwidget.h" 2
# 1 "/coolo/prod/qt-copy/include/qpalette.h" 1
# 39 "/coolo/prod/qt-copy/include/qpalette.h"



# 1 "/coolo/prod/qt-copy/include/qcolor.h" 1
# 39 "/coolo/prod/qt-copy/include/qcolor.h"



# 1 "/coolo/prod/qt-copy/include/qstringlist.h" 1
# 39 "/coolo/prod/qt-copy/include/qstringlist.h"
# 49 "/coolo/prod/qt-copy/include/qstringlist.h"
class QRegExp;
template <class T> class QDeepCopy;







class QStringList : public QValueList<QString>
{
public:
    QStringList() { }
    QStringList( const QStringList& l ) : QValueList<QString>(l) { }
    QStringList( const QValueList<QString>& l ) : QValueList<QString>(l) { }
    QStringList( const QString& i ) { append(i); }

    QStringList( const char* i ) { append(i); }


    static QStringList fromStrList(const QStrList&);

    void sort();

    static QStringList split( const QString &sep, const QString &str, bool allowEmptyEntries = FALSE );
    static QStringList split( const QChar &sep, const QString &str, bool allowEmptyEntries = FALSE );

    static QStringList split( const QRegExp &sep, const QString &str, bool allowEmptyEntries = FALSE );

    QString join( const QString &sep ) const;

    QStringList grep( const QString &str, bool cs = TRUE ) const;

    QStringList grep( const QRegExp &expr ) const;


    QStringList& gres( const QString &before, const QString &after,
                       bool cs = TRUE );

    QStringList& gres( const QRegExp &expr, const QString &after );


protected:
    void detach() { QValueList<QString>::detach(); }
    friend class QDeepCopy< QStringList >;
};


class QDataStream;
extern QDataStream &operator>>( QDataStream &, QStringList& );
extern QDataStream &operator<<( QDataStream &, const QStringList& );
# 44 "/coolo/prod/qt-copy/include/qcolor.h" 2


const QRgb RGB_MASK = 0x00ffffff;

 inline int qRed( QRgb rgb )
{ return (int)((rgb >> 16) & 0xff); }

 inline int qGreen( QRgb rgb )
{ return (int)((rgb >> 8) & 0xff); }

 inline int qBlue( QRgb rgb )
{ return (int)(rgb & 0xff); }

 inline int qAlpha( QRgb rgb )
{ return (int)((rgb >> 24) & 0xff); }

 inline QRgb qRgb( int r, int g, int b )
{ return (0xff << 24) | ((r & 0xff) << 16) | ((g & 0xff) << 8) | (b & 0xff); }

 inline QRgb qRgba( int r, int g, int b, int a )
{ return ((a & 0xff) << 24) | ((r & 0xff) << 16) | ((g & 0xff) << 8) | (b & 0xff); }

 inline int qGray( int r, int g, int b )
{ return (r*11+g*16+b*5)/32; }

 inline int qGray( QRgb rgb )
{ return qGray( qRed(rgb), qGreen(rgb), qBlue(rgb) ); }


class QColor
{
public:
    enum Spec { Rgb, Hsv };

    QColor();
    QColor( int r, int g, int b );
    QColor( int x, int y, int z, Spec );
    QColor( QRgb rgb, uint pixel=0xffffffff);
    QColor( const QString& name );
    QColor( const char *name );
    QColor( const QColor & );
    QColor &operator=( const QColor & );

    bool isValid() const;
    bool isDirty() const;
    QString name() const;
    void setNamedColor( const QString& name );

    QRgb rgb() const;
    void setRgb( int r, int g, int b );
    void setRgb( QRgb rgb );
    void getRgb( int *r, int *g, int *b ) const { rgb( r, g, b ); }
    void rgb( int *r, int *g, int *b ) const;

    int red() const;
    int green() const;
    int blue() const;

    void setHsv( int h, int s, int v );
    void getHsv( int *h, int *s, int *v ) const { hsv( h, s, v ); }
    void hsv( int *h, int *s, int *v ) const;
    void getHsv( int &h, int &s, int &v ) const { hsv( &h, &s, &v ); }

    QColor light( int f = 150 ) const;
    QColor dark( int f = 200 ) const;

    bool operator==( const QColor &c ) const;
    bool operator!=( const QColor &c ) const;

    uint alloc();
    uint pixel() const;



    uint alloc( int screen );
    uint pixel( int screen ) const;


    static int maxColors();
    static int numBitPlanes();

    static int enterAllocContext();
    static void leaveAllocContext();
    static int currentAllocContext();
    static void destroyAllocContext( int );
# 138 "/coolo/prod/qt-copy/include/qcolor.h"
    static void initialize();
    static void cleanup();

    static QStringList colorNames();

    enum { Dirt = 0x44495254, Invalid = 0x49000000 };

private:
    void setSystemNamedColor( const QString& name );
    void setPixel( uint pixel );
    static void initGlobalColors();
    static uint argbToPix32(QRgb);
    static QColor* globalColors();
    static bool color_init;
    static bool globals_init;



    static enum ColorModel { d8, d32 } colormodel;
    union {
        QRgb argb;
        struct D8 {
            QRgb argb;
            uchar pix;
            uchar invalid;
            uchar dirty;
            uchar direct;
        } d8;
        struct D32 {
            QRgb argb;
            uint pix;
            bool invalid() const { return argb == QColor::Invalid && pix == QColor::Dirt; }
            bool probablyDirty() const { return pix == QColor::Dirt; }
        } d32;
    } d;
};


inline QColor::QColor()
{ d.d32.argb = Invalid; d.d32.pix = Dirt; }

inline QColor::QColor( int r, int g, int b )
{ setRgb( r, g, b ); }

inline QRgb QColor::rgb() const
{ return d.argb; }

inline int QColor::red() const
{ return qRed(d.argb); }

inline int QColor::green() const
{ return qGreen(d.argb); }

inline int QColor::blue() const
{ return qBlue(d.argb); }

inline bool QColor::isValid() const
{
    if ( colormodel == d8 )
        return !d.d8.invalid;
    else
        return !d.d32.invalid();
}

inline bool QColor::operator==( const QColor &c ) const
{
    return d.argb == c.d.argb && isValid() == c.isValid();
}

inline bool QColor::operator!=( const QColor &c ) const
{
    return !operator==(c);
}







 QDataStream &operator<<( QDataStream &, const QColor & );
 QDataStream &operator>>( QDataStream &, QColor & );
# 44 "/coolo/prod/qt-copy/include/qpalette.h" 2

# 1 "/coolo/prod/qt-copy/include/qbrush.h" 1
# 39 "/coolo/prod/qt-copy/include/qbrush.h"







class QBrush: public Qt
{
friend class QPainter;
public:
    QBrush();
    QBrush( BrushStyle );
    QBrush( const QColor &, BrushStyle=SolidPattern );
    QBrush( const QColor &, const QPixmap & );
    QBrush( const QBrush & );
   ~QBrush();
    QBrush &operator=( const QBrush & );

    BrushStyle style() const { return data->style; }
    void setStyle( BrushStyle );
    const QColor &color()const { return data->color; }
    void setColor( const QColor & );
    QPixmap *pixmap() const { return data->pixmap; }
    void setPixmap( const QPixmap & );

    bool operator==( const QBrush &p ) const;
    bool operator!=( const QBrush &b ) const
                                        { return !(operator==(b)); }

private:
    QBrush copy() const;
    void detach();
    void init( const QColor &, BrushStyle );
    struct QBrushData : public QShared {
        BrushStyle style;
        QColor color;
        QPixmap *pixmap;
    } *data;
};







 QDataStream &operator<<( QDataStream &, const QBrush & );
 QDataStream &operator>>( QDataStream &, QBrush & );
# 46 "/coolo/prod/qt-copy/include/qpalette.h" 2




class QColorGroupPrivate;

class QColorGroup
{
public:
    QColorGroup();
    QColorGroup( const QColor &foreground, const QColor &button,
                 const QColor &light, const QColor &dark, const QColor &mid,
                 const QColor &text, const QColor &base );
    QColorGroup( const QBrush &foreground, const QBrush &button,
                 const QBrush &light, const QBrush &dark, const QBrush &mid,
                 const QBrush &text, const QBrush &bright_text,
                 const QBrush &base, const QBrush &background);
    QColorGroup( const QColorGroup & );

   ~QColorGroup();

    QColorGroup& operator =(const QColorGroup&);


    enum ColorRole { Foreground, Button, Light, Midlight, Dark, Mid,
                     Text, BrightText, ButtonText, Base, Background, Shadow,
                     Highlight, HighlightedText, Link, LinkVisited,
                     NColorRoles };

    const QColor &color( ColorRole ) const;
    const QBrush &brush( ColorRole ) const;
    void setColor( ColorRole, const QColor & );
    void setBrush( ColorRole, const QBrush & );

    const QColor &foreground() const { return br[Foreground].color(); }
    const QColor &button() const { return br[Button].color(); }
    const QColor &light() const { return br[Light].color(); }
    const QColor &dark() const { return br[Dark].color(); }
    const QColor &mid() const { return br[Mid].color(); }
    const QColor &text() const { return br[Text].color(); }
    const QColor &base() const { return br[Base].color(); }
    const QColor &background() const { return br[Background].color(); }

    const QColor &midlight() const { return br[Midlight].color(); }
    const QColor &brightText() const { return br[BrightText].color(); }
    const QColor &buttonText() const { return br[ButtonText].color(); }
    const QColor &shadow() const { return br[Shadow].color(); }
    const QColor &highlight() const { return br[Highlight].color(); }
    const QColor &highlightedText() const{return br[HighlightedText].color(); }
    const QColor &link() const { return br[Link].color(); }
    const QColor &linkVisited() const { return br[LinkVisited].color(); }

    bool operator==( const QColorGroup &g ) const;
    bool operator!=( const QColorGroup &g ) const
        { return !(operator==(g)); }

private:
    QBrush *br;
    QColorGroupPrivate * d;

    friend class QPalette;
};


class QPalette
{
public:
    QPalette();
    QPalette( const QColor &button );
    QPalette( const QColor &button, const QColor &background );
    QPalette( const QColorGroup &active, const QColorGroup &disabled,
              const QColorGroup &inactive );
    QPalette( const QPalette & );
    ~QPalette();
    QPalette &operator=( const QPalette & );

    enum ColorGroup { Disabled, Active, Inactive, NColorGroups, Normal=Active };

    const QColor &color( ColorGroup, QColorGroup::ColorRole ) const;
    const QBrush &brush( ColorGroup, QColorGroup::ColorRole ) const;
    void setColor( ColorGroup, QColorGroup::ColorRole, const QColor & );
    void setBrush( ColorGroup, QColorGroup::ColorRole, const QBrush & );

    void setColor( QColorGroup::ColorRole, const QColor & );
    void setBrush( QColorGroup::ColorRole, const QBrush & );

    QPalette copy() const;

    const QColorGroup &active() const { return data->active; }
    const QColorGroup &disabled() const { return data->disabled; }
    const QColorGroup &inactive() const { return data->inactive; }




    void setActive( const QColorGroup & );
    void setDisabled( const QColorGroup & );
    void setInactive( const QColorGroup & );




    bool operator==( const QPalette &p ) const;
    bool operator!=( const QPalette &p ) const
              { return !(operator==(p)); }
    bool isCopyOf( const QPalette & );

    int serialNumber() const { return data->ser_no; }


    static QColorGroup::ColorRole foregroundRoleFromMode( Qt::BackgroundMode mode );
    static QColorGroup::ColorRole backgroundRoleFromMode( Qt::BackgroundMode mode);

private:
    void detach();
    const QBrush &directBrush( ColorGroup, QColorGroup::ColorRole ) const;
    void directSetBrush( ColorGroup, QColorGroup::ColorRole, const QBrush& );

    struct QPalData : public QShared {
        QColorGroup disabled;
        QColorGroup active;
        int ser_no;
        QColorGroup inactive;
    } *data;
};







 QDataStream &operator<<( QDataStream &, const QColorGroup & );
 QDataStream &operator>>( QDataStream &, QColorGroup & );

 QDataStream &operator<<( QDataStream &, const QPalette & );
 QDataStream &operator>>( QDataStream &, QPalette & );
# 46 "/coolo/prod/qt-copy/include/qwidget.h" 2
# 1 "/coolo/prod/qt-copy/include/qfont.h" 1
# 39 "/coolo/prod/qt-copy/include/qfont.h"







class QFontPrivate;
class QStringList;
class QTextFormatCollection;

class QFont
{
public:
    enum StyleHint {
        Helvetica, SansSerif = Helvetica,
        Times, Serif = Times,
        Courier, TypeWriter = Courier,
        OldEnglish, Decorative = OldEnglish,
        System,
        AnyStyle
    };

    enum StyleStrategy {
        PreferDefault = 0x0001,
        PreferBitmap = 0x0002,
        PreferDevice = 0x0004,
        PreferOutline = 0x0008,
        ForceOutline = 0x0010,
        PreferMatch = 0x0020,
        PreferQuality = 0x0040,
        PreferAntialias = 0x0080,
        NoAntialias = 0x0100,
        OpenGLCompatible = 0x0200
    };

    enum Weight {
        Light = 25,
        Normal = 50,
        DemiBold = 63,
        Bold = 75,
        Black = 87
    };

    enum Stretch {
        UltraCondensed = 50,
        ExtraCondensed = 62,
        Condensed = 75,
        SemiCondensed = 87,
        Unstretched = 100,
        SemiExpanded = 112,
        Expanded = 125,
        ExtraExpanded = 150,
        UltraExpanded = 200
    };


    QFont();





    QFont( const QString &family, int pointSize = -1, int weight = -1,
           bool italic = FALSE );


    QFont( const QFont & );

    ~QFont();

    QString family() const;
    void setFamily( const QString &);

    int pointSize() const;
    float pointSizeFloat() const;
    void setPointSize( int );
    void setPointSizeFloat( float );

    int pixelSize() const;
    void setPixelSize( int );
    void setPixelSizeFloat( float );

    int weight() const;
    void setWeight( int );

    bool bold() const;
    void setBold( bool );

    bool italic() const;
    void setItalic( bool );

    bool underline() const;
    void setUnderline( bool );

    bool overline() const;
    void setOverline( bool );

    bool strikeOut() const;
    void setStrikeOut( bool );

    bool fixedPitch() const;
    void setFixedPitch( bool );

    StyleHint styleHint() const;
    StyleStrategy styleStrategy() const;
    void setStyleHint( StyleHint, StyleStrategy = PreferDefault );
    void setStyleStrategy( StyleStrategy s );

    int stretch() const;
    void setStretch( int );


    bool rawMode() const;
    void setRawMode( bool );


    bool exactMatch() const;

    QFont &operator=( const QFont & );
    bool operator==( const QFont & ) const;
    bool operator!=( const QFont & ) const;
    bool isCopyOf( const QFont & ) const;





    Qt::HANDLE handle() const;




    void setRawName( const QString & );
    QString rawName() const;

    QString key() const;

    QString toString() const;
    bool fromString(const QString &);


    static QString substitute(const QString &);
    static QStringList substitutes(const QString &);
    static QStringList substitutions();
    static void insertSubstitution(const QString&, const QString &);
    static void insertSubstitutions(const QString&, const QStringList &);
    static void removeSubstitution(const QString &);

    static void initialize();
    static void cleanup();

    static void cacheStatistics();
# 203 "/coolo/prod/qt-copy/include/qfont.h"
    enum Script {

        Latin,
        Greek,
        Cyrillic,
        Armenian,
        Georgian,
        Runic,
        Ogham,
        SpacingModifiers,
        CombiningMarks,


        Hebrew,
        Arabic,
        Syriac,
        Thaana,


        Devanagari,
        Bengali,
        Gurmukhi,
        Gujarati,
        Oriya,
        Tamil,
        Telugu,
        Kannada,
        Malayalam,
        Sinhala,
        Thai,
        Lao,
        Tibetan,
        Myanmar,
        Khmer,


        Han,
        Hiragana,
        Katakana,
        Hangul,
        Bopomofo,
        Yi,


        Ethiopic,
        Cherokee,
        CanadianAboriginal,
        Mongolian,


        CurrencySymbols,
        LetterlikeSymbols,
        NumberForms,
        MathematicalOperators,
        TechnicalSymbols,
        GeometricSymbols,
        MiscellaneousSymbols,
        EnclosedAndSquare,
        Braille,

        Unicode,


        Tagalog,
        Hanunoo,
        Buhid,
        Tagbanwa,

        KatakanaHalfWidth,


        NScripts,
        UnknownScript = NScripts,

        NoScript,





        Han_Japanese,
        Han_SimplifiedChinese,
        Han_TraditionalChinese,
        Han_Korean,

        LastPrivateScript

    };

    QString defaultFamily() const;
    QString lastResortFamily() const;
    QString lastResortFont() const;
# 303 "/coolo/prod/qt-copy/include/qfont.h"
    QFont resolve( const QFont & ) const;

protected:

    bool dirty() const;
    int deciPointSize() const;

private:
    QFont( QFontPrivate *, QPaintDevice *pd );

    void detach();




    void x11SetScreen( int screen = -1 );
    int x11Screen() const;


    friend class QFontMetrics;
    friend class QFontInfo;
    friend class QPainter;
    friend class QPSPrinterFont;
    friend class QApplication;
    friend class QWidget;
    friend class QTextFormatCollection;
    friend class QTextLayout;
    friend class QTextItem;


    friend QDataStream &operator<<( QDataStream &, const QFont & );
    friend QDataStream &operator>>( QDataStream &, QFont & );


    QFontPrivate *d;
};


inline bool QFont::bold() const
{ return weight() > Normal; }


inline void QFont::setBold( bool enable )
{ setWeight( enable ? Bold : Normal ); }
# 356 "/coolo/prod/qt-copy/include/qfont.h"
 QDataStream &operator<<( QDataStream &, const QFont & );
 QDataStream &operator>>( QDataStream &, QFont & );
# 47 "/coolo/prod/qt-copy/include/qwidget.h" 2
# 1 "/coolo/prod/qt-copy/include/qfontmetrics.h" 1
# 39 "/coolo/prod/qt-copy/include/qfontmetrics.h"
# 50 "/coolo/prod/qt-copy/include/qfontmetrics.h"
class QTextCodec;
class QTextParag;

class QFontMetrics
{
public:
    QFontMetrics( const QFont & );
    QFontMetrics( const QFont &, QFont::Script );
    QFontMetrics( const QFontMetrics & );
    ~QFontMetrics();

    QFontMetrics &operator=( const QFontMetrics & );

    int ascent() const;
    int descent() const;
    int height() const;
    int leading() const;
    int lineSpacing() const;
    int minLeftBearing() const;
    int minRightBearing() const;
    int maxWidth() const;

    bool inFont(QChar) const;

    int leftBearing(QChar) const;
    int rightBearing(QChar) const;
    int width( const QString &, int len = -1 ) const;

    int width( QChar ) const;




    int charWidth( const QString &str, int pos ) const;
    QRect boundingRect( const QString &, int len = -1 ) const;
    QRect boundingRect( QChar ) const;
    QRect boundingRect( int x, int y, int w, int h, int flags,
                              const QString& str, int len=-1, int tabstops=0,
                              int *tabarray=0, QTextParag **intern=0 ) const;
    QSize size( int flags,
                      const QString& str, int len=-1, int tabstops=0,
                      int *tabarray=0, QTextParag **intern=0 ) const;

    int underlinePos() const;
    int overlinePos() const;
    int strikeOutPos() const;
    int lineWidth() const;

private:
    QFontMetrics( const QPainter * );

    friend class QWidget;
    friend class QPainter;
    friend class QTextFormat;




    QFontPrivate *d;
    QPainter *painter;
    int fscript;
};
# 48 "/coolo/prod/qt-copy/include/qwidget.h" 2
# 1 "/coolo/prod/qt-copy/include/qfontinfo.h" 1
# 39 "/coolo/prod/qt-copy/include/qfontinfo.h"






class QFontInfo
{
public:
    QFontInfo( const QFont & );
    QFontInfo( const QFont &, QFont::Script );
    QFontInfo( const QFontInfo & );
    ~QFontInfo();

    QFontInfo &operator=( const QFontInfo & );

    QString family() const;
    int pixelSize() const;
    int pointSize() const;
    bool italic() const;
    int weight() const;
    bool bold() const;
    bool underline() const;
    bool overline() const;
    bool strikeOut() const;
    bool fixedPitch() const;
    QFont::StyleHint styleHint() const;
    bool rawMode() const;

    bool exactMatch() const;


private:
    QFontInfo( const QPainter * );

    QFontPrivate *d;
    QPainter *painter;
    int fscript;

    friend class QWidget;
    friend class QPainter;
};


inline bool QFontInfo::bold() const
{ return weight() > QFont::Normal; }
# 49 "/coolo/prod/qt-copy/include/qwidget.h" 2
# 1 "/coolo/prod/qt-copy/include/qsizepolicy.h" 1
# 39 "/coolo/prod/qt-copy/include/qsizepolicy.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qsizepolicy.h" 2




class QSizePolicy
{
private:
    enum { HSize = 6, HMask = 0x3f, VMask = HMask << HSize,
           MayGrow = 1, ExpMask = 2, MayShrink = 4 };
public:
    enum SizeType { Fixed = 0,
                    Minimum = MayGrow,
                    Maximum = MayShrink,
                    Preferred = MayGrow | MayShrink,
                    MinimumExpanding = MayGrow | ExpMask,
                    Expanding = MayGrow | MayShrink | ExpMask,
                    Ignored = ExpMask };

    enum ExpandData { NoDirection = 0,
                      Horizontally = 1,
                      Vertically = 2,




                      BothDirections = Horizontally | Vertically };

    QSizePolicy() : data( 0 ) { }

    QSizePolicy( SizeType hor, SizeType ver, bool hfw = FALSE )
        : data( hor | (ver<<HSize) | (hfw ? (Q_UINT32)(1<<2*HSize) : 0) ) { }
    QSizePolicy( SizeType hor, SizeType ver, uchar hors, uchar vers, bool hfw = FALSE );

    SizeType horData() const { return (SizeType)( data & HMask ); }
    SizeType verData() const { return (SizeType)( (data & VMask) >> HSize ); }

    bool mayShrinkHorizontally() const { return horData() & MayShrink || horData() == Ignored; }
    bool mayShrinkVertically() const { return verData() & MayShrink || verData() == Ignored; }
    bool mayGrowHorizontally() const { return horData() & MayGrow || horData() == Ignored; }
    bool mayGrowVertically() const { return verData() & MayGrow || verData() == Ignored; }

    ExpandData expanding() const
    {
        return (ExpandData)( (int)(verData() & ExpMask ? Vertically : 0) |
                             (int)(horData() & ExpMask ? Horizontally : 0) );
    }

    void setHorData( SizeType d ) { data = (Q_UINT32)(data & ~HMask) | d; }
    void setVerData( SizeType d ) { data = (Q_UINT32)(data & ~(HMask << HSize)) |
                                           (d << HSize); }

    void setHeightForWidth( bool b ) { data = b ? (Q_UINT32)( data | ( 1 << 2*HSize ) )
                                              : (Q_UINT32)( data & ~( 1 << 2*HSize ) ); }
    bool hasHeightForWidth() const { return data & ( 1 << 2*HSize ); }

    bool operator==( const QSizePolicy& s ) const { return data == s.data; }
    bool operator!=( const QSizePolicy& s ) const { return data != s.data; }


    uint horStretch() const { return data >> 24; }
    uint verStretch() const { return (data >> 16) & 0xff; }
    void setHorStretch( uchar sf ) { data = (data&0x00ffffff) | (uint(sf)<<24); }
    void setVerStretch( uchar sf ) { data = (data&0xff00ffff) | (uint(sf)<<16); }
    inline void transpose();

private:
    QSizePolicy( int i ) : data( (Q_UINT32)i ) { }

    Q_UINT32 data;
};

inline QSizePolicy::QSizePolicy( SizeType hor, SizeType ver, uchar hors, uchar vers, bool hfw )
    : data( hor | (ver<<HSize) | (hfw ? (Q_UINT32)(1<<2*HSize) : 0) ) {
    setHorStretch( hors );
    setVerStretch( vers );
}

inline void QSizePolicy::transpose() {
    *this = QSizePolicy( verData(), horData(), verStretch(), horStretch(),
                         hasHeightForWidth() );
}
# 50 "/coolo/prod/qt-copy/include/qwidget.h" 2


class QLayout;
struct QWExtra;
struct QTLWExtra;
class QFocusData;
class QCursor;
class QWSRegionManager;
class QStyle;

class QWidget : public QObject, public QPaintDevice
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

   
   


   
   
   

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

public:
    explicit QWidget( QWidget* parent=0, const char* name=0, WFlags f=0 );
    ~QWidget();

    WId winId() const;
    void setName( const char *name );



    QStyle &style() const;
    void setStyle( QStyle * );
    QStyle* setStyle( const QString& );



    bool isTopLevel() const;
    bool isDialog() const;
    bool isPopup() const;
    bool isDesktop() const;
    bool isModal() const;

    bool isEnabled() const;
    bool isEnabledTo(QWidget*) const;
    bool isEnabledToTLW() const;

public :
    virtual void setEnabled( bool );
    void setDisabled( bool );



public:
    QRect frameGeometry() const;
    const QRect &geometry() const;
    int x() const;
    int y() const;
    QPoint pos() const;
    QSize frameSize() const;
    QSize size() const;
    int width() const;
    int height() const;
    QRect rect() const;
    QRect childrenRect() const;
    QRegion childrenRegion() const;

    QSize minimumSize() const;
    QSize maximumSize() const;
    int minimumWidth() const;
    int minimumHeight() const;
    int maximumWidth() const;
    int maximumHeight() const;
    void setMinimumSize( const QSize & );
    virtual void setMinimumSize( int minw, int minh );
    void setMaximumSize( const QSize & );
    virtual void setMaximumSize( int maxw, int maxh );
    void setMinimumWidth( int minw );
    void setMinimumHeight( int minh );
    void setMaximumWidth( int maxw );
    void setMaximumHeight( int maxh );

    QSize sizeIncrement() const;
    void setSizeIncrement( const QSize & );
    virtual void setSizeIncrement( int w, int h );
    QSize baseSize() const;
    void setBaseSize( const QSize & );
    void setBaseSize( int basew, int baseh );

    void setFixedSize( const QSize & );
    void setFixedSize( int w, int h );
    void setFixedWidth( int w );
    void setFixedHeight( int h );



    QPoint mapToGlobal( const QPoint & ) const;
    QPoint mapFromGlobal( const QPoint & ) const;
    QPoint mapToParent( const QPoint & ) const;
    QPoint mapFromParent( const QPoint & ) const;
    QPoint mapTo( QWidget *, const QPoint & ) const;
    QPoint mapFrom( QWidget *, const QPoint & ) const;

    QWidget *topLevelWidget() const;



    BackgroundMode backgroundMode() const;
    virtual void setBackgroundMode( BackgroundMode );
    void setBackgroundMode( BackgroundMode, BackgroundMode );

    const QColor & foregroundColor() const;

    const QColor & eraseColor() const;
    virtual void setEraseColor( const QColor & );

    const QPixmap * erasePixmap() const;
    virtual void setErasePixmap( const QPixmap & );


    const QColorGroup & colorGroup() const;
    const QPalette & palette() const;
    bool ownPalette() const;
    virtual void setPalette( const QPalette & );
    void unsetPalette();


    const QColor & paletteForegroundColor() const;
    void setPaletteForegroundColor( const QColor & );

    const QColor & paletteBackgroundColor() const;
    virtual void setPaletteBackgroundColor( const QColor & );

    const QPixmap * paletteBackgroundPixmap() const;
    virtual void setPaletteBackgroundPixmap( const QPixmap & );

    const QBrush& backgroundBrush() const;

    QFont font() const;
    bool ownFont() const;
    virtual void setFont( const QFont & );
    void unsetFont();
    QFontMetrics fontMetrics() const;
    QFontInfo fontInfo() const;


    const QCursor &cursor() const;
    bool ownCursor() const;
    virtual void setCursor( const QCursor & );
    virtual void unsetCursor();


    QString caption() const;
    const QPixmap *icon() const;
    QString iconText() const;

    bool hasMouseTracking() const;
    bool hasMouse() const;

    virtual void setMask( const QBitmap & );
    virtual void setMask( const QRegion & );
    void clearMask();

    const QColor & backgroundColor() const;
    virtual void setBackgroundColor( const QColor & );
    const QPixmap * backgroundPixmap() const;
    virtual void setBackgroundPixmap( const QPixmap & );

public :

    virtual void setCaption( const QString &);
    virtual void setIcon( const QPixmap & );
    virtual void setIconText( const QString &);

    virtual void setMouseTracking( bool enable );



    virtual void setFocus();
    void clearFocus();

public:
    enum FocusPolicy {
        NoFocus = 0,
        TabFocus = 0x1,
        ClickFocus = 0x2,
        StrongFocus = TabFocus | ClickFocus | 0x8,
        WheelFocus = StrongFocus | 0x4
    };

    bool isActiveWindow() const;
    virtual void setActiveWindow();
    bool isFocusEnabled() const;

    FocusPolicy focusPolicy() const;
    virtual void setFocusPolicy( FocusPolicy );
    bool hasFocus() const;
    static void setTabOrder( QWidget *, QWidget * );
    virtual void setFocusProxy( QWidget * );
    QWidget * focusProxy() const;

    void setInputMethodEnabled( bool b );
    bool isInputMethodEnabled() const;


    void grabMouse();

    void grabMouse( const QCursor & );

    void releaseMouse();
    void grabKeyboard();
    void releaseKeyboard();
    static QWidget * mouseGrabber();
    static QWidget * keyboardGrabber();



    bool isUpdatesEnabled() const;




public :
    virtual void setUpdatesEnabled( bool enable );
    void update();
    void update( int x, int y, int w, int h );
    void update( const QRect& );
    void repaint();
    void repaint( bool erase );
    void repaint( int x, int y, int w, int h, bool erase=TRUE );
    void repaint( const QRect &, bool erase = TRUE );
    void repaint( const QRegion &, bool erase = TRUE );



    virtual void show();
    virtual void hide();
    void setShown( bool show );
    void setHidden( bool hide );



    virtual void showMinimized();
    virtual void showMaximized();
    void showFullScreen();
    virtual void showNormal();
    virtual void polish();
    void constPolish() const;
    bool close();

    void raise();
    void lower();
    void stackUnder( QWidget* );
    virtual void move( int x, int y );
    void move( const QPoint & );
    virtual void resize( int w, int h );
    void resize( const QSize & );
    virtual void setGeometry( int x, int y, int w, int h );
    virtual void setGeometry( const QRect & );

public:
    virtual bool close( bool alsoDelete );
    bool isVisible() const;
    bool isVisibleTo(QWidget*) const;
    bool isVisibleToTLW() const;
    QRect visibleRect() const;
    bool isHidden() const;
    bool isShown() const;
    bool isMinimized() const;
    bool isMaximized() const;
    bool isFullScreen() const;

    virtual QSize sizeHint() const;
    virtual QSize minimumSizeHint() const;
    virtual QSizePolicy sizePolicy() const;
    virtual void setSizePolicy( QSizePolicy );
    void setSizePolicy( QSizePolicy::SizeType hor, QSizePolicy::SizeType ver, bool hfw = FALSE );
    virtual int heightForWidth(int) const;

    QRegion clipRegion() const;


public :
    virtual void adjustSize();

public:

    QLayout * layout() const { return lay_out; }

    void updateGeometry();
    virtual void reparent( QWidget *parent, WFlags, const QPoint &,
                                  bool showIt=FALSE );
    void reparent( QWidget *parent, const QPoint &,
                                  bool showIt=FALSE );





    void erase();
    void erase( int x, int y, int w, int h );
    void erase( const QRect & );
    void erase( const QRegion & );
    void scroll( int dx, int dy );
    void scroll( int dx, int dy, const QRect& );

    void drawText( int x, int y, const QString &);
    void drawText( const QPoint &, const QString &);



    QWidget * focusWidget() const;
    QRect microFocusHint() const;



    bool acceptDrops() const;
    virtual void setAcceptDrops( bool on );



    virtual void setAutoMask(bool);
    bool autoMask() const;

    enum BackgroundOrigin { WidgetOrigin, ParentOrigin, WindowOrigin, AncestorOrigin };

    virtual void setBackgroundOrigin( BackgroundOrigin );
    BackgroundOrigin backgroundOrigin() const;
    QPoint backgroundOffset() const;


    virtual bool customWhatsThis() const;

    QWidget * parentWidget( bool sameWindow = FALSE ) const;
    WState testWState( WState s ) const;
    WFlags testWFlags( WFlags f ) const;
    static QWidget * find( WId );
    static QWidgetMapper *wmapper();

    QWidget *childAt( int x, int y, bool includeThis = FALSE ) const;
    QWidget *childAt( const QPoint &, bool includeThis = FALSE ) const;
# 464 "/coolo/prod/qt-copy/include/qwidget.h"
protected:

    bool event( QEvent * );
    virtual void mousePressEvent( QMouseEvent * );
    virtual void mouseReleaseEvent( QMouseEvent * );
    virtual void mouseDoubleClickEvent( QMouseEvent * );
    virtual void mouseMoveEvent( QMouseEvent * );

    virtual void wheelEvent( QWheelEvent * );

    virtual void keyPressEvent( QKeyEvent * );
    virtual void keyReleaseEvent( QKeyEvent * );
    virtual void focusInEvent( QFocusEvent * );
    virtual void focusOutEvent( QFocusEvent * );
    virtual void enterEvent( QEvent * );
    virtual void leaveEvent( QEvent * );
    virtual void paintEvent( QPaintEvent * );
    virtual void moveEvent( QMoveEvent * );
    virtual void resizeEvent( QResizeEvent * );
    virtual void closeEvent( QCloseEvent * );
    virtual void contextMenuEvent( QContextMenuEvent * );
    virtual void imStartEvent( QIMEvent * );
    virtual void imComposeEvent( QIMEvent * );
    virtual void imEndEvent( QIMEvent * );
    virtual void tabletEvent( QTabletEvent * );


    virtual void dragEnterEvent( QDragEnterEvent * );
    virtual void dragMoveEvent( QDragMoveEvent * );
    virtual void dragLeaveEvent( QDragLeaveEvent * );
    virtual void dropEvent( QDropEvent * );


    virtual void showEvent( QShowEvent * );
    virtual void hideEvent( QHideEvent * );
# 507 "/coolo/prod/qt-copy/include/qwidget.h"
    virtual bool x11Event( XEvent * );







    virtual void updateMask();




    virtual void styleChange( QStyle& );

    virtual void enabledChange( bool oldEnabled );

    virtual void paletteChange( const QPalette & );

    virtual void fontChange( const QFont & );
    virtual void windowActivationChange( bool oldActive );

    int metric( int ) const;

    void resetInputContext();

    virtual void create( WId = 0, bool initializeWindow = TRUE,
                         bool destroyOldWindow = TRUE );
    virtual void destroy( bool destroyWindow = TRUE,
                          bool destroySubWindows = TRUE );
    uint getWState() const;
    virtual void setWState( uint );
    void clearWState( uint n );
    WFlags getWFlags() const;
    virtual void setWFlags( WFlags );
    void clearWFlags( WFlags n );

    virtual bool focusNextPrevChild( bool next );

    QWExtra *extraData();
    QTLWExtra *topData();
    QFocusData *focusData();

    virtual void setKeyCompression(bool);
    virtual void setMicroFocusHint(int x, int y, int w, int h, bool text=TRUE, QFont *f = 0);
# 560 "/coolo/prod/qt-copy/include/qwidget.h"
private :
    void focusProxyDestroyed();

private:
    void setFontSys( QFont *f = 0 );

    void createInputContext();
    void destroyInputContext();
    void focusInputContext();
    void checkChildrenDnd();
# 590 "/coolo/prod/qt-copy/include/qwidget.h"
    void setLayout( QLayout *l );

    void setWinId( WId );
    void showWindow();
    void hideWindow();
    void showChildren( bool spontaneous );
    void hideChildren( bool spontaneous );
    void reparentSys( QWidget *parent, WFlags, const QPoint &, bool showIt);
    void createTLExtra();
    void createExtra();
    void deleteExtra();
    void createSysExtra();
    void deleteSysExtra();
    void createTLSysExtra();
    void deleteTLSysExtra();
    void deactivateWidgetCleanup();
    void internalSetGeometry( int, int, int, int, bool );
    void reparentFocusWidgets( QWidget * );
    QFocusData *focusData( bool create );
    void setBackgroundFromMode();
    void setBackgroundColorDirect( const QColor & );
    void setBackgroundPixmapDirect( const QPixmap & );
    void setBackgroundModeDirect( BackgroundMode );
    void setBackgroundEmpty();
    void updateFrameStrut() const;

    void setBackgroundX11Relative();


    WId winid;
    uint widget_state;
    uint widget_flags;
    uint focus_policy : 4;
    uint own_font :1;
    uint own_palette :1;
    uint sizehint_forced :1;
    uint is_closing :1;
    uint in_show : 1;
    uint in_show_maximized : 1;
    uint fstrut_dirty : 1;
    uint im_enabled : 1;
    QRect crect;
    QColor bg_col;

    QPalette pal;

    QFont fnt;

    QLayout *lay_out;

    QWExtra *extra;
# 674 "/coolo/prod/qt-copy/include/qwidget.h"
    static int instanceCounter;
    static int maxInstances;

    static void createMapper();
    static void destroyMapper();
    static QWidgetList *wList();
    static QWidgetList *tlwList();
    static QWidgetMapper *mapper;
    friend class QApplication;
    friend class QBaseApplication;
    friend class QPainter;
    friend class QFontMetrics;
    friend class QFontInfo;
    friend class QETWidget;
    friend class QLayout;

private:

    QWidget( const QWidget & );
    QWidget &operator=( const QWidget & );


public:

    void setPalette( const QPalette &p, bool ) { setPalette( p ); }

    void setFont( const QFont &f, bool ) { setFont( f ); }
};


inline Qt::WState QWidget::testWState( WState s ) const
{ return (widget_state & s); }

inline Qt::WFlags QWidget::testWFlags( WFlags f ) const
{ return (widget_flags & f); }


inline WId QWidget::winId() const
{ return winid; }

inline bool QWidget::isTopLevel() const
{ return testWFlags(WType_TopLevel); }

inline bool QWidget::isDialog() const
{ return testWFlags(WType_Dialog); }

inline bool QWidget::isPopup() const
{ return testWFlags(WType_Popup); }

inline bool QWidget::isDesktop() const
{ return testWFlags(WType_Desktop); }

inline bool QWidget::isEnabled() const
{ return !testWState(WState_Disabled); }

inline bool QWidget::isModal() const
{ return testWFlags(WShowModal); }

inline bool QWidget::isEnabledToTLW() const
{ return isEnabled(); }

inline const QRect &QWidget::geometry() const
{ return crect; }

inline QSize QWidget::size() const
{ return crect.size(); }

inline int QWidget::width() const
{ return crect.width(); }

inline int QWidget::height() const
{ return crect.height(); }

inline QRect QWidget::rect() const
{ return QRect(0,0,crect.width(),crect.height()); }

inline int QWidget::minimumWidth() const
{ return minimumSize().width(); }

inline int QWidget::minimumHeight() const
{ return minimumSize().height(); }

inline int QWidget::maximumWidth() const
{ return maximumSize().width(); }

inline int QWidget::maximumHeight() const
{ return maximumSize().height(); }

inline void QWidget::setMinimumSize( const QSize &s )
{ setMinimumSize(s.width(),s.height()); }

inline void QWidget::setMaximumSize( const QSize &s )
{ setMaximumSize(s.width(),s.height()); }

inline void QWidget::setSizeIncrement( const QSize &s )
{ setSizeIncrement(s.width(),s.height()); }

inline void QWidget::setBaseSize( const QSize &s )
{ setBaseSize(s.width(),s.height()); }

inline const QColor &QWidget::eraseColor() const
{ return bg_col; }


inline const QPalette &QWidget::palette() const
{ return pal; }


inline QFont QWidget::font() const
{ return fnt; }

inline QFontMetrics QWidget::fontMetrics() const
{ return QFontMetrics(font()); }

inline QFontInfo QWidget::fontInfo() const
{ return QFontInfo(font()); }

inline bool QWidget::hasMouseTracking() const
{ return testWState(WState_MouseTracking); }

inline bool QWidget::hasMouse() const
{ return testWState(WState_HasMouse); }

inline bool QWidget::isFocusEnabled() const
{ return (FocusPolicy)focus_policy != NoFocus; }

inline QWidget::FocusPolicy QWidget::focusPolicy() const
{ return (FocusPolicy)focus_policy; }

inline bool QWidget::isUpdatesEnabled() const
{ return !testWState(WState_BlockUpdates); }

inline void QWidget::update( const QRect &r )
{ update( r.x(), r.y(), r.width(), r.height() ); }

inline void QWidget::repaint()
{ repaint( TRUE ); }

inline void QWidget::repaint( const QRect &r, bool erase )
{ repaint( r.x(), r.y(), r.width(), r.height(), erase ); }

inline void QWidget::erase()
{ erase( 0, 0, crect.width(), crect.height() ); }

inline void QWidget::erase( const QRect &r )
{ erase( r.x(), r.y(), r.width(), r.height() ); }

inline bool QWidget::close()
{ return close( FALSE ); }

inline bool QWidget::isVisible() const
{ return testWState(WState_Visible); }

inline bool QWidget::isVisibleToTLW() const
{ return isVisible(); }

inline bool QWidget::isHidden() const
{ return testWState(WState_ForceHide); }

inline bool QWidget::isShown() const
{ return !testWState(WState_ForceHide); }

inline void QWidget::move( const QPoint &p )
{ move( p.x(), p.y() ); }

inline void QWidget::resize( const QSize &s )
{ resize( s.width(), s.height()); }

inline void QWidget::setGeometry( const QRect &r )
{ setGeometry( r.left(), r.top(), r.width(), r.height() ); }

inline void QWidget::drawText( const QPoint &p, const QString &s )
{ drawText( p.x(), p.y(), s ); }

inline QWidget *QWidget::parentWidget( bool sameWindow ) const
{
    if ( sameWindow )
        return isTopLevel() ? 0 : (QWidget *)QObject::parent();
    return (QWidget *)QObject::parent();
}

inline QWidgetMapper *QWidget::wmapper()
{ return mapper; }

inline uint QWidget::getWState() const
{ return widget_state; }

inline void QWidget::setWState( uint f )
{ widget_state |= f; }

inline void QWidget::clearWState( uint f )
{ widget_state &= ~f; }

inline Qt::WFlags QWidget::getWFlags() const
{ return widget_flags; }

inline void QWidget::setWFlags( WFlags f )
{ widget_flags |= f; }

inline void QWidget::clearWFlags( WFlags f )
{ widget_flags &= ~f; }

inline void QWidget::constPolish() const
{
    if ( !testWState(WState_Polished) ) {
        QWidget* that = (QWidget*) this;
        that->polish();
        that->setWState(WState_Polished);
    }
}

inline bool QWidget::ownCursor() const
{
    return testWState( WState_OwnCursor );
}

inline bool QWidget::ownFont() const
{
    return own_font;
}

inline bool QWidget::ownPalette() const
{
    return own_palette;
}


inline void QWidget::setSizePolicy( QSizePolicy::SizeType hor, QSizePolicy::SizeType ver, bool hfw )
{
    setSizePolicy( QSizePolicy( hor, ver, hfw) );
}

inline bool QWidget::isInputMethodEnabled() const
{
    return (bool)im_enabled;
}





class QFocusData;
class QWSManager;







struct QTLWExtra {

    QString caption;
    QString iconText;
    QPixmap *icon;

    QFocusData *focusData;
    short incw, inch;

    ulong fleft, fright, ftop, fbottom;
    uint iconic: 1;
    uint fullscreen : 1;
    uint showMode: 2;
    uint savedFlags;
    short basew, baseh;

    WId parentWinId;
    uint embedded : 1;
    uint spont_unmapped: 1;
    uint reserved: 1;
    uint dnd : 1;
    uint uspos : 1;
    uint ussize : 1;
    void *xic;
# 961 "/coolo/prod/qt-copy/include/qwidget.h"
    QRect normalGeometry;
};





struct QWExtra {
    Q_INT16 minw, minh;
    Q_INT16 maxw, maxh;
    QPixmap *bg_pix;
    QWidget *focus_proxy;

    QCursor *curs;

    QTLWExtra *topextra;




    WId xDndProxy;
# 995 "/coolo/prod/qt-copy/include/qwidget.h"
    uint bg_origin : 2;

    uint children_use_dnd : 1;
    uint compress_events : 1;




    char bg_mode;
    char bg_mode_visual;

    QStyle* style;

    QRect micro_focus_hint;
    QSizePolicy size_policy;
};

# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 1014 "/coolo/prod/qt-copy/include/qwidget.h" 2
# 43 "/coolo/prod/qt-copy/include/qwidgetlist.h" 2



class QWidgetList : public QPtrList<QWidget>
{
public:
    QWidgetList() : QPtrList<QWidget>() {}
    QWidgetList( const QWidgetList &list ) : QPtrList<QWidget>(list) {}
   ~QWidgetList() { clear(); }
    QWidgetList &operator=(const QWidgetList &list)
        { return (QWidgetList&)QPtrList<QWidget>::operator=(list); }
};

class QWidgetListIt : public QPtrListIterator<QWidget>
{
public:
    QWidgetListIt( const QWidgetList &l ) : QPtrListIterator<QWidget>(l) {}
    QWidgetListIt &operator=(const QWidgetListIt &i)
        { return (QWidgetListIt&)QPtrListIterator<QWidget>::operator=(i); }
};
# 31 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2


# 1 "/coolo/prod/qt-copy/include/qmessagebox.h" 1
# 39 "/coolo/prod/qt-copy/include/qmessagebox.h"


# 1 "/coolo/prod/qt-copy/include/qdialog.h" 1
# 39 "/coolo/prod/qt-copy/include/qdialog.h"
# 49 "/coolo/prod/qt-copy/include/qdialog.h"
class QPushButton;
class QDialogPrivate;

class QDialog : public QWidget
{
friend class QPushButton;
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   

public:
    explicit QDialog( QWidget* parent=0, const char* name=0, bool modal=FALSE,
             WFlags f=0 );
    ~QDialog();

    enum DialogCode { Rejected, Accepted };

    int result() const { return rescode; }

    void show();
    void hide();
    void move( int x, int y );
    void move( const QPoint &p );
    void resize( int w, int h );
    void resize( const QSize & );
    void setGeometry( int x, int y, int w, int h );
    void setGeometry( const QRect & );

    void setOrientation( Orientation orientation );
    Orientation orientation() const;

    void setExtension( QWidget* extension );
    QWidget* extension() const;

    QSize sizeHint() const;
    QSize minimumSizeHint() const;

    void setSizeGripEnabled( bool );
    bool isSizeGripEnabled() const;

    void setModal( bool modal );
    bool isModal() const;

public :
    int exec();

protected :
    virtual void done( int );
    virtual void accept();
    virtual void reject();

    void showExtension( bool );

protected:
    void setResult( int r ) { rescode = r; }
    void keyPressEvent( QKeyEvent * );
    void closeEvent( QCloseEvent * );
    void resizeEvent( QResizeEvent * );
    void contextMenuEvent( QContextMenuEvent * );
    bool eventFilter( QObject *, QEvent * );
    void adjustPosition( QWidget*);

private:
    void setDefault( QPushButton * );
    void hideDefault();
    int rescode;
    uint did_move : 1;
    uint has_relpos : 1;
    uint did_resize : 1;
    uint in_loop: 1;
    void adjustPositionInternal( QWidget*, bool useRelPos = FALSE );
    QDialogPrivate* d;

private:

    QDialog( const QDialog & );
    QDialog &operator=( const QDialog & );

};
# 43 "/coolo/prod/qt-copy/include/qmessagebox.h" 2




class QLabel;
class QPushButton;
struct QMessageBoxData;

class QMessageBox : public QDialog
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   
   
   
   

public:
    enum Icon { NoIcon = 0, Information = 1, Warning = 2, Critical = 3,
                Question = 4 };

    QMessageBox( QWidget* parent=0, const char* name=0 );
    QMessageBox( const QString& caption, const QString &text, Icon icon,
                 int button0, int button1, int button2,
                 QWidget* parent=0, const char* name=0, bool modal=TRUE,
                 WFlags f=WStyle_DialogBorder );
    ~QMessageBox();

    enum { NoButton = 0, Ok = 1, Cancel = 2, Yes = 3, No = 4, Abort = 5,
           Retry = 6, Ignore = 7, YesAll = 8, NoAll = 9, ButtonMask = 0xff,
           Default = 0x100, Escape = 0x200, FlagMask = 0x300 };

    static int information( QWidget *parent, const QString &caption,
                            const QString& text,
                            int button0, int button1=0, int button2=0 );
    static int information( QWidget *parent, const QString &caption,
                            const QString& text,
                            const QString& button0Text = QString::null,
                            const QString& button1Text = QString::null,
                            const QString& button2Text = QString::null,
                            int defaultButtonNumber = 0,
                            int escapeButtonNumber = -1 );

    static int question( QWidget *parent, const QString &caption,
                         const QString& text,
                         int button0, int button1=0, int button2=0 );
    static int question( QWidget *parent, const QString &caption,
                         const QString& text,
                         const QString& button0Text = QString::null,
                         const QString& button1Text = QString::null,
                         const QString& button2Text = QString::null,
                         int defaultButtonNumber = 0,
                         int escapeButtonNumber = -1 );

    static int warning( QWidget *parent, const QString &caption,
                        const QString& text,
                        int button0, int button1, int button2=0 );
    static int warning( QWidget *parent, const QString &caption,
                        const QString& text,
                        const QString& button0Text = QString::null,
                        const QString& button1Text = QString::null,
                        const QString& button2Text = QString::null,
                        int defaultButtonNumber = 0,
                        int escapeButtonNumber = -1 );

    static int critical( QWidget *parent, const QString &caption,
                         const QString& text,
                         int button0, int button1, int button2=0 );
    static int critical( QWidget *parent, const QString &caption,
                         const QString& text,
                         const QString& button0Text = QString::null,
                         const QString& button1Text = QString::null,
                         const QString& button2Text = QString::null,
                         int defaultButtonNumber = 0,
                         int escapeButtonNumber = -1 );

    static void about( QWidget *parent, const QString &caption,
                       const QString& text );

    static void aboutQt( QWidget *parent,
                         const QString& caption=QString::null );


    static int message( const QString &caption,
                        const QString& text,
                        const QString& buttonText=QString::null,
                        QWidget *parent=0, const char * =0 ) {
        return QMessageBox::information( parent, caption, text,
                                     buttonText.isEmpty()
                                     ? tr("OK") : buttonText ) == 0;
    }


    static bool query( const QString &caption,
                       const QString& text,
                       const QString& yesButtonText=QString::null,
                       const QString& noButtonText=QString::null,
                       QWidget *parent=0, const char * = 0 ) {
        return QMessageBox::information( parent, caption, text,
                                     yesButtonText.isEmpty()
                                     ? tr("OK") : yesButtonText,
                                     noButtonText ) == 0;
    }

    QString text() const;
    void setText( const QString &);

    Icon icon() const;

    void setIcon( Icon );
    void setIcon( const QPixmap & );

    const QPixmap *iconPixmap() const;
    void setIconPixmap( const QPixmap & );

    QString buttonText( int button ) const;
    void setButtonText( int button, const QString &);

    void adjustSize();


    static QPixmap standardIcon( Icon icon, GUIStyle );

    static QPixmap standardIcon( Icon icon );

    TextFormat textFormat() const;
    void setTextFormat( TextFormat );

protected:
    void resizeEvent( QResizeEvent * );
    void showEvent( QShowEvent * );
    void closeEvent( QCloseEvent * );
    void keyPressEvent( QKeyEvent * );
    void styleChanged( QStyle& );

private :
    void buttonClicked();

private:
    void init( int, int, int );
    int indexOf( int ) const;
    void resizeButtons();
    QLabel *label;
    QMessageBoxData *mbd;
    void *reserved1;
    void *reserved2;

private:

    QMessageBox( const QMessageBox & );
    QMessageBox &operator=( const QMessageBox & );

};
# 208 "/coolo/prod/qt-copy/include/qmessagebox.h"
# 34 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

# 1 "/coolo/prod/qt-copy/include/qregexp.h" 1
# 39 "/coolo/prod/qt-copy/include/qregexp.h"






class QRegExpEngine;
struct QRegExpPrivate;

class QRegExp
{
public:
    enum CaretMode { CaretAtZero, CaretAtOffset, CaretWontMatch };

    QRegExp();
    QRegExp( const QString& pattern, bool caseSensitive = TRUE,
             bool wildcard = FALSE );
    QRegExp( const QRegExp& rx );
    ~QRegExp();
    QRegExp& operator=( const QRegExp& rx );

    bool operator==( const QRegExp& rx ) const;
    bool operator!=( const QRegExp& rx ) const { return !operator==( rx ); }

    bool isEmpty() const;
    bool isValid() const;
    QString pattern() const;
    void setPattern( const QString& pattern );
    bool caseSensitive() const;
    void setCaseSensitive( bool sensitive );

    bool wildcard() const;
    void setWildcard( bool wildcard );

    bool minimal() const;
    void setMinimal( bool minimal );

    bool exactMatch( const QString& str ) const;
# 90 "/coolo/prod/qt-copy/include/qregexp.h"
    int search( const QString& str, int offset = 0 ) const;
    int search( const QString& str, int offset, CaretMode caretMode ) const;
    int searchRev( const QString& str, int offset = -1 ) const;
    int searchRev( const QString& str, int offset, CaretMode caretMode ) const;

    int matchedLength() const;

    int numCaptures() const;
    QStringList capturedTexts();
    QString cap( int nth = 0 );
    int pos( int nth = 0 );
    QString errorString();


    static QString escape( const QString& str );

private:
    void prepareEngine() const;
    void prepareEngineForMatch( const QString& str ) const;
    void invalidateEngine();

    static int caretIndex( int offset, CaretMode caretMode );

    QRegExpEngine *eng;
    QRegExpPrivate *priv;
};
# 36 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/qt-copy/include/qlineedit.h" 1
# 39 "/coolo/prod/qt-copy/include/qlineedit.h"

struct QLineEditPrivate;

class QValidator;
class QPopupMenu;


# 1 "/coolo/prod/qt-copy/include/qframe.h" 1
# 39 "/coolo/prod/qt-copy/include/qframe.h"







class QFrame : public QWidget
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   
   
   
   
   
   
   
   

public:
    QFrame( QWidget* parent=0, const char* name=0, WFlags f=0 );

    int frameStyle() const;
    virtual void setFrameStyle( int );

    int frameWidth() const;
    QRect contentsRect() const;


    bool lineShapesOk() const { return TRUE; }


    QSize sizeHint() const;

    enum Shape { NoFrame = 0,
                 Box = 0x0001,
                 Panel = 0x0002,
                 WinPanel = 0x0003,
                 HLine = 0x0004,
                 VLine = 0x0005,
                 StyledPanel = 0x0006,
                 PopupPanel = 0x0007,
                 MenuBarPanel = 0x0008,
                 ToolBarPanel = 0x0009,
                 LineEditPanel = 0x000a,
                 TabWidgetPanel = 0x000b,
                 GroupBoxPanel = 0x000c,
                 MShape = 0x000f
    };
    enum Shadow { Plain = 0x0010,
                  Raised = 0x0020,
                  Sunken = 0x0030,
                  MShadow = 0x00f0 };

    Shape frameShape() const;
    void setFrameShape( Shape );
    Shadow frameShadow() const;
    void setFrameShadow( Shadow );

    int lineWidth() const;
    virtual void setLineWidth( int );

    int margin() const;
    virtual void setMargin( int );

    int midLineWidth() const;
    virtual void setMidLineWidth( int );

    QRect frameRect() const;
    virtual void setFrameRect( const QRect & );

protected:
    void paintEvent( QPaintEvent * );
    void resizeEvent( QResizeEvent * );
    virtual void drawFrame( QPainter * );
    virtual void drawContents( QPainter * );
    virtual void frameChanged();
    void styleChange( QStyle& );

private:
    void updateFrameWidth(bool=FALSE);
    QRect frect;
    int fstyle;
    short lwidth;
    short mwidth;
    short mlwidth;
    short fwidth;

    void * d;
private:

    QFrame( const QFrame & );
    QFrame &operator=( const QFrame & );

};


inline int QFrame::frameStyle() const
{ return fstyle; }

inline QFrame::Shape QFrame::frameShape() const
{ return (Shape) ( fstyle & MShape ); }

inline QFrame::Shadow QFrame::frameShadow() const
{ return (Shadow) ( fstyle & MShadow ); }

inline void QFrame::setFrameShape( QFrame::Shape s )
{ setFrameStyle( ( fstyle & MShadow ) | s ); }

inline void QFrame::setFrameShadow( QFrame::Shadow s )
{ setFrameStyle( ( fstyle & MShape ) | s ); }

inline int QFrame::lineWidth() const
{ return lwidth; }

inline int QFrame::midLineWidth() const
{ return mlwidth; }

inline int QFrame::margin() const
{ return mwidth; }

inline int QFrame::frameWidth() const
{ return fwidth; }
# 48 "/coolo/prod/qt-copy/include/qlineedit.h" 2





class QTextParagraph;
class QTextCursor;

class QLineEdit : public QFrame
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

public:
    QLineEdit( QWidget* parent, const char* name=0 );
    QLineEdit( const QString &, QWidget* parent, const char* name=0 );
    QLineEdit( const QString &, const QString &, QWidget* parent, const char* name=0 );
    ~QLineEdit();

    QString text() const;

    QString displayText() const;

    int maxLength() const;

    bool frame() const;

    enum EchoMode { Normal, NoEcho, Password };
    EchoMode echoMode() const;

    bool isReadOnly() const;

    const QValidator * validator() const;

    QSize sizeHint() const;
    QSize minimumSizeHint() const;

    int cursorPosition() const;
    bool validateAndSet( const QString &, int, int, int );

    int alignment() const;





    void cursorForward( bool mark, int steps = 1 );
    void cursorBackward( bool mark, int steps = 1 );
    void cursorWordForward( bool mark );
    void cursorWordBackward( bool mark );
    void backspace();
    void del();
    void home( bool mark );
    void end( bool mark );

    bool isModified() const;
    void clearModified();

    bool edited() const;
    void setEdited( bool );

    bool hasSelectedText() const;
    QString selectedText() const;
    int selectionStart() const;

    bool isUndoAvailable() const;
    bool isRedoAvailable() const;






    bool dragEnabled() const;

    QString inputMask() const;
    void setInputMask( const QString &inputMask );
    bool hasAcceptableInput() const;

public :
    virtual void setText( const QString &);
    virtual void selectAll();
    virtual void deselect();
    virtual void clearValidator();
    virtual void insert( const QString &);
    virtual void clear();
    virtual void undo();
    virtual void redo();
    virtual void setMaxLength( int );
    virtual void setFrame( bool );
    virtual void setEchoMode( EchoMode );
    virtual void setReadOnly( bool );
    virtual void setValidator( const QValidator * );
    virtual void setFont( const QFont & );
    virtual void setPalette( const QPalette & );
    virtual void setSelection( int, int );
    virtual void setCursorPosition( int );
    virtual void setAlignment( int flag );

    virtual void cut();
    virtual void copy() const;
    virtual void paste();

    virtual void setDragEnabled( bool b );

protected:
    void textChanged( const QString &);
    void returnPressed();
    void lostFocus();
    void selectionChanged();

protected:
    bool event( QEvent * );
    void mousePressEvent( QMouseEvent * );
    void mouseMoveEvent( QMouseEvent * );
    void mouseReleaseEvent( QMouseEvent * );
    void mouseDoubleClickEvent( QMouseEvent * );
    void keyPressEvent( QKeyEvent * );
    void imStartEvent( QIMEvent * );
    void imComposeEvent( QIMEvent * );
    void imEndEvent( QIMEvent * );
    void focusInEvent( QFocusEvent * );
    void focusOutEvent( QFocusEvent * );
    void resizeEvent( QResizeEvent * );
    void drawContents( QPainter * );

    void dragEnterEvent( QDragEnterEvent * );
    void dragMoveEvent( QDragMoveEvent *e );
    void dragLeaveEvent( QDragLeaveEvent *e );
    void dropEvent( QDropEvent * );

    void contextMenuEvent( QContextMenuEvent * );
    virtual QPopupMenu *createPopupMenu();
    void windowActivationChange( bool );




private :
    void clipboardChanged();

public:
    void setPasswordChar( QChar c );
    QChar passwordChar() const;
    int characterAt( int, QChar* ) const;
    bool getSelection( int *, int * );

private:
    friend struct QLineEditPrivate;
    QLineEditPrivate * d;

private:

    QLineEdit( const QLineEdit & );
    QLineEdit &operator=( const QLineEdit & );

};
# 37 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/qt-copy/include/qtextedit.h" 1
# 39 "/coolo/prod/qt-copy/include/qtextedit.h"


# 1 "/coolo/prod/qt-copy/include/qscrollview.h" 1
# 38 "/coolo/prod/qt-copy/include/qscrollview.h"



# 1 "/coolo/prod/qt-copy/include/qscrollbar.h" 1
# 39 "/coolo/prod/qt-copy/include/qscrollbar.h"

class QTimer;



# 1 "/coolo/prod/qt-copy/include/qrangecontrol.h" 1
# 39 "/coolo/prod/qt-copy/include/qrangecontrol.h"


# 1 "/coolo/prod/qt-copy/include/qglobal.h" 1
# 1071 "/coolo/prod/qt-copy/include/qglobal.h"
# 43 "/coolo/prod/qt-copy/include/qrangecontrol.h" 2






class QRangeControlPrivate;


class QRangeControl
{
public:
    QRangeControl();
    QRangeControl( int minValue, int maxValue,
                   int lineStep, int pageStep, int value );
    virtual ~QRangeControl();
    int value() const;
    void setValue( int );
    void addPage();
    void subtractPage();
    void addLine();
    void subtractLine();

    int minValue() const;
    int maxValue() const;
    void setRange( int minValue, int maxValue );
    void setMinValue( int minVal );
    void setMaxValue( int minVal );

    int lineStep() const;
    int pageStep() const;
    void setSteps( int line, int page );

    int bound( int ) const;

protected:
    int positionFromValue( int val, int space ) const;
    int valueFromPosition( int pos, int space ) const;
    void directSetValue( int val );
    int prevValue() const;

    virtual void valueChange();
    virtual void rangeChange();
    virtual void stepChange();

private:
    int minVal, maxVal;
    int line, page;
    int val, prevVal;

    QRangeControlPrivate * d;

private:

    QRangeControl( const QRangeControl & );
    QRangeControl &operator=( const QRangeControl & );

};


inline int QRangeControl::value() const
{ return val; }

inline int QRangeControl::prevValue() const
{ return prevVal; }

inline int QRangeControl::minValue() const
{ return minVal; }

inline int QRangeControl::maxValue() const
{ return maxVal; }

inline int QRangeControl::lineStep() const
{ return line; }

inline int QRangeControl::pageStep() const
{ return page; }






class QSpinWidgetPrivate;
class QSpinWidget : public QWidget
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
    QSpinWidget( QWidget* parent=0, const char* name=0 );
    ~QSpinWidget();

    void setEditWidget( QWidget * widget );
    QWidget * editWidget();

    QRect upRect() const;
    QRect downRect() const;

    void setUpEnabled( bool on );
    void setDownEnabled( bool on );

    bool isUpEnabled() const;
    bool isDownEnabled() const;

    enum ButtonSymbols { UpDownArrows, PlusMinus };
    virtual void setButtonSymbols( ButtonSymbols bs );
    ButtonSymbols buttonSymbols() const;

    void arrange();

protected:
    void stepUpPressed();
    void stepDownPressed();

public :
    void stepUp();
    void stepDown();

protected:
    void mousePressEvent( QMouseEvent *e );
    void resizeEvent( QResizeEvent* ev );
    void mouseReleaseEvent( QMouseEvent *e );
    void mouseMoveEvent( QMouseEvent *e );

    void wheelEvent( QWheelEvent * );

    void styleChange( QStyle& );
    void paintEvent( QPaintEvent * );
    void enableChanged( bool old );
    void windowActivationChange( bool );

private :
    void timerDone();
    void timerDoneEx();

private:
    QSpinWidgetPrivate * d;

    void updateDisplay();

private:

    QSpinWidget( const QSpinWidget& );
    QSpinWidget& operator=( const QSpinWidget& );

};
# 46 "/coolo/prod/qt-copy/include/qscrollbar.h" 2




class QScrollBar : public QWidget, public QRangeControl
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   
   
   
   
   
   
   

public:
    QScrollBar( QWidget *parent, const char* name = 0 );
    QScrollBar( Orientation, QWidget *parent, const char* name = 0 );
    QScrollBar( int minValue, int maxValue, int lineStep, int pageStep,
                int value, Orientation, QWidget *parent, const char* name = 0 );
    ~QScrollBar();

    virtual void setOrientation( Orientation );
    Orientation orientation() const;
    virtual void setTracking( bool enable );
    bool tracking() const;
    bool draggingSlider() const;

    virtual void setPalette( const QPalette & );
    virtual QSize sizeHint() const;
    virtual void setSizePolicy( QSizePolicy sp );
    void setSizePolicy( QSizePolicy::SizeType hor, QSizePolicy::SizeType ver, bool hfw = FALSE );

    int minValue() const;
    int maxValue() const;
    void setMinValue( int );
    void setMaxValue( int );
    int lineStep() const;
    int pageStep() const;
    void setLineStep( int );
    void setPageStep( int );
    int value() const;

    int sliderStart() const;
    QRect sliderRect() const;

public :
    void setValue( int );

protected:
    void valueChanged( int value );
    void sliderPressed();
    void sliderMoved( int value );
    void sliderReleased();
    void nextLine();
    void prevLine();
    void nextPage();
    void prevPage();

protected:

    void wheelEvent( QWheelEvent * );

    void keyPressEvent( QKeyEvent * );
    void resizeEvent( QResizeEvent * );
    void paintEvent( QPaintEvent * );

    void mousePressEvent( QMouseEvent * );
    void mouseReleaseEvent( QMouseEvent * );
    void mouseMoveEvent( QMouseEvent * );
    void contextMenuEvent( QContextMenuEvent * );
    void hideEvent( QHideEvent* );

    void valueChange();
    void stepChange();
    void rangeChange();

    void styleChange( QStyle& );

private :
    void doAutoRepeat();

private:
    void init();
    void positionSliderFromValue();
    int calculateValueFromSlider() const;

    void startAutoRepeat();
    void stopAutoRepeat();

    int rangeValueToSliderPos( int val ) const;
    int sliderPosToRangeValue( int val ) const;

    void action( int control );

    void drawControls( uint controls, uint activeControl ) const;
    void drawControls( uint controls, uint activeControl,
                       QPainter *p ) const;

    uint pressedControl;
    bool track;
    bool clickedAt;
    Orientation orient;

    int slidePrevVal;
    QCOORD sliderPos;
    QCOORD clickOffset;

    QTimer * repeater;
    void * d;

private:

    QScrollBar( const QScrollBar & );
    QScrollBar &operator=( const QScrollBar & );

};


inline void QScrollBar::setTracking( bool t )
{
    track = t;
}

inline bool QScrollBar::tracking() const
{
    return track;
}

inline QScrollBar::Orientation QScrollBar::orientation() const
{
    return orient;
}

inline int QScrollBar::sliderStart() const
{
    return sliderPos;
}

inline void QScrollBar::setSizePolicy( QSizePolicy::SizeType hor, QSizePolicy::SizeType ver, bool hfw )
{
    QWidget::setSizePolicy( hor, ver, hfw );
}
# 43 "/coolo/prod/qt-copy/include/qscrollview.h" 2




class QScrollViewData;

class QScrollView : public QFrame
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   
   
   
   
   
   
   
   
   

   


public:
    QScrollView(QWidget* parent=0, const char* name=0, WFlags f=0);
    ~QScrollView();

    enum ResizePolicy { Default, Manual, AutoOne, AutoOneFit };
    virtual void setResizePolicy( ResizePolicy );
    ResizePolicy resizePolicy() const;

    void styleChange( QStyle & );
    void removeChild(QWidget* child);
    virtual void addChild( QWidget* child, int x=0, int y=0 );
    virtual void moveChild( QWidget* child, int x, int y );
    int childX(QWidget* child);
    int childY(QWidget* child);
    bool childIsVisible(QWidget* child) { return child->isVisible(); }
    void showChild(QWidget* child, bool yes=TRUE) {
        if ( yes )
            child->show();
        else
            child->hide();
    }

    enum ScrollBarMode { Auto, AlwaysOff, AlwaysOn };

    ScrollBarMode vScrollBarMode() const;
    virtual void setVScrollBarMode( ScrollBarMode );

    ScrollBarMode hScrollBarMode() const;
    virtual void setHScrollBarMode( ScrollBarMode );

    QWidget* cornerWidget() const;
    virtual void setCornerWidget(QWidget*);



    QScrollBar* horizontalScrollBar() const;
    QScrollBar* verticalScrollBar() const;
    QWidget* viewport() const;
    QWidget* clipper() const;

    int visibleWidth() const;
    int visibleHeight() const;

    int contentsWidth() const;
    int contentsHeight() const;
    int contentsX() const;
    int contentsY() const;

    void resize( int w, int h );
    void resize( const QSize& );
    void show();

    void updateContents( int x, int y, int w, int h );
    void updateContents( const QRect& r );
    void updateContents();
    void repaintContents( int x, int y, int w, int h, bool erase=TRUE );
    void repaintContents( const QRect& r, bool erase=TRUE );
    void repaintContents( bool erase=TRUE );
    void contentsToViewport( int x, int y, int& vx, int& vy ) const;
    void viewportToContents( int vx, int vy, int& x, int& y ) const;
    QPoint contentsToViewport( const QPoint& ) const;
    QPoint viewportToContents( const QPoint& ) const;
    void enableClipper( bool y );

    void setStaticBackground( bool y );
    bool hasStaticBackground() const;

    QSize viewportSize( int, int ) const;
    QSize sizeHint() const;
    QSize minimumSizeHint() const;

    void removeChild(QObject* child);

    bool isHorizontalSliderPressed();
    bool isVerticalSliderPressed();


    virtual void setDragAutoScroll( bool b );
    bool dragAutoScroll() const;


protected:
    void contentsMoving(int x, int y);
    void horizontalSliderPressed();
    void horizontalSliderReleased();
    void verticalSliderPressed();
    void verticalSliderReleased();

public :
    virtual void resizeContents( int w, int h );
    void scrollBy( int dx, int dy );
    virtual void setContentsPos( int x, int y );
    void ensureVisible(int x, int y);
    void ensureVisible(int x, int y, int xmargin, int ymargin);
    void center(int x, int y);
    void center(int x, int y, float xmargin, float ymargin);

    void updateScrollBars();
    void setEnabled( bool enable );

protected:
    virtual void drawContents(QPainter*, int cx, int cy, int cw, int ch);
    virtual void drawContentsOffset(QPainter*, int ox, int oy,
                    int cx, int cy, int cw, int ch);


    virtual void contentsMousePressEvent( QMouseEvent* );
    virtual void contentsMouseReleaseEvent( QMouseEvent* );
    virtual void contentsMouseDoubleClickEvent( QMouseEvent* );
    virtual void contentsMouseMoveEvent( QMouseEvent* );

    virtual void contentsDragEnterEvent( QDragEnterEvent * );
    virtual void contentsDragMoveEvent( QDragMoveEvent * );
    virtual void contentsDragLeaveEvent( QDragLeaveEvent * );
    virtual void contentsDropEvent( QDropEvent * );


    virtual void contentsWheelEvent( QWheelEvent * );

    virtual void contentsContextMenuEvent( QContextMenuEvent * );


    virtual void viewportPaintEvent( QPaintEvent* );
    virtual void viewportResizeEvent( QResizeEvent* );
    virtual void viewportMousePressEvent( QMouseEvent* );
    virtual void viewportMouseReleaseEvent( QMouseEvent* );
    virtual void viewportMouseDoubleClickEvent( QMouseEvent* );
    virtual void viewportMouseMoveEvent( QMouseEvent* );

    virtual void viewportDragEnterEvent( QDragEnterEvent * );
    virtual void viewportDragMoveEvent( QDragMoveEvent * );
    virtual void viewportDragLeaveEvent( QDragLeaveEvent * );
    virtual void viewportDropEvent( QDropEvent * );


    virtual void viewportWheelEvent( QWheelEvent * );

    virtual void viewportContextMenuEvent( QContextMenuEvent * );

    void frameChanged();

    virtual void setMargins(int left, int top, int right, int bottom);
    int leftMargin() const;
    int topMargin() const;
    int rightMargin() const;
    int bottomMargin() const;

    bool focusNextPrevChild( bool next );

    virtual void setHBarGeometry(QScrollBar& hbar, int x, int y, int w, int h);
    virtual void setVBarGeometry(QScrollBar& vbar, int x, int y, int w, int h);

    void resizeEvent(QResizeEvent*);
    void mousePressEvent( QMouseEvent * );
    void mouseReleaseEvent( QMouseEvent * );
    void mouseDoubleClickEvent( QMouseEvent * );
    void mouseMoveEvent( QMouseEvent * );

    void wheelEvent( QWheelEvent * );

    void contextMenuEvent( QContextMenuEvent * );
    bool eventFilter( QObject *, QEvent *e );

    void setCachedSizeHint( const QSize &sh ) const;
    QSize cachedSizeHint() const;
    void fontChange( const QFont & );

private:
    void drawContents( QPainter* );
    void moveContents(int x, int y);

    QScrollViewData* d;

private :
    void hslide(int);
    void vslide(int);
    void hbarIsPressed();
    void hbarIsReleased();
    void vbarIsPressed();
    void vbarIsReleased();

    void doDragAutoScroll();
    void startDragAutoScroll();
    void stopDragAutoScroll();


private:

    QScrollView( const QScrollView & );
    QScrollView &operator=( const QScrollView & );

    void changeFrameRect(const QRect&);

public:
    void disableSizeHintCaching();

};
# 43 "/coolo/prod/qt-copy/include/qtextedit.h" 2
# 1 "/coolo/prod/qt-copy/include/qstylesheet.h" 1
# 39 "/coolo/prod/qt-copy/include/qstylesheet.h"




# 1 "/coolo/prod/qt-copy/include/qptrvector.h" 1
# 39 "/coolo/prod/qt-copy/include/qptrvector.h"


# 1 "/coolo/prod/qt-copy/include/qgvector.h" 1
# 39 "/coolo/prod/qt-copy/include/qgvector.h"






class QGVector : public QPtrCollection
{
friend class QGList;
public:

    QDataStream &read( QDataStream & );
    QDataStream &write( QDataStream & ) const;

    virtual int compareItems( Item, Item );

protected:
    QGVector();
    QGVector( uint size );
    QGVector( const QGVector &v );
   ~QGVector();

    QGVector &operator=( const QGVector &v );
    bool operator==( const QGVector &v ) const;

    Item *data() const { return vec; }
    uint size() const { return len; }
    uint count() const { return numItems; }

    bool insert( uint index, Item );
    bool remove( uint index );
    Item take( uint index );

    void clear();
    bool resize( uint newsize );

    bool fill( Item, int flen );

    void sort();
    int bsearch( Item ) const;

    int findRef( Item, uint index ) const;
    int find( Item, uint index ) const;
    uint containsRef( Item ) const;
    uint contains( Item ) const;

    Item at( uint index ) const
    {

        if ( index >= len )
            warningIndexRange( index );

        return vec[index];
    }

    bool insertExpand( uint index, Item );

    void toList( QGList * ) const;


    virtual QDataStream &read( QDataStream &, Item & );
    virtual QDataStream &write( QDataStream &, Item ) const;

private:
    Item *vec;
    uint len;
    uint numItems;

    static void warningIndexRange( uint );
};







 QDataStream &operator>>( QDataStream &, QGVector & );
 QDataStream &operator<<( QDataStream &, const QGVector & );
# 43 "/coolo/prod/qt-copy/include/qptrvector.h" 2


template<class type>
class QPtrVector



        : public QGVector

{
public:
    QPtrVector() { }
    QPtrVector( uint size ) : QGVector(size) { }
    QPtrVector( const QPtrVector<type> &v ) : QGVector( v ) { }
    ~QPtrVector() { clear(); }
    QPtrVector<type> &operator=(const QPtrVector<type> &v)
                        { return (QPtrVector<type>&)QGVector::operator=(v); }
    bool operator==( const QPtrVector<type> &v ) const { return QGVector::operator==(v); }
    type **data() const { return (type **)QGVector::data(); }
    uint size() const { return QGVector::size(); }
    uint count() const { return QGVector::count(); }
    bool isEmpty() const { return QGVector::count() == 0; }
    bool isNull() const { return QGVector::size() == 0; }
    bool resize( uint size ) { return QGVector::resize(size); }
    bool insert( uint i, const type *d){ return QGVector::insert(i,(Item)d); }
    bool remove( uint i ) { return QGVector::remove(i); }
    type *take( uint i ) { return (type *)QGVector::take(i); }
    void clear() { QGVector::clear(); }
    bool fill( const type *d, int size=-1 )
                                        { return QGVector::fill((Item)d,size);}
    void sort() { QGVector::sort(); }
    int bsearch( const type *d ) const{ return QGVector::bsearch((Item)d); }
    int findRef( const type *d, uint i=0 ) const
                                        { return QGVector::findRef((Item)d,i);}
    int find( const type *d, uint i= 0 ) const
                                        { return QGVector::find((Item)d,i); }
    uint containsRef( const type *d ) const
                                { return QGVector::containsRef((Item)d); }
    uint contains( const type *d ) const
                                        { return QGVector::contains((Item)d); }
    type *operator[]( int i ) const { return (type *)QGVector::at(i); }
    type *at( uint i ) const { return (type *)QGVector::at(i); }
    void toList( QGList *list ) const { QGVector::toList(list); }
# 94 "/coolo/prod/qt-copy/include/qptrvector.h"
private:
    void deleteItem( Item d );
};


template<> inline void QPtrVector<void>::deleteItem( QPtrCollection::Item )
{
}


template<class type> inline void QPtrVector<type>::deleteItem( QPtrCollection::Item d )
{
    if ( del_item ) delete (type *)d;
}





# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 115 "/coolo/prod/qt-copy/include/qptrvector.h" 2
# 45 "/coolo/prod/qt-copy/include/qstylesheet.h" 2
# 1 "/coolo/prod/qt-copy/include/qdict.h" 1
# 39 "/coolo/prod/qt-copy/include/qdict.h"


# 1 "/coolo/prod/qt-copy/include/qgdict.h" 1
# 39 "/coolo/prod/qt-copy/include/qgdict.h"






class QGDictIterator;
class QGDItList;


class QBaseBucket
{
public:
    QPtrCollection::Item getData() { return data; }
    QPtrCollection::Item setData( QPtrCollection::Item d ) { return data = d; }
    QBaseBucket *getNext() { return next; }
    void setNext( QBaseBucket *n) { next = n; }
protected:
    QBaseBucket( QPtrCollection::Item d, QBaseBucket *n ) : data(d), next(n) {}
    QPtrCollection::Item data;
    QBaseBucket *next;
};

class QStringBucket : public QBaseBucket
{
public:
    QStringBucket( const QString &k, QPtrCollection::Item d, QBaseBucket *n )
        : QBaseBucket(d,n), key(k) {}
    const QString &getKey() const { return key; }
private:
    QString key;
};

class QAsciiBucket : public QBaseBucket
{
public:
    QAsciiBucket( const char *k, QPtrCollection::Item d, QBaseBucket *n )
        : QBaseBucket(d,n), key(k) {}
    const char *getKey() const { return key; }
private:
    const char *key;
};

class QIntBucket : public QBaseBucket
{
public:
    QIntBucket( long k, QPtrCollection::Item d, QBaseBucket *n )
        : QBaseBucket(d,n), key(k) {}
    long getKey() const { return key; }
private:
    long key;
};

class QPtrBucket : public QBaseBucket
{
public:
    QPtrBucket( void *k, QPtrCollection::Item d, QBaseBucket *n )
        : QBaseBucket(d,n), key(k) {}
    void *getKey() const { return key; }
private:
    void *key;
};


class QGDict : public QPtrCollection
{
public:
    uint count() const { return numItems; }
    uint size() const { return vlen; }
    QPtrCollection::Item look_string( const QString& key, QPtrCollection::Item,
                                   int );
    QPtrCollection::Item look_ascii( const char *key, QPtrCollection::Item, int );
    QPtrCollection::Item look_int( long key, QPtrCollection::Item, int );
    QPtrCollection::Item look_ptr( void *key, QPtrCollection::Item, int );

    QDataStream &read( QDataStream & );
    QDataStream &write( QDataStream & ) const;

protected:
    enum KeyType { StringKey, AsciiKey, IntKey, PtrKey };

    QGDict( uint len, KeyType kt, bool cs, bool ck );
    QGDict( const QGDict & );
   ~QGDict();

    QGDict &operator=( const QGDict & );

    bool remove_string( const QString &key, QPtrCollection::Item item=0 );
    bool remove_ascii( const char *key, QPtrCollection::Item item=0 );
    bool remove_int( long key, QPtrCollection::Item item=0 );
    bool remove_ptr( void *key, QPtrCollection::Item item=0 );
    QPtrCollection::Item take_string( const QString &key );
    QPtrCollection::Item take_ascii( const char *key );
    QPtrCollection::Item take_int( long key );
    QPtrCollection::Item take_ptr( void *key );

    void clear();
    void resize( uint );

    int hashKeyString( const QString & );
    int hashKeyAscii( const char * );

    void statistics() const;


    virtual QDataStream &read( QDataStream &, QPtrCollection::Item & );
    virtual QDataStream &write( QDataStream &, QPtrCollection::Item ) const;

private:
    QBaseBucket **vec;
    uint vlen;
    uint numItems;
    uint keytype : 2;
    uint cases : 1;
    uint copyk : 1;
    QGDItList *iterators;
    void unlink_common( int, QBaseBucket *, QBaseBucket * );
    QStringBucket *unlink_string( const QString &,
                                  QPtrCollection::Item item = 0 );
    QAsciiBucket *unlink_ascii( const char *, QPtrCollection::Item item = 0 );
    QIntBucket *unlink_int( long, QPtrCollection::Item item = 0 );
    QPtrBucket *unlink_ptr( void *, QPtrCollection::Item item = 0 );
    void init( uint, KeyType, bool, bool );
    friend class QGDictIterator;
};


class QGDictIterator
{
friend class QGDict;
public:
    QGDictIterator( const QGDict & );
    QGDictIterator( const QGDictIterator & );
    QGDictIterator &operator=( const QGDictIterator & );
   ~QGDictIterator();

    QPtrCollection::Item toFirst();

    QPtrCollection::Item get() const;
    QString getKeyString() const;
    const char *getKeyAscii() const;
    long getKeyInt() const;
    void *getKeyPtr() const;

    QPtrCollection::Item operator()();
    QPtrCollection::Item operator++();
    QPtrCollection::Item operator+=(uint);

protected:
    QGDict *dict;

private:
    QBaseBucket *curNode;
    uint curIndex;
};

inline QPtrCollection::Item QGDictIterator::get() const
{
    return curNode ? curNode->getData() : 0;
}

inline QString QGDictIterator::getKeyString() const
{
    return curNode ? ((QStringBucket*)curNode)->getKey() : QString::null;
}

inline const char *QGDictIterator::getKeyAscii() const
{
    return curNode ? ((QAsciiBucket*)curNode)->getKey() : 0;
}

inline long QGDictIterator::getKeyInt() const
{
    return curNode ? ((QIntBucket*)curNode)->getKey() : 0;
}

inline void *QGDictIterator::getKeyPtr() const
{
    return curNode ? ((QPtrBucket*)curNode)->getKey() : 0;
}
# 43 "/coolo/prod/qt-copy/include/qdict.h" 2


template<class type>
class QDict



        : public QGDict

{
public:
    QDict( int size = 17, bool caseSensitive = TRUE )
        : QGDict( size, StringKey, caseSensitive, FALSE ) { }
    QDict( const QDict<type> &d ) : QGDict( d ) { }
    ~QDict() { clear(); }
    QDict<type> &operator=(const QDict<type> &d)
                        { return (QDict<type>&)QGDict::operator=(d); }
    uint count() const { return QGDict::count(); }
    uint size() const { return QGDict::size(); }
    bool isEmpty() const { return QGDict::count() == 0; }

    void insert( const QString &k, const type *d )
                                        { QGDict::look_string(k,(Item)d,1); }
    void replace( const QString &k, const type *d )
                                        { QGDict::look_string(k,(Item)d,2); }
    bool remove( const QString &k ) { return QGDict::remove_string(k); }
    type *take( const QString &k ) { return (type *)QGDict::take_string(k); }
    type *find( const QString &k ) const
                { return (type *)((QGDict*)this)->QGDict::look_string(k,0,0); }
    type *operator[]( const QString &k ) const
                { return (type *)((QGDict*)this)->QGDict::look_string(k,0,0); }

    void clear() { QGDict::clear(); }
    void resize( uint n ) { QGDict::resize(n); }
    void statistics() const { QGDict::statistics(); }







private:
        void deleteItem( Item d );
};


template<> inline void QDict<void>::deleteItem( Item )
{
}


template<class type> inline void QDict<type>::deleteItem( QPtrCollection::Item d )
{
    if ( del_item ) delete (type *)d;
}

template<class type>
class QDictIterator : public QGDictIterator
{
public:
    QDictIterator(const QDict<type> &d) : QGDictIterator((QGDict &)d) { }
    ~QDictIterator() {}
    uint count() const { return dict->count(); }
    bool isEmpty() const { return dict->count() == 0; }
    type *toFirst() { return (type *)QGDictIterator::toFirst(); }
    operator type *() const { return (type *)QGDictIterator::get(); }
    type *operator*() { return (type *)QGDictIterator::get(); }
    type *current() const { return (type *)QGDictIterator::get(); }
    QString currentKey() const{ return QGDictIterator::getKeyString(); }
    type *operator()() { return (type *)QGDictIterator::operator()(); }
    type *operator++() { return (type *)QGDictIterator::operator++(); }
    type *operator+=(uint j) { return (type *)QGDictIterator::operator+=(j); }
};

# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 120 "/coolo/prod/qt-copy/include/qdict.h" 2
# 46 "/coolo/prod/qt-copy/include/qstylesheet.h" 2





class QStyleSheet;
class QTextDocument;
template<class Key, class T> class QMap;
class QStyleSheetItemData;

class QStyleSheetItem : public Qt
{
public:
    QStyleSheetItem( QStyleSheet* parent, const QString& name );
    QStyleSheetItem( const QStyleSheetItem & );
    ~QStyleSheetItem();

    QStyleSheetItem& operator=( const QStyleSheetItem& other );

    QString name() const;

    QStyleSheet* styleSheet();
    const QStyleSheet* styleSheet() const;

    enum AdditionalStyleValues { Undefined = - 1};

    enum DisplayMode {
        DisplayBlock,
        DisplayInline,
        DisplayListItem,
        DisplayNone
    };

    DisplayMode displayMode() const;
    void setDisplayMode(DisplayMode m);

    int alignment() const;
    void setAlignment( int f);

    enum VerticalAlignment {
        VAlignBaseline,
        VAlignSub,
        VAlignSuper
    };

    VerticalAlignment verticalAlignment() const;
    void setVerticalAlignment( VerticalAlignment valign );

    int fontWeight() const;
    void setFontWeight(int w);

    int logicalFontSize() const;
    void setLogicalFontSize(int s);

    int logicalFontSizeStep() const;
    void setLogicalFontSizeStep( int s );

    int fontSize() const;
    void setFontSize(int s);

    QString fontFamily() const;
    void setFontFamily( const QString& );

    int numberOfColumns() const;
    void setNumberOfColumns(int ncols);

    QColor color() const;
    void setColor( const QColor &);

    bool fontItalic() const;
    void setFontItalic( bool );
    bool definesFontItalic() const;

    bool fontUnderline() const;
    void setFontUnderline( bool );
    bool definesFontUnderline() const;

    bool fontStrikeOut() const;
    void setFontStrikeOut( bool );
    bool definesFontStrikeOut() const;

    bool isAnchor() const;
    void setAnchor(bool anc);

    enum WhiteSpaceMode { WhiteSpaceNormal, WhiteSpacePre, WhiteSpaceNoWrap };
    WhiteSpaceMode whiteSpaceMode() const;
    void setWhiteSpaceMode(WhiteSpaceMode m);

    enum Margin {
        MarginLeft,
        MarginRight,
        MarginTop,
        MarginBottom,
        MarginFirstLine,
        MarginAll,
        MarginVertical,
        MarginHorizontal
    };

    int margin( Margin m) const;
    void setMargin( Margin, int);

    enum ListStyle {
        ListDisc,
        ListCircle,
        ListSquare,
        ListDecimal,
        ListLowerAlpha,
        ListUpperAlpha
    };

    ListStyle listStyle() const;
    void setListStyle( ListStyle );

    QString contexts() const;
    void setContexts( const QString& );
    bool allowedInContext( const QStyleSheetItem* ) const;

    bool selfNesting() const;
    void setSelfNesting( bool );

    void setLineSpacing( int ls );
    int lineSpacing() const;

private:
    void init();
    QStyleSheetItemData* d;
};
# 186 "/coolo/prod/qt-copy/include/qstylesheet.h"
class QTextCustomItem;


class QStyleSheet : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
    QStyleSheet( QObject *parent=0, const char *name=0 );
    virtual ~QStyleSheet();

    static QStyleSheet* defaultSheet();
    static void setDefaultSheet( QStyleSheet* );


    QStyleSheetItem* item( const QString& name);
    const QStyleSheetItem* item( const QString& name) const;

    void insert( QStyleSheetItem* item);


    virtual QTextCustomItem* tag( const QString& name,
                                  const QMap<QString, QString> &attr,
                                  const QString& context,
                                  const QMimeSourceFactory& factory,
                                  bool emptyTag, QTextDocument *doc ) const;

    static QString escape( const QString& );
    static QString convertFromPlainText( const QString&,
                                         QStyleSheetItem::WhiteSpaceMode mode = QStyleSheetItem::WhiteSpacePre );
    static bool mightBeRichText( const QString& );

    virtual void scaleFont( QFont& font, int logicalSize ) const;

    virtual void error( const QString& ) const;

private:
    void init();
    QDict<QStyleSheetItem> styles;
    QStyleSheetItem* nullstyle;
private:

    QStyleSheet( const QStyleSheet & );
    QStyleSheet &operator=( const QStyleSheet & );

};
# 44 "/coolo/prod/qt-copy/include/qtextedit.h" 2
# 52 "/coolo/prod/qt-copy/include/qtextedit.h"

class QPainter;
class QTextDocument;
class QTextCursor;
class QKeyEvent;
class QResizeEvent;
class QMouseEvent;
class QTimer;
class QTextString;
class QTextCommand;
class QTextParagraph;
class QTextFormat;
class QFont;
class QColor;
class QTextEdit;
class QTextBrowser;
class QTextString;
struct QUndoRedoInfoPrivate;
class QPopupMenu;
class QTextEditPrivate;
class QSyntaxHighlighter;


class QTextEditOptimPrivate
{
public:


    enum TagType { Color = 0, Format = 1 };
    struct Tag {
        TagType type:2;
        bool bold:1;
        bool italic:1;
        bool underline:1;
        int line;
        int index;
        Tag * leftTag;
        Tag * parent;
        Tag * prev;
        Tag * next;
        QString tag;
    };
    QTextEditOptimPrivate()
    {
        len = numLines = maxLineWidth = 0;
        selStart.line = selStart.index = -1;
        selEnd.line = selEnd.index = -1;
        search.line = search.index = 0;
        tags = lastTag = 0;
    }
    ~QTextEditOptimPrivate()
    {
        clearTags();
    }
    void clearTags()
    {
        Tag * itr = tags;
        while ( tags ) {
            itr = tags;
            tags = tags->next;
            delete itr;
        }
        tags = lastTag = 0;
        tagIndex.clear();
    }
    int len;
    int numLines;
    int maxLineWidth;
    struct Selection {
        int line;
        int index;
    };
    Selection selStart, selEnd, search;
    Tag * tags, * lastTag;
    QMap<int, QString> lines;
    QMap<int, Tag *> tagIndex;
};


class QTextEdit : public QScrollView
{
    friend class QTextBrowser;
    friend class QSyntaxHighlighter;

    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

public:
    enum WordWrap {
        NoWrap,
        WidgetWidth,
        FixedPixelWidth,
        FixedColumnWidth
    };

    enum WrapPolicy {
        AtWordBoundary,
        AtWhiteSpace = AtWordBoundary,
        Anywhere,
        AtWordOrDocumentBoundary
    };

    enum AutoFormatting {
        AutoNone = 0,
        AutoBulletList = 0x00000001,
        AutoAll = 0xffffffff
    };

    enum KeyboardAction {
        ActionBackspace,
        ActionDelete,
        ActionReturn,
        ActionKill,
        ActionWordBackspace,
        ActionWordDelete
    };

    enum CursorAction {
        MoveBackward,
        MoveForward,
        MoveWordBackward,
        MoveWordForward,
        MoveUp,
        MoveDown,
        MoveLineStart,
        MoveLineEnd,
        MoveHome,
        MoveEnd,
        MovePgUp,
        MovePgDown
    };

    enum VerticalAlignment {
        AlignNormal,
        AlignSuperScript,
        AlignSubScript
    };

    enum TextInsertionFlags {
        RedoIndentation = 0x0001,
        CheckNewLines = 0x0002,
        RemoveSelected = 0x0004
    };

    QTextEdit( const QString& text, const QString& context = QString::null,
               QWidget* parent=0, const char* name=0);
    QTextEdit( QWidget* parent=0, const char* name=0 );
    virtual ~QTextEdit();
    void setPalette( const QPalette & );

    QString text() const;
    QString text( int para ) const;
    TextFormat textFormat() const;
    QString context() const;
    QString documentTitle() const;

    void getSelection( int *paraFrom, int *indexFrom,
                    int *paraTo, int *indexTo, int selNum = 0 ) const;
    virtual bool find( const QString &expr, bool cs, bool wo, bool forward = TRUE,
                       int *para = 0, int *index = 0 );

    int paragraphs() const;
    int lines() const;
    int linesOfParagraph( int para ) const;
    int lineOfChar( int para, int chr );
    int length() const;
    QRect paragraphRect( int para ) const;
    int paragraphAt( const QPoint &pos ) const;
    int charAt( const QPoint &pos, int *para ) const;
    int paragraphLength( int para ) const;

    QStyleSheet* styleSheet() const;

    QMimeSourceFactory* mimeSourceFactory() const;

    QBrush paper() const;
    bool linkUnderline() const;

    int heightForWidth( int w ) const;

    bool hasSelectedText() const;
    QString selectedText() const;
    bool isUndoAvailable() const;
    bool isRedoAvailable() const;

    WordWrap wordWrap() const;
    int wrapColumnOrWidth() const;
    WrapPolicy wrapPolicy() const;

    int tabStopWidth() const;

    QString anchorAt( const QPoint& pos );
    QString anchorAt( const QPoint& pos, AnchorAttribute a );

    QSize sizeHint() const;

    bool isReadOnly() const { return readonly; }

    void getCursorPosition( int *parag, int *index ) const;

    bool isModified() const;
    bool italic() const;
    bool bold() const;
    bool underline() const;
    QString family() const;
    int pointSize() const;
    QColor color() const;
    QFont font() const;
    QFont currentFont() const;
    int alignment() const;
    int undoDepth() const;


    virtual bool getFormat( int para, int index, QFont *font, QColor *color, VerticalAlignment *verticalAlignment );

    virtual bool getParagraphFormat( int para, QFont *font, QColor *color,
                                     VerticalAlignment *verticalAlignment, int *alignment,
                                     QStyleSheetItem::DisplayMode *displayMode,
                                     QStyleSheetItem::ListStyle *listStyle,
                                     int *listDepth );


    bool isOverwriteMode() const { return overWrite; }
    QColor paragraphBackgroundColor( int para ) const;

    bool isUndoRedoEnabled() const;
    bool eventFilter( QObject *o, QEvent *e );
    bool tabChangesFocus() const;

    void setAutoFormatting( uint features );
    uint autoFormatting() const;

public :
    void setEnabled( bool );

    virtual void setMimeSourceFactory( QMimeSourceFactory* factory );

    virtual void setStyleSheet( QStyleSheet* styleSheet );
    virtual void scrollToAnchor( const QString& name );
    virtual void setPaper( const QBrush& pap );
    virtual void setLinkUnderline( bool );

    virtual void setWordWrap( WordWrap mode );
    virtual void setWrapColumnOrWidth( int );
    virtual void setWrapPolicy( WrapPolicy policy );

    virtual void copy();
    virtual void append( const QString& text );

    void setText( const QString &txt ) { setText( txt, QString::null ); }
    virtual void setText( const QString &txt, const QString &context );
    virtual void setTextFormat( TextFormat f );

    virtual void selectAll( bool select = TRUE );
    virtual void setTabStopWidth( int ts );
    virtual void zoomIn( int range );
    virtual void zoomIn() { zoomIn( 1 ); }
    virtual void zoomOut( int range );
    virtual void zoomOut() { zoomOut( 1 ); }
    virtual void zoomTo( int size );

    virtual void sync();
    virtual void setReadOnly( bool b );

    virtual void undo();
    virtual void redo();
    virtual void cut();
    virtual void paste();

    virtual void pasteSubType( const QCString &subtype );

    virtual void clear();
    virtual void del();
    virtual void indent();
    virtual void setItalic( bool b );
    virtual void setBold( bool b );
    virtual void setUnderline( bool b );
    virtual void setFamily( const QString &f );
    virtual void setPointSize( int s );
    virtual void setColor( const QColor &c );
    virtual void setFont( const QFont &f );
    virtual void setVerticalAlignment( VerticalAlignment a );
    virtual void setAlignment( int a );


    virtual void setParagType( QStyleSheetItem::DisplayMode dm, QStyleSheetItem::ListStyle listStyle );

    virtual void setCursorPosition( int parag, int index );
    virtual void setSelection( int parag_from, int index_from, int parag_to, int index_to, int selNum = 0 );
    virtual void setSelectionAttributes( int selNum, const QColor &back, bool invertText );
    virtual void setModified( bool m );
    virtual void resetFormat();
    virtual void setUndoDepth( int d );
    virtual void setFormat( QTextFormat *f, int flags );
    virtual void ensureCursorVisible();
    virtual void placeCursor( const QPoint &pos, QTextCursor *c = 0 );
    virtual void moveCursor( CursorAction action, bool select );
    virtual void doKeyboardAction( KeyboardAction action );
    virtual void removeSelectedText( int selNum = 0 );
    virtual void removeSelection( int selNum = 0 );
    virtual void setCurrentFont( const QFont &f );
    virtual void setOverwriteMode( bool b ) { overWrite = b; }

    virtual void scrollToBottom();

    void insert( const QString &text, uint insertionFlags = CheckNewLines | RemoveSelected );


    virtual void insert( const QString &text, bool, bool = TRUE, bool = TRUE );

    virtual void insertAt( const QString &text, int para, int index );
    virtual void removeParagraph( int para );
    virtual void insertParagraph( const QString &text, int para );

    virtual void setParagraphBackgroundColor( int para, const QColor &bg );
    virtual void clearParagraphBackground( int para );

    virtual void setUndoRedoEnabled( bool b );
    void setTabChangesFocus( bool b );


    void polish();
    void setMaxLogLines( int numLines );
    int maxLogLines();


protected:
    void textChanged();
    void selectionChanged();
    void copyAvailable( bool );
    void undoAvailable( bool yes );
    void redoAvailable( bool yes );
    void currentFontChanged( const QFont &f );
    void currentColorChanged( const QColor &c );
    void currentAlignmentChanged( int a );
    void currentVerticalAlignmentChanged( VerticalAlignment a );
    void cursorPositionChanged( QTextCursor *c );
    void cursorPositionChanged( int para, int pos );
    void returnPressed();
    void modificationChanged( bool m );
    void clicked( int parag, int index );
    void doubleClicked( int parag, int index );

protected:
    void repaintChanged();
    void updateStyles();
    void drawContents( QPainter *p, int cx, int cy, int cw, int ch );
    bool event( QEvent *e );
    void keyPressEvent( QKeyEvent *e );
    void resizeEvent( QResizeEvent *e );
    void viewportResizeEvent( QResizeEvent* );
    void contentsMousePressEvent( QMouseEvent *e );
    void contentsMouseMoveEvent( QMouseEvent *e );
    void contentsMouseReleaseEvent( QMouseEvent *e );
    void contentsMouseDoubleClickEvent( QMouseEvent *e );

    void contentsWheelEvent( QWheelEvent *e );

    void imStartEvent( QIMEvent * );
    void imComposeEvent( QIMEvent * );
    void imEndEvent( QIMEvent * );

    void contentsDragEnterEvent( QDragEnterEvent *e );
    void contentsDragMoveEvent( QDragMoveEvent *e );
    void contentsDragLeaveEvent( QDragLeaveEvent *e );
    void contentsDropEvent( QDropEvent *e );

    void contentsContextMenuEvent( QContextMenuEvent *e );
    bool focusNextPrevChild( bool next );
    QTextDocument *document() const;
    QTextCursor *textCursor() const;
    void setDocument( QTextDocument *doc );
    virtual QPopupMenu *createPopupMenu( const QPoint& pos );
    virtual QPopupMenu *createPopupMenu();
    void drawCursor( bool visible );

    void windowActivationChange( bool );

protected :
    virtual void doChangeInterval();
    void sliderReleased();




private :
    void formatMore();
    void doResize();
    void autoScrollTimerDone();
    void blinkCursor();
    void setModified();
    void startDrag();
    void documentWidthChanged( int w );
    void clipboardChanged();

private:
    struct UndoRedoInfo {
        enum Type { Invalid, Insert, Delete, Backspace, Return, RemoveSelected, Format, Style };

        UndoRedoInfo( QTextDocument *dc );
        ~UndoRedoInfo();
        void clear();
        bool valid() const;

        QUndoRedoInfoPrivate *d;
        int id;
        int index;
        int eid;
        int eindex;
        QTextFormat *format;
        int flags;
        Type type;
        QTextDocument *doc;
        QByteArray styleInformation;
    };

private:
    void updateCursor( const QPoint & pos );
    void handleMouseMove( const QPoint& pos );
    void drawContents( QPainter * );
    virtual bool linksEnabled() const { return FALSE; }
    void init();
    void checkUndoRedoInfo( UndoRedoInfo::Type t );
    void updateCurrentFormat();
    bool handleReadOnlyKeyEvent( QKeyEvent *e );
    void makeParagVisible( QTextParagraph *p );
    void normalCopy();
    void copyToClipboard();

    QCString pickSpecial(QMimeSource* ms, bool always_ask, const QPoint&);
    QTextDrag *dragObject( QWidget *parent = 0 ) const;


    void pasteSpecial(const QPoint&);

    void setFontInternal( const QFont &f );

    virtual void emitHighlighted( const QString & ) {}
    virtual void emitLinkClicked( const QString & ) {}

    void readFormats( QTextCursor &c1, QTextCursor &c2, QTextString &text, bool fillStyles = FALSE );
    void clearUndoRedo();
    void paintDocument( bool drawAll, QPainter *p, int cx = -1, int cy = -1, int cw = -1, int ch = -1 );
    void moveCursor( CursorAction action );
    void ensureFormatted( QTextParagraph *p );
    void placeCursor( const QPoint &pos, QTextCursor *c, bool link );
    void updateMicroFocusHint();


    bool checkOptimMode();
    QString optimText() const;
    void optimSetText( const QString &str );
    void optimAppend( const QString &str );
    void optimInsert( const QString &str, int line, int index );
    void optimDrawContents( QPainter * p, int cx, int cy, int cw, int ch );
    void optimMousePressEvent( QMouseEvent * e );
    void optimMouseReleaseEvent( QMouseEvent * e );
    void optimMouseMoveEvent( QMouseEvent * e );
    int optimCharIndex( const QString &str, int mx ) const;
    void optimSelectAll();
    void optimRemoveSelection();
    void optimSetSelection( int startLine, int startIdx, int endLine,
                            int endIdx );
    bool optimHasSelection() const;
    QString optimSelectedText() const;
    bool optimFind( const QString & str, bool, bool, bool, int *, int * );
    void optimParseTags( QString * str, int lineNo = -1, int indexOffset = 0 );
    QTextEditOptimPrivate::Tag * optimPreviousLeftTag( int line );
    void optimSetTextFormat( QTextDocument *, QTextCursor *, QTextFormat * f,
                             int, int, QTextEditOptimPrivate::Tag * t );
    QTextEditOptimPrivate::Tag * optimAppendTag( int index, const QString & tag );
    QTextEditOptimPrivate::Tag * optimInsertTag( int line, int index, const QString & tag );
    void optimCheckLimit( const QString& str );

private :
    void optimDoAutoScroll();


private:

    void pasteSubType( const QCString &subtype, QMimeSource *m );


private:
    QTextDocument *doc;
    QTextCursor *cursor;
    QTimer *formatTimer, *scrollTimer, *changeIntervalTimer, *blinkTimer, *dragStartTimer;
    QTextParagraph *lastFormatted;
    int interval;
    UndoRedoInfo undoRedoInfo;
    QTextFormat *currentFormat;
    int currentAlignment;
    QPoint oldMousePos, mousePos;
    QPoint dragStartPos;
    QString onLink;
    WordWrap wrapMode;
    WrapPolicy wPolicy;
    int wrapWidth;
    QString pressedLink;
    QTextEditPrivate *d;
    bool inDoubleClick : 1;
    bool mousePressed : 1;
    bool cursorVisible : 1;
    bool blinkCursorVisible : 1;
    bool readOnly : 1;
    bool modified : 1;
    bool mightStartDrag : 1;
    bool inDnD : 1;
    bool readonly : 1;
    bool undoEnabled : 1;
    bool overWrite : 1;

private:

    QTextEdit( const QTextEdit & );
    QTextEdit &operator=( const QTextEdit & );

};

inline QTextDocument *QTextEdit::document() const
{
    return doc;
}

inline QTextCursor *QTextEdit::textCursor() const
{
    return cursor;
}

inline void QTextEdit::setCurrentFont( const QFont &f )
{
    QTextEdit::setFontInternal( f );
}
# 38 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/qt-copy/include/qsessionmanager.h" 1
# 39 "/coolo/prod/qt-copy/include/qsessionmanager.h"
# 49 "/coolo/prod/qt-copy/include/qsessionmanager.h"
class QSessionManagerData;

class QSessionManager : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
    QSessionManager( QApplication *app, QString &id, QString &key );
    ~QSessionManager();
public:
    QString sessionId() const;
    QString sessionKey() const;

    void* handle() const;


    bool allowsInteraction();
    bool allowsErrorInteraction();
    void release();

    void cancel();

    enum RestartHint {
        RestartIfRunning,
        RestartAnyway,
        RestartImmediately,
        RestartNever
    };
    void setRestartHint( RestartHint );
    RestartHint restartHint() const;

    void setRestartCommand( const QStringList& );
    QStringList restartCommand() const;
    void setDiscardCommand( const QStringList& );
    QStringList discardCommand() const;

    void setManagerProperty( const QString& name, const QString& value );
    void setManagerProperty( const QString& name, const QStringList& value );

    bool isPhase2() const;
    void requestPhase2();

private:
    friend class QApplication;
    friend class QBaseApplication;
    QSessionManagerData* d;
};
# 39 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

# 1 "/coolo/prod/qt-copy/include/qtimer.h" 1
# 39 "/coolo/prod/qt-copy/include/qtimer.h"






class QTimer : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
    QTimer( QObject *parent=0, const char *name=0 );
   ~QTimer();

    bool isActive() const;

    int start( int msec, bool sshot = FALSE );
    void changeInterval( int msec );
    void stop();

    static void singleShot( int msec, QObject *receiver, const char *member );

    int timerId() const { return id; }

protected:
    void timeout();

protected:
    bool event( QEvent * );

private:
    int id;
    uint single : 1;
    uint nulltimer : 1;

private:

    QTimer( const QTimer & );
    QTimer &operator=( const QTimer & );

};


inline bool QTimer::isActive() const
{
    return id >= 0;
}
# 41 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

# 1 "/coolo/prod/qt-copy/include/qpixmapcache.h" 1
# 39 "/coolo/prod/qt-copy/include/qpixmapcache.h"


# 1 "/coolo/prod/qt-copy/include/qpixmap.h" 1
# 39 "/coolo/prod/qt-copy/include/qpixmap.h"
# 48 "/coolo/prod/qt-copy/include/qpixmap.h"
class QGfx;
class QPixmapPrivate;







class QPixmap : public QPaintDevice, public Qt
{
public:
    enum ColorMode { Auto, Color, Mono };
    enum Optimization { DefaultOptim, NoOptim, MemoryOptim=NoOptim,
                        NormalOptim, BestOptim };

    QPixmap();
    QPixmap( const QImage& image );
    QPixmap( int w, int h, int depth = -1, Optimization = DefaultOptim );
    QPixmap( const QSize &, int depth = -1, Optimization = DefaultOptim );

    QPixmap( const QString& fileName, const char *format=0,
             ColorMode mode=Auto );
    QPixmap( const QString& fileName, const char *format,
             int conversion_flags );
    QPixmap( const char *xpm[] );
    QPixmap( const QByteArray &data );

    QPixmap( const QPixmap & );
   ~QPixmap();

    QPixmap &operator=( const QPixmap & );
    QPixmap &operator=( const QImage & );

    bool isNull() const;

    int width() const { return data->w; }
    int height() const { return data->h; }
    QSize size() const { return QSize(data->w,data->h); }
    QRect rect() const { return QRect(0,0,data->w,data->h); }
    int depth() const { return data->d; }
    static int defaultDepth();

    void fill( const QColor &fillColor = Qt::white );
    void fill( const QWidget *, int xofs, int yofs );
    void fill( const QWidget *, const QPoint &ofs );
    void resize( int width, int height );
    void resize( const QSize & );

    const QBitmap *mask() const;
    void setMask( const QBitmap & );
    bool selfMask() const;
    bool hasAlpha() const;
    bool hasAlphaChannel() const;

    QBitmap createHeuristicMask( bool clipTight = TRUE ) const;


    static QPixmap fromMimeSource( const QString& abs_name );

    static QPixmap grabWindow( WId, int x=0, int y=0, int w=-1, int h=-1 );
    static QPixmap grabWidget( QWidget * widget,
                                int x=0, int y=0, int w=-1, int h=-1 );


    QPixmap xForm( const QWMatrix & ) const;
    static QWMatrix trueMatrix( const QWMatrix &, int w, int h );


    QImage convertToImage() const;
    bool convertFromImage( const QImage &, ColorMode mode=Auto );
    bool convertFromImage( const QImage &, int conversion_flags );

    static const char* imageFormat( const QString &fileName );
    bool load( const QString& fileName, const char *format=0,
                      ColorMode mode=Auto );
    bool load( const QString& fileName, const char *format,
                      int conversion_flags );
    bool loadFromData( const uchar *buf, uint len,
                              const char* format=0,
                              ColorMode mode=Auto );
    bool loadFromData( const uchar *buf, uint len,
                              const char* format,
                              int conversion_flags );
    bool loadFromData( const QByteArray &data,
                              const char* format=0,
                              int conversion_flags=0 );
    bool save( const QString& fileName, const char* format, int quality = -1 ) const;
    bool save( QIODevice* device, const char* format, int quality = -1 ) const;






    int serialNumber() const;

    Optimization optimization() const;
    void setOptimization( Optimization );
    static Optimization defaultOptimization();
    static void setDefaultOptimization( Optimization );

    virtual void detach();

    bool isQBitmap() const;
# 171 "/coolo/prod/qt-copy/include/qpixmap.h"
    static int x11SetDefaultScreen( int screen );
    void x11SetScreen( int screen );


   

protected:
    QPixmap( int w, int h, const uchar *data, bool isXbitmap );
    int metric( int ) const;
# 188 "/coolo/prod/qt-copy/include/qpixmap.h"
    struct QPixmapData : public QShared {
        QCOORD w, h;
        short d;
        uint uninit : 1;
        uint bitmap : 1;
        uint selfmask : 1;



        int ser_no;
        QBitmap *mask;
# 210 "/coolo/prod/qt-copy/include/qpixmap.h"
        void *ximage;
        void *maskgc;
        QPixmap *alphapm;
# 224 "/coolo/prod/qt-copy/include/qpixmap.h"
        Optimization optim;



    } *data;
private:

    bool doImageIO( QImageIO* io, int quality ) const;

    QPixmap( int w, int h, int depth, bool, Optimization );
    void init( int, int, int, bool, Optimization );
    void deref();
    QPixmap copy( bool ignoreMask = FALSE ) const;







    static Optimization defOptim;
    friend void bitBlt( QPaintDevice *, int, int,
                                 const QPaintDevice *,
                                 int, int, int, int, RasterOp, bool );
    friend void bitBlt( QPaintDevice *, int, int,
                                 const QImage* src,
                                 int, int, int, int, int conversion_flags );
    friend void copyBlt( QPixmap *dst, int dx, int dy,
                                  const QPixmap *src, int sx, int sy,
                                  int sw, int sh );







    friend class QBitmap;
    friend class QPaintDevice;
    friend class QPainter;
};


inline bool QPixmap::isNull() const
{
    return data->w == 0;
}

inline void QPixmap::fill( const QWidget *w, const QPoint &ofs )
{
    fill( w, ofs.x(), ofs.y() );
}

inline void QPixmap::resize( const QSize &s )
{
    resize( s.width(), s.height() );
}

inline const QBitmap *QPixmap::mask() const
{
    return data->mask;
}

inline bool QPixmap::selfMask() const
{
    return data->selfmask;
}
# 299 "/coolo/prod/qt-copy/include/qpixmap.h"
inline int QPixmap::serialNumber() const
{
    return data->ser_no;
}

inline QPixmap::Optimization QPixmap::optimization() const
{
    return data->optim;
}

inline bool QPixmap::isQBitmap() const
{
    return data->bitmap;
}
# 327 "/coolo/prod/qt-copy/include/qpixmap.h"
 QDataStream &operator<<( QDataStream &, const QPixmap & );
 QDataStream &operator>>( QDataStream &, QPixmap & );










bool qt_xForm_helper( const QWMatrix&, int, int, int, uchar*, int, int, int, uchar*, int, int, int );


 void copyBlt( QPixmap *dst, int dx, int dy,
                       const QPixmap *src, int sx = 0, int sy = 0,
                       int sw = -1, int sh = -1 );
# 43 "/coolo/prod/qt-copy/include/qpixmapcache.h" 2



class QPixmapCache
{
public:
    static int cacheLimit();
    static void setCacheLimit( int );
    static QPixmap *find( const QString &key );
    static bool find( const QString &key, QPixmap& );
    static bool insert( const QString &key, QPixmap * );
    static bool insert( const QString &key, const QPixmap& );
    static void remove( const QString &key );
    static void clear();
};
# 43 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/qt-copy/include/qtooltip.h" 1
# 37 "/coolo/prod/qt-copy/include/qtooltip.h"
# 46 "/coolo/prod/qt-copy/include/qtooltip.h"
class QTipManager;
class QIconViewToolTip;
class QListViewToolTip;

class QToolTipGroup: public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
   
   

public:
    QToolTipGroup( QObject *parent, const char *name = 0 );
   ~QToolTipGroup();

    bool delay() const;
    bool enabled() const;

public :
    void setDelay( bool );
    void setEnabled( bool );

protected:
    void showTip( const QString &);
    void removeTip();

private:
    uint del:1;
    uint ena:1;

    friend class QTipManager;

private:

    QToolTipGroup( const QToolTipGroup & );
    QToolTipGroup& operator=( const QToolTipGroup & );

};


class QToolTip: public Qt
{
public:
    QToolTip( QWidget *, QToolTipGroup * = 0 );


    static void add( QWidget *, const QString &);
    static void add( QWidget *, const QString &,
                     QToolTipGroup *, const QString& );
    static void remove( QWidget * );

    static void add( QWidget *, const QRect &, const QString &);
    static void add( QWidget *, const QRect &, const QString &,
                     QToolTipGroup *, const QString& );
    static void remove( QWidget *, const QRect & );

    static QString textFor( QWidget *, const QPoint & pos = QPoint() );

    static void hide();

    static QFont font();
    static void setFont( const QFont & );
    static QPalette palette();
    static void setPalette( const QPalette & );





    static void setGloballyEnabled( bool );
    static bool isGloballyEnabled();
    static void setWakeUpDelay(int);

protected:
    virtual void maybeTip( const QPoint & ) = 0;
    void tip( const QRect &, const QString &);
    void tip( const QRect &, const QString& , const QString &);
    void tip( const QRect &, const QString &, const QRect & );
    void tip( const QRect &, const QString&, const QString &, const QRect &);

    void clear();

public:
    QWidget *parentWidget() const { return p; }
    QToolTipGroup *group() const { return g; }

private:
    QWidget *p;
    QToolTipGroup *g;
    static QFont *ttFont;
    static QPalette *ttPalette;

    friend class QTipManager;
};
# 44 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/qt-copy/include/qstylefactory.h" 1
# 37 "/coolo/prod/qt-copy/include/qstylefactory.h"







class QString;
class QStyle;

class QStyleFactory
{
public:

    static QStringList keys();

    static QStyle *create( const QString& );
};
# 45 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/qt-copy/include/qmetaobject.h" 1
# 39 "/coolo/prod/qt-copy/include/qmetaobject.h"


# 1 "/coolo/prod/qt-copy/include/qconnection.h" 1
# 39 "/coolo/prod/qt-copy/include/qconnection.h"





class QConnection
{
public:
    QConnection( const QObject *, int, const char *memberName, int memberType );
   ~QConnection() {}

    bool isConnected() const { return obj != 0; }

    QObject *object() const { return obj; }
    int member() const { return mbr; }
    const char *memberName() const { return mbr_name; }
    int memberType() const { return mbr_type; }
    int numArgs() const { return nargs; }

private:
    QObject *obj;
    int mbr;
    const char *mbr_name;
    int mbr_type;
    int nargs;

private:

    QConnection( const QConnection & );
    QConnection &operator=( const QConnection & );

};

# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 75 "/coolo/prod/qt-copy/include/qconnection.h" 2
# 43 "/coolo/prod/qt-copy/include/qmetaobject.h" 2






class QObject;
struct QUMethod;
class QMetaObjectPrivate;

struct QMetaData
{
    const char *name;
    const QUMethod* method;
    enum Access { Private, Protected, Public };
    Access access;
};


struct QMetaEnum
{
    const char *name;
    uint count;
    struct Item
    {
        const char *key;
        int value;
    };
    const Item *items;
    bool set;
};




class QMetaProperty
{
public:
    const char* type() const { return t; }
    const char* name() const { return n; }

    bool writable() const;
    bool isValid() const;

    bool isSetType() const;
    bool isEnumType() const;
    QStrList enumKeys() const;

    int keyToValue( const char* key ) const;
    const char* valueToKey( int value ) const;
    int keysToValue( const QStrList& keys ) const;
    QStrList valueToKeys( int value ) const;

    bool designable( QObject* = 0 ) const;
    bool scriptable( QObject* = 0 ) const;
    bool stored( QObject* = 0 ) const;

    bool reset( QObject* ) const;

    const char* t;
    const char* n;

    enum Flags {
        Invalid = 0x00000000,
        Readable = 0x00000001,
        Writable = 0x00000002,
        EnumOrSet = 0x00000004,
        UnresolvedEnum = 0x00000008,
        StdSet = 0x00000100,
        Override = 0x00000200
    };

    uint flags;
    bool testFlags( uint f ) const;
    bool stdSet() const;
    int id() const;

    QMetaObject** meta;

    const QMetaEnum* enumData;
    int _id;
    void clear();
};

inline bool QMetaProperty::testFlags( uint f ) const
{ return (flags & (uint)f) != (uint)0; }



struct QClassInfo
{
    const char* name;
    const char* value;
};

class QMetaObject
{
public:
    QMetaObject( const char * const class_name, QMetaObject *superclass,
                 const QMetaData * const slot_data, int n_slots,
                 const QMetaData * const signal_data, int n_signals,

                 const QMetaProperty *const prop_data, int n_props,
                 const QMetaEnum *const enum_data, int n_enums,

                 const QClassInfo *const class_info, int n_info );


    QMetaObject( const char * const class_name, QMetaObject *superclass,
                 const QMetaData * const slot_data, int n_slots,
                 const QMetaData * const signal_data, int n_signals,
                 const QMetaProperty *const prop_data, int n_props,
                 const QMetaEnum *const enum_data, int n_enums,
                 bool (*qt_static_property)(QObject*, int, int, QVariant*),
                 const QClassInfo *const class_info, int n_info );



    virtual ~QMetaObject();

    const char *className() const { return classname; }
    const char *superClassName() const { return superclassname; }

    QMetaObject *superClass() const { return superclass; }

    bool inherits( const char* clname ) const;

    int numSlots( bool super = FALSE ) const;
    int numSignals( bool super = FALSE ) const;

    int findSlot( const char *, bool super = FALSE ) const;
    int findSignal( const char *, bool super = FALSE ) const;

    const QMetaData *slot( int index, bool super = FALSE ) const;
    const QMetaData *signal( int index, bool super = FALSE ) const;

    QStrList slotNames( bool super = FALSE ) const;
    QStrList signalNames( bool super = FALSE ) const;

    int slotOffset() const;
    int signalOffset() const;
    int propertyOffset() const;

    int numClassInfo( bool super = FALSE ) const;
    const QClassInfo *classInfo( int index, bool super = FALSE ) const;
    const char *classInfo( const char* name, bool super = FALSE ) const;


    const QMetaProperty *property( int index, bool super = FALSE ) const;
    int findProperty( const char *name, bool super = FALSE ) const;
    int indexOfProperty( const QMetaProperty*, bool super = FALSE ) const;
    const QMetaProperty* resolveProperty( const QMetaProperty* ) const;
    int resolveProperty( int ) const;
    QStrList propertyNames( bool super = FALSE ) const;
    int numProperties( bool super = FALSE ) const;





    static QMetaObject *new_metaobject( const char *, QMetaObject *,
                                        const QMetaData *const, int,
                                        const QMetaData *const, int,

                                        const QMetaProperty *const prop_data, int n_props,
                                        const QMetaEnum *const enum_data, int n_enums,

                                        const QClassInfo *const class_info, int n_info );

    static QMetaObject *new_metaobject( const char *, QMetaObject *,
                                        const QMetaData *const, int,
                                        const QMetaData *const, int,
                                        const QMetaProperty *const prop_data, int n_props,
                                        const QMetaEnum *const enum_data, int n_enums,
                                         bool (*qt_static_property)(QObject*, int, int, QVariant*),
                                        const QClassInfo *const class_info, int n_info );
    QStrList enumeratorNames( bool super = FALSE ) const;
    int numEnumerators( bool super = FALSE ) const;
    const QMetaEnum *enumerator( const char* name, bool super = FALSE ) const;


    static QMetaObject *metaObject( const char *class_name );
    static bool hasMetaObject( const char *class_name );

private:
    QMemberDict *init( const QMetaData *, int );

    const char *classname;
    const char *superclassname;
    QMetaObject *superclass;
    QMetaObjectPrivate *d;
    void *reserved;
    const QMetaData *slotData;
    QMemberDict *slotDict;
    const QMetaData *signalData;
    QMemberDict *signalDict;
    int signaloffset;
    int slotoffset;

    int propertyoffset;
public:
    bool qt_static_property( QObject* o, int id, int f, QVariant* v);
private:
    friend class QMetaProperty;


private:

    QMetaObject( const QMetaObject & );
    QMetaObject &operator=( const QMetaObject & );

};

inline int QMetaObject::slotOffset() const
{ return slotoffset; }

inline int QMetaObject::signalOffset() const
{ return signaloffset; }


inline int QMetaObject::propertyOffset() const
{ return propertyoffset; }


typedef QMetaObject *(*QtStaticMetaObjectFunction)();

class QMetaObjectCleanUp
{
public:
    QMetaObjectCleanUp( const char *mo_name, QtStaticMetaObjectFunction );
    QMetaObjectCleanUp();
    ~QMetaObjectCleanUp();

    void setMetaObject( QMetaObject *&mo );

private:
    QMetaObject **metaObject;
};
# 46 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

# 1 "/coolo/prod/qt-copy/include/qsqlpropertymap.h" 1
# 38 "/coolo/prod/qt-copy/include/qsqlpropertymap.h"


# 1 "/coolo/prod/qt-copy/include/qvariant.h" 1
# 39 "/coolo/prod/qt-copy/include/qvariant.h"






class QString;
class QCString;
class QFont;
class QPixmap;
class QBrush;
class QRect;
class QPoint;
class QImage;
class QSize;
class QColor;
class QPalette;
class QColorGroup;
class QIconSet;
class QDataStream;
class QPointArray;
class QRegion;
class QBitmap;
class QCursor;
class QStringList;
class QSizePolicy;
class QDate;
class QTime;
class QDateTime;
class QBitArray;
class QKeySequence;
class QPen;

class QVariant;

template <class T> class QValueList;
template <class T> class QValueListConstIterator;
template <class T> class QValueListNode;
template <class Key, class T> class QMap;
template <class Key, class T> class QMapConstIterator;


class QVariant
{
public:
    enum Type {
        Invalid,
        Map,
        List,
        String,
        StringList,
        Font,
        Pixmap,
        Brush,
        Rect,
        Size,
        Color,
        Palette,
        ColorGroup,
        IconSet,
        Point,
        Image,
        Int,
        UInt,
        Bool,
        Double,
        CString,
        PointArray,
        Region,
        Bitmap,
        Cursor,
        SizePolicy,
        Date,
        Time,
        DateTime,
        ByteArray,
        BitArray,
        KeySequence,
        Pen,
        LongLong,
        ULongLong
    };

    QVariant();
    ~QVariant();
    QVariant( const QVariant& );

    QVariant( QDataStream& s );

    QVariant( const QString& );
    QVariant( const QCString& );
    QVariant( const char* );

    QVariant( const QStringList& );

    QVariant( const QFont& );
    QVariant( const QPixmap& );
    QVariant( const QImage& );
    QVariant( const QBrush& );
    QVariant( const QPoint& );
    QVariant( const QRect& );
    QVariant( const QSize& );
    QVariant( const QColor& );
    QVariant( const QPalette& );
    QVariant( const QColorGroup& );
    QVariant( const QIconSet& );
    QVariant( const QPointArray& );
    QVariant( const QRegion& );
    QVariant( const QBitmap& );
    QVariant( const QCursor& );
    QVariant( const QDate& );
    QVariant( const QTime& );
    QVariant( const QDateTime& );
    QVariant( const QByteArray& );
    QVariant( const QBitArray& );

    QVariant( const QKeySequence& );

    QVariant( const QPen& );

    QVariant( const QValueList<QVariant>& );
    QVariant( const QMap<QString,QVariant>& );

    QVariant( int );
    QVariant( uint );
    QVariant( Q_LLONG );
    QVariant( Q_ULLONG );

    QVariant( bool, int );
    QVariant( double );
    QVariant( QSizePolicy );

    QVariant& operator= ( const QVariant& );
    bool operator==( const QVariant& ) const;
    bool operator!=( const QVariant& ) const;

    Type type() const;
    const char* typeName() const;

    bool canCast( Type ) const;
    bool cast( Type );

    bool isValid() const;
    bool isNull() const;

    void clear();

    const QString toString() const;
    const QCString toCString() const;

    const QStringList toStringList() const;

    const QFont toFont() const;
    const QPixmap toPixmap() const;
    const QImage toImage() const;
    const QBrush toBrush() const;
    const QPoint toPoint() const;
    const QRect toRect() const;
    const QSize toSize() const;
    const QColor toColor() const;
    const QPalette toPalette() const;
    const QColorGroup toColorGroup() const;
    const QIconSet toIconSet() const;
    const QPointArray toPointArray() const;
    const QBitmap toBitmap() const;
    const QRegion toRegion() const;
    const QCursor toCursor() const;
    const QDate toDate() const;
    const QTime toTime() const;
    const QDateTime toDateTime() const;
    const QByteArray toByteArray() const;
    const QBitArray toBitArray() const;

    const QKeySequence toKeySequence() const;

    const QPen toPen() const;
    int toInt( bool * ok=0 ) const;
    uint toUInt( bool * ok=0 ) const;
    Q_LLONG toLongLong( bool * ok=0 ) const;
    Q_ULLONG toULongLong( bool * ok=0 ) const;
    bool toBool() const;
    double toDouble( bool * ok=0 ) const;

    const QValueList<QVariant> toList() const;
    const QMap<QString,QVariant> toMap() const;

    QSizePolicy toSizePolicy() const;


    QValueListConstIterator<QString> stringListBegin() const;
    QValueListConstIterator<QString> stringListEnd() const;
    QValueListConstIterator<QVariant> listBegin() const;
    QValueListConstIterator<QVariant> listEnd() const;
    QMapConstIterator<QString,QVariant> mapBegin() const;
    QMapConstIterator<QString,QVariant> mapEnd() const;
    QMapConstIterator<QString,QVariant> mapFind( const QString& ) const;

    QString& asString();
    QCString& asCString();

    QStringList& asStringList();

    QFont& asFont();
    QPixmap& asPixmap();
    QImage& asImage();
    QBrush& asBrush();
    QPoint& asPoint();
    QRect& asRect();
    QSize& asSize();
    QColor& asColor();
    QPalette& asPalette();
    QColorGroup& asColorGroup();
    QIconSet& asIconSet();
    QPointArray& asPointArray();
    QBitmap& asBitmap();
    QRegion& asRegion();
    QCursor& asCursor();
    QDate& asDate();
    QTime& asTime();
    QDateTime& asDateTime();
    QByteArray& asByteArray();
    QBitArray& asBitArray();

    QKeySequence& asKeySequence();

    QPen& asPen();
    int& asInt();
    uint& asUInt();
    Q_LLONG& asLongLong();
    Q_ULLONG& asULongLong();
    bool& asBool();
    double& asDouble();

    QValueList<QVariant>& asList();
    QMap<QString,QVariant>& asMap();

    QSizePolicy& asSizePolicy();


    void load( QDataStream& );
    void save( QDataStream& ) const;

    static const char* typeToName( Type typ );
    static Type nameToType( const char* name );

private:
    void detach();

    class Private : public QShared
    {
    public:
        Private();
        Private( Private* );
        ~Private();

        void clear();

        Type typ;
        union
        {
            uint u;
            int i;
            Q_LLONG ll;
            Q_ULLONG ull;
            bool b;
            double d;
            void *ptr;
        } value;
        uint is_null : 1;
    };

    Private* d;

public:
    void* rawAccess( void* ptr = 0, Type typ = Invalid, bool deepCopy = FALSE );
};
# 324 "/coolo/prod/qt-copy/include/qvariant.h"
inline QVariant::Type QVariant::type() const
{
    return d->typ;
}

inline bool QVariant::isValid() const
{
    return (d->typ != Invalid);
}


inline QValueListConstIterator<QString> QVariant::stringListBegin() const
{
    if ( d->typ != StringList )
        return QValueListConstIterator<QString>();
    return ((const QStringList*)d->value.ptr)->begin();
}

inline QValueListConstIterator<QString> QVariant::stringListEnd() const
{
    if ( d->typ != StringList )
        return QValueListConstIterator<QString>();
    return ((const QStringList*)d->value.ptr)->end();
}

inline QValueListConstIterator<QVariant> QVariant::listBegin() const
{
    if ( d->typ != List )
        return QValueListConstIterator<QVariant>();
    return ((const QValueList<QVariant>*)d->value.ptr)->begin();
}

inline QValueListConstIterator<QVariant> QVariant::listEnd() const
{
    if ( d->typ != List )
        return QValueListConstIterator<QVariant>();
    return ((const QValueList<QVariant>*)d->value.ptr)->end();
}

inline QMapConstIterator<QString,QVariant> QVariant::mapBegin() const
{
    if ( d->typ != Map )
        return QMapConstIterator<QString,QVariant>();
    return ((const QMap<QString,QVariant>*)d->value.ptr)->begin();
}

inline QMapConstIterator<QString,QVariant> QVariant::mapEnd() const
{
    if ( d->typ != Map )
        return QMapConstIterator<QString,QVariant>();
    return ((const QMap<QString,QVariant>*)d->value.ptr)->end();
}

inline QMapConstIterator<QString,QVariant> QVariant::mapFind( const QString& key ) const
{
    if ( d->typ != Map )
        return QMapConstIterator<QString,QVariant>();
    return ((const QMap<QString,QVariant>*)d->value.ptr)->find( key );
}



 QDataStream& operator>> ( QDataStream& s, QVariant& p );
 QDataStream& operator<< ( QDataStream& s, const QVariant& p );
 QDataStream& operator>> ( QDataStream& s, QVariant::Type& p );
 QDataStream& operator<< ( QDataStream& s, const QVariant::Type p );
# 42 "/coolo/prod/qt-copy/include/qsqlpropertymap.h" 2





class QWidget;
class QSqlPropertyMapPrivate;

class QSqlPropertyMap {
public:
    QSqlPropertyMap();
    virtual ~QSqlPropertyMap();

    QVariant property( QWidget * widget );
    virtual void setProperty( QWidget * widget, const QVariant & value );

    void insert( const QString & classname, const QString & property );
    void remove( const QString & classname );

    static QSqlPropertyMap * defaultMap();
    static void installDefaultMap( QSqlPropertyMap * map );

private:

    QSqlPropertyMap( const QSqlPropertyMap & );
    QSqlPropertyMap &operator=( const QSqlPropertyMap & );

    QSqlPropertyMapPrivate* d;

};
# 48 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2


#undef QT_NO_TRANSLATION
# 1 "/coolo/prod/kdelibs/kdecore/kapplication.h" 1
# 24 "/coolo/prod/kdelibs/kdecore/kapplication.h"


# 1 "/coolo/prod/kdelibs/kdecore/kdeversion.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/kdeversion.h"








namespace KDE
{
# 49 "/coolo/prod/kdelibs/kdecore/kdeversion.h"
    unsigned int version();






    unsigned int versionMajor();






    unsigned int versionMinor();






    unsigned int versionRelease();





    const char *versionString();
}
# 28 "/coolo/prod/kdelibs/kdecore/kapplication.h" 2
# 1 "/coolo/prod/kdelibs/kdecore/kdemacros.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kdemacros.h"


# 75 "/coolo/prod/kdelibs/kdecore/kdemacros.h"
# 29 "/coolo/prod/kdelibs/kdecore/kapplication.h" 2

class KConfig;
class KCharsets;
class DCOPClient;
class DCOPObject;

typedef unsigned long Atom;




# 1 "/coolo/prod/qt-copy/include/qapplication.h" 1
# 39 "/coolo/prod/qt-copy/include/qapplication.h"


# 1 "/coolo/prod/qt-copy/include/qdesktopwidget.h" 1
# 37 "/coolo/prod/qt-copy/include/qdesktopwidget.h"





class QApplication;
class QDesktopWidgetPrivate;

class QDesktopWidget : public QWidget
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
    QDesktopWidget();
    ~QDesktopWidget();

    bool isVirtualDesktop() const;

    int numScreens() const;
    int primaryScreen() const;

    int screenNumber( QWidget *widget = 0 ) const;
    int screenNumber( const QPoint & ) const;

    QWidget *screen( int screen = -1 );

    const QRect& screenGeometry( int screen = -1 ) const;
    const QRect& screenGeometry( QWidget *widget ) const
    { return screenGeometry( screenNumber( widget ) ); }
    const QRect& screenGeometry( const QPoint &point ) const
    { return screenGeometry( screenNumber( point ) ); }

    const QRect& availableGeometry( int screen = -1 ) const;
    const QRect& availableGeometry( QWidget *widget ) const
    { return availableGeometry( screenNumber( widget ) ); }
    const QRect& availableGeometry( const QPoint &point ) const
    { return availableGeometry( screenNumber( point ) ); }

    void insertChild( QObject * );

protected:
    void resized( int );

protected:
    void resizeEvent( QResizeEvent *e );

private:
    QDesktopWidgetPrivate *d;


    QDesktopWidget( const QDesktopWidget & );
    QDesktopWidget &operator=( const QDesktopWidget & );


    friend class QApplication;
};
# 43 "/coolo/prod/qt-copy/include/qapplication.h" 2
# 1 "/coolo/prod/qt-copy/include/qasciidict.h" 1
# 39 "/coolo/prod/qt-copy/include/qasciidict.h"





template<class type>
class QAsciiDict



        : public QGDict

{
public:
    QAsciiDict(int size=17, bool caseSensitive=TRUE, bool copyKeys=TRUE )
        : QGDict(size,AsciiKey,caseSensitive,copyKeys) {}
    QAsciiDict( const QAsciiDict<type> &d ) : QGDict(d) {}
   ~QAsciiDict() { clear(); }
    QAsciiDict<type> &operator=(const QAsciiDict<type> &d)
                        { return (QAsciiDict<type>&)QGDict::operator=(d); }
    uint count() const { return QGDict::count(); }
    uint size() const { return QGDict::size(); }
    bool isEmpty() const { return QGDict::count() == 0; }

    void insert( const char *k, const type *d )
                                        { QGDict::look_ascii(k,(Item)d,1); }
    void replace( const char *k, const type *d )
                                        { QGDict::look_ascii(k,(Item)d,2); }
    bool remove( const char *k ) { return QGDict::remove_ascii(k); }
    type *take( const char *k ) { return (type *)QGDict::take_ascii(k); }
    type *find( const char *k ) const
                { return (type *)((QGDict*)this)->QGDict::look_ascii(k,0,0); }
    type *operator[]( const char *k ) const
                { return (type *)((QGDict*)this)->QGDict::look_ascii(k,0,0); }

    void clear() { QGDict::clear(); }
    void resize( uint n ) { QGDict::resize(n); }
    void statistics() const { QGDict::statistics(); }







private:
    void deleteItem( Item d );
};


template<> inline void QAsciiDict<void>::deleteItem( QPtrCollection::Item )
{
}


template<class type> inline void QAsciiDict<type>::deleteItem( QPtrCollection::Item d )
{
    if ( del_item ) delete (type *)d;
}

template<class type>
class QAsciiDictIterator : public QGDictIterator
{
public:
    QAsciiDictIterator(const QAsciiDict<type> &d)
        : QGDictIterator((QGDict &)d) {}
   ~QAsciiDictIterator() {}
    uint count() const { return dict->count(); }
    bool isEmpty() const { return dict->count() == 0; }
    type *toFirst() { return (type *)QGDictIterator::toFirst(); }
    operator type *() const { return (type *)QGDictIterator::get(); }
    type *current() const { return (type *)QGDictIterator::get(); }
    const char *currentKey() const { return QGDictIterator::getKeyAscii(); }
    type *operator()() { return (type *)QGDictIterator::operator()(); }
    type *operator++() { return (type *)QGDictIterator::operator++(); }
    type *operator+=(uint j) { return (type *)QGDictIterator::operator+=(j);}
};

# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 120 "/coolo/prod/qt-copy/include/qasciidict.h" 2
# 44 "/coolo/prod/qt-copy/include/qapplication.h" 2






class QSessionManager;
class QStyle;
class QTranslator;
class QEventLoop;





class QMutex;



class QApplication;
extern QApplication *qApp;


class QApplication : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
    QApplication( int &argc, char **argv );
    QApplication( int &argc, char **argv, bool GUIenabled );
    enum Type { Tty, GuiClient, GuiServer };
    QApplication( int &argc, char **argv, Type );

    QApplication( Display* dpy, HANDLE visual = 0, HANDLE cmap = 0 );
    QApplication( Display *dpy, int argc, char **argv,
                  HANDLE visual = 0, HANDLE cmap= 0 );

    virtual ~QApplication();

    int argc() const;
    char **argv() const;

    Type type() const;


    static QStyle &style();
    static void setStyle( QStyle* );
    static QStyle* setStyle( const QString& );


    enum ColorMode { NormalColors, CustomColors };
    static ColorMode colorMode();
    static void setColorMode( QApplication::ColorMode );


    enum ColorSpec { NormalColor=0, CustomColor=1, ManyColor=2 };
    static int colorSpec();
    static void setColorSpec( int );

    static QCursor *overrideCursor();
    static void setOverrideCursor( const QCursor &, bool replace=FALSE );
    static void restoreOverrideCursor();

    static bool hasGlobalMouseTracking();
    static void setGlobalMouseTracking( bool enable );

    static QPalette palette( const QWidget* = 0 );
    static void setPalette( const QPalette &, bool informWidgets=FALSE,
                                 const char* className = 0 );

    static QFont font( const QWidget* = 0 );
    static void setFont( const QFont &, bool informWidgets=FALSE,
                              const char* className = 0 );
    static QFontMetrics fontMetrics();

    QWidget *mainWidget() const;
    virtual void setMainWidget( QWidget * );
    virtual void polish( QWidget * );

    static QWidgetList *allWidgets();
    static QWidgetList *topLevelWidgets();

    static QDesktopWidget *desktop();

    static QWidget *activePopupWidget();
    static QWidget *activeModalWidget();

    static QClipboard *clipboard();

    QWidget *focusWidget() const;
    QWidget *activeWindow() const;

    static QWidget *widgetAt( int x, int y, bool child=FALSE );
    static QWidget *widgetAt( const QPoint &, bool child=FALSE );

    static QEventLoop *eventLoop();

    int exec();
    void processEvents();
    void processEvents( int maxtime );
    void processOneEvent();
    bool hasPendingEvents();
    int enter_loop();
    void exit_loop();
    int loopLevel() const;
    static void exit( int retcode=0 );

    static bool sendEvent( QObject *receiver, QEvent *event );
    static void postEvent( QObject *receiver, QEvent *event );
    static void sendPostedEvents( QObject *receiver, int event_type );
    static void sendPostedEvents();

    static void removePostedEvents( QObject *receiver );

    virtual bool notify( QObject *, QEvent * );

    static bool startingUp();
    static bool closingDown();

    static void flushX();
    static void flush();
    static void syncX();

    static void beep();



    void setDefaultCodec( QTextCodec * );
    QTextCodec* defaultCodec() const;

    void installTranslator( QTranslator * );
    void removeTranslator( QTranslator * );

    enum Encoding { DefaultCodec, UnicodeUTF8 };
    QString translate( const char * context,
                                const char * key,
                                const char * comment = 0,
                                Encoding encoding = DefaultCodec ) const;

    QString applicationDirPath();
    QString applicationFilePath();



    static void setWinStyleHighlightColor( const QColor &c ) {
        QPalette p( palette() );
        p.setColor( QColorGroup::Highlight, c );
        setPalette( p, TRUE);
    }
    static const QColor &winStyleHighlightColor() {
        return palette().active().highlight();
    }

    static void setDesktopSettingsAware( bool );
    static bool desktopSettingsAware();

    static void setCursorFlashTime( int );
    static int cursorFlashTime();

    static void setDoubleClickInterval( int );
    static int doubleClickInterval();

    static void setWheelScrollLines( int );
    static int wheelScrollLines();

    static void setGlobalStrut( const QSize & );
    static QSize globalStrut();


    static void setLibraryPaths( const QStringList & );
    static QStringList libraryPaths();
    static void addLibraryPath( const QString & );
    static void removeLibraryPath( const QString & );

    static void setStartDragTime( int ms );
    static int startDragTime();
    static void setStartDragDistance( int l );
    static int startDragDistance();

    static void setReverseLayout( bool b );
    static bool reverseLayout();

    static int horizontalAlignment( int align );

    static bool isEffectEnabled( Qt::UIEffect );
    static void setEffectEnabled( Qt::UIEffect, bool enable = TRUE );
# 237 "/coolo/prod/qt-copy/include/qapplication.h"
    virtual bool x11EventFilter( XEvent * );
    virtual int x11ClientMessage( QWidget*, XEvent*, bool passive_only);
    int x11ProcessEvent( XEvent* );
# 263 "/coolo/prod/qt-copy/include/qapplication.h"
    bool isSessionRestored() const;
    QString sessionId() const;
    QString sessionKey() const;
    virtual void commitData( QSessionManager& sm );
    virtual void saveState( QSessionManager& sm );


    static void create_xim();
    static void close_xim();
    static bool x11_apply_settings();

    void wakeUpGuiThread();

    void lock();
    void unlock(bool wakeUpGui = TRUE);
    bool locked();
    bool tryLock();


protected:
    void lastWindowClosed();
    void aboutToQuit();
    void guiThreadAwake();

public :
    void quit();
    void closeAllWindows();
    void aboutQt();






protected:
    bool event(QEvent *);

private:
    void construct( int &argc, char **argv, Type );
    void initialize( int, char ** );
    void init_precmdline();
    void process_cmdline( int* argcptr, char ** argv );
    bool internalNotify( QObject *, QEvent * );
# 326 "/coolo/prod/qt-copy/include/qapplication.h"
    static QMutex *qt_mutex;


    int app_argc;
    char **app_argv;
    bool quit_now;
    int quit_code;
    static QStyle *app_style;
    static int app_cspec;

    static QPalette *app_pal;

    static QFont *app_font;

    static QCursor *app_cursor;

    static QEventLoop* eventloop;
    static int app_tracking;
    static bool is_app_running;
    static bool is_app_closing;
    static bool app_exit_loop;
    static int loop_level;
    static QWidget *main_widget;
    static QWidget *focus_widget;
    static QWidget *active_window;
    static bool obey_desktop_settings;
    static int cursor_flash_time;
    static int mouse_double_click_time;
    static int wheel_scroll_lines;
    static int composedUnicode;

    static bool animate_ui;
    static bool animate_menu;
    static bool animate_tooltip;
    static bool animate_combo;
    static bool fade_menu;
    static bool fade_tooltip;
    static bool animate_toolbox;
    static bool widgetCount;
    static bool metaComposeUnicode;

    QValueList<QTranslator*> *translators;

    QSessionManager *session_manager;
    QString session_id;
    static QString* session_key;
    bool is_session_restored;


    static void x11_initialize_style();


    static QSize app_strut;

    static QStringList *app_libpaths;

    static QAsciiDict<QPalette> *app_palettes;
    static QAsciiDict<QFont> *app_fonts;

    static QWidgetList *popupWidgets;
    bool inPopupMode() const;
    void closePopup( QWidget *popup );
    void openPopup( QWidget *popup );
    void setActiveWindow( QWidget* act );

    static bool sendSpontaneousEvent( QObject *receiver, QEvent *event );
    static void removePostedEvent( QEvent * );

    friend class QWidget;
    friend class QETWidget;
    friend class QDialog;
    friend class QAccelManager;
    friend class QEvent;
    friend class QTranslator;
    friend class QEventLoop;
    friend void qt_ucm_initialize( QApplication * );






private:

    QApplication( const QApplication & );
    QApplication &operator=( const QApplication & );

};

inline int QApplication::argc() const
{
    return app_argc;
}

inline char **QApplication::argv() const
{
    return app_argv;
}
# 434 "/coolo/prod/qt-copy/include/qapplication.h"
inline QCursor *QApplication::overrideCursor()
{
    return app_cursor;
}

inline bool QApplication::hasGlobalMouseTracking()
{
    return app_tracking > 0;
}

inline QWidget *QApplication::mainWidget() const
{
    return main_widget;
}

inline QWidget *QApplication::focusWidget() const
{
    return focus_widget;
}

inline QWidget *QApplication::activeWindow() const
{
    return active_window;
}

inline QWidget *QApplication::widgetAt( const QPoint &p, bool child )
{
    return widgetAt( p.x(), p.y(), child );
}

inline bool QApplication::inPopupMode() const
{
    return popupWidgets != 0;
}

inline bool QApplication::isSessionRestored() const
{
    return is_session_restored;
}

inline QString QApplication::sessionId() const
{
    return session_id;
}

inline QString QApplication::sessionKey() const
{
    return session_key ? *session_key : QString::null;
}

inline QSize QApplication::globalStrut()
{
    return app_strut;
}

inline bool QApplication::sendEvent( QObject *receiver, QEvent *event )
{ if ( event ) event->spont = FALSE; return qApp ? qApp->notify( receiver, event ) : FALSE; }

inline bool QApplication::sendSpontaneousEvent( QObject *receiver, QEvent *event )
{ if ( event ) event->spont = TRUE; return qApp ? qApp->notify( receiver, event ) : FALSE; }
# 509 "/coolo/prod/qt-copy/include/qapplication.h"
inline int QApplication::horizontalAlignment( int align )
{
    align &= AlignHorizontal_Mask;
    if ( align == AlignAuto ) {
        if ( reverseLayout() )
            align = AlignRight;
        else
            align = AlignLeft;
    }
    return align;
}
# 41 "/coolo/prod/kdelibs/kdecore/kapplication.h" 2

# 1 "/coolo/prod/kdelibs/kdecore/kinstance.h" 1
# 19 "/coolo/prod/kdelibs/kdecore/kinstance.h"

class KStandardDirs;
class KAboutData;
class KConfig;
class KIconLoader;
class KCharsets;
class QFont;
class KInstancePrivate;
class KMimeSourceFactory;
# 42 "/coolo/prod/kdelibs/kdecore/kinstance.h"
class KInstance
{
    friend class KStandardDirs;

 public:




    KInstance( const QCString& instanceName) ;
# 63 "/coolo/prod/kdelibs/kdecore/kinstance.h"
    KInstance( const KAboutData * aboutData );







    KInstance( KInstance* src );




    virtual ~KInstance();





    KStandardDirs *dirs() const;





    KConfig *config() const;





    KIconLoader *iconLoader() const;




    void newIconLoader() const;

    KCharsets *charsets() const;







    const KAboutData *aboutData() const;






    QCString instanceName() const;






    KMimeSourceFactory* mimeSourceFactory () const;

protected:



    KInstance( const KInstance& );






    void setConfigName(const QString &name);

private:
    mutable KStandardDirs *_dirs;

    mutable KConfig *_config;
    mutable KIconLoader *_iconLoader;

    QCString _name;
    const KAboutData *_aboutData;

protected:
    virtual void virtual_hook( int id, void* data );
private:
    KInstancePrivate *d;
};
# 43 "/coolo/prod/kdelibs/kdecore/kapplication.h" 2

struct _IceConn;
class QPopupMenu;
class QStrList;
class KSessionManaged;
class KStyle;
class KURL;


class KApplicationPrivate;
# 96 "/coolo/prod/kdelibs/kdecore/kapplication.h"
class KApplication : public QApplication, public KInstance
{

  public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
  enum CaptionLayout { CaptionAppLast=1, CaptionAppFirst, CaptionNoApp };
# 116 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  KApplication( bool allowStyles=true, bool GUIenabled=true);
# 143 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  KApplication(Display *display, int& argc, char** argv, const QCString& rAppName,
               bool allowStyles=true, bool GUIenabled=true);
# 171 "/coolo/prod/kdelibs/kdecore/kapplication.h"
 KApplication(int& argc, char** argv,
              const QCString& rAppName, bool allowStyles=true, bool GUIenabled=true) ;




  static void addCmdLineOptions();

  virtual ~KApplication();
# 191 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static KApplication* kApplication() { return KApp; }
# 200 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  KConfig* sessionConfig();
# 210 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  bool isRestored() const { return QApplication::isSessionRestored(); }







  void disableSessionManagement();







  void enableSessionManagement();




  enum ShutdownConfirm {



    ShutdownConfirmDefault = -1,



    ShutdownConfirmNo = 0,



    ShutdownConfirmYes = 1
  };




  enum ShutdownType {



    ShutdownTypeDefault = -1,



    ShutdownTypeNone = 0,



    ShutdownTypeReboot = 1,



    ShutdownTypeHalt = 2
  };




  enum ShutdownMode {



    ShutdownModeDefault = -1,




    ShutdownModeSchedule = 0,



    ShutdownModeTryNow = 1,



    ShutdownModeForceNow = 2,



    ShutdownModeInteractive = 3
  };
# 310 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  bool requestShutDown( ShutdownConfirm confirm = ShutdownConfirmDefault,
                        ShutdownType sdtype = ShutdownTypeDefault,
                        ShutdownMode sdmode = ShutdownModeDefault );
# 327 "/coolo/prod/kdelibs/kdecore/kapplication.h"
    void propagateSessionManager();






  void commitData( QSessionManager& sm );






  void saveState( QSessionManager& sm );
# 352 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  bool sessionSaving() const;







  static DCOPClient *dcopClient();





  static void disableAutoDcopRegistration();





  QPixmap icon() const;





  QString iconName() const;





  QPixmap miniIcon() const;





  QString miniIconName() const;
# 402 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void setTopWidget( QWidget *topWidget );
# 414 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void invokeHelp( const QString& anchor = QString::null,
                   const QString& appname = QString::null ) const;
# 431 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void invokeHTMLHelp( const QString& aFilename, const QString& aTopic = QString::null ) const __attribute__ ((deprecated));







  void invokeMailer( const QString &address, const QString &subject );






  void invokeMailer( const KURL &mailtoURL );
# 461 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void invokeMailer(const QString &to, const QString &cc, const QString &bcc,
                    const QString &subject, const QString &body,
                    const QString &messageFile = QString::null, const QStringList &attachURLs = QStringList());

public :
# 474 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void invokeBrowser( const QString &url );
# 483 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void cut();
# 492 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void copy();
# 501 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void paste();
# 528 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void clear();
# 537 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void selectAll();

public:





  static QCString launcher();
# 567 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static int startServiceByName( const QString& _name, const QString &URL,
                QString *error=0, QCString *dcopService=0, int *pid=0, const QCString &startup_id = "", bool noWait = false );
# 590 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static int startServiceByName( const QString& _name, const QStringList &URLs=QStringList(),
                QString *error=0, QCString *dcopService=0, int *pid=0, const QCString &startup_id = "", bool noWait = false );
# 613 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static int startServiceByDesktopPath( const QString& _name, const QString &URL,
                QString *error=0, QCString *dcopService=0, int *pid = 0, const QCString &startup_id = "", bool noWait = false );
# 636 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static int startServiceByDesktopPath( const QString& _name, const QStringList &URLs=QStringList(),
                QString *error=0, QCString *dcopService=0, int *pid = 0, const QCString &startup_id = "", bool noWait = false );
# 659 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static int startServiceByDesktopName( const QString& _name, const QString &URL,
                QString *error=0, QCString *dcopService=0, int *pid = 0, const QCString &startup_id = "", bool noWait = false );
# 682 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static int startServiceByDesktopName( const QString& _name, const QStringList &URLs=QStringList(),
                QString *error=0, QCString *dcopService=0, int *pid = 0, const QCString &startup_id = "", bool noWait = false );
# 702 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static int kdeinitExec( const QString& name, const QStringList &args=QStringList(),
                QString *error=0, int *pid = 0 );
# 720 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static int kdeinitExecWait( const QString& name, const QStringList &args=QStringList(),
                QString *error=0, int *pid = 0 );
# 731 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  QString caption() const;




  __attribute__ ((deprecated)) KStyle* kstyle() const { return 0; }
# 755 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  QString makeStdCaption( const QString &userCaption,
                          bool withAppName=true, bool modified=false ) const;
# 765 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  QString tempSaveName( const QString& pFilename ) const;
# 776 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  QString checkRecoverFile( const QString& pFilename, bool& bRecover ) const;






  Display *getDisplay() { return display; }
# 793 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void enableStyles();
# 802 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void disableStyles();
# 813 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void installX11EventFilter( QWidget* filter );





  void removeX11EventFilter( const QWidget* filter );





  static int random();






  static QString randomString(int length);
# 843 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void addKipcEventMask(int id);
# 853 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void removeKipcEventMask(int id);






  QCString startupId() const;






  void setStartupId( const QCString& startup_id );






  QString geometryArgument() const;





  void installKDEPropertyMap();






  bool authorize(const QString &genericAction);
# 896 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  bool authorizeKAction(const char *action);
# 911 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  bool authorizeURLAction(const QString &action, const KURL &baseURL, const KURL &destURL);



  enum { ShiftModifier = 1<<0,
         LockModifier = 1<<1,
         ControlModifier = 1<<2,
         Modifier1 = 1<<3,
         Modifier2 = 1<<4,
         Modifier3 = 1<<5,
         Modifier4 = 1<<6,
         Modifier5 = 1<<7 };
# 933 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static uint keyboardModifiers();


  enum { Button1Pressed = 1<<8,
         Button2Pressed = 1<<9,
         Button3Pressed = 1<<10,
         Button4Pressed = 1<<11,
         Button5Pressed = 1<<12 };
# 950 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static uint mouseState();


public :






  void ref();





  void deref();

protected:



  KApplication( bool allowStyles, bool GUIenabled, KInstance* _instance );





  bool x11EventFilter( XEvent * );

  Display *display;

  Atom kipcCommAtom;
  int kipcEventMask;


  static KApplication *KApp;
  int pArgc;
# 1020 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void invokeEditSlot( const char *slot );

private :
  void dcopFailure(const QString &);
  void dcopBlockUserInput( bool );
  void x11FilterDestroyed();

private:
  QString sessionConfigName() const;
  KConfig* pSessionConfig;
  static DCOPClient *s_DCOPClient;
  static bool s_dcopClientNeedsPostInit;
  QString aCaption;
  bool bSessionManagement;
  QPixmap aIconPixmap;
  QPixmap aMiniIconPixmap;
  QString aIconName;
  QString aMiniIconName;
  bool useStyles;
  QWidget *smw;

  void init( bool GUIenabled );

  void parseCommandLine( );

  void read_app_startup_id();

  void dcopAutoRegistration();
  void dcopClientPostInit();
  void initUrlActionRestrictions();

public:



  bool notify(QObject *receiver, QEvent *event);




  int xErrhandler( Display*, void* );




  int xioErrhandler( Display* );




  void iceIOErrorHandler( _IceConn *conn );




  static bool loadedByKdeinit;




  static void startKdeinit();




  enum SettingsCategory { SETTINGS_MOUSE, SETTINGS_COMPLETION, SETTINGS_PATHS,
         SETTINGS_POPUPMENU, SETTINGS_QT, SETTINGS_SHORTCUTS };
# 1096 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static QPalette createApplicationPalette();





  static QPalette createApplicationPalette( KConfig *config, int contrast );
# 1111 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  static void installSigpipeHandler();

protected:






  void kdisplayPaletteChanged();
# 1129 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void kdisplayStyleChanged();
# 1142 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void kdisplayFontChanged();






  void appearanceChanged();




  void toolbarAppearanceChanged(int);






  void backgroundChanged(int desk);







  void settingsChanged(int category);





  void iconChanged(int group);
# 1186 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void kipcMessage(int id, int data);
# 1217 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void saveYourself();
# 1226 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  void shutDown();

private:
  void propagateSettings(SettingsCategory category);
  void kdisplaySetPalette();
  void kdisplaySetStyle();
  void kdisplaySetFont();
  void applyGUIStyle();
  static void sigpipeHandler(int);

  int captionLayout;

  KApplication(const KApplication&);
  KApplication& operator=(const KApplication&);
protected:
  virtual void virtual_hook( int id, void* data );
private:
  KApplicationPrivate* d;
};
# 1264 "/coolo/prod/kdelibs/kdecore/kapplication.h"
bool checkAccess(const QString& pathname, int mode);

class KSessionManagedPrivate;
# 1284 "/coolo/prod/kdelibs/kdecore/kapplication.h"
class KSessionManaged
{
public:
  KSessionManaged();
  virtual ~KSessionManaged();
# 1299 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  virtual bool saveState( QSessionManager& sm );
# 1309 "/coolo/prod/kdelibs/kdecore/kapplication.h"
  virtual bool commitData( QSessionManager& sm );

protected:
  virtual void virtual_hook( int id, void* data );
private:
  KSessionManagedPrivate *d;
};
# 52 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kglobal.h" 1
# 19 "/coolo/prod/kdelibs/kdecore/kglobal.h"




class KCharsets;
class KConfig;
class KIconLoader;
class KLocale;
class KStandardDirs;
class KStaticDeleterBase;
class KStaticDeleterList;
class KStringDict;
class QString;
# 44 "/coolo/prod/kdelibs/kdecore/kglobal.h"
class KGlobal
{
public:







    static KInstance *instance();





    static KStandardDirs *dirs();





    static KConfig *config();





    static KIconLoader *iconLoader();





    static KLocale *locale();





    static KCharsets *charsets();
# 103 "/coolo/prod/kdelibs/kdecore/kglobal.h"
    static const QString &staticQString(const char *str);
# 122 "/coolo/prod/kdelibs/kdecore/kglobal.h"
    static const QString &staticQString(const QString &str);







    static void registerStaticDeleter(KStaticDeleterBase *d);







    static void unregisterStaticDeleter(KStaticDeleterBase *d);







    static void deleteStaticDeleters();


    static KStringDict *_stringDict;
    static KInstance *_instance;
    static KLocale *_locale;
    static KCharsets *_charsets;
    static KStaticDeleterList *_staticDeleters;







    static void setActiveInstance(KInstance *d);
    static KInstance *activeInstance() { return _activeInstance; }

    static KInstance *_activeInstance;
};














template<class T>
inline const T& kMin (const T& a, const T& b) { return a < b ? a : b; }

template<class T>
inline const T& kMax (const T& a, const T& b) { return b < a ? a : b; }

template<class T>
inline T kAbs (const T& a) { return a < 0 ? -a : a; }
# 54 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h" 1
# 24 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"






class KConfig;
class KStandardDirsPrivate;
# 125 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
class KStandardDirs
{
public:



        KStandardDirs( );




        virtual ~KStandardDirs();
# 147 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        void addPrefix( const QString& dir );
# 156 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        void addXdgConfigPrefix( const QString& dir );
# 165 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        void addXdgDataPrefix( const QString& dir );
# 186 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        bool addResourceType( const char *type,
                              const QString& relativename );
# 204 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        bool addResourceDir( const char *type,
                             const QString& absdir);
# 225 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        QString findResource( const char *type,
                              const QString& filename ) const;
# 243 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        bool isRestrictedResource( const char *type,
                              const QString& relPath=QString::null ) const;
# 258 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        Q_UINT32 calcResourceHash( const char *type,
                              const QString& filename, bool deep) const;
# 277 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        QStringList findDirs( const char *type,
                              const QString& reldir ) const;
# 300 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        QString findResourceDir( const char *type,
                                 const QString& filename) const;
# 323 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        QStringList findAllResources( const char *type,
                                       const QString& filter = QString::null,
                                       bool recursive = false,
                                       bool uniq = false) const;
# 350 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        QStringList findAllResources( const char *type,
                                       const QString& filter,
                                       bool recursive,
                                       bool uniq,
                                       QStringList &relPaths) const;
# 373 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        static QString findExe( const QString& appname,
                                const QString& pathstr=QString::null,
                                bool ignoreExecBit=false );
# 395 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        static int findAllExe( QStringList& list, const QString& appname,
                               const QString& pathstr=QString::null,
                               bool ignoreExecBit=false );
# 408 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        void addKDEDefaults();
# 419 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        bool addCustomized(KConfig *config);
# 432 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        QStringList resourceDirs(const char *type) const;







        QStringList allTypes() const;
# 459 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
         QString saveLocation(const char *type,
                              const QString& suffix = QString::null,
                              bool create = true) const;
# 478 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
         QString relativeLocation(const char *type, const QString &absPath);
# 490 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        static bool makeDir(const QString& dir, int mode = 0755);
# 519 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        static QString kde_default(const char *type);




        QString kfsstnd_prefixes();







        QString localkdedir() const;





        QString localxdgdatadir() const;





        QString localxdgconfdir() const;







        static bool exists(const QString &fullPath);
# 562 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
        static QString realPath(const QString &dirname);
 private:

        QStringList prefixes;


        QDict<QStringList> absolutes;
        QDict<QStringList> relatives;

        mutable QDict<QStringList> dircache;
        mutable QDict<QString> savelocations;


        KStandardDirs( const KStandardDirs& );
        KStandardDirs& operator= ( const KStandardDirs& );

        bool addedCustoms;

        class KStandardDirsPrivate;
        KStandardDirsPrivate *d;

        void checkConfig() const;
        void applyDataRestrictions(const QString &) const;
        void createSpecialResource(const char*);
};
# 644 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
QString locate( const char *type, const QString& filename, const KInstance* instance = KGlobal::instance() );
# 655 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
QString locateLocal( const char *type, const QString& filename, const KInstance* instance = KGlobal::instance() );
# 666 "/coolo/prod/kdelibs/kdecore/kstandarddirs.h"
QString locateLocal( const char *type, const QString& filename, bool createDir, const KInstance* instance = KGlobal::instance() );
# 55 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kdebug.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/kdebug.h"



class QWidget;
class QDateTime;
class QDate;
class QTime;
class QPoint;
class QSize;
class QRect;
class QRegion;
class KURL;
class QStringList;
class QColor;
class QPen;
class QBrush;

class kdbgstream;
class kndbgstream;
# 51 "/coolo/prod/kdelibs/kdecore/kdebug.h"
typedef kdbgstream & (*KDBGFUNC)(kdbgstream &);
typedef kndbgstream & (*KNDBGFUNC)(kndbgstream &);







class kdbgstreamprivate;
# 76 "/coolo/prod/kdelibs/kdecore/kdebug.h"
class kdbgstream {
 public:



    kdbgstream(unsigned int _area, unsigned int _level, bool _print = true) :
      area(_area), level(_level), print(_print) { }
    kdbgstream(const char * initialString, unsigned int _area, unsigned int _level, bool _print = true) :
      output(QString::fromLatin1(initialString)), area(_area), level(_level), print(_print) { }

    kdbgstream(kdbgstream &str) :
      output(str.output), area(str.area), level(str.level), print(str.print) { str.output.truncate(0); }
    kdbgstream(const kdbgstream &str) :
      output(str.output), area(str.area), level(str.level), print(str.print) {}
    ~kdbgstream();





    kdbgstream &operator<<(bool i) {
        if (!print) return *this;
        output += QString::fromLatin1(i ? "true" : "false");
        return *this;
    }





    kdbgstream &operator<<(short i) {
        if (!print) return *this;
        QString tmp; tmp.setNum(i); output += tmp;
        return *this;
    }





    kdbgstream &operator<<(unsigned short i) {
        if (!print) return *this;
        QString tmp; tmp.setNum(i); output += tmp;
        return *this;
    }





    kdbgstream &operator<<(char i);





    kdbgstream &operator<<(unsigned char i) {
        return operator<<( static_cast<char>( i ) );
    }





    kdbgstream &operator<<(int i) {
        if (!print) return *this;
        QString tmp; tmp.setNum(i); output += tmp;
        return *this;
    }





    kdbgstream &operator<<(unsigned int i) {
        if (!print) return *this;
        QString tmp; tmp.setNum(i); output += tmp;
        return *this;
    }





    kdbgstream &operator<<(long i) {
        if (!print) return *this;
        QString tmp; tmp.setNum(i); output += tmp;
        return *this;
    }





    kdbgstream &operator<<(unsigned long i) {
        if (!print) return *this;
        QString tmp; tmp.setNum(i); output += tmp;
        return *this;
    }



    void flush();






    kdbgstream &operator<<(const QString& string) {
        if (!print) return *this;
        output += string;
        if (output.at(output.length() -1 ) == '\n')
            flush();
        return *this;
    }





    kdbgstream &operator<<(const char *string) {
        if (!print) return *this;
        output += QString::fromUtf8(string);
        if (output.at(output.length() - 1) == '\n')
            flush();
        return *this;
    }





    kdbgstream &operator<<(const QCString& string) {
        *this << string.data();
        return *this;
    }





    kdbgstream& operator<<(const void * p) {
        form("%p", p);
        return *this;
    }





    kdbgstream& operator<<(KDBGFUNC f) {
        if (!print) return *this;
        return (*f)(*this);
    }





    kdbgstream& operator<<(double d) {
      QString tmp; tmp.setNum(d); output += tmp;
      return *this;
    }






    kdbgstream &form(const char *format, ...)

      __attribute__ ( ( format ( printf, 2, 3 ) ) )

     ;






    kdbgstream& operator << (const QWidget* widget);
    kdbgstream& operator << (QWidget* widget);






    kdbgstream& operator << ( const QDateTime& dateTime );






    kdbgstream& operator << ( const QDate& date );






    kdbgstream& operator << ( const QTime& time );






    kdbgstream& operator << ( const QPoint& point );






    kdbgstream& operator << ( const QSize& size );






    kdbgstream& operator << ( const QRect& rect);






    kdbgstream& operator << ( const QRegion& region);






    kdbgstream& operator << ( const KURL& url );






    kdbgstream& operator << ( const QStringList& list);






    kdbgstream& operator << ( const QColor& color);







    kdbgstream& operator << ( const QPen& pen );






    kdbgstream& operator << ( const QBrush& brush );


 private:
    QString output;
    unsigned int area, level;
    bool print;
    kdbgstreamprivate* d;
};







inline kdbgstream &endl( kdbgstream &s) { s << "\n"; return s; }







inline kdbgstream &flush( kdbgstream &s) { s.flush(); return s; }

kdbgstream &perror( kdbgstream &s);







class kndbgstream {
 public:

    kndbgstream() {}
    ~kndbgstream() {}




    kndbgstream &operator<<(short int ) { return *this; }




    kndbgstream &operator<<(unsigned short int ) { return *this; }




    kndbgstream &operator<<(char ) { return *this; }




    kndbgstream &operator<<(unsigned char ) { return *this; }




    kndbgstream &operator<<(int ) { return *this; }




    kndbgstream &operator<<(unsigned int ) { return *this; }



    void flush() {}




    kndbgstream &operator<<(const QString& ) { return *this; }




    kndbgstream &operator<<(const QCString& ) { return *this; }




    kndbgstream &operator<<(const char *) { return *this; }




    kndbgstream& operator<<(const void *) { return *this; }




    kndbgstream& operator<<(void *) { return *this; }




    kndbgstream& operator<<(double) { return *this; }




    kndbgstream& operator<<(long) { return *this; }




    kndbgstream& operator<<(unsigned long) { return *this; }




    kndbgstream& operator<<(KNDBGFUNC) { return *this; }




    kndbgstream& operator << (const QWidget*) { return *this; }
    kndbgstream& operator << (QWidget*) { return *this; }




    kndbgstream &form(const char *, ...) { return *this; }

    kndbgstream& operator<<( const QDateTime& ) { return *this; }
    kndbgstream& operator<<( const QDate& ) { return *this; }
    kndbgstream& operator<<( const QTime& ) { return *this; }
    kndbgstream& operator<<( const QPoint & ) { return *this; }
    kndbgstream& operator<<( const QSize & ) { return *this; }
    kndbgstream& operator<<( const QRect & ) { return *this; }
    kndbgstream& operator<<( const QRegion & ) { return *this; }
    kndbgstream& operator<<( const KURL & ) { return *this; }
    kndbgstream& operator<<( const QStringList & ) { return *this; }
    kndbgstream& operator<<( const QColor & ) { return *this; }
    kndbgstream& operator<<( const QPen & ) { return *this; }
    kndbgstream& operator<<( const QBrush & ) { return *this; }
};






inline kndbgstream &endl( kndbgstream & s) { return s; }





inline kndbgstream &flush( kndbgstream & s) { return s; }
inline kndbgstream &perror( kndbgstream & s) { return s; }
# 508 "/coolo/prod/kdelibs/kdecore/kdebug.h"
kdbgstream kdDebug(int area = 0);
kdbgstream kdDebug(bool cond, int area = 0);





QString kdBacktrace();







QString kdBacktrace(int levels);





inline kndbgstream kndDebug(int area = 0) { (void)area;; return kndbgstream(); }
inline kndbgstream kndDebug(bool , int = 0) { return kndbgstream(); }
inline QString kndBacktrace() { return QString::null; }
inline QString kndBacktrace(int) { return QString::null; }







kdbgstream kdWarning(int area = 0);
kdbgstream kdWarning(bool cond, int area = 0);






kdbgstream kdError(int area = 0);
kdbgstream kdError(bool cond, int area = 0);






kdbgstream kdFatal(int area = 0);
kdbgstream kdFatal(bool cond, int area = 0);






void kdClearDebugConfig();
# 56 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/klocale.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/klocale.h"




class QStringList;
class QTextCodec;
class QDate;
class QTime;
class QDateTime;

class KGlobal;
class KConfig;
class KConfigBase;
class KLocalePrivate;
class KCatalogue;
class KCalendarSystem;







# 62 "/coolo/prod/kdelibs/kdecore/klocale.h"
QString i18n(const char *text);
# 71 "/coolo/prod/kdelibs/kdecore/klocale.h"
QString i18n(const char *index, const char *text);







QString i18n(const char *singular, const char *plural, unsigned long n);







inline QString tr2i18n(const char* message, const char* =0) {
  return i18n(message);
}
# 103 "/coolo/prod/kdelibs/kdecore/klocale.h"
class KLocale
{
  friend class KGlobal;
public:
# 123 "/coolo/prod/kdelibs/kdecore/klocale.h"
  KLocale( const QString& catalogue, KConfig *config = 0 );




  KLocale( const KLocale & rhs );




  KLocale& operator= ( const KLocale & rhs );




  ~KLocale();
# 158 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString translate( const char *index ) const;
# 185 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString translate( const char *index, const char *fallback) const;
# 197 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString translate( const char *singular, const char *plural,
                     unsigned long n) const;
# 207 "/coolo/prod/kdelibs/kdecore/klocale.h"
  bool setEncoding(int mibEnum);
# 218 "/coolo/prod/kdelibs/kdecore/klocale.h"
  bool setLanguage(const QString & language);
# 229 "/coolo/prod/kdelibs/kdecore/klocale.h"
  bool setLanguage(const QStringList & languages);
# 240 "/coolo/prod/kdelibs/kdecore/klocale.h"
  bool setCountry(const QString & country);





  enum SignPosition { ParensAround = 0, BeforeQuantityMoney = 1,
                      AfterQuantityMoney = 2,
                      BeforeMoney = 3, AfterMoney = 4 };







  QString decimalSymbol() const;
# 265 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString thousandsSeparator() const;







  QString currencySymbol() const;
# 282 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString monetaryDecimalSymbol() const;
# 291 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString monetaryThousandsSeparator() const;







  QString positiveSign() const;







  QString negativeSign() const;







  int fracDigits() const;







  bool positivePrefixCurrencySymbol() const;







  bool negativePrefixCurrencySymbol() const;
# 340 "/coolo/prod/kdelibs/kdecore/klocale.h"
  SignPosition positiveMonetarySignPosition() const;
# 349 "/coolo/prod/kdelibs/kdecore/klocale.h"
  SignPosition negativeMonetarySignPosition() const;
# 365 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString formatMoney(double num,
                      const QString & currency = QString::null,
                      int digits = -1) const;
# 381 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString formatNumber(double num, int precision = -1) const;
# 394 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString formatLong(long num) const;
# 404 "/coolo/prod/kdelibs/kdecore/klocale.h"
   bool nounDeclension() const;
# 415 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString formatDate(const QDate &pDate, bool shortFormat = false) const;
# 424 "/coolo/prod/kdelibs/kdecore/klocale.h"
  bool dateMonthNamePossessive() const;
# 436 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString formatTime(const QTime &pTime, bool includeSecs = false) const;






  bool use12Clock() const;
# 454 "/coolo/prod/kdelibs/kdecore/klocale.h"
  bool weekStartsMonday() const ;







  int weekStartDay() const;
# 474 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString monthName(int i, bool shortName = false) const ;
# 489 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString monthNamePossessive(int i, bool shortName = false) const ;
# 501 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString weekDayName(int i, bool shortName = false) const ;







  const KCalendarSystem * calendar() const;
# 518 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString calendarType() const;
# 528 "/coolo/prod/kdelibs/kdecore/klocale.h"
  void setCalendar(const QString & calendarType);
# 540 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString formatDateTime(const QDateTime &pDateTime,
                         bool shortFormat = true,
                         bool includeSecs = false) const;
# 553 "/coolo/prod/kdelibs/kdecore/klocale.h"
  double readMoney(const QString &numStr, bool * ok = 0) const;
# 564 "/coolo/prod/kdelibs/kdecore/klocale.h"
  double readNumber(const QString &numStr, bool * ok = 0) const;
# 576 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QDate readDate(const QString &str, bool* ok = 0) const;





  QDate readDate( const QString &intstr, const QString &fmt, bool* ok = 0) const;

  enum ReadDateFlags {
      NormalFormat = 1,
      ShortFormat = 2
  };
# 602 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QDate readDate(const QString &str, ReadDateFlags flags, bool *ok = 0) const;
# 615 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QTime readTime(const QString &str, bool* ok = 0) const;

  enum ReadTimeFlags {
      WithSeconds = 0,
      WithoutSeconds = 1
  };
# 635 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QTime readTime(const QString &str, ReadTimeFlags flags, bool *ok = 0) const;
# 644 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString language() const;







  QString country() const;
# 667 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QStringList languagesTwoAlpha() const;
# 677 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QStringList languageList() const;
# 687 "/coolo/prod/kdelibs/kdecore/klocale.h"
  const char * encoding() const;
# 697 "/coolo/prod/kdelibs/kdecore/klocale.h"
  int encodingMib() const;
# 706 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QTextCodec * codecForEncoding() const;
# 716 "/coolo/prod/kdelibs/kdecore/klocale.h"
  int fileEncodingMib() const;
# 738 "/coolo/prod/kdelibs/kdecore/klocale.h"
  void setDateFormat(const QString & format);
# 759 "/coolo/prod/kdelibs/kdecore/klocale.h"
  void setDateFormatShort(const QString & format);






  void setDateMonthNamePossessive(bool possessive);
# 785 "/coolo/prod/kdelibs/kdecore/klocale.h"
  void setTimeFormat(const QString & format);
# 796 "/coolo/prod/kdelibs/kdecore/klocale.h"
  void setWeekStartsMonday(bool start) ;







  void setWeekStartDay(int day);






  QString dateFormat() const;






  QString dateFormatShort() const;






  QString timeFormat() const;






  void setDecimalSymbol(const QString & symbol);





  void setThousandsSeparator(const QString & separator);






  void setPositiveSign(const QString & sign);





  void setNegativeSign(const QString & sign);





  void setPositiveMonetarySignPosition(SignPosition signpos);





  void setNegativeMonetarySignPosition(SignPosition signpos);







  void setPositivePrefixCurrencySymbol(bool prefix);







  void setNegativePrefixCurrencySymbol(bool prefix);





  void setFracDigits(int digits);





  void setMonetaryThousandsSeparator(const QString & separator);






  void setMonetaryDecimalSymbol(const QString & symbol);





  void setCurrencySymbol(const QString & symbol);






  int pageSize() const;






  void setPageSize(int paperFormat);





  enum MeasureSystem { Metric, Imperial };






  MeasureSystem measureSystem() const;






  void setMeasureSystem(MeasureSystem value);
# 950 "/coolo/prod/kdelibs/kdecore/klocale.h"
  void insertCatalogue(const QString& catalogue);






  void removeCatalogue(const QString &catalogue);





  void setActiveCatalogue(const QString &catalogue);







  QString translateQt(const char *context,
                      const char *sourceText,
                      const char *message) const;






  QStringList allLanguagesTwoAlpha() const;







  QString twoAlphaToLanguageName(const QString &code) const;






  QStringList allCountriesTwoAlpha() const;







  QString twoAlphaToCountryName(const QString &code) const;
# 1014 "/coolo/prod/kdelibs/kdecore/klocale.h"
  static void splitLocale(const QString & str,
                          QString & language,
                          QString & country,
                          QString & charset);
# 1028 "/coolo/prod/kdelibs/kdecore/klocale.h"
  static void setMainCatalogue(const char *catalogue);







  static QString langLookup(const QString &fname, const char *rtype = "html");






  static QString defaultLanguage();






  static QString defaultCountry();





  static QString _initLanguage(KConfigBase *config);
# 1065 "/coolo/prod/kdelibs/kdecore/klocale.h"
  QString formatMoney(const QString &numStr) const ;





  QString formatNumber(const QString &numStr) const;







  QString languages() const __attribute__ ((deprecated));





  bool setCharset(const QString & charset) __attribute__ ((deprecated));





  QString charset() const __attribute__ ((deprecated));

protected:




  static void initInstance();

private:






  void initFormat(KConfig *config);
# 1116 "/coolo/prod/kdelibs/kdecore/klocale.h"
  void initLanguage(KConfig * config, bool useEnv);






  void initEncoding(KConfig * config);






  void initCatalogue(const QString & catalogue);





  void initFileNameEncoding(KConfig *config);




  static QCString encodeFileNameUTF8( const QString & fileName );




  static QString decodeFileNameUTF8( const QCString & localFileName );





  void initCatalogue( KCatalogue & catalogue );




  void doBindInit();




  void doFormatInit() const;




  void initFormat();




  QString translate_priv(const char *index,
                         const char *text,
                         const char ** original = 0) const;




  bool useDefaultLanguage() const;




  bool isLanguageInstalled(const QString & language) const;





  static QString catalogueFileName(const QString & language,
                                   const KCatalogue & catalogue);

private:

  QString m_decimalSymbol;
  QString m_thousandsSeparator;
  QString m_currencySymbol;
  QString m_monetaryDecimalSymbol;
  QString m_monetaryThousandsSeparator;
  QString m_positiveSign;
  QString m_negativeSign;
  int m_fracDigits;
  SignPosition m_positiveMonetarySignPosition;
  SignPosition m_negativeMonetarySignPosition;


  QString m_timeFormat;
  QString m_dateFormat;
  QString m_dateFormatShort;

  QString m_language;
  QString m_country;

  bool m_weekStartsMonday;
  bool m_positivePrefixCurrencySymbol;
  bool m_negativePrefixCurrencySymbol;

  KLocalePrivate *d;
};
# 57 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdefx/kstyle.h" 1
# 28 "/coolo/prod/kdelibs/kdefx/kstyle.h"






# 1 "/coolo/prod/qt-copy/include/qcommonstyle.h" 1
# 39 "/coolo/prod/qt-copy/include/qcommonstyle.h"


# 1 "/coolo/prod/qt-copy/include/qstyle.h" 1
# 38 "/coolo/prod/qt-copy/include/qstyle.h"
# 47 "/coolo/prod/qt-copy/include/qstyle.h"
class QPopupMenu;
class QStylePrivate;
class QMenuItem;
class QTab;
class QListViewItem;
class QCheckListItem;

class QStyleOption {
public:
    enum StyleOptionDefault { Default };

    QStyleOption(StyleOptionDefault=Default) : def(TRUE) {}



    QStyleOption(int in1) :
        def(FALSE), i1(in1) {}
    QStyleOption(int in1, int in2) :
        def(FALSE), i1(in1), i2(in2) {}
    QStyleOption(int in1, int in2, int in3, int in4) :
        def(FALSE), i1(in1), i2(in2), i3(in3), i4(in4) {}
    QStyleOption(QMenuItem* m) : def(FALSE), mi(m) {}
    QStyleOption(QMenuItem* m, int in1) : def(FALSE), mi(m), i1(in1) {}
    QStyleOption(QMenuItem* m, int in1, int in2) : def(FALSE), mi(m), i1(in1), i2(in2) {}
    QStyleOption(const QColor& c) : def(FALSE), cl(&c) {}
    QStyleOption(QTab* t) : def(FALSE), tb(t) {}
    QStyleOption(QListViewItem* i) : def(FALSE), li(i) {}
    QStyleOption(QCheckListItem* i) : def(FALSE), cli(i) {}
    QStyleOption(Qt::ArrowType a) : def(FALSE), i1((int)a) {}
    QStyleOption(const QRect& r) : def(FALSE), i1(r.x()), i2(r.y()), i3(r.width()),i4(r.height()){}
    QStyleOption(QWidget *w) : def(FALSE), p1((void*)w) {}

    bool isDefault() const { return def; }

    int lineWidth() const { return i1; }
    int midLineWidth() const { return i2; }
    int frameShape() const { return i3; }
    int frameShadow() const { return i4; }

    int headerSection() const { return i1; }
    QMenuItem* menuItem() const { return mi; }
    int maxIconWidth() const { return i1; }
    int tabWidth() const { return i2; }

    const QColor& color() const { return *cl; }

    QTab* tab() const { return tb; }

    QCheckListItem* checkListItem() const { return cli; }
    QListViewItem* listViewItem() const { return li; }

    Qt::ArrowType arrowType() const { return (Qt::ArrowType)i1; }
    QRect rect() const { return QRect( i1, i2, i3, i4 ); }
    QWidget* widget() const { return (QWidget*)p1; }

private:

    bool def;
    bool b1,b2,b3;
    QMenuItem* mi;
    QTab* tb;
    QListViewItem* li;
    const QColor* cl;
    int i1, i2, i3, i4;
    int i5, i6;
    QCheckListItem* cli;
    void *p1, *p2, *p3, *p4;

};

class QStyleHintReturn;

class QStyle: public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

public:
    QStyle();
    virtual ~QStyle();



    virtual void polish( QWidget * );
    virtual void unPolish( QWidget * );

    virtual void polish( QApplication * );
    virtual void unPolish( QApplication * );

    virtual void polish( QPalette & );

    virtual void polishPopupMenu( QPopupMenu* ) = 0;

    virtual QRect itemRect( QPainter *p, const QRect &r,
                            int flags, bool enabled,
                            const QPixmap *pixmap,
                            const QString &text, int len = -1 ) const;

    virtual void drawItem( QPainter *p, const QRect &r,
                           int flags, const QColorGroup &g, bool enabled,
                           const QPixmap *pixmap, const QString &text,
                           int len = -1, const QColor *penColor = 0 ) const;


    enum PrimitiveElement {
        PE_ButtonCommand,
        PE_ButtonDefault,
        PE_ButtonBevel,
        PE_ButtonTool,
        PE_ButtonDropDown,

        PE_FocusRect,

        PE_ArrowUp,
        PE_ArrowDown,
        PE_ArrowRight,
        PE_ArrowLeft,

        PE_SpinWidgetUp,
        PE_SpinWidgetDown,
        PE_SpinWidgetPlus,
        PE_SpinWidgetMinus,

        PE_Indicator,
        PE_IndicatorMask,
        PE_ExclusiveIndicator,
        PE_ExclusiveIndicatorMask,

        PE_DockWindowHandle,
        PE_DockWindowSeparator,
        PE_DockWindowResizeHandle,

        PE_Splitter,

        PE_Panel,
        PE_PanelPopup,
        PE_PanelMenuBar,
        PE_PanelDockWindow,

        PE_TabBarBase,

        PE_HeaderSection,
        PE_HeaderArrow,
        PE_StatusBarSection,

        PE_GroupBoxFrame,

        PE_Separator,

        PE_SizeGrip,

        PE_CheckMark,

        PE_ScrollBarAddLine,
        PE_ScrollBarSubLine,
        PE_ScrollBarAddPage,
        PE_ScrollBarSubPage,
        PE_ScrollBarSlider,
        PE_ScrollBarFirst,
        PE_ScrollBarLast,

        PE_ProgressBarChunk,

        PE_PanelLineEdit,
        PE_PanelTabWidget,

        PE_WindowFrame,

        PE_CheckListController,
        PE_CheckListIndicator,
        PE_CheckListExclusiveIndicator,

        PE_PanelGroupBox,


        PE_CustomBase = 0xf000000
    };

    enum StyleFlags {
        Style_Default = 0x00000000,
        Style_Enabled = 0x00000001,
        Style_Raised = 0x00000002,
        Style_Sunken = 0x00000004,
        Style_Off = 0x00000008,
        Style_NoChange = 0x00000010,
        Style_On = 0x00000020,
        Style_Down = 0x00000040,
        Style_Horizontal = 0x00000080,
        Style_HasFocus = 0x00000100,
        Style_Top = 0x00000200,
        Style_Bottom = 0x00000400,
        Style_FocusAtBorder = 0x00000800,
        Style_AutoRaise = 0x00001000,
        Style_MouseOver = 0x00002000,
        Style_Up = 0x00004000,
        Style_Selected = 0x00008000,
        Style_Active = 0x00010000,
        Style_ButtonDefault = 0x00020000
    };
    typedef uint SFlags;

    virtual void drawPrimitive( PrimitiveElement pe,
                                QPainter *p,
                                const QRect &r,
                                const QColorGroup &cg,
                                SFlags flags = Style_Default,
                                const QStyleOption& = QStyleOption::Default ) const = 0;


    enum ControlElement {
        CE_PushButton,
        CE_PushButtonLabel,

        CE_CheckBox,
        CE_CheckBoxLabel,

        CE_RadioButton,
        CE_RadioButtonLabel,

        CE_TabBarTab,
        CE_TabBarLabel,

        CE_ProgressBarGroove,
        CE_ProgressBarContents,
        CE_ProgressBarLabel,

        CE_PopupMenuItem,
        CE_MenuBarItem,

        CE_ToolButtonLabel,
        CE_MenuBarEmptyArea,
        CE_PopupMenuScroller,
        CE_DockWindowEmptyArea,
        CE_PopupMenuVerticalExtra,
        CE_PopupMenuHorizontalExtra,

        CE_ToolBoxTab,
        CE_HeaderLabel,


        CE_CustomBase = 0xf0000000
    };

    virtual void drawControl( ControlElement element,
                              QPainter *p,
                              const QWidget *widget,
                              const QRect &r,
                              const QColorGroup &cg,
                              SFlags how = Style_Default,
                              const QStyleOption& = QStyleOption::Default ) const = 0;
    virtual void drawControlMask( ControlElement element,
                                  QPainter *p,
                                  const QWidget *widget,
                                  const QRect &r,
                                  const QStyleOption& = QStyleOption::Default ) const = 0;

    enum SubRect {
        SR_PushButtonContents,
        SR_PushButtonFocusRect,

        SR_CheckBoxIndicator,
        SR_CheckBoxContents,
        SR_CheckBoxFocusRect,

        SR_RadioButtonIndicator,
        SR_RadioButtonContents,
        SR_RadioButtonFocusRect,

        SR_ComboBoxFocusRect,

        SR_SliderFocusRect,

        SR_DockWindowHandleRect,

        SR_ProgressBarGroove,
        SR_ProgressBarContents,
        SR_ProgressBarLabel,

        SR_ToolButtonContents,

        SR_DialogButtonAccept,
        SR_DialogButtonReject,
        SR_DialogButtonApply,
        SR_DialogButtonHelp,
        SR_DialogButtonAll,
        SR_DialogButtonAbort,
        SR_DialogButtonIgnore,
        SR_DialogButtonRetry,
        SR_DialogButtonCustom,

        SR_ToolBoxTabContents,


        SR_CustomBase = 0xf0000000
    };

    virtual QRect subRect( SubRect r, const QWidget *widget ) const = 0;


    enum ComplexControl{
        CC_SpinWidget,
        CC_ComboBox,
        CC_ScrollBar,
        CC_Slider,
        CC_ToolButton,
        CC_TitleBar,
        CC_ListView,


        CC_CustomBase = 0xf0000000
    };

    enum SubControl {
        SC_None = 0x00000000,

        SC_ScrollBarAddLine = 0x00000001,
        SC_ScrollBarSubLine = 0x00000002,
        SC_ScrollBarAddPage = 0x00000004,
        SC_ScrollBarSubPage = 0x00000008,
        SC_ScrollBarFirst = 0x00000010,
        SC_ScrollBarLast = 0x00000020,
        SC_ScrollBarSlider = 0x00000040,
        SC_ScrollBarGroove = 0x00000080,

        SC_SpinWidgetUp = 0x00000001,
        SC_SpinWidgetDown = 0x00000002,
        SC_SpinWidgetFrame = 0x00000004,
        SC_SpinWidgetEditField = 0x00000008,
        SC_SpinWidgetButtonField = 0x00000010,

        SC_ComboBoxFrame = 0x00000001,
        SC_ComboBoxEditField = 0x00000002,
        SC_ComboBoxArrow = 0x00000004,
        SC_ComboBoxListBoxPopup = 0x00000008,

        SC_SliderGroove = 0x00000001,
        SC_SliderHandle = 0x00000002,
        SC_SliderTickmarks = 0x00000004,

        SC_ToolButton = 0x00000001,
        SC_ToolButtonMenu = 0x00000002,

        SC_TitleBarLabel = 0x00000001,
        SC_TitleBarSysMenu = 0x00000002,
        SC_TitleBarMinButton = 0x00000004,
        SC_TitleBarMaxButton = 0x00000008,
        SC_TitleBarCloseButton = 0x00000010,
        SC_TitleBarNormalButton = 0x00000020,
        SC_TitleBarShadeButton = 0x00000040,
        SC_TitleBarUnshadeButton = 0x00000080,

        SC_ListView = 0x00000001,
        SC_ListViewBranch = 0x00000002,
        SC_ListViewExpand = 0x00000004,

        SC_All = 0xffffffff
    };
    typedef uint SCFlags;


    virtual void drawComplexControl( ComplexControl control,
                                     QPainter *p,
                                     const QWidget *widget,
                                     const QRect &r,
                                     const QColorGroup &cg,
                                     SFlags how = Style_Default,
                                     SCFlags sub = SC_All,
                                     SCFlags subActive = SC_None,
                                     const QStyleOption& = QStyleOption::Default ) const = 0;
    virtual void drawComplexControlMask( ComplexControl control,
                                         QPainter *p,
                                         const QWidget *widget,
                                         const QRect &r,
                                         const QStyleOption& = QStyleOption::Default ) const = 0;

    virtual QRect querySubControlMetrics( ComplexControl control,
                                          const QWidget *widget,
                                          SubControl sc,
                                          const QStyleOption& = QStyleOption::Default ) const = 0;
    virtual SubControl querySubControl( ComplexControl control,
                                        const QWidget *widget,
                                        const QPoint &pos,
                                        const QStyleOption& = QStyleOption::Default ) const = 0;


    enum PixelMetric {
        PM_ButtonMargin,
        PM_ButtonDefaultIndicator,
        PM_MenuButtonIndicator,
        PM_ButtonShiftHorizontal,
        PM_ButtonShiftVertical,

        PM_DefaultFrameWidth,
        PM_SpinBoxFrameWidth,

        PM_MaximumDragDistance,

        PM_ScrollBarExtent,
        PM_ScrollBarSliderMin,

        PM_SliderThickness,
        PM_SliderControlThickness,
        PM_SliderLength,
        PM_SliderTickmarkOffset,
        PM_SliderSpaceAvailable,

        PM_DockWindowSeparatorExtent,
        PM_DockWindowHandleExtent,
        PM_DockWindowFrameWidth,

        PM_MenuBarFrameWidth,

        PM_TabBarTabOverlap,
        PM_TabBarTabHSpace,
        PM_TabBarTabVSpace,
        PM_TabBarBaseHeight,
        PM_TabBarBaseOverlap,

        PM_ProgressBarChunkWidth,

        PM_SplitterWidth,
        PM_TitleBarHeight,

        PM_IndicatorWidth,
        PM_IndicatorHeight,
        PM_ExclusiveIndicatorWidth,
        PM_ExclusiveIndicatorHeight,
        PM_PopupMenuScrollerHeight,
        PM_CheckListButtonSize,
        PM_CheckListControllerSize,
        PM_PopupMenuFrameHorizontalExtra,
        PM_PopupMenuFrameVerticalExtra,

        PM_DialogButtonsSeparator,
        PM_DialogButtonsButtonWidth,
        PM_DialogButtonsButtonHeight,

        PM_MDIFrameWidth,
        PM_MDIMinimizedWidth,
        PM_HeaderMargin,
        PM_HeaderMarkSize,
        PM_HeaderGripMargin,
        PM_TabBarTabShiftHorizontal,
        PM_TabBarTabShiftVertical,



        PM_CustomBase = 0xf0000000
    };

    virtual int pixelMetric( PixelMetric metric,
                             const QWidget *widget = 0 ) const = 0;


    enum ContentsType {
        CT_PushButton,
        CT_CheckBox,
        CT_RadioButton,
        CT_ToolButton,
        CT_ComboBox,
        CT_Splitter,
        CT_DockWindow,
        CT_ProgressBar,
        CT_PopupMenuItem,
        CT_TabBarTab,
        CT_Slider,
        CT_Header,
        CT_LineEdit,
        CT_MenuBar,
        CT_SpinBox,
        CT_SizeGrip,
        CT_TabWidget,
        CT_DialogButtons,


        CT_CustomBase = 0xf0000000
    };

    virtual QSize sizeFromContents( ContentsType contents,
                                    const QWidget *widget,
                                    const QSize &contentsSize,
                                    const QStyleOption& = QStyleOption::Default ) const = 0;

    enum StyleHint {




        SH_EtchDisabledText,


        SH_GUIStyle,




        SH_ScrollBar_BackgroundMode,
        SH_ScrollBar_MiddleClickAbsolutePosition,
        SH_ScrollBar_ScrollWhenPointerLeavesControl,


        SH_TabBar_SelectMouseType,

        SH_TabBar_Alignment,

        SH_Header_ArrowAlignment,


        SH_Slider_SnapToValue,



        SH_Slider_SloppyKeyEvents,



        SH_ProgressDialog_CenterCancelButton,



        SH_ProgressDialog_TextLabelAlignment,


        SH_PrintDialog_RightAlignButtons,



        SH_MainWindow_SpaceBelowMenuBar,



        SH_FontDialog_SelectAssociatedText,


        SH_PopupMenu_AllowActiveAndDisabled,


        SH_PopupMenu_SpaceActivatesItem,



        SH_PopupMenu_SubMenuPopupDelay,



        SH_ScrollView_FrameOnlyAroundContents,



        SH_MenuBar_AltKeyNavigation,


        SH_ComboBox_ListMouseTracking,


        SH_PopupMenu_MouseTracking,


        SH_MenuBar_MouseTracking,


        SH_ItemView_ChangeHighlightOnFocus,


        SH_Widget_ShareActivation,


        SH_Workspace_FillSpaceOnMaximize,


        SH_ComboBox_Popup,


        SH_TitleBar_NoBorder,


        SH_ScrollBar_StopMouseOverSlider,


        SH_BlinkCursorWhenTextSelected,


        SH_RichText_FullWidthSelection,


        SH_PopupMenu_Scrollable,



        SH_GroupBox_TextLabelVerticalAlignment,


        SH_GroupBox_TextLabelColor,


        SH_PopupMenu_SloppySubMenus,


        SH_Table_GridLineColor,


        SH_LineEdit_PasswordCharacter,


        SH_DialogButtons_DefaultButton,


        SH_ToolBox_SelectedPageTitleBold,


        SH_TabBar_PreferNoArrows,


        SH_ScrollBar_LeftClickAbsolutePosition,


        SH_ListViewExpand_SelectMouseType,


        SH_CustomBase = 0xf0000000
    };

    virtual int styleHint( StyleHint stylehint,
                           const QWidget *widget = 0,
                           const QStyleOption& = QStyleOption::Default,
                           QStyleHintReturn* returnData = 0
                           ) const = 0;


    enum StylePixmap {
        SP_TitleBarMinButton,
        SP_TitleBarMaxButton,
        SP_TitleBarCloseButton,
        SP_TitleBarNormalButton,
        SP_TitleBarShadeButton,
        SP_TitleBarUnshadeButton,
        SP_DockWindowCloseButton,
        SP_MessageBoxInformation,
        SP_MessageBoxWarning,
        SP_MessageBoxCritical,
        SP_MessageBoxQuestion,


        SP_CustomBase = 0xf0000000
    };

    virtual QPixmap stylePixmap( StylePixmap stylepixmap,
                                 const QWidget *widget = 0,
                                 const QStyleOption& = QStyleOption::Default ) const = 0;


    static QRect visualRect( const QRect &logical, const QWidget *w );

    static QRect visualRect( const QRect &logical, const QRect &bounding );
# 726 "/coolo/prod/qt-copy/include/qstyle.h"
private:
    QStylePrivate * d;


    QStyle( const QStyle & );
    QStyle& operator=( const QStyle & );

};
# 43 "/coolo/prod/qt-copy/include/qcommonstyle.h" 2




class QCommonStyle: public QStyle
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

public:
    QCommonStyle();
    ~QCommonStyle();

    void drawPrimitive( PrimitiveElement pe,
                        QPainter *p,
                        const QRect &r,
                        const QColorGroup &cg,
                        SFlags flags = Style_Default,
                        const QStyleOption& = QStyleOption::Default ) const;

    void drawControl( ControlElement element,
                      QPainter *p,
                      const QWidget *widget,
                      const QRect &r,
                      const QColorGroup &cg,
                      SFlags how = Style_Default,
                      const QStyleOption& = QStyleOption::Default ) const;

    void drawControlMask( ControlElement element,
                          QPainter *p,
                          const QWidget *widget,
                          const QRect &r,
                          const QStyleOption& = QStyleOption::Default ) const;

    QRect subRect( SubRect r, const QWidget *widget ) const;

    void drawComplexControl( ComplexControl control,
                             QPainter *p,
                             const QWidget *widget,
                             const QRect &r,
                             const QColorGroup &cg,
                             SFlags how = Style_Default,
                             SCFlags sub = SC_All,
                             SCFlags subActive = SC_None,
                             const QStyleOption& = QStyleOption::Default ) const;

    void drawComplexControlMask( ComplexControl control,
                                 QPainter *p,
                                 const QWidget *widget,
                                 const QRect &r,
                                 const QStyleOption& = QStyleOption::Default ) const;

    QRect querySubControlMetrics( ComplexControl control,
                                  const QWidget *widget,
                                  SubControl sc,
                                  const QStyleOption& = QStyleOption::Default ) const;

    SubControl querySubControl( ComplexControl control,
                                const QWidget *widget,
                                const QPoint &pos,
                                const QStyleOption& = QStyleOption::Default ) const;

    int pixelMetric( PixelMetric m, const QWidget *widget = 0 ) const;

    QSize sizeFromContents( ContentsType s,
                            const QWidget *widget,
                            const QSize &contentsSize,
                            const QStyleOption& = QStyleOption::Default ) const;

    int styleHint(StyleHint sh, const QWidget *, const QStyleOption &, QStyleHintReturn *) const;

    QPixmap stylePixmap( StylePixmap sp,
                         const QWidget *widget = 0,
                         const QStyleOption& = QStyleOption::Default ) const;


private:


    QCommonStyle( const QCommonStyle & );
    QCommonStyle &operator=( const QCommonStyle & );

};
# 36 "/coolo/prod/kdelibs/kdefx/kstyle.h" 2

class KPixmap;

class KStylePrivate;
# 55 "/coolo/prod/kdelibs/kdefx/kstyle.h"
class KStyle: public QCommonStyle
{
        public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

        public:
# 77 "/coolo/prod/kdelibs/kdefx/kstyle.h"
                typedef uint KStyleFlags;
                enum KStyleOption {
                        Default = 0x00000000,
                        AllowMenuTransparency = 0x00000001,
                        FilledFrameWorkaround = 0x00000002
                };
# 105 "/coolo/prod/kdelibs/kdefx/kstyle.h"
                enum KStyleScrollBarType {
                        WindowsStyleScrollBar = 0x00000000,
                        PlatinumStyleScrollBar = 0x00000001,
                        ThreeButtonScrollBar = 0x00000002,
                        NextStyleScrollBar = 0x00000004
                };
# 129 "/coolo/prod/kdelibs/kdefx/kstyle.h"
                KStyle( KStyleFlags flags = KStyle::Default,
                                KStyleScrollBarType sbtype = KStyle::WindowsStyleScrollBar );




                ~KStyle();




                static QString defaultStyle();
# 151 "/coolo/prod/kdelibs/kdefx/kstyle.h"
                void setScrollBarType(KStyleScrollBarType sbtype);






                KStyleFlags styleFlags() const;
# 173 "/coolo/prod/kdelibs/kdefx/kstyle.h"
                virtual void renderMenuBlendPixmap( KPixmap& pix, const QColorGroup& cg,
                                                                                        const QPopupMenu* popup ) const;
# 219 "/coolo/prod/kdelibs/kdefx/kstyle.h"
                enum KStylePrimitive {
                        KPE_DockWindowHandle,
                        KPE_ToolBarHandle,
                        KPE_GeneralHandle,

                        KPE_SliderGroove,
                        KPE_SliderHandle,

                        KPE_ListViewExpander,
                        KPE_ListViewBranch
                };
# 240 "/coolo/prod/kdelibs/kdefx/kstyle.h"
                virtual void drawKStylePrimitive( KStylePrimitive kpe,
                                        QPainter* p,
                                        const QWidget* widget,
                                        const QRect &r,
                                        const QColorGroup &cg,
                                        SFlags flags = Style_Default,
                                        const QStyleOption& = QStyleOption::Default ) const;


                enum KStylePixelMetric {
                        KPM_MenuItemSeparatorHeight = 0x00000001,
                        KPM_MenuItemHMargin = 0x00000002,
                        KPM_MenuItemVMargin = 0x00000004,
                        KPM_MenuItemHFrame = 0x00000008,
                        KPM_MenuItemVFrame = 0x00000010,
                        KPM_MenuItemCheckMarkHMargin = 0x00000020,
                        KPM_MenuItemArrowHMargin = 0x00000040,
                        KPM_MenuItemTabSpacing = 0x00000080,

                        KPM_ListViewBranchThickness = 0x00000100
                };

                int kPixelMetric( KStylePixelMetric kpm, const QWidget* widget = 0 ) const;



                void polish( QWidget* widget );
                void unPolish( QWidget* widget );
                void polishPopupMenu( QPopupMenu* );

                void drawPrimitive( PrimitiveElement pe,
                                        QPainter* p,
                                        const QRect &r,
                                        const QColorGroup &cg,
                                        SFlags flags = Style_Default,
                                        const QStyleOption& = QStyleOption::Default ) const;

                void drawControl( ControlElement element,
                                        QPainter* p,
                                        const QWidget* widget,
                                        const QRect &r,
                                        const QColorGroup &cg,
                                        SFlags flags = Style_Default,
                                        const QStyleOption& = QStyleOption::Default ) const;

                void drawComplexControl( ComplexControl control,
                                        QPainter *p,
                                        const QWidget* widget,
                                        const QRect &r,
                                        const QColorGroup &cg,
                                        SFlags flags = Style_Default,
                                        SCFlags controls = SC_All,
                                        SCFlags active = SC_None,
                                        const QStyleOption& = QStyleOption::Default ) const;

                SubControl querySubControl( ComplexControl control,
                                        const QWidget* widget,
                                        const QPoint &pos,
                                        const QStyleOption& = QStyleOption::Default ) const;

                QRect querySubControlMetrics( ComplexControl control,
                                        const QWidget* widget,
                                        SubControl sc,
                                        const QStyleOption& = QStyleOption::Default ) const;

                int pixelMetric( PixelMetric m,
                                        const QWidget* widget = 0 ) const;

                QRect subRect( SubRect r,
                                        const QWidget* widget ) const;

                QPixmap stylePixmap( StylePixmap stylepixmap,
                                        const QWidget* widget = 0,
                                        const QStyleOption& = QStyleOption::Default ) const;

                int styleHint( StyleHint sh,
                                        const QWidget* w = 0,
                                        const QStyleOption &opt = QStyleOption::Default,
                                        QStyleHintReturn* shr = 0 ) const;

        protected:
                bool eventFilter( QObject* object, QEvent* event );

        private:

                KStyle( const KStyle & );
                KStyle& operator=( const KStyle & );

        protected:
                virtual void virtual_hook( int id, void* data );
        private:
                KStylePrivate *d;
};
# 58 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kiconloader.h" 1
# 15 "/coolo/prod/kdelibs/kdecore/kiconloader.h"



# 1 "/coolo/prod/qt-copy/include/qiconset.h" 1
# 39 "/coolo/prod/qt-copy/include/qiconset.h"
# 48 "/coolo/prod/qt-copy/include/qiconset.h"
class QIconFactory;
class QIconSetPrivate;


class QIconSet
{
public:

    enum Size { Automatic, Small, Large };
    enum Mode { Normal, Disabled, Active };
    enum State { On, Off };

    QIconSet();
    QIconSet( const QPixmap& pixmap, Size size = Automatic );
    QIconSet( const QPixmap& smallPix, const QPixmap& largePix );
    QIconSet( const QIconSet& other );
    virtual ~QIconSet();

    void reset( const QPixmap& pixmap, Size size );

    virtual void setPixmap( const QPixmap& pixmap, Size size,
                            Mode mode = Normal, State state = Off );
    virtual void setPixmap( const QString& fileName, Size size,
                            Mode mode = Normal, State state = Off );
    QPixmap pixmap( Size size, Mode mode, State state = Off ) const;
    QPixmap pixmap( Size size, bool enabled, State state = Off ) const;
    QPixmap pixmap() const;
    bool isGenerated( Size size, Mode mode, State state = Off ) const;
    void clearGenerated();
    void installIconFactory( QIconFactory *factory );

    bool isNull() const;

    void detach();

    QIconSet& operator=( const QIconSet& other );


    static void setIconSize( Size which, const QSize& size );
    static const QSize& iconSize( Size which );

   

private:
    void normalize( Size& which, const QSize& pixSize );
    QPixmap *createScaled( Size size, const QPixmap *suppliedPix ) const;
    QPixmap *createDisabled( Size size, State state ) const;

    QIconSetPrivate *d;
};

class QIconFactory : private QShared
{
public:
    QIconFactory();
    virtual ~QIconFactory();

    virtual QPixmap *createPixmap( const QIconSet& iconSet, QIconSet::Size size,
                                   QIconSet::Mode mode, QIconSet::State state );
    void setAutoDelete( bool autoDelete ) { autoDel = autoDelete; }
    bool autoDelete() const { return autoDel; }

    static QIconFactory *defaultFactory();
    static void installDefaultFactory( QIconFactory *factory );

private:

    QIconFactory( const QIconFactory & );
    QIconFactory &operator=( const QIconFactory & );


    friend class QIconSet;
    friend class QIconSetPrivate;

    uint autoDel : 1;
    uint unused : 31;
};
# 20 "/coolo/prod/kdelibs/kdecore/kiconloader.h" 2






# 1 "/coolo/prod/qt-copy/include/qmovie.h" 1
# 39 "/coolo/prod/qt-copy/include/qmovie.h"







class QDataSource;
class QObject;
class QMoviePrivate;

class QMovie {
public:
    QMovie();
    QMovie(int bufsize);
    QMovie(QDataSource*, int bufsize=1024);
    QMovie(const QString &fileName, int bufsize=1024);
    QMovie(QByteArray data, int bufsize=1024);
    QMovie(const QMovie&);
    ~QMovie();

    QMovie& operator=(const QMovie&);

    int pushSpace() const;
    void pushData(const uchar* data, int length);

    const QColor& backgroundColor() const;
    void setBackgroundColor(const QColor&);

    const QRect& getValidRect() const;
    const QPixmap& framePixmap() const;
    const QImage& frameImage() const;

    bool isNull() const;

    int frameNumber() const;
    int steps() const;
    bool paused() const;
    bool finished() const;
    bool running() const;

    void unpause();
    void pause();
    void step();
    void step(int);
    void restart();

    int speed() const;
    void setSpeed(int);

    void connectResize(QObject* receiver, const char *member);
    void disconnectResize(QObject* receiver, const char *member=0);

    void connectUpdate(QObject* receiver, const char *member);
    void disconnectUpdate(QObject* receiver, const char *member=0);






    enum Status { SourceEmpty=-2,
                  UnrecognizedFormat=-1,
                  Paused=1,
                  EndOfFrame=2,
                  EndOfLoop=3,
                  EndOfMovie=4,
                  SpeedChanged=5 };
    void connectStatus(QObject* receiver, const char *member);
    void disconnectStatus(QObject* receiver, const char *member=0);

private:
    QMoviePrivate *d;
};
# 27 "/coolo/prod/kdelibs/kdecore/kiconloader.h" 2







# 1 "/coolo/prod/kdelibs/kdecore/kicontheme.h" 1
# 16 "/coolo/prod/kdelibs/kdecore/kicontheme.h"





class KConfig;
class KIconThemeDir;

class KIconThemePrivate;

class KIconPrivate;
# 36 "/coolo/prod/kdelibs/kdecore/kicontheme.h"
class KIcon
{
public:
    KIcon() { size = 0; }




    bool isValid() const { return size != 0; }




    enum Context {
      Any,
      Action,
      Application,
      Device,
      FileSystem,
      MimeType
    };




    enum Type {
      Fixed,
      Scalable,
      Threshold
    };




    enum MatchType {
      MatchExact,
      MatchBest

    };






    enum Group { NoGroup=-1, Desktop=0, FirstGroup=Desktop, Toolbar,
        MainToolbar, Small, Panel, LastGroup, User };




    enum StdSizes {

        SizeSmall=16,

        SizeMedium=32,

        SizeLarge=48 };




    enum States { DefaultState,
                  ActiveState,
                  DisabledState,
                  LastState
    };






    enum Overlays {
      LockOverlay=0x100,
      ZipOverlay=0x200,
      LinkOverlay=0x400,
      HiddenOverlay=0x800,
      ShareOverlay=0x1000,
      OverlayMask = ~0xff
    };




    int size;




    Context context;




    Type type;




    int threshold;




    QString path;

private:
    KIconPrivate *d;
};

inline KIcon::Group& operator++(KIcon::Group& group) { group = static_cast<KIcon::Group>(group+1); return group; }
inline KIcon::Group operator++(KIcon::Group& group,int) { KIcon::Group ret = group; ++group; return ret; }






class KIconTheme
{
public:






    KIconTheme(const QString& name, const QString& appName=QString::null);
    ~KIconTheme();





    QString name() const { return mName; }






    QString description() const { return mDesc; }






    QString example() const;





    QString screenshot() const;





    QString linkOverlay() const;





    QString zipOverlay() const;





    QString lockOverlay() const;






    QString shareOverlay () const;





    QString dir() const { return mDir; }





    QStringList inherits() const { return mInherits; }





    bool isValid() const;






    bool isHidden() const;






    int depth() const { return mDepth; }






    int defaultSize(KIcon::Group group) const;






    QValueList<int> querySizes(KIcon::Group group) const;







    QStringList queryIcons(int size, KIcon::Context context = KIcon::Any) const;







    QStringList queryIconsByContext(int size, KIcon::Context context = KIcon::Any) const;
# 291 "/coolo/prod/kdelibs/kdecore/kicontheme.h"
    KIcon iconPath(const QString& name, int size, KIcon::MatchType match) const;





    static QStringList list();





    static QString current();




    static void reconfigure();






    static QString defaultThemeName();

private:
    int mDefSize[8];
    QValueList<int> mSizes[8];

    int mDepth;
    QString mDir, mName, mDesc;
    QStringList mInherits;
    QPtrList<KIconThemeDir> mDirs;
    KIconThemePrivate *d;

    static QString *_theme;
    static QStringList *_theme_list;
};
# 35 "/coolo/prod/kdelibs/kdecore/kiconloader.h" 2

class KIconGroup;
class KIconThemeNode;
class KConfig;
class KIconLoaderPrivate;
class KStandardDirs;
class KIconEffect;
# 79 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
class KIconLoader
{
public:
# 97 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    KIconLoader(const QString& appname=QString::null, KStandardDirs *dirs = 0);




    ~KIconLoader();





    void addAppDir(const QString& appname);
# 131 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QPixmap loadIcon(const QString& name, KIcon::Group group, int size=0,
                     int state=KIcon::DefaultState, QString *path_store=0L,
                     bool canReturnNull=false) const;
# 151 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QIconSet loadIconSet(const QString& name, KIcon::Group group, int size,
                         bool canReturnNull);
# 166 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QIconSet loadIconSet(const QString& name, KIcon::Group group, int size=0);
# 182 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QString iconPath(const QString& name, int group_or_size,
                     bool canReturnNull=false) const;
# 193 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QMovie loadMovie(const QString& name, KIcon::Group group, int size=0) const;
# 204 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QString moviePath(const QString& name, KIcon::Group group, int size=0) const;
# 216 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QStringList loadAnimated(const QString& name, KIcon::Group group, int size=0) const;
# 228 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QStringList queryIcons(int group_or_size, KIcon::Context context=KIcon::Any) const;
# 241 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QStringList queryIconsByContext(int group_or_size,
                                    KIcon::Context context=KIcon::Any) const;
# 251 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    QStringList queryIconsByDir( const QString& iconsDir ) const;






    int currentSize(KIcon::Group group) const;






    KIconTheme *theme() const;





    KIconEffect *iconEffect() const;







    void reconfigure( const QString& _appname, KStandardDirs *_dirs );






    static QPixmap unknown();
# 295 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    bool alphaBlending( KIcon::Group group ) const;






    void addExtraDesktopThemes();






    bool extraDesktopThemesAdded() const;
# 330 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    void enableDelayedIconSetLoading( bool enable );
# 339 "/coolo/prod/kdelibs/kdecore/kiconloader.h"
    bool isDelayedIconSetLoadingEnabled() const;


 private:



    void init( const QString& _appname, KStandardDirs *_dirs );






    KIcon findMatchingIcon(const QString& name, int size) const;





     QImage *loadOverlay(const QString& name, int size) const;





    void addAppThemes(const QString& appname);






    void addBaseThemes(KIconThemeNode *node, const QString &appname);






    QString unknownIconPath( int size ) const;






    QString removeIconExtension(const QString &name) const;




    QIconSet loadIconSetNonDelayed( const QString& name, KIcon::Group group,
                                    int size, bool canReturnNull );


    KIconLoaderPrivate *d;
};





QPixmap DesktopIcon(const QString& name, int size=0,
                    int state=KIcon::DefaultState,
                    KInstance *instance=KGlobal::instance());





QPixmap DesktopIcon(const QString& name, KInstance *instance);





QIconSet DesktopIconSet(const QString& name, int size=0,
                    KInstance *instance=KGlobal::instance());





QPixmap BarIcon(const QString& name, int size=0, int state=KIcon::DefaultState,
        KInstance *instance=KGlobal::instance());





QPixmap BarIcon(const QString& name, KInstance *instance);





QIconSet BarIconSet(const QString& name, int size=0,
                    KInstance *instance=KGlobal::instance());





QPixmap SmallIcon(const QString& name, int size=0,
                  int state=KIcon::DefaultState,
                  KInstance *instance=KGlobal::instance());





QPixmap SmallIcon(const QString& name, KInstance *instance);





QIconSet SmallIconSet(const QString& name, int size=0,
                    KInstance *instance=KGlobal::instance());





QPixmap MainBarIcon(const QString& name, int size=0,
                    int state=KIcon::DefaultState,
                    KInstance *instance=KGlobal::instance());





QPixmap MainBarIcon(const QString& name, KInstance *instance);





QIconSet MainBarIconSet(const QString& name, int size=0,
                    KInstance *instance=KGlobal::instance());





QPixmap UserIcon(const QString& name, int state=KIcon::DefaultState,
        KInstance *instance=KGlobal::instance());





QPixmap UserIcon(const QString& name, KInstance *instance);





QIconSet UserIconSet(const QString& name,
        KInstance *instance=KGlobal::instance());





int IconSize(KIcon::Group group, KInstance *instance=KGlobal::instance());
# 59 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kclipboard.h" 1
# 20 "/coolo/prod/kdelibs/kdecore/kclipboard.h"

# 1 "/coolo/prod/qt-copy/include/qclipboard.h" 1
# 39 "/coolo/prod/qt-copy/include/qclipboard.h"
# 48 "/coolo/prod/qt-copy/include/qclipboard.h"
class QMimeSource;

class QClipboard : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
private:
    QClipboard( QObject *parent=0, const char *name=0 );
    ~QClipboard();

public:
    enum Mode { Clipboard, Selection };

    void clear( Mode mode );
    void clear();

    bool supportsSelection() const;
    bool ownsSelection() const;
    bool ownsClipboard() const;

    void setSelectionMode(bool enable);
    bool selectionModeEnabled() const;


    QString text( Mode mode ) const;
    QString text( QCString& subtype, Mode mode ) const;
    void setText( const QString &, Mode mode );


    QMimeSource *data( Mode mode ) const;
    void setData( QMimeSource*, Mode mode );

    QImage image( Mode mode ) const;
    QPixmap pixmap( Mode mode ) const;
    void setImage( const QImage &, Mode mode );
    void setPixmap( const QPixmap &, Mode mode );



    QString text() const;
    QString text(QCString& subtype) const;
    void setText( const QString &);


    QMimeSource *data() const;
    void setData( QMimeSource* );

    QImage image() const;
    QPixmap pixmap() const;
    void setImage( const QImage & );
    void setPixmap( const QPixmap & );


protected:
    void selectionChanged();
    void dataChanged();

private :
    void ownerDestroyed();

protected:
    void connectNotify( const char * );
    bool event( QEvent * );

    friend class QApplication;
    friend class QBaseApplication;
    friend class QDragManager;
    friend class QMimeSource;

private:







    QClipboard( const QClipboard & );
    QClipboard &operator=( const QClipboard & );

};
# 23 "/coolo/prod/kdelibs/kdecore/kclipboard.h" 2
# 34 "/coolo/prod/kdelibs/kdecore/kclipboard.h"
class KClipboardSynchronizer : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

public:
    friend class KlipperWidget;
    friend class KApplication;





    static KClipboardSynchronizer *self();
# 55 "/coolo/prod/kdelibs/kdecore/kclipboard.h"
    static void setSynchronizing( bool sync );







    static bool isSynchronizing()
    {
        return s_sync;
    }
# 77 "/coolo/prod/kdelibs/kdecore/kclipboard.h"
    static void setReverseSynchronizing( bool enable );
# 86 "/coolo/prod/kdelibs/kdecore/kclipboard.h"
    static bool isReverseSynchronizing()
    {
        return s_reverse_sync;
    }


protected:
    ~KClipboardSynchronizer();

private :
    void slotSelectionChanged();
    void slotClipboardChanged();

private:
    KClipboardSynchronizer( QObject *parent = 0, const char *name = 0L );
    void setupSignals();

    static void setClipboard( QMimeSource* data, QClipboard::Mode mode );

    static KClipboardSynchronizer *s_self;
    static bool s_sync;
    static bool s_reverse_sync;
    static bool s_blocked;

    class MimeSource;

private:

    enum Configuration { Synchronize = 1 };

    static void newConfiguration( int config );

};
# 60 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kconfig.h" 1
# 25 "/coolo/prod/kdelibs/kdecore/kconfig.h"

class QTimer;

# 1 "/coolo/prod/kdelibs/kdecore/kconfigbase.h" 1
# 26 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
# 37 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
# 1 "/coolo/prod/kdelibs/kdecore/kconfigdata.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/kconfigdata.h"







struct KEntry
{
  KEntry()
    : mValue(0), bDirty(false), bNLS(false),
      bGlobal(false), bImmutable(false), bDeleted(false), bExpand(false) {}
  QCString mValue;



  bool bDirty :1;



  bool bNLS :1;



  bool bGlobal:1;



  bool bImmutable:1;



  bool bDeleted:1;



  bool bExpand:1;
};






struct KEntryKey
{
  KEntryKey(const QCString& _group = 0,
            const QCString& _key = 0)
      : mGroup(_group), mKey(_key), bLocal(false), bDefault(false),
        c_key(_key.data()) {}



  QCString mGroup;



  QCString mKey;



  bool bLocal :1;



  bool bDefault:1;

  const char *c_key;
};





inline bool operator <(const KEntryKey &k1, const KEntryKey &k2)
{

   int result=qstrcmp(k1.mGroup.data(),k2.mGroup.data());
   if (result!=0)
      return (result<0);

  if (!k1.c_key && k2.c_key)
    return true;

  result = 0;
  if (k1.c_key && k2.c_key)
     result = strcmp(k1.c_key, k2.c_key);
  if (result != 0)
     return result < 0;
  if (!k1.bLocal && k2.bLocal)
    return true;
  if (k1.bLocal && !k2.bLocal)
    return false;
  return (!k1.bDefault && k2.bDefault);
}
# 127 "/coolo/prod/kdelibs/kdecore/kconfigdata.h"
typedef QMap<KEntryKey, KEntry> KEntryMap;






typedef QMap<KEntryKey, KEntry>::Iterator KEntryMapIterator;
# 143 "/coolo/prod/kdelibs/kdecore/kconfigdata.h"
typedef QMap<KEntryKey, KEntry>::ConstIterator KEntryMapConstIterator;
# 38 "/coolo/prod/kdelibs/kdecore/kconfigbase.h" 2

class KConfigBackEnd;
class KConfigBasePrivate;
class KConfigGroup;
# 70 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
class KConfigBase : public QObject
{
  public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

  friend class KConfigBackEnd;
  friend class KConfigINIBackEnd;
  friend class KConfigGroup;

public:



  KConfigBase();




  virtual ~KConfigBase();
# 99 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void setGroup( const QString& group );





  void setDesktopGroup();







  QString group() const;







  bool hasGroup(const QString &group) const;






  virtual QStringList groupList() const = 0;






  QString locale() const;
# 144 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
   QString readEntry(const QString& pKey,
                     const QString& aDefault = QString::null ) const;
# 154 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
   QString readEntry(const char *pKey,
                     const QString& aDefault = QString::null ) const;
# 170 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QVariant readPropertyEntry( const QString& pKey, QVariant::Type ) const;
# 186 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QVariant readPropertyEntry( const char *pKey, QVariant::Type ) const;
# 202 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QVariant readPropertyEntry( const QString& pKey,
                              const QVariant &aDefault) const;
# 219 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QVariant readPropertyEntry( const char *pKey,
                              const QVariant &aDefault) const;
# 232 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  int readListEntry( const QString& pKey, QStrList &list, char sep = ',' ) const;
# 244 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  int readListEntry( const char *pKey, QStrList &list, char sep = ',' ) const;
# 253 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QStringList readListEntry( const QString& pKey, char sep = ',' ) const;
# 262 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QStringList readListEntry( const char *pKey, char sep = ',' ) const;







  QValueList<int> readIntListEntry( const QString& pKey ) const;







  QValueList<int> readIntListEntry( const char *pKey ) const;
# 291 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QString readPathEntry( const QString& pKey, const QString & aDefault = QString::null ) const;
# 304 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QString readPathEntry( const char *pKey, const QString & aDefault = QString::null ) const;
# 318 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QStringList readPathListEntry( const QString& pKey, char sep = ',' ) const;
# 332 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QStringList readPathListEntry( const char *pKey, char sep = ',' ) const;
# 346 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  int readNumEntry( const QString& pKey, int nDefault = 0 ) const;
# 359 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  int readNumEntry( const char *pKey, int nDefault = 0 ) const;
# 372 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  unsigned int readUnsignedNumEntry( const QString& pKey, unsigned int nDefault = 0 ) const;
# 385 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  unsigned int readUnsignedNumEntry( const char *pKey, unsigned int nDefault = 0 ) const;
# 399 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  long readLongNumEntry( const QString& pKey, long nDefault = 0 ) const;
# 412 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  long readLongNumEntry( const char *pKey, long nDefault = 0 ) const;
# 425 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  unsigned long readUnsignedLongNumEntry( const QString& pKey, unsigned long nDefault = 0 ) const;
# 438 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  unsigned long readUnsignedLongNumEntry( const char *pKey, unsigned long nDefault = 0 ) const;
# 451 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  double readDoubleNumEntry( const QString& pKey, double nDefault = 0.0 ) const;
# 464 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  double readDoubleNumEntry( const char *pKey, double nDefault = 0.0 ) const;
# 477 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QFont readFontEntry( const QString& pKey, const QFont* pDefault = 0L ) const;
# 490 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QFont readFontEntry( const char *pKey, const QFont* pDefault = 0L ) const;
# 503 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  bool readBoolEntry( const QString& pKey, const bool bDefault = false ) const;
# 516 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  bool readBoolEntry( const char *pKey, const bool bDefault = false ) const;
# 529 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QRect readRectEntry( const QString& pKey, const QRect* pDefault = 0L ) const;
# 542 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QRect readRectEntry( const char *pKey, const QRect* pDefault = 0L ) const;
# 555 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QPoint readPointEntry( const QString& pKey, const QPoint* pDefault = 0L ) const;
# 568 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QPoint readPointEntry( const char *pKey, const QPoint* pDefault = 0L ) const;
# 581 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QSize readSizeEntry( const QString& pKey, const QSize* pDefault = 0L ) const;
# 594 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QSize readSizeEntry( const char *pKey, const QSize* pDefault = 0L ) const;
# 608 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QColor readColorEntry( const QString& pKey, const QColor* pDefault = 0L ) const;
# 621 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QColor readColorEntry( const char *pKey, const QColor* pDefault = 0L ) const;
# 635 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QDateTime readDateTimeEntry( const QString& pKey, const QDateTime* pDefault = 0L ) const;
# 649 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  QDateTime readDateTimeEntry( const char *pKey, const QDateTime* pDefault = 0L ) const;
# 659 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
   QString readEntryUntranslated( const QString& pKey,
                     const QString& aDefault = QString::null ) const;
# 670 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
   QString readEntryUntranslated( const char *pKey,
                     const QString& aDefault = QString::null ) const;
# 690 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QString& pValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 711 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QString& pValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 734 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QVariant& rValue,
                    bool bPersistent = true, bool bGlobal = false,
                    bool bNLS = false );
# 756 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QVariant& rValue,
                    bool bPersistent = true, bool bGlobal = false,
                    bool bNLS = false );
# 779 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QStrList &rValue,
                   char sep = ',', bool bPersistent = true, bool bGlobal = false, bool bNLS = false );
# 800 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QStrList &rValue,
                   char sep = ',', bool bPersistent = true, bool bGlobal = false, bool bNLS = false );
# 822 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QStringList &rValue,
                   char sep = ',', bool bPersistent = true, bool bGlobal = false, bool bNLS = false );
# 843 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QStringList &rValue,
                   char sep = ',', bool bPersistent = true, bool bGlobal = false, bool bNLS = false );
# 866 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QValueList<int>& rValue,
                   bool bPersistent = true, bool bGlobal = false, bool bNLS = false );
# 887 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QValueList<int>& rValue,
                   bool bPersistent = true, bool bGlobal = false, bool bNLS = false );
# 907 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const char *pValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false )
    { writeEntry(pKey, QString::fromLatin1(pValue), bPersistent, bGlobal, bNLS); }
# 928 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const char *pValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false )
    { writeEntry(pKey, QString::fromLatin1(pValue), bPersistent, bGlobal, bNLS); }
# 948 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, int nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 966 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, int nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 985 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, unsigned int nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1003 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, unsigned int nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1021 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, long nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1038 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, long nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1056 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, unsigned long nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1073 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, unsigned long nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1094 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, double nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      char format = 'g', int precision = 6,
                      bool bNLS = false );
# 1115 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, double nValue,
                      bool bPersistent = true, bool bGlobal = false,
                      char format = 'g', int precision = 6,
                      bool bNLS = false );
# 1134 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, bool bValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1151 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, bool bValue,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1169 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QFont& rFont,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1186 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QFont& rFont,
                      bool bPersistent = true, bool bGlobal = false,
                      bool bNLS = false );
# 1207 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QColor& rColor,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1227 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QColor& rColor,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1248 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QDateTime& rDateTime,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1268 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QDateTime& rDateTime,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1290 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QRect& rValue,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1310 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QRect& rValue,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1331 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QPoint& rValue,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1351 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QPoint& rValue,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1372 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const QString& pKey, const QSize& rValue,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1392 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writeEntry( const char *pKey, const QSize& rValue,
                   bool bPersistent = true, bool bGlobal = false,
                   bool bNLS = false );
# 1413 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writePathEntry( const QString& pKey, const QString & path,
                       bool bPersistent = true, bool bGlobal = false,
                       bool bNLS = false );
# 1433 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writePathEntry( const char *pKey, const QString & path,
                       bool bPersistent = true, bool bGlobal = false,
                       bool bNLS = false );
# 1459 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writePathEntry( const QString& pKey, const QStringList &rValue,
                   char sep = ',', bool bPersistent = true, bool bGlobal = false, bool bNLS = false );
# 1483 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void writePathEntry( const char *pKey, const QStringList &rValue,
                   char sep = ',', bool bPersistent = true, bool bGlobal = false, bool bNLS = false );
# 1495 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
   void deleteEntry( const QString& pKey,
                   bool bNLS = false, bool bGlobal = false);
# 1505 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
   void deleteEntry( const char *pKey,
                   bool bNLS = false, bool bGlobal = false);
# 1525 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  bool deleteGroup( const QString& group, bool bDeep = true, bool bGlobal = false );
# 1535 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void setDollarExpansion( bool _bExpand = true ) { bExpand = _bExpand; }






  bool isDollarExpansion() const { return bExpand; }
# 1558 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual void rollback( bool bDeep = true );
# 1573 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual void sync();





  bool isDirty() const { return bDirty; }
# 1588 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual void setReadOnly(bool _ro) { bReadOnly = _ro; }






  bool isReadOnly() const { return bReadOnly; }
# 1606 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  bool hasKey( const QString& key ) const;
# 1618 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual QMap<QString, QString> entryMap(const QString &group) const = 0;
# 1632 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual void reparseConfiguration() = 0;





  bool isImmutable() const;







  bool groupIsImmutable(const QString &group) const;







  bool entryIsImmutable(const QString &key) const;






  enum ConfigState { NoAccess, ReadOnly, ReadWrite };
# 1676 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  ConfigState getConfigState() const;






  bool checkConfigFilesWritable(bool warnUser);







  void setReadDefaults(bool b);






  bool readDefaults() const;
# 1711 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  void revertToDefault(const QString &key);
# 1733 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  bool hasDefault(const QString &key) const;

protected:





  void setLocale();






  virtual void setDirty(bool _bDirty = true) { bDirty = _bDirty; }






  virtual void parseConfigFiles();
# 1772 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual KEntryMap internalEntryMap( const QString& pGroup ) const = 0;
# 1785 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual KEntryMap internalEntryMap() const = 0;
# 1802 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual void putData(const KEntryKey &_key, const KEntry &_data, bool _checkGroup = true) = 0;
# 1818 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  virtual KEntry lookupData(const KEntryKey &_key) const = 0;

  virtual bool internalHasGroup(const QCString &group) const = 0;




  KConfigBackEnd *backEnd;
public:



  void setGroup( const QCString &pGroup );
  void setGroup( const char *pGroup );
  bool hasGroup(const QCString &_pGroup) const;
  bool hasGroup(const char *_pGroup) const;
  bool hasKey( const char *pKey ) const;

protected:
  QCString readEntryUtf8( const char *pKey) const;



  QCString mGroup;



  QCString aLocaleString;




  bool bDirty;

  bool bLocaleInitialized;
  bool bReadOnly;
  mutable bool bExpand;

protected:
  virtual void virtual_hook( int id, void* data );
private:
  class KConfigBasePrivate;
  KConfigBasePrivate *d;
};

class KConfigGroupSaverPrivate;
# 1898 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
class KConfigGroupSaver
{
public:
# 1910 "/coolo/prod/kdelibs/kdecore/kconfigbase.h"
  KConfigGroupSaver( KConfigBase* config, QString group )

      : _config(config), _oldgroup(config->group())
        { _config->setGroup( group ); }

  KConfigGroupSaver( KConfigBase* config, const char *group )
      : _config(config), _oldgroup(config->group())
        { _config->setGroup( group ); }

  KConfigGroupSaver( KConfigBase* config, const QCString &group )
      : _config(config), _oldgroup(config->group())
        { _config->setGroup( group ); }

  ~KConfigGroupSaver() { _config->setGroup( _oldgroup ); }

    KConfigBase* config() { return _config; };

private:
  KConfigBase* _config;
  QString _oldgroup;

  KConfigGroupSaver(const KConfigGroupSaver&);
  KConfigGroupSaver& operator=(const KConfigGroupSaver&);

  KConfigGroupSaverPrivate *d;
};

class KConfigGroupPrivate;




class KConfigGroup: public KConfigBase
{
public:




   KConfigGroup(KConfigBase *master, const QCString &group);






   KConfigGroup(KConfigBase *master, const QString &group);







   KConfigGroup(KConfigBase *master, const char * group);







   void deleteGroup(bool bGlobal = false);


   virtual void setDirty(bool b);
   virtual void putData(const KEntryKey &_key, const KEntry &_data, bool _checkGroup = true);
   virtual KEntry lookupData(const KEntryKey &_key) const;
   virtual void sync();

private:

   void setGroup() { }
   void setDesktopGroup() { }
   void group() { }
   void hasGroup() { }
   void setReadOnly(bool) { }
   void isDirty() { }


   virtual QStringList groupList() const { return QStringList(); }
   virtual void rollback(bool) { }
   virtual void reparseConfiguration() { }
   virtual QMap<QString, QString> entryMap(const QString &) const
    { return QMap<QString,QString>(); }
   virtual KEntryMap internalEntryMap( const QString&) const
    { return KEntryMap(); }
   virtual KEntryMap internalEntryMap() const
    { return KEntryMap(); }
   virtual bool internalHasGroup(const QCString &) const
    { return false; }

   void getConfigState() { }

   KConfigBase *mMaster;
protected:
   virtual void virtual_hook( int id, void* data );
private:
   KConfigGroupPrivate* d;
};
# 30 "/coolo/prod/kdelibs/kdecore/kconfig.h" 2

class KConfigPrivate;
# 43 "/coolo/prod/kdelibs/kdecore/kconfig.h"
class KConfig : public KConfigBase
{
  public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

public:
# 61 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  KConfig( const QString& fileName = QString::null,
          bool bReadOnly = false, bool bUseKDEGlobals = true, const char *resType="config");

  KConfig(KConfigBackEnd *backEnd, bool bReadOnly = false);







  virtual ~KConfig();
# 86 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  virtual void rollback(bool bDeep = true);






  virtual QStringList groupList() const;
# 106 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  virtual QMap<QString, QString> entryMap(const QString &pGroup) const;





  virtual void reparseConfiguration();







  void setFileWriteMode(int mode);







  void setForceGlobal( bool force ) { bForceGlobal = force; }






  bool forceGlobal() const { return bForceGlobal; }
# 151 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  void checkUpdate(const QString &id, const QString &updateFile);
# 162 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  KConfig* copyTo(const QString &file);

protected:







  virtual bool internalHasGroup(const QCString &group) const;
# 184 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  virtual KEntryMap internalEntryMap(const QString &pGroup) const;
# 195 "/coolo/prod/kdelibs/kdecore/kconfig.h"
   virtual KEntryMap internalEntryMap() const { return aEntryMap; }
# 207 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  virtual void putData(const KEntryKey &_key, const KEntry &_data, bool _checkGroup=true);
# 217 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  virtual KEntry lookupData(const KEntryKey &_key) const;
# 226 "/coolo/prod/kdelibs/kdecore/kconfig.h"
  KEntryMap aEntryMap;

private:




  KConfig( const KConfig& );




  KConfig& operator= ( const KConfig& rConfig );

private:
  bool bGroupImmutable : 1;
  bool bFileImmutable : 1;
  bool bForceGlobal : 1;
protected:
  virtual void virtual_hook( int id, void* data );
private:
  KConfigPrivate *d;
};
# 61 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/ksimpleconfig.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/ksimpleconfig.h"



class KSimpleConfigPrivate;
# 43 "/coolo/prod/kdelibs/kdecore/ksimpleconfig.h"
class KSimpleConfig : public KConfig
{
  public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

public:
# 58 "/coolo/prod/kdelibs/kdecore/ksimpleconfig.h"
  KSimpleConfig( const QString &fileName, bool bReadOnly = false);

  KSimpleConfig(KConfigBackEnd *backEnd, bool bReadOnly = false);






  virtual ~KSimpleConfig();

  virtual void sync();

private:


  KSimpleConfig( const KSimpleConfig& );
  KSimpleConfig& operator= ( const KSimpleConfig& rConfig );

protected:
  virtual void virtual_hook( int id, void* data );
private:
  KSimpleConfigPrivate *d;
};
# 62 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h" 1
# 20 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"


# 1 "/coolo/prod/kdelibs/kdecore/kurl.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kurl.h"





class QUrl;
class QStringList;
template <typename K, typename V> class QMap;

class KURLPrivate;
# 118 "/coolo/prod/kdelibs/kdecore/kurl.h"
class KURL
{
public:
  enum AdjustementFlags
  {
    NoAdjustements = 0,
    StripFileProtocol = 1
  };







  class List : public QValueList<KURL>
  {
  public:



      List() { }





      List(const KURL &url);





      List(const QStringList &list);




      QStringList toStringList() const;
  };



  KURL();




  ~KURL();
# 184 "/coolo/prod/kdelibs/kdecore/kurl.h"
  KURL( const QString& url, int encoding_hint = 0 );
# 194 "/coolo/prod/kdelibs/kdecore/kurl.h"
  KURL( const char * url, int encoding_hint = 0 );
# 204 "/coolo/prod/kdelibs/kdecore/kurl.h"
  KURL( const QCString& url, int encoding_hint = 0 );




  KURL( const KURL& u );




  KURL( const QUrl &u );
# 227 "/coolo/prod/kdelibs/kdecore/kurl.h"
  KURL( const KURL& _baseurl, const QString& _rel_url, int encoding_hint=0 );






  QString protocol() const { return m_bIsMalformed ? QString::null : m_strProtocol; }




  void setProtocol( const QString& _txt );





  QString user() const { return m_strUser; }






  void setUser( const QString& _txt );




  bool hasUser() const { return !m_strUser.isEmpty(); }





  QString pass() const { return m_strPass; }
# 274 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void setPass( const QString& _txt );




  bool hasPass() const { return !m_strPass.isEmpty(); }





  QString host() const { return m_strHost; }







  void setHost( const QString& _txt );




  bool hasHost() const { return !m_strHost.isEmpty(); }






  unsigned short int port() const { return m_iPort; }




  void setPort( unsigned short int _p );






  QString path() const { return m_strPath; }
# 332 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString path( int _trailing ) const;
# 342 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void setPath( const QString& path );





  bool hasPath() const { return !m_strPath.isEmpty(); }
# 358 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void cleanPath(bool cleanDirSeparator = true);
# 371 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void adjustPath(int _trailing);
# 380 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void setEncodedPathAndQuery( const QString& _txt, int encoding_hint = 0 );







  void setEncodedPath(const QString& _txt, int encoding_hint = 0 );
# 407 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString encodedPathAndQuery( int _trailing = 0, bool _no_empty_path = false, int encoding_hint = 0) const;
# 417 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void setQuery( const QString& _txt, int encoding_hint = 0);
# 427 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString query() const;





  QString ref() const { return m_strRef_encoded; }





  void setRef( const QString& _txt ) { m_strRef_encoded = _txt; }







  bool hasRef() const { return !m_strRef_encoded.isNull(); }
# 456 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString htmlRef() const;






  QString encodedHtmlRef() const;
# 472 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void setHTMLRef( const QString& _ref );






  bool hasHTMLRef() const;






  bool isValid() const { return !m_bIsMalformed; }



  __attribute__ ((deprecated)) bool isMalformed() const { return !isValid(); }






  bool isLocalFile() const;







  void setFileEncoding(const QString &encoding);







  QString fileEncoding() const;







  bool hasSubURL() const;
# 533 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void addPath( const QString& txt );





  QString queryItem( const QString& item ) const;
# 550 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString queryItem( const QString& item, int encoding_hint ) const;
# 560 "/coolo/prod/kdelibs/kdecore/kurl.h"
  enum QueryItemsOptions { CaseInsensitiveKeys = 1 };




  QMap< QString, QString > queryItems( int options=0 ) const;
# 578 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QMap< QString, QString > queryItems( int options, int encoding_hint ) const;
# 590 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void addQueryItem( const QString& _item, const QString& _value, int encoding_hint = 0 );






  void removeQueryItem( const QString& _item );
# 612 "/coolo/prod/kdelibs/kdecore/kurl.h"
  void setFileName( const QString&_txt );
# 624 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString fileName( bool _ignore_trailing_slash_in_path = true ) const;
# 637 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString directory( bool _strip_trailing_slash_from_result = true,
                     bool _ignore_trailing_slash_in_path = true ) const;




  void setDirectory(const QString &dir);
# 658 "/coolo/prod/kdelibs/kdecore/kurl.h"
  bool cd( const QString& _dir );
# 678 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString url( int _trailing = 0, int encoding_hint = 0) const;
# 693 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString prettyURL( int _trailing = 0) const;
# 704 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString prettyURL( int _trailing, AdjustementFlags _flags) const;
# 713 "/coolo/prod/kdelibs/kdecore/kurl.h"
  QString htmlURL() const;






  bool isEmpty() const;
# 730 "/coolo/prod/kdelibs/kdecore/kurl.h"
  KURL upURL( ) const;

  bool operator<(const KURL& _u) const;

  KURL& operator=( const KURL& _u );
  KURL& operator=( const QString& _url );
  KURL& operator=( const char * _url );
  KURL& operator=( const QUrl & u );

  bool operator==( const KURL& _u ) const;
  bool operator==( const QString& _u ) const;
  bool operator!=( const KURL& _u ) const { return !( *this == _u ); }
  bool operator!=( const QString& _u ) const { return !( *this == _u ); }
# 753 "/coolo/prod/kdelibs/kdecore/kurl.h"
  bool cmp( const KURL &u, bool ignore_trailing = false ) const __attribute__ ((deprecated));
# 763 "/coolo/prod/kdelibs/kdecore/kurl.h"
  bool equals( const KURL &u, bool ignore_trailing = false ) const;






  bool isParentOf( const KURL& u ) const;
# 787 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static List split( const QString& _url );
# 804 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static List split( const KURL& _url );
# 813 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static KURL join( const List& _list );
# 828 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static KURL fromPathOrURL( const QString& text );
# 840 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static QString encode_string(const QString &str, int encoding_hint = 0);
# 852 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static QString encode_string_no_slash(const QString &str, int encoding_hint = 0);
# 864 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static QString decode_string(const QString &str, int encoding_hint = 0);
# 874 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static bool isRelativeURL(const QString &_url);
# 890 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static QString relativeURL(const KURL &base_url, const KURL &url, int encoding_hint = 0);
# 899 "/coolo/prod/kdelibs/kdecore/kurl.h"
  static QString relativePath(const QString &base_dir, const QString &path, bool *isParent=0);




  QString filename( bool _ignore_trailing_slash_in_path = true ) const
  {
    return fileName(_ignore_trailing_slash_in_path);
  }

protected:
  void reset();
  void parse( const QString& _url, int encoding_hint = 0);

private:
  QString m_strProtocol;
  QString m_strUser;
  QString m_strPass;
  QString m_strHost;
  QString m_strPath;
  QString m_strRef_encoded;
  QString m_strQuery_encoded;
  bool m_bIsMalformed : 1;
  uint freeForUse : 7;
  unsigned short int m_iPort;
  QString m_strPath_encoded;

  friend QDataStream & operator<< (QDataStream & s, const KURL & a);
  friend QDataStream & operator>> (QDataStream & s, KURL & a);
private:
  KURLPrivate* d;
};
# 939 "/coolo/prod/kdelibs/kdecore/kurl.h"
bool urlcmp( const QString& _url1, const QString& _url2 );
# 951 "/coolo/prod/kdelibs/kdecore/kurl.h"
bool urlcmp( const QString& _url1, const QString& _url2, bool _ignore_trailing, bool _ignore_ref );

QDataStream & operator<< (QDataStream & s, const KURL & a);
QDataStream & operator>> (QDataStream & s, KURL & a);
# 24 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h" 2





typedef QValueList<QCString> QCStringList;







struct KCmdLineOptions
{
# 52 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
   const char *name;




   const char *description;



   const char *def;
};


class KCmdLineArgsList;
class KApplication;
class KUniqueApplication;
class KCmdLineParsedOptions;
class KCmdLineParsedArgs;
class KAboutData;
class KCmdLineArgsPrivate;
# 214 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
class KCmdLineArgs
{
  friend class KApplication;
  friend class KUniqueApplication;
  friend class QPtrList<KCmdLineArgs>;
public:
# 237 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
   static void init(int _argc, char **_argv, const char *_appname,
                    const char* programName, const char *_description,
                    const char *_version, bool noKApp = false);



  static void init(int _argc, char **_argv,
                   const char *_appname, const char *_description,
                   const char *_version, bool noKApp = false) __attribute__ ((deprecated));
# 257 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  static void init(int _argc, char **_argv,
                   const KAboutData *about, bool noKApp = false);
# 270 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  static void init(const KAboutData *about);
# 332 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  static void addCmdLineOptions( const KCmdLineOptions *options,
                                 const char *name=0, const char *id = 0,
                                 const char *afterId=0);
# 345 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  static KCmdLineArgs *parsedArgs(const char *id=0);
# 356 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  static QString cwd();





  static const char *appName();
# 371 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  static void usage(const char *id = 0);





  static void usage(const QString &error);







  static void enable_i18n();
# 406 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  QCString getOption(const char *option) const;
# 422 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  QCStringList getOptionList(const char *option) const;
# 440 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  bool isSet(const char *option) const;







  int count() const;
# 458 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  const char *arg(int n) const;
# 473 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  KURL url(int n) const;







  static KURL makeURL( const char * urlArg );







  static void setCwd( char * cwd ) { mCwd = cwd; }




  void clear();


protected:




  KCmdLineArgs( const KCmdLineOptions *_options, const char *_id,
                const char *_name);
# 512 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  ~KCmdLineArgs();

private:





  static void findOption(const char *_opt, QCString opt, int &i, bool enabled, bool &moreOptions);







  static void parseAllArgs();






  static int *qt_argc();







  static char ***qt_argv();
# 552 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  static void removeArgs(const char *id);







  static void saveAppArgs( QDataStream &);






  static void loadAppArgs( QDataStream &);






  void setOption(const QCString &option, bool enabled);






  void setOption(const QCString &option, const char *value);






  void addArgument(const char *argument);






  void save( QDataStream &) const;






  void load( QDataStream &);
# 619 "/coolo/prod/kdelibs/kdecore/kcmdlineargs.h"
  static void initIgnore(int _argc, char **_argv, const char *_appname);

  static void printQ(const QString &msg);

  const KCmdLineOptions *options;
  const char *name;
  const char *id;
  KCmdLineParsedOptions *parsedOptionList;
  KCmdLineParsedArgs *parsedArgList;
  bool isQt;

  static KCmdLineArgsList *argsList;
  static const KAboutData *about;

  static int argc;
  static char **argv;
  static bool parsed;
  static bool ignoreUnknown;
  static char *mCwd;
  static bool parseArgs;

  KCmdLineArgsPrivate *d;
};
# 63 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kaboutdata.h" 1
# 27 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"

class KAboutPersonPrivate;
class KAboutDataPrivate;
# 39 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
class KAboutPerson
{
public:
# 55 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
    KAboutPerson( const char *name, const char *task,
                  const char *emailAddress, const char *webAddress )
    {
      mName = name;
      mTask = task;
      mEmailAddress = emailAddress;
      mWebAddress = webAddress;
    }



    KAboutPerson() {}






    QString name() const;






    QString task() const;






    QString emailAddress() const;






    QString webAddress() const;

private:
    const char *mName;
    const char *mTask;
    const char *mEmailAddress;
    const char *mWebAddress;

    KAboutPersonPrivate *d;
};

class KAboutTranslatorPrivate;
# 118 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
class KAboutTranslator
{
public:







    KAboutTranslator(const QString & name=QString::null,
                     const QString & emailAddress=QString::null);






    QString name() const;






    QString emailAddress() const;

private:
    QString mName;
    QString mEmail;
    KAboutTranslatorPrivate* d;
};
# 167 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
class KAboutData
{
  public:



    enum LicenseKey
    {
      License_Custom = -2,
      License_File = -1,
      License_Unknown = 0,
      License_GPL = 1,
      License_GPL_V2 = 1,
      License_LGPL = 2,
      License_LGPL_V2 = 2,
      License_BSD = 3,
      License_Artistic = 4,
      License_QPL = 5,
      License_QPL_V1_0 = 5
    };

  public:
# 223 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
    KAboutData( const char *appName,
                const char *programName,
                const char *version,
                const char *shortDescription = 0,
                int licenseType = License_Unknown,
                const char *copyrightStatement = 0,
                const char *text = 0,
                const char *homePageAddress = 0,
                const char *bugsEmailAddress = "submit@bugs.kde.org"
                );

     ~KAboutData();
# 255 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
    void addAuthor( const char *name,
                    const char *task=0,
                    const char *emailAddress=0,
                    const char *webAddress=0 );
# 279 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
    void addCredit( const char *name,
                    const char *task=0,
                    const char *emailAddress=0,
                    const char *webAddress=0 );
# 308 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
    void setTranslator(const char* name, const char* emailAddress);
# 325 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
    void setLicenseText( const char *license );






    void setLicenseTextFile( const QString &file );





    const char *appName() const;





    QString programName() const;





    QString version() const;






    QString shortDescription() const;






    QString homepage() const;





    QString bugAddress() const;





    const QValueList<KAboutPerson> authors() const;





    const QValueList<KAboutPerson> credits() const;





    const QValueList<KAboutTranslator> translators() const;





    static QString aboutTranslationTeam();





    QString otherText() const;
# 409 "/coolo/prod/kdelibs/kdecore/kaboutdata.h"
    QString license() const;





    QString copyrightStatement() const;

  private:
    const char *mAppName;
    const char *mProgramName;
    const char *mVersion;
    const char *mShortDescription;
    int mLicenseKey;
    const char *mCopyrightStatement;
    const char *mOtherText;
    const char *mHomepageAddress;
    const char *mBugEmailAddress;
    QValueList<KAboutPerson> mAuthorList;
    QValueList<KAboutPerson> mCreditList;
    const char *mLicenseText;

    KAboutDataPrivate *d;
};
# 64 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h" 1
# 19 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"






class KURL;







class KGlobalSettings
{
  public:
# 90 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static int dndEventDelay();







    static bool singleClick();







    enum TearOffHandle {
      Disable = 0,
      ApplicationLevel,
      Enable
    };






    static TearOffHandle insertTearOffHandle();





    static bool changeCursorOverIcon();






    static bool visualActivate();






    static unsigned int visualActivateSpeed();






    static int autoSelectDelay();







    static int contextMenuKey ();







    static bool showContextMenusOnPress ();






   enum Completion {



       CompletionNone=1,



       CompletionAuto,



       CompletionMan,



       CompletionShell,



       CompletionPopup,




       CompletionPopupAuto
   };






    static Completion completionMode();




    struct KMouseSettings
    {
        enum { RightHanded = 0, LeftHanded = 1 };
        int handed;
    };





    static KMouseSettings & mouseSettings();





    static QString desktopPath() { initStatic(); return *s_desktopPath; }





    static QString autostartPath() { initStatic(); return *s_autostartPath; }





    static QString trashPath() { initStatic(); return *s_trashPath; }





    static QString documentPath() { initStatic(); return *s_documentPath; }






    static QColor toolBarHighlightColor();





    static QColor inactiveTitleColor();





    static QColor inactiveTextColor();





    static QColor activeTitleColor();





    static QColor activeTextColor();






    static int contrast();






    static QColor baseColor();






    static QColor textColor();





    static QColor linkColor();





    static QColor visitedLinkColor();






    static QColor highlightedTextColor();






    static QColor highlightColor();
# 327 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static QColor alternateBackgroundColor();
# 336 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static QColor calculateAlternateBackgroundColor(const QColor& base);






    static QFont generalFont();





    static QFont fixedFont();





    static QFont toolBarFont();





    static QFont menuFont();





    static QFont windowTitleFont();





    static QFont taskbarFont();







    static QFont largeFont(const QString &text = QString::null);







    static bool isMultiHead();
# 403 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static bool wheelMouseZooms();
# 415 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static QRect splashScreenDesktopGeometry();
# 433 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static QRect desktopGeometry(const QPoint& point);
# 448 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static QRect desktopGeometry(QWidget* w);
# 458 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static bool showIconsOnPushButtons();
# 468 "/coolo/prod/kdelibs/kdecore/kglobalsettings.h"
    static bool showFilePreview(const KURL &);

private:



    static void initStatic();



    static void initColors();



    static void rereadFontSettings();



    static void rereadPathSettings();



    static void rereadMouseSettings();


    static QString* s_desktopPath;
    static QString* s_autostartPath;
    static QString* s_trashPath;
    static QString* s_documentPath;
    static QFont *_generalFont;
    static QFont *_fixedFont;
    static QFont *_toolBarFont;
    static QFont *_menuFont;
    static QFont *_windowTitleFont;
    static QFont *_taskbarFont;
    static QFont *_largeFont;
    static QColor * kde2Gray;
    static QColor * kde2Blue;
    static QColor * kde2AlternateColor;
    static KMouseSettings *s_mouseSettings;

    friend class KApplication;
};
# 65 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kcrash.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/kcrash.h"
# 36 "/coolo/prod/kdelibs/kdecore/kcrash.h"
class KCrash
{
 private:
  static const char *appName;
  static const char *appPath;

 public:




  static void defaultCrashHandler (int signal);





  typedef void (*HandlerType)(int);
# 66 "/coolo/prod/kdelibs/kdecore/kcrash.h"
  static void setCrashHandler (HandlerType handler = defaultCrashHandler);





  static HandlerType crashHandler() { return _crashHandler; }
# 81 "/coolo/prod/kdelibs/kdecore/kcrash.h"
  static void setEmergencySaveFunction (HandlerType saveFunction = (HandlerType)0);




  static HandlerType emergencySaveFunction() { return _emergencySaveFunction; }






  static void setApplicationPath (QString path) { appPath = qstrdup(path.local8Bit().data()); }







  static void setApplicationName (QString name) { appName = qstrdup(name.local8Bit().data()); }


 protected:



  static HandlerType _crashHandler;



  static HandlerType _emergencySaveFunction;
};
# 66 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/dcop/kdatastream.h" 1




inline QDataStream & operator << (QDataStream & str, bool b)
{
  str << Q_INT8(b);
  return str;
}

inline QDataStream & operator >> (QDataStream & str, bool & b)
{
  Q_INT8 l;
  str >> l;
  b = bool(l);
  return str;
}
# 67 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/klibloader.h" 1
# 19 "/coolo/prod/kdelibs/kdecore/klibloader.h"
# 30 "/coolo/prod/kdelibs/kdecore/klibloader.h"
class KInstance;
class QTimer;
class KLibrary;
class KLibFactory;
class KLibFactoryPrivate;
class KLibLoaderPrivate;
class KLibraryPrivate;

# 50 "/coolo/prod/kdelibs/kdecore/klibloader.h"
class KLibrary : public QObject
{
    friend class KLibLoader;
    friend class QAsciiDict<KLibrary>;

    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:




    KLibrary( const QString& libname, const QString& filename, void * handle );





    QString name() const;





    QString fileName() const;





    KLibFactory* factory();
# 90 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    void* symbol( const char* name ) const;
# 101 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    bool hasSymbol( const char* name ) const;






    void unload() const;

private :
    void slotObjectCreated( QObject *obj );
    void slotObjectDestroyed();
    void slotTimeout();

private:




    ~KLibrary();

    QString m_libname;
    QString m_filename;
    KLibFactory* m_factory;
    void * m_handle;
    QPtrList<QObject> m_objs;
    QTimer *m_timer;
    KLibraryPrivate *d;
};

class KLibWrapPrivate;
# 143 "/coolo/prod/kdelibs/kdecore/klibloader.h"
class KLibLoader : public QObject
{
    friend class KLibrary;

    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:





    ~KLibLoader();
# 176 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    KLibFactory* factory( const char* libname );
# 198 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    virtual KLibrary* library( const char* libname );
# 222 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    KLibrary* globalLibrary( const char *name );
# 231 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    QString lastErrorMessage() const;
# 247 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    virtual void unloadLibrary( const char *libname );







    static KLibLoader* self();
# 265 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    static void cleanUp();
# 277 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    static QString findLibrary( const char * name, const KInstance * instance = KGlobal::instance() );

protected:
    KLibLoader( QObject* parent = 0, const char* name = 0 );

private :
    void slotLibraryDestroyed();
private:
    void close_pending( KLibWrapPrivate * );
    QAsciiDict<KLibWrapPrivate> m_libs;

    static KLibLoader* s_self;

protected:
    virtual void virtual_hook( int id, void* data );
private:
    KLibLoaderPrivate *d;
};
# 331 "/coolo/prod/kdelibs/kdecore/klibloader.h"
class KLibFactory : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:





    KLibFactory( QObject* parent = 0, const char* name = 0 );
    virtual ~KLibFactory();
# 364 "/coolo/prod/kdelibs/kdecore/klibloader.h"
     QObject* create( QObject* parent = 0, const char* name = 0, const char* classname = "QObject", const QStringList &args = QStringList() );

protected:




    void objectCreated( QObject *obj );


protected:
# 392 "/coolo/prod/kdelibs/kdecore/klibloader.h"
    virtual QObject* createObject( QObject* parent = 0, const char* name = 0,
                                   const char* classname = "QObject",
                                   const QStringList &args = QStringList() ) = 0;


protected:
    virtual void virtual_hook( int id, void* data );
private:
    KLibFactoryPrivate *d;
};
# 68 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kmimesourcefactory.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/kmimesourcefactory.h"




class KMimeSourceFactoryPrivate;
# 39 "/coolo/prod/kdelibs/kdecore/kmimesourcefactory.h"
class KMimeSourceFactory : public QMimeSourceFactory
{
public:






  KMimeSourceFactory (KIconLoader* loader = KGlobal::iconLoader());




  virtual ~KMimeSourceFactory();
# 69 "/coolo/prod/kdelibs/kdecore/kmimesourcefactory.h"
  virtual QString makeAbsolute (const QString& abs_or_rel_name, const QString& context) const;

protected:
  virtual void virtual_hook( int id, void* data );
private:
  KMimeSourceFactoryPrivate* d;
};
# 69 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kstdaccel.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kstdaccel.h"


# 1 "/coolo/prod/kdelibs/kdecore/kshortcut.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kshortcut.h"

# 1 "/coolo/prod/qt-copy/include/qkeysequence.h" 1
# 39 "/coolo/prod/qt-copy/include/qkeysequence.h"
# 54 "/coolo/prod/qt-copy/include/qkeysequence.h"
class QKeySequence;
 QDataStream &operator<<( QDataStream &, const QKeySequence & );
 QDataStream &operator>>( QDataStream &, QKeySequence & );


class QKeySequencePrivate;

class QKeySequence : public Qt
{
public:
    QKeySequence();
    QKeySequence( const QString& key );
    QKeySequence( int key );
    QKeySequence( int k1, int k2, int k3 = 0, int k4 = 0 );
    QKeySequence( const QKeySequence & );
    ~QKeySequence();

    uint count() const;
    bool isEmpty() const;
    Qt::SequenceMatch matches( const QKeySequence & ) const;

    operator QString() const;
    operator int () const;
    int operator[]( uint ) const;
    QKeySequence &operator=( const QKeySequence & );
    bool operator==( const QKeySequence& ) const;
    bool operator!= ( const QKeySequence& ) const;

private:
    static int decodeString( const QString & );
    static QString encodeString( int );
    int assign( QString );
    void setKey( int key, int index );

    QKeySequencePrivate* d;

    friend QDataStream &operator<<( QDataStream &, const QKeySequence & );
    friend QDataStream &operator>>( QDataStream &, QKeySequence & );
    friend class QAccelManager;
};
# 24 "/coolo/prod/kdelibs/kdecore/kshortcut.h" 2


class QKeyEvent;
class KKeyNative;
# 39 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
class KKey
{
 public:




        enum { MOD_FLAG_COUNT = 4 };
        enum { QtWIN = (Qt::ALT << 1) };




        enum ModFlag {
                SHIFT = 0x01,
                CTRL = 0x02,
                ALT = 0x04,
                WIN = 0x08
        };







        KKey();






        KKey( int keyQt );





        KKey( const QKeySequence& keySeq );





        KKey( const QKeyEvent* keyEvent );




        KKey( const KKey& key );
# 99 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        KKey( const QString& key );



        KKey( uint key, uint mod );
        ~KKey();






        void clear();







        bool init( int keyQt );






        bool init( const QKeySequence& keySeq );






        bool init( const QKeyEvent* keyEvent );






        bool init( const KKey& key );
# 151 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool init( const QString& key);




        bool init( uint key, uint mod );




        KKey& operator =( const KKey& key )
                { init( key ); return *this; }
# 172 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool isNull() const;




        bool isValidQt() const;




        bool isValidNative() const;




        uint sym() const;



        uint modFlags() const;
# 204 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        int compare( const KKey& key ) const;





        bool operator == ( const KKey& key ) const
                { return compare( key ) == 0; }




        bool operator != ( const KKey& key ) const
                { return compare( key ) != 0; }




        bool operator < ( const KKey& key ) const
                { return compare( key ) < 0; }







        int keyCodeQt() const;






        QString toString() const;




        QString toStringInternal() const;





        void simplify();







        static KKey& null();






        static QString modFlagLabel( ModFlag f );

 private:
# 277 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        uint m_sym;



        uint m_mod;

 private:
        friend class KKeyNative;
};
# 294 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
class KKeySequence
{
 public:

        enum { MAX_KEYS = 4 };







        KKeySequence();





        KKeySequence( const QKeySequence& keySeq );





        KKeySequence( const KKey& key );





        KKeySequence( const KKeyNative& key );





        KKeySequence( const KKeySequence& keySeq );
# 340 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        KKeySequence( const QString& keySeq );

        ~KKeySequence();






        void clear();






        bool init( const QKeySequence& keySeq );






        bool init( const KKey& key );






        bool init( const KKeyNative& key );






        bool init( const KKeySequence& keySeq );
# 388 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool init( const QString& key );




        KKeySequence& operator =( const KKeySequence& seq )
                { init( seq ); return *this; }






        uint count() const;
# 411 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        const KKey& key( uint i ) const;




        bool isTriggerOnRelease() const;
# 426 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool setKey( uint i, const KKey& key );




        void setTriggerOnRelease( bool );
# 440 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool isNull() const;






        bool startsWith( const KKeySequence& keySeq ) const;
# 461 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        int compare( const KKeySequence& keySeq ) const;





        bool operator == ( const KKeySequence& seq ) const
                { return compare( seq ) == 0; }





        bool operator != ( const KKeySequence& seq ) const
                { return compare( seq ) != 0; }





        bool operator < ( const KKeySequence& seq ) const
                { return compare( seq ) < 0; }






        QKeySequence qt() const;







        int keyCodeQt() const;







        QString toString() const;




        QString toStringInternal() const;







        static KKeySequence& null();

 protected:
        uchar m_nKeys;
        uchar m_bTriggerOnRelease;

        KKey m_rgvar[MAX_KEYS];

 private:
        class KKeySequencePrivate* d;
        friend class KKeyNative;
};
# 539 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
class KShortcut
{
 public:




        enum { MAX_SEQUENCES = 2 };







        KShortcut();







        KShortcut( int keyQt );






        KShortcut( const QKeySequence& keySeq );






        KShortcut( const KKey& key );






        KShortcut( const KKeySequence& keySeq );





        KShortcut( const KShortcut& shortcut );
# 598 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        KShortcut( const char* shortcut );
# 607 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        KShortcut( const QString& shortcut );
        ~KShortcut();






        void clear();







        bool init( int keyQt );





        bool init( const QKeySequence& keySeq );





        bool init( const KKey& key );





        bool init( const KKeySequence& keySeq );





        bool init( const KShortcut& shortcut );
# 656 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool init( const QString& shortcut );




        KShortcut& operator =( const KShortcut& cut )
                { init( cut ); return *this; }







        uint count() const;
# 679 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        const KKeySequence& seq( uint i ) const;
# 688 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        int keyCodeQt() const;
# 697 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool isNull() const;
# 712 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        int compare( const KShortcut& shortcut ) const;





        bool operator == ( const KShortcut& cut ) const
                { return compare( cut ) == 0; }





        bool operator != ( const KShortcut& cut ) const
                { return compare( cut ) != 0; }





        bool operator < ( const KShortcut& cut ) const
                { return compare( cut ) < 0; }







        bool contains( const KKey& key ) const;







        bool contains( const KKeyNative& key ) const;






        bool contains( const KKeySequence& keySeq ) const;
# 767 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool setSeq( uint i, const KKeySequence& keySeq );
# 776 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool append( const KKeySequence& keySeq );
# 786 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool append( const KKey& spec );
# 795 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        bool append( const KShortcut& cut );





        operator QKeySequence () const;
# 810 "/coolo/prod/kdelibs/kdecore/kshortcut.h"
        QString toString() const;




        QString toStringInternal( const KShortcut* pcutDefault = 0 ) const;







        static KShortcut& null();

 protected:
        uint m_nSeqs;
        KKeySequence m_rgseq[MAX_SEQUENCES];

 private:
        class KShortcutPrivate* d;
        friend class KKeyNative;


 public:
        operator int () const { return keyCodeQt(); }

};
# 25 "/coolo/prod/kdelibs/kdecore/kstdaccel.h" 2


class QKeyEvent;
class KAccelActions;
# 41 "/coolo/prod/kdelibs/kdecore/kstdaccel.h"
namespace KStdAccel
{




  enum StdAccel {
    AccelNone,

    Open, New, Close, Save,

    Print,
    Quit,

    Undo, Redo, Cut, Copy, Paste, SelectAll, Deselect, DeleteWordBack,
    DeleteWordForward, Find, FindNext, FindPrev, Replace,

    Home, End, Prior, Next, GotoLine, AddBookmark, ZoomIn, ZoomOut,
    Up, Back, Forward, Reload, PopupMenuContext, ShowMenubar,

    Help, WhatsThis,

    TextCompletion, PrevCompletion, NextCompletion, SubstringCompletion,
    RotateUp, RotateDown,


    TabNext, TabPrev,

    FullScreen


    , WhatThis = WhatsThis

  };





  const KShortcut& shortcut(StdAccel id);






  QString name(StdAccel id);






  QString label(StdAccel id);






  QString whatsThis(StdAccel id);
# 111 "/coolo/prod/kdelibs/kdecore/kstdaccel.h"
  StdAccel findStdAccel( const KKeySequence &keySeq );







  KShortcut shortcutDefault(StdAccel id);






  KShortcut shortcutDefault3(StdAccel id);






  KShortcut shortcutDefault4(StdAccel id);





  const KShortcut& open();





  const KShortcut& openNew();





  const KShortcut& close();





  const KShortcut& save();





  const KShortcut& print();





  const KShortcut& quit();





  const KShortcut& undo();





  const KShortcut& redo();





  const KShortcut& cut();





  const KShortcut& copy();





  const KShortcut& paste();





  const KShortcut& selectAll();





  const KShortcut& deleteWordBack();





  const KShortcut& deleteWordForward();





  const KShortcut& find();





  const KShortcut& findNext();





  const KShortcut& findPrev();





  const KShortcut& replace();





  const KShortcut& zoomIn();





  const KShortcut& zoomOut();





  const KShortcut& insert();





  const KShortcut& home();





  const KShortcut& end();





  const KShortcut& prior();





  const KShortcut& next();





  const KShortcut& gotoLine();





  const KShortcut& addBookmark();






  const KShortcut& tabNext();






  const KShortcut& tabPrev();






  const KShortcut& fullScreen();





  const KShortcut& help();





  const KShortcut& completion();






  const KShortcut& prevCompletion();






  const KShortcut& nextCompletion();






  const KShortcut& substringCompletion();





  const KShortcut& rotateUp();





  const KShortcut& rotateDown();





  const KShortcut& popupMenuContext();





  const KShortcut& whatsThis();





  const KShortcut& reload();





  const KShortcut& up();





  const KShortcut& back();





  const KShortcut& forward();





  const KShortcut& showMenubar();






  QString action(StdAccel id) ;




  QString description(StdAccel id) ;




  int key(StdAccel) ;




  int defaultKey(StdAccel accel) ;
# 442 "/coolo/prod/kdelibs/kdecore/kstdaccel.h"
  bool isEqual(const QKeyEvent* pEvent, int keyQt) ;


}
# 70 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kaccel.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kaccel.h"

# 1 "/coolo/prod/qt-copy/include/qaccel.h" 1
# 39 "/coolo/prod/qt-copy/include/qaccel.h"
# 48 "/coolo/prod/qt-copy/include/qaccel.h"
class QAccelPrivate;

class QAccel : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
    QAccel( QWidget *parent, const char *name=0 );
    QAccel( QWidget* watch, QObject *parent, const char *name=0 );
    ~QAccel();

    bool isEnabled() const;
    void setEnabled( bool );

    uint count() const;

    int insertItem( const QKeySequence& key, int id=-1);
    void removeItem( int id );
    void clear();

    QKeySequence key( int id );
    int findKey( const QKeySequence& key ) const;

    bool isItemEnabled( int id ) const;
    void setItemEnabled( int id, bool enable );

    bool connectItem( int id, const QObject *receiver, const char* member );
    bool disconnectItem( int id, const QObject *receiver, const char* member );

    void repairEventFilter();

    void setWhatsThis( int id, const QString& );
    QString whatsThis( int id ) const;
    void setIgnoreWhatsThis( bool );
    bool ignoreWhatsThis() const;

    static QKeySequence shortcutKey( const QString & );
    static QString keyToString(QKeySequence k );
    static QKeySequence stringToKey( const QString & );

protected:
    void activated( int id );
    void activatedAmbiguously( int id );

protected:
    bool eventFilter( QObject *, QEvent * );

private:
    QAccelPrivate * d;

private:

    QAccel( const QAccel & );
    QAccel &operator=( const QAccel & );

    friend class QAccelPrivate;
    friend class QAccelManager;
};
# 24 "/coolo/prod/kdelibs/kdecore/kaccel.h" 2




class QPopupMenu;
class QWidget;
class KAccelAction;
class KAccelActions;
class KConfigBase;

class KAccelPrivate;
# 94 "/coolo/prod/kdelibs/kdecore/kaccel.h"
class KAccel : public QAccel
{
        public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
 public:







        KAccel( QWidget* pParent, const char* psName = 0 );
# 114 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        KAccel( QWidget* watch, QObject* parent, const char* psName = 0 );
        virtual ~KAccel();






        KAccelActions& actions();






        const KAccelActions& actions() const;





        bool isEnabled();





        void setEnabled( bool bEnabled );






        bool getAutoUpdate();
# 160 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        bool setAutoUpdate( bool bAuto );
# 183 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        KAccelAction* insert( const QString& sAction, const QString& sLabel, const QString& sWhatsThis,
                         const KShortcut& cutDef,
                         const QObject* pObjSlot, const char* psMethodSlot,
                         bool bConfigurable = true, bool bEnabled = true );




        KAccelAction* insert( const QString& sAction, const QString& sLabel, const QString& sWhatsThis,
                         const KShortcut& cutDef3, const KShortcut& cutDef4,
                         const QObject* pObjSlot, const char* psMethodSlot,
                         bool bConfigurable = true, bool bEnabled = true );
# 208 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        KAccelAction* insert( const char* psAction, const KShortcut& cutDef,
                         const QObject* pObjSlot, const char* psMethodSlot,
                         bool bConfigurable = true, bool bEnabled = true );






        KAccelAction* insert( KStdAccel::StdAccel id,
                         const QObject* pObjSlot, const char* psMethodSlot,
                         bool bConfigurable = true, bool bEnabled = true );







        KAccelAction* insert( const QString& sName, const QString& sLabel );







        bool remove( const QString& sAction );
# 245 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        bool updateConnections();






        const KShortcut& shortcut( const QString& sAction ) const;







        bool setShortcut( const QString& sAction, const KShortcut &shortcut );
# 270 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        bool setSlot( const QString& sAction, const QObject* pObjSlot, const char* psMethodSlot );






        bool setEnabled( const QString& sAction, bool bEnabled );






        const QString& configGroup() const;






        void setConfigGroup( const QString &name );
# 304 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        bool readSettings( KConfigBase* pConfig = 0 );
# 313 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        bool writeSettings( KConfigBase* pConfig = 0 ) const;




        void emitKeycodeChanged();

 protected:



        void keycodeChanged();


 public:




        bool insertItem( const QString& sLabel, const QString& sAction,
                         const char* psKey,
                         int nIDMenu = 0, QPopupMenu* pMenu = 0, bool bConfigurable = true ) __attribute__ ((deprecated));



        bool insertItem( const QString& sLabel, const QString& sAction,
                         int key,
                         int nIDMenu = 0, QPopupMenu* pMenu = 0, bool bConfigurable = true ) __attribute__ ((deprecated));



        bool insertStdItem( KStdAccel::StdAccel id, const QString& descr = QString::null ) __attribute__ ((deprecated));



        bool connectItem( const QString& sAction, const QObject* pObjSlot, const char* psMethodSlot, bool bActivate = true ) __attribute__ ((deprecated));




        __attribute__ ((deprecated)) bool connectItem( KStdAccel::StdAccel accel, const QObject* pObjSlot, const char* psMethodSlot )
                { return insert( accel, pObjSlot, psMethodSlot ); }



        bool removeItem( const QString& sAction ) __attribute__ ((deprecated));



        bool setItemEnabled( const QString& sAction, bool bEnable ) __attribute__ ((deprecated));



        void changeMenuAccel( QPopupMenu *menu, int id, const QString& action ) ;



        void changeMenuAccel( QPopupMenu *menu, int id, KStdAccel::StdAccel accel ) ;



        static int stringToKey( const QString& ) __attribute__ ((deprecated));
# 383 "/coolo/prod/kdelibs/kdecore/kaccel.h"
        int currentKey( const QString& action ) const __attribute__ ((deprecated));







        QString findKey( int key ) const __attribute__ ((deprecated));


 protected:

        virtual void virtual_hook( int id, void* data );
 private:
        class KAccelPrivate* d;
        friend class KAccelPrivate;
};
# 71 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kcheckaccelerators.h" 1
# 24 "/coolo/prod/kdelibs/kdecore/kcheckaccelerators.h"

# 1 "/coolo/prod/qt-copy/include/qguardedptr.h" 1
# 39 "/coolo/prod/qt-copy/include/qguardedptr.h"






class QGuardedPtrPrivate : public QObject, public QShared
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:
    QGuardedPtrPrivate( QObject* );
    ~QGuardedPtrPrivate();

    QObject* object() const;
    void reconnect( QObject* );

private :
    void objectDestroyed();

private:
    QObject* obj;

    QGuardedPtrPrivate( const QGuardedPtrPrivate & );
    QGuardedPtrPrivate &operator=( const QGuardedPtrPrivate & );

};

template <class T>
class QGuardedPtr
{
public:
    QGuardedPtr() : priv( new QGuardedPtrPrivate( 0 ) ) {}

    QGuardedPtr( T* o) {
        priv = new QGuardedPtrPrivate( (QObject*)o );
    }

    QGuardedPtr(const QGuardedPtr<T> &p) {
        priv = p.priv;
        ref();
    }

    ~QGuardedPtr() { deref(); }

    QGuardedPtr<T> &operator=(const QGuardedPtr<T> &p) {
        if ( priv != p.priv ) {
            deref();
            priv = p.priv;
            ref();
        }
        return *this;
    }

    QGuardedPtr<T> &operator=(T* o) {
        if ( priv->count == 1 ) {
            priv->reconnect( (QObject*)o );
        } else {
            deref();
            priv = new QGuardedPtrPrivate( (QObject*)o );
        }
        return *this;
    }

    bool operator==( const QGuardedPtr<T> &p ) const {
        return priv->object() == p.priv->object();
    }

    bool operator!= ( const QGuardedPtr<T>& p ) const {
        return !( *this == p );
    }

    bool isNull() const { return !priv->object(); }

    T* operator->() const { return (T*) priv->object(); }

    T& operator*() const { return *( (T*)priv->object() ); }

    operator T*() const { return (T*) priv->object(); }

private:

    void ref() { priv->ref(); }

    void deref() {
        if ( priv->deref() )
            delete priv;
    }

    QGuardedPtrPrivate* priv;
};




inline QObject* QGuardedPtrPrivate::object() const
{
    return obj;
}

# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 141 "/coolo/prod/qt-copy/include/qguardedptr.h" 2
# 27 "/coolo/prod/kdelibs/kdecore/kcheckaccelerators.h" 2






class QMenuData;
class QTextView;
# 66 "/coolo/prod/kdelibs/kdecore/kcheckaccelerators.h"
class KCheckAccelerators : public QObject
{
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
public:




    KCheckAccelerators( QObject* parent );



    bool eventFilter( QObject * , QEvent * e);

private:
    void checkAccelerators( bool automatic );
    int key;
    bool alwaysShow;
    bool autoCheck;
    bool block;
    QTimer autoCheckTimer;
    void createDialog(QWidget *parent, bool automatic);
    QGuardedPtr<QDialog> drklash;
    QTextView *drklash_view;

private :
    void autoCheckSlot();
    void slotDisableCheck(bool);
};
# 72 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/qt-copy/include/qptrdict.h" 1
# 39 "/coolo/prod/qt-copy/include/qptrdict.h"





template<class type>
class QPtrDict



        : public QGDict

{
public:
    QPtrDict(int size=17) : QGDict(size,PtrKey,0,0) {}
    QPtrDict( const QPtrDict<type> &d ) : QGDict(d) {}
   ~QPtrDict() { clear(); }
    QPtrDict<type> &operator=(const QPtrDict<type> &d)
                        { return (QPtrDict<type>&)QGDict::operator=(d); }
    uint count() const { return QGDict::count(); }
    uint size() const { return QGDict::size(); }
    bool isEmpty() const { return QGDict::count() == 0; }
    void insert( void *k, const type *d )
                                        { QGDict::look_ptr(k,(Item)d,1); }
    void replace( void *k, const type *d )
                                        { QGDict::look_ptr(k,(Item)d,2); }
    bool remove( void *k ) { return QGDict::remove_ptr(k); }
    type *take( void *k ) { return (type*)QGDict::take_ptr(k); }
    type *find( void *k ) const
                { return (type *)((QGDict*)this)->QGDict::look_ptr(k,0,0); }
    type *operator[]( void *k ) const
                { return (type *)((QGDict*)this)->QGDict::look_ptr(k,0,0); }
    void clear() { QGDict::clear(); }
    void resize( uint n ) { QGDict::resize(n); }
    void statistics() const { QGDict::statistics(); }







private:
    void deleteItem( Item d );
};


template<> inline void QPtrDict<void>::deleteItem( QPtrCollection::Item )
{
}


template<class type>
inline void QPtrDict<type>::deleteItem( QPtrCollection::Item d )
{
    if ( del_item ) delete (type *)d;
}

template<class type>
class QPtrDictIterator : public QGDictIterator
{
public:
    QPtrDictIterator(const QPtrDict<type> &d) :QGDictIterator((QGDict &)d) {}
   ~QPtrDictIterator() {}
    uint count() const { return dict->count(); }
    bool isEmpty() const { return dict->count() == 0; }
    type *toFirst() { return (type *)QGDictIterator::toFirst(); }
    operator type *() const { return (type *)QGDictIterator::get(); }
    type *current() const { return (type *)QGDictIterator::get(); }
    void *currentKey() const { return QGDictIterator::getKeyPtr(); }
    type *operator()() { return (type *)QGDictIterator::operator()(); }
    type *operator++() { return (type *)QGDictIterator::operator++(); }
    type *operator+=(uint j) { return (type *)QGDictIterator::operator+=(j);}
};
# 73 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
# 36 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
class KMacroExpanderBase {

public:




    KMacroExpanderBase( QChar c = '%' );




    virtual ~KMacroExpanderBase();






    void expandMacros( QString &str );
# 85 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
    bool expandMacrosShellQuote( QString &str, uint &pos );





    bool expandMacrosShellQuote( QString &str );





    void setEscapeChar( QChar c );





    QChar escapeChar() const;

protected:
# 119 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
    virtual int expandPlainMacro( const QString &str, uint pos, QStringList &ret );
# 135 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
    virtual int expandEscapedMacro( const QString &str, uint pos, QStringList &ret );

private:
    QChar escapechar;
};






namespace KMacroExpander {
# 167 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
    QString expandMacros( const QString &str, const QMap<QChar,QString> &map, QChar c = '%' );
# 192 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
    QString expandMacrosShellQuote( const QString &str, const QMap<QChar,QString> &map, QChar c = '%' );
# 217 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
    QString expandMacros( const QString &str, const QMap<QString,QString> &map, QChar c = '%' );
# 245 "/coolo/prod/kdelibs/kdecore/kmacroexpander.h"
    QString expandMacrosShellQuote( const QString &str, const QMap<QString,QString> &map, QChar c = '%' );





    QString expandMacros( const QString &str, const QMap<QChar,QStringList> &map, QChar c = '%' );
    QString expandMacros( const QString &str, const QMap<QString,QStringList> &map, QChar c = '%' );







    QString expandMacrosShellQuote( const QString &str, const QMap<QChar,QStringList> &map, QChar c = '%' );
    QString expandMacrosShellQuote( const QString &str, const QMap<QString,QStringList> &map, QChar c = '%' );
}
# 74 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kshell.h" 1
# 22 "/coolo/prod/kdelibs/kdecore/kshell.h"
# 32 "/coolo/prod/kdelibs/kdecore/kshell.h"
namespace KShell {




    enum Options {
        NoOptions = 0,




        TildeExpand = 1,
# 55 "/coolo/prod/kdelibs/kdecore/kshell.h"
        AbortOnMeta = 2
    };




    enum Errors {



        NoError = 0,




        BadQuoting,





        FoundMeta
    };
# 90 "/coolo/prod/kdelibs/kdecore/kshell.h"
    QStringList splitArgs( const QString &cmd, int flags = 0, int *err = 0 );







    QString joinArgs( const QStringList &args );
# 110 "/coolo/prod/kdelibs/kdecore/kshell.h"
    QString joinArgsDQ( const QStringList &args );
# 121 "/coolo/prod/kdelibs/kdecore/kshell.h"
    QString joinArgs( const char * const *argv, int argc = -1 );
# 130 "/coolo/prod/kdelibs/kdecore/kshell.h"
    QString tildeExpand( const QString &path );
# 139 "/coolo/prod/kdelibs/kdecore/kshell.h"
    QString homeDir( const QString &user );

}
# 75 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h" 1
# 20 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"




# 1 "/coolo/prod/kdelibs/kdecore/ksycocaentry.h" 1
# 20 "/coolo/prod/kdelibs/kdecore/ksycocaentry.h"

# 1 "/coolo/prod/kdelibs/kdecore/ksycocatype.h" 1
# 22 "/coolo/prod/kdelibs/kdecore/ksycocatype.h"
# 31 "/coolo/prod/kdelibs/kdecore/ksycocatype.h"
enum KSycocaType { KST_KSycocaEntry = 0, KST_KService = 1, KST_KServiceType = 2, KST_KMimeType = 3,
                 KST_KFolderType = 4, KST_KDEDesktopMimeType = 5, KST_KExecMimeType = 6,
                 KST_KServiceGroup = 7, KST_KImageIOFormat = 8, KST_KProtocolInfo = 9,
                 KST_KCustom = 1000 };

# 49 "/coolo/prod/kdelibs/kdecore/ksycocatype.h"
enum KSycocaFactoryId { KST_KServiceFactory = 1,
                        KST_KServiceTypeFactory = 2,
                        KST_KServiceGroupFactory = 3,
                        KST_KImageIO = 4,
                        KST_KProtocolInfoFactory = 5,
                        KST_CTimeInfo = 100 };

# 23 "/coolo/prod/kdelibs/kdecore/ksycocaentry.h" 2


# 1 "/coolo/prod/kdelibs/kdecore/ksharedptr.h" 1
# 19 "/coolo/prod/kdelibs/kdecore/ksharedptr.h"
# 39 "/coolo/prod/kdelibs/kdecore/ksharedptr.h"
class KShared {
public:




   KShared() : count(0) { }





   KShared( const KShared & ) : count(0) { }




   KShared &operator=(const KShared & ) { return *this; }




   void _KShared_ref() const { count++; }





   void _KShared_unref() const { if (!--count) delete this; }






   int _KShared_count() const { return count; }

protected:
   virtual ~KShared() { }
private:
   mutable int count;
};
# 95 "/coolo/prod/kdelibs/kdecore/ksharedptr.h"
template< class T >
struct KSharedPtr
{
public:



  KSharedPtr()
    : ptr(0) { }




  KSharedPtr( T* t )
    : ptr(t) { if ( ptr ) ptr->_KShared_ref(); }





  KSharedPtr( const KSharedPtr& p )
    : ptr(p.ptr) { if ( ptr ) ptr->_KShared_ref(); }





  ~KSharedPtr() { if ( ptr ) ptr->_KShared_unref(); }

  KSharedPtr<T>& operator= ( const KSharedPtr<T>& p ) {
    if ( ptr == p.ptr ) return *this;
    if ( ptr ) ptr->_KShared_unref();
    ptr = p.ptr;
    if ( ptr ) ptr->_KShared_ref();
    return *this;
  }
  KSharedPtr<T>& operator= ( T* p ) {
    if ( ptr == p ) return *this;
    if ( ptr ) ptr->_KShared_unref();
    ptr = p;
    if ( ptr ) ptr->_KShared_ref();
    return *this;
  }
  bool operator== ( const KSharedPtr<T>& p ) const { return ( ptr == p.ptr ); }
  bool operator!= ( const KSharedPtr<T>& p ) const { return ( ptr != p.ptr ); }
  bool operator== ( const T* p ) const { return ( ptr == p ); }
  bool operator!= ( const T* p ) const { return ( ptr != p ); }
  bool operator!() const { return ( ptr == 0 ); }
  operator T*() const { return ptr; }





  T* data() { return ptr; }





  const T* data() const { return ptr; }

  const T& operator*() const { return *ptr; }
  T& operator*() { return *ptr; }
  const T* operator->() const { return ptr; }
  T* operator->() { return ptr; }





  int count() const { return ptr->_KShared_count(); }
private:
  T* ptr;
};
# 26 "/coolo/prod/kdelibs/kdecore/ksycocaentry.h" 2
class QDataStream;
# 37 "/coolo/prod/kdelibs/kdecore/ksycocaentry.h"
class KSycocaEntry : public KShared
{

public:
   virtual bool isType(KSycocaType t) const { return (t == KST_KSycocaEntry); }
   virtual KSycocaType sycocaType() const { return KST_KSycocaEntry; }

public:
  typedef KSharedPtr<KSycocaEntry> Ptr;
  typedef QValueList<Ptr> List;
public:



   KSycocaEntry(const QString &path) : mOffset(0), m_bDeleted(false), mPath(path) { }




   static void read( QDataStream &s, QString &str );
   static void read( QDataStream &s, QStringList &list );





   KSycocaEntry( QDataStream &_str, int offset ) :
              mOffset( offset ), m_bDeleted(false)
   {
     read(_str, mPath);
   }




   virtual QString name() const = 0;






   QString entryPath() const { return mPath; }




   virtual bool isValid() const = 0;




   virtual bool isDeleted() const { return m_bDeleted; }





   int offset() { return mOffset; }






   virtual void save(QDataStream &s)
     {
       mOffset = s.device()->at();
       s << (Q_INT32) sycocaType() << mPath;
     }





   virtual void load(QDataStream &) = 0;

private:
   int mOffset;
protected:
   bool m_bDeleted;
   QString mPath;
protected:
   virtual void virtual_hook( int id, void* data );
};
# 26 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h" 2
# 44 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
class KProtocolInfo : public KSycocaEntry
{
  friend class KProtocolInfoFactory;
  public: virtual bool isType(KSycocaType t) const { if (t == KST_KProtocolInfo) return true; return KSycocaEntry::isType(t);} virtual KSycocaType sycocaType() const { return KST_KProtocolInfo; } private:

public:
  typedef KSharedPtr<KProtocolInfo> Ptr;

public:




  KProtocolInfo( const QString & path);





  virtual bool isValid() const { return !m_name.isEmpty(); }
# 73 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  virtual QString name() const { return m_name; }
# 83 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static QStringList protocols();
# 92 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool isKnownProtocol( const KURL &url );
# 105 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static QString exec( const QString& protocol );




  enum Type { T_STREAM,
              T_FILESYSTEM,
              T_NONE,
              T_ERROR
  };
# 126 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static Type inputType( const KURL &url );
# 138 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static Type outputType( const KURL &url );
# 152 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static QStringList listing( const KURL &url );





  struct ExtraField {
    ExtraField() {}
    ExtraField(const QString& _name, const QString& _type )
      : name(_name), type(_type) {
    }
    QString name;
    QString type;
  };
  typedef QValueList<ExtraField > ExtraFieldList;







  static ExtraFieldList extraFields( const KURL& url );
# 189 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool isSourceProtocol( const KURL &url );
# 203 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool isHelperProtocol( const KURL &url );
# 221 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool isFilterProtocol( const KURL &url );
# 238 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool supportsListing( const KURL &url );
# 249 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool supportsReading( const KURL &url );
# 260 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool supportsWriting( const KURL &url );
# 271 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool supportsMakeDir( const KURL &url );
# 282 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool supportsDeleting( const KURL &url );
# 293 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool supportsLinking( const KURL &url );
# 305 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool supportsMoving( const KURL &url );
# 319 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool canCopyFromFile( const KURL &url );
# 333 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool canCopyToFile( const KURL &url );
# 343 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static QString defaultMimetype( const KURL& url );
# 353 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static QString icon( const QString& protocol );
# 366 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static QString config( const QString& protocol );
# 380 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static int maxSlaves( const QString& protocol );
# 393 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static bool determineMimetypeFromExtension( const QString &protocol );
# 404 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static QString docPath( const QString& protocol );
# 422 "/coolo/prod/kdelibs/kio/kio/kprotocolinfo.h"
  static QString protocolClass( const QString& protocol );


public:




  KProtocolInfo( QDataStream& _str, int offset);

  virtual ~KProtocolInfo();





  virtual void load(QDataStream& );





  virtual void save(QDataStream& );





  static Type inputType( const QString& protocol ) __attribute__ ((deprecated));

  static Type outputType( const QString& protocol ) __attribute__ ((deprecated));






  static QStringList listing( const QString& protocol ) __attribute__ ((deprecated));

  static bool isSourceProtocol( const QString& protocol ) __attribute__ ((deprecated));

  static bool isHelperProtocol( const QString& protocol ) __attribute__ ((deprecated));

  static bool isFilterProtocol( const QString& protocol ) __attribute__ ((deprecated));

  static bool isKnownProtocol( const QString& protocol ) __attribute__ ((deprecated));

  static bool supportsListing( const QString& protocol ) __attribute__ ((deprecated));

  static bool supportsReading( const QString& protocol ) __attribute__ ((deprecated));

  static bool supportsWriting( const QString& protocol ) __attribute__ ((deprecated));

  static bool supportsMakeDir( const QString& protocol ) __attribute__ ((deprecated));

  static bool supportsDeleting( const QString& protocol ) __attribute__ ((deprecated));

  static bool supportsLinking( const QString& protocol ) __attribute__ ((deprecated));

  static bool supportsMoving( const QString& protocol ) __attribute__ ((deprecated));

  static bool canCopyFromFile( const QString& protocol ) __attribute__ ((deprecated));

  static bool canCopyToFile( const QString& protocol ) __attribute__ ((deprecated));

  static QString defaultMimetype( const QString& protocol) __attribute__ ((deprecated));


protected:
  QString m_name;
  QString m_exec;
  Type m_inputType;
  Type m_outputType;
  QStringList m_listing;
  bool m_isSourceProtocol;
  bool m_isHelperProtocol;
  bool m_supportsListing;
  bool m_supportsReading;
  bool m_supportsWriting;
  bool m_supportsMakeDir;
  bool m_supportsDeleting;
  bool m_supportsLinking;
  bool m_supportsMoving;
  QString m_defaultMimetype;
  bool m_determineMimetypeFromExtension;
  QString m_icon;
  bool m_canCopyFromFile;
  bool m_canCopyToFile;
  QString m_config;
  int m_maxSlaves;
protected:
  virtual void virtual_hook( int id, void* data );
private:
  class KProtocolInfoPrivate;
  KProtocolInfoPrivate* d;
};

QDataStream& operator>>( QDataStream& s, KProtocolInfo::ExtraField& field );
QDataStream& operator<<( QDataStream& s, const KProtocolInfo::ExtraField& field );
# 76 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2


# 1 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h" 1
# 28 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"




# 1 "../config.h" 1
# 13 "../config.h"









# 34 "../config.h"










# 55 "../config.h"







# 74 "../config.h"


# 86 "../config.h"























































# 176 "../config.h"

























































# 266 "../config.h"











# 290 "../config.h"



























# 336 "../config.h"


















# 372 "../config.h"


































# 438 "../config.h"































































































# 577 "../config.h"





















# 617 "../config.h"




# 633 "../config.h"







































# 699 "../config.h"












# 761 "../config.h"
# 793 "../config.h"
extern "C"

int mkstemps(char *, int);
# 829 "../config.h"
extern "C"

unsigned long strlcat(char*, const char*, unsigned long);






extern "C"

unsigned long strlcpy(char*, const char*, unsigned long);
# 905 "../config.h"




# 920 "../config.h"
# 937 "../config.h"
# 34 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h" 2






class KStartupInfoId;
class KStartupInfoData;

class KStartupInfoPrivate;
# 66 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
class KStartupInfo
    : public QObject
    {
    public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;
    public:
        enum {
            CleanOnCantDetect = 1 << 0,
            DisableKWinModule = 1 << 1,
            AnnounceSilenceChanges = 1 << 2
            };
# 95 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        KStartupInfo( int flags, QObject* parent = __null, const char* name = __null );
# 107 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        KStartupInfo( bool clean_on_cantdetect, QObject* parent = 0, const char* name = 0 );
        virtual ~KStartupInfo();
# 120 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        static bool sendStartup( const KStartupInfoId& id, const KStartupInfoData& data );
# 129 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        static bool sendStartupX( Display* dpy, const KStartupInfoId& id,
            const KStartupInfoData& data );
# 142 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        static bool sendChange( const KStartupInfoId& id, const KStartupInfoData& data );
# 151 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        static bool sendChangeX( Display* dpy, const KStartupInfoId& id,
            const KStartupInfoData& data );






        static bool sendFinish( const KStartupInfoId& id );







        static bool sendFinishX( Display* dpy, const KStartupInfoId& id );
# 176 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        static bool sendFinish( const KStartupInfoId& id, const KStartupInfoData& data );
# 185 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        static bool sendFinishX( Display* dpy, const KStartupInfoId& id,
            const KStartupInfoData& data );







        static KStartupInfoId currentStartupIdEnv();



        static void resetStartupEnv();







        static void appStarted();






        enum startup_t { NoMatch, Match, CantDetect };







        startup_t checkStartup( WId w );
# 230 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        startup_t checkStartup( WId w, KStartupInfoId& id );
# 240 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        startup_t checkStartup( WId w, KStartupInfoData& data );
# 251 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        startup_t checkStartup( WId w, KStartupInfoId& id, KStartupInfoData& data );




        void setTimeout( unsigned int secs );





        static void setWindowStartupId( WId window, const QCString& id );





        static QCString windowStartupId( WId w );



        class Data;
    protected:






        void gotNewStartup( const KStartupInfoId& id, const KStartupInfoData& data );





        void gotStartupChange( const KStartupInfoId& id, const KStartupInfoData& data );






        void gotRemoveStartup( const KStartupInfoId& id, const KStartupInfoData& data );
    protected:
        virtual void customEvent( QCustomEvent* e_P );
    private :
        void startups_cleanup();
        void startups_cleanup_no_age();
        void got_message( const QString& msg );
        void window_added( WId w );
        void slot_window_added( WId w );
    private:
        void init( int flags );
        friend class KStartupInfoPrivate;
        void got_startup_info( const QString& msg_P, bool update_only_P );
        void got_remove_startup_info( const QString& msg_P );
        void new_startup_info_internal( const KStartupInfoId& id_P,
            Data& data_P, bool update_only_P );
        void remove_startup_info_internal( const KStartupInfoId& id_P );
        void remove_startup_pids( const KStartupInfoId& id, const KStartupInfoData& data );
        void remove_startup_pids( const KStartupInfoData& data );
        startup_t check_startup_internal( WId w, KStartupInfoId* id, KStartupInfoData* data,
            bool remove );
        bool find_id( const QCString& id_P, KStartupInfoId* id_O,
            KStartupInfoData* data_O, bool remove );
        bool find_pid( pid_t pid_P, const QCString& hostname, KStartupInfoId* id_O,
            KStartupInfoData* data_O, bool remove );
        bool find_wclass( QCString res_name_P, QCString res_class_P,
            KStartupInfoId* id_O, KStartupInfoData* data_O, bool remove );
        static QCString get_window_hostname( WId w_P );
        void startups_cleanup_internal( bool age_P );
        void clean_all_noncompliant();
        bool clean_on_cantdetect_;
        unsigned int timeout;
        KStartupInfoPrivate* d;
    };

class KStartupInfoIdPrivate;
# 342 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
class KStartupInfoId
    {
    public:




        bool operator==( const KStartupInfoId& id ) const;




        bool operator!=( const KStartupInfoId& id ) const;




        bool none() const;







        void initId( const QCString& id = "" );




        const QCString& id() const;




        bool setupStartupEnv() const;



        KStartupInfoId();



        KStartupInfoId( const KStartupInfoId& data );
        ~KStartupInfoId();
        KStartupInfoId& operator=( const KStartupInfoId& data );
        bool operator<( const KStartupInfoId& id ) const;
    private:
        KStartupInfoId( const QString& txt );
        QString to_text() const;
        friend class KStartupInfo;
        KStartupInfoIdPrivate* d;
    };

class KStartupInfoDataPrivate;
# 410 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
class KStartupInfoData
    {
    public:




        void setBin( const QString& bin );




        const QString& bin() const;



        void setName( const QString& name );






        const QString& findName() const;





        const QString& name() const;




        void setIcon( const QString& icon );






        const QString& findIcon() const;




        const QString& icon() const;





        void setDesktop( int desktop );




        int desktop() const;






        void setWMClass( const QCString& wmclass );






        const QCString findWMClass() const;





        const QCString& WMClass() const;







        void addPid( pid_t pid );




        const QValueList< pid_t >& pids() const;





        bool is_pid( pid_t pid ) const;





        void setHostname( const QCString& hostname = QCString());




        const QCString& hostname() const;

        enum TriState { Yes, No, Unknown };






        void setSilent( TriState state );






        TriState silent() const;
# 542 "/coolo/prod/kdelibs/kdecore/kstartupinfo.h"
        void setTimestamp( unsigned long time );





        unsigned long timestamp() const;






        void update( const KStartupInfoData& data );




        KStartupInfoData();




        KStartupInfoData( const KStartupInfoData& data );
        ~KStartupInfoData();
        KStartupInfoData& operator=( const KStartupInfoData& data );
    private:
        KStartupInfoData( const QString& txt );
        QString to_text() const;
        void remove_pid( pid_t pid );
        friend class KStartupInfo;
        friend class KStartupInfo::Data;
        KStartupInfoDataPrivate* d;
    };
# 79 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2


# 1 "/coolo/prod/kdelibs/dcop/dcopclient.h" 1
# 24 "/coolo/prod/kdelibs/dcop/dcopclient.h"
# 33 "/coolo/prod/kdelibs/dcop/dcopclient.h"
class DCOPObjectProxy;
class DCOPClientPrivate;
class DCOPClientTransaction;

typedef QValueList<QCString> QCStringList;
# 68 "/coolo/prod/kdelibs/dcop/dcopclient.h"
class DCOPClient : public QObject
{
  public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

 public:


  DCOPClient();




  virtual ~DCOPClient();
# 89 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  static void setServerAddress(const QCString &addr);
# 109 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool attach();







  void bindToApp();





  bool detach();





  bool isAttached() const;






  bool isAttachedToForeignServer() const;





  bool acceptCalls() const;







  void setAcceptCalls(bool b);







  bool qtBridgeEnabled();
# 167 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void setQtBridgeEnabled(bool b);
# 194 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  QCString registerAs( const QCString &appId, bool addPID = true );





  bool isRegistered() const;






  QCString appId() const;





  int socket() const;
# 227 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void suspend();






  void resume();







  bool isSuspended() const;
# 254 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool send(const QCString &remApp, const QCString &remObj,
            const QCString &remFun, const QByteArray &data);
# 268 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool send(const QCString &remApp, const QCString &remObj,
            const QCString &remFun, const QString &data);
# 300 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool call(const QCString &remApp, const QCString &remObj,
            const QCString &remFun, const QByteArray &data,
            QCString& replyType, QByteArray &replyData,
            bool useEventLoop , int timeout );




  bool call(const QCString &remApp, const QCString &remObj,
            const QCString &remFun, const QByteArray &data,
            QCString& replyType, QByteArray &replyData,
            bool useEventLoop=false);
# 341 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  int callAsync(const QCString &remApp, const QCString &remObj,
                const QCString &remFun, const QByteArray &data,
                QObject *callBackObj, const char *callBackSlot);
# 381 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool findObject(const QCString &remApp, const QCString &remObj,
            const QCString &remFun, const QByteArray &data,
            QCString &foundApp, QCString &foundObj,
            bool useEventLoop , int timeout );





  bool findObject(const QCString &remApp, const QCString &remObj,
            const QCString &remFun, const QByteArray &data,
            QCString &foundApp, QCString &foundObj,
            bool useEventLoop=false);






  void emitDCOPSignal( const QCString &object, const QCString &signal,
                       const QByteArray &data);


  void emitDCOPSignal( const QCString &signal, const QByteArray &data);
# 426 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool connectDCOPSignal( const QCString &sender, const QCString &senderObj,
                          const QCString &signal,
                          const QCString &receiverObj, const QCString &slot,
                          bool Volatile);





  bool connectDCOPSignal( const QCString &sender, const QCString &signal,
                          const QCString &receiverObj, const QCString &slot,
                          bool Volatile) __attribute__ ((deprecated));
# 456 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool disconnectDCOPSignal( const QCString &sender, const QCString &senderObj,
                          const QCString &signal,
                          const QCString &receiverObj, const QCString &slot);





  bool disconnectDCOPSignal( const QCString &sender, const QCString &signal,
                          const QCString &receiverObj, const QCString &slot) __attribute__ ((deprecated));
# 482 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  virtual bool process(const QCString &fun, const QByteArray &data,
                       QCString& replyType, QByteArray &replyData);
# 494 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  DCOPClientTransaction *beginTransaction( );
# 503 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void endTransaction( DCOPClientTransaction *t, QCString& replyType, QByteArray &replyData);
# 514 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  Q_INT32 transactionId() const;






  bool isApplicationRegistered( const QCString& remApp);






  QCStringList registeredApplications();
# 537 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  QCStringList remoteObjects( const QCString& remApp, bool *ok = 0 );
# 548 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  QCStringList remoteInterfaces( const QCString& remApp, const QCString& remObj , bool *ok = 0 );
# 559 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  QCStringList remoteFunctions( const QCString& remApp, const QCString& remObj , bool *ok = 0 );
# 573 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool receive(const QCString &app, const QCString &obj,
               const QCString &fun, const QByteArray& data,
               QCString& replyType, QByteArray &replyData);
# 588 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  bool find(const QCString &app, const QCString &obj,
            const QCString &fun, const QByteArray& data,
            QCString& replyType, QByteArray &replyData);
# 609 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  static QCString normalizeFunctionSignature( const QCString& fun );







  QCString senderId() const;
# 627 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void setDefaultObject( const QCString& objId );
# 637 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  QCString defaultObject() const;
# 650 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void setNotifications( bool enabled );
# 660 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void setDaemonMode( bool daemonMode );
# 669 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  static DCOPClient* mainClient();
# 678 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  static void setMainClient( DCOPClient* mainClient);




  static void emergencyClose();






  static const char *postMortemSender();

  static const char *postMortemObject();

  static const char *postMortemFunction();
# 703 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  static QCString dcopServerFile(const QCString &hostname=0);





  static QCString dcopServerFileOld(const QCString &hostname=0) __attribute__ ((deprecated));




  static QCString iceauthPath();

protected:
# 725 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void applicationRegistered( const QCString& appId );
# 734 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void applicationRemoved( const QCString& appId );
# 744 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void attachFailed(const QString &msg);
# 763 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void blockUserInput( bool block );
# 774 "/coolo/prod/kdelibs/dcop/dcopclient.h"
  void callBack(int, const QCString&, const QByteArray &);

public :

protected :




  void processSocketData(int socknum);

private :
  void processPostedMessagesInternal();
  void asyncReplyReady();

public:
  class ReplyStruct;




  void handleAsyncReply(ReplyStruct *replyStruct);

private:

  bool isLocalTransactionFinished(Q_INT32 id, QCString &replyType, QByteArray &replyData);

  bool attachInternal( bool registerAsAnonymous = true );

  bool callInternal(const QCString &remApp, const QCString &remObj,
            const QCString &remFun, const QByteArray &data,
            QCString& replyType, QByteArray &replyData,
            bool useEventLoop, int timeout, int minor_opcode);


  bool callInternal(const QCString &remApp, const QCString &remObjId,
            const QCString &remFun, const QByteArray &data,
            ReplyStruct *replyStruct,
            bool useEventLoop, int timeout, int minor_opcode);

protected:
  virtual void virtual_hook( int id, void* data );
private:
  DCOPClientPrivate *d;
};
# 82 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/dcop/dcopref.h" 1
# 24 "/coolo/prod/kdelibs/dcop/dcopref.h"


# 1 "/coolo/prod/kdelibs/dcop/dcoptypes.h" 1
# 23 "/coolo/prod/kdelibs/dcop/dcoptypes.h"

# 1 "/coolo/prod/kdelibs/dcop/dcopref.h" 1
# 26 "/coolo/prod/kdelibs/dcop/dcoptypes.h" 2


inline const char* dcopTypeName( bool ) { return "bool"; }
inline const char* dcopTypeName( char ) { return "char"; }
inline const char* dcopTypeName( uchar ) { return "uchar"; }
inline const char* dcopTypeName( int ) { return "int"; }
inline const char* dcopTypeName( uint ) { return "uint"; }
inline const char* dcopTypeName( long ) { return "long"; }
inline const char* dcopTypeName( ulong ) { return "ulong"; }
inline const char* dcopTypeName( double ) { return "double"; }
inline const char* dcopTypeName( float ) { return "float"; }
inline const char* dcopTypeName( const char* ) { return "QCString"; }


class DCOPRef; inline const char* dcopTypeName( const DCOPRef& ) { return "DCOPRef"; }


class QString; inline const char* dcopTypeName( const QString& ) { return "QString"; }
class QCString; inline const char* dcopTypeName( const QCString& ) { return "QCString"; }
class QFont; inline const char* dcopTypeName( const QFont& ) { return "QFont"; }
class QPixmap; inline const char* dcopTypeName( const QPixmap& ) { return "QPixmap"; }
class QBrush; inline const char* dcopTypeName( const QBrush& ) { return "QBrush"; }
class QRect; inline const char* dcopTypeName( const QRect& ) { return "QRect"; }
class QPoint; inline const char* dcopTypeName( const QPoint& ) { return "QPoint"; }
class QImage; inline const char* dcopTypeName( const QImage& ) { return "QImage"; }
class QSize; inline const char* dcopTypeName( const QSize& ) { return "QSize"; }
class QColor; inline const char* dcopTypeName( const QColor& ) { return "QColor"; }
class QPalette; inline const char* dcopTypeName( const QPalette& ) { return "QPalette"; }
class QColorGroup; inline const char* dcopTypeName( const QColorGroup& ) { return "QColorGroup"; }
class QIconSet; inline const char* dcopTypeName( const QIconSet& ) { return "QIconSet"; }
class QDataStream; inline const char* dcopTypeName( const QDataStream& ) { return "QDataStream"; }
class QPointArray; inline const char* dcopTypeName( const QPointArray& ) { return "QPointArray"; }
class QRegion; inline const char* dcopTypeName( const QRegion& ) { return "QRegion"; }
class QBitmap; inline const char* dcopTypeName( const QBitmap& ) { return "QBitmap"; }
class QCursor; inline const char* dcopTypeName( const QCursor& ) { return "QCursor"; }
class QStringList; inline const char* dcopTypeName( const QStringList& ) { return "QStringList"; }
class QSizePolicy; inline const char* dcopTypeName( const QSizePolicy& ) { return "QSizePolicy"; }
class QDate; inline const char* dcopTypeName( const QDate& ) { return "QDate"; }
class QTime; inline const char* dcopTypeName( const QTime& ) { return "QTime"; }
class QDateTime; inline const char* dcopTypeName( const QDateTime& ) { return "QDateTime"; }
class QBitArray; inline const char* dcopTypeName( const QBitArray& ) { return "QBitArray"; }
class QKeySequence; inline const char* dcopTypeName( const QKeySequence& ) { return "QKeySequence"; }
class QVariant; inline const char* dcopTypeName( const QVariant& ) { return "QVariant"; }


class KURL; inline const char* dcopTypeName( const KURL& ) { return "KURL"; }


template <class T> inline const char* dcopTypeName( const T& ) { return "<unknown>"; }


inline void dcopTypeInit(bool& b){b=false;}
inline void dcopTypeInit(char& c){c=0;}
inline void dcopTypeInit(uchar& c){c=0;}
inline void dcopTypeInit(int& i){i=0;}
inline void dcopTypeInit(uint& i){i=0;}
inline void dcopTypeInit(long& l){l=0;}
inline void dcopTypeInit(ulong& l){l=0;}
inline void dcopTypeInit(float& f){f=0;}
inline void dcopTypeInit(double& d){d=0;}
inline void dcopTypeInit(const char* s ){s=0;}


template <class T> inline void dcopTypeInit(T&){}
# 28 "/coolo/prod/kdelibs/dcop/dcopref.h" 2


class QDataStream;
class DCOPObject;
class DCOPClient;
# 43 "/coolo/prod/kdelibs/dcop/dcopref.h"
class DCOPReply
{
public:






    template<class T>
    operator T() {
        T t;
        if ( typeCheck( dcopTypeName(t), true ) ) {
            QDataStream reply( data, 0x0001 );
            reply >> t;
        } else {
            dcopTypeInit(t);
        }
        return t;
    }







    template <class T> bool get( T& t, const char* tname ) {
        if ( typeCheck( tname, false ) ) {
            QDataStream reply( data, 0x0001 );
            reply >> t;
            return true;
        }
        return false;
    }
# 86 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T> bool get( T& t ) {
        if ( typeCheck( dcopTypeName(t), false ) ) {
            QDataStream reply( data, 0x0001 );
            reply >> t;
            return true;
        }
        return false;
    }





    inline bool isValid() const { return !type.isNull(); }


    QByteArray data;

    QCString type;
private:
    bool typeCheck( const char* t );
    bool typeCheck( const char* t, bool warn );
};
# 120 "/coolo/prod/kdelibs/dcop/dcopref.h"
class DCOPArg {
public:
# 130 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T> DCOPArg( const T& t, const char* tname_arg )
        : tname(tname_arg)
        {
            QDataStream ds( data, 0x0002 );
            ds << t;
        }
# 144 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T> DCOPArg( const T& t )
        : tname( dcopTypeName(t) )
        {
            QDataStream ds( data, 0x0002 );
            ds << t;
        }


    QByteArray data;

    const char* tname;
};

inline const char* dcopTypeName( const DCOPArg &arg ) { return arg.tname; }
inline QDataStream & operator << (QDataStream & str, const DCOPArg& arg )
   { str.writeRawBytes( arg.data.data(), arg.data.size() ); return str; }
# 278 "/coolo/prod/kdelibs/dcop/dcopref.h"
class DCOPRef
{
public:




    DCOPRef();




    DCOPRef( const DCOPRef& ref );







    DCOPRef( const QCString& app, const QCString& obj = "" );






    DCOPRef( DCOPObject *object );
# 316 "/coolo/prod/kdelibs/dcop/dcopref.h"
    DCOPRef( const QCString& app, const QCString& obj, const QCString& type );






    bool isNull() const;





    QCString app() const;






    QCString obj() const;




    QCString object() const;





    QCString type() const;





    DCOPRef& operator=( const DCOPRef& );







    void setRef( const QCString& app, const QCString& obj = "" );







    void setRef( const QCString& app, const QCString& obj, const QCString& type );






    void clear();
# 385 "/coolo/prod/kdelibs/dcop/dcopref.h"
    DCOPClient* dcopClient() const;







    void setDCOPClient( DCOPClient *client );
# 403 "/coolo/prod/kdelibs/dcop/dcopref.h"
    enum EventLoopFlag { NoEventLoop, UseEventLoop };
# 417 "/coolo/prod/kdelibs/dcop/dcopref.h"
    DCOPReply call( const QCString& fun ) {
        QByteArray data;
        return callInternal( fun, "()", data );
    }
# 435 "/coolo/prod/kdelibs/dcop/dcopref.h"
    DCOPReply callExt( const QCString& fun, EventLoopFlag useEventLoop=NoEventLoop,
                    int timeout=-1 ) {
        QByteArray data;
        return callInternal( fun, "()", data, useEventLoop, timeout );
    }
# 456 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1>
    DCOPReply call( const QCString& fun, const T1& t1 ) {
        QCString args;
        args.sprintf( "(%s)",
                     dcopTypeName(t1) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1;
        return callInternal( fun, args, data );
    }
# 482 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1>
    DCOPReply callExt( const QCString& fun,
                    EventLoopFlag useEventLoop, int timeout,
                    const T1& t1) {
        QCString args;
        args.sprintf( "(%s)",
                     dcopTypeName(t1) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1;
        return callInternal( fun, args, data, useEventLoop, timeout );
    }
# 512 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1, class T2>
    DCOPReply call( const QCString& fun,
                    const T1& t1,
                    const T2& t2 ) {
        QCString args;
        args.sprintf( "(%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2;
        return callInternal( fun, args, data );
    }
# 543 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1, class T2>
    DCOPReply callExt( const QCString& fun,
                    EventLoopFlag useEventLoop, int timeout,
                    const T1& t1,
                    const T2& t2) {
        QCString args;
        args.sprintf( "(%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2;
        return callInternal( fun, args, data, useEventLoop, timeout );
    }
# 577 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1, class T2, class T3>
    DCOPReply call( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3;
        return callInternal( fun, args, data );
    }
# 612 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1, class T2, class T3>
    DCOPReply callExt( const QCString& fun,
                    EventLoopFlag useEventLoop, int timeout,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3) {
        QCString args;
        args.sprintf( "(%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3;
        return callInternal( fun, args, data, useEventLoop, timeout );
    }
# 650 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4>
    DCOPReply call( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4;
        return callInternal( fun, args, data );
    }
# 689 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4>
    DCOPReply callExt( const QCString& fun,
                    EventLoopFlag useEventLoop, int timeout,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4;
        return callInternal( fun, args, data, useEventLoop, timeout );
    }
# 731 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5>
    DCOPReply call( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5;
        return callInternal( fun, args, data );
    }
# 774 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5>
    DCOPReply callExt( const QCString& fun,
                    EventLoopFlag useEventLoop, int timeout,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5;
        return callInternal( fun, args, data, useEventLoop, timeout );
    }
# 820 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6>
    DCOPReply call( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6;
        return callInternal( fun, args, data );
    }
# 867 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6>
    DCOPReply callExt( const QCString& fun,
                    EventLoopFlag useEventLoop, int timeout,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6;
        return callInternal( fun, args, data, useEventLoop, timeout );
    }
# 916 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6,class T7>
    DCOPReply call( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6,
                    const T7& t7 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6),
                     dcopTypeName(t7) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6 << t7;
        return callInternal( fun, args, data );
    }
# 967 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6,class T7>
    DCOPReply callExt( const QCString& fun,
                    EventLoopFlag useEventLoop, int timeout,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6,
                    const T7& t7) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6),
                     dcopTypeName(t7) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6 << t7;
        return callInternal( fun, args, data, useEventLoop, timeout );
    }
# 1021 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8>
    DCOPReply call( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6,
                    const T7& t7,
                    const T8& t8 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6),
                     dcopTypeName(t7),
                     dcopTypeName(t8) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8;
        return callInternal( fun, args, data );
    }
# 1076 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8>
    DCOPReply callExt( const QCString& fun,
                    EventLoopFlag useEventLoop, int timeout,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6,
                    const T7& t7,
                    const T8& t8) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6),
                     dcopTypeName(t7),
                     dcopTypeName(t8) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8;
        return callInternal( fun, args, data, useEventLoop, timeout );
    }
# 1116 "/coolo/prod/kdelibs/dcop/dcopref.h"
    bool send( const QCString& fun ) {
        QByteArray data;
        return sendInternal( fun, "()", data );
    }
# 1137 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1>
    bool send( const QCString& fun, const T1& t1 ) {
        QCString args;
        args.sprintf( "(%s)",
                     dcopTypeName(t1) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1;
        return sendInternal( fun, args, data );
    }
# 1165 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1, class T2>
    bool send( const QCString& fun,
                    const T1& t1,
                    const T2& t2 ) {
        QCString args;
        args.sprintf( "(%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2;
        return sendInternal( fun, args, data );
    }
# 1198 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1, class T2, class T3>
    bool send( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3;
        return sendInternal( fun, args, data );
    }
# 1235 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4>
    bool send( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4;
        return sendInternal( fun, args, data );
    }
# 1276 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5>
    bool send( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5;
        return sendInternal( fun, args, data );
    }
# 1321 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6>
    bool send( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6;
        return sendInternal( fun, args, data );
    }
# 1370 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6,class T7>
    bool send( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6,
                    const T7& t7 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6),
                     dcopTypeName(t7) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6 << t7;
        return sendInternal( fun, args, data );
    }
# 1423 "/coolo/prod/kdelibs/dcop/dcopref.h"
    template <class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8>
    bool send( const QCString& fun,
                    const T1& t1,
                    const T2& t2,
                    const T3& t3,
                    const T4& t4,
                    const T5& t5,
                    const T6& t6,
                    const T7& t7,
                    const T8& t8 ) {
        QCString args;
        args.sprintf( "(%s,%s,%s,%s,%s,%s,%s,%s)",
                     dcopTypeName(t1),
                     dcopTypeName(t2),
                     dcopTypeName(t3),
                     dcopTypeName(t4),
                     dcopTypeName(t5),
                     dcopTypeName(t6),
                     dcopTypeName(t7),
                     dcopTypeName(t8) );
        QByteArray data;
        QDataStream ds( data, 0x0002 );
        ds << t1 << t2 << t3 << t4 << t5 << t6 << t7 << t8;
        return sendInternal( fun, args, data );
    }



private:
    DCOPReply callInternal( const QCString& fun, const QCString& args, const QByteArray& data,
                            EventLoopFlag useEventLoop, int timeout );
    DCOPReply callInternal( const QCString& fun, const QCString& args, const QByteArray& data );
    bool sendInternal( const QCString& fun, const QCString& args, const QByteArray& data );

    QCString m_app;
    QCString m_obj;
    QCString m_type;

    class DCOPRefPrivate;
    DCOPRefPrivate *d;
};




QDataStream& operator<<( QDataStream&, const DCOPRef& ref );



QDataStream& operator>>( QDataStream&, DCOPRef& ref );
# 83 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2





# 1 "/usr/include/sys/wait.h" 1 3 4
# 24 "/usr/include/sys/wait.h" 3 4



extern "C" {

# 1 "/usr/include/signal.h" 1 3 4
# 26 "/usr/include/signal.h" 3 4




extern "C" {

# 1 "/usr/include/bits/sigset.h" 1 3 4
# 43 "/usr/include/bits/sigset.h" 3 4














# 72 "/usr/include/bits/sigset.h" 3 4






# 88 "/usr/include/bits/sigset.h" 3 4
# 103 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember (__const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 34 "/usr/include/signal.h" 2 3 4






typedef __sig_atomic_t sig_atomic_t;

# 58 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 23 "/usr/include/bits/signum.h" 3 4












# 59 "/usr/include/signal.h" 2 3 4
# 73 "/usr/include/signal.h" 3 4
typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     throw ();

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     throw ();







extern __sighandler_t signal (int __sig, __sighandler_t __handler) throw ();
# 102 "/usr/include/signal.h" 3 4





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler) throw ();






extern int kill (__pid_t __pid, int __sig) throw ();






extern int killpg (__pid_t __pgrp, int __sig) throw ();




extern int raise (int __sig) throw ();




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler) throw ();
extern int gsignal (int __sig) throw ();




extern void psignal (int __sig, __const char *__s) throw ();
# 146 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig) throw ();




extern int sigpause (int __mask) throw ();
# 171 "/usr/include/signal.h" 3 4


extern int sigblock (int __mask) throw ();


extern int sigsetmask (int __mask) throw ();


extern int siggetmask (void) throw ();







typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;






# 1 "/usr/include/time.h" 1 3 4
# 125 "/usr/include/time.h" 3 4
#undef __need_timespec
# 203 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 19 "/usr/include/bits/wordsize.h" 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4






typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;










typedef struct siginfo
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
        int _pad[((128 / sizeof (int)) - 3)];


        struct
          {
            __pid_t si_pid;
            __uid_t si_uid;
          } _kill;


        struct
          {
            unsigned int _timer1;
            unsigned int _timer2;
          } _timer;


        struct
          {
            __pid_t si_pid;
            __uid_t si_uid;
            sigval_t si_sigval;
          } _rt;


        struct
          {
            __pid_t si_pid;
            __uid_t si_uid;
            int si_status;
            __clock_t si_utime;
            __clock_t si_stime;
          } _sigchld;


        struct
          {
            void *si_addr;
          } _sigfault;


        struct
          {
            long int si_band;
            int si_fd;
          } _sigpoll;
      } _sifields;
  } siginfo_t;







enum
{
  SI_ASYNCNL = -6,
  SI_SIGIO,
  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,
  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
};



enum
{
  ILL_ILLOPC = 1,
  ILL_ILLOPN,
  ILL_ILLADR,
  ILL_ILLTRP,
  ILL_PRVOPC,
  ILL_PRVREG,
  ILL_COPROC,
  ILL_BADSTK
};


enum
{
  FPE_INTDIV = 1,
  FPE_INTOVF,
  FPE_FLTDIV,
  FPE_FLTOVF,
  FPE_FLTUND,
  FPE_FLTRES,
  FPE_FLTINV,
  FPE_FLTSUB
};


enum
{
  SEGV_MAPERR = 1,
  SEGV_ACCERR
};


enum
{
  BUS_ADRALN = 1,
  BUS_ADRERR,
  BUS_OBJERR
};


enum
{
  TRAP_BRKPT = 1,
  TRAP_TRACE
};


enum
{
  CLD_EXITED = 1,
  CLD_KILLED,
  CLD_DUMPED,
  CLD_TRAPPED,
  CLD_STOPPED,
  CLD_CONTINUED
};


enum
{
  POLL_IN = 1,
  POLL_OUT,
  POLL_MSG,
  POLL_ERR,
  POLL_PRI,
  POLL_HUP
};















struct __pthread_attr_s;

typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
        int _pad[((64 / sizeof (int)) - 3)];

        struct
          {
            void (*_function) (sigval_t);
            void *_attribute;
          } _sigev_thread;
      } _sigev_un;
  } sigevent_t;




enum
{
  SIGEV_SIGNAL = 0,
  SIGEV_NONE,
  SIGEV_THREAD
};
# 206 "/usr/include/signal.h" 2 3 4



extern int sigemptyset (sigset_t *__set) throw ();


extern int sigfillset (sigset_t *__set) throw ();


extern int sigaddset (sigset_t *__set, int __signo) throw ();


extern int sigdelset (sigset_t *__set, int __signo) throw ();


extern int sigismember (__const sigset_t *__set, int __signo) throw ();



extern int sigisemptyset (__const sigset_t *__set) throw ();


extern int sigandset (sigset_t *__set, __const sigset_t *__left,
                      __const sigset_t *__right) throw ();


extern int sigorset (sigset_t *__set, __const sigset_t *__left,
                     __const sigset_t *__right) throw ();




# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 25 "/usr/include/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

        __sighandler_t sa_handler;

        void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;





    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };












# 239 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, __const sigset_t *__restrict __set,
                        sigset_t *__restrict __oset) throw ();



extern int sigsuspend (__const sigset_t *__set) throw ();


extern int sigaction (int __sig, __const struct sigaction *__restrict __act,
                      struct sigaction *__restrict __oact) throw ();


extern int sigpending (sigset_t *__set) throw ();



extern int sigwait (__const sigset_t *__restrict __set, int *__restrict __sig)
     throw ();



extern int sigwaitinfo (__const sigset_t *__restrict __set,
                        siginfo_t *__restrict __info) throw ();



extern int sigtimedwait (__const sigset_t *__restrict __set,
                         siginfo_t *__restrict __info,
                         __const struct timespec *__restrict __timeout)
     throw ();



extern int sigqueue (__pid_t __pid, int __sig, __const union sigval __val)
     throw ();
# 284 "/usr/include/signal.h" 3 4
extern __const char *__const _sys_siglist[64];
extern __const char *__const sys_siglist[64];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;
  };









extern int sigvec (int __sig, __const struct sigvec *__vec,
                   struct sigvec *__ovec) throw ();



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 26 "/usr/include/bits/sigcontext.h" 3 4

# 1 "/usr/include/asm/sigcontext.h" 1 3 4

# 18 "/usr/include/asm/sigcontext.h" 3 4
struct _fpreg {
        unsigned short significand[4];
        unsigned short exponent;
};

struct _fpxreg {
        unsigned short significand[4];
        unsigned short exponent;
        unsigned short padding[3];
};

struct _xmmreg {
        unsigned long element[4];
};

struct _fpstate {

        unsigned long cw;
        unsigned long sw;
        unsigned long tag;
        unsigned long ipoff;
        unsigned long cssel;
        unsigned long dataoff;
        unsigned long datasel;
        struct _fpreg _st[8];
        unsigned short status;
        unsigned short magic;


        unsigned long _fxsr_env[6];
        unsigned long mxcsr;
        unsigned long reserved;
        struct _fpxreg _fxsr_st[8];
        struct _xmmreg _xmm[8];
        unsigned long padding[56];
};


struct sigcontext {
        unsigned short gs, __gsh;
        unsigned short fs, __fsh;
        unsigned short es, __esh;
        unsigned short ds, __dsh;
        unsigned long edi;
        unsigned long esi;
        unsigned long ebp;
        unsigned long esp;
        unsigned long ebx;
        unsigned long edx;
        unsigned long ecx;
        unsigned long eax;
        unsigned long trapno;
        unsigned long err;
        unsigned long eip;
        unsigned short cs, __csh;
        unsigned long eflags;
        unsigned long esp_at_signal;
        unsigned short ss, __ssh;
        struct _fpstate * fpstate;
        unsigned long oldmask;
        unsigned long cr2;
};
# 29 "/usr/include/bits/sigcontext.h" 2 3 4
# 314 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) throw ();
# 326 "/usr/include/signal.h" 3 4
extern int siginterrupt (int __sig, int __interrupt) throw ();

# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 26 "/usr/include/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,
  SS_DISABLE
};







typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 329 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 20 "/usr/include/sys/ucontext.h" 3 4


# 1 "/usr/include/signal.h" 1 3 4
# 24 "/usr/include/sys/ucontext.h" 2 3 4



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/sys/ucontext.h" 2 3 4



typedef int greg_t;




typedef greg_t gregset_t[19];



enum
{
  REG_GS = 0,
  REG_FS,
  REG_ES,
  REG_DS,
  REG_EDI,
  REG_ESI,
  REG_EBP,
  REG_ESP,
  REG_EBX,
  REG_EDX,
  REG_ECX,
  REG_EAX,
  REG_TRAPNO,
  REG_ERR,
  REG_EIP,
  REG_CS,
  REG_EFL,
  REG_UESP,
  REG_SS
};



struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 332 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss) throw ();



extern int sigaltstack (__const struct sigaltstack *__restrict __ss,
                        struct sigaltstack *__restrict __oss) throw ();







extern int sighold (int __sig) throw ();


extern int sigrelse (int __sig) throw ();


extern int sigignore (int __sig) throw ();


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) throw ();





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 366 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 21 "/usr/include/bits/sigthread.h" 3 4
# 31 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
                            __const __sigset_t *__restrict __newmask,
                            __sigset_t *__restrict __oldmask)throw ();


extern int pthread_kill (pthread_t __threadid, int __signo) throw ();
# 367 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) throw ();

extern int __libc_current_sigrtmax (void) throw ();



}
# 31 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 20 "/usr/include/sys/resource.h" 3 4




# 1 "/usr/include/bits/resource.h" 1 3 4
# 32 "/usr/include/bits/resource.h" 3 4
enum __rlimit_resource
{

  RLIMIT_CPU = 0,


  RLIMIT_FSIZE = 1,


  RLIMIT_DATA = 2,


  RLIMIT_STACK = 3,


  RLIMIT_CORE = 4,





  RLIMIT_RSS = 5,


  RLIMIT_NOFILE = 7,
  RLIMIT_OFILE = RLIMIT_NOFILE,


  RLIMIT_AS = 9,


  RLIMIT_NPROC = 6,


  RLIMIT_MEMLOCK = 8,


  RLIMIT_LOCKS = 10,

  RLIMIT_NLIMITS = 11,
  RLIM_NLIMITS = RLIMIT_NLIMITS
};















typedef __rlim_t rlim_t;




typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,


  RUSAGE_CHILDREN = -1,


  RUSAGE_BOTH = -2
};

# 1 "/usr/include/bits/time.h" 1 3 4
# 60 "/usr/include/bits/time.h" 3 4
#undef __need_timeval
# 151 "/usr/include/bits/resource.h" 2 3 4


struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    long int ru_maxrss;


    long int ru_ixrss;

    long int ru_idrss;

    long int ru_isrss;


    long int ru_minflt;

    long int ru_majflt;

    long int ru_nswap;


    long int ru_inblock;

    long int ru_oublock;

    long int ru_msgsnd;

    long int ru_msgrcv;

    long int ru_nsignals;



    long int ru_nvcsw;


    long int ru_nivcsw;
  };





enum __priority_which
{
  PRIO_PROCESS = 0,
  PRIO_PGRP = 1,
  PRIO_USER = 2
};
# 26 "/usr/include/sys/resource.h" 2 3 4






extern "C" {
# 43 "/usr/include/sys/resource.h" 3 4
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;





extern int getrlimit (__rlimit_resource_t __resource,
                      struct rlimit *__rlimits) throw ();
# 63 "/usr/include/sys/resource.h" 3 4
extern int getrlimit64 (__rlimit_resource_t __resource,
                        struct rlimit64 *__rlimits) throw ();






extern int setrlimit (__rlimit_resource_t __resource,
                      __const struct rlimit *__rlimits) throw ();
# 83 "/usr/include/sys/resource.h" 3 4
extern int setrlimit64 (__rlimit_resource_t __resource,
                        __const struct rlimit64 *__rlimits) throw ();




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) throw ();





extern int getpriority (__priority_which_t __which, id_t __who) throw ();



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     throw ();

}
# 32 "/usr/include/sys/wait.h" 2 3 4
# 90 "/usr/include/sys/wait.h" 3 4




typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;





extern __pid_t wait (void * __stat_loc) throw ();



# 129 "/usr/include/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options) throw ();


# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 19 "/usr/include/bits/wordsize.h" 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4
# 134 "/usr/include/sys/wait.h" 2 3 4
# 142 "/usr/include/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
                   int __options) throw ();





struct rusage;






extern __pid_t wait3 (void * __stat_loc, int __options,
                      struct rusage * __usage) throw ();





struct rusage;


extern __pid_t wait4 (__pid_t __pid, void * __stat_loc, int __options,
                      struct rusage *__usage) throw ();



}
# 89 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

# 1 "/coolo/prod/kdelibs/kdecore/kwin.h" 1
# 20 "/coolo/prod/kdelibs/kdecore/kwin.h"

# 1 "../config.h" 1
# 13 "../config.h"









# 34 "../config.h"










# 55 "../config.h"







# 74 "../config.h"


# 86 "../config.h"























































# 176 "../config.h"

























































# 266 "../config.h"











# 290 "../config.h"



























# 336 "../config.h"


















# 372 "../config.h"


































# 438 "../config.h"































































































# 577 "../config.h"





















# 617 "../config.h"




# 633 "../config.h"







































# 699 "../config.h"












# 761 "../config.h"
# 793 "../config.h"
extern "C"

int mkstemps(char *, int);
# 829 "../config.h"
extern "C"

unsigned long strlcat(char*, const char*, unsigned long);






extern "C"

unsigned long strlcpy(char*, const char*, unsigned long);
# 905 "../config.h"




# 920 "../config.h"
# 937 "../config.h"
# 23 "/coolo/prod/kdelibs/kdecore/kwin.h" 2
# 34 "/coolo/prod/kdelibs/kdecore/kwin.h"
# 1 "/coolo/prod/kdelibs/kdecore/netwm_def.h" 1
# 27 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
# 42 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
struct NETPoint {



    NETPoint() : x(0), y(0) { }




    int x,
      y;
};
# 69 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
struct NETSize {



    NETSize() : width(0), height(0) { }




    int width,
      height;
};
# 92 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
struct NETRect {





    NETPoint pos;






    NETSize size;
};
# 120 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
struct NETIcon {



    NETIcon() : data(0) { }






    NETSize size;






    unsigned char *data;
};
# 150 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
struct NETStrut {



    NETStrut() : left(0), right(0), top(0), bottom(0) { }




    int left;




    int right;




    int top;




    int bottom;
};
# 190 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
class NET {
public:
# 202 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
    enum Role {
        Client,
        WindowManager
    };
# 237 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
    enum WindowType {
        Unknown = -1,
        Normal = 0,
        Desktop = 1,
        Dock = 2,
        Toolbar = 3,
        Menu = 4,
        Dialog = 5,
        Override = 6,
        TopMenu = 7,
        Tool = Toolbar,
        Utility = 8,
        Splash = 9
    };






    enum WindowTypeMask {
        NormalMask = 1<<0,
        DesktopMask = 1<<1,
        DockMask = 1<<2,
        ToolbarMask = 1<<3,
        MenuMask = 1<<4,
        DialogMask = 1<<5,
        OverrideMask = 1<<6,
        TopMenuMask = 1<<7,
        UtilityMask = 1<<8,
        SplashMask = 1<<9
    };
# 311 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
    enum State {
        Modal = 1<<0,
        Sticky = 1<<1,
        MaxVert = 1<<2,
        MaxHoriz = 1<<3,
        Max = MaxVert | MaxHoriz,
        Shaded = 1<<4,
        SkipTaskbar = 1<<5,
        KeepAbove = 1<<6,
        StaysOnTop = KeepAbove,
        SkipPager = 1<<7,
        Hidden = 1<<8,
        FullScreen = 1<<9,
        KeepBelow = 1<<10,
        DemandsAttention = 1<<11
    };
# 347 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
    enum Direction {
        TopLeft = 0,
        Top = 1,
        TopRight = 2,
        Right = 3,
        BottomRight = 4,
        Bottom = 5,
        BottomLeft = 6,
        Left = 7,
        Move = 8,



        KeyboardSize = 9,



        KeyboardMove = 10
    };
# 382 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
    enum MappingState {
        Visible,
        Withdrawn,
        Iconic
    };




    enum Action {
        ActionMove = 1<<0,
        ActionResize = 1<<1,
        ActionMinimize = 1<<2,
        ActionShade = 1<<3,
        ActionStick = 1<<4,
        ActionMaxVert = 1<<5,
        ActionMaxHoriz = 1<<6,
        ActionMax = ActionMaxVert | ActionMaxHoriz,
        ActionFullScreen = 1<<7,
        ActionChangeDesktop = 1<<8,
        ActionClose = 1<<9
    };
# 451 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
    enum Property {

        Supported = 1<<0,
        ClientList = 1<<1,
        ClientListStacking = 1<<2,
        NumberOfDesktops = 1<<3,
        DesktopGeometry = 1<<4,
        DesktopViewport = 1<<5,
        CurrentDesktop = 1<<6,
        DesktopNames = 1<<7,
        ActiveWindow = 1<<8,
        WorkArea = 1<<9,
        SupportingWMCheck = 1<<10,
        VirtualRoots = 1<<11,
        KDESystemTrayWindows = 1<<12,
        CloseWindow = 1<<13,
        WMMoveResize = 1<<14,


        WMName = 1<<15,
        WMVisibleName = 1<<16,
        WMDesktop = 1<<17,
        WMWindowType = 1<<18,
        WMState = 1<<19,
        WMStrut = 1<<20,
        WMIconGeometry = 1<<21,
        WMIcon = 1<<22,
        WMPid = 1<<23,
        WMHandledIcons = 1<<24,
        WMPing = 1<<25,
        WMKDESystemTrayWinFor = 1<<26,
        XAWMState = 1<<27,
        WMKDEFrameStrut = 1<<28,


        WMIconName = 1<<29,
        WMVisibleIconName = 1<<30,
        WMGeometry = 1<<31
    };
# 504 "/coolo/prod/kdelibs/kdecore/netwm_def.h"
    enum Property2 {
        WM2UserTime = 1<<0,
        WM2StartupId = 1<<1,
        WM2TransientFor = 1<<2,
        WM2GroupLeader = 1<<3,
        WM2AllowedActions = 1<<4
    };






    enum { OnAllDesktops = -1 };







    enum RequestSource {
        FromUnknown,
        FromApplication,
        FromTool
    };
};
# 35 "/coolo/prod/kdelibs/kdecore/kwin.h" 2
class NETWinInfo;
# 65 "/coolo/prod/kdelibs/kdecore/kwin.h"
class KWin
{
public:
# 91 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void activateWindow( WId win, long time = 0 );
# 107 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void setActiveWindow( WId win, long time );




    static void setActiveWindow( WId win );
# 125 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void demandAttention( WId win, bool set = true );
# 135 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void setUserTime( WId win, long time );




    static void invokeContextHelp();
# 152 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void setSystemTrayWindowFor( WId trayWin, WId forWin );

    class WindowInfo;
    class WindowInfoPrivate;
# 168 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static WindowInfo windowInfo( WId win, unsigned long properties = 0, unsigned long properties2 = 0 );
# 178 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static WId transientFor( WId window );





    static WId groupLeader( WId window );
# 202 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static QPixmap icon( WId win, int width = -1, int height = -1, bool scale = false );
# 212 "/coolo/prod/kdelibs/kdecore/kwin.h"
    enum IconSource { NETWM = 1, WMHints = 2, ClassHint = 4, XApp = 8 };
# 222 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static QPixmap icon( WId win, int width, int height, bool scale, int flags );







    static void setIcons( WId win, const QPixmap& icon, const QPixmap& miniIcon );
# 242 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void setType( WId win, NET::WindowType windowType );
# 255 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void setState( WId win, unsigned long state );
# 268 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void clearState( WId win, unsigned long state );
# 278 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void setOnAllDesktops( WId win, bool b );







    static void setOnDesktop( WId win, int desktop);
# 297 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void setStrut( WId win, int left, int right, int top, int bottom );





    static int currentDesktop();






    static int numberOfDesktops();






    static void setCurrentDesktop( int desktop );
# 327 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void iconifyWindow( WId win, bool animation = true );
# 337 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void deIconifyWindow( WId win, bool animation = true );






    static bool icccmCompliantMappingState();




    static bool allowedActionsSupported();





    static QString readNameProperty( WId window, unsigned long atom );




    struct Info
    {

        WId win;

        long unsigned int state;

        bool isMinimized() const;
        bool isIconified() const;
        NET::MappingState mappingState;

        NETStrut strut;

        NET::WindowType windowType;

        QString visibleName;

        QString name;

        int desktop;

        bool onAllDesktops;

        pid_t pid;

        QRect geometry;

        QRect frameGeometry;

        QString visibleNameWithState() const;
    };





    static Info info( WId win ) ;
# 405 "/coolo/prod/kdelibs/kdecore/kwin.h"
    static void appStarted() ;
};





class KWin::WindowInfo
{
public:



    WindowInfo( WId window, unsigned long properties, unsigned long properties2 );
    WindowInfo();
    ~WindowInfo();






    bool valid( bool withdrawn_is_valid = false ) const;



    WId win() const;




    unsigned long state() const;







    bool isMinimized() const;






    NET::MappingState mappingState() const;




    NETStrut strut() const;





    NET::WindowType windowType( int supported_types ) const;
# 474 "/coolo/prod/kdelibs/kdecore/kwin.h"
    QString visibleNameMatchingState() const;





    QString visibleName() const;
# 490 "/coolo/prod/kdelibs/kdecore/kwin.h"
    QString visibleNameWithState() const;





    QString name() const;






    QString visibleIconName() const;






    QString iconName() const;




    bool isOnCurrentDesktop() const;




    bool isOnDesktop( int desktop ) const;





    bool onAllDesktops() const;





    int desktop() const;




    QRect geometry() const;




    QRect frameGeometry() const;





    WId transientFor() const;




    WId groupLeader() const;






    bool actionSupported( NET::Action action ) const;

    WindowInfo( const WindowInfo& );
    WindowInfo& operator=( const WindowInfo& );
private:
    WindowInfoPrivate* d;
};
# 91 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2





# 1 "/usr/include/time.h" 1 3 4
# 27 "/usr/include/time.h" 3 4


extern "C" {





# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 397 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef NULL

# 408 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_NULL
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 26 "/usr/include/bits/time.h" 3 4







# 46 "/usr/include/bits/time.h" 3 4




# 43 "/usr/include/time.h" 2 3 4
# 129 "/usr/include/time.h" 3 4


struct tm
{
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
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 178 "/usr/include/time.h" 3 4



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
                        __const char *__restrict __format,
                        __const struct tm *__restrict __tp) throw ();





extern char *strptime (__const char *__restrict __s,
                       __const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
                          __const char *__restrict __format,
                          __const struct tm *__restrict __tp,
                          __locale_t __loc) throw ();

extern char *strptime_l (__const char *__restrict __s,
                         __const char *__restrict __fmt, struct tm *__tp,
                         __locale_t __loc) throw ();






extern struct tm *gmtime (__const time_t *__timer) throw ();



extern struct tm *localtime (__const time_t *__timer) throw ();





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
                            struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (__const time_t *__restrict __timer,
                               struct tm *__restrict __tp) throw ();





extern char *asctime (__const struct tm *__tp) throw ();


extern char *ctime (__const time_t *__timer) throw ();







extern char *asctime_r (__const struct tm *__restrict __tp,
                        char *__restrict __buf) throw ();


extern char *ctime_r (__const time_t *__restrict __timer,
                      char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) throw ();





# 309 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));





extern int nanosleep (__const struct timespec *__requested_time,
                      struct timespec *__remaining) throw ();



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     throw ();



extern int clock_nanosleep (clockid_t __clock_id, int __flags,
                            __const struct timespec *__req,
                            struct timespec *__rem) throw ();


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
                         struct sigevent *__restrict __evp,
                         timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
                          __const struct itimerspec *__restrict __value,
                          struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();
# 380 "/usr/include/time.h" 3 4
extern int getdate_err;





extern struct tm *getdate (__const char *__string) throw ();
# 395 "/usr/include/time.h" 3 4
extern int getdate_r (__const char *__restrict __string,
                      struct tm *__restrict __resbufp) throw ();


}
# 97 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 21 "/usr/include/sys/time.h" 3 4





# 1 "/usr/include/bits/time.h" 1 3 4
# 60 "/usr/include/bits/time.h" 3 4
#undef __need_timeval
# 30 "/usr/include/sys/time.h" 2 3 4
# 39 "/usr/include/sys/time.h" 3 4
extern "C" {






# 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
                         __timezone_ptr_t __tz) throw ();




extern int settimeofday (__const struct timeval *__tv,
                         __const struct timezone *__tz) throw ();





extern int adjtime (__const struct timeval *__delta,
                    struct timeval *__olddelta) throw ();




enum __itimer_which
  {

    ITIMER_REAL = 0,

    ITIMER_VIRTUAL = 1,


    ITIMER_PROF = 2
  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
                      struct itimerval *__value) throw ();




extern int setitimer (__itimer_which_t __which,
                      __const struct itimerval *__restrict __new,
                      struct itimerval *__restrict __old) throw ();




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     throw ();



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     throw ();


extern int futimes (int fd, __const struct timeval __tvp[2]) throw ();









# 171 "/usr/include/sys/time.h" 3 4
# 182 "/usr/include/sys/time.h" 3 4
}
# 98 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4



extern "C" {



# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4


# 1 "/usr/include/asm/errno.h" 1 3 4





# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4










extern int *__errno_location (void) throw () __attribute__ ((__const__));



# 37 "/usr/include/errno.h" 2 3 4
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;



}
# 69 "/usr/include/errno.h" 3 4
typedef int error_t;
# 99 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

# 1 "/usr/include/netdb.h" 1 3 4
# 24 "/usr/include/netdb.h" 3 4



# 1 "/usr/include/netinet/in.h" 1 3 4
# 20 "/usr/include/netinet/in.h" 3 4


# 1 "/usr/include/stdint.h" 1 3 4
# 24 "/usr/include/stdint.h" 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 19 "/usr/include/bits/wordsize.h" 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 49 "/usr/include/stdint.h" 3 4
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
# 129 "/usr/include/stdint.h" 3 4
typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 24 "/usr/include/netinet/in.h" 2 3 4



extern "C" {


enum
  {
    IPPROTO_IP = 0,
    IPPROTO_HOPOPTS = 0,
    IPPROTO_ICMP = 1,
    IPPROTO_IGMP = 2,
    IPPROTO_IPIP = 4,
    IPPROTO_TCP = 6,
    IPPROTO_EGP = 8,
    IPPROTO_PUP = 12,
    IPPROTO_UDP = 17,
    IPPROTO_IDP = 22,
    IPPROTO_TP = 29,
    IPPROTO_IPV6 = 41,
    IPPROTO_ROUTING = 43,
    IPPROTO_FRAGMENT = 44,
    IPPROTO_RSVP = 46,
    IPPROTO_GRE = 47,
    IPPROTO_ESP = 50,
    IPPROTO_AH = 51,
    IPPROTO_ICMPV6 = 58,
    IPPROTO_NONE = 59,
    IPPROTO_DSTOPTS = 60,
    IPPROTO_MTP = 92,
    IPPROTO_ENCAP = 98,
    IPPROTO_PIM = 103,
    IPPROTO_COMP = 108,
    IPPROTO_RAW = 255,
    IPPROTO_MAX
  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };



typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };

























struct in6_addr
  {
    union
      {
        uint8_t u6_addr8[16];
        uint16_t u6_addr16[8];
        uint32_t u6_addr32[4];
      } in6_u;
  };

extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;



# 1 "/usr/include/bits/socket.h" 1 3 4
# 21 "/usr/include/bits/socket.h" 3 4





# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 397 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef NULL

# 408 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_NULL
# 30 "/usr/include/bits/socket.h" 2 3 4

# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/limits.h" 1 3 4
# 32 "/usr/include/bits/socket.h" 2 3 4
# 41 "/usr/include/bits/socket.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,

  SOCK_DGRAM = 2,

  SOCK_RAW = 3,
  SOCK_RDM = 4,
  SOCK_SEQPACKET = 5,

  SOCK_PACKET = 10


};













# 1 "/usr/include/bits/sockaddr.h" 1 3 4
# 25 "/usr/include/bits/sockaddr.h" 3 4



typedef unsigned short int sa_family_t;







# 143 "/usr/include/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };









struct sockaddr_storage
  {
    sa_family_t ss_family;
    __uint32_t __ss_align;
    char __ss_padding[(128 - (2 * sizeof (__uint32_t)))];
  };



enum
  {
    MSG_OOB = 0x01,
    MSG_PEEK = 0x02,
    MSG_DONTROUTE = 0x04,


    MSG_TRYHARD = MSG_DONTROUTE,

    MSG_CTRUNC = 0x08,
    MSG_PROXY = 0x10,
    MSG_TRUNC = 0x20,
    MSG_DONTWAIT = 0x40,
    MSG_EOR = 0x80,
    MSG_WAITALL = 0x100,
    MSG_FIN = 0x200,
    MSG_SYN = 0x400,
    MSG_CONFIRM = 0x800,
    MSG_RST = 0x1000,
    MSG_ERRQUEUE = 0x2000,
    MSG_NOSIGNAL = 0x4000,
    MSG_MORE = 0x8000
  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;

    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;

    int cmsg_level;
    int cmsg_type;



  };











extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
                                      struct cmsghdr *__cmsg) throw ();
# 284 "/usr/include/bits/socket.h" 3 4
enum
  {
    SCM_RIGHTS = 0x01,

    SCM_CREDENTIALS = 0x02,

    __SCM_CONNECT = 0x03
  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};


# 1 "/usr/include/asm/socket.h" 1 3 4


# 1 "/usr/include/asm/sockios.h" 1 3 4



# 5 "/usr/include/asm/socket.h" 2 3 4











# 306 "/usr/include/bits/socket.h" 2 3 4



struct linger
  {
    int l_onoff;
    int l_linger;
  };
# 213 "/usr/include/netinet/in.h" 2 3 4



struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
                           (sizeof (unsigned short int)) -
                           sizeof (in_port_t) -
                           sizeof (struct in_addr)];
  };


struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };


struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };


# 1 "/usr/include/bits/in.h" 1 3 4
# 28 "/usr/include/bits/in.h" 3 4











struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreq
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_interface;
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };















# 251 "/usr/include/netinet/in.h" 2 3 4
# 259 "/usr/include/netinet/in.h" 3 4
extern uint32_t ntohl (uint32_t __netlong) throw () __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
     throw () __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
     throw () __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
     throw () __attribute__ ((__const__));




# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 25 "/usr/include/bits/byteswap.h" 3 4






# 59 "/usr/include/bits/byteswap.h" 3 4
# 68 "/usr/include/bits/byteswap.h" 3 4
# 107 "/usr/include/bits/byteswap.h" 3 4
# 117 "/usr/include/bits/byteswap.h" 3 4
# 271 "/usr/include/netinet/in.h" 2 3 4
# 293 "/usr/include/netinet/in.h" 3 4
































extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) throw ();


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     throw ();


















struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;
    unsigned int ipi6_ifindex;
  };

}
# 29 "/usr/include/netdb.h" 2 3 4




# 1 "/usr/include/rpc/netdb.h" 1 3 4
# 37 "/usr/include/rpc/netdb.h" 3 4



# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 235 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef __need_size_t
# 43 "/usr/include/rpc/netdb.h" 2 3 4

extern "C" {

struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) throw ();
extern void endrpcent (void) throw ();
extern struct rpcent *getrpcbyname (__const char *__name) throw ();
extern struct rpcent *getrpcbynumber (int __number) throw ();
extern struct rpcent *getrpcent (void) throw ();


extern int getrpcbyname_r (__const char *__name, struct rpcent *__result_buf,
                           char *__buffer, size_t __buflen,
                           struct rpcent **__result) throw ();

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
                             char *__buffer, size_t __buflen,
                             struct rpcent **__result) throw ();

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
                        size_t __buflen, struct rpcent **__result) throw ();


}
# 34 "/usr/include/netdb.h" 2 3 4



# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 19 "/usr/include/bits/wordsize.h" 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4
# 39 "/usr/include/netdb.h" 2 3 4



# 1 "/usr/include/bits/netdb.h" 1 3 4
# 27 "/usr/include/bits/netdb.h" 3 4
struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};
# 44 "/usr/include/netdb.h" 2 3 4




extern "C" {





extern int *__h_errno_location (void) throw () __attribute__ ((__const__));

















extern void herror (__const char *__str) throw ();


extern __const char *hstrerror (int __err_num) throw ();




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;
};



extern void sethostent (int __stay_open) throw ();


extern void endhostent (void) throw ();



extern struct hostent *gethostent (void) throw ();



extern struct hostent *gethostbyaddr (__const void *__addr, __socklen_t __len,
                                      int __type) throw ();


extern struct hostent *gethostbyname (__const char *__name) throw ();





extern struct hostent *gethostbyname2 (__const char *__name, int __af) throw ();






extern int gethostent_r (struct hostent *__restrict __result_buf,
                         char *__restrict __buf, size_t __buflen,
                         struct hostent **__restrict __result,
                         int *__restrict __h_errnop) throw ();

extern int gethostbyaddr_r (__const void *__restrict __addr, __socklen_t __len,
                            int __type,
                            struct hostent *__restrict __result_buf,
                            char *__restrict __buf, size_t __buflen,
                            struct hostent **__restrict __result,
                            int *__restrict __h_errnop) throw ();

extern int gethostbyname_r (__const char *__restrict __name,
                            struct hostent *__restrict __result_buf,
                            char *__restrict __buf, size_t __buflen,
                            struct hostent **__restrict __result,
                            int *__restrict __h_errnop) throw ();

extern int gethostbyname2_r (__const char *__restrict __name, int __af,
                             struct hostent *__restrict __result_buf,
                             char *__restrict __buf, size_t __buflen,
                             struct hostent **__restrict __result,
                             int *__restrict __h_errnop) throw ();





extern void setnetent (int __stay_open) throw ();


extern void endnetent (void) throw ();



extern struct netent *getnetent (void) throw ();



extern struct netent *getnetbyaddr (uint32_t __net, int __type)
     throw ();


extern struct netent *getnetbyname (__const char *__name) throw ();







extern int getnetent_r (struct netent *__restrict __result_buf,
                        char *__restrict __buf, size_t __buflen,
                        struct netent **__restrict __result,
                        int *__restrict __h_errnop) throw ();

extern int getnetbyaddr_r (uint32_t __net, int __type,
                           struct netent *__restrict __result_buf,
                           char *__restrict __buf, size_t __buflen,
                           struct netent **__restrict __result,
                           int *__restrict __h_errnop) throw ();

extern int getnetbyname_r (__const char *__restrict __name,
                           struct netent *__restrict __result_buf,
                           char *__restrict __buf, size_t __buflen,
                           struct netent **__restrict __result,
                           int *__restrict __h_errnop) throw ();




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};



extern void setservent (int __stay_open) throw ();


extern void endservent (void) throw ();



extern struct servent *getservent (void) throw ();



extern struct servent *getservbyname (__const char *__name,
                                      __const char *__proto) throw ();



extern struct servent *getservbyport (int __port, __const char *__proto)
     throw ();





extern int getservent_r (struct servent *__restrict __result_buf,
                         char *__restrict __buf, size_t __buflen,
                         struct servent **__restrict __result) throw ();

extern int getservbyname_r (__const char *__restrict __name,
                            __const char *__restrict __proto,
                            struct servent *__restrict __result_buf,
                            char *__restrict __buf, size_t __buflen,
                            struct servent **__restrict __result) throw ();

extern int getservbyport_r (int __port, __const char *__restrict __proto,
                            struct servent *__restrict __result_buf,
                            char *__restrict __buf, size_t __buflen,
                            struct servent **__restrict __result) throw ();




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};



extern void setprotoent (int __stay_open) throw ();


extern void endprotoent (void) throw ();



extern struct protoent *getprotoent (void) throw ();


extern struct protoent *getprotobyname (__const char *__name) throw ();


extern struct protoent *getprotobynumber (int __proto) throw ();





extern int getprotoent_r (struct protoent *__restrict __result_buf,
                          char *__restrict __buf, size_t __buflen,
                          struct protoent **__restrict __result) throw ();

extern int getprotobyname_r (__const char *__restrict __name,
                             struct protoent *__restrict __result_buf,
                             char *__restrict __buf, size_t __buflen,
                             struct protoent **__restrict __result) throw ();

extern int getprotobynumber_r (int __proto,
                               struct protoent *__restrict __result_buf,
                               char *__restrict __buf, size_t __buflen,
                               struct protoent **__restrict __result) throw ();




extern int setnetgrent (__const char *__netgroup) throw ();


extern void endnetgrent (void) throw ();



extern int getnetgrent (char **__restrict __hostp,
                        char **__restrict __userp,
                        char **__restrict __domainp) throw ();



extern int innetgr (__const char *__netgroup, __const char *__host,
                    __const char *__user, __const char *domain) throw ();


extern int getnetgrent_r (char **__restrict __hostp,
                          char **__restrict __userp,
                          char **__restrict __domainp,
                          char *__restrict __buffer, size_t __buflen) throw ();
# 334 "/usr/include/netdb.h" 3 4
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
                 __const char *__restrict __locuser,
                 __const char *__restrict __remuser,
                 __const char *__restrict __cmd, int *__restrict __fd2p)
     throw ();



extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
                    __const char *__restrict __locuser,
                    __const char *__restrict __remuser,
                    __const char *__restrict __cmd, int *__restrict __fd2p,
                    sa_family_t __af) throw ();






extern int rexec (char **__restrict __ahost, int __rport,
                  __const char *__restrict __name,
                  __const char *__restrict __pass,
                  __const char *__restrict __cmd, int *__restrict __fd2p)
     throw ();



extern int rexec_af (char **__restrict __ahost, int __rport,
                     __const char *__restrict __name,
                     __const char *__restrict __pass,
                     __const char *__restrict __cmd, int *__restrict __fd2p,
                     sa_family_t __af) throw ();




extern int ruserok (__const char *__rhost, int __suser,
                    __const char *__remuser, __const char *__locuser) throw ();



extern int ruserok_af (__const char *__rhost, int __suser,
                       __const char *__remuser, __const char *__locuser,
                       sa_family_t __af) throw ();




extern int rresvport (int *__alport) throw ();



extern int rresvport_af (int *__alport, sa_family_t __af) throw ();






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};



struct gaicb
{
  const char *ar_name;
  const char *ar_service;
  const struct addrinfo *ar_request;
  struct addrinfo *ar_result;

  int __return;
  int __unused[5];
};














extern int getaddrinfo (__const char *__restrict __name,
                        __const char *__restrict __service,
                        __const struct addrinfo *__restrict __req,
                        struct addrinfo **__restrict __pai) throw ();


extern void freeaddrinfo (struct addrinfo *__ai) throw ();


extern __const char *gai_strerror (int __ecode) throw ();


extern int getnameinfo (__const struct sockaddr *__restrict __sa,
                        socklen_t __salen, char *__restrict __host,
                        socklen_t __hostlen, char *__restrict __serv,
                        socklen_t __servlen, unsigned int __flags) throw ();





extern int getaddrinfo_a (int __mode, struct gaicb *__list[],
                          int __ent, struct sigevent *__restrict __sig)
     throw ();




extern int gai_suspend (__const struct gaicb *__const __list[], int __ent,
                        __const struct timespec *__timeout) throw ();


extern int gai_error (struct gaicb *__req) throw ();


extern int gai_cancel (struct gaicb *__gaicbp) throw ();



}
# 101 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2


# 1 "/coolo/prod/kdelibs/kdecore/netwm.h" 1
# 28 "/coolo/prod/kdelibs/kdecore/netwm.h"




# 1 "/usr/X11R6/include/X11/Xlib.h" 1
# 36 "/usr/X11R6/include/X11/Xlib.h"

# 55 "/usr/X11R6/include/X11/Xlib.h"
# 1 "/usr/X11R6/include/X11/X.h" 1







# 58 "/usr/X11R6/include/X11/X.h"
# 70 "/usr/X11R6/include/X11/X.h"
typedef unsigned long XID;


typedef unsigned long Mask;


typedef unsigned long Atom;

typedef unsigned long VisualID;
typedef unsigned long Time;
# 101 "/usr/X11R6/include/X11/X.h"
typedef XID Window;
typedef XID Drawable;

typedef XID Font;

typedef XID Pixmap;
typedef XID Cursor;
typedef XID Colormap;
typedef XID GContext;
typedef XID KeySym;

typedef unsigned char KeyCode;





















# 155 "/usr/X11R6/include/X11/X.h"

































































# 369 "/usr/X11R6/include/X11/X.h"

# 387 "/usr/X11R6/include/X11/X.h"




















































































































































# 56 "/usr/X11R6/include/X11/Xlib.h" 2


# 1 "/usr/X11R6/include/X11/Xfuncproto.h" 1
# 32 "/usr/X11R6/include/X11/Xfuncproto.h"


























# 59 "/usr/X11R6/include/X11/Xlib.h" 2
# 1 "/usr/X11R6/include/X11/Xosdefs.h" 1
# 31 "/usr/X11R6/include/X11/Xosdefs.h"
# 60 "/usr/X11R6/include/X11/Xlib.h" 2
# 72 "/usr/X11R6/include/X11/Xlib.h"
# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 1 3 4
# 42 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4


# 140 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4



typedef int ptrdiff_t;
# 397 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
#undef NULL

# 414 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stddef.h" 3 4
# 73 "/usr/X11R6/include/X11/Xlib.h" 2
# 92 "/usr/X11R6/include/X11/Xlib.h"

typedef char *XPointer;













typedef struct _XExtData {
        int number;
        struct _XExtData *next;
        int (*free_private)(

        struct _XExtData *extension

        );
        XPointer private_data;
} XExtData;




typedef struct {
        int extension;
        int major_opcode;
        int first_event;
        int first_error;
} XExtCodes;





typedef struct {
    int depth;
    int bits_per_pixel;
    int scanline_pad;
} XPixmapFormatValues;





typedef struct {
        int function;
        unsigned long plane_mask;
        unsigned long foreground;
        unsigned long background;
        int line_width;
        int line_style;
        int cap_style;

        int join_style;
        int fill_style;

        int fill_rule;
        int arc_mode;
        Pixmap tile;
        Pixmap stipple;
        int ts_x_origin;
        int ts_y_origin;
        Font font;
        int subwindow_mode;
        int graphics_exposures;
        int clip_x_origin;
        int clip_y_origin;
        Pixmap clip_mask;
        int dash_offset;
        char dashes;
} XGCValues;






typedef struct _XGC







*GC;




typedef struct {
        XExtData *ext_data;
        VisualID visualid;

        int c_class;



        unsigned long red_mask, green_mask, blue_mask;
        int bits_per_rgb;
        int map_entries;
} Visual;




typedef struct {
        int depth;
        int nvisuals;
        Visual *visuals;
} Depth;







struct _XDisplay;

typedef struct {
        XExtData *ext_data;
        struct _XDisplay *display;
        Window root;
        int width, height;
        int mwidth, mheight;
        int ndepths;
        Depth *depths;
        int root_depth;
        Visual *root_visual;
        GC default_gc;
        Colormap cmap;
        unsigned long white_pixel;
        unsigned long black_pixel;
        int max_maps, min_maps;
        int backing_store;
        int save_unders;
        long root_input_mask;
} Screen;




typedef struct {
        XExtData *ext_data;
        int depth;
        int bits_per_pixel;
        int scanline_pad;
} ScreenFormat;




typedef struct {
    Pixmap background_pixmap;
    unsigned long background_pixel;
    Pixmap border_pixmap;
    unsigned long border_pixel;
    int bit_gravity;
    int win_gravity;
    int backing_store;
    unsigned long backing_planes;
    unsigned long backing_pixel;
    int save_under;
    long event_mask;
    long do_not_propagate_mask;
    int override_redirect;
    Colormap colormap;
    Cursor cursor;
} XSetWindowAttributes;

typedef struct {
    int x, y;
    int width, height;
    int border_width;
    int depth;
    Visual *visual;
    Window root;

    int c_class;



    int bit_gravity;
    int win_gravity;
    int backing_store;
    unsigned long backing_planes;
    unsigned long backing_pixel;
    int save_under;
    Colormap colormap;
    int map_installed;
    int map_state;
    long all_event_masks;
    long your_event_mask;
    long do_not_propagate_mask;
    int override_redirect;
    Screen *screen;
} XWindowAttributes;






typedef struct {
        int family;
        int length;
        char *address;
} XHostAddress;




typedef struct _XImage {
    int width, height;
    int xoffset;
    int format;
    char *data;
    int byte_order;
    int bitmap_unit;
    int bitmap_bit_order;
    int bitmap_pad;
    int depth;
    int bytes_per_line;
    int bits_per_pixel;
    unsigned long red_mask;
    unsigned long green_mask;
    unsigned long blue_mask;
    XPointer obdata;
    struct funcs {

        struct _XImage *(*create_image)(
                struct _XDisplay* ,
                Visual* ,
                unsigned int ,
                int ,
                int ,
                char* ,
                unsigned int ,
                unsigned int ,
                int ,
                int );
        int (*destroy_image) (struct _XImage *);
        unsigned long (*get_pixel) (struct _XImage *, int, int);
        int (*put_pixel) (struct _XImage *, int, int, unsigned long);
        struct _XImage *(*sub_image)(struct _XImage *, int, int, unsigned int, unsigned int);
        int (*add_pixel) (struct _XImage *, long);
# 412 "/usr/X11R6/include/X11/Xlib.h"
        } f;
} XImage;




typedef struct {
    int x, y;
    int width, height;
    int border_width;
    Window sibling;
    int stack_mode;
} XWindowChanges;




typedef struct {
        unsigned long pixel;
        unsigned short red, green, blue;
        char flags;
        char pad;
} XColor;






typedef struct {
    short x1, y1, x2, y2;
} XSegment;

typedef struct {
    short x, y;
} XPoint;

typedef struct {
    short x, y;
    unsigned short width, height;
} XRectangle;

typedef struct {
    short x, y;
    unsigned short width, height;
    short angle1, angle2;
} XArc;




typedef struct {
        int key_click_percent;
        int bell_percent;
        int bell_pitch;
        int bell_duration;
        int led;
        int led_mode;
        int key;
        int auto_repeat_mode;
} XKeyboardControl;



typedef struct {
        int key_click_percent;
        int bell_percent;
        unsigned int bell_pitch, bell_duration;
        unsigned long led_mask;
        int global_auto_repeat;
        char auto_repeats[32];
} XKeyboardState;



typedef struct {
        Time time;
        short x, y;
} XTimeCoord;



typedef struct {
        int max_keypermod;
        KeyCode *modifiermap;
} XModifierKeymap;
# 506 "/usr/X11R6/include/X11/Xlib.h"
typedef struct _XDisplay Display;


struct _XPrivate;
struct _XrmHashBucketRec;

typedef struct



{
        XExtData *ext_data;
        struct _XPrivate *private1;
        int fd;
        int private2;
        int proto_major_version;
        int proto_minor_version;
        char *vendor;
        XID private3;
        XID private4;
        XID private5;
        int private6;
        XID (*resource_alloc)(

                struct _XDisplay*

        );
        int byte_order;
        int bitmap_unit;
        int bitmap_pad;
        int bitmap_bit_order;
        int nformats;
        ScreenFormat *pixmap_format;
        int private8;
        int release;
        struct _XPrivate *private9, *private10;
        int qlen;
        unsigned long last_request_read;
        unsigned long request;
        XPointer private11;
        XPointer private12;
        XPointer private13;
        XPointer private14;
        unsigned max_request_size;
        struct _XrmHashBucketRec *db;
        int (*private15)(

                struct _XDisplay*

                );
        char *display_name;
        int default_screen;
        int nscreens;
        Screen *screens;
        unsigned long motion_buffer;
        unsigned long private16;
        int min_keycode;
        int max_keycode;
        XPointer private17;
        XPointer private18;
        int private19;
        char *xdefaults;

}



*_XPrivDisplay;
# 582 "/usr/X11R6/include/X11/Xlib.h"
typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        Window root;
        Window subwindow;
        Time time;
        int x, y;
        int x_root, y_root;
        unsigned int state;
        unsigned int keycode;
        int same_screen;
} XKeyEvent;
typedef XKeyEvent XKeyPressedEvent;
typedef XKeyEvent XKeyReleasedEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        Window root;
        Window subwindow;
        Time time;
        int x, y;
        int x_root, y_root;
        unsigned int state;
        unsigned int button;
        int same_screen;
} XButtonEvent;
typedef XButtonEvent XButtonPressedEvent;
typedef XButtonEvent XButtonReleasedEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        Window root;
        Window subwindow;
        Time time;
        int x, y;
        int x_root, y_root;
        unsigned int state;
        char is_hint;
        int same_screen;
} XMotionEvent;
typedef XMotionEvent XPointerMovedEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        Window root;
        Window subwindow;
        Time time;
        int x, y;
        int x_root, y_root;
        int mode;
        int detail;




        int same_screen;
        int focus;
        unsigned int state;
} XCrossingEvent;
typedef XCrossingEvent XEnterWindowEvent;
typedef XCrossingEvent XLeaveWindowEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        int mode;
        int detail;





} XFocusChangeEvent;
typedef XFocusChangeEvent XFocusInEvent;
typedef XFocusChangeEvent XFocusOutEvent;


typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        char key_vector[32];
} XKeymapEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        int x, y;
        int width, height;
        int count;
} XExposeEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Drawable drawable;
        int x, y;
        int width, height;
        int count;
        int major_code;
        int minor_code;
} XGraphicsExposeEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Drawable drawable;
        int major_code;
        int minor_code;
} XNoExposeEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        int state;
} XVisibilityEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window parent;
        Window window;
        int x, y;
        int width, height;
        int border_width;
        int override_redirect;
} XCreateWindowEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window event;
        Window window;
} XDestroyWindowEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window event;
        Window window;
        int from_configure;
} XUnmapEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window event;
        Window window;
        int override_redirect;
} XMapEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window parent;
        Window window;
} XMapRequestEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window event;
        Window window;
        Window parent;
        int x, y;
        int override_redirect;
} XReparentEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window event;
        Window window;
        int x, y;
        int width, height;
        int border_width;
        Window above;
        int override_redirect;
} XConfigureEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window event;
        Window window;
        int x, y;
} XGravityEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        int width, height;
} XResizeRequestEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window parent;
        Window window;
        int x, y;
        int width, height;
        int border_width;
        Window above;
        int detail;
        unsigned long value_mask;
} XConfigureRequestEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window event;
        Window window;
        int place;
} XCirculateEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window parent;
        Window window;
        int place;
} XCirculateRequestEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        Atom atom;
        Time time;
        int state;
} XPropertyEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        Atom selection;
        Time time;
} XSelectionClearEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window owner;
        Window requestor;
        Atom selection;
        Atom target;
        Atom property;
        Time time;
} XSelectionRequestEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window requestor;
        Atom selection;
        Atom target;
        Atom property;
        Time time;
} XSelectionEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        Colormap colormap;

        int c_new;



        int state;
} XColormapEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        Atom message_type;
        int format;
        union {
                char b[20];
                short s[10];
                long l[5];
                } data;
} XClientMessageEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
        int request;

        int first_keycode;
        int count;
} XMappingEvent;

typedef struct {
        int type;
        Display *display;
        XID resourceid;
        unsigned long serial;
        unsigned char error_code;
        unsigned char request_code;
        unsigned char minor_code;
} XErrorEvent;

typedef struct {
        int type;
        unsigned long serial;
        int send_event;
        Display *display;
        Window window;
} XAnyEvent;





typedef union _XEvent {
        int type;
        XAnyEvent xany;
        XKeyEvent xkey;
        XButtonEvent xbutton;
        XMotionEvent xmotion;
        XCrossingEvent xcrossing;
        XFocusChangeEvent xfocus;
        XExposeEvent xexpose;
        XGraphicsExposeEvent xgraphicsexpose;
        XNoExposeEvent xnoexpose;
        XVisibilityEvent xvisibility;
        XCreateWindowEvent xcreatewindow;
        XDestroyWindowEvent xdestroywindow;
        XUnmapEvent xunmap;
        XMapEvent xmap;
        XMapRequestEvent xmaprequest;
        XReparentEvent xreparent;
        XConfigureEvent xconfigure;
        XGravityEvent xgravity;
        XResizeRequestEvent xresizerequest;
        XConfigureRequestEvent xconfigurerequest;
        XCirculateEvent xcirculate;
        XCirculateRequestEvent xcirculaterequest;
        XPropertyEvent xproperty;
        XSelectionClearEvent xselectionclear;
        XSelectionRequestEvent xselectionrequest;
        XSelectionEvent xselection;
        XColormapEvent xcolormap;
        XClientMessageEvent xclient;
        XMappingEvent xmapping;
        XErrorEvent xerror;
        XKeymapEvent xkeymap;
        long pad[24];
} XEvent;






typedef struct {
    short lbearing;
    short rbearing;
    short width;
    short ascent;
    short descent;
    unsigned short attributes;
} XCharStruct;





typedef struct {
    Atom name;
    unsigned long card32;
} XFontProp;

typedef struct {
    XExtData *ext_data;
    Font fid;
    unsigned direction;
    unsigned min_char_or_byte2;
    unsigned max_char_or_byte2;
    unsigned min_byte1;
    unsigned max_byte1;
    int all_chars_exist;
    unsigned default_char;
    int n_properties;
    XFontProp *properties;
    XCharStruct min_bounds;
    XCharStruct max_bounds;
    XCharStruct *per_char;
    int ascent;
    int descent;
} XFontStruct;




typedef struct {
    char *chars;
    int nchars;
    int delta;
    Font font;
} XTextItem;

typedef struct {
    unsigned char byte1;
    unsigned char byte2;
} XChar2b;

typedef struct {
    XChar2b *chars;
    int nchars;
    int delta;
    Font font;
} XTextItem16;


typedef union { Display *display;
                GC gc;
                Visual *visual;
                Screen *screen;
                ScreenFormat *pixmap_format;
                XFontStruct *font; } XEDataObject;

typedef struct {
    XRectangle max_ink_extent;
    XRectangle max_logical_extent;
} XFontSetExtents;





typedef struct _XOM *XOM;
typedef struct _XOC *XOC, *XFontSet;

typedef struct {
    char *chars;
    int nchars;
    int delta;
    XFontSet font_set;
} XmbTextItem;

typedef struct {
    wchar_t *chars;
    int nchars;
    int delta;
    XFontSet font_set;
} XwcTextItem;


typedef struct {
    int charset_count;
    char **charset_list;
} XOMCharSetList;

typedef enum {
    XOMOrientation_LTR_TTB,
    XOMOrientation_RTL_TTB,
    XOMOrientation_TTB_LTR,
    XOMOrientation_TTB_RTL,
    XOMOrientation_Context
} XOrientation;

typedef struct {
    int num_orientation;
    XOrientation *orientation;
} XOMOrientation;

typedef struct {
    int num_font;
    XFontStruct **font_struct_list;
    char **font_name_list;
} XOMFontInfo;

typedef struct _XIM *XIM;
typedef struct _XIC *XIC;

typedef void (*XIMProc)(

    XIM,
    XPointer,
    XPointer

);

typedef int (*XICProc)(

    XIC,
    XPointer,
    XPointer

);

typedef void (*XIDProc)(

    Display*,
    XPointer,
    XPointer

);

typedef unsigned long XIMStyle;

typedef struct {
    unsigned short count_styles;
    XIMStyle *supported_styles;
} XIMStyles;






typedef void *XVaNestedList;




typedef struct {
    XPointer client_data;
    XIMProc callback;
} XIMCallback;

typedef struct {
    XPointer client_data;
    XICProc callback;
} XICCallback;

typedef unsigned long XIMFeedback;


typedef struct _XIMText {
    unsigned short length;
    XIMFeedback *feedback;
    int encoding_is_wchar;
    union {
        char *multi_byte;
        wchar_t *wide_char;
    } string;
} XIMText;

typedef unsigned long XIMPreeditState;


typedef struct _XIMPreeditStateNotifyCallbackStruct {
    XIMPreeditState state;
} XIMPreeditStateNotifyCallbackStruct;

typedef unsigned long XIMResetState;


typedef unsigned long XIMStringConversionFeedback;


typedef struct _XIMStringConversionText {
    unsigned short length;
    XIMStringConversionFeedback *feedback;
    int encoding_is_wchar;
    union {
        char *mbs;
        wchar_t *wcs;
    } string;
} XIMStringConversionText;

typedef unsigned short XIMStringConversionPosition;

typedef unsigned short XIMStringConversionType;


typedef unsigned short XIMStringConversionOperation;


typedef enum {
    XIMForwardChar, XIMBackwardChar,
    XIMForwardWord, XIMBackwardWord,
    XIMCaretUp, XIMCaretDown,
    XIMNextLine, XIMPreviousLine,
    XIMLineStart, XIMLineEnd,
    XIMAbsolutePosition,
    XIMDontChange
} XIMCaretDirection;

typedef struct _XIMStringConversionCallbackStruct {
    XIMStringConversionPosition position;
    XIMCaretDirection direction;
    XIMStringConversionOperation operation;
    unsigned short factor;
    XIMStringConversionText *text;
} XIMStringConversionCallbackStruct;

typedef struct _XIMPreeditDrawCallbackStruct {
    int caret;
    int chg_first;
    int chg_length;
    XIMText *text;
} XIMPreeditDrawCallbackStruct;

typedef enum {
    XIMIsInvisible,
    XIMIsPrimary,
    XIMIsSecondary
} XIMCaretStyle;

typedef struct _XIMPreeditCaretCallbackStruct {
    int position;
    XIMCaretDirection direction;
    XIMCaretStyle style;
} XIMPreeditCaretCallbackStruct;

typedef enum {
    XIMTextType,
    XIMBitmapType
} XIMStatusDataType;

typedef struct _XIMStatusDrawCallbackStruct {
    XIMStatusDataType type;
    union {
        XIMText *text;
        Pixmap bitmap;
    } data;
} XIMStatusDrawCallbackStruct;

typedef struct _XIMHotKeyTrigger {
    KeySym keysym;
    int modifier;
    int modifier_mask;
} XIMHotKeyTrigger;

typedef struct _XIMHotKeyTriggers {
    int num_hot_key;
    XIMHotKeyTrigger *key;
} XIMHotKeyTriggers;

typedef unsigned long XIMHotKeyState;


typedef struct {
    unsigned short count_values;
    char **supported_values;
} XIMValuesList;

extern "C" {





extern int _Xdebug;

extern XFontStruct *XLoadQueryFont(

    Display* ,
    const char*

);

extern XFontStruct *XQueryFont(

    Display* ,
    XID

);


extern XTimeCoord *XGetMotionEvents(

    Display* ,
    Window ,
    Time ,
    Time ,
    int*

);

extern XModifierKeymap *XDeleteModifiermapEntry(

    XModifierKeymap* ,

    unsigned int ,



    int

);

extern XModifierKeymap *XGetModifierMapping(

    Display*

);

extern XModifierKeymap *XInsertModifiermapEntry(

    XModifierKeymap* ,

    unsigned int ,



    int

);

extern XModifierKeymap *XNewModifiermap(

    int

);

extern XImage *XCreateImage(

    Display* ,
    Visual* ,
    unsigned int ,
    int ,
    int ,
    char* ,
    unsigned int ,
    unsigned int ,
    int ,
    int

);
extern int XInitImage(

    XImage*

);
extern XImage *XGetImage(

    Display* ,
    Drawable ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    int

);
extern XImage *XGetSubImage(

    Display* ,
    Drawable ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    int ,
    XImage* ,
    int ,
    int

);




extern Display *XOpenDisplay(

    const char*

);

extern void XrmInitialize(

    void

);

extern char *XFetchBytes(

    Display* ,
    int*

);
extern char *XFetchBuffer(

    Display* ,
    int* ,
    int

);
extern char *XGetAtomName(

    Display* ,
    Atom

);
extern int XGetAtomNames(

    Display* ,
    Atom* ,
    int ,
    char**

);
extern char *XGetDefault(

    Display* ,
    const char* ,
    const char*

);
extern char *XDisplayName(

    const char*

);
extern char *XKeysymToString(

    KeySym

);

extern int (*XSynchronize(

    Display* ,
    int

))(

    Display*

);
extern int (*XSetAfterFunction(

    Display* ,
    int (*) (

             Display*

            )

))(

    Display*

);
extern Atom XInternAtom(

    Display* ,
    const char* ,
    int

);
extern int XInternAtoms(

    Display* ,
    char** ,
    int ,
    int ,
    Atom*

);
extern Colormap XCopyColormapAndFree(

    Display* ,
    Colormap

);
extern Colormap XCreateColormap(

    Display* ,
    Window ,
    Visual* ,
    int

);
extern Cursor XCreatePixmapCursor(

    Display* ,
    Pixmap ,
    Pixmap ,
    XColor* ,
    XColor* ,
    unsigned int ,
    unsigned int

);
extern Cursor XCreateGlyphCursor(

    Display* ,
    Font ,
    Font ,
    unsigned int ,
    unsigned int ,
    XColor const * ,
    XColor const *

);
extern Cursor XCreateFontCursor(

    Display* ,
    unsigned int

);
extern Font XLoadFont(

    Display* ,
    const char*

);
extern GC XCreateGC(

    Display* ,
    Drawable ,
    unsigned long ,
    XGCValues*

);
extern GContext XGContextFromGC(

    GC

);
extern void XFlushGC(

    Display* ,
    GC

);
extern Pixmap XCreatePixmap(

    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int

);
extern Pixmap XCreateBitmapFromData(

    Display* ,
    Drawable ,
    const char* ,
    unsigned int ,
    unsigned int

);
extern Pixmap XCreatePixmapFromBitmapData(

    Display* ,
    Drawable ,
    char* ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    unsigned long ,
    unsigned int

);
extern Window XCreateSimpleWindow(

    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    unsigned long ,
    unsigned long

);
extern Window XGetSelectionOwner(

    Display* ,
    Atom

);
extern Window XCreateWindow(

    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    int ,
    unsigned int ,
    Visual* ,
    unsigned long ,
    XSetWindowAttributes*

);
extern Colormap *XListInstalledColormaps(

    Display* ,
    Window ,
    int*

);
extern char **XListFonts(

    Display* ,
    const char* ,
    int ,
    int*

);
extern char **XListFontsWithInfo(

    Display* ,
    const char* ,
    int ,
    int* ,
    XFontStruct**

);
extern char **XGetFontPath(

    Display* ,
    int*

);
extern char **XListExtensions(

    Display* ,
    int*

);
extern Atom *XListProperties(

    Display* ,
    Window ,
    int*

);
extern XHostAddress *XListHosts(

    Display* ,
    int* ,
    int*

);
extern KeySym XKeycodeToKeysym(

    Display* ,

    unsigned int ,



    int

);
extern KeySym XLookupKeysym(

    XKeyEvent* ,
    int

);
extern KeySym *XGetKeyboardMapping(

    Display* ,

    unsigned int ,



    int ,
    int*

);
extern KeySym XStringToKeysym(

    const char*

);
extern long XMaxRequestSize(

    Display*

);
extern long XExtendedMaxRequestSize(

    Display*

);
extern char *XResourceManagerString(

    Display*

);
extern char *XScreenResourceString(

        Screen*

);
extern unsigned long XDisplayMotionBufferSize(

    Display*

);
extern VisualID XVisualIDFromVisual(

    Visual*

);



extern int XInitThreads(

    void

);

extern void XLockDisplay(

    Display*

);

extern void XUnlockDisplay(

    Display*

);



extern XExtCodes *XInitExtension(

    Display* ,
    const char*

);

extern XExtCodes *XAddExtension(

    Display*

);
extern XExtData *XFindOnExtensionList(

    XExtData** ,
    int

);
extern XExtData **XEHeadOfExtensionList(

    XEDataObject

);


extern Window XRootWindow(

    Display* ,
    int

);
extern Window XDefaultRootWindow(

    Display*

);
extern Window XRootWindowOfScreen(

    Screen*

);
extern Visual *XDefaultVisual(

    Display* ,
    int

);
extern Visual *XDefaultVisualOfScreen(

    Screen*

);
extern GC XDefaultGC(

    Display* ,
    int

);
extern GC XDefaultGCOfScreen(

    Screen*

);
extern unsigned long XBlackPixel(

    Display* ,
    int

);
extern unsigned long XWhitePixel(

    Display* ,
    int

);
extern unsigned long XAllPlanes(

    void

);
extern unsigned long XBlackPixelOfScreen(

    Screen*

);
extern unsigned long XWhitePixelOfScreen(

    Screen*

);
extern unsigned long XNextRequest(

    Display*

);
extern unsigned long XLastKnownRequestProcessed(

    Display*

);
extern char *XServerVendor(

    Display*

);
extern char *XDisplayString(

    Display*

);
extern Colormap XDefaultColormap(

    Display* ,
    int

);
extern Colormap XDefaultColormapOfScreen(

    Screen*

);
extern Display *XDisplayOfScreen(

    Screen*

);
extern Screen *XScreenOfDisplay(

    Display* ,
    int

);
extern Screen *XDefaultScreenOfDisplay(

    Display*

);
extern long XEventMaskOfScreen(

    Screen*

);

extern int XScreenNumberOfScreen(

    Screen*

);

typedef int (*XErrorHandler) (

    Display* ,
    XErrorEvent*

);

extern XErrorHandler XSetErrorHandler (

    XErrorHandler

);


typedef int (*XIOErrorHandler) (

    Display*

);

extern XIOErrorHandler XSetIOErrorHandler (

    XIOErrorHandler

);


extern XPixmapFormatValues *XListPixmapFormats(

    Display* ,
    int*

);
extern int *XListDepths(

    Display* ,
    int ,
    int*

);



extern int XReconfigureWMWindow(

    Display* ,
    Window ,
    int ,
    unsigned int ,
    XWindowChanges*

);

extern int XGetWMProtocols(

    Display* ,
    Window ,
    Atom** ,
    int*

);
extern int XSetWMProtocols(

    Display* ,
    Window ,
    Atom* ,
    int

);
extern int XIconifyWindow(

    Display* ,
    Window ,
    int

);
extern int XWithdrawWindow(

    Display* ,
    Window ,
    int

);
extern int XGetCommand(

    Display* ,
    Window ,
    char*** ,
    int*

);
extern int XGetWMColormapWindows(

    Display* ,
    Window ,
    Window** ,
    int*

);
extern int XSetWMColormapWindows(

    Display* ,
    Window ,
    Window* ,
    int

);
extern void XFreeStringList(

    char**

);
extern int XSetTransientForHint(

    Display* ,
    Window ,
    Window

);



extern int XActivateScreenSaver(

    Display*

);

extern int XAddHost(

    Display* ,
    XHostAddress*

);

extern int XAddHosts(

    Display* ,
    XHostAddress* ,
    int

);

extern int XAddToExtensionList(

    struct _XExtData** ,
    XExtData*

);

extern int XAddToSaveSet(

    Display* ,
    Window

);

extern int XAllocColor(

    Display* ,
    Colormap ,
    XColor*

);

extern int XAllocColorCells(

    Display* ,
    Colormap ,
    int ,
    unsigned long* ,
    unsigned int ,
    unsigned long* ,
    unsigned int

);

extern int XAllocColorPlanes(

    Display* ,
    Colormap ,
    int ,
    unsigned long* ,
    int ,
    int ,
    int ,
    int ,
    unsigned long* ,
    unsigned long* ,
    unsigned long*

);

extern int XAllocNamedColor(

    Display* ,
    Colormap ,
    const char* ,
    XColor* ,
    XColor*

);

extern int XAllowEvents(

    Display* ,
    int ,
    Time

);

extern int XAutoRepeatOff(

    Display*

);

extern int XAutoRepeatOn(

    Display*

);

extern int XBell(

    Display* ,
    int

);

extern int XBitmapBitOrder(

    Display*

);

extern int XBitmapPad(

    Display*

);

extern int XBitmapUnit(

    Display*

);

extern int XCellsOfScreen(

    Screen*

);

extern int XChangeActivePointerGrab(

    Display* ,
    unsigned int ,
    Cursor ,
    Time

);

extern int XChangeGC(

    Display* ,
    GC ,
    unsigned long ,
    XGCValues*

);

extern int XChangeKeyboardControl(

    Display* ,
    unsigned long ,
    XKeyboardControl*

);

extern int XChangeKeyboardMapping(

    Display* ,
    int ,
    int ,
    KeySym* ,
    int

);

extern int XChangePointerControl(

    Display* ,
    int ,
    int ,
    int ,
    int ,
    int

);

extern int XChangeProperty(

    Display* ,
    Window ,
    Atom ,
    Atom ,
    int ,
    int ,
    const unsigned char* ,
    int

);

extern int XChangeSaveSet(

    Display* ,
    Window ,
    int

);

extern int XChangeWindowAttributes(

    Display* ,
    Window ,
    unsigned long ,
    XSetWindowAttributes*

);

extern int XCheckIfEvent(

    Display* ,
    XEvent* ,
    int (*) (

               Display* ,
               XEvent* ,
               XPointer

             ) ,
    XPointer

);

extern int XCheckMaskEvent(

    Display* ,
    long ,
    XEvent*

);

extern int XCheckTypedEvent(

    Display* ,
    int ,
    XEvent*

);

extern int XCheckTypedWindowEvent(

    Display* ,
    Window ,
    int ,
    XEvent*

);

extern int XCheckWindowEvent(

    Display* ,
    Window ,
    long ,
    XEvent*

);

extern int XCirculateSubwindows(

    Display* ,
    Window ,
    int

);

extern int XCirculateSubwindowsDown(

    Display* ,
    Window

);

extern int XCirculateSubwindowsUp(

    Display* ,
    Window

);

extern int XClearArea(

    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int

);

extern int XClearWindow(

    Display* ,
    Window

);

extern int XCloseDisplay(

    Display*

);

extern int XConfigureWindow(

    Display* ,
    Window ,
    unsigned int ,
    XWindowChanges*

);

extern int XConnectionNumber(

    Display*

);

extern int XConvertSelection(

    Display* ,
    Atom ,
    Atom ,
    Atom ,
    Window ,
    Time

);

extern int XCopyArea(

    Display* ,
    Drawable ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int

);

extern int XCopyGC(

    Display* ,
    GC ,
    unsigned long ,
    GC

);

extern int XCopyPlane(

    Display* ,
    Drawable ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int ,
    unsigned long

);

extern int XDefaultDepth(

    Display* ,
    int

);

extern int XDefaultDepthOfScreen(

    Screen*

);

extern int XDefaultScreen(

    Display*

);

extern int XDefineCursor(

    Display* ,
    Window ,
    Cursor

);

extern int XDeleteProperty(

    Display* ,
    Window ,
    Atom

);

extern int XDestroyWindow(

    Display* ,
    Window

);

extern int XDestroySubwindows(

    Display* ,
    Window

);

extern int XDoesBackingStore(

    Screen*

);

extern int XDoesSaveUnders(

    Screen*

);

extern int XDisableAccessControl(

    Display*

);


extern int XDisplayCells(

    Display* ,
    int

);

extern int XDisplayHeight(

    Display* ,
    int

);

extern int XDisplayHeightMM(

    Display* ,
    int

);

extern int XDisplayKeycodes(

    Display* ,
    int* ,
    int*

);

extern int XDisplayPlanes(

    Display* ,
    int

);

extern int XDisplayWidth(

    Display* ,
    int

);

extern int XDisplayWidthMM(

    Display* ,
    int

);

extern int XDrawArc(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int

);

extern int XDrawArcs(

    Display* ,
    Drawable ,
    GC ,
    XArc* ,
    int

);

extern int XDrawImageString(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const char* ,
    int

);

extern int XDrawImageString16(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const XChar2b* ,
    int

);

extern int XDrawLine(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    int ,
    int

);

extern int XDrawLines(

    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int

);

extern int XDrawPoint(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int

);

extern int XDrawPoints(

    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int

);

extern int XDrawRectangle(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int

);

extern int XDrawRectangles(

    Display* ,
    Drawable ,
    GC ,
    XRectangle* ,
    int

);

extern int XDrawSegments(

    Display* ,
    Drawable ,
    GC ,
    XSegment* ,
    int

);

extern int XDrawString(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const char* ,
    int

);

extern int XDrawString16(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    const XChar2b* ,
    int

);

extern int XDrawText(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XTextItem* ,
    int

);

extern int XDrawText16(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XTextItem16* ,
    int

);

extern int XEnableAccessControl(

    Display*

);

extern int XEventsQueued(

    Display* ,
    int

);

extern int XFetchName(

    Display* ,
    Window ,
    char**

);

extern int XFillArc(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int

);

extern int XFillArcs(

    Display* ,
    Drawable ,
    GC ,
    XArc* ,
    int

);

extern int XFillPolygon(

    Display* ,
    Drawable ,
    GC ,
    XPoint* ,
    int ,
    int ,
    int

);

extern int XFillRectangle(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    unsigned int ,
    unsigned int

);

extern int XFillRectangles(

    Display* ,
    Drawable ,
    GC ,
    XRectangle* ,
    int

);

extern int XFlush(

    Display*

);

extern int XForceScreenSaver(

    Display* ,
    int

);

extern int XFree(

    void*

);

extern int XFreeColormap(

    Display* ,
    Colormap

);

extern int XFreeColors(

    Display* ,
    Colormap ,
    unsigned long* ,
    int ,
    unsigned long

);

extern int XFreeCursor(

    Display* ,
    Cursor

);

extern int XFreeExtensionList(

    char**

);

extern int XFreeFont(

    Display* ,
    XFontStruct*

);

extern int XFreeFontInfo(

    char** ,
    XFontStruct* ,
    int

);

extern int XFreeFontNames(

    char**

);

extern int XFreeFontPath(

    char**

);

extern int XFreeGC(

    Display* ,
    GC

);

extern int XFreeModifiermap(

    XModifierKeymap*

);

extern int XFreePixmap(

    Display* ,
    Pixmap

);

extern int XGeometry(

    Display* ,
    int ,
    const char* ,
    const char* ,
    unsigned int ,
    unsigned int ,
    unsigned int ,
    int ,
    int ,
    int* ,
    int* ,
    int* ,
    int*

);

extern int XGetErrorDatabaseText(

    Display* ,
    const char* ,
    const char* ,
    const char* ,
    char* ,
    int

);

extern int XGetErrorText(

    Display* ,
    int ,
    char* ,
    int

);

extern int XGetFontProperty(

    XFontStruct* ,
    Atom ,
    unsigned long*

);

extern int XGetGCValues(

    Display* ,
    GC ,
    unsigned long ,
    XGCValues*

);

extern int XGetGeometry(

    Display* ,
    Drawable ,
    Window* ,
    int* ,
    int* ,
    unsigned int* ,
    unsigned int* ,
    unsigned int* ,
    unsigned int*

);

extern int XGetIconName(

    Display* ,
    Window ,
    char**

);

extern int XGetInputFocus(

    Display* ,
    Window* ,
    int*

);

extern int XGetKeyboardControl(

    Display* ,
    XKeyboardState*

);

extern int XGetPointerControl(

    Display* ,
    int* ,
    int* ,
    int*

);

extern int XGetPointerMapping(

    Display* ,
    unsigned char* ,
    int

);

extern int XGetScreenSaver(

    Display* ,
    int* ,
    int* ,
    int* ,
    int*

);

extern int XGetTransientForHint(

    Display* ,
    Window ,
    Window*

);

extern int XGetWindowProperty(

    Display* ,
    Window ,
    Atom ,
    long ,
    long ,
    int ,
    Atom ,
    Atom* ,
    int* ,
    unsigned long* ,
    unsigned long* ,
    unsigned char**

);

extern int XGetWindowAttributes(

    Display* ,
    Window ,
    XWindowAttributes*

);

extern int XGrabButton(

    Display* ,
    unsigned int ,
    unsigned int ,
    Window ,
    int ,
    unsigned int ,
    int ,
    int ,
    Window ,
    Cursor

);

extern int XGrabKey(

    Display* ,
    int ,
    unsigned int ,
    Window ,
    int ,
    int ,
    int

);

extern int XGrabKeyboard(

    Display* ,
    Window ,
    int ,
    int ,
    int ,
    Time

);

extern int XGrabPointer(

    Display* ,
    Window ,
    int ,
    unsigned int ,
    int ,
    int ,
    Window ,
    Cursor ,
    Time

);

extern int XGrabServer(

    Display*

);

extern int XHeightMMOfScreen(

    Screen*

);

extern int XHeightOfScreen(

    Screen*

);

extern int XIfEvent(

    Display* ,
    XEvent* ,
    int (*) (

               Display* ,
               XEvent* ,
               XPointer

             ) ,
    XPointer

);

extern int XImageByteOrder(

    Display*

);

extern int XInstallColormap(

    Display* ,
    Colormap

);

extern KeyCode XKeysymToKeycode(

    Display* ,
    KeySym

);

extern int XKillClient(

    Display* ,
    XID

);

extern int XLookupColor(

    Display* ,
    Colormap ,
    const char* ,
    XColor* ,
    XColor*

);

extern int XLowerWindow(

    Display* ,
    Window

);

extern int XMapRaised(

    Display* ,
    Window

);

extern int XMapSubwindows(

    Display* ,
    Window

);

extern int XMapWindow(

    Display* ,
    Window

);

extern int XMaskEvent(

    Display* ,
    long ,
    XEvent*

);

extern int XMaxCmapsOfScreen(

    Screen*

);

extern int XMinCmapsOfScreen(

    Screen*

);

extern int XMoveResizeWindow(

    Display* ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int

);

extern int XMoveWindow(

    Display* ,
    Window ,
    int ,
    int

);

extern int XNextEvent(

    Display* ,
    XEvent*

);

extern int XNoOp(

    Display*

);

extern int XParseColor(

    Display* ,
    Colormap ,
    const char* ,
    XColor*

);

extern int XParseGeometry(

    const char* ,
    int* ,
    int* ,
    unsigned int* ,
    unsigned int*

);

extern int XPeekEvent(

    Display* ,
    XEvent*

);

extern int XPeekIfEvent(

    Display* ,
    XEvent* ,
    int (*) (

               Display* ,
               XEvent* ,
               XPointer

             ) ,
    XPointer

);

extern int XPending(

    Display*

);

extern int XPlanesOfScreen(

    Screen*


);

extern int XProtocolRevision(

    Display*

);

extern int XProtocolVersion(

    Display*

);


extern int XPutBackEvent(

    Display* ,
    XEvent*

);

extern int XPutImage(

    Display* ,
    Drawable ,
    GC ,
    XImage* ,
    int ,
    int ,
    int ,
    int ,
    unsigned int ,
    unsigned int

);

extern int XQLength(

    Display*

);

extern int XQueryBestCursor(

    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*

);

extern int XQueryBestSize(

    Display* ,
    int ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*

);

extern int XQueryBestStipple(

    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*

);

extern int XQueryBestTile(

    Display* ,
    Drawable ,
    unsigned int ,
    unsigned int ,
    unsigned int* ,
    unsigned int*

);

extern int XQueryColor(

    Display* ,
    Colormap ,
    XColor*

);

extern int XQueryColors(

    Display* ,
    Colormap ,
    XColor* ,
    int

);

extern int XQueryExtension(

    Display* ,
    const char* ,
    int* ,
    int* ,
    int*

);

extern int XQueryKeymap(

    Display* ,
    char [32]

);

extern int XQueryPointer(

    Display* ,
    Window ,
    Window* ,
    Window* ,
    int* ,
    int* ,
    int* ,
    int* ,
    unsigned int*

);

extern int XQueryTextExtents(

    Display* ,
    XID ,
    const char* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*

);

extern int XQueryTextExtents16(

    Display* ,
    XID ,
    const XChar2b* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*

);

extern int XQueryTree(

    Display* ,
    Window ,
    Window* ,
    Window* ,
    Window** ,
    unsigned int*

);

extern int XRaiseWindow(

    Display* ,
    Window

);

extern int XReadBitmapFile(

    Display* ,
    Drawable ,
    const char* ,
    unsigned int* ,
    unsigned int* ,
    Pixmap* ,
    int* ,
    int*

);

extern int XReadBitmapFileData(

    const char* ,
    unsigned int* ,
    unsigned int* ,
    unsigned char** ,
    int* ,
    int*

);

extern int XRebindKeysym(

    Display* ,
    KeySym ,
    KeySym* ,
    int ,
    const unsigned char* ,
    int

);

extern int XRecolorCursor(

    Display* ,
    Cursor ,
    XColor* ,
    XColor*

);

extern int XRefreshKeyboardMapping(

    XMappingEvent*

);

extern int XRemoveFromSaveSet(

    Display* ,
    Window

);

extern int XRemoveHost(

    Display* ,
    XHostAddress*

);

extern int XRemoveHosts(

    Display* ,
    XHostAddress* ,
    int

);

extern int XReparentWindow(

    Display* ,
    Window ,
    Window ,
    int ,
    int

);

extern int XResetScreenSaver(

    Display*

);

extern int XResizeWindow(

    Display* ,
    Window ,
    unsigned int ,
    unsigned int

);

extern int XRestackWindows(

    Display* ,
    Window* ,
    int

);

extern int XRotateBuffers(

    Display* ,
    int

);

extern int XRotateWindowProperties(

    Display* ,
    Window ,
    Atom* ,
    int ,
    int

);

extern int XScreenCount(

    Display*

);

extern int XSelectInput(

    Display* ,
    Window ,
    long

);

extern int XSendEvent(

    Display* ,
    Window ,
    int ,
    long ,
    XEvent*

);

extern int XSetAccessControl(

    Display* ,
    int

);

extern int XSetArcMode(

    Display* ,
    GC ,
    int

);

extern int XSetBackground(

    Display* ,
    GC ,
    unsigned long

);

extern int XSetClipMask(

    Display* ,
    GC ,
    Pixmap

);

extern int XSetClipOrigin(

    Display* ,
    GC ,
    int ,
    int

);

extern int XSetClipRectangles(

    Display* ,
    GC ,
    int ,
    int ,
    XRectangle* ,
    int ,
    int

);

extern int XSetCloseDownMode(

    Display* ,
    int

);

extern int XSetCommand(

    Display* ,
    Window ,
    char** ,
    int

);

extern int XSetDashes(

    Display* ,
    GC ,
    int ,
    const char* ,
    int

);

extern int XSetFillRule(

    Display* ,
    GC ,
    int

);

extern int XSetFillStyle(

    Display* ,
    GC ,
    int

);

extern int XSetFont(

    Display* ,
    GC ,
    Font

);

extern int XSetFontPath(

    Display* ,
    char** ,
    int

);

extern int XSetForeground(

    Display* ,
    GC ,
    unsigned long

);

extern int XSetFunction(

    Display* ,
    GC ,
    int

);

extern int XSetGraphicsExposures(

    Display* ,
    GC ,
    int

);

extern int XSetIconName(

    Display* ,
    Window ,
    const char*

);

extern int XSetInputFocus(

    Display* ,
    Window ,
    int ,
    Time

);

extern int XSetLineAttributes(

    Display* ,
    GC ,
    unsigned int ,
    int ,
    int ,
    int

);

extern int XSetModifierMapping(

    Display* ,
    XModifierKeymap*

);

extern int XSetPlaneMask(

    Display* ,
    GC ,
    unsigned long

);

extern int XSetPointerMapping(

    Display* ,
    const unsigned char* ,
    int

);

extern int XSetScreenSaver(

    Display* ,
    int ,
    int ,
    int ,
    int

);

extern int XSetSelectionOwner(

    Display* ,
    Atom ,
    Window ,
    Time

);

extern int XSetState(

    Display* ,
    GC ,
    unsigned long ,
    unsigned long ,
    int ,
    unsigned long

);

extern int XSetStipple(

    Display* ,
    GC ,
    Pixmap

);

extern int XSetSubwindowMode(

    Display* ,
    GC ,
    int

);

extern int XSetTSOrigin(

    Display* ,
    GC ,
    int ,
    int

);

extern int XSetTile(

    Display* ,
    GC ,
    Pixmap

);

extern int XSetWindowBackground(

    Display* ,
    Window ,
    unsigned long

);

extern int XSetWindowBackgroundPixmap(

    Display* ,
    Window ,
    Pixmap

);

extern int XSetWindowBorder(

    Display* ,
    Window ,
    unsigned long

);

extern int XSetWindowBorderPixmap(

    Display* ,
    Window ,
    Pixmap

);

extern int XSetWindowBorderWidth(

    Display* ,
    Window ,
    unsigned int

);

extern int XSetWindowColormap(

    Display* ,
    Window ,
    Colormap

);

extern int XStoreBuffer(

    Display* ,
    const char* ,
    int ,
    int

);

extern int XStoreBytes(

    Display* ,
    const char* ,
    int

);

extern int XStoreColor(

    Display* ,
    Colormap ,
    XColor*

);

extern int XStoreColors(

    Display* ,
    Colormap ,
    XColor* ,
    int

);

extern int XStoreName(

    Display* ,
    Window ,
    const char*

);

extern int XStoreNamedColor(

    Display* ,
    Colormap ,
    const char* ,
    unsigned long ,
    int

);

extern int XSync(

    Display* ,
    int

);

extern int XTextExtents(

    XFontStruct* ,
    const char* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*

);

extern int XTextExtents16(

    XFontStruct* ,
    const XChar2b* ,
    int ,
    int* ,
    int* ,
    int* ,
    XCharStruct*

);

extern int XTextWidth(

    XFontStruct* ,
    const char* ,
    int

);

extern int XTextWidth16(

    XFontStruct* ,
    const XChar2b* ,
    int

);

extern int XTranslateCoordinates(

    Display* ,
    Window ,
    Window ,
    int ,
    int ,
    int* ,
    int* ,
    Window*

);

extern int XUndefineCursor(

    Display* ,
    Window

);

extern int XUngrabButton(

    Display* ,
    unsigned int ,
    unsigned int ,
    Window

);

extern int XUngrabKey(

    Display* ,
    int ,
    unsigned int ,
    Window

);

extern int XUngrabKeyboard(

    Display* ,
    Time

);

extern int XUngrabPointer(

    Display* ,
    Time

);

extern int XUngrabServer(

    Display*

);

extern int XUninstallColormap(

    Display* ,
    Colormap

);

extern int XUnloadFont(

    Display* ,
    Font

);

extern int XUnmapSubwindows(

    Display* ,
    Window

);

extern int XUnmapWindow(

    Display* ,
    Window

);

extern int XVendorRelease(

    Display*

);

extern int XWarpPointer(

    Display* ,
    Window ,
    Window ,
    int ,
    int ,
    unsigned int ,
    unsigned int ,
    int ,
    int

);

extern int XWidthMMOfScreen(

    Screen*

);

extern int XWidthOfScreen(

    Screen*

);

extern int XWindowEvent(

    Display* ,
    Window ,
    long ,
    XEvent*

);

extern int XWriteBitmapFile(

    Display* ,
    const char* ,
    Pixmap ,
    unsigned int ,
    unsigned int ,
    int ,
    int

);

extern int XSupportsLocale (void);

extern char *XSetLocaleModifiers(
    const char*
);

extern XOM XOpenOM(

    Display* ,
    struct _XrmHashBucketRec* ,
    const char* ,
    const char*

);

extern int XCloseOM(

    XOM

);

extern char *XSetOMValues(

    XOM ,
    ...

);

extern char *XGetOMValues(

    XOM ,
    ...

);

extern Display *XDisplayOfOM(

    XOM

);

extern char *XLocaleOfOM(

    XOM

);

extern XOC XCreateOC(

    XOM ,
    ...

);

extern void XDestroyOC(

    XOC

);

extern XOM XOMOfOC(

    XOC

);

extern char *XSetOCValues(

    XOC ,
    ...

);

extern char *XGetOCValues(

    XOC ,
    ...

);

extern XFontSet XCreateFontSet(

    Display* ,
    const char* ,
    char*** ,
    int* ,
    char**

);

extern void XFreeFontSet(

    Display* ,
    XFontSet

);

extern int XFontsOfFontSet(

    XFontSet ,
    XFontStruct*** ,
    char***

);

extern char *XBaseFontNameListOfFontSet(

    XFontSet

);

extern char *XLocaleOfFontSet(

    XFontSet

);

extern int XContextDependentDrawing(

    XFontSet

);

extern int XDirectionalDependentDrawing(

    XFontSet

);

extern int XContextualDrawing(

    XFontSet

);

extern XFontSetExtents *XExtentsOfFontSet(

    XFontSet

);

extern int XmbTextEscapement(

    XFontSet ,
    const char* ,
    int

);

extern int XwcTextEscapement(

    XFontSet ,
    const wchar_t* ,
    int

);

extern int Xutf8TextEscapement(

    XFontSet ,
    const char* ,
    int

);

extern int XmbTextExtents(

    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle*

);

extern int XwcTextExtents(

    XFontSet ,
    const wchar_t* ,
    int ,
    XRectangle* ,
    XRectangle*

);

extern int Xutf8TextExtents(

    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle*

);

extern int XmbTextPerCharExtents(

    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*

);

extern int XwcTextPerCharExtents(

    XFontSet ,
    const wchar_t* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*

);

extern int Xutf8TextPerCharExtents(

    XFontSet ,
    const char* ,
    int ,
    XRectangle* ,
    XRectangle* ,
    int ,
    int* ,
    XRectangle* ,
    XRectangle*

);

extern void XmbDrawText(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XmbTextItem* ,
    int

);

extern void XwcDrawText(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XwcTextItem* ,
    int

);

extern void Xutf8DrawText(

    Display* ,
    Drawable ,
    GC ,
    int ,
    int ,
    XmbTextItem* ,
    int

);

extern void XmbDrawString(

    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int

);

extern void XwcDrawString(

    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const wchar_t* ,
    int

);

extern void Xutf8DrawString(

    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int

);

extern void XmbDrawImageString(

    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int

);

extern void XwcDrawImageString(

    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const wchar_t* ,
    int

);

extern void Xutf8DrawImageString(

    Display* ,
    Drawable ,
    XFontSet ,
    GC ,
    int ,
    int ,
    const char* ,
    int

);

extern XIM XOpenIM(

    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char*

);

extern int XCloseIM(

    XIM

);

extern char *XGetIMValues(

    XIM , ...

);

extern char *XSetIMValues(

    XIM , ...

);

extern Display *XDisplayOfIM(

    XIM

);

extern char *XLocaleOfIM(

    XIM

);

extern XIC XCreateIC(

    XIM , ...

);

extern void XDestroyIC(

    XIC

);

extern void XSetICFocus(

    XIC

);

extern void XUnsetICFocus(

    XIC

);

extern wchar_t *XwcResetIC(

    XIC

);

extern char *XmbResetIC(

    XIC

);

extern char *Xutf8ResetIC(

    XIC

);

extern char *XSetICValues(

    XIC , ...

);

extern char *XGetICValues(

    XIC , ...

);

extern XIM XIMOfIC(

    XIC

);

extern int XFilterEvent(

    XEvent* ,
    Window

);

extern int XmbLookupString(

    XIC ,
    XKeyPressedEvent* ,
    char* ,
    int ,
    KeySym* ,
    int*

);

extern int XwcLookupString(

    XIC ,
    XKeyPressedEvent* ,
    wchar_t* ,
    int ,
    KeySym* ,
    int*

);

extern int Xutf8LookupString(

    XIC ,
    XKeyPressedEvent* ,
    char* ,
    int ,
    KeySym* ,
    int*

);

extern XVaNestedList XVaCreateNestedList(

    int , ...

);



extern int XRegisterIMInstantiateCallback(

    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char* ,
    XIDProc ,
    XPointer

);

extern int XUnregisterIMInstantiateCallback(

    Display* ,
    struct _XrmHashBucketRec* ,
    char* ,
    char* ,
    XIDProc ,
    XPointer

);

typedef void (*XConnectionWatchProc)(

    Display* ,
    XPointer ,
    int ,
    int ,
    XPointer*

);


extern int XInternalConnectionNumbers(

    Display* ,
    int** ,
    int*

);

extern void XProcessInternalConnection(

    Display* ,
    int

);

extern int XAddConnectionWatch(

    Display* ,
    XConnectionWatchProc ,
    XPointer

);

extern void XRemoveConnectionWatch(

    Display* ,
    XConnectionWatchProc ,
    XPointer

);

extern void XSetAuthorization(

    char * ,
    int ,
    char * ,
    int

);

extern int _Xmbtowc(

    wchar_t * ,




    char * ,
    int


);

extern int _Xwctomb(

    char * ,
    wchar_t

);

}
# 34 "/coolo/prod/kdelibs/kdecore/netwm.h" 2
# 1 "/usr/X11R6/include/X11/Xutil.h" 1
# 52 "/usr/X11R6/include/X11/Xutil.h"
# 61 "/usr/X11R6/include/X11/Xutil.h"





typedef struct {
        long flags;
        int x, y;
        int width, height;
        int min_width, min_height;
        int max_width, max_height;
        int width_inc, height_inc;
        struct {
                int x;
                int y;
        } min_aspect, max_aspect;
        int base_width, base_height;
        int win_gravity;
} XSizeHints;













typedef struct {
        long flags;
        int input;

        int initial_state;
        Pixmap icon_pixmap;
        Window icon_window;
        int icon_x, icon_y;
        Pixmap icon_mask;
        XID window_group;

} XWMHints;

















typedef struct {
    unsigned char *value;
    Atom encoding;
    int format;
    unsigned long nitems;
} XTextProperty;


typedef enum {
    XStringStyle,
    XCompoundTextStyle,
    XTextStyle,
    XStdICCTextStyle,

    XUTF8StringStyle
} XICCEncodingStyle;

typedef struct {
        int min_width, min_height;
        int max_width, max_height;
        int width_inc, height_inc;
} XIconSize;

typedef struct {
        char *res_name;
        char *res_class;
} XClassHint;














typedef struct _XComposeStatus {
    XPointer compose_ptr;
    int chars_matched;
} XComposeStatus;
















# 240 "/usr/X11R6/include/X11/Xutil.h"
typedef struct _XRegion *Region;










typedef struct {
  Visual *visual;
  VisualID visualid;
  int screen;
  int depth;

  int c_class;



  unsigned long red_mask;
  unsigned long green_mask;
  unsigned long blue_mask;
  int colormap_size;
  int bits_per_rgb;
} XVisualInfo;






typedef struct {
        Colormap colormap;
        unsigned long red_max;
        unsigned long red_mult;
        unsigned long green_max;
        unsigned long green_mult;
        unsigned long blue_max;
        unsigned long blue_mult;
        unsigned long base_pixel;
        VisualID visualid;
        XID killid;
} XStandardColormap;






# 320 "/usr/X11R6/include/X11/Xutil.h"

typedef int XContext;


extern "C" {



extern XClassHint *XAllocClassHint (

    void

);

extern XIconSize *XAllocIconSize (

    void

);

extern XSizeHints *XAllocSizeHints (

    void

);

extern XStandardColormap *XAllocStandardColormap (

    void

);

extern XWMHints *XAllocWMHints (

    void

);

extern int XClipBox(

    Region ,
    XRectangle*

);

extern Region XCreateRegion(

    void

);

extern const char *XDefaultString (void);

extern int XDeleteContext(

    Display* ,
    XID ,
    XContext

);

extern int XDestroyRegion(

    Region

);

extern int XEmptyRegion(

    Region

);

extern int XEqualRegion(

    Region ,
    Region

);

extern int XFindContext(

    Display* ,
    XID ,
    XContext ,
    XPointer*

);

extern int XGetClassHint(

    Display* ,
    Window ,
    XClassHint*

);

extern int XGetIconSizes(

    Display* ,
    Window ,
    XIconSize** ,
    int*

);

extern int XGetNormalHints(

    Display* ,
    Window ,
    XSizeHints*

);

extern int XGetRGBColormaps(

    Display* ,
    Window ,
    XStandardColormap** ,
    int* ,
    Atom

);

extern int XGetSizeHints(

    Display* ,
    Window ,
    XSizeHints* ,
    Atom

);

extern int XGetStandardColormap(

    Display* ,
    Window ,
    XStandardColormap* ,
    Atom

);

extern int XGetTextProperty(

    Display* ,
    Window ,
    XTextProperty* ,
    Atom

);

extern XVisualInfo *XGetVisualInfo(

    Display* ,
    long ,
    XVisualInfo* ,
    int*

);

extern int XGetWMClientMachine(

    Display* ,
    Window ,
    XTextProperty*

);

extern XWMHints *XGetWMHints(

    Display* ,
    Window

);

extern int XGetWMIconName(

    Display* ,
    Window ,
    XTextProperty*

);

extern int XGetWMName(

    Display* ,
    Window ,
    XTextProperty*

);

extern int XGetWMNormalHints(

    Display* ,
    Window ,
    XSizeHints* ,
    long*

);

extern int XGetWMSizeHints(

    Display* ,
    Window ,
    XSizeHints* ,
    long* ,
    Atom

);

extern int XGetZoomHints(

    Display* ,
    Window ,
    XSizeHints*

);

extern int XIntersectRegion(

    Region ,
    Region ,
    Region

);

extern void XConvertCase(

    KeySym ,
    KeySym* ,
    KeySym*

);

extern int XLookupString(

    XKeyEvent* ,
    char* ,
    int ,
    KeySym* ,
    XComposeStatus*

);

extern int XMatchVisualInfo(

    Display* ,
    int ,
    int ,
    int ,
    XVisualInfo*

);

extern int XOffsetRegion(

    Region ,
    int ,
    int

);

extern int XPointInRegion(

    Region ,
    int ,
    int

);

extern Region XPolygonRegion(

    XPoint* ,
    int ,
    int

);

extern int XRectInRegion(

    Region ,
    int ,
    int ,
    unsigned int ,
    unsigned int

);

extern int XSaveContext(

    Display* ,
    XID ,
    XContext ,
    const char*

);

extern int XSetClassHint(

    Display* ,
    Window ,
    XClassHint*

);

extern int XSetIconSizes(

    Display* ,
    Window ,
    XIconSize* ,
    int

);

extern int XSetNormalHints(

    Display* ,
    Window ,
    XSizeHints*

);

extern void XSetRGBColormaps(

    Display* ,
    Window ,
    XStandardColormap* ,
    int ,
    Atom

);

extern int XSetSizeHints(

    Display* ,
    Window ,
    XSizeHints* ,
    Atom

);

extern int XSetStandardProperties(

    Display* ,
    Window ,
    const char* ,
    const char* ,
    Pixmap ,
    char** ,
    int ,
    XSizeHints*

);

extern void XSetTextProperty(

    Display* ,
    Window ,
    XTextProperty* ,
    Atom

);

extern void XSetWMClientMachine(

    Display* ,
    Window ,
    XTextProperty*

);

extern int XSetWMHints(

    Display* ,
    Window ,
    XWMHints*

);

extern void XSetWMIconName(

    Display* ,
    Window ,
    XTextProperty*

);

extern void XSetWMName(

    Display* ,
    Window ,
    XTextProperty*

);

extern void XSetWMNormalHints(

    Display* ,
    Window ,
    XSizeHints*

);

extern void XSetWMProperties(

    Display* ,
    Window ,
    XTextProperty* ,
    XTextProperty* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*

);

extern void XmbSetWMProperties(

    Display* ,
    Window ,
    const char* ,
    const char* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*

);

extern void Xutf8SetWMProperties(

    Display* ,
    Window ,
    const char* ,
    const char* ,
    char** ,
    int ,
    XSizeHints* ,
    XWMHints* ,
    XClassHint*

);

extern void XSetWMSizeHints(

    Display* ,
    Window ,
    XSizeHints* ,
    Atom

);

extern int XSetRegion(

    Display* ,
    GC ,
    Region

);

extern void XSetStandardColormap(

    Display* ,
    Window ,
    XStandardColormap* ,
    Atom

);

extern int XSetZoomHints(

    Display* ,
    Window ,
    XSizeHints*

);

extern int XShrinkRegion(

    Region ,
    int ,
    int

);

extern int XStringListToTextProperty(

    char** ,
    int ,
    XTextProperty*

);

extern int XSubtractRegion(

    Region ,
    Region ,
    Region

);

extern int XmbTextListToTextProperty(
    Display* display,
    char** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern int XwcTextListToTextProperty(
    Display* display,
    wchar_t** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern int Xutf8TextListToTextProperty(
    Display* display,
    char** list,
    int count,
    XICCEncodingStyle style,
    XTextProperty* text_prop_return
);

extern void XwcFreeStringList(
    wchar_t** list
);

extern int XTextPropertyToStringList(

    XTextProperty* ,
    char*** ,
    int*

);

extern int XmbTextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    char*** list_return,
    int* count_return
);

extern int XwcTextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    wchar_t*** list_return,
    int* count_return
);

extern int Xutf8TextPropertyToTextList(
    Display* display,
    const XTextProperty* text_prop,
    char*** list_return,
    int* count_return
);

extern int XUnionRectWithRegion(

    XRectangle* ,
    Region ,
    Region

);

extern int XUnionRegion(

    Region ,
    Region ,
    Region

);

extern int XWMGeometry(

    Display* ,
    int ,
    const char* ,
    const char* ,
    unsigned int ,
    XSizeHints* ,
    int* ,
    int* ,
    int* ,
    int* ,
    int*

);

extern int XXorRegion(

    Region ,
    Region ,
    Region

);

}
# 35 "/coolo/prod/kdelibs/kdecore/netwm.h" 2
# 1 "/usr/X11R6/include/X11/Xatom.h" 1








# 36 "/coolo/prod/kdelibs/kdecore/netwm.h" 2




struct NETRootInfoPrivate;
struct NETWinInfoPrivate;
# 57 "/coolo/prod/kdelibs/kdecore/netwm.h"
class NETRootInfo : public NET {
public:




    enum { PROTOCOLS, WINDOW_TYPES, STATES, PROTOCOLS2, ACTIONS,
        PROPERTIES_SIZE };
# 99 "/coolo/prod/kdelibs/kdecore/netwm.h"
    NETRootInfo(Display *display, Window supportWindow, const char *wmName,
                const unsigned long properties[], int properties_size,
                int screen = -1, bool doActivate = true);







    NETRootInfo(Display *display, Window supportWindow, const char *wmName,
                unsigned long properties, int screen = -1, bool doActivate = true) ;
# 134 "/coolo/prod/kdelibs/kdecore/netwm.h"
    NETRootInfo(Display *display, const unsigned long properties[], int properties_size,
                int screen = -1, bool doActivate = true);







    NETRootInfo(Display *display, unsigned long properties, int screen = -1,
                bool doActivate = true) ;






    NETRootInfo(const NETRootInfo &rootinfo);




    virtual ~NETRootInfo();






    Display *x11Display() const;






    Window rootWindow() const;






    Window supportWindow() const;






    const char *wmName() const;






    int screenNumber() const;







    bool isSupported( NET::Property property ) const;




    bool isSupported( NET::Property2 property ) const;




    bool isSupported( NET::WindowType type ) const;




    bool isSupported( NET::State state ) const;





    bool isSupported( NET::Action action ) const;
# 233 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const unsigned long* supportedProperties() const;
# 242 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const unsigned long* passedProperties() const;
# 259 "/coolo/prod/kdelibs/kdecore/netwm.h"
    unsigned long supported() const ;
# 268 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const Window *clientList() const;
# 277 "/coolo/prod/kdelibs/kdecore/netwm.h"
    int clientListCount() const;
# 287 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const Window *clientListStacking() const;
# 296 "/coolo/prod/kdelibs/kdecore/netwm.h"
    int clientListStackingCount() const;
# 305 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const Window *kdeSystemTrayWindows() const;
# 314 "/coolo/prod/kdelibs/kdecore/netwm.h"
    int kdeSystemTrayWindowsCount() const;
# 326 "/coolo/prod/kdelibs/kdecore/netwm.h"
    NETSize desktopGeometry(int desktop) const;
# 335 "/coolo/prod/kdelibs/kdecore/netwm.h"
    NETPoint desktopViewport(int desktop) const;
# 344 "/coolo/prod/kdelibs/kdecore/netwm.h"
    NETRect workArea(int desktop) const;
# 353 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const char *desktopName(int desktop) const;
# 362 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const Window *virtualRoots( ) const;
# 371 "/coolo/prod/kdelibs/kdecore/netwm.h"
    int virtualRootsCount() const;






    int numberOfDesktops() const;






    int currentDesktop() const;






    Window activeWindow() const;
# 402 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void activate();
# 412 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setClientList(Window *windows, unsigned int count);
# 422 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setClientListStacking(Window *windows, unsigned int count);
# 431 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setKDESystemTrayWindows(Window *windows, unsigned int count);






    void setCurrentDesktop(int desktop);
# 450 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setDesktopGeometry(int desktop, const NETSize &geometry);
# 459 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setDesktopViewport(int desktop, const NETPoint &viewport);






    void setNumberOfDesktops(int numberOfDesktops);
# 475 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setDesktopName(int desktop, const char *desktopName);
# 488 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setActiveWindow(Window window, NET::RequestSource src,
        Time timestamp );







    void setActiveWindow(Window window);
# 506 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setWorkArea(int desktop, const NETRect &workArea);
# 515 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setVirtualRoots(Window *windows, unsigned int count);





    const NETRootInfo &operator=(const NETRootInfo &rootinfo);
# 530 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void closeWindowRequest(Window window);
# 546 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void moveResizeRequest(Window window, int x_root, int y_root,
                           Direction direction);
# 563 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void event( XEvent* event, unsigned long* properties, int properties_size );
# 575 "/coolo/prod/kdelibs/kdecore/netwm.h"
    unsigned long event(XEvent *event) ;


protected:







    virtual void addClient(Window) { }
# 595 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void removeClient(Window) { }
# 605 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void addSystemTrayWin(Window) { }
# 615 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void removeSystemTrayWin(Window) { }
# 625 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void changeNumberOfDesktops(int) { }
# 637 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void changeDesktopGeometry(int, const NETSize &) { }
# 649 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void changeDesktopViewport(int, const NETPoint &) { }
# 659 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void changeCurrentDesktop(int) { }
# 671 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual  void changeActiveWindow(Window) { }
# 680 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void closeWindow(Window) { }
# 697 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void moveResize(Window, int, int, unsigned long) { }


private:
    void update( const unsigned long[] );
    void setSupported();
    void setDefaultProperties();
    void updateSupportedProperties( Atom atom );
    Role role;

protected:
    virtual void virtual_hook( int id, void* data );
private:
    NETRootInfoPrivate *p;
    friend class NETRootInfo2;
};

class NETRootInfo2
    : public NETRootInfo
{
public:
    NETRootInfo2(Display *display, Window supportWindow, const char *wmName,
                unsigned long properties[], int properties_size,
                int screen = -1, bool doActivate = true);
    void sendPing( Window window, Time timestamp );
protected:
    friend class NETRootInfo;
    virtual void gotPing( Window, Time ) {};
# 735 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void changeActiveWindow(Window,NET::RequestSource,Time) { }


};
# 754 "/coolo/prod/kdelibs/kdecore/netwm.h"
class NETWinInfo : public NET {
public:




    enum { PROTOCOLS, PROTOCOLS2,
        PROPERTIES_SIZE };
# 784 "/coolo/prod/kdelibs/kdecore/netwm.h"
    NETWinInfo(Display *display, Window window, Window rootWindow,
               const unsigned long properties[], int properties_size,
               Role role = Client);







    NETWinInfo(Display *display, Window window,
               Window rootWindow, unsigned long properties,
               Role role = Client);






    NETWinInfo(const NETWinInfo & wininfo);




    virtual ~NETWinInfo();





    const NETWinInfo &operator=(const NETWinInfo &wintinfo);
# 823 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const unsigned long* passedProperties() const;
# 834 "/coolo/prod/kdelibs/kdecore/netwm.h"
    unsigned long properties() const ;






    NETRect iconGeometry() const;







    unsigned long state() const;






    NETStrut strut() const;
# 871 "/coolo/prod/kdelibs/kdecore/netwm.h"
    WindowType windowType( unsigned long supported_types ) const;
# 880 "/coolo/prod/kdelibs/kdecore/netwm.h"
    WindowType windowType() const ;






    const char *name() const;






    const char *visibleName() const;
# 905 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const char *iconName() const;
# 916 "/coolo/prod/kdelibs/kdecore/netwm.h"
    const char *visibleIconName() const;
# 925 "/coolo/prod/kdelibs/kdecore/netwm.h"
    int desktop() const;






    int pid() const;






    int handledIcons() const;







    Window kdeSystemTrayWinFor() const;







    MappingState mappingState() const;
# 966 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setIcon(NETIcon icon, int replace = 1);






    void setIconGeometry(NETRect geometry);






    void setStrut(NETStrut strut);
# 992 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setState(unsigned long state, unsigned long mask);







    void setWindowType(WindowType type);






    void setName(const char *name);







    void setVisibleName(const char *visibleName);






    void setIconName(const char *name);







    void setVisibleIconName(const char *name);
# 1039 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setDesktop(int desktop);






    void setPid(int pid);






    void setHandledIcons(int handled);






    void setKDESystemTrayWinFor(Window window);







    void setKDEFrameStrut(NETStrut strut);
# 1081 "/coolo/prod/kdelibs/kdecore/netwm.h"
    NETIcon icon(int width = -1, int height = -1) const;
# 1090 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void setUserTime( Time time );




    Time userTime() const;




    void setStartupId( const char* startup_id );




    const char* startupId() const;




    void setAllowedActions( unsigned long actions );




    unsigned long allowedActions() const;





    Window transientFor() const;




    Window groupLeader() const;
# 1136 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void kdeGeometry(NETRect &frame, NETRect &window);
# 1152 "/coolo/prod/kdelibs/kdecore/netwm.h"
    void event( XEvent* event, unsigned long* properties, int properties_size );
# 1164 "/coolo/prod/kdelibs/kdecore/netwm.h"
    unsigned long event(XEvent *event) ;







    static const int OnAllDesktops;


protected:
# 1184 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void changeDesktop(int) { }
# 1195 "/coolo/prod/kdelibs/kdecore/netwm.h"
    virtual void changeState(unsigned long , unsigned long ) { }

private:
    void update( const unsigned long[] );
    void updateWMState();
    Role role;

protected:
    virtual void virtual_hook( int id, void* data );
private:
    NETWinInfoPrivate *p;
};
# 104 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2


# 1 "/coolo/prod/kdelibs/kdecore/kprocctrl.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kprocctrl.h"



# 1 "/coolo/prod/kdelibs/kdecore/kprocess.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kprocess.h"
# 32 "/coolo/prod/kdelibs/kdecore/kprocess.h"
class QSocketNotifier;
class KProcessPrivate;
class KPty;
# 124 "/coolo/prod/kdelibs/kdecore/kprocess.h"
class KProcess : public QObject
{
  public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

public:
# 142 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  enum Communication {
       NoCommunication = 0,
       Stdin = 1, Stdout = 2, Stderr = 4,
       AllOutput = 6, All = 7,
       NoRead
  };




  enum RunMode {




       DontCare,



       NotifyOnExit,



       Block,




       OwnGroup
  };





  KProcess( QObject* parent, const char *name = 0 );




  KProcess();
# 192 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  virtual ~KProcess();
# 205 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  bool setExecutable(const QString& proc) ;
# 221 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  KProcess &operator<<(const QString& arg);



  KProcess &operator<<(const char * arg);





  KProcess &operator<<(const QCString & arg);







  KProcess &operator<<(const QStringList& args);





  void clearArguments();
# 273 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  virtual bool start(RunMode runmode = NotifyOnExit,
        Communication comm = NoCommunication);







  virtual bool kill(int signo = 15);





  bool isRunning() const;
# 300 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  pid_t pid() const;





  __attribute__ ((deprecated)) pid_t getPid() const { return pid(); }




  void suspend();




  void resume();
# 326 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  bool wait(int timeout = -1);







  bool normalExit() const;







  int exitStatus() const;
# 372 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  bool writeStdin(const char *buffer, int buflen);







  bool closeStdin();
# 389 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  bool closeStdout();
# 398 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  bool closeStderr();
# 408 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  bool closePty();




  void closeAll();





  const QValueList<QCString> &args() { return arguments; }
# 430 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  void setRunPrivileged(bool keepPrivileges);






  bool runPrivileged() const;







  void setEnvironment(const QString &name, const QString &value);







  void setWorkingDirectory(const QString &dir);
# 471 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  void setUseShell(bool useShell, const char *shell = 0);
# 482 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  static QString quote(const QString &arg);
# 491 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  void detach();
# 504 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  void setUsePty(Communication comm, bool addUtmp);
# 514 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  KPty *pty() const;




  enum { PrioLowest = 20, PrioLow = 10, PrioLower = 5, PrioNormal = 0,
    PrioHigher = -5, PrioHigh = -10, PrioHighest = -19 };







  bool setPriority(int prio);

protected:






  void processExited(KProcess *proc);
# 558 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  void receivedStdout(KProcess *proc, char *buffer, int buflen);
# 578 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  void receivedStdout(int fd, int &len);
# 595 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  void receivedStderr(KProcess *proc, char *buffer, int buflen);







  void wroteStdin(KProcess *proc);


protected :






  void slotChildOutput(int fdno);






  void slotChildError(int fdno);







  void slotSendData(int dummy);

protected:





  void setupEnvironment();





  QValueList<QCString> arguments;




  RunMode run_mode;






  bool runs;
# 663 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  pid_t pid_;
# 672 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  int status;







  bool keepPrivs;
# 694 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  virtual int setupCommunication(Communication comm);
# 708 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  virtual int commSetupDoneP();






  virtual int commSetupDoneC();
# 724 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  virtual void processHasExited(int state);
# 751 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  virtual void commClose();
# 766 "/coolo/prod/kdelibs/kdecore/kprocess.h"
  void setBinaryExecutable(const char *filename);




  int out[2];



  int in[2];



  int err[2];




  QSocketNotifier *innot;



  QSocketNotifier *outnot;



  QSocketNotifier *errnot;





  Communication communication;






  int childOutput(int fdno);






  int childError(int fdno);




  const char *input_data;



  int input_sent;



  int input_total;





  friend class KProcessController;

protected:
  virtual void virtual_hook( int id, void* data );
private:
  KProcessPrivate *d;
};

class KShellProcessPrivate;
# 851 "/coolo/prod/kdelibs/kdecore/kprocess.h"
class KShellProcess: public KProcess
{
  public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

public:






  KShellProcess(const char *shellname=0);




  ~KShellProcess();

  virtual bool start(RunMode runmode = NotifyOnExit,
                  Communication comm = NoCommunication);

  static QString quote(const QString &arg);

private:
  QCString shell;

protected:
  virtual void virtual_hook( int id, void* data );
private:
  KShellProcessPrivate *d;
};
# 26 "/coolo/prod/kdelibs/kdecore/kprocctrl.h" 2

class QSocketNotifier;
# 39 "/coolo/prod/kdelibs/kdecore/kprocctrl.h"
class KProcessController : public QObject
{
  public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

public:




  static void ref();





  static void deref();





  static KProcessController *theKProcessController;
# 69 "/coolo/prod/kdelibs/kdecore/kprocctrl.h"
  static void theSigCHLDHandler(int signal);
# 81 "/coolo/prod/kdelibs/kdecore/kprocctrl.h"
  bool waitForProcessExit(int timeout);






  void unscheduleCheck();






  void rescheduleCheck();
# 104 "/coolo/prod/kdelibs/kdecore/kprocctrl.h"
  int notifierFd() const;




  void addKProcess( KProcess* );



  void removeKProcess( KProcess* );



  void addProcess( int pid );

private :
  void slotDoHousekeeping();

private:
  friend class I_just_love_gcc;

  int fd[2];
  bool needcheck;
  QSocketNotifier *notifier;
  QValueList<KProcess*> kProcessList;
  QValueList<int> unixProcessList;

  static void setupHandlers();
  static void resetHandlers();
  static struct sigaction oldChildHandlerData;
  static bool handlerSet;

  static int refCount;


  KProcessController();
  ~KProcessController();


  KProcessController( const KProcessController& );
  KProcessController& operator= ( const KProcessController& );
};
# 107 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2


# 1 "/usr/include/paths.h" 1 3 4
# 33 "/usr/include/paths.h" 3 4







# 110 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2







# 1 "/usr/X11R6/include/X11/SM/SMlib.h" 1
# 34 "/usr/X11R6/include/X11/SM/SMlib.h"

# 1 "/usr/X11R6/include/X11/SM/SM.h" 1
# 34 "/usr/X11R6/include/X11/SM/SM.h"















































# 37 "/usr/X11R6/include/X11/SM/SMlib.h" 2
# 1 "/usr/X11R6/include/X11/ICE/ICElib.h" 1
# 32 "/usr/X11R6/include/X11/ICE/ICElib.h"

# 1 "/usr/X11R6/include/X11/ICE/ICE.h" 1
# 32 "/usr/X11R6/include/X11/ICE/ICE.h"



































# 35 "/usr/X11R6/include/X11/ICE/ICElib.h" 2




typedef void *IcePointer;




typedef enum {
    IcePoAuthHaveReply,
    IcePoAuthRejected,
    IcePoAuthFailed,
    IcePoAuthDoneCleanup
} IcePoAuthStatus;

typedef enum {
    IcePaAuthContinue,
    IcePaAuthAccepted,
    IcePaAuthRejected,
    IcePaAuthFailed
} IcePaAuthStatus;

typedef enum {
    IceConnectPending,
    IceConnectAccepted,
    IceConnectRejected,
    IceConnectIOError
} IceConnectStatus;

typedef enum {
    IceProtocolSetupSuccess,
    IceProtocolSetupFailure,
    IceProtocolSetupIOError,
    IceProtocolAlreadyActive
} IceProtocolSetupStatus;

typedef enum {
    IceAcceptSuccess,
    IceAcceptFailure,
    IceAcceptBadMalloc
} IceAcceptStatus;

typedef enum {
    IceClosedNow,
    IceClosedASAP,
    IceConnectionInUse,
    IceStartedShutdownNegotiation
} IceCloseStatus;

typedef enum {
    IceProcessMessagesSuccess,
    IceProcessMessagesIOError,
    IceProcessMessagesConnectionClosed
} IceProcessMessagesStatus;

typedef struct {
    unsigned long sequence_of_request;
    int major_opcode_of_request;
    int minor_opcode_of_request;
    IcePointer reply;
} IceReplyWaitInfo;

typedef struct _IceConn *IceConn;
typedef struct _IceListenObj *IceListenObj;

typedef void (*IceWatchProc) (

    IceConn ,
    IcePointer ,
    int ,
    IcePointer *

);

typedef void (*IcePoProcessMsgProc) (

    IceConn ,
    IcePointer ,
    int ,
    unsigned long ,
    int ,
    IceReplyWaitInfo * ,
    int *

);

typedef void (*IcePaProcessMsgProc) (

    IceConn ,
    IcePointer ,
    int ,
    unsigned long ,
    int

);

typedef struct {
    int major_version;
    int minor_version;
    IcePoProcessMsgProc process_msg_proc;
} IcePoVersionRec;

typedef struct {
    int major_version;
    int minor_version;
    IcePaProcessMsgProc process_msg_proc;
} IcePaVersionRec;

typedef IcePoAuthStatus (*IcePoAuthProc) (

    IceConn ,
    IcePointer * ,
    int ,
    int ,
    int ,
    IcePointer ,
    int * ,
    IcePointer * ,
    char **

);

typedef IcePaAuthStatus (*IcePaAuthProc) (

    IceConn ,
    IcePointer * ,
    int ,
    int ,
    IcePointer ,
    int * ,
    IcePointer * ,
    char **

);

typedef int (*IceHostBasedAuthProc) (

    char *

);

typedef int (*IceProtocolSetupProc) (

    IceConn ,
    int ,
    int ,
    char * ,
    char * ,
    IcePointer * ,
    char **

);

typedef void (*IceProtocolActivateProc) (

    IceConn ,
    IcePointer

);

typedef void (*IceIOErrorProc) (

    IceConn

);

typedef void (*IcePingReplyProc) (

    IceConn ,
    IcePointer

);

typedef void (*IceErrorHandler) (

    IceConn ,
    int ,
    int ,
    unsigned long ,
    int ,
    int ,
    IcePointer

);

typedef void (*IceIOErrorHandler) (

    IceConn

);






extern "C" {

extern int IceRegisterForProtocolSetup (

    char * ,
    char * ,
    char * ,
    int ,
    IcePoVersionRec * ,
    int ,
    char ** ,
    IcePoAuthProc * ,
    IceIOErrorProc

);

extern int IceRegisterForProtocolReply (

    char * ,
    char * ,
    char * ,
    int ,
    IcePaVersionRec * ,
    int ,
    char ** ,
    IcePaAuthProc * ,
    IceHostBasedAuthProc ,
    IceProtocolSetupProc ,
    IceProtocolActivateProc ,
    IceIOErrorProc

);

extern IceConn IceOpenConnection (

    char * ,
    IcePointer ,
    int ,
    int ,
    int ,
    char *

);

extern IcePointer IceGetConnectionContext (

    IceConn

);

extern int IceListenForConnections (

    int * ,
    IceListenObj ** ,
    int ,
    char *

);

extern int IceListenForWellKnownConnections (

    char * ,
    int * ,
    IceListenObj ** ,
    int ,
    char *

);

extern int IceGetListenConnectionNumber (

    IceListenObj

);

extern char *IceGetListenConnectionString (

    IceListenObj

);

extern char *IceComposeNetworkIdList (

    int ,
    IceListenObj *

);

extern void IceFreeListenObjs (

    int ,
    IceListenObj *

);

extern void IceSetHostBasedAuthProc (

    IceListenObj ,
    IceHostBasedAuthProc

);

extern IceConn IceAcceptConnection (

    IceListenObj ,
    IceAcceptStatus *

);

extern void IceSetShutdownNegotiation (

    IceConn ,
    int

);

extern int IceCheckShutdownNegotiation (

    IceConn

);

extern IceCloseStatus IceCloseConnection (

    IceConn

);

extern int IceAddConnectionWatch (

    IceWatchProc ,
    IcePointer

);

extern void IceRemoveConnectionWatch (

    IceWatchProc ,
    IcePointer

);

extern IceProtocolSetupStatus IceProtocolSetup (

    IceConn ,
    int ,
    IcePointer ,
    int ,
    int * ,
    int * ,
    char ** ,
    char ** ,
    int ,
    char *

);

extern int IceProtocolShutdown (

    IceConn ,
    int

);

extern IceProcessMessagesStatus IceProcessMessages (

    IceConn ,
    IceReplyWaitInfo * ,
    int *

);

extern int IcePing (

   IceConn ,
   IcePingReplyProc ,
   IcePointer

);

extern char *IceAllocScratch (

   IceConn ,
   unsigned long

);

extern int IceFlush (

   IceConn

);

extern int IceGetOutBufSize (

   IceConn

);

extern int IceGetInBufSize (

   IceConn

);

extern IceConnectStatus IceConnectionStatus (

    IceConn

);

extern char *IceVendor (

    IceConn

);

extern char *IceRelease (

    IceConn

);

extern int IceProtocolVersion (

    IceConn

);

extern int IceProtocolRevision (

    IceConn

);

extern int IceConnectionNumber (

    IceConn

);

extern char *IceConnectionString (

    IceConn

);

extern unsigned long IceLastSentSequenceNumber (

    IceConn

);

extern unsigned long IceLastReceivedSequenceNumber (

    IceConn

);

extern int IceSwapping (

    IceConn

);

extern IceErrorHandler IceSetErrorHandler (

    IceErrorHandler

);

extern IceIOErrorHandler IceSetIOErrorHandler (

    IceIOErrorHandler

);






extern int IceInitThreads (

    void

);

extern void IceAppLockConn (

    IceConn

);

extern void IceAppUnlockConn (

    IceConn

);

}
# 38 "/usr/X11R6/include/X11/SM/SMlib.h" 2






typedef IcePointer SmPointer;






typedef struct _SmcConn *SmcConn;
typedef struct _SmsConn *SmsConn;






typedef struct {
    int length;
    SmPointer value;
} SmPropValue;

typedef struct {
    char *name;
    char *type;
    int num_vals;
    SmPropValue *vals;
} SmProp;







typedef enum {
    SmcClosedNow,
    SmcClosedASAP,
    SmcConnectionInUse
} SmcCloseStatus;







typedef void (*SmcSaveYourselfProc) (

    SmcConn ,
    SmPointer ,
    int ,
    int ,
    int ,
    int

);

typedef void (*SmcSaveYourselfPhase2Proc) (

    SmcConn ,
    SmPointer

);

typedef void (*SmcInteractProc) (

    SmcConn ,
    SmPointer

);

typedef void (*SmcDieProc) (

    SmcConn ,
    SmPointer

);

typedef void (*SmcShutdownCancelledProc) (

    SmcConn ,
    SmPointer

);

typedef void (*SmcSaveCompleteProc) (

    SmcConn ,
    SmPointer

);

typedef void (*SmcPropReplyProc) (

    SmcConn ,
    SmPointer ,
    int ,
    SmProp **

);






typedef struct {

    struct {
        SmcSaveYourselfProc callback;
        SmPointer client_data;
    } save_yourself;

    struct {
        SmcDieProc callback;
        SmPointer client_data;
    } die;

    struct {
        SmcSaveCompleteProc callback;
        SmPointer client_data;
    } save_complete;

    struct {
        SmcShutdownCancelledProc callback;
        SmPointer client_data;
    } shutdown_cancelled;

} SmcCallbacks;








typedef int (*SmsRegisterClientProc) (

    SmsConn ,
    SmPointer ,
    char *

);

typedef void (*SmsInteractRequestProc) (

    SmsConn ,
    SmPointer ,
    int

);

typedef void (*SmsInteractDoneProc) (

    SmsConn ,
    SmPointer ,
    int

);

typedef void (*SmsSaveYourselfRequestProc) (

    SmsConn ,
    SmPointer ,
    int ,
    int ,
    int ,
    int ,
    int

);

typedef void (*SmsSaveYourselfPhase2RequestProc) (

    SmsConn ,
    SmPointer

);

typedef void (*SmsSaveYourselfDoneProc) (

    SmsConn ,
    SmPointer ,
    int

);

typedef void (*SmsCloseConnectionProc) (

    SmsConn ,
    SmPointer ,
    int ,
    char **

);

typedef void (*SmsSetPropertiesProc) (

    SmsConn ,
    SmPointer ,
    int ,
    SmProp **

);

typedef void (*SmsDeletePropertiesProc) (

    SmsConn ,
    SmPointer ,
    int ,
    char **

);

typedef void (*SmsGetPropertiesProc) (

    SmsConn ,
    SmPointer

);






typedef struct {

    struct {
        SmsRegisterClientProc callback;
        SmPointer manager_data;
    } register_client;

    struct {
        SmsInteractRequestProc callback;
        SmPointer manager_data;
    } interact_request;

    struct {
        SmsInteractDoneProc callback;
        SmPointer manager_data;
    } interact_done;

    struct {
        SmsSaveYourselfRequestProc callback;
        SmPointer manager_data;
    } save_yourself_request;

    struct {
        SmsSaveYourselfPhase2RequestProc callback;
        SmPointer manager_data;
    } save_yourself_phase2_request;

    struct {
        SmsSaveYourselfDoneProc callback;
        SmPointer manager_data;
    } save_yourself_done;

    struct {
        SmsCloseConnectionProc callback;
        SmPointer manager_data;
    } close_connection;

    struct {
        SmsSetPropertiesProc callback;
        SmPointer manager_data;
    } set_properties;

    struct {
        SmsDeletePropertiesProc callback;
        SmPointer manager_data;
    } delete_properties;

    struct {
        SmsGetPropertiesProc callback;
        SmPointer manager_data;
    } get_properties;

} SmsCallbacks;





typedef int (*SmsNewClientProc) (

    SmsConn ,
    SmPointer ,
    unsigned long * ,
    SmsCallbacks * ,
    char **

);







typedef void (*SmcErrorHandler) (

    SmcConn ,
    int ,
    int ,
    unsigned long ,
    int ,
    int ,
    SmPointer

);

typedef void (*SmsErrorHandler) (

    SmsConn ,
    int ,
    int ,
    unsigned long ,
    int ,
    int ,
    SmPointer

);







extern "C" {

extern SmcConn SmcOpenConnection (

    char * ,
    SmPointer ,
    int ,
    int ,
    unsigned long ,
    SmcCallbacks * ,
    char * ,
    char ** ,
    int ,
    char *

);

extern SmcCloseStatus SmcCloseConnection (

    SmcConn ,
    int ,
    char **

);

extern void SmcModifyCallbacks (

    SmcConn ,
    unsigned long ,
    SmcCallbacks *

);

extern void SmcSetProperties (

    SmcConn ,
    int ,
    SmProp **

);

extern void SmcDeleteProperties (

    SmcConn ,
    int ,
    char **

);

extern int SmcGetProperties (

    SmcConn ,
    SmcPropReplyProc ,
    SmPointer

);

extern int SmcInteractRequest (

    SmcConn ,
    int ,
    SmcInteractProc ,
    SmPointer

);

extern void SmcInteractDone (

    SmcConn ,
    int

);

extern void SmcRequestSaveYourself (

    SmcConn ,
    int ,
    int ,
    int ,
    int ,
    int

);

extern int SmcRequestSaveYourselfPhase2 (

    SmcConn ,
    SmcSaveYourselfPhase2Proc ,
    SmPointer

);

extern void SmcSaveYourselfDone (

    SmcConn ,
    int

);

extern int SmcProtocolVersion (

    SmcConn

);

extern int SmcProtocolRevision (

    SmcConn

);

extern char *SmcVendor (

    SmcConn

);

extern char *SmcRelease (

    SmcConn

);

extern char *SmcClientID (

    SmcConn

);

extern IceConn SmcGetIceConnection (

    SmcConn

);

extern int SmsInitialize (

    char * ,
    char * ,
    SmsNewClientProc ,
    SmPointer ,
    IceHostBasedAuthProc ,
    int ,
    char *

);

extern char *SmsClientHostName (

    SmsConn

);

extern char *SmsGenerateClientID (

    SmsConn

);

extern int SmsRegisterClientReply (

    SmsConn ,
    char *

);

extern void SmsSaveYourself (

    SmsConn ,
    int ,
    int ,
    int ,
    int

);

extern void SmsSaveYourselfPhase2 (

    SmsConn

);

extern void SmsInteract (

    SmsConn

);

extern void SmsDie (

    SmsConn

);

extern void SmsSaveComplete (

    SmsConn

);

extern void SmsShutdownCancelled (

    SmsConn

);

extern void SmsReturnProperties (

    SmsConn ,
    int ,
    SmProp **

);

extern void SmsCleanUp (

    SmsConn

);

extern int SmsProtocolVersion (

    SmsConn

);

extern int SmsProtocolRevision (

    SmsConn

);

extern char *SmsClientID (

    SmsConn

);

extern IceConn SmsGetIceConnection (

    SmsConn

);

extern SmcErrorHandler SmcSetErrorHandler (

    SmcErrorHandler

);

extern SmsErrorHandler SmsSetErrorHandler (

    SmsErrorHandler

);

extern void SmFreeProperty (

    SmProp *

);

extern void SmFreeReasons (

    int ,
    char **

);

}
# 118 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/fixx11h.h" 1
# 31 "/coolo/prod/kdelibs/kdecore/fixx11h.h"
namespace X
{





const int XUnsorted = 0;
#undef Unsorted
const int Unsorted = XUnsorted;
# 50 "/coolo/prod/kdelibs/kdecore/fixx11h.h"
const XID XNone = 0L;
#undef None
const XID None = XNone;
# 62 "/coolo/prod/kdelibs/kdecore/fixx11h.h"
typedef int XBool;
#undef Bool
typedef XBool Bool;
# 74 "/coolo/prod/kdelibs/kdecore/fixx11h.h"
const int XKeyPress = 2;
#undef KeyPress
const int KeyPress = XKeyPress;







const int XKeyRelease = 3;
#undef KeyRelease
const int KeyRelease = XKeyRelease;







const int XAbove = 0;
#undef Above
const int Above = XAbove;







const int XBelow = 1;
#undef Below
const int Below = XBelow;







const int XFocusIn = 9;
#undef FocusIn
const int FocusIn = XFocusIn;







const int XFocusOut = 10;
#undef FocusOut
const int FocusOut = XFocusOut;







const int XAlways = 2;
#undef Always
const int Always = XAlways;







const int XSuccess = 0;
#undef Success
const int Success = XSuccess;







const int XGrayScale = 1;
#undef GrayScale
const int GrayScale = XGrayScale;







typedef int XStatus;
#undef Status
typedef XStatus Status;
# 220 "/coolo/prod/kdelibs/kdecore/fixx11h.h"
}

using namespace X;
# 119 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

# 1 "/coolo/prod/kdelibs/dcop/KDE-ICE/ICElib.h" 1
# 121 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2







# 1 "/coolo/prod/kdelibs/kdecore/kipc.h" 1
# 23 "/coolo/prod/kdelibs/kdecore/kipc.h"
# 49 "/coolo/prod/kdelibs/kdecore/kipc.h"
class KIPC
{
public:




    enum Message { PaletteChanged=0, FontChanged, StyleChanged,
                   BackgroundChanged, SettingsChanged, IconChanged, ToolbarStyleChanged,
                   ClipboardConfigChanged,
                   UserMessage=32 };
# 68 "/coolo/prod/kdelibs/kdecore/kipc.h"
    static void sendMessage(Message msg, WId w, int data=0);







    static void sendMessageAll(Message msg, int data=0);
};
# 130 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2


# 1 "/coolo/prod/kdelibs/kdecore/kappdcopiface.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kappdcopiface.h"

# 1 "/coolo/prod/kdelibs/dcop/dcopobject.h" 1
# 24 "/coolo/prod/kdelibs/dcop/dcopobject.h"
# 33 "/coolo/prod/kdelibs/dcop/dcopobject.h"
class DCOPClient;
typedef QValueList<QCString> QCStringList;









# 66 "/coolo/prod/kdelibs/dcop/dcopobject.h"
class DCOPObject
{
public:




  DCOPObject();





  DCOPObject(QObject *obj);




  DCOPObject(const QCString &objId);




  virtual ~DCOPObject();





  QCString objId() const;







  bool setObjId(const QCString &objId);
# 136 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  virtual bool process(const QCString &fun, const QByteArray &data,
                       QCString& replyType, QByteArray &replyData);
# 162 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  virtual bool processDynamic(const QCString &fun, const QByteArray &data,
                              QCString& replyType, QByteArray &replyData);
# 176 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  virtual QCStringList functionsDynamic();
# 189 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  virtual QCStringList interfacesDynamic();
# 200 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  virtual QCStringList interfaces();
# 220 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  virtual QCStringList functions();







  void emitDCOPSignal( const QCString &signal, const QByteArray &data);
# 249 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  bool connectDCOPSignal( const QCString &sender, const QCString &senderObj,
                          const QCString &signal,
                          const QCString &slot,
                          bool Volatile);
# 271 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  bool disconnectDCOPSignal( const QCString &sender, const QCString &senderObj,
                             const QCString &signal,
                             const QCString &slot);
# 283 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  DCOPClient *callingDcopClient();





  void setCallingDcopClient(DCOPClient *);
# 298 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  static bool hasObject(const QCString &objId);







  static DCOPObject *find(const QCString &objId);
# 318 "/coolo/prod/kdelibs/dcop/dcopobject.h"
  static QPtrList<DCOPObject> match(const QCString &partialId);







  static QCString objectName( QObject* obj );

private:



  QCString ident;

protected:
  virtual void virtual_hook( int id, void* data );
private:
  class DCOPObjectPrivate;
  DCOPObjectPrivate *d;
};

class DCOPObjectProxyPrivate;
# 351 "/coolo/prod/kdelibs/dcop/dcopobject.h"
class DCOPObjectProxy
{
public:



    DCOPObjectProxy();







    DCOPObjectProxy( DCOPClient*);




    virtual ~DCOPObjectProxy();
# 393 "/coolo/prod/kdelibs/dcop/dcopobject.h"
    virtual bool process( const QCString& obj, const QCString& fun,
                          const QByteArray& data,
                          QCString& replyType, QByteArray &replyData );
private:
    void* unused;
    void* unused_too;
    friend class DCOPClient;
    static QPtrList<DCOPObjectProxy>* proxies;
protected:
    virtual void virtual_hook( int id, void* data );
private:
    DCOPObjectProxyPrivate* d;
};
# 24 "/coolo/prod/kdelibs/kdecore/kappdcopiface.h" 2




class KApplication;







class KAppDCOPInterface : virtual public DCOPObject
{
public: virtual bool process(const QCString &fun, const QByteArray &data, QCString& replyType, QByteArray &replyData); QCStringList functions(); QCStringList interfaces(); private:

public:





        KAppDCOPInterface( KApplication * theKapp );




        ~KAppDCOPInterface();
public:



        void disableSessionManagement();

        QCString startupId();
        QCString caption();

        void quit();




private:
        KApplication *m_KApplication;
};
# 133 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2

bool kde_have_kipc = true;

KApplication* KApplication::KApp = 0L;
bool KApplication::loadedByKdeinit = false;
DCOPClient *KApplication::s_DCOPClient = 0L;
bool KApplication::s_dcopClientNeedsPostInit = false;

static Atom atom_DesktopWindow;
static Atom atom_NetSupported;




static Atom atom_KdeNetUserTime;
static Atom kde_net_wm_user_time = 0;




Time qt_x_last_input_time = 0L;
extern Time qt_x_time;

template class QPtrList<KSessionManaged>;


extern "C" {
static int kde_xio_errhandler( Display * dpy )
{
  return KApplication::kApplication()->xioErrhandler( dpy );
}

static int kde_x_errhandler( Display *dpy, XErrorEvent *err )
{
  return KApplication::kApplication()->xErrhandler( dpy, err );
}

}


extern "C" {
static void kde_ice_ioerrorhandler( IceConn conn )
{
    if(KApplication::kApplication())
        KApplication::kApplication()->iceIOErrorHandler( conn );

}
}




class KApplicationPrivate
{
public:
  KApplicationPrivate()
    : actionRestrictions( false ),
        refCount( 1 ),
        oldIceIOErrorHandler( 0 ),
        checkAccelerators( 0 ),
        overrideStyle( QString::null ),
        startup_id( "0" ),
        m_KAppDCOPInterface( 0L ),
        session_save( false ),
        oldXErrorHandler( __null ),
        oldXIOErrorHandler( __null )
  {
  }

  ~KApplicationPrivate()
  {}


  bool actionRestrictions : 1;






  int refCount;
  IceIOErrorHandler oldIceIOErrorHandler;
  KCheckAccelerators* checkAccelerators;
  QString overrideStyle;
  QString geometry_arg;
  QCString startup_id;
  KAppDCOPInterface *m_KAppDCOPInterface;
  bool session_save;
  int (*oldXErrorHandler)(Display*,XErrorEvent*);
  int (*oldXIOErrorHandler)(Display*);

  class URLActionRule
  {
  public:










     URLActionRule(const QString &act,
                   const QString &bProt, const QString &bHost, const QString &bPath,
                   const QString &dProt, const QString &dHost, const QString &dPath,
                   bool perm)
                   : action(act),
                     baseProt(bProt), baseHost(bHost), basePath(bPath),
                     destProt(dProt), destHost(dHost), destPath(dPath),
                     permission(perm)
                   {
                      if (baseProt.isEmpty()) baseProtWildCard = true; else if (baseProt[baseProt.length()-1] == '!') { baseProtWildCard = false; baseProt.truncate(baseProt.length()-1); } else baseProtWildCard = true;;
                      if (baseHost.isEmpty()) baseHostWildCard = true; else if (baseHost[0] == '*') { baseHostWildCard = true; baseHost = baseHost.mid(1); } else baseHostWildCard = false;;
                      if (basePath.isEmpty()) basePathWildCard = true; else if (basePath[basePath.length()-1] == '!') { basePathWildCard = false; basePath.truncate(basePath.length()-1); } else basePathWildCard = true;;
                      if (destProt.isEmpty()) destProtWildCard = true; else if (destProt[destProt.length()-1] == '!') { destProtWildCard = false; destProt.truncate(destProt.length()-1); } else destProtWildCard = true;;
                      if (destHost.isEmpty()) destHostWildCard = true; else if (destHost[0] == '*') { destHostWildCard = true; destHost = destHost.mid(1); } else destHostWildCard = false;;
                      if (destPath.isEmpty()) destPathWildCard = true; else if (destPath[destPath.length()-1] == '!') { destPathWildCard = false; destPath.truncate(destPath.length()-1); } else destPathWildCard = true;;
                      destProtEqual = (destProt == "=");;
                      destHostEqual = (destHost == "=");;
                   }

     bool baseMatch(const KURL &url, const QString &protClass)
     {
        if (baseProtWildCard)
        {
           if ( !baseProt.isEmpty() && !url.protocol().startsWith(baseProt) &&
                (protClass.isEmpty() || (protClass != baseProt)) )
              return false;
        }
        else
        {
           if ( (url.protocol() != baseProt) &&
                (protClass.isEmpty() || (protClass != baseProt)) )
              return false;
        }
        if (baseHostWildCard)
        {
           if (!baseHost.isEmpty() && !url.host().endsWith(baseHost))
              return false;
        }
        else
        {
           if (url.host() != baseHost)
              return false;
        }
        if (basePathWildCard)
        {
           if (!basePath.isEmpty() && !url.path().startsWith(basePath))
              return false;
        }
        else
        {
           if (url.path() != basePath)
              return false;
        }
        return true;
     }

     bool destMatch(const KURL &url, const QString &protClass, const KURL &base, const QString &baseClass)
     {
        if (destProtEqual)
        {
           if ( (url.protocol() != base.protocol()) &&
                (protClass.isEmpty() || baseClass.isEmpty() || protClass != baseClass) )
              return false;
        }
        else if (destProtWildCard)
        {
           if ( !destProt.isEmpty() && !url.protocol().startsWith(destProt) &&
                (protClass.isEmpty() || (protClass != destProt)) )
              return false;
        }
        else
        {
           if ( (url.protocol() != destProt) &&
                (protClass.isEmpty() || (protClass != destProt)) )
              return false;
        }
        if (destHostWildCard)
        {
           if (!destHost.isEmpty() && !url.host().endsWith(destHost))
              return false;
        }
        else if (destHostEqual)
        {
           if (url.host() != base.host())
              return false;
        }
        else
        {
           if (url.host() != destHost)
              return false;
        }
        if (destPathWildCard)
        {
           if (!destPath.isEmpty() && !url.path().startsWith(destPath))
              return false;
        }
        else
        {
           if (url.path() != destPath)
              return false;
        }
        return true;
     }

     QString action;
     QString baseProt;
     QString baseHost;
     QString basePath;
     QString destProt;
     QString destHost;
     QString destPath;
     bool baseProtWildCard : 1;
     bool baseHostWildCard : 1;
     bool basePathWildCard : 1;
     bool destProtWildCard : 1;
     bool destHostWildCard : 1;
     bool destPathWildCard : 1;
     bool destProtEqual : 1;
     bool destHostEqual : 1;
     bool permission;
  };
  QPtrList<URLActionRule> urlActionRestrictions;

    QString sessionKey;
    QString pSessionConfigFile;
};


static QPtrList<QWidget>*x11Filter = 0;
static bool autoDcopRegistration = true;

void KApplication::installX11EventFilter( QWidget* filter )
{
    if ( !filter )
        return;
    if (!x11Filter)
        x11Filter = new QPtrList<QWidget>;
    connect ( filter, "2""destroyed()", this, "1""x11FilterDestroyed()" );
    x11Filter->append( filter );
}

void KApplication::x11FilterDestroyed()
{
    removeX11EventFilter( static_cast< const QWidget* >( sender()));
}

void KApplication::removeX11EventFilter( const QWidget* filter )
{
    if ( !x11Filter || !filter )
        return;
    x11Filter->removeRef( filter );
    if ( x11Filter->isEmpty() ) {
        delete x11Filter;
        x11Filter = 0;
    }
}





extern bool kde_g_bKillAccelOverride;

bool KApplication::notify(QObject *receiver, QEvent *event)
{
    QEvent::Type t = event->type();
    if (kde_g_bKillAccelOverride)
    {
       kde_g_bKillAccelOverride = false;

       if (t == QEvent::AccelOverride)
       {
          static_cast<QKeyEvent *>(event)->accept();
          return true;
       }
       else
          kdWarning(125) << "kde_g_bKillAccelOverride set, but received an event other than AccelOverride." << endl;
    }

    if ((t == QEvent::AccelOverride) || (t == QEvent::KeyPress))
    {
       static const KShortcut& _selectAll = KStdAccel::selectAll();
       if (receiver && receiver->inherits("QLineEdit"))
       {
          QLineEdit *edit = static_cast<QLineEdit *>(receiver);

          QKeyEvent *kevent = static_cast<QKeyEvent *>(event);
          KKey key(kevent);
          if (_selectAll.contains(key))
          {
             if (t == QEvent::KeyPress)
             {
                edit->selectAll();
                return true;
             }
             else
             {
                kevent->accept();
             }
          }

          if (key == KKey(Qt::CTRL + Qt::Key_U))
          {
             if (t == QEvent::KeyPress)
             {
                if (!edit->isReadOnly())
                {
                   QString t(edit->text());
                   t = t.mid(edit->cursorPosition());
                   edit->validateAndSet(t, 0, 0, 0);
                }
                return true;
             }
             else
             {
                kevent->accept();
             }

          }
       }
       if (receiver && receiver->inherits("QTextEdit"))
       {
          QTextEdit *medit = static_cast<QTextEdit *>(receiver);

          QKeyEvent *kevent = static_cast<QKeyEvent *>(event);
          if (_selectAll.contains(KKey(kevent)))
          {
             if (t == QEvent::KeyPress)
             {
                medit->selectAll();
                return true;
             }
             else
             {
                kevent->accept();
             }
          }
       }
    }
    if( event->type() == QEvent::Show && receiver->isWidgetType())
    {
        QWidget* w = static_cast< QWidget* >( receiver );
        if( w->isTopLevel() && qt_x_last_input_time != 0L )
            XChangeProperty( qt_xdisplay(), w->winId(), kde_net_wm_user_time, ((Atom) 6),
                32, 0, (unsigned char*)&qt_x_last_input_time, 1 );
    }
    if( event->type() == QEvent::Hide && receiver->isWidgetType())
    {
        QWidget* w = static_cast< QWidget* >( receiver );
        if( w->isTopLevel() && w->winId() != 0 )
            XDeleteProperty( qt_xdisplay(), w->winId(), kde_net_wm_user_time );
    }
    return QApplication::notify(receiver, event);
}



static QPtrList<KSessionManaged>* sessionClients()
{
    static QPtrList<KSessionManaged>* session_clients = 0L;
    if ( !session_clients )
        session_clients = new QPtrList<KSessionManaged>;
    return session_clients;
}






QString KApplication::sessionConfigName() const
{



    QString sessKey = sessionKey();
    if ( sessKey.isEmpty() && !d->sessionKey.isEmpty() )
        sessKey = d->sessionKey;
    return QString("session/%1_%2_%3").arg(name()).arg(sessionId()).arg(sessKey);

}


static SmcConn mySmcConnection = 0;
static SmcConn tmpSmcConnection = 0;




static QTime* smModificationTime = 0;

KApplication::KApplication( int& argc, char** argv, const QCString& rAppName,
                            bool allowStyles, bool GUIenabled ) :
  QApplication( argc, argv, GUIenabled ), KInstance(rAppName),

  display(0L),

  d (new KApplicationPrivate())
{
    read_app_startup_id();
    if (!GUIenabled)
       allowStyles = false;
    useStyles = allowStyles;
    ((!rAppName.isEmpty()) ? (void)0 : qWarning("ASSERT: \"%s\" in %s (%d)","!rAppName.isEmpty()","/coolo/prod/kdelibs/kdecore/kapplication.cpp",543));
    setName(rAppName);

    installSigpipeHandler();
    KCmdLineArgs::initIgnore(argc, argv, rAppName.data());
    parseCommandLine( );
    init(GUIenabled);
    d->m_KAppDCOPInterface = new KAppDCOPInterface(this);
}

KApplication::KApplication( bool allowStyles, bool GUIenabled ) :
  QApplication( *KCmdLineArgs::qt_argc(), *KCmdLineArgs::qt_argv(),
                GUIenabled ),
  KInstance( KCmdLineArgs::about),

  display(0L),

  d (new KApplicationPrivate)
{
    read_app_startup_id();
    if (!GUIenabled)
       allowStyles = false;
    useStyles = allowStyles;
    setName( instanceName() );

    installSigpipeHandler();
    parseCommandLine( );
    init(GUIenabled);
    d->m_KAppDCOPInterface = new KAppDCOPInterface(this);
}

KApplication::KApplication( bool allowStyles, bool GUIenabled, KInstance* _instance ) :
  QApplication( *KCmdLineArgs::qt_argc(), *KCmdLineArgs::qt_argv(),
                GUIenabled ),
  KInstance( _instance ),

  display(0L),

  d (new KApplicationPrivate)
{
    read_app_startup_id();
    if (!GUIenabled)
       allowStyles = false;
    useStyles = allowStyles;
    setName( instanceName() );

    installSigpipeHandler();
    parseCommandLine( );
    init(GUIenabled);
}


KApplication::KApplication(Display *display, int& argc, char** argv, const QCString& rAppName,
                           bool allowStyles, bool GUIenabled ) :
  QApplication( display ), KInstance(rAppName),
  display(0L),
  d (new KApplicationPrivate())
{
    read_app_startup_id();
    if (!GUIenabled)
       allowStyles = false;
    useStyles = allowStyles;

    ((!rAppName.isEmpty()) ? (void)0 : qWarning("ASSERT: \"%s\" in %s (%d)","!rAppName.isEmpty()","/coolo/prod/kdelibs/kdecore/kapplication.cpp",606));
    setName(rAppName);

    installSigpipeHandler();
    KCmdLineArgs::initIgnore(argc, argv, rAppName.data());
    parseCommandLine( );
    init(GUIenabled);
    d->m_KAppDCOPInterface = new KAppDCOPInterface(this);
}


int KApplication::xioErrhandler( Display* dpy )
{
    if(KApplication::kApplication())
    {
        shutDown();
        d->oldXIOErrorHandler( dpy );
    }
    exit( 1 );
    return 0;
}

int KApplication::xErrhandler( Display* dpy, void* err_ )
{
    XErrorEvent* err = static_cast< XErrorEvent* >( err_ );
    if(KApplication::kApplication())
    {

        d->oldXErrorHandler( dpy, err );
    }
    return 0;
}

void KApplication::iceIOErrorHandler( _IceConn *conn )
{
    shutDown();

    if ( d->oldIceIOErrorHandler != __null )
      (*d->oldIceIOErrorHandler)( conn );

    exit( 1 );
}

class KDETranslator : public QTranslator
{
public:
  KDETranslator(QObject *parent) : QTranslator(parent, "kdetranslator") {}
  virtual QTranslatorMessage findMessage(const char* context,
                                         const char *sourceText,
                                         const char* message) const
  {
    QTranslatorMessage res;
    res.setTranslation(KGlobal::locale()->translateQt(context, sourceText, message));
    return res;
  }
};

void KApplication::init(bool GUIenabled)
{
  if ((getuid() != geteuid()) ||
      (getgid() != getegid()))
  {
     fprintf(stderr, "The KDE libraries are not designed to run with suid privileges.\n");
     ::exit(127);
  }

  KProcessController::ref();

  (void) KClipboardSynchronizer::self();

  QApplication::setDesktopSettingsAware( false );

  KApp = this;




  if ( GUIenabled ) {
      const int max = 20;
      Atom* atoms[max];
      char* names[max];
      Atom atoms_return[max];
      int n = 0;

      atoms[n] = &kipcCommAtom;
      names[n++] = (char *) "KIPC_COMM_ATOM";

      atoms[n] = &atom_DesktopWindow;
      names[n++] = (char *) "KDE_DESKTOP_WINDOW";

      atoms[n] = &atom_NetSupported;
      names[n++] = (char *) "_NET_SUPPORTED";

      atoms[n] = &atom_KdeNetUserTime;
      names[n++] = (char *) "_KDE_NET_USER_TIME";

      atoms[n] = &kde_net_wm_user_time;
      names[n++] = (char *) "_NET_WM_USER_TIME";

      XInternAtoms( qt_xdisplay(), names, n, FALSE, atoms_return );
      for (int i = 0; i < n; i++ )
          *atoms[i] = atoms_return[i];
  }


  dcopAutoRegistration();
  dcopClientPostInit();

  smw = 0;



  kipcEventMask = (1 << KIPC::StyleChanged) | (1 << KIPC::PaletteChanged) |
                  (1 << KIPC::FontChanged) | (1 << KIPC::BackgroundChanged) |
                  (1 << KIPC::ToolbarStyleChanged) | (1 << KIPC::SettingsChanged) |
                  (1 << KIPC::ClipboardConfigChanged);



  (void) KGlobal::locale();

  KConfig* config = KGlobal::config();
  d->actionRestrictions = config->hasGroup("KDE Action Restrictions" );




  QCString readOnly = getenv("KDE_HOME_READONLY");
  if (readOnly.isEmpty() && (qstrcmp(name(), "kdialog") != 0))
  {
    KConfigGroupSaver saver(config, "KDE Action Restrictions");
    if (config->readBoolEntry("warn_unwritable_config",TRUE))
       config->checkConfigFilesWritable(TRUE);
  }

  if (GUIenabled)
  {


    fcntl((((_XPrivDisplay)qt_xdisplay())->fd), 2, 1);

    d->oldXErrorHandler = XSetErrorHandler( kde_x_errhandler );
    d->oldXIOErrorHandler = XSetIOErrorHandler( kde_xio_errhandler );


    connect( this, "2""aboutToQuit()", this, "2""shutDown()" );


    display = desktop()->x11Display();


    {
        QStringList plugins = KGlobal::dirs()->resourceDirs( "qtplugins" );
        QStringList::Iterator it = plugins.begin();
        while (it != plugins.end()) {
            addLibraryPath( *it );
            ++it;
        }

    }
    kdisplaySetStyle();
    kdisplaySetFont();

    propagateSettings(SETTINGS_QT);


    QMimeSourceFactory::defaultFactory()->addFactory( mimeSourceFactory() );

    KConfigGroupSaver saver( config, "Development" );
    if( config->hasKey( "CheckAccelerators" ) || config->hasKey( "AutoCheckAccelerators" ))
        d->checkAccelerators = new KCheckAccelerators( this );
  }



  bool rtl = reverseLayout();
  installTranslator(new KDETranslator(this));
  setReverseLayout( rtl );
  if (i18n( "_: Dear Translator! Translate this string to the string 'LTR' in "
         "left-to-right languages (as english) or to 'RTL' in right-to-left "
         "languages (such as Hebrew and Arabic) to get proper widget layout." ) == "RTL")

        setReverseLayout( !rtl );


  KGlobal::dirs()->addResourceType("appdata", KStandardDirs::kde_default("data")
                                   + QString::fromLatin1(name()) + '/');
  pSessionConfig = 0L;
  bSessionManagement = true;



  if (GUIenabled && kde_have_kipc )
  {
    smw = new QWidget(0,0);
    long data = 1;
    XChangeProperty(qt_xdisplay(), smw->winId(),
                    atom_DesktopWindow, atom_DesktopWindow,
                    32, 0, (unsigned char *)&data, 1);
  }




  d->oldIceIOErrorHandler = IceSetIOErrorHandler( kde_ice_ioerrorhandler );
}

static int my_system (const char *command) {
   int pid, status;

   QApplication::flushX();
   pid = fork();
   if (pid == -1)
      return -1;
   if (pid == 0) {
      const char* shell = "/bin/sh";
      execl(shell, shell, "-c", command, (void *)0);
      ::exit(127);
   }
   do {
      if (waitpid(pid, &status, 0) == -1) {
         if ((*__errno_location ()) != 4)
            return -1;
       } else
            return status;
   } while(1);
}


DCOPClient *KApplication::dcopClient()
{
  if (s_DCOPClient)
    return s_DCOPClient;

  s_DCOPClient = new DCOPClient();
  KCmdLineArgs *args = KCmdLineArgs::parsedArgs("kde");
  if (args->isSet("dcopserver"))
  {
    s_DCOPClient->setServerAddress( args->getOption("dcopserver"));
  }
  if( KApplication::kApplication() ) {
    connect(s_DCOPClient, "2""attachFailed(const QString &)",
            KApplication::kApplication(), "1""dcopFailure(const QString &)");
    connect(s_DCOPClient, "2""blockUserInput(bool)",
            KApplication::kApplication(), "1""dcopBlockUserInput(bool)" );
  }
  else
    s_dcopClientNeedsPostInit = true;

  DCOPClient::setMainClient( s_DCOPClient );
  return s_DCOPClient;
}

void KApplication::dcopClientPostInit()
{
  if( s_dcopClientNeedsPostInit )
    {
    s_dcopClientNeedsPostInit = false;
    connect(s_DCOPClient, "2""blockUserInput(bool)",
            "1""dcopBlockUserInput(bool)" );
    s_DCOPClient->bindToApp();
    }
}

void KApplication::dcopAutoRegistration()
{
  if (autoDcopRegistration)
     {
     ( void ) dcopClient();
     if( dcopClient()->appId().isEmpty())
         dcopClient()->registerAs(name());
     }
}

void KApplication::disableAutoDcopRegistration()
{
  autoDcopRegistration = false;
}

KConfig* KApplication::sessionConfig()
{
    if (pSessionConfig)
        return pSessionConfig;


    pSessionConfig = new KConfig( sessionConfigName(), false, false);
    return pSessionConfig;
}

void KApplication::ref()
{
    d->refCount++;

}

void KApplication::deref()
{
    d->refCount--;

    if ( d->refCount <= 0 )
        quit();
}

KSessionManaged::KSessionManaged()
{
    sessionClients()->remove( this );
    sessionClients()->append( this );
}

KSessionManaged::~KSessionManaged()
{
    sessionClients()->remove( this );
}

bool KSessionManaged::saveState(QSessionManager&)
{
    return true;
}

bool KSessionManaged::commitData(QSessionManager&)
{
    return true;
}


void KApplication::disableSessionManagement() {
  bSessionManagement = false;
}

void KApplication::enableSessionManagement() {
  bSessionManagement = true;
# 946 "/coolo/prod/kdelibs/kdecore/kapplication.cpp"
  if( mySmcConnection ) {
        SmcRequestSaveYourself( mySmcConnection, 1, 0,
                                2,
                                0, 0 );


        IceFlush(SmcGetIceConnection(mySmcConnection));
  }
}


bool KApplication::requestShutDown(
    ShutdownConfirm confirm, ShutdownType sdtype, ShutdownMode sdmode )
{

    QApplication::syncX();

    if ( confirm == ShutdownConfirmYes ||
         sdtype != ShutdownTypeDefault ||
         sdmode != ShutdownModeDefault )
    {
        QByteArray data;
        QDataStream arg(data, 0x0002);
        arg << (int)confirm << (int)sdtype << (int)sdmode;
        return dcopClient()->send( "ksmserver", "ksmserver",
                                   "logout(int,int,int)", data );
    }

    if ( mySmcConnection ) {

        SmcRequestSaveYourself( mySmcConnection, 2, 1,
                                2,
                                confirm == ShutdownConfirmNo, 1 );


        IceFlush(SmcGetIceConnection(mySmcConnection));
        return TRUE;
    }



    propagateSessionManager();
    QCString smEnv = ::getenv("SESSION_MANAGER");
    if (smEnv.isEmpty())
        return FALSE;

    if (! tmpSmcConnection) {
        char cerror[256];
        char* myId = 0;
        char* prevId = 0;
        SmcCallbacks cb;
        tmpSmcConnection = SmcOpenConnection( 0, 0, 1, 0,
                                              0, &cb,
                                              prevId,
                                              &myId,
                                              255,
                                              cerror );
        ::free( myId );
        if (!tmpSmcConnection )
            return FALSE;
    }

    SmcRequestSaveYourself( tmpSmcConnection, 2, 1,
                            2, 0, 1 );


    IceFlush(SmcGetIceConnection(tmpSmcConnection));
    return TRUE;




}

void KApplication::propagateSessionManager()
{
    QCString fName = QFile::encodeName(locateLocal("socket", "KSMserver"));
    QCString display = ::getenv("DISPLAY");

    display.replace(QRegExp("\\.[0-9]+$"), "");
    int i;
    while( (i = display.find(':')) >= 0)
       display[i] = '_';

    fName += "_"+display;
    QCString smEnv = ::getenv("SESSION_MANAGER");
    bool check = smEnv.isEmpty();
    if ( !check && smModificationTime ) {
         QFileInfo info( fName );
         QTime current = info.lastModified().time();
         check = current > *smModificationTime;
    }
    if ( check ) {
        delete smModificationTime;
        QFile f( fName );
        if ( !f.open( 0x0001 ) )
            return;
        QFileInfo info ( f );
        smModificationTime = new QTime( info.lastModified().time() );
        QTextStream t(&f);
        t.setEncoding( QTextStream::Latin1 );
        QString s = t.readLine();
        f.close();
        ::setenv( "SESSION_MANAGER", s.latin1(), TRUE );
    }
}

void KApplication::commitData( QSessionManager& sm )
{
    d->session_save = true;
    bool canceled = false;
    for (KSessionManaged* it = sessionClients()->first();
         it && !canceled;
         it = sessionClients()->next() ) {
        canceled = !it->commitData( sm );
    }
    if ( canceled )
        sm.cancel();

    if ( sm.allowsInteraction() ) {
        QWidgetList done;
        QWidgetList *list = QApplication::topLevelWidgets();
        bool canceled = FALSE;
        QWidget* w = list->first();
        while ( !canceled && w ) {
            if ( !w->testWState( WState_ForceHide ) && !w->inherits("KMainWindow") ) {
                QCloseEvent e;
                sendEvent( w, &e );
                canceled = !e.isAccepted();
                if ( !canceled )
                    done.append( w );
                delete list;
                list = QApplication::topLevelWidgets();
                w = list->first();
            } else {
                w = list->next();
            }
            while ( w && done.containsRef( w ) )
                w = list->next();
        }
        delete list;
    }


    if ( !bSessionManagement )
        sm.setRestartHint( QSessionManager::RestartNever );
    else
        sm.setRestartHint( QSessionManager::RestartIfRunning );
    d->session_save = false;
}

void KApplication::saveState( QSessionManager& sm )
{
    d->session_save = true;

    static bool firstTime = true;
    mySmcConnection = (SmcConn) sm.handle();

    if ( !bSessionManagement ) {
        sm.setRestartHint( QSessionManager::RestartNever );
        d->session_save = false;
        return;
    }
    else
        sm.setRestartHint( QSessionManager::RestartIfRunning );
# 1121 "/coolo/prod/kdelibs/kdecore/kapplication.cpp"
    if ( firstTime ) {
        firstTime = false;
        d->session_save = false;
        return;
    }







    if ( pSessionConfig ) {
        delete pSessionConfig;
        pSessionConfig = 0;
    }


    QStringList restartCommand = sm.restartCommand();







    QCString multiHead = getenv("KDE_MULTIHEAD");
    if (multiHead.lower() == "true") {






        QCString displayname = getenv("DISPLAY");
        if (! displayname.isNull()) {


            restartCommand.append("-display");
            restartCommand.append(displayname);
        }
        sm.setRestartCommand( restartCommand );
    }



    saveYourself();
    bool canceled = false;
    for (KSessionManaged* it = sessionClients()->first();
         it && !canceled;
         it = sessionClients()->next() ) {
        canceled = !it->saveState( sm );
    }


    if ( pSessionConfig ) {
        pSessionConfig->sync();
        QStringList discard;
        discard << "rm" << locateLocal("config", sessionConfigName());
        sm.setDiscardCommand( discard );
    } else {
        sm.setDiscardCommand( "" );
    }

    if ( canceled )
        sm.cancel();



    d->session_save = false;
}

bool KApplication::sessionSaving() const
{
    return d->session_save;
}

void KApplication::startKdeinit()
{

  QString srv = KStandardDirs::findExe(QString::fromLatin1("kdeinit"));
  if (srv.isEmpty())
     srv = KStandardDirs::findExe(QString::fromLatin1("kdeinit"), "/coolo/KDE"+QString::fromLatin1("/bin"));
  if (srv.isEmpty())
     return;
  if (KApplication::kApplication() && (Tty != KApplication::kApplication()->type()))
    setOverrideCursor( Qt::waitCursor );
  my_system(QFile::encodeName(srv)+" --suicide");
  if (KApplication::kApplication() && (Tty != KApplication::kApplication()->type()))
    restoreOverrideCursor();
}

void KApplication::dcopFailure(const QString &msg)
{
  static int failureCount = 0;
  failureCount++;
  if (failureCount == 1)
  {
     startKdeinit();
     return;
  }
  if (failureCount == 2)
  {
     QString msgStr(i18n("There was an error setting up inter-process\n"
                      "communications for KDE. The message returned\n"
                      "by the system was:\n\n"));
     msgStr += msg;
     msgStr += i18n("\n\nPlease check that the \"dcopserver\" program is running!");

     if (Tty != KApplication::kApplication()->type())
     {
       QMessageBox::critical
         (
           KApplication::kApplication()->mainWidget(),
           i18n("DCOP communications error (%1)").arg(KApplication::kApplication()->caption()),
           msgStr,
           i18n("OK")
         );
     }
     else
     {
       fprintf(stderr, "%s\n", msgStr.local8Bit().data());
     }

     return;
  }
}

static const KCmdLineOptions qt_options[] =
{


   { "display <displayname>", ("Use the X-server display 'displayname'."), 0},



   { "session <sessionId>", ("Restore the application for the given 'sessionId'."), 0},
   { "cmap", ("Causes the application to install a private color\nmap on an 8-bit display."), 0},
   { "ncols <count>", ("Limits the number of colors allocated in the color\ncube on an 8-bit display, if the application is\nusing the QApplication::ManyColor color\nspecification."), 0},
   { "nograb", ("tells Qt to never grab the mouse or the keyboard."), 0},
   { "dograb", ("running under a debugger can cause an implicit\n-nograb, use -dograb to override."), 0},
   { "sync", ("switches to synchronous mode for debugging."), 0},
   { "fn", 0, 0},
   { "font <fontname>", ("defines the application font."), 0},
   { "bg", 0, 0},
   { "background <color>", ("sets the default background color and an\napplication palette (light and dark shades are\ncalculated)."), 0},
   { "fg", 0, 0},
   { "foreground <color>", ("sets the default foreground color."), 0},
   { "btn", 0, 0},
   { "button <color>", ("sets the default button color."), 0},
   { "name <name>", ("sets the application name."), 0},
   { "title <title>", ("sets the application title (caption)."), 0},

   { "visual TrueColor", ("forces the application to use a TrueColor visual on\nan 8-bit display."), 0},
   { "inputstyle <inputstyle>", ("sets XIM (X Input Method) input style. Possible\nvalues are onthespot, overthespot, offthespot and\nroot."), 0 },
   { "im <XIM server>", ("set XIM server."),0},
   { "noxim", ("disable XIM."), 0 },




   { "reverse", ("mirrors the whole layout of widgets."), 0},
   { 0, 0, 0 }
};

static const KCmdLineOptions kde_options[] =
{
   { "caption <caption>", ("Use 'caption' as name in the titlebar."), 0},
   { "icon <icon>", ("Use 'icon' as the application icon."), 0},
   { "miniicon <icon>", ("Use 'icon' as the icon in the titlebar."), 0},
   { "config <filename>", ("Use alternative configuration file."), 0},
   { "dcopserver <server>", ("Use the DCOP Server specified by 'server'."), 0},
   { "nocrashhandler", ("Disable crash handler, to get core dumps."), 0},
   { "waitforwm", ("Waits for a WM_NET compatible windowmanager."), 0},
   { "style <style>", ("sets the application GUI style."), 0},
   { "geometry <geometry>", ("sets the client geometry of the main widget."), 0},



   { "smkey <sessionKey>", 0, 0},



   { 0, 0, 0 }
};

void
KApplication::addCmdLineOptions()
{
   KCmdLineArgs::addCmdLineOptions(qt_options, "Qt", "qt");
   KCmdLineArgs::addCmdLineOptions(kde_options, "KDE", "kde");
}

void KApplication::parseCommandLine( )
{
    KCmdLineArgs *args = KCmdLineArgs::parsedArgs("kde");

    if (args->isSet("config"))
    {
        QString config = QString::fromLocal8Bit(args->getOption("config"));
        setConfigName(config);
    }

    if (args->isSet("style"))
    {

       QStringList styles = QStyleFactory::keys();
       QString reqStyle(args->getOption("style").lower());

           for (QStringList::ConstIterator it = styles.begin(); it != styles.end(); ++it)
                   if ((*it).lower() == reqStyle)
                   {
                           d->overrideStyle = *it;
                           break;
                   }

       if (d->overrideStyle.isEmpty())
          fprintf(stderr, "%s", i18n("The style %1 was not found\n").arg(reqStyle).local8Bit().data());
    }

    if (args->isSet("caption"))
    {
       aCaption = QString::fromLocal8Bit(args->getOption("caption"));
    }

    if (args->isSet("miniicon"))
    {
       const char *tmp = args->getOption("miniicon");
       aMiniIconPixmap = SmallIcon(tmp);
       aMiniIconName = tmp;
    }

    if (args->isSet("icon"))
    {
       const char *tmp = args->getOption("icon");
       aIconPixmap = DesktopIcon( tmp );
       aIconName = tmp;
       if (aMiniIconPixmap.isNull())
       {
          aMiniIconPixmap = SmallIcon( tmp );
          aMiniIconName = tmp;
       }
    }

    bool nocrashhandler = (getenv("KDE_DEBUG") != __null);
    if (!nocrashhandler && args->isSet("crashhandler"))
    {

        KCrash::setCrashHandler(KCrash::defaultCrashHandler);
        KCrash::setEmergencySaveFunction(__null);

        KCrash::setApplicationName(QString(args->appName()));
    }


    if ( args->isSet( "waitforwm" ) ) {
        Atom type;
        (void) desktop();
        int format;
        unsigned long length, after;
        unsigned char *data;
        while ( XGetWindowProperty( qt_xdisplay(), qt_xrootwin(), atom_NetSupported,
                                    0, 1, FALSE, 0L, &type, &format,
                                    &length, &after, &data ) != Success || !length ) {
            if ( data )
                XFree( data );
            XEvent event;
            XWindowEvent( qt_xdisplay(), qt_xrootwin(), (1L<<22), &event );
        }
        if ( data )
            XFree( data );
    }




    if (args->isSet("geometry"))
    {
        d->geometry_arg = args->getOption("geometry");
    }

    if (args->isSet("smkey"))
    {
        d->sessionKey = args->getOption("smkey");
    }

}

QString KApplication::geometryArgument() const
{
    return d->geometry_arg;
}

QPixmap KApplication::icon() const
{
  if( aIconPixmap.isNull()) {
      KApplication *that = const_cast<KApplication *>(this);
      that->aIconPixmap = DesktopIcon( instanceName() );
  }
  return aIconPixmap;
}

QString KApplication::iconName() const
{
  return aIconName.isNull() ? (QString)instanceName() : aIconName;
}

QPixmap KApplication::miniIcon() const
{
  if (aMiniIconPixmap.isNull()) {
      KApplication *that = const_cast<KApplication *>(this);
      that->aMiniIconPixmap = SmallIcon( instanceName() );
  }
  return aMiniIconPixmap;
}

QString KApplication::miniIconName() const
{
  return aMiniIconName.isNull() ? (QString)instanceName() : aMiniIconName;
}

extern void kDebugCleanup();

KApplication::~KApplication()
{
  delete d->m_KAppDCOPInterface;




  KGlobal::deleteStaticDeleters();
  KLibLoader::cleanUp();

  delete smw;


  delete s_DCOPClient;
  s_DCOPClient = 0L;

  KProcessController::deref();

  if ( d->oldXErrorHandler != __null )
      XSetErrorHandler( d->oldXErrorHandler );
  if ( d->oldXIOErrorHandler != __null )
      XSetIOErrorHandler( d->oldXIOErrorHandler );
  if ( d->oldIceIOErrorHandler != __null )
      IceSetIOErrorHandler( d->oldIceIOErrorHandler );

  delete d;
  KApp = 0;


  mySmcConnection = 0;
  delete smModificationTime;
  smModificationTime = 0;


  if (tmpSmcConnection) {
      SmcCloseConnection( tmpSmcConnection, 0, 0 );
      tmpSmcConnection = 0;
  }



}



class KAppX11HackWidget: public QWidget
{
public:
    bool publicx11Event( XEvent * e) { return x11Event( e ); }
};




static bool kapp_block_user_input = false;

void KApplication::dcopBlockUserInput( bool b )
{
    kapp_block_user_input = b;
}


bool KApplication::x11EventFilter( XEvent *_event )
{
    switch ( _event->type ) {
        case 4:
        case XKeyPress:
        {
            if( _event->type == 4 )
                qt_x_last_input_time = _event->xbutton.time;
            else
                qt_x_last_input_time = _event->xkey.time;
            QWidget* w = activeWindow();
            if( w ) {
                XChangeProperty( qt_xdisplay(), w->winId(), kde_net_wm_user_time, ((Atom) 6),
                    32, 0, (unsigned char*)&qt_x_time, 1 );
                timeval tv;
                gettimeofday( &tv, __null );
                unsigned long now = tv.tv_sec * 10 + tv.tv_usec / 100000;
                XChangeProperty(qt_xdisplay(), w->winId(),
                            atom_KdeNetUserTime, ((Atom) 6),
                            32, 0, (unsigned char *)&now, 1);
            }
        }
        break;
        default: break;
    }

    if ( kapp_block_user_input ) {
        switch ( _event->type ) {
        case 4:
        case 5:
        case XKeyPress:
        case XKeyRelease:
        case 6:
            return TRUE;
        default:
            break;
        }
    }

    if (x11Filter) {
        for (QWidget *w=x11Filter->first(); w; w=x11Filter->next()) {
            if (((KAppX11HackWidget*) w)->publicx11Event(_event))
                return true;
        }
    }


    if ((_event->type == 33) &&
            (_event->xclient.message_type == kipcCommAtom))
    {
        XClientMessageEvent *cme = (XClientMessageEvent *) _event;

        int id = cme->data.l[0];
        int arg = cme->data.l[1];
        if ((id < 32) && (kipcEventMask & (1 << id)))
        {
            switch (id)
            {
            case KIPC::StyleChanged:
                KGlobal::config()->reparseConfiguration();
                kdisplaySetStyle();
                break;

            case KIPC::ToolbarStyleChanged:
                KGlobal::config()->reparseConfiguration();
                if (useStyles)
                    toolbarAppearanceChanged(arg);
                break;

            case KIPC::PaletteChanged:
                KGlobal::config()->reparseConfiguration();
                kdisplaySetPalette();
                break;

            case KIPC::FontChanged:
                KGlobal::config()->reparseConfiguration();
                KGlobalSettings::rereadFontSettings();
                kdisplaySetFont();
                break;

            case KIPC::BackgroundChanged:
                backgroundChanged(arg);
                break;

            case KIPC::SettingsChanged:
                KGlobal::config()->reparseConfiguration();
                if (arg == SETTINGS_PATHS)
                    KGlobalSettings::rereadPathSettings();
                else if (arg == SETTINGS_MOUSE)
                    KGlobalSettings::rereadMouseSettings();
                propagateSettings((SettingsCategory)arg);
                break;

            case KIPC::IconChanged:
                QPixmapCache::clear();
                KGlobal::config()->reparseConfiguration();
                KGlobal::instance()->newIconLoader();
                iconChanged(arg);
                break;

            case KIPC::ClipboardConfigChanged:
                KClipboardSynchronizer::newConfiguration(arg);
                break;
            }
        }
        else if (id >= 32)
        {
            kipcMessage(id, arg);
        }
        return true;
    }

    return false;
}


void KApplication::invokeEditSlot( const char *slot )
{
  QObject *object = focusWidget();
  if( !object )
    return;

  QMetaObject *meta = object->metaObject();

  int idx = meta->findSlot( slot + 1, true );
  if( idx < 0 )
    return;

  object->qt_invoke( idx, 0 );
}

void KApplication::addKipcEventMask(int id)
{
    if (id >= 32)
    {
        kdDebug(101) << "Cannot use KIPC event mask for message IDs >= 32\n";
        return;
    }
    kipcEventMask |= (1 << id);
}

void KApplication::removeKipcEventMask(int id)
{
    if (id >= 32)
    {
        kdDebug(101) << "Cannot use KIPC event mask for message IDs >= 32\n";
        return;
    }
    kipcEventMask &= ~(1 << id);
}

void KApplication::enableStyles()
{
    if (!useStyles)
    {
        useStyles = true;
        applyGUIStyle();
    }
}

void KApplication::disableStyles()
{
    useStyles = false;
}

void KApplication::applyGUIStyle()
{
    if ( !useStyles ) return;

    KConfigGroup pConfig (KGlobal::config(), "General");
    QString defaultStyle = KStyle::defaultStyle();
    QString styleStr = pConfig.readEntry("widgetStyle", defaultStyle);

    if (d->overrideStyle.isEmpty()) {



      QStyle* sp = QStyleFactory::create( styleStr );


      if ( !sp && styleStr != defaultStyle)
          sp = QStyleFactory::create( defaultStyle );
      if ( !sp )
          sp = QStyleFactory::create( *(QStyleFactory::keys().begin()) );
      setStyle(sp);
    }
    else
        setStyle(d->overrideStyle);

    kdisplaySetPalette();
}

QString KApplication::caption() const
{

  if( !aCaption.isNull() )
        return aCaption;
  else

      if ( KGlobal::instance()->aboutData() )
        return KGlobal::instance()->aboutData()->programName();
      else

        return name();
}






QString KApplication::makeStdCaption( const QString &userCaption,
                                      bool withAppName, bool modified ) const
{
  QString s = userCaption.isEmpty() ? caption() : userCaption;


  if (modified)
      s += QString::fromUtf8(" [") + i18n("modified") + QString::fromUtf8("]");

  if ( !userCaption.isEmpty() ) {


      if ( withAppName && !caption().isNull() && !userCaption.endsWith(caption()) )
          s += QString::fromUtf8(" - ") + caption();
  }

  return s;
}

QPalette KApplication::createApplicationPalette()
{
    KConfig *config = KGlobal::config();
    KConfigGroupSaver saver( config, "General" );
    return createApplicationPalette( config, KGlobalSettings::contrast() );
}

QPalette KApplication::createApplicationPalette( KConfig *config, int contrast_ )
{
    QColor kde31Background( 238, 238, 230 );
    QColor kde31Beige( 255,221,118 );

    QColor kde31Button;
    if ( QPixmap::defaultDepth() > 8 )
      kde31Button.setRgb( 238, 234, 222 );
    else
      kde31Button.setRgb( 220, 220, 220 );

    QColor kde31Link( 0, 0, 192 );
    QColor kde31VisitedLink( 128, 0,128 );

    QColor background = config->readColorEntry( "background", &kde31Background );
    QColor foreground = config->readColorEntry( "foreground", &black );
    QColor button = config->readColorEntry( "buttonBackground", &kde31Button );
    QColor buttonText = config->readColorEntry( "buttonForeground", &foreground );
    QColor highlight = config->readColorEntry( "selectBackground", &kde31Beige );
    QColor highlightedText = config->readColorEntry( "selectForeground", &black );
    QColor base = config->readColorEntry( "windowBackground", &white );
    QColor baseText = config->readColorEntry( "windowForeground", &black );
    QColor link = config->readColorEntry( "linkColor", &kde31Link );
    QColor visitedLink = config->readColorEntry( "visitedLinkColor", &kde31VisitedLink );

    int highlightVal, lowlightVal;
    highlightVal = 100 + (2*contrast_+4)*16/10;
    lowlightVal = 100 + (2*contrast_+4)*10;

    QColor disfg = foreground;

    int h, s, v;
    disfg.hsv( &h, &s, &v );
    if (v > 128)

        disfg = disfg.dark(lowlightVal);
    else if (disfg != black)

        disfg = disfg.light(highlightVal);
    else

        disfg = Qt::darkGray;


    QColorGroup disabledgrp(disfg, background,
                            background.light(highlightVal),
                            background.dark(lowlightVal),
                            background.dark(120),
                            background.dark(120), base);

    QColorGroup colgrp(foreground, background, background.light(highlightVal),
                       background.dark(lowlightVal),
                       background.dark(120),
                       baseText, base);

    int inlowlightVal = lowlightVal-25;
    if(inlowlightVal < 120)
        inlowlightVal = 120;

    colgrp.setColor(QColorGroup::Highlight, highlight);
    colgrp.setColor(QColorGroup::HighlightedText, highlightedText);
    colgrp.setColor(QColorGroup::Button, button);
    colgrp.setColor(QColorGroup::ButtonText, buttonText);
    colgrp.setColor(QColorGroup::Midlight, background.light(110));
    colgrp.setColor(QColorGroup::Link, link);
    colgrp.setColor(QColorGroup::LinkVisited, visitedLink);

    disabledgrp.setColor(QColorGroup::Button, button);

    QColor disbtntext = buttonText;
    disbtntext.hsv( &h, &s, &v );
    if (v > 128)

        disbtntext = disbtntext.dark(lowlightVal);
    else if (disbtntext != black)

        disbtntext = disbtntext.light(highlightVal);
    else

        disbtntext = Qt::darkGray;

    disabledgrp.setColor(QColorGroup::ButtonText, disbtntext);
    disabledgrp.setColor(QColorGroup::Midlight, background.light(110));
    disabledgrp.setColor(QColorGroup::Highlight, highlight.dark(120));
    disabledgrp.setColor(QColorGroup::Link, link);
    disabledgrp.setColor(QColorGroup::LinkVisited, visitedLink);

    return QPalette(colgrp, disabledgrp, colgrp);
}


void KApplication::kdisplaySetPalette()
{
    QApplication::setPalette( createApplicationPalette(), true);
    kdisplayPaletteChanged();
    appearanceChanged();
}


void KApplication::kdisplaySetFont()
{
    QApplication::setFont(KGlobalSettings::generalFont(), true);
    QApplication::setFont(KGlobalSettings::menuFont(), true, "QMenuBar");
    QApplication::setFont(KGlobalSettings::menuFont(), true, "QPopupMenu");
    QApplication::setFont(KGlobalSettings::menuFont(), true, "KPopupTitle");


    QStyleSheet* sheet = QStyleSheet::defaultSheet();
    sheet->item ("pre")->setFontFamily (KGlobalSettings::fixedFont().family());
    sheet->item ("code")->setFontFamily (KGlobalSettings::fixedFont().family());
    sheet->item ("tt")->setFontFamily (KGlobalSettings::fixedFont().family());

    kdisplayFontChanged();
    appearanceChanged();
}


void KApplication::kdisplaySetStyle()
{
    if (useStyles)
    {
        applyGUIStyle();
        kdisplayStyleChanged();
        appearanceChanged();
    }
}


void KApplication::propagateSettings(SettingsCategory arg)
{
    KConfigBase* config = KGlobal::config();
    KConfigGroupSaver saver( config, "KDE" );

    int num = config->readNumEntry("CursorBlinkRate", QApplication::cursorFlashTime());
    if (num < 200)
        num = 200;
    if (num > 2000)
        num = 2000;
    QApplication::setCursorFlashTime(num);
    num = config->readNumEntry("DoubleClickInterval", QApplication::doubleClickInterval());
    QApplication::setDoubleClickInterval(num);
    num = config->readNumEntry("StartDragTime", QApplication::startDragTime());
    QApplication::setStartDragTime(num);
    num = config->readNumEntry("StartDragDist", QApplication::startDragDistance());
    QApplication::setStartDragDistance(num);
    num = config->readNumEntry("WheelScrollLines", QApplication::wheelScrollLines());
    QApplication::setWheelScrollLines(num);

    bool b = config->readBoolEntry("EffectAnimateMenu", false);
    QApplication::setEffectEnabled( Qt::UI_AnimateMenu, b);
    b = config->readBoolEntry("EffectFadeMenu", false);
    QApplication::setEffectEnabled( Qt::UI_FadeMenu, b);
    b = config->readBoolEntry("EffectAnimateCombo", false);
    QApplication::setEffectEnabled( Qt::UI_AnimateCombo, b);
    b = config->readBoolEntry("EffectAnimateTooltip", false);
    QApplication::setEffectEnabled( Qt::UI_AnimateTooltip, b);
    b = config->readBoolEntry("EffectFadeTooltip", false);
    QApplication::setEffectEnabled( Qt::UI_FadeTooltip, b);
    b = !config->readBoolEntry("EffectNoTooltip", false);
    QToolTip::setGloballyEnabled( b );

    settingsChanged(arg);
}

void KApplication::installKDEPropertyMap()
{







    QSqlPropertyMap *kdeMap = new QSqlPropertyMap;
    kdeMap->insert( "KColorButton", "color" );
    kdeMap->insert( "KComboBox", "currentItem" );
    kdeMap->insert( "KDatePicker", "date" );
    kdeMap->insert( "KEditListBox", "currentItem" );
    kdeMap->insert( "KFontCombo", "family" );
    kdeMap->insert( "KFontRequester", "font" );
    kdeMap->insert( "KFontChooser", "font" );
    kdeMap->insert( "KHistoryCombo", "currentItem" );
    kdeMap->insert( "KListBox", "currentItem" );
    kdeMap->insert( "KLineEdit", "text" );
    kdeMap->insert( "KRestrictedLine", "text" );
    kdeMap->insert( "KSqueezedTextLabel", "text" );
    kdeMap->insert( "KTextBrowser", "source" );
    kdeMap->insert( "KTextEdit", "text" );
    kdeMap->insert( "KURLRequester", "url" );
    kdeMap->insert( "KPasswordEdit", "password" );
    kdeMap->insert( "KIntNumInput", "value" );
    kdeMap->insert( "KIntSpinBox", "value" );
    kdeMap->insert( "KDoubleNumInput", "value" );





      kdeMap->insert( "QTabWidget", "currentPage" );

    QSqlPropertyMap::installDefaultMap( kdeMap );

}

void KApplication::invokeHelp( const QString& anchor,
                               const QString& _appname) const
{
   QString url;
   QString appname;
   if (_appname.isEmpty())
     appname = name();
   else
     appname = _appname;

   if (!anchor.isEmpty())
     url = QString("help:/%1?anchor=%2").arg(appname).arg(anchor);
   else
     url = QString("help:/%1/index.html").arg(appname);

   QString error;
   if ( !dcopClient()->isApplicationRegistered("khelpcenter") )
   {
       if (startServiceByDesktopName("khelpcenter", url, &error, 0, 0, "", true))
       {
           kdWarning() << "Could not launch help:\n" << error << endl;
           return;
       }
   }
   else
       DCOPRef( "khelpcenter", "KHelpCenterIface" ).send( "openURL", url );
}

void KApplication::invokeHTMLHelp( const QString& _filename, const QString& topic ) const
{
   kdWarning() << "invoking HTML help is deprecated! use docbook and invokeHelp!\n";

   QString filename;

   if( _filename.isEmpty() )
     filename = QString(name()) + "/index.html";
   else
     filename = _filename;

   QString url;
   if (!topic.isEmpty())
     url = QString("help:/%1#%2").arg(filename).arg(topic);
   else
     url = QString("help:/%1").arg(filename);

   QString error;
   if ( !dcopClient()->isApplicationRegistered("khelpcenter") )
   {
       if (startServiceByDesktopName("khelpcenter", url, &error, 0, 0, "", true))
       {
           kdWarning() << "Could not launch help:\n" << error << endl;
           return;
       }
   }
   else
       DCOPRef( "khelpcenter", "KHelpCenterIface" ).send( "openURL", url );
}


void KApplication::invokeMailer(const QString &address, const QString &subject)
{
   invokeMailer(address, QString::null, QString::null, subject, QString::null, QString::null, QStringList());
}

void KApplication::invokeMailer(const KURL &mailtoURL)
{
   QString address = KURL::decode_string(mailtoURL.path()), subject, cc, bcc, body, attach;
   QStringList queries = QStringList::split('&', mailtoURL.query().mid(1));
   for (QStringList::Iterator it = queries.begin(); it != queries.end(); ++it)
   {
     QString q = (*it).lower();
     if (q.startsWith("subject="))
       subject = KURL::decode_string((*it).mid(8));
     else
     if (q.startsWith("cc="))
       cc = KURL::decode_string((*it).mid(3));
     else
     if (q.startsWith("bcc="))
       bcc = KURL::decode_string((*it).mid(4));
     else
     if (q.startsWith("body="))
       body = KURL::decode_string((*it).mid(5));



   }

   invokeMailer( address, cc, bcc, subject, body, QString::null, QStringList() );
}

void KApplication::invokeMailer(const QString &to, const QString &cc, const QString &bcc,
                                const QString &subject, const QString &body,
                                const QString & , const QStringList &attachURLs)
{
   KConfig config("emaildefaults");
   config.setGroup( QString::fromLatin1("PROFILE_Default") );
   QString command = config.readPathEntry("EmailClient");

   if (command.isEmpty() || command == QString::fromLatin1("kmail")
       || command.endsWith("/kmail"))
     command = QString::fromLatin1("kmail --composer -s %s -c %c -b %b --body %B --attach %A %t");






   if (config.readBoolEntry("TerminalClient", false))
      command = "konsole -e " + command;

   QStringList cmdTokens = KShell::splitArgs(command);
   QString cmd = cmdTokens[0];
   cmdTokens.remove(cmdTokens.begin());

   QMap<QChar, QString> keyMap;
   keyMap.insert('t', to);
   keyMap.insert('s', subject);
   keyMap.insert('c', cc);
   keyMap.insert('b', bcc);
   keyMap.insert('B', body);

   for (QStringList::Iterator it = cmdTokens.begin(); it != cmdTokens.end(); )
   {
     if (*it == "%A")
     {
         if (it == cmdTokens.begin())
             continue;
         QStringList::ConstIterator urlit = attachURLs.begin();
         QStringList::ConstIterator urlend = attachURLs.end();
         if ( urlit != urlend )
         {
             QStringList::Iterator previt = it;
             --previt;
             *it = *urlit;
             ++it;
             while ( ++urlit != urlend )
             {
                 cmdTokens.insert( it, *previt );
                 cmdTokens.insert( it, *urlit );
             }
         } else {
             --it;
             it = cmdTokens.remove( cmdTokens.remove( it ) );
         }
     } else {
         *it = KMacroExpander::expandMacros(*it, keyMap);
         ++it;
     }
   }

   QString error;
   if (kdeinitExec(cmd, cmdTokens, &error))
      kdWarning() << "Could not launch mail client:\n" << error << endl;
}


void KApplication::invokeBrowser( const QString &url )
{
   QString error;

   if (startServiceByDesktopName("kfmclient", url, &error, 0, 0, "", true))
   {
      kdWarning() << "Could not launch browser:\n" << error << endl;
      return;
   }
}

void KApplication::cut()
{
  invokeEditSlot( "1""cut()" );
}

void KApplication::copy()
{
  invokeEditSlot( "1""copy()" );
}

void KApplication::paste()
{
  invokeEditSlot( "1""paste()" );
}

void KApplication::clear()
{
  invokeEditSlot( "1""clear()" );
}

void KApplication::selectAll()
{
  invokeEditSlot( "1""selectAll()" );
}

QCString
KApplication::launcher()
{
   return "klauncher";
}

static int
startServiceInternal( const QCString &function,
              const QString& _name, const QStringList &URLs,
              QString *error, QCString *dcopService, int *pid, const QCString& startup_id, bool noWait )
{
   struct serviceResult
   {
      int result;
      QCString dcopName;
      QString error;
      pid_t pid;
   };


   DCOPClient *dcopClient;
   if (KApplication::kApplication())
      dcopClient = KApplication::kApplication()->dcopClient();
   else
      dcopClient = new DCOPClient;

   if (!dcopClient->isAttached())
   {
      if (!dcopClient->attach())
      {
         if (error)
            *error = i18n("Could not register with DCOP.\n");
         return -1;
      }
   }
   QByteArray params;
   QDataStream stream(params, 0x0002);
   stream << _name << URLs;
   QCString replyType;
   QByteArray replyData;
   QCString _launcher = KApplication::launcher();
   QValueList<QCString> envs;

   if (qt_xdisplay()) {
       QCString dpystring(XDisplayString(qt_xdisplay()));
       envs.append( QCString("DISPLAY=") + dpystring );
   } else if( getenv( "DISPLAY" )) {
       QCString dpystring( getenv( "DISPLAY" ));
       envs.append( QCString("DISPLAY=") + dpystring );
   }

   stream << envs;
   if( !startup_id.isNull())
       stream << startup_id << noWait;

   if (!dcopClient->call(_launcher, _launcher,
        function, params, replyType, replyData))
   {
        if (error)
           *error = i18n("KLauncher could not be reached via DCOP.\n");
        if (!KApplication::kApplication())
           delete dcopClient;
        return -1;
   }
   if (!KApplication::kApplication())
      delete dcopClient;

   if (noWait)
      return 0;

   QDataStream stream2(replyData, 0x0001);
   serviceResult result;
   stream2 >> result.result >> result.dcopName >> result.error >> result.pid;
   if (dcopService)
      *dcopService = result.dcopName;
   if (error)
      *error = result.error;
   if (pid)
      *pid = result.pid;
   return result.result;
}

int
KApplication::startServiceByName( const QString& _name, const QString &URL,
                  QString *error, QCString *dcopService, int *pid, const QCString& startup_id, bool noWait )
{
   QStringList URLs;
   if (!URL.isEmpty())
      URLs.append(URL);
   return startServiceInternal(
                      "start_service_by_name(QString,QStringList,QValueList<QCString>,QCString,bool)",
                      _name, URLs, error, dcopService, pid, startup_id, noWait);
}

int
KApplication::startServiceByName( const QString& _name, const QStringList &URLs,
                  QString *error, QCString *dcopService, int *pid, const QCString& startup_id, bool noWait )
{
   return startServiceInternal(
                      "start_service_by_name(QString,QStringList,QValueList<QCString>,QCString,bool)",
                      _name, URLs, error, dcopService, pid, startup_id, noWait);
}

int
KApplication::startServiceByDesktopPath( const QString& _name, const QString &URL,
                  QString *error, QCString *dcopService, int *pid, const QCString& startup_id, bool noWait )
{
   QStringList URLs;
   if (!URL.isEmpty())
      URLs.append(URL);
   return startServiceInternal(
                      "start_service_by_desktop_path(QString,QStringList,QValueList<QCString>,QCString,bool)",
                      _name, URLs, error, dcopService, pid, startup_id, noWait);
}

int
KApplication::startServiceByDesktopPath( const QString& _name, const QStringList &URLs,
                  QString *error, QCString *dcopService, int *pid, const QCString& startup_id, bool noWait )
{
   return startServiceInternal(
                      "start_service_by_desktop_path(QString,QStringList,QValueList<QCString>,QCString,bool)",
                      _name, URLs, error, dcopService, pid, startup_id, noWait);
}

int
KApplication::startServiceByDesktopName( const QString& _name, const QString &URL,
                  QString *error, QCString *dcopService, int *pid, const QCString& startup_id, bool noWait )
{
   QStringList URLs;
   if (!URL.isEmpty())
      URLs.append(URL);
   return startServiceInternal(
                      "start_service_by_desktop_name(QString,QStringList,QValueList<QCString>,QCString,bool)",
                      _name, URLs, error, dcopService, pid, startup_id, noWait);
}

int
KApplication::startServiceByDesktopName( const QString& _name, const QStringList &URLs,
                  QString *error, QCString *dcopService, int *pid, const QCString& startup_id, bool noWait )
{
   return startServiceInternal(
                      "start_service_by_desktop_name(QString,QStringList,QValueList<QCString>,QCString,bool)",
                      _name, URLs, error, dcopService, pid, startup_id, noWait);
}

int
KApplication::kdeinitExec( const QString& name, const QStringList &args,
                           QString *error, int *pid )
{
   return startServiceInternal("kdeinit_exec(QString,QStringList,QValueList<QCString>)",
        name, args, error, 0, pid, QCString(), false);
}

int
KApplication::kdeinitExecWait( const QString& name, const QStringList &args,
                           QString *error, int *pid )
{
   return startServiceInternal("kdeinit_exec_wait(QString,QStringList,QValueList<QCString>)",
        name, args, error, 0, pid, QCString(), false);
}

QString KApplication::tempSaveName( const QString& pFilename ) const
{
  QString aFilename;

  if( pFilename[0] != '/' )
    {
      kdWarning(101) << "Relative filename passed to KApplication::tempSaveName" << endl;
      aFilename = QFileInfo( QDir( "." ), pFilename ).absFilePath();
    }
  else
    aFilename = pFilename;

  QDir aAutosaveDir( QDir::homeDirPath() + "/autosave/" );
  if( !aAutosaveDir.exists() )
    {
      if( !aAutosaveDir.mkdir( aAutosaveDir.absPath() ) )
        {

          aAutosaveDir.setPath( KGlobal::dirs()->saveLocation("tmp") );
        }
    }

  aFilename.replace( "/", "\\!" ).prepend( "#" ).append( "#" ).prepend( "/" ).prepend( aAutosaveDir.absPath() );

  return aFilename;
}


QString KApplication::checkRecoverFile( const QString& pFilename,
        bool& bRecover ) const
{
  QString aFilename;

  if( pFilename[0] != '/' )
    {
      kdWarning(101) << "Relative filename passed to KApplication::tempSaveName" << endl;
      aFilename = QFileInfo( QDir( "." ), pFilename ).absFilePath();
    }
  else
    aFilename = pFilename;

  QDir aAutosaveDir( QDir::homeDirPath() + "/autosave/" );
  if( !aAutosaveDir.exists() )
    {
      if( !aAutosaveDir.mkdir( aAutosaveDir.absPath() ) )
        {

          aAutosaveDir.setPath( KGlobal::dirs()->saveLocation("tmp") );
        }
    }

  aFilename.replace( "/", "\\!" ).prepend( "#" ).append( "#" ).prepend( "/" ).prepend( aAutosaveDir.absPath() );

  if( QFile( aFilename ).exists() )
    {
      bRecover = true;
      return aFilename;
    }
  else
    {
      bRecover = false;
      return pFilename;
    }
}


bool checkAccess(const QString& pathname, int mode)
{
  int accessOK = access( QFile::encodeName(pathname), mode );
  if ( accessOK == 0 )
    return true;




  if ( (mode & 2) == 0 )
    return false;


  if (!access( QFile::encodeName(pathname), 0))
      return false;


  QString dirName(pathname);
  int pos = dirName.findRev('/');
  if ( pos == -1 )
    return false;
  else if ( pos == 0 )
      pos = 1;

  dirName.truncate(pos);

  accessOK = access( QFile::encodeName(dirName), 2 );

  if ( accessOK == 0 )
    return true;
  else
    return false;
}

void KApplication::setTopWidget( QWidget *topWidget )
{
  if( topWidget != 0 )
  {

    Window leader = topWidget->winId();
    char* argv = const_cast< char* >( KCmdLineArgs::appName());
    XSetCommand(display, leader, &argv, 1);

    XWMHints *hints = XGetWMHints(display, topWidget->winId());
    if (hints)
    {
        if (!(hints->flags & (1L << 6)))
        {
            hints->window_group = leader;
            hints->flags |= (1L << 6);
        }
        if (!(hints->flags & (1L << 0)))
        {
            hints->input = 1;
            hints->flags |= (1L << 0);
        }
        XSetWMHints(display, topWidget->winId(), hints);
        XFree(reinterpret_cast<char *>(hints));
    }



    if ( !topWidget->inherits("KMainWindow") ) {
        topWidget->setCaption( caption() );


        NETWinInfo info(qt_xdisplay(), topWidget->winId(), qt_xrootwin(), NET::WMName );
        info.setName( caption().utf8().data() );

    }


    topWidget->setIcon( icon() );


    KWin::setIcons(topWidget->winId(), icon(), miniIcon() );


    KStartupInfo::setWindowStartupId( topWidget->winId(), startupId());

  }
}

QCString KApplication::startupId() const
{
    return d->startup_id;
}

void KApplication::setStartupId( const QCString& startup_id )
{
    if( startup_id.isEmpty())
        d->startup_id = "0";
    else
        d->startup_id = startup_id;
}



void KApplication::read_app_startup_id()
{

    KStartupInfoId id = KStartupInfo::currentStartupIdEnv();
    KStartupInfo::resetStartupEnv();
    d->startup_id = id.id();

}

int KApplication::random()
{
   static int init = false;
   if (!init)
   {
      unsigned int seed;
      init = true;
      int fd = open("/dev/urandom", 00);
      if (fd <= 0 || ::read(fd, &seed, sizeof(seed)) != sizeof(seed))
      {

            srand(getpid());
            seed = rand()+time(0);
      }
      if (fd >= 0) close(fd);
      srand(seed);
   }
   return rand();
}

QString KApplication::randomString(int length)
{
   if (length <=0 ) return QString::null;

   QString str;
   while (length--)
   {
      int r=random() % 62;
      r+=48;
      if (r>57) r+=7;
      if (r>90) r+=6;
      str += char(r);

   }
   return str;
}

bool KApplication::authorize(const QString &genericAction)
{
   if (!d->actionRestrictions)
      return true;

   KConfig *config = KGlobal::config();
   KConfigGroupSaver saver( config, "KDE Action Restrictions" );
   return config->readBoolEntry(genericAction, true);
}

bool KApplication::authorizeKAction(const char *action)
{
   if (!d->actionRestrictions || !action)
      return true;

   static const QString &action_prefix = KGlobal::staticQString( "action/" );

   return authorize(action_prefix + action);
}

void KApplication::initUrlActionRestrictions()
{
  d->urlActionRestrictions.setAutoDelete(true);
  d->urlActionRestrictions.clear();
  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("open", QString::null, QString::null, QString::null, QString::null, QString::null, QString::null, true));
  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("list", QString::null, QString::null, QString::null, QString::null, QString::null, QString::null, true));





  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("link", QString::null, QString::null, QString::null, ":internet", QString::null, QString::null, true));
  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("redirect", QString::null, QString::null, QString::null, ":internet", QString::null, QString::null, true));



  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("redirect", QString::null, QString::null, QString::null, "file", QString::null, QString::null, true));
  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("redirect", ":internet", QString::null, QString::null, "file", QString::null, QString::null, false));


  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("redirect", ":local", QString::null, QString::null, QString::null, QString::null, QString::null, true));


  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("redirect", QString::null, QString::null, QString::null, "about", QString::null, QString::null, true));


  d->urlActionRestrictions.append( new KApplicationPrivate::URLActionRule
  ("redirect", QString::null, QString::null, QString::null, "=", QString::null, QString::null, true));

  KConfig *config = KGlobal::config();
  KConfigGroupSaver saver( config, "KDE URL Restrictions" );
  int count = config->readNumEntry("rule_count");
  QString keyFormat = QString("rule_%1");
  for(int i = 1; i <= count; i++)
  {
    QString key = keyFormat.arg(i);
    QStringList rule = config->readListEntry(key);
    if (rule.count() != 8)
      continue;
    QString action = rule[0];
    QString refProt = rule[1];
    QString refHost = rule[2];
    QString refPath = rule[3];
    QString urlProt = rule[4];
    QString urlHost = rule[5];
    QString urlPath = rule[6];
    QString strEnabled = rule[7].lower();

    bool bEnabled = (strEnabled == "true");

    if (refPath.startsWith("$HOME"))
       refPath.replace(0, 5, QDir::homeDirPath());
    else if (refPath.startsWith("~"))
       refPath.replace(0, 1, QDir::homeDirPath());
    if (urlPath.startsWith("$HOME"))
       urlPath.replace(0, 5, QDir::homeDirPath());
    else if (urlPath.startsWith("~"))
       urlPath.replace(0, 1, QDir::homeDirPath());

    if (refPath.startsWith("$TMP"))
       refPath.replace(0, 4, KGlobal::dirs()->saveLocation("tmp"));
    if (urlPath.startsWith("$TMP"))
       urlPath.replace(0, 4, KGlobal::dirs()->saveLocation("tmp"));

    d->urlActionRestrictions.append(new KApplicationPrivate::URLActionRule
        ( action, refProt, refHost, refPath, urlProt, urlHost, urlPath, bEnabled));
  }
}

bool KApplication::authorizeURLAction(const QString &action, const KURL &_baseURL, const KURL &_destURL)
{
  bool result = false;
  if (d->urlActionRestrictions.isEmpty())
     initUrlActionRestrictions();

  KURL baseURL(_baseURL);
  baseURL.setPath(QDir::cleanDirPath(baseURL.path()));
  QString baseClass = KProtocolInfo::protocolClass(baseURL.protocol());
  KURL destURL(_destURL);
  destURL.setPath(QDir::cleanDirPath(destURL.path()));
  QString destClass = KProtocolInfo::protocolClass(destURL.protocol());

  for(KApplicationPrivate::URLActionRule *rule = d->urlActionRestrictions.first();
      rule; rule = d->urlActionRestrictions.next())
  {
     if ((result != rule->permission) &&
         (action == rule->action) &&
         rule->baseMatch(baseURL, baseClass) &&
         rule->destMatch(destURL, destClass, baseURL, baseClass))
     {
        result = rule->permission;
     }
  }
  return result;
}


uint KApplication::keyboardModifiers()
{
    Window root;
    Window child;
    int root_x, root_y, win_x, win_y;
    uint keybstate;
    XQueryPointer( qt_xdisplay(), qt_xrootwin(), &root, &child,
                   &root_x, &root_y, &win_x, &win_y, &keybstate );
    return keybstate & 0x00ff;
}

uint KApplication::mouseState()
{
    Window root;
    Window child;
    int root_x, root_y, win_x, win_y;
    uint keybstate;
    XQueryPointer( qt_xdisplay(), qt_xrootwin(), &root, &child,
                   &root_x, &root_y, &win_x, &win_y, &keybstate );
    return keybstate & 0xff00;
}

void KApplication::installSigpipeHandler()
{
    struct sigaction act;
    act.__sigaction_handler.sa_handler = sigpipeHandler;
    sigemptyset( &act.sa_mask );
    act.sa_flags = 0;
    sigaction( 13, &act, 0 );
}

void KApplication::sigpipeHandler(int)
{
    int saved_errno = (*__errno_location ());


    char msg[1000];
    sprintf(msg, "*** SIGPIPE *** (ignored, pid = %ld)\n", (long) getpid());
    write(2, msg, strlen(msg));



    (*__errno_location ()) = saved_errno;
}

void KApplication::virtual_hook( int id, void* data )
{ KInstance::virtual_hook( id, data ); }

void KSessionManaged::virtual_hook( int, void* )
{ }

# 1 "../kdecore/kapplication.moc" 1
# 10 "../kdecore/kapplication.moc"
#undef QT_NO_COMPAT
# 1 "../../../prod/kdelibs/kdecore/kapplication.h" 1
# 12 "../kdecore/kapplication.moc" 2



# 1 "/coolo/prod/qt-copy/include/private/qucomextra_p.h" 1
# 39 "/coolo/prod/qt-copy/include/private/qucomextra_p.h"
# 54 "/coolo/prod/qt-copy/include/private/qucomextra_p.h"
# 1 "/coolo/prod/qt-copy/include/private/qucom_p.h" 1
# 39 "/coolo/prod/qt-copy/include/private/qucom_p.h"
# 55 "/coolo/prod/qt-copy/include/private/qucom_p.h"
# 1 "/coolo/prod/qt-copy/include/quuid.h" 1
# 39 "/coolo/prod/qt-copy/include/quuid.h"
# 60 "/coolo/prod/qt-copy/include/quuid.h"
struct QUuid
{
    QUuid()
    {
        memset( this, 0, sizeof(QUuid) );
    }
    QUuid( uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8 )
    {
        data1 = l;
        data2 = w1;
        data3 = w2;
        data4[0] = b1;
        data4[1] = b2;
        data4[2] = b3;
        data4[3] = b4;
        data4[4] = b5;
        data4[5] = b6;
        data4[6] = b7;
        data4[7] = b8;
    }
    QUuid( const QUuid &uuid )
    {
        memcpy( this, &uuid, sizeof(QUuid) );
    }

    QUuid( const QString & );
    QUuid( const char * );
    QString toString() const;
    operator QString() const { return toString(); }

    bool isNull() const;

    QUuid &operator=(const QUuid &orig )
    {
        memcpy( this, &orig, sizeof(QUuid) );
        return *this;
    }

    bool operator==(const QUuid &orig ) const
    {
        uint i;
        if ( data1 != orig.data1 || data2 != orig.data2 ||
             data3 != orig.data3 )
            return FALSE;

        for( i = 0; i < 8; i++ )
            if ( data4[i] != orig.data4[i] )
                return FALSE;

        return TRUE;
    }

    bool operator!=(const QUuid &orig ) const
    {
        return !( *this == orig );
    }
# 157 "/coolo/prod/qt-copy/include/quuid.h"
    uint data1;
    ushort data2;
    ushort data3;
    uchar data4[ 8 ];
};


 QDataStream &operator<<( QDataStream &, const QUuid & );
 QDataStream &operator>>( QDataStream &, QUuid & );
# 56 "/coolo/prod/qt-copy/include/private/qucom_p.h" 2






struct QUObject;
struct QUInterfaceDescription;
struct QUnknownInterface;
struct QDispatchInterface;


struct QUBuffer
{
    virtual long read( char *data, ulong maxlen ) = 0;
    virtual long write( const char *data, ulong len ) = 0;
};



struct QUType
{
    virtual const QUuid *uuid() const = 0;
    virtual const char *desc() const = 0;


    virtual bool canConvertFrom( QUObject *, QUType * ) = 0;

    virtual bool canConvertTo( QUObject *, QUType * ) = 0;


    virtual bool convertFrom( QUObject *, QUType * ) = 0;

    virtual bool convertTo( QUObject *, QUType * ) = 0;

    virtual void clear( QUObject * ) = 0;

    virtual int serializeTo( QUObject *, QUBuffer * ) = 0;
    virtual int serializeFrom( QUObject *, QUBuffer * ) = 0;

    static bool isEqual( const QUType *t1, const QUType *t2 );
    static bool check( QUObject* o, QUType* t );
};



extern const QUuid TID_QUType_Null;
struct QUType_Null : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * );
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_Null static_QUType_Null;



struct QUObject
{
public:
    QUObject() : type( &static_QUType_Null ) {}
    ~QUObject() { type->clear( this ); }

    QUType *type;


    union
    {
        bool b;

        char c;
        short s;
        int i;
        long l;

        unsigned char uc;
        unsigned short us;
        unsigned int ui;
        unsigned long ul;

        float f;
        double d;

        char byte[16];

        struct {
           char* data;
           unsigned long size;
        } bytearray;

        void* ptr;

        struct {
            void *ptr;
            bool owner;
        } voidstar;

        struct {
            char *ptr;
            bool owner;
        } charstar;

        struct {
            char *ptr;
            bool owner;
        } utf8;

        struct {
            char *ptr;
            bool owner;
        } local8bit;

        QUnknownInterface* iface;
        QDispatchInterface* idisp;

    } payload;

};





struct QUParameter
{
    const char* name;
    QUType *type;
    const void* typeExtra;
    enum { In = 1, Out = 2, InOut = In | Out };
    int inOut;
};



struct QUMethod
{
    const char* name;
    int count;
    const QUParameter* parameters;
};


struct QUProperty
{
    const char* name;
    QUType* type;
    const void* typeExtra;

    int set;
    int get;

    int designable;
    int stored;
};



struct QUInterfaceDescription
{
    int methodCount;
    const QUMethod* methods;
    int propertyCount;
    const QUProperty* properties;
};





struct QUComponentDescription
{
    const char* name;
    const char* vendor;
    const char* release;
    const char* info;
    QUuid cid;
    int count;
    const QUuid* interfaces;
};





struct QUComponentServerDescription
{
    const char* name;
    const char* vendor;
    const char* release;
    const char* info;
    int count;
    const QUComponentDescription* components;
};



struct QUEnumItem
{
    const char *key;
    int value;
};

struct QUEnum
{
    const char *name;
    unsigned int count;
    const QUEnumItem *items;
    bool set;
};

inline bool QUType::isEqual( const QUType *t1, const QUType *t2 ) {
    return t1 == t2 || t1->uuid() == t2->uuid() ||
        *(t1->uuid()) == *(t2->uuid());
}

inline bool QUType::check( QUObject* o, QUType* t ) {
    return isEqual( o->type, t ) || t->convertFrom( o, o->type );
}




extern const QUuid TID_QUType_enum;
struct QUType_enum : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, int );
    int &get( QUObject * o ) { return o->payload.i; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * ) {}
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_enum static_QUType_enum;



extern const QUuid TID_QUType_ptr;
struct QUType_ptr : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, const void* );
    void* &get( QUObject * o ) { return o->payload.ptr; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * ) {}
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_ptr static_QUType_ptr;


extern const QUuid TID_QUType_iface;
struct QUType_iface : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, QUnknownInterface* );
    QUnknownInterface* &get( QUObject *o ){ return o->payload.iface; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * ) {}
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_iface static_QUType_iface;


extern const QUuid TID_QUType_idisp;
struct QUType_idisp : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, QDispatchInterface* );
    QDispatchInterface* &get( QUObject *o ){ return o->payload.idisp; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * ) {}
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_idisp static_QUType_idisp;


extern const QUuid TID_QUType_bool;
struct QUType_bool : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, bool );
    bool &get( QUObject *o ) { return o->payload.b; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * ) {}
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_bool static_QUType_bool;


extern const QUuid TID_QUType_int;
struct QUType_int : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, int );
    int &get( QUObject *o ) { return o->payload.i; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * ) {}
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_int static_QUType_int;



extern const QUuid TID_QUType_double;
struct QUType_double : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, double );
    double &get( QUObject *o ) { return o->payload.d; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * ) {}
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_double static_QUType_double;



extern const QUuid TID_QUType_charstar;
struct QUType_charstar : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, const char*, bool take = FALSE );
    char* get( QUObject *o ){ return o->payload.charstar.ptr; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * );
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );

};
extern QUType_charstar static_QUType_charstar;


extern const QUuid TID_QUType_QString;

struct QUType_QString : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, const QString & );
    QString &get( QUObject * o ) { return *(QString*)o->payload.ptr; }

    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * );
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );

};
extern QUType_QString static_QUType_QString;
# 55 "/coolo/prod/qt-copy/include/private/qucomextra_p.h" 2



class QVariant;



extern const QUuid TID_QUType_QVariant;

struct QUType_QVariant : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, const QVariant & );
    QVariant &get( QUObject * o );

    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * );
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_QVariant static_QUType_QVariant;




extern const QUuid TID_QUType_varptr;
struct QUType_varptr : public QUType
{
    const QUuid *uuid() const;
    const char *desc() const;

    void set( QUObject *, const void* );
    void* &get( QUObject * o ) { return o->payload.ptr; }
    bool canConvertFrom( QUObject *, QUType * );
    bool canConvertTo( QUObject *, QUType * );
    bool convertFrom( QUObject *, QUType * );
    bool convertTo( QUObject *, QUType * );
    void clear( QUObject * ) {}
    int serializeTo( QUObject *, QUBuffer * );
    int serializeFrom( QUObject *, QUBuffer * );
};
extern QUType_varptr static_QUType_varptr;
# 16 "../kdecore/kapplication.moc" 2






const char *KApplication::className() const
{
    return "KApplication";
}

QMetaObject *KApplication::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KApplication( "KApplication", &KApplication::staticMetaObject );
# 50 "../kdecore/kapplication.moc"
QMetaObject* KApplication::staticMetaObject()
{
    if ( metaObj )
        return metaObj;
    QMetaObject* parentObject = QApplication::staticMetaObject();
    static const QUParameter param_slot_0[] = {
        { "url", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"invokeBrowser", 1, param_slot_0 };
    static const QUMethod slot_1 = {"cut", 0, 0 };
    static const QUMethod slot_2 = {"copy", 0, 0 };
    static const QUMethod slot_3 = {"paste", 0, 0 };
    static const QUMethod slot_4 = {"clear", 0, 0 };
    static const QUMethod slot_5 = {"selectAll", 0, 0 };
    static const QUMethod slot_6 = {"ref", 0, 0 };
    static const QUMethod slot_7 = {"deref", 0, 0 };
    static const QUParameter param_slot_8[] = {
        { 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"dcopFailure", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
        { 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"dcopBlockUserInput", 1, param_slot_9 };
    static const QUMethod slot_10 = {"x11FilterDestroyed", 0, 0 };
    static const QMetaData slot_tbl[] = {
        { "invokeBrowser(const QString&)", &slot_0, QMetaData::Public },
        { "cut()", &slot_1, QMetaData::Public },
        { "copy()", &slot_2, QMetaData::Public },
        { "paste()", &slot_3, QMetaData::Public },
        { "clear()", &slot_4, QMetaData::Public },
        { "selectAll()", &slot_5, QMetaData::Public },
        { "ref()", &slot_6, QMetaData::Public },
        { "deref()", &slot_7, QMetaData::Public },
        { "dcopFailure(const QString&)", &slot_8, QMetaData::Private },
        { "dcopBlockUserInput(bool)", &slot_9, QMetaData::Private },
        { "x11FilterDestroyed()", &slot_10, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"kdisplayPaletteChanged", 0, 0 };
    static const QUMethod signal_1 = {"kdisplayStyleChanged", 0, 0 };
    static const QUMethod signal_2 = {"kdisplayFontChanged", 0, 0 };
    static const QUMethod signal_3 = {"appearanceChanged", 0, 0 };
    static const QUParameter param_signal_4[] = {
        { 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"toolbarAppearanceChanged", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
        { "desk", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"backgroundChanged", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
        { "category", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"settingsChanged", 1, param_signal_6 };
    static const QUParameter param_signal_7[] = {
        { "group", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_7 = {"iconChanged", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
        { "id", &static_QUType_int, 0, QUParameter::In },
        { "data", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_8 = {"kipcMessage", 2, param_signal_8 };
    static const QUMethod signal_9 = {"saveYourself", 0, 0 };
    static const QUMethod signal_10 = {"shutDown", 0, 0 };
    static const QMetaData signal_tbl[] = {
        { "kdisplayPaletteChanged()", &signal_0, QMetaData::Public },
        { "kdisplayStyleChanged()", &signal_1, QMetaData::Public },
        { "kdisplayFontChanged()", &signal_2, QMetaData::Public },
        { "appearanceChanged()", &signal_3, QMetaData::Public },
        { "toolbarAppearanceChanged(int)", &signal_4, QMetaData::Public },
        { "backgroundChanged(int)", &signal_5, QMetaData::Public },
        { "settingsChanged(int)", &signal_6, QMetaData::Public },
        { "iconChanged(int)", &signal_7, QMetaData::Public },
        { "kipcMessage(int,int)", &signal_8, QMetaData::Public },
        { "saveYourself()", &signal_9, QMetaData::Public },
        { "shutDown()", &signal_10, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
        "KApplication", parentObject,
        slot_tbl, 11,
        signal_tbl, 11,

        0, 0,
        0, 0,

        0, 0 );
    cleanUp_KApplication.setMetaObject( metaObj );
    return metaObj;
}

void* KApplication::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KApplication" ) )
        return this;
    if ( !qstrcmp( clname, "KInstance" ) )
        return (KInstance*)this;
    return QApplication::qt_cast( clname );
}


void KApplication::kdisplayPaletteChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}


void KApplication::kdisplayStyleChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}


void KApplication::kdisplayFontChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}


void KApplication::appearanceChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}


void KApplication::toolbarAppearanceChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 4, t0 );
}


void KApplication::backgroundChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 5, t0 );
}


void KApplication::settingsChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 6, t0 );
}


void KApplication::iconChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 7, t0 );
}


# 1 "/coolo/prod/qt-copy/include/qsignalslotimp.h" 1
# 39 "/coolo/prod/qt-copy/include/qsignalslotimp.h"







class QConnectionList : public QPtrList<QConnection>
{
public:
    QConnectionList() : QPtrList<QConnection>() {}
    QConnectionList( const QConnectionList &list ) : QPtrList<QConnection>(list) {}
   ~QConnectionList() { clear(); }
    QConnectionList &operator=(const QConnectionList &list)
        { return (QConnectionList&)QPtrList<QConnection>::operator=(list); }
};

class QConnectionListIt : public QPtrListIterator<QConnection>
{
public:
    QConnectionListIt( const QConnectionList &l ) : QPtrListIterator<QConnection>(l) {}
    QConnectionListIt &operator=(const QConnectionListIt &i)
        { return (QConnectionListIt&)QPtrListIterator<QConnection>::operator=(i); }
};

class QSignalVec : public QPtrVector<QConnectionList>
{
public:
    QSignalVec(int size=17 )
        : QPtrVector<QConnectionList>(size) {}
    QSignalVec( const QSignalVec &dict )
        : QPtrVector<QConnectionList>(dict) {}
   ~QSignalVec() { clear(); }
    QSignalVec &operator=(const QSignalVec &dict)
        { return (QSignalVec&)QPtrVector<QConnectionList>::operator=(dict); }
    QConnectionList* at( uint index ) const {
        return index >= size()? 0 : QPtrVector<QConnectionList>::at(index);
    }
    bool insert( uint index, const QConnectionList* d ) {
        if (index >= size() )
            resize( 2*index + 1);
        return QPtrVector<QConnectionList>::insert(index, d);
    }
};

# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 87 "/coolo/prod/qt-copy/include/qsignalslotimp.h" 2
# 200 "../kdecore/kapplication.moc" 2


void KApplication::kipcMessage( int t0, int t1 )
{
    if ( signalsBlocked() )
        return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
        return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}


void KApplication::saveYourself()
{
    activate_signal( staticMetaObject()->signalOffset() + 9 );
}


void KApplication::shutDown()
{
    activate_signal( staticMetaObject()->signalOffset() + 10 );
}

bool KApplication::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: invokeBrowser((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: cut(); break;
    case 2: copy(); break;
    case 3: paste(); break;
    case 4: clear(); break;
    case 5: selectAll(); break;
    case 6: ref(); break;
    case 7: deref(); break;
    case 8: dcopFailure((const QString&)static_QUType_QString.get(_o+1)); break;
    case 9: dcopBlockUserInput((bool)static_QUType_bool.get(_o+1)); break;
    case 10: x11FilterDestroyed(); break;
    default:
        return QApplication::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool KApplication::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: kdisplayPaletteChanged(); break;
    case 1: kdisplayStyleChanged(); break;
    case 2: kdisplayFontChanged(); break;
    case 3: appearanceChanged(); break;
    case 4: toolbarAppearanceChanged((int)static_QUType_int.get(_o+1)); break;
    case 5: backgroundChanged((int)static_QUType_int.get(_o+1)); break;
    case 6: settingsChanged((int)static_QUType_int.get(_o+1)); break;
    case 7: iconChanged((int)static_QUType_int.get(_o+1)); break;
    case 8: kipcMessage((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 9: saveYourself(); break;
    case 10: shutDown(); break;
    default:
        return QApplication::qt_emit(_id,_o);
    }
    return TRUE;
}


bool KApplication::qt_property( int id, int f, QVariant* v)
{
    return QApplication::qt_property( id, f, v);
}

bool KApplication::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
# 2687 "/coolo/prod/kdelibs/kdecore/kapplication.cpp" 2
# 5 "../kdecore/libkdecore_la_all_cpp.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kautoconfig.cpp" 1
# 20 "/coolo/prod/kdelibs/kdecore/kautoconfig.cpp"
# 1 "/coolo/prod/kdelibs/kdecore/kautoconfig.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kautoconfig.h"




class KConfig;
class QWidget;
# 87 "/coolo/prod/kdelibs/kdecore/kautoconfig.h"
class KAutoConfig : public QObject {

public: virtual QMetaObject *metaObject() const { return staticMetaObject(); } virtual const char *className() const; virtual void* qt_cast( const char* ); virtual bool qt_invoke( int, QUObject* ); virtual bool qt_emit( int, QUObject* ); virtual bool qt_property( int id, int f, QVariant* v); static bool qt_static_property( QObject* , int, int, QVariant* ); static QMetaObject* staticMetaObject(); QObject* qObject() { return (QObject*)this; } static QString tr( const char *, const char * = 0 ); static QString trUtf8( const char *, const char * = 0 ); private: static QMetaObject *metaObj;

protected:





  void settingsChanged();







  void settingsChanged( QWidget *widget );
# 114 "/coolo/prod/kdelibs/kdecore/kautoconfig.h"
  void widgetModified();


public:







  KAutoConfig( KConfig *kconfig, QObject *parent=0, const char *name=0 );
# 134 "/coolo/prod/kdelibs/kdecore/kautoconfig.h"
  KAutoConfig( QObject *parent=0, const char *name=0 );




  ~KAutoConfig();
# 151 "/coolo/prod/kdelibs/kdecore/kautoconfig.h"
  void addWidget( QWidget *widget, const QString &group );







  void ignoreSubWidget( QWidget *widget );







  bool hasChanged() const;







  bool isDefault() const;
# 194 "/coolo/prod/kdelibs/kdecore/kautoconfig.h"
  inline void addWidgetChangedSignal( const QString &widgetName,
                  const QCString &signal){
    changedMap.insert( widgetName, signal );
  }


public :
# 209 "/coolo/prod/kdelibs/kdecore/kautoconfig.h"
  bool retrieveSettings( bool trackChanges=false );







  bool saveSettings();







  void resetSettings();


protected:



  KConfig *config;



  QMap<QString, QCString> changedMap;
# 250 "/coolo/prod/kdelibs/kdecore/kautoconfig.h"
  bool parseChildren( const QWidget *widget,
                  QPtrList<QWidget>&currentGroup, bool trackChanges );


private:
  class KAutoConfigPrivate;



  KAutoConfigPrivate *d;

};
# 21 "/coolo/prod/kdelibs/kdecore/kautoconfig.cpp" 2



# 1 "/coolo/prod/qt-copy/include/qobjectlist.h" 1
# 39 "/coolo/prod/qt-copy/include/qobjectlist.h"
# 53 "/coolo/prod/qt-copy/include/qobjectlist.h"
class QObjectList : public QPtrList<QObject>
{
public:
    QObjectList() : QPtrList<QObject>() {}
    QObjectList( const QObjectList &list ) : QPtrList<QObject>(list) {}
   ~QObjectList() { clear(); }
    QObjectList &operator=(const QObjectList &list)
        { return (QObjectList&)QPtrList<QObject>::operator=(list); }
};

class QObjectListIterator : public QPtrListIterator<QObject>
{
public:
    QObjectListIterator( const QObjectList &l )
        : QPtrListIterator<QObject>( l ) { }
    QObjectListIterator &operator=( const QObjectListIterator &i )
        { return (QObjectListIterator&)
                 QPtrListIterator<QObject>::operator=( i ); }
};
# 80 "/coolo/prod/qt-copy/include/qobjectlist.h"
class QObjectListIt : public QPtrListIterator<QObject>
{
public:
    QObjectListIt( const QObjectList &l ) : QPtrListIterator<QObject>(l) {}
    QObjectListIt &operator=(const QObjectListIt &i)
        { return (QObjectListIt&)QPtrListIterator<QObject>::operator=(i); }
};
# 25 "/coolo/prod/kdelibs/kdecore/kautoconfig.cpp" 2






class KAutoConfig::KAutoConfigPrivate {

public:
  KAutoConfigPrivate() : changed(false)

    , retrievedSettings(false)

  { init(); }


  QPtrList<QWidget> widgets;

  QMap<QWidget*, QString> groups;


  QPtrList<QWidget> ignore;


  bool changed;



  bool retrievedSettings;



  QMap<QWidget*, QPtrList<QWidget> > autoWidgets;

  QMap<QWidget*, QVariant> defaultValues;

  QAsciiDict<int> ignoreTheseWidgets;

  void init(){
    ignoreTheseWidgets.insert("QLabel", new int(1));
    ignoreTheseWidgets.insert("QFrame", new int(2));
    ignoreTheseWidgets.insert("QGroupBox", new int(3));
    ignoreTheseWidgets.insert("QButtonGroup", new int(4));
    ignoreTheseWidgets.insert("QWidget", new int(5));
    ignoreTheseWidgets.setAutoDelete(true);

    static bool defaultKDEPropertyMapInstalled = false;
    if ( !defaultKDEPropertyMapInstalled && KApplication::kApplication() ) {
      KApplication::kApplication()->installKDEPropertyMap();
      defaultKDEPropertyMapInstalled = true;
    }
  }
};

KAutoConfig::KAutoConfig(KConfig *kconfig, QObject *parent,
    const char *name) : QObject(parent, name), config(kconfig) {
  d = new KAutoConfigPrivate();
}

KAutoConfig::KAutoConfig(QObject *parent, const char *name) :
    QObject(parent, name), config(KGlobal::config()) {
  d = new KAutoConfigPrivate();
}

KAutoConfig::~KAutoConfig(){
  delete d;
}

void KAutoConfig::addWidget(QWidget *widget, const QString &group){
  d->groups.insert(widget, group);
  d->widgets.append(widget);
  QPtrList<QWidget> newAutoConfigWidget;
  d->autoWidgets.insert(widget, newAutoConfigWidget );
}

void KAutoConfig::ignoreSubWidget(QWidget *widget){
  d->ignore.append(widget);
}

bool KAutoConfig::retrieveSettings(bool trackChanges){

  if(d->retrievedSettings){
      kdDebug(180) << "This should not happen.  Function "
       "KAutoConfig::retrieveSettings() called more then once, returning "
       "first.  It is not recommended unless you know the implementation "
       "details of KAutoConfig and what this breaks.  Please fix." << endl;
    return false;
  }
  d->retrievedSettings = true;


  if(trackChanges){

    changedMap.insert("QButton", "2""stateChanged(int)");
    changedMap.insert("QCheckBox", "2""stateChanged(int)");
    changedMap.insert("QPushButton", "2""stateChanged(int)");
    changedMap.insert("QRadioButton", "2""stateChanged(int)");
    changedMap.insert("QComboBox", "2""activated (int)");


    changedMap.insert("QDateEdit", "2""valueChanged(const QDate &)");
    changedMap.insert("QDateTimeEdit", "2""valueChanged(const QDateTime &)");
    changedMap.insert("QDial", "2""valueChanged (int)");
    changedMap.insert("QLineEdit", "2""textChanged(const QString &)");
    changedMap.insert("QSlider", "2""valueChanged(int)");
    changedMap.insert("QSpinBox", "2""valueChanged(int)");
    changedMap.insert("QTimeEdit", "2""valueChanged(const QTime &)");
    changedMap.insert("QTextEdit", "2""textChanged()");
    changedMap.insert("QTextBrowser", "2""sourceChanged(const QString &)");
    changedMap.insert("QMultiLineEdit", "2""textChanged()");
    changedMap.insert("QListBox", "2""selectionChanged()");
    changedMap.insert("QTabWidget", "2""currentChanged(QWidget *)");


    changedMap.insert( "KComboBox", "2""activated (int)");
    changedMap.insert( "KFontCombo", "2""activated (int)");
    changedMap.insert( "KFontRequester", "2""fontSelected(const QFont &)");
    changedMap.insert( "KFontChooser", "2""fontSelected(const QFont &)");
    changedMap.insert( "KHistoryCombo", "2""activated (int)");

    changedMap.insert( "KColorButton", "2""changed(const QColor &)");
    changedMap.insert( "KDatePicker", "2""dateSelected (QDate)");
    changedMap.insert( "KEditListBox", "2""changed()");
    changedMap.insert( "KListBox", "2""selectionChanged()");
    changedMap.insert( "KLineEdit", "2""textChanged(const QString &)");
    changedMap.insert( "KPasswordEdit", "2""textChanged(const QString &)");
    changedMap.insert( "KRestrictedLine", "2""textChanged(const QString &)");
    changedMap.insert( "KTextBrowser", "2""sourceChanged(const QString &)");
    changedMap.insert( "KTextEdit", "2""textChanged()");
    changedMap.insert( "KURLRequester", "2""textChanged (const QString& )");
    changedMap.insert( "KIntNumInput", "2""valueChanged (int)");
    changedMap.insert( "KIntSpinBox", "2""valueChanged (int)");
    changedMap.insert( "KDoubleNumInput", "2""valueChanged (double)");
  }


  QPtrListIterator<QWidget> it( d->widgets );
  QWidget *widget = 0;
  bool usingDefaultValues = false;
  while ( (widget = it.current()) != 0 ) {
    ++it;
    config->setGroup(d->groups[widget]);
    usingDefaultValues |= parseChildren(widget, d->autoWidgets[widget], trackChanges);
  }
  return usingDefaultValues;
}

bool KAutoConfig::saveSettings() {

  if(!d->retrievedSettings){
      kdDebug(180) << "KAutoConfig::saveSettings() called before "
      "KAutoConfig::retrieveSettings().  This should NEVER happen.  "
      "Please Fix." << endl;
    return false;
  }


  QSqlPropertyMap *propertyMap = QSqlPropertyMap::defaultMap();

  QPtrListIterator<QWidget> it( d->widgets );
  QWidget *widget = 0;
  while ( (widget = it.current()) != 0 ) {
    ++it;
    config->setGroup(d->groups[widget]);


    QPtrListIterator<QWidget> it( d->autoWidgets[widget] );
    QWidget *groupWidget;
    bool widgetChanged = false;
    while ( (groupWidget = it.current()) != 0 ){
      ++it;
      QVariant defaultValue = d->defaultValues[groupWidget];
      QVariant currentValue = propertyMap->property(groupWidget);

      if(!config->hasDefault(groupWidget->name()) && currentValue == defaultValue){
        config->revertToDefault(groupWidget->name());
        widgetChanged = true;
      }
      else{
        QVariant savedValue = config->readPropertyEntry(groupWidget->name(),
                                                             defaultValue);
        if(savedValue != currentValue){
          config->writeEntry(groupWidget->name(), currentValue);
          widgetChanged = true;
        }
      }
    }
    d->changed |= widgetChanged;
    if(widgetChanged)
      ( settingsChanged(widget) );
  }

  if(d->changed){
    ( settingsChanged() );
    d->changed = false;
    config->sync();
    return true;
  }
  return false;
}

bool KAutoConfig::hasChanged() const {

  if(!d->retrievedSettings){
    kdDebug(180) << "KAutoConfig::hasChanged() called before "
      "KAutoConfig::retrieveSettings().  This should NEVER happen.  "
      "Please Fix." << endl;
    return false;
  }


  QSqlPropertyMap *propertyMap = QSqlPropertyMap::defaultMap();

  QPtrListIterator<QWidget> it( d->widgets );
  QWidget *widget = 0;
  while ( (widget = it.current()) != 0 ) {
    ++it;
    config->setGroup(d->groups[widget]);

    QPtrListIterator<QWidget> it( d->autoWidgets[widget] );
    QWidget *groupWidget;
    while ( (groupWidget = it.current()) != 0 ){
      ++it;
      QVariant defaultValue = d->defaultValues[groupWidget];
      QVariant currentValue = propertyMap->property(groupWidget);
      QVariant savedValue = config->readPropertyEntry(groupWidget->name(),
      defaultValue);

      if((currentValue == defaultValue && savedValue != currentValue) ||
         (savedValue != currentValue))
        return true;
    }
  }
  return false;
}

bool KAutoConfig::isDefault() const {

  if(!d->retrievedSettings){
    kdDebug(180) << "KAutoConfig::isDefault() called before "
      "KAutoConfig::retrieveSettings().  This should NEVER happen.  "
      "Please Fix." << endl;
    return false;
  }


  QSqlPropertyMap *propertyMap = QSqlPropertyMap::defaultMap();

  QPtrListIterator<QWidget> it( d->widgets );
  QWidget *widget = 0;
  while ( (widget = it.current()) != 0 ) {
    ++it;
    config->setGroup(d->groups[widget]);

    QPtrListIterator<QWidget> it( d->autoWidgets[widget] );
    QWidget *groupWidget;
    while ( (groupWidget = it.current()) != 0 ){
      ++it;
      QVariant defaultValue = d->defaultValues[groupWidget];
      QVariant currentValue = propertyMap->property(groupWidget);
      if(currentValue != defaultValue){

        return false;
      }
    }
  }
  return true;
}

void KAutoConfig::resetSettings(){

  if(!d->retrievedSettings){
    kdDebug(180) << "KAutoConfig::resetSettings() called before "
      "KAutoConfig::retrieveSettings().  This should NEVER happen.  "
      "Please Fix." << endl;
    return;
  }


  QSqlPropertyMap *propertyMap = QSqlPropertyMap::defaultMap();

  QPtrListIterator<QWidget> it( d->widgets );
  QWidget *widget = 0;
  while ( (widget = it.current()) != 0 ) {
    ++it;
    config->setGroup(d->groups[widget]);


    QPtrListIterator<QWidget> it( d->autoWidgets[widget] );
    QWidget *groupWidget;
    while ( (groupWidget = it.current()) != 0 ){
      ++it;
      QVariant defaultValue = d->defaultValues[groupWidget];
      if(defaultValue != propertyMap->property(groupWidget)){
        propertyMap->setProperty(groupWidget, defaultValue);
        d->changed = true;
      }
    }
  }
}

bool KAutoConfig::parseChildren(const QWidget *widget,
    QPtrList<QWidget>& currentGroup, bool trackChanges){
  bool valueChanged = false;
  const QPtrList<QObject> *listOfChildren = widget->children();
  if(!listOfChildren)
    return valueChanged;

  QSqlPropertyMap *propertyMap = QSqlPropertyMap::defaultMap();
  QPtrListIterator<QObject> it( *listOfChildren );
  QObject *object;
  while ( (object = it.current()) != 0 )
  {
    ++it;
    if(!object->isWidgetType()){
      continue;
    }
    QWidget *childWidget = (QWidget *)object;
    if(d->ignore.containsRef(childWidget)){
      continue;
    }

    bool parseTheChildren = true;
    if( d->ignoreTheseWidgets[childWidget->className()] == 0 &&
      childWidget->name(0) != __null )
    {
      QVariant defaultSetting = propertyMap->property(childWidget);
      if(defaultSetting.isValid())
      {
        parseTheChildren = false;

        if(config->entryIsImmutable( childWidget->name()))
          childWidget->setEnabled(false);
        else
        {



          currentGroup.append(childWidget);
          d->defaultValues.insert(childWidget, defaultSetting);
        }

        QVariant setting =
         config->readPropertyEntry(childWidget->name(), defaultSetting);
        if(setting != defaultSetting)
        {
          propertyMap->setProperty(childWidget, setting);
          valueChanged = true;
        }
        if(trackChanges && changedMap.find(childWidget->className()) !=
            changedMap.end())
        {
          connect(childWidget, changedMap[childWidget->className()],
                  this, "2""widgetModified()");
        }

        else if(trackChanges &&
          changedMap.find(childWidget->className()) == changedMap.end())
        {
          kdDebug(180) << "KAutoConfig::retrieveSettings, Unknown changed "
           "signal for widget:" << childWidget->className() << endl;
        }


      }

      else
      {
          kdDebug(180) << "KAutoConfig::retrieveSettings, Unknown widget:"
           << childWidget->className() << endl;
      }

    }
    if(parseTheChildren)
    {


      valueChanged |= parseChildren(childWidget, currentGroup, trackChanges);
    }
  }
  return valueChanged;
}

# 1 "../kdecore/kautoconfig.moc" 1
# 11 "../kdecore/kautoconfig.moc"
# 1 "../../../prod/kdelibs/kdecore/kautoconfig.h" 1
# 12 "../kdecore/kautoconfig.moc" 2
# 22 "../kdecore/kautoconfig.moc"
const char *KAutoConfig::className() const
{
    return "KAutoConfig";
}

QMetaObject *KAutoConfig::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KAutoConfig( "KAutoConfig", &KAutoConfig::staticMetaObject );
# 50 "../kdecore/kautoconfig.moc"
QMetaObject* KAutoConfig::staticMetaObject()
{
    if ( metaObj )
        return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
        { 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_0 = {"retrieveSettings", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
        { 0, &static_QUType_bool, 0, QUParameter::Out },
        { "trackChanges", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"retrieveSettings", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
        { 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_2 = {"saveSettings", 1, param_slot_2 };
    static const QUMethod slot_3 = {"resetSettings", 0, 0 };
    static const QMetaData slot_tbl[] = {
        { "retrieveSettings()", &slot_0, QMetaData::Public },
        { "retrieveSettings(bool)", &slot_1, QMetaData::Public },
        { "saveSettings()", &slot_2, QMetaData::Public },
        { "resetSettings()", &slot_3, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"settingsChanged", 0, 0 };
    static const QUParameter param_signal_1[] = {
        { "widget", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod signal_1 = {"settingsChanged", 1, param_signal_1 };
    static const QUMethod signal_2 = {"widgetModified", 0, 0 };
    static const QMetaData signal_tbl[] = {
        { "settingsChanged()", &signal_0, QMetaData::Private },
        { "settingsChanged(QWidget*)", &signal_1, QMetaData::Private },
        { "widgetModified()", &signal_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
        "KAutoConfig", parentObject,
        slot_tbl, 4,
        signal_tbl, 3,

        0, 0,
        0, 0,

        0, 0 );
    cleanUp_KAutoConfig.setMetaObject( metaObj );
    return metaObj;
}

void* KAutoConfig::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KAutoConfig" ) )
        return this;
    return QObject::qt_cast( clname );
}


void KAutoConfig::settingsChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}





void KAutoConfig::settingsChanged( QWidget* t0 )
{
    if ( signalsBlocked() )
        return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
        return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}


void KAutoConfig::widgetModified()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

bool KAutoConfig::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: static_QUType_bool.set(_o,retrieveSettings()); break;
    case 1: static_QUType_bool.set(_o,retrieveSettings((bool)static_QUType_bool.get(_o+1))); break;
    case 2: static_QUType_bool.set(_o,saveSettings()); break;
    case 3: resetSettings(); break;
    default:
        return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool KAutoConfig::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: settingsChanged(); break;
    case 1: settingsChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 2: widgetModified(); break;
    default:
        return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}


bool KAutoConfig::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool KAutoConfig::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
# 409 "/coolo/prod/kdelibs/kdecore/kautoconfig.cpp" 2
# 6 "../kdecore/libkdecore_la_all_cpp.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 1
# 32 "/coolo/prod/kdelibs/kdecore/kdebug.cpp"
# 1 "/coolo/prod/kdelibs/kdecore/kdebugdcopiface.h" 1
# 21 "/coolo/prod/kdelibs/kdecore/kdebugdcopiface.h"







class KDebugDCOPIface : virtual public DCOPObject
{
        public: virtual bool process(const QCString &fun, const QByteArray &data, QCString& replyType, QByteArray &replyData); QCStringList functions(); QCStringList interfaces(); private:
public:
        KDebugDCOPIface();
        ~KDebugDCOPIface();

public:




        void notifyKDebugConfigChanged();
};
# 33 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2
# 42 "/coolo/prod/kdelibs/kdecore/kdebug.cpp"
# 1 "/coolo/prod/qt-copy/include/qintdict.h" 1
# 39 "/coolo/prod/qt-copy/include/qintdict.h"





template<class type>
class QIntDict



        : public QGDict

{
public:
    QIntDict(int size=17) : QGDict(size,IntKey,0,0) {}
    QIntDict( const QIntDict<type> &d ) : QGDict(d) {}
   ~QIntDict() { clear(); }
    QIntDict<type> &operator=(const QIntDict<type> &d)
                        { return (QIntDict<type>&)QGDict::operator=(d); }
    uint count() const { return QGDict::count(); }
    uint size() const { return QGDict::size(); }
    bool isEmpty() const { return QGDict::count() == 0; }
    void insert( long k, const type *d )
                                        { QGDict::look_int(k,(Item)d,1); }
    void replace( long k, const type *d )
                                        { QGDict::look_int(k,(Item)d,2); }
    bool remove( long k ) { return QGDict::remove_int(k); }
    type *take( long k ) { return (type*)QGDict::take_int(k); }
    type *find( long k ) const
                { return (type *)((QGDict*)this)->QGDict::look_int(k,0,0); }
    type *operator[]( long k ) const
                { return (type *)((QGDict*)this)->QGDict::look_int(k,0,0); }
    void clear() { QGDict::clear(); }
    void resize( uint n ) { QGDict::resize(n); }
    void statistics() const { QGDict::statistics(); }







private:
    void deleteItem( Item d );
};


template<> inline void QIntDict<void>::deleteItem( QPtrCollection::Item )
{
}


template<class type> inline void QIntDict<type>::deleteItem( QPtrCollection::Item d )
{
    if ( del_item ) delete (type*)d;
}

template<class type>
class QIntDictIterator : public QGDictIterator
{
public:
    QIntDictIterator(const QIntDict<type> &d) :QGDictIterator((QGDict &)d) {}
   ~QIntDictIterator() {}
    uint count() const { return dict->count(); }
    bool isEmpty() const { return dict->count() == 0; }
    type *toFirst() { return (type *)QGDictIterator::toFirst(); }
    operator type *() const { return (type *)QGDictIterator::get(); }
    type *current() const { return (type *)QGDictIterator::get(); }
    long currentKey() const { return QGDictIterator::getKeyInt(); }
    type *operator()() { return (type *)QGDictIterator::operator()(); }
    type *operator++() { return (type *)QGDictIterator::operator++(); }
    type *operator+=(uint j) { return (type *)QGDictIterator::operator+=(j);}
};

# 1 "/coolo/prod/qt-copy/include/qwinexport.h" 1
# 116 "/coolo/prod/qt-copy/include/qintdict.h" 2
# 43 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2







# 1 "/coolo/prod/qt-copy/include/qpen.h" 1
# 39 "/coolo/prod/qt-copy/include/qpen.h"







class QPen: public Qt
{
public:
    QPen();
    QPen( PenStyle );
    QPen( const QColor &color, uint width=0, PenStyle style=SolidLine );
    QPen( const QColor &cl, uint w, PenStyle s, PenCapStyle c, PenJoinStyle j);
    QPen( const QPen & );
   ~QPen();
    QPen &operator=( const QPen & );

    PenStyle style() const { return data->style; }
    void setStyle( PenStyle );
    uint width() const { return data->width; }
    void setWidth( uint );
    const QColor &color() const { return data->color; }
    void setColor( const QColor & );
    PenCapStyle capStyle() const;
    void setCapStyle( PenCapStyle );
    PenJoinStyle joinStyle() const;
    void setJoinStyle( PenJoinStyle );

    bool operator==( const QPen &p ) const;
    bool operator!=( const QPen &p ) const
                                        { return !(operator==(p)); }

private:
    friend class QPainter;




    QPen copy() const;
    void detach();
    void init( const QColor &, uint, uint );
    struct QPenData : public QShared {
        PenStyle style;
        uint width;
        QColor color;
        Q_UINT16 linest;
    } *data;
};






 QDataStream &operator<<( QDataStream &, const QPen & );
 QDataStream &operator>>( QDataStream &, QPen & );
# 51 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2







# 1 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stdarg.h" 1 3 4
# 34 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stdarg.h" 3 4
# 50 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stdarg.h" 3 4



# 111 "/usr/lib/gcc-lib/i486-suse-linux/3.3/include/stdarg.h" 3 4









# 59 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 25 "/usr/include/ctype.h" 3 4




extern "C" {
# 45 "/usr/include/ctype.h" 3 4


enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__const));











extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();








extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();



# 237 "/usr/include/ctype.h" 3 4








extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 281 "/usr/include/ctype.h" 3 4














}
# 60 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2
# 1 "/usr/include/syslog.h" 1 3 4
# 1 "/usr/include/sys/syslog.h" 1 3 4
# 33 "/usr/include/sys/syslog.h" 3 4





# 51 "/usr/include/sys/syslog.h" 3 4


# 93 "/usr/include/sys/syslog.h" 3 4




# 153 "/usr/include/sys/syslog.h" 3 4








extern "C" {


extern void closelog (void) throw ();


extern void openlog (__const char *__ident, int __option, int __facility)
     throw ();


extern int setlogmask (int __mask) throw ();


extern void syslog (int __pri, __const char *__fmt, ...) throw ()
     __attribute__ ((__format__(__printf__, 2, 3)));



extern void vsyslog (int __pri, __const char *__fmt, __gnuc_va_list __ap)
     throw () __attribute__ ((__format__(__printf__, 2, 0)));


}
# 2 "/usr/include/syslog.h" 2 3 4
# 61 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2
# 1 "/usr/include/errno.h" 1 3 4
# 62 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2


# 1 "/coolo/prod/kdelibs/kdecore/kstaticdeleter.h" 1
# 24 "/coolo/prod/kdelibs/kdecore/kstaticdeleter.h"
# 39 "/coolo/prod/kdelibs/kdecore/kstaticdeleter.h"
class KStaticDeleterBase {
public:
    virtual ~KStaticDeleterBase() { }





    virtual void destructObject();
};
# 65 "/coolo/prod/kdelibs/kdecore/kstaticdeleter.h"
template<class type> class KStaticDeleter : public KStaticDeleterBase {
public:
    KStaticDeleter() { deleteit = 0; globalReference = 0; array = false; }







    __attribute__ ((deprecated)) type *setObject( type *obj, bool isArray = false) {
        deleteit = obj;
        globalReference = 0;
        array = isArray;
        if (obj)
            KGlobal::registerStaticDeleter(this);
        else
            KGlobal::unregisterStaticDeleter(this);
        return obj;
    }
# 93 "/coolo/prod/kdelibs/kdecore/kstaticdeleter.h"
    type *setObject( type* & globalRef, type *obj, bool isArray = false) {
        globalReference = &globalRef;
        deleteit = obj;
        array = isArray;
        if (obj)
            KGlobal::registerStaticDeleter(this);
        else
            KGlobal::unregisterStaticDeleter(this);
        globalRef = obj;
        return obj;
    }





    virtual void destructObject() {
        if (globalReference)
           *globalReference = 0;
        if (array)
           delete [] deleteit;
        else
           delete deleteit;
        deleteit = 0;
    }
    virtual ~KStaticDeleter() {
        KGlobal::unregisterStaticDeleter(this);
        destructObject();
    }
private:
    type *deleteit;
    type **globalReference;
    bool array;
};
# 65 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2
# 1 "../config.h" 1
# 13 "../config.h"









# 34 "../config.h"










# 55 "../config.h"







# 74 "../config.h"


# 86 "../config.h"























































# 176 "../config.h"

























































# 266 "../config.h"











# 290 "../config.h"



























# 336 "../config.h"


















# 372 "../config.h"


































# 438 "../config.h"































































































# 577 "../config.h"





















# 617 "../config.h"




# 633 "../config.h"







































# 699 "../config.h"












# 761 "../config.h"
# 793 "../config.h"
extern "C"

int mkstemps(char *, int);
# 829 "../config.h"
extern "C"

unsigned long strlcat(char*, const char*, unsigned long);






extern "C"

unsigned long strlcpy(char*, const char*, unsigned long);
# 905 "../config.h"




# 920 "../config.h"
# 937 "../config.h"
# 66 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2


# 1 "/usr/include/execinfo.h" 1 3 4
# 20 "/usr/include/execinfo.h" 3 4



extern "C" {



extern int backtrace (void **__array, int __size) throw ();




extern char **backtrace_symbols (void *__const *__array, int __size) throw ();





extern void backtrace_symbols_fd (void *__const *__array, int __size,
                                  int __fd) throw ();

}
# 69 "/coolo/prod/kdelibs/kdecore/kdebug.cpp" 2


class KDebugEntry;

class KDebugEntry
{
public:
    KDebugEntry (int n, QString d) {number=n; descr=d;}
    unsigned int number;
    QString descr;
};

static QIntDict<KDebugEntry> *KDebugCache;

static KStaticDeleter< QIntDict<KDebugEntry> > kdd;

static QString getDescrFromNum(unsigned int _num)
{
  if (!KDebugCache) {
    kdd.setObject(KDebugCache, new QIntDict<KDebugEntry>);

    KGlobal::unregisterStaticDeleter(&kdd);
    KDebugCache->setAutoDelete(true);
  }

  KDebugEntry *ent = KDebugCache->find( _num );
  if ( ent )
    return ent->descr;

  if ( !KDebugCache->isEmpty() )
    return QString::null;

  QString filename(locate("config","kdebug.areas"));
  if (filename.isEmpty())
      return QString::null;

  QFile file(filename);
  if (!file.open(0x0001)) {
    qWarning("Couldn't open %s", filename.local8Bit().data());
    file.close();
    return QString::null;
  }

  unsigned long number = 0;
  bool longOK;

  QTextStream *ts = new QTextStream(&file);
  ts->setEncoding( QTextStream::Latin1 );
  while (!ts->eof()) {
    const QString data(ts->readLine());
    int i = 0;
    int len = data.length();

    QChar ch = data[0];
    if (ch == '#' || ch.isNull()) {
      continue;
    }
    while (ch.isSpace()) {
      if (!(i < len))
        continue;
      ++i;
      ch = data[i];
    }
    if (ch.isNumber()) {
        int numStart = i ;
        while (ch.isNumber()) {
          if (!(i < len))
            continue;
          ++i;
          ch = data[i];
        }
        number = data.mid(numStart,i).toULong(&longOK);
    }
    while (ch.isSpace()) {
      if (!(i < len))
        continue;
      ++i;
      ch = data[i];
    }
    const QString description(data.mid(i, len));


    KDebugCache->insert(number, new KDebugEntry(number,description));
  }

  delete ts;
  file.close();

  ent = KDebugCache->find( _num );
  if ( ent )
      return ent->descr;

  return QString::null;
}

enum DebugLevels {
    KDEBUG_INFO= 0,
    KDEBUG_WARN= 1,
    KDEBUG_ERROR= 2,
    KDEBUG_FATAL= 3
};


struct kDebugPrivate {
  kDebugPrivate() :
        oldarea(0), config(0) { }

  ~kDebugPrivate() { delete config; }

  QString aAreaName;
  unsigned int oldarea;
  KConfig *config;
};

static kDebugPrivate *kDebug_data = 0;
static KStaticDeleter<kDebugPrivate> pcd;
static KStaticDeleter<KDebugDCOPIface> dcopsd;
static KDebugDCOPIface* kDebugDCOPIface = 0;

static void kDebugBackend( unsigned short nLevel, unsigned int nArea, const char *data)
{
  if ( !kDebug_data )
  {
      pcd.setObject(kDebug_data, new kDebugPrivate());

      KGlobal::unregisterStaticDeleter(&pcd);


      if (!kDebugDCOPIface)
      {
          kDebugDCOPIface = dcopsd.setObject(kDebugDCOPIface, new KDebugDCOPIface);
      }
  }

  if (!kDebug_data->config && KGlobal::_instance )
  {
      kDebug_data->config = new KConfig("kdebugrc", false, false);
      kDebug_data->config->setGroup("0");



      if ( KGlobal::_instance )
        kDebug_data->aAreaName = KGlobal::instance()->instanceName();
  }

  if (kDebug_data->config && kDebug_data->oldarea != nArea) {
    kDebug_data->config->setGroup( QString::number(static_cast<int>(nArea)) );
    kDebug_data->oldarea = nArea;
    if ( nArea > 0 && KGlobal::_instance )
      kDebug_data->aAreaName = getDescrFromNum(nArea);
    if ((nArea == 0) || kDebug_data->aAreaName.isEmpty())
      if ( KGlobal::_instance )
        kDebug_data->aAreaName = KGlobal::instance()->instanceName();
  }

  int nPriority = 0;
  QString aCaption;



    QString key;
    switch( nLevel )
      {
      case KDEBUG_INFO:
        key = "InfoOutput";
        aCaption = "Info";
        nPriority = 6;
        break;
      case KDEBUG_WARN:
        key = "WarnOutput";
        aCaption = "Warning";
        nPriority = 4;
        break;
      case KDEBUG_FATAL:
        key = "FatalOutput";
        aCaption = "Fatal Error";
        nPriority = 2;
        break;
      case KDEBUG_ERROR:
      default:

        key = "ErrorOutput";
        aCaption = "Error";
        nPriority = 3;
        break;
      }

  short nOutput = kDebug_data->config ? kDebug_data->config->readNumEntry(key, 2) : 2;



  if (!KApplication::kApplication() && (nOutput == 1))
    nOutput = 2;


  switch( nOutput )
        {
        case 0:
          {
                QString aKey;
                switch( nLevel )
                {
                    case KDEBUG_INFO:
                        aKey = "InfoFilename";
                        break;
                    case KDEBUG_WARN:
                        aKey = "WarnFilename";
                        break;
                    case KDEBUG_FATAL:
                        aKey = "FatalFilename";
                        break;
                    case KDEBUG_ERROR:
                    default:
                        aKey = "ErrorFilename";
                        break;
                }
                QString aOutputFileName = kDebug_data->config->readPathEntry(aKey, "kdebug.dbg");

                const int BUFSIZE = 4096;
                char buf[BUFSIZE];
                int nSize;
                if ( !kDebug_data->aAreaName.isEmpty() )
                    nSize = snprintf( buf, BUFSIZE, "%s: %s", kDebug_data->aAreaName.ascii(), data);
                else
                    nSize = snprintf( buf, BUFSIZE, "%s", data);

                QFile aOutputFile( aOutputFileName );
                aOutputFile.open( 0x0002 | 0x0004 );
                if ( ( nSize == -1 ) || ( nSize >= BUFSIZE ) )
                    aOutputFile.writeBlock( buf, BUFSIZE-1 );
                else
                    aOutputFile.writeBlock( buf, nSize );
                aOutputFile.close();
                break;
          }
        case 1:
          {


              if ( !kDebug_data->aAreaName.isEmpty() ) aCaption += QString("(")+kDebug_data->aAreaName+")";
              QMessageBox::warning( 0L, aCaption, data, i18n("&OK") );
              break;
          }
        case 2:
          {
              FILE *output;




                  output = stderr;


              if ( !kDebug_data->aAreaName.isEmpty() ) fprintf( output, "%s: ", kDebug_data->aAreaName.ascii() );
              fputs( data, output);
              break;
          }
        case 3:
          {
              syslog( nPriority, "%s", data);
              break;
          }
        case 4:
          {
              break;
          }
        }


  if( ( nLevel == KDEBUG_FATAL )
      && ( !kDebug_data->config || kDebug_data->config->readNumEntry( "AbortFatal", 1 ) ) )
        abort();
}

kdbgstream &perror( kdbgstream &s) { return s << QString::fromLocal8Bit(strerror((*__errno_location ()))); }
kdbgstream kdDebug(int area) { return kdbgstream(area, KDEBUG_INFO); }
kdbgstream kdDebug(bool cond, int area) { if (cond) return kdbgstream(area, KDEBUG_INFO); else return kdbgstream(0, 0, false); }

kdbgstream kdError(int area) { return kdbgstream("ERROR: ", area, KDEBUG_ERROR); }
kdbgstream kdError(bool cond, int area) { if (cond) return kdbgstream("ERROR: ", area, KDEBUG_ERROR); else return kdbgstream(0,0,false); }
kdbgstream kdWarning(int area) { return kdbgstream("WARNING: ", area, KDEBUG_WARN); }
kdbgstream kdWarning(bool cond, int area) { if (cond) return kdbgstream("WARNING: ", area, KDEBUG_WARN); else return kdbgstream(0,0,false); }
kdbgstream kdFatal(int area) { return kdbgstream("FATAL: ", area, KDEBUG_FATAL); }
kdbgstream kdFatal(bool cond, int area) { if (cond) return kdbgstream("FATAL: ", area, KDEBUG_FATAL); else return kdbgstream(0,0,false); }

void kdbgstream::flush() {
    if (output.isEmpty() || !print)
        return;
    kDebugBackend( level, area, output.local8Bit().data() );
    output = QString::null;
}

kdbgstream &kdbgstream::form(const char *format, ...)
{
    char buf[4096];
    va_list arguments;
    __builtin_va_start(arguments,format);
    vsnprintf( buf, sizeof(buf), format, arguments );
    __builtin_va_end(arguments);
    *this << buf;
    return *this;
}

kdbgstream::~kdbgstream() {
    if (!output.isEmpty()) {
        fprintf(stderr, "ASSERT: debug output not ended with \\n\n");
        fprintf(stderr, "%s", kdBacktrace().latin1());
        *this << "\n";
    }
}

kdbgstream& kdbgstream::operator << (char ch)
{
  if (!print) return *this;
  if (!isprint(ch))
    output += "\\x" + QString::number( static_cast<uint>( ch ) + 0x100, 16 ).right(2);
  else {
    output += ch;
    if (ch == '\n') flush();
  }
  return *this;
}

kdbgstream& kdbgstream::operator << (QWidget* widget)
{
    return *this << const_cast< const QWidget* >( widget );
}

kdbgstream& kdbgstream::operator << (const QWidget* widget)
{
  QString string, temp;

  if(widget==0)
    {
      string=(QString)"[Null pointer]";
    } else {
      temp.setNum((ulong)widget, 16);
      string=(QString)"["+widget->className()+" pointer "
        + "(0x" + temp + ")";
      if(widget->name(0)==0)
        {
          string += " to unnamed widget, ";
        } else {
          string += (QString)" to widget " + widget->name() + ", ";
        }
      string += "geometry="
        + QString().setNum(widget->width())
        + "x"+QString().setNum(widget->height())
        + "+"+QString().setNum(widget->x())
        + "+"+QString().setNum(widget->y())
        + "]";
    }
  if (!print)
    {
      return *this;
    }
  output += string;
  if (output.at(output.length() -1 ) == '\n')
    {
      flush();
    }
  return *this;
}





kdbgstream& kdbgstream::operator<<( const QDateTime& time) {
    *this << time.toString();
    return *this;
}
kdbgstream& kdbgstream::operator<<( const QDate& date) {
    *this << date.toString();

    return *this;
}
kdbgstream& kdbgstream::operator<<( const QTime& time ) {
    *this << time.toString();
    return *this;
}
kdbgstream& kdbgstream::operator<<( const QPoint& p ) {
    *this << "(" << p.x() << ", " << p.y() << ")";
    return *this;
}
kdbgstream& kdbgstream::operator<<( const QSize& s ) {
    *this << "[" << s.width() << "x" << s.height() << "]";
    return *this;
}
kdbgstream& kdbgstream::operator<<( const QRect& r ) {
    *this << "[" << r.left() << ", " << r.top() << " - " << r.right() << ", " << r.bottom() << "]";
    return *this;
}
kdbgstream& kdbgstream::operator<<( const QRegion& reg ) {
    *this<< "[ ";

    QMemArray<QRect>rs=reg.rects();
    for (uint i=0;i<rs.size();++i)
        *this << QString("[%1, %2 - %3, %4] ").arg(rs[i].left()).arg(rs[i].top()).arg(rs[i].right()).arg(rs[i].bottom() ) ;

    *this <<"]";
    return *this;
}
kdbgstream& kdbgstream::operator<<( const KURL& u ) {
    *this << u.prettyURL();
    return *this;
}
kdbgstream& kdbgstream::operator<<( const QStringList& l ) {
    *this << "(";
    *this << l.join(",");
    *this << ")";

    return *this;
}
kdbgstream& kdbgstream::operator<<( const QColor& c ) {
    if ( c.isValid() )
        *this <<c.name();
    else
        *this << "(invalid/default)";
    return *this;
}
kdbgstream& kdbgstream::operator<<( const QPen& p ) {
    static const char* const s_penStyles[] = {
        "NoPen", "SolidLine", "DashLine", "DotLine", "DashDotLine",
        "DashDotDotLine" };
    static const char* const s_capStyles[] = {
        "FlatCap", "SquareCap", "RoundCap" };
    *this << "[ style:";
    *this << s_penStyles[ p.style() ];
    *this << " width:";
    *this << p.width();
    *this << " color:";
    if ( p.color().isValid() )
        *this << p.color().name();
    else
        *this <<"(invalid/default)";
    if ( p.width() > 0 )
    {
        *this << " capstyle:";
        *this << s_capStyles[ p.capStyle() >> 4 ];

    }
    *this <<" ]";
    return *this;
}
kdbgstream& kdbgstream::operator<<( const QBrush& b) {
    static const char* const s_brushStyles[] = {
        "NoBrush", "SolidPattern", "Dense1Pattern", "Dense2Pattern", "Dense3Pattern",
        "Dense4Pattern", "Dense5Pattern", "Dense6Pattern", "Dense7Pattern",
        "HorPattern", "VerPattern", "CrossPattern", "BDiagPattern", "FDiagPattern",
        "DiagCrossPattern" };

    *this <<"[ style: ";
    *this <<s_brushStyles[ b.style() ];
    *this <<" color: ";

    if ( b.color().isValid() )
        *this <<b.color().name() ;
    else
        *this <<"(invalid/default)";
    if ( b.pixmap() )
        *this <<" has a pixmap";
    *this <<" ]";
    return *this;
}

QString kdBacktrace(int levels)
{
    QString s;

    void* trace[256];
    int n = backtrace(trace, 256);
    char** strings = backtrace_symbols (trace, n);

    if ( levels != -1 )
        n = ((n) < (levels) ? (n) : (levels));
    s = "[\n";

    for (int i = 0; i < n; ++i)
        s += QString::number(i) +
             QString::fromLatin1(": ") +
             QString::fromLatin1(strings[i]) + QString::fromLatin1("\n");
    s += "]\n";
    free (strings);

    return s;
}

QString kdBacktrace()
{
    return kdBacktrace(-1 );
}

void kdClearDebugConfig()
{
    delete kDebug_data->config;
    kDebug_data->config = 0;
}
# 7 "../kdecore/libkdecore_la_all_cpp.cpp" 2
# 1 "/coolo/prod/kdelibs/kdecore/netwm.cpp" 1
# 35 "/coolo/prod/kdelibs/kdecore/netwm.cpp"
# 1 "/usr/include/assert.h" 1 3 4
# 35 "/usr/include/assert.h" 3 4



# 65 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (__const char *__assertion, __const char *__file,
                           unsigned int __line, __const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
                                  unsigned int __line,
                                  __const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}






# 105 "/usr/include/assert.h" 3 4
# 36 "/coolo/prod/kdelibs/kdecore/netwm.cpp" 2


# 1 "/usr/X11R6/include/X11/Xmd.h" 1
# 49 "/usr/X11R6/include/X11/Xmd.h"
# 99 "/usr/X11R6/include/X11/Xmd.h"
# 128 "/usr/X11R6/include/X11/Xmd.h"




typedef long INT32;

typedef short INT16;



typedef signed char INT8;
# 149 "/usr/X11R6/include/X11/Xmd.h"
typedef unsigned long CARD32;

typedef unsigned short CARD16;
typedef unsigned char CARD8;

typedef CARD32 BITS32;
typedef CARD16 BITS16;


typedef CARD8 BYTE;
typedef CARD8 BOOL;
# 179 "/usr/X11R6/include/X11/Xmd.h"
# 202 "/usr/X11R6/include/X11/Xmd.h"
# 39 "/coolo/prod/kdelibs/kdecore/netwm.cpp" 2

# 1 "/coolo/prod/kdelibs/kdecore/netwm_p.h" 1
# 28 "/coolo/prod/kdelibs/kdecore/netwm_p.h"
# 39 "/coolo/prod/kdelibs/kdecore/netwm_p.h"
template <class Z> class NETRArray {
public:




    NETRArray();





    ~NETRArray();






    Z &operator[](int);





    int size() const { return sz; }




    void reset();

private:
    int sz;
    int capacity;
    Z *d;
};







struct NETRootInfoPrivate {

    Display *display;
    NETSize rootSize;
    Window root;
    Window supportwindow;
    const char *name;
    int screen;



    NETRArray<NETPoint> viewport;
    NETRArray<NETRect> workarea;
    NETSize geometry;
    Window active;
    Window *clients, *stacking, *virtual_roots, *kde_system_tray_windows;
    NETRArray<const char *> desktop_names;
    int number_of_desktops;
    int current_desktop;

    unsigned long clients_count, stacking_count, virtual_roots_count,
        kde_system_tray_windows_count;

    unsigned long properties[ 5 ];
    unsigned long client_properties[ 5 ];

    int ref;
};







struct NETWinInfoPrivate {
    Display *display;
    Window window, root;
    NET::MappingState mapping_state;
    Bool mapping_state_dirty;

    NETRArray<NETIcon> icons;
    int icon_count;

    NETRect icon_geom, win_geom;
    unsigned long state;
    NETStrut strut, frame_strut;
    NETRArray<NET::WindowType> types;
    char *name, *visible_name, *icon_name, *visible_icon_name;
    int desktop;
    int pid;
    int handled_icons;
    Window kde_system_tray_win_for;
    Time user_time;
    char* startup_id;
    Window transient_for, window_group;
    unsigned long allowed_actions;

    unsigned long properties[ 2 ];

    int ref;
};
# 41 "/coolo/prod/kdelibs/kdecore/netwm.cpp" 2


static Atom UTF8_STRING = 0;


static Atom net_supported = 0;
static Atom net_client_list = 0;
static Atom net_client_list_stacking = 0;
static Atom net_desktop_geometry = 0;
static Atom net_desktop_viewport = 0;
static Atom net_current_desktop = 0;
static Atom net_desktop_names = 0;
static Atom net_number_of_desktops = 0;
static Atom net_active_window = 0;
static Atom net_workarea = 0;
static Atom net_supporting_wm_check = 0;
static Atom net_virtual_roots = 0;


static Atom net_close_window = 0;
static Atom net_wm_moveresize = 0;


static Atom net_wm_name = 0;
static Atom net_wm_visible_name = 0;
static Atom net_wm_icon_name = 0;
static Atom net_wm_visible_icon_name = 0;
static Atom net_wm_desktop = 0;
static Atom net_wm_window_type = 0;
static Atom net_wm_state = 0;
static Atom net_wm_strut = 0;
static Atom net_wm_icon_geometry = 0;
static Atom net_wm_icon = 0;
static Atom net_wm_pid = 0;
static Atom net_wm_user_time = 0;
static Atom net_wm_handled_icons = 0;
static Atom net_startup_id = 0;
static Atom net_wm_allowed_actions = 0;


static Atom kde_net_system_tray_windows = 0;
static Atom kde_net_wm_system_tray_window_for = 0;
static Atom kde_net_wm_frame_strut = 0;
static Atom kde_net_wm_window_type_override = 0;
static Atom kde_net_wm_window_type_topmenu = 0;


static Atom wm_protocols = 0;
static Atom net_wm_ping = 0;


static Atom net_wm_window_type_normal = 0;
static Atom net_wm_window_type_desktop = 0;
static Atom net_wm_window_type_dock = 0;
static Atom net_wm_window_type_toolbar = 0;
static Atom net_wm_window_type_menu = 0;
static Atom net_wm_window_type_dialog = 0;
static Atom net_wm_window_type_utility = 0;
static Atom net_wm_window_type_splash = 0;


static Atom net_wm_state_modal = 0;
static Atom net_wm_state_sticky = 0;
static Atom net_wm_state_max_vert = 0;
static Atom net_wm_state_max_horiz = 0;
static Atom net_wm_state_shaded = 0;
static Atom net_wm_state_skip_taskbar = 0;
static Atom net_wm_state_skip_pager = 0;
static Atom net_wm_state_hidden = 0;
static Atom net_wm_state_fullscreen = 0;
static Atom net_wm_state_above = 0;
static Atom net_wm_state_below = 0;
static Atom net_wm_state_demands_attention = 0;


static Atom net_wm_action_move = 0;
static Atom net_wm_action_resize = 0;
static Atom net_wm_action_minimize = 0;
static Atom net_wm_action_shade = 0;
static Atom net_wm_action_stick = 0;
static Atom net_wm_action_max_vert = 0;
static Atom net_wm_action_max_horiz = 0;
static Atom net_wm_action_fullscreen = 0;
static Atom net_wm_action_change_desk = 0;
static Atom net_wm_action_close = 0;


static Atom net_wm_state_stays_on_top = 0;


static Atom xa_wm_state = 0;

static Bool netwm_atoms_created = 0;
const unsigned long netwm_sendevent_mask = ((1L<<20)|
                                             (1L<<19));


const long MAX_PROP_SIZE = 100000;

static char *nstrdup(const char *s1) {
    if (! s1) return (char *) 0;

    int l = strlen(s1) + 1;
    char *s2 = new char[l];
    strncpy(s2, s1, l);
    return s2;
}


static char *nstrndup(const char *s1, int l) {
    if (! s1 || l == 0) return (char *) 0;

    char *s2 = new char[l+1];
    strncpy(s2, s1, l);
    s2[l] = '\0';
    return s2;
}


static Window *nwindup(Window *w1, int n) {
    if (! w1 || n == 0) return (Window *) 0;

    Window *w2 = new Window[n];
    while (n--) w2[n] = w1[n];
    return w2;
}


static void refdec_nri(NETRootInfoPrivate *p) {





    if (! --p->ref) {





        if (p->name) delete [] p->name;
        if (p->stacking) delete [] p->stacking;
        if (p->clients) delete [] p->clients;
        if (p->virtual_roots) delete [] p->virtual_roots;
        if (p->kde_system_tray_windows) delete [] p->kde_system_tray_windows;

        int i;
        for (i = 0; i < p->desktop_names.size(); i++)
            if (p->desktop_names[i]) delete [] p->desktop_names[i];
    }
}


static void refdec_nwi(NETWinInfoPrivate *p) {





    if (! --p->ref) {





        if (p->name) delete [] p->name;
        if (p->visible_name) delete [] p->visible_name;
        if (p->icon_name) delete [] p->icon_name;
        if (p->visible_icon_name) delete [] p->visible_icon_name;
        if (p->startup_id) delete[] p->startup_id;

        int i;
        for (i = 0; i < p->icons.size(); i++)
            if (p->icons[i].data) delete [] p->icons[i].data;
    }
}


static int wcmp(const void *a, const void *b) {
    return *((Window *) a) - *((Window *) b);
}


static const int netAtomCount = 69;
static void create_atoms(Display *d) {
    static const char * const names[netAtomCount] =
    {
        "UTF8_STRING",
            "_NET_SUPPORTED",
            "_NET_SUPPORTING_WM_CHECK",
            "_NET_CLIENT_LIST",
            "_NET_CLIENT_LIST_STACKING",
            "_NET_NUMBER_OF_DESKTOPS",
            "_NET_DESKTOP_GEOMETRY",
            "_NET_DESKTOP_VIEWPORT",
            "_NET_CURRENT_DESKTOP",
            "_NET_DESKTOP_NAMES",
            "_NET_ACTIVE_WINDOW",
            "_NET_WORKAREA",
            "_NET_VIRTUAL_ROOTS",
            "_NET_CLOSE_WINDOW",

            "_NET_WM_MOVERESIZE",
            "_NET_WM_NAME",
            "_NET_WM_VISIBLE_NAME",
            "_NET_WM_ICON_NAME",
            "_NET_WM_VISIBLE_ICON_NAME",
            "_NET_WM_DESKTOP",
            "_NET_WM_WINDOW_TYPE",
            "_NET_WM_STATE",
            "_NET_WM_STRUT",
            "_NET_WM_ICON_GEOMETRY",
            "_NET_WM_ICON",
            "_NET_WM_PID",
            "_NET_WM_USER_TIME",
            "_NET_WM_HANDLED_ICONS",
            "_KDE_STARTUP_ID",


            "_NET_AM_ALLOWED_ACTIONS",
            "_NET_WM_PING",

            "_NET_WM_WINDOW_TYPE_NORMAL",
            "_NET_WM_WINDOW_TYPE_DESKTOP",
            "_NET_WM_WINDOW_TYPE_DOCK",
            "_NET_WM_WINDOW_TYPE_TOOLBAR",
            "_NET_WM_WINDOW_TYPE_MENU",
            "_NET_WM_WINDOW_TYPE_DIALOG",
            "_NET_WM_WINDOW_TYPE_UTILITY",
            "_NET_WM_WINDOW_TYPE_SPLASH",

            "_NET_WM_STATE_MODAL",
            "_NET_WM_STATE_STICKY",
            "_NET_WM_STATE_MAXIMIZED_VERT",
            "_NET_WM_STATE_MAXIMIZED_HORZ",
            "_NET_WM_STATE_SHADED",
            "_NET_WM_STATE_SKIP_TASKBAR",
            "_NET_WM_STATE_SKIP_PAGER",
            "_NET_WM_STATE_HIDDEN",
            "_NET_WM_STATE_FULLSCREEN",
            "_NET_WM_STATE_ABOVE",
            "_NET_WM_STATE_BELOW",
            "_NET_WM_STATE_DEMANDS_ATTENTION",

            "_NET_WM_ACTION_MOVE",
            "_NET_WM_ACTION_RESIZE",
            "_NET_WM_ACTION_MINIMIZE",
            "_NET_WM_ACTION_SHADE",
            "_NET_WM_ACTION_STICK",
            "_NET_WM_ACTION_MAXIMIZE_VERT",
            "_NET_WM_ACTION_MAXIMIZE_HORZ",
            "_NET_WM_ACTION_FULLSCREEN",
            "_NET_WM_ACTION_CHANGE_DESKTOP",
            "_NET_WM_ACTION_CLOSE",

            "_NET_WM_STATE_STAYS_ON_TOP",

            "_KDE_NET_SYSTEM_TRAY_WINDOWS",
            "_KDE_NET_WM_SYSTEM_TRAY_WINDOW_FOR",
            "_KDE_NET_WM_FRAME_STRUT",
            "_KDE_NET_WM_WINDOW_TYPE_OVERRIDE",
            "_KDE_NET_WM_WINDOW_TYPE_TOPMENU",

            "WM_STATE",
            "WM_PROTOCOLS"
            };

    Atom atoms[netAtomCount], *atomsp[netAtomCount] =
    {
        &UTF8_STRING,
            &net_supported,
            &net_supporting_wm_check,
            &net_client_list,
            &net_client_list_stacking,
            &net_number_of_desktops,
            &net_desktop_geometry,
            &net_desktop_viewport,
            &net_current_desktop,
            &net_desktop_names,
            &net_active_window,
            &net_workarea,
            &net_virtual_roots,
            &net_close_window,

            &net_wm_moveresize,
            &net_wm_name,
            &net_wm_visible_name,
            &net_wm_icon_name,
            &net_wm_visible_icon_name,
            &net_wm_desktop,
            &net_wm_window_type,
            &net_wm_state,
            &net_wm_strut,
            &net_wm_icon_geometry,
            &net_wm_icon,
            &net_wm_pid,
            &net_wm_user_time,
            &net_wm_handled_icons,
            &net_startup_id,
            &net_wm_allowed_actions,
            &net_wm_ping,

            &net_wm_window_type_normal,
            &net_wm_window_type_desktop,
            &net_wm_window_type_dock,
            &net_wm_window_type_toolbar,
            &net_wm_window_type_menu,
            &net_wm_window_type_dialog,
            &net_wm_window_type_utility,
            &net_wm_window_type_splash,

            &net_wm_state_modal,
            &net_wm_state_sticky,
            &net_wm_state_max_vert,
            &net_wm_state_max_horiz,
            &net_wm_state_shaded,
            &net_wm_state_skip_taskbar,
            &net_wm_state_skip_pager,
            &net_wm_state_hidden,
            &net_wm_state_fullscreen,
            &net_wm_state_above,
            &net_wm_state_below,
            &net_wm_state_demands_attention,

            &net_wm_action_move,
            &net_wm_action_resize,
            &net_wm_action_minimize,
            &net_wm_action_shade,
            &net_wm_action_stick,
            &net_wm_action_max_vert,
            &net_wm_action_max_horiz,
            &net_wm_action_fullscreen,
            &net_wm_action_change_desk,
            &net_wm_action_close,

            &net_wm_state_stays_on_top,

            &kde_net_system_tray_windows,
            &kde_net_wm_system_tray_window_for,
            &kde_net_wm_frame_strut,
            &kde_net_wm_window_type_override,
            &kde_net_wm_window_type_topmenu,

            &xa_wm_state,
            &wm_protocols
            };

    int i = netAtomCount;
    while (i--)
        atoms[i] = 0;

    XInternAtoms(d, (char **) names, netAtomCount, 0, atoms);

    i = netAtomCount;
    while (i--)
        *atomsp[i] = atoms[i];

    netwm_atoms_created = 1;
}


static void readIcon(NETWinInfoPrivate *p) {





    Atom type_ret;
    int format_ret;
    unsigned long nitems_ret = 0, after_ret = 0;
    unsigned char *data_ret = 0;


    for (int i = 0; i < p->icons.size(); i++)
        delete [] p->icons[i].data;
    p->icons.reset();
    p->icon_count = 0;


    unsigned char *buffer = 0;
    unsigned long offset = 0;
    unsigned long buffer_offset = 0;
    unsigned long bufsize = 0;


    do {
        if (XGetWindowProperty(p->display, p->window, net_wm_icon, offset,
                               MAX_PROP_SIZE, 0, ((Atom) 6), &type_ret,
                               &format_ret, &nitems_ret, &after_ret, &data_ret)
            == Success) {
            if (!bufsize)
            {
               if (nitems_ret < 3 || type_ret != ((Atom) 6) ||
                  format_ret != 32) {




                  if ( data_ret )
                     XFree(data_ret);
                  return;
               }

               bufsize = nitems_ret * sizeof(long) + after_ret;
               buffer = (unsigned char *) malloc(bufsize);
            }
            else if (buffer_offset + nitems_ret*sizeof(long) > bufsize)
            {
fprintf(stderr, "NETWM: Warning readIcon() needs buffer adjustment!\n");
               bufsize = buffer_offset + nitems_ret * sizeof(long) + after_ret;
               buffer = (unsigned char *) realloc(buffer, bufsize);
            }
            memcpy((buffer + buffer_offset), data_ret, nitems_ret * sizeof(long));
            buffer_offset += nitems_ret * sizeof(long);
            offset += nitems_ret;

            if ( data_ret )
                XFree(data_ret);
        } else {
            if (buffer)
               free(buffer);
            return;
        }
    }
    while (after_ret > 0);

    CARD32 *data32;
    unsigned long i, j, k, sz, s;
    unsigned long *d = (unsigned long *) buffer;
    for (i = 0, j = 0; i < bufsize; i++) {
        p->icons[j].size.width = *d++;
        i += sizeof(long);
        p->icons[j].size.height = *d++;
        i += sizeof(long);

        sz = p->icons[j].size.width * p->icons[j].size.height;
        s = sz * sizeof(long);

        if ( i + s - 1 > bufsize ) {
            break;
        }

        if (p->icons[j].data) delete [] p->icons[j].data;
        data32 = new CARD32[sz];
        p->icons[j].data = (unsigned char *) data32;
        for (k = 0; k < sz; k++, i += sizeof(long)) {
            *data32++ = (CARD32) *d++;
        }
        j++;
        p->icon_count++;
    }





    free(buffer);
}


template <class Z>
NETRArray<Z>::NETRArray()
  : sz(0), capacity(2)
{
    d = (Z*) calloc(capacity, sizeof(Z));
}


template <class Z>
NETRArray<Z>::~NETRArray() {
    free(d);
}


template <class Z>
void NETRArray<Z>::reset() {
    sz = 0;
    capacity = 2;
    d = (Z*) realloc(d, sizeof(Z)*capacity);
    memset( (void*) d, 0, sizeof(Z)*capacity );
}

template <class Z>
Z &NETRArray<Z>::operator[](int index) {
    if (index >= capacity) {



        int newcapacity = 2*capacity > index+1 ? 2*capacity : index+1;

        d = (Z*) realloc(d, sizeof(Z)*newcapacity);
        memset( (void*) &d[capacity], 0, sizeof(Z)*(newcapacity-capacity) );
        capacity = newcapacity;
    }
    if (index >= sz)
        sz = index + 1;

    return d[index];
}




NETRootInfo::NETRootInfo(Display *display, Window supportWindow, const char *wmName,
                         const unsigned long properties[], int properties_size,
                         int screen, bool doActivate)
{





    p = new NETRootInfoPrivate;
    p->ref = 1;

    p->display = display;
    p->name = nstrdup(wmName);

    if (screen != -1) {
        p->screen = screen;
    } else {
        p->screen = (((_XPrivDisplay)p->display)->default_screen);
    }

    p->root = ((&((_XPrivDisplay)p->display)->screens[p->screen])->root);
    p->supportwindow = supportWindow;
    p->number_of_desktops = p->current_desktop = 0;
    p->active = None;
    p->clients = p->stacking = p->virtual_roots = (Window *) 0;
    p->clients_count = p->stacking_count = p->virtual_roots_count = 0;
    p->kde_system_tray_windows = 0;
    p->kde_system_tray_windows_count = 0;
    setDefaultProperties();
    if( properties_size > PROPERTIES_SIZE ) {
        fprintf( stderr, "NETRootInfo::NETRootInfo(): properties array too large\n");
        properties_size = PROPERTIES_SIZE;
    }
    for( int i = 0; i < properties_size; ++i )
        p->properties[ i ] = properties[ i ];

    p->properties[ PROTOCOLS ] |= ( Supported | SupportingWMCheck );
    p->client_properties[ PROTOCOLS ] = DesktopNames
                                        | WMPing;
    p->client_properties[ PROTOCOLS2 ] = 0;

    role = WindowManager;

    if (! netwm_atoms_created) create_atoms(p->display);

    if (doActivate) activate();
}

NETRootInfo::NETRootInfo(Display *display, Window supportWindow, const char *wmName,
                         unsigned long properties, int screen, bool doActivate)
{





    p = new NETRootInfoPrivate;
    p->ref = 1;

    p->display = display;
    p->name = nstrdup(wmName);

    if (screen != -1) {
        p->screen = screen;
    } else {
        p->screen = (((_XPrivDisplay)p->display)->default_screen);
    }

    p->root = ((&((_XPrivDisplay)p->display)->screens[p->screen])->root);
    p->supportwindow = supportWindow;
    p->number_of_desktops = p->current_desktop = 0;
    p->active = None;
    p->clients = p->stacking = p->virtual_roots = (Window *) 0;
    p->clients_count = p->stacking_count = p->virtual_roots_count = 0;
    p->kde_system_tray_windows = 0;
    p->kde_system_tray_windows_count = 0;
    setDefaultProperties();
    p->properties[ PROTOCOLS ] = properties;

    p->properties[ PROTOCOLS ] |= ( Supported | SupportingWMCheck );
    p->client_properties[ PROTOCOLS ] = DesktopNames
                                        | WMPing;
    p->client_properties[ PROTOCOLS2 ] = 0;

    role = WindowManager;

    if (! netwm_atoms_created) create_atoms(p->display);

    if (doActivate) activate();
}


NETRootInfo::NETRootInfo(Display *display, const unsigned long properties[], int properties_size,
                         int screen, bool doActivate)
{





    p = new NETRootInfoPrivate;
    p->ref = 1;

    p->name = 0;

    p->display = display;

    if (screen != -1) {
        p->screen = screen;
    } else {
        p->screen = (((_XPrivDisplay)p->display)->default_screen);
    }

    p->root = ((&((_XPrivDisplay)p->display)->screens[p->screen])->root);
    p->rootSize.width = (((&((_XPrivDisplay)p->display)->screens[p->screen]))->width);
    p->rootSize.height = (((&((_XPrivDisplay)p->display)->screens[p->screen]))->height);

    p->supportwindow = None;
    p->number_of_desktops = p->current_desktop = 0;
    p->active = None;
    p->clients = p->stacking = p->virtual_roots = (Window *) 0;
    p->clients_count = p->stacking_count = p->virtual_roots_count = 0;
    p->kde_system_tray_windows = 0;
    p->kde_system_tray_windows_count = 0;
    setDefaultProperties();
    if( properties_size > PROPERTIES_SIZE ) {
        fprintf( stderr, "NETWinInfo::NETWinInfo(): properties array too large\n");
        properties_size = PROPERTIES_SIZE;
    }
    for( int i = 0; i < properties_size; ++i )
        p->client_properties[ i ] = properties[ i ];
    for( int i = 0; i < PROPERTIES_SIZE; ++i )
        p->properties[ i ] = 0;

    role = Client;

    if (! netwm_atoms_created) create_atoms(p->display);

    if (doActivate) activate();
}

NETRootInfo::NETRootInfo(Display *display, unsigned long properties, int screen,
                         bool doActivate)
{





    p = new NETRootInfoPrivate;
    p->ref = 1;

    p->name = 0;

    p->display = display;

    if (screen != -1) {
        p->screen = screen;
    } else {
        p->screen = (((_XPrivDisplay)p->display)->default_screen);
    }

    p->root = ((&((_XPrivDisplay)p->display)->screens[p->screen])->root);
    p->rootSize.width = (((&((_XPrivDisplay)p->display)->screens[p->screen]))->width);
    p->rootSize.height = (((&((_XPrivDisplay)p->display)->screens[p->screen]))->height);

    p->supportwindow = None;
    p->number_of_desktops = p->current_desktop = 0;
    p->active = None;
    p->clients = p->stacking = p->virtual_roots = (Window *) 0;
    p->clients_count = p->stacking_count = p->virtual_roots_count = 0;
    p->kde_system_tray_windows = 0;
    p->kde_system_tray_windows_count = 0;
    setDefaultProperties();
    p->client_properties[ PROTOCOLS ] = properties;
    for( int i = 0; i < PROPERTIES_SIZE; ++i )
        p->properties[ i ] = 0;

    role = Client;

    if (! netwm_atoms_created) create_atoms(p->display);

    if (doActivate) activate();
}


NETRootInfo2::NETRootInfo2(Display *display, Window supportWindow, const char *wmName,
                         unsigned long properties[], int properties_size,
                         int screen, bool doActivate)
    : NETRootInfo( display, supportWindow, wmName, properties, properties_size,
        screen, doActivate )
{
}



NETRootInfo::NETRootInfo(const NETRootInfo &rootinfo) {





    p = rootinfo.p;
    role = rootinfo.role;

    p->ref++;
}




NETRootInfo::~NETRootInfo() {
    refdec_nri(p);

    if (! p->ref) delete p;
}


void NETRootInfo::setDefaultProperties()
{
    p->properties[ PROTOCOLS ] = Supported | SupportingWMCheck;
    p->properties[ WINDOW_TYPES ] = NormalMask | DesktopMask | DockMask
        | ToolbarMask | MenuMask | DialogMask;
    p->properties[ STATES ] = Modal | Sticky | MaxVert | MaxHoriz | Shaded
        | SkipTaskbar | StaysOnTop;
    p->properties[ PROTOCOLS2 ] = 0;
    p->properties[ ACTIONS ] = 0;
    p->client_properties[ PROTOCOLS ] = 0;
    p->client_properties[ WINDOW_TYPES ] = 0;
    p->client_properties[ STATES ] = 0;
    p->client_properties[ PROTOCOLS2 ] = 0;
    p->client_properties[ ACTIONS ] = 0;
}

void NETRootInfo::activate() {
    if (role == WindowManager) {






        setSupported();
    } else {





        update(p->client_properties);
    }
}


void NETRootInfo::setClientList(Window *windows, unsigned int count) {
    if (role != WindowManager) return;

    p->clients_count = count;

    if (p->clients) delete [] p->clients;
    p->clients = nwindup(windows, count);






    XChangeProperty(p->display, p->root, net_client_list, ((Atom) 33), 32,
                    0, (unsigned char *)p->clients,
                    p->clients_count);
}


void NETRootInfo::setClientListStacking(Window *windows, unsigned int count) {
    if (role != WindowManager) return;

    p->stacking_count = count;
    if (p->stacking) delete [] p->stacking;
    p->stacking = nwindup(windows, count);







    XChangeProperty(p->display, p->root, net_client_list_stacking, ((Atom) 33), 32,
                    0, (unsigned char *) p->stacking,
                    p->stacking_count);
}


void NETRootInfo::setKDESystemTrayWindows(Window *windows, unsigned int count) {
    if (role != WindowManager) return;

    p->kde_system_tray_windows_count = count;
    if (p->kde_system_tray_windows) delete [] p->kde_system_tray_windows;
    p->kde_system_tray_windows = nwindup(windows, count);







    XChangeProperty(p->display, p->root, kde_net_system_tray_windows, ((Atom) 33), 32,
                    0,
                    (unsigned char *) p->kde_system_tray_windows,
                    p->kde_system_tray_windows_count);
}


void NETRootInfo::setNumberOfDesktops(int numberOfDesktops) {







    if (role == WindowManager) {
        p->number_of_desktops = numberOfDesktops;
        long d = numberOfDesktops;
        XChangeProperty(p->display, p->root, net_number_of_desktops, ((Atom) 6), 32,
                        0, (unsigned char *) &d, 1);
    } else {
        XEvent e;

        e.xclient.type = 33;
        e.xclient.message_type = net_number_of_desktops;
        e.xclient.display = p->display;
        e.xclient.window = p->root;
        e.xclient.format = 32;
        e.xclient.data.l[0] = numberOfDesktops;
        e.xclient.data.l[1] = 0l;
        e.xclient.data.l[2] = 0l;
        e.xclient.data.l[3] = 0l;
        e.xclient.data.l[4] = 0l;

        XSendEvent(p->display, p->root, 0, netwm_sendevent_mask, &e);
    }
}


void NETRootInfo::setCurrentDesktop(int desktop) {







    if (role == WindowManager) {
        p->current_desktop = desktop;
        long d = p->current_desktop - 1;
        XChangeProperty(p->display, p->root, net_current_desktop, ((Atom) 6), 32,
                        0, (unsigned char *) &d, 1);
    } else {
        XEvent e;

        e.xclient.type = 33;
        e.xclient.message_type = net_current_desktop;
        e.xclient.display = p->display;
        e.xclient.window = p->root;
        e.xclient.format = 32;
        e.xclient.data.l[0] = desktop - 1;
        e.xclient.data.l[1] = 0l;
        e.xclient.data.l[2] = 0l;
        e.xclient.data.l[3] = 0l;
        e.xclient.data.l[4] = 0l;

        XSendEvent(p->display, p->root, 0, netwm_sendevent_mask, &e);
    }
}


void NETRootInfo::setDesktopName(int desktop, const char *desktopName) {

    if (desktop < 1) return;

    if (p->desktop_names[desktop - 1]) delete [] p->desktop_names[desktop - 1];
    p->desktop_names[desktop - 1] = nstrdup(desktopName);

    unsigned int i, proplen,
        num = ((p->number_of_desktops > p->desktop_names.size()) ?
               p->number_of_desktops : p->desktop_names.size());
    for (i = 0, proplen = 0; i < num; i++)
        proplen += (p->desktop_names[i] != 0 ? strlen(p->desktop_names[i])+1 : 1 );

    char *prop = new char[proplen], *propp = prop;

    for (i = 0; i < num; i++)
        if (p->desktop_names[i]) {
            strcpy(propp, p->desktop_names[i]);
            propp += strlen(p->desktop_names[i]) + 1;
        } else
            *propp++ = '\0';
# 950 "/coolo/prod/kdelibs/kdecore/netwm.cpp"
    XChangeProperty(p->display, p->root, net_desktop_names, UTF8_STRING, 8,
                    0, (unsigned char *) prop, proplen);

    delete [] prop;
}


void NETRootInfo::setDesktopGeometry(int , const NETSize &geometry) {






    if (role == WindowManager) {
        p->geometry = geometry;

        long data[2];
        data[0] = p->geometry.width;
        data[1] = p->geometry.height;

        XChangeProperty(p->display, p->root, net_desktop_geometry, ((Atom) 6), 32,
                        0, (unsigned char *) data, 2);
    } else {
        XEvent e;

        e.xclient.type = 33;
        e.xclient.message_type = net_desktop_geometry;
        e.xclient.display = p->display;
        e.xclient.window = p->root;
        e.xclient.format = 32;
        e.xclient.data.l[0] = geometry.width;
        e.xclient.data.l[1] = geometry.height;
        e.xclient.data.l[2] = 0l;
        e.xclient.data.l[3] = 0l;
        e.xclient.data.l[4] = 0l;

        XSendEvent(p->display, p->root, 0, netwm_sendevent_mask, &e);
    }
}


void NETRootInfo::setDesktopViewport(int desktop, const NETPoint &viewport) {






    if (desktop < 1) return;

    if (role == WindowManager) {
        p->viewport[desktop - 1] = viewport;

        int d, i, l;
        l = p->number_of_desktops * 2;
        long *data = new long[l];
        for (d = 0, i = 0; d < p->number_of_desktops; d++) {
            data[i++] = p->viewport[d].x;
            data[i++] = p->viewport[d].y;
        }

        XChangeProperty(p->display, p->root, net_desktop_viewport, ((Atom) 6), 32,
                        0, (unsigned char *) data, l);

        delete [] data;
    } else {
        XEvent e;

        e.xclient.type = 33;
        e.xclient.message_type = net_desktop_viewport;
        e.xclient.display = p->display;
        e.xclient.window = p->root;
        e.xclient.format = 32;
        e.xclient.data.l[0] = viewport.x;
        e.xclient.data.l[1] = viewport.y;
        e.xclient.data.l[2] = 0l;
        e.xclient.data.l[3] = 0l;
        e.xclient.data.l[4] = 0l;

        XSendEvent(p->display, p->root, 0, netwm_sendevent_mask, &e);
    }
}


void NETRootInfo::setSupported() {
    if (role != WindowManager) {




        return;
    }

    Atom atoms[netAtomCount];
    int pnum = 2;


    atoms[0] = net_supported;
    atoms[1] = net_supporting_wm_check;

    if (p->properties[ PROTOCOLS ] & ClientList)
        atoms[pnum++] = net_client_list;

    if (p->properties[ PROTOCOLS ] & ClientListStacking)
        atoms[pnum++] = net_client_list_stacking;

    if (p->properties[ PROTOCOLS ] & NumberOfDesktops)
        atoms[pnum++] = net_number_of_desktops;

    if (p->properties[ PROTOCOLS ] & DesktopGeometry)
        atoms[pnum++] = net_desktop_geometry;

    if (p->properties[ PROTOCOLS ] & DesktopViewport)
        atoms[pnum++] = net_desktop_viewport;

    if (p->properties[ PROTOCOLS ] & CurrentDesktop)
        atoms[pnum++] = net_current_desktop;

    if (p->properties[ PROTOCOLS ] & DesktopNames)
        atoms[pnum++] = net_desktop_names;

    if (p->properties[ PROTOCOLS ] & ActiveWindow)
        atoms[pnum++] = net_active_window;

    if (p->properties[ PROTOCOLS ] & WorkArea)
        atoms[pnum++] = net_workarea;

    if (p->properties[ PROTOCOLS ] & VirtualRoots)
        atoms[pnum++] = net_virtual_roots;

    if (p->properties[ PROTOCOLS ] & CloseWindow)
        atoms[pnum++] = net_close_window;



    if (p->properties[ PROTOCOLS ] & WMMoveResize)
        atoms[pnum++] = net_wm_moveresize;

    if (p->properties[ PROTOCOLS ] & WMName)
        atoms[pnum++] = net_wm_name;

    if (p->properties[ PROTOCOLS ] & WMVisibleName)
        atoms[pnum++] = net_wm_visible_name;

    if (p->properties[ PROTOCOLS ] & WMIconName)
        atoms[pnum++] = net_wm_icon_name;

    if (p->properties[ PROTOCOLS ] & WMVisibleIconName)
        atoms[pnum++] = net_wm_visible_icon_name;

    if (p->properties[ PROTOCOLS ] & WMDesktop)
        atoms[pnum++] = net_wm_desktop;

    if (p->properties[ PROTOCOLS ] & WMWindowType) {
        atoms[pnum++] = net_wm_window_type;


        if (p->properties[ WINDOW_TYPES ] & NormalMask)
            atoms[pnum++] = net_wm_window_type_normal;
        if (p->properties[ WINDOW_TYPES ] & DesktopMask)
            atoms[pnum++] = net_wm_window_type_desktop;
        if (p->properties[ WINDOW_TYPES ] & DockMask)
            atoms[pnum++] = net_wm_window_type_dock;
        if (p->properties[ WINDOW_TYPES ] & ToolbarMask)
            atoms[pnum++] = net_wm_window_type_toolbar;
        if (p->properties[ WINDOW_TYPES ] & MenuMask)
            atoms[pnum++] = net_wm_window_type_menu;
        if (p->properties[ WINDOW_TYPES ] & DialogMask)
            atoms[pnum++] = net_wm_window_type_dialog;
        if (p->properties[ WINDOW_TYPES ] & UtilityMask)
            atoms[pnum++] = net_wm_window_type_utility;
        if (p->properties[ WINDOW_TYPES ] & SplashMask)
            atoms[pnum++] = net_wm_window_type_splash;

        if (p->properties[ WINDOW_TYPES ] & OverrideMask)
            atoms[pnum++] = kde_net_wm_window_type_override;
        if (p->properties[ WINDOW_TYPES ] & TopMenuMask)
            atoms[pnum++] = kde_net_wm_window_type_topmenu;
    }

    if (p->properties[ PROTOCOLS ] & WMState) {
        atoms[pnum++] = net_wm_state;


        if (p->properties[ STATES ] & Modal)
            atoms[pnum++] = net_wm_state_modal;
        if (p->properties[ STATES ] & Sticky)
            atoms[pnum++] = net_wm_state_sticky;
        if (p->properties[ STATES ] & MaxVert)
            atoms[pnum++] = net_wm_state_max_vert;
        if (p->properties[ STATES ] & MaxHoriz)
            atoms[pnum++] = net_wm_state_max_horiz;
        if (p->properties[ STATES ] & Shaded)
            atoms[pnum++] = net_wm_state_shaded;
        if (p->properties[ STATES ] & SkipTaskbar)
            atoms[pnum++] = net_wm_state_skip_taskbar;
        if (p->properties[ STATES ] & SkipPager)
            atoms[pnum++] = net_wm_state_skip_pager;
        if (p->properties[ STATES ] & Hidden)
            atoms[pnum++] = net_wm_state_hidden;
        if (p->properties[ STATES ] & FullScreen)
            atoms[pnum++] = net_wm_state_fullscreen;
        if (p->properties[ STATES ] & KeepAbove)
            atoms[pnum++] = net_wm_state_above;
        if (p->properties[ STATES ] & KeepBelow)
            atoms[pnum++] = net_wm_state_below;
        if (p->properties[ STATES ] & DemandsAttention)
            atoms[pnum++] = net_wm_state_demands_attention;

        if (p->properties[ STATES ] & StaysOnTop)
            atoms[pnum++] = net_wm_state_stays_on_top;
    }

    if (p->properties[ PROTOCOLS ] & WMStrut)
        atoms[pnum++] = net_wm_strut;

    if (p->properties[ PROTOCOLS ] & WMIconGeometry)
        atoms[pnum++] = net_wm_icon_geometry;

    if (p->properties[ PROTOCOLS ] & WMIcon)
        atoms[pnum++] = net_wm_icon;

    if (p->properties[ PROTOCOLS ] & WMPid)
        atoms[pnum++] = net_wm_pid;

    if (p->properties[ PROTOCOLS ] & WMHandledIcons)
        atoms[pnum++] = net_wm_handled_icons;

    if (p->properties[ PROTOCOLS ] & WMPing)
        atoms[pnum++] = net_wm_ping;

    if (p->properties[ PROTOCOLS2 ] & WM2UserTime)
        atoms[pnum++] = net_wm_user_time;

    if (p->properties[ PROTOCOLS2 ] & WM2StartupId)
        atoms[pnum++] = net_startup_id;

    if (p->properties[ PROTOCOLS2 ] & WM2AllowedActions) {
        atoms[pnum++] = net_wm_allowed_actions;


        if (p->properties[ ACTIONS ] & ActionMove)
            atoms[pnum++] = net_wm_action_move;
        if (p->properties[ ACTIONS ] & ActionResize)
            atoms[pnum++] = net_wm_action_resize;
        if (p->properties[ ACTIONS ] & ActionMinimize)
            atoms[pnum++] = net_wm_action_minimize;
        if (p->properties[ ACTIONS ] & ActionShade)
            atoms[pnum++] = net_wm_action_shade;
        if (p->properties[ ACTIONS ] & ActionStick)
            atoms[pnum++] = net_wm_action_stick;
        if (p->properties[ ACTIONS ] & ActionMaxVert)
            atoms[pnum++] = net_wm_action_max_vert;
        if (p->properties[ ACTIONS ] & ActionMaxHoriz)
            atoms[pnum++] = net_wm_action_max_horiz;
        if (p->properties[ ACTIONS ] & ActionFullScreen)
            atoms[pnum++] = net_wm_action_fullscreen;
        if (p->properties[ ACTIONS ] & ActionChangeDesktop)
            atoms[pnum++] = net_wm_action_change_desk;
        if (p->properties[ ACTIONS ] & ActionClose)
            atoms[pnum++] = net_wm_action_close;
    }


    if (p->properties[ PROTOCOLS ] & KDESystemTrayWindows)
        atoms[pnum++] = kde_net_system_tray_windows;

    if (p->properties[ PROTOCOLS ] & WMKDESystemTrayWinFor)
        atoms[pnum++] = kde_net_wm_system_tray_window_for;

    if (p->properties[ PROTOCOLS ] & WMKDEFrameStrut)
        atoms[pnum++] = kde_net_wm_frame_strut;

    XChangeProperty(p->display, p->root, net_supported, ((Atom) 4), 32,
                    0, (unsigned char *) atoms, pnum);
    XChangeProperty(p->display, p->root, net_supporting_wm_check, ((Atom) 33), 32,
                    0, (unsigned char *) &(p->supportwindow), 1);
# 1236 "/coolo/prod/kdelibs/kdecore/netwm.cpp"
    XChangeProperty(p->display, p->supportwindow, net_supporting_wm_check,
                    ((Atom) 33), 32, 0,
                    (unsigned char *) &(p->supportwindow), 1);
    XChangeProperty(p->display, p->supportwindow, net_wm_name, UTF8_STRING, 8,
                    0, (unsigned char *) p->name,
                    strlen(p->name));
}

void NETRootInfo::updateSupportedProperties( Atom atom )
{
    if( atom == net_supported )
        p->properties[ PROTOCOLS ] |= Supported;

    else if( atom == net_supporting_wm_check )
        p->properties[ PROTOCOLS ] |= SupportingWMCheck;

    else if( atom == net_client_list )
        p->properties[ PROTOCOLS ] |= ClientList;

    else if( atom == net_client_list_stacking )
        p->properties[ PROTOCOLS ] |= ClientListStacking;

    else if( atom == net_number_of_desktops )
        p->properties[ PROTOCOLS ] |= NumberOfDesktops;

    else if( atom == net_desktop_geometry )
        p->properties[ PROTOCOLS ] |= DesktopGeometry;

    else if( atom == net_desktop_viewport )
        p->properties[ PROTOCOLS ] |= DesktopViewport;

    else if( atom == net_current_desktop )
        p->properties[ PROTOCOLS ] |= CurrentDesktop;

    else if( atom == net_desktop_names )
        p->properties[ PROTOCOLS ] |= DesktopNames;

    else if( atom == net_active_window )
        p->properties[ PROTOCOLS ] |= ActiveWindow;

    else if( atom == net_workarea )
        p->properties[ PROTOCOLS ] |= WorkArea;

    else if( atom == net_virtual_roots )
        p->properties[ PROTOCOLS ] |= VirtualRoots;

    else if( atom == net_close_window )
        p->properties[ PROTOCOLS ] |= CloseWindow;



    else if( atom == net_wm_moveresize )
        p->properties[ PROTOCOLS ] |= WMMoveResize;

    else if( atom == net_wm_name )
        p->properties[ PROTOCOLS ] |= WMName;

    else if( atom == net_wm_visible_name )
        p->properties[ PROTOCOLS ] |= WMVisibleName;

    else if( atom == net_wm_icon_name )
        p->properties[ PROTOCOLS ] |= WMIconName;

    else if( atom == net_wm_visible_icon_name )
        p->properties[ PROTOCOLS ] |= WMVisibleIconName;

    else if( atom == net_wm_desktop )
        p->properties[ PROTOCOLS ] |= WMDesktop;

    else if( atom == net_wm_window_type )
        p->properties[ PROTOCOLS ] |= WMWindowType;


    else if( atom == net_wm_window_type_normal )
        p->properties[ WINDOW_TYPES ] |= NormalMask;
    else if( atom == net_wm_window_type_desktop )
        p->properties[ WINDOW_TYPES ] |= DesktopMask;
    else if( atom == net_wm_window_type_dock )
        p->properties[ WINDOW_TYPES ] |= DockMask;
    else if( atom == net_wm_window_type_toolbar )
        p->properties[ WINDOW_TYPES ] |= ToolbarMask;
    else if( atom == net_wm_window_type_menu )
        p->properties[ WINDOW_TYPES ] |= MenuMask;
    else if( atom == net_wm_window_type_dialog )
        p->properties[ WINDOW_TYPES ] |= DialogMask;
    else if( atom == net_wm_window_type_utility )
        p->properties[ WINDOW_TYPES ] |= UtilityMask;
    else if( atom == net_wm_window_type_splash )
        p->properties[ WINDOW_TYPES ] |= SplashMask;

    else if( atom == kde_net_wm_window_type_override )
        p->properties[ WINDOW_TYPES ] |= OverrideMask;
    else if( atom == kde_net_wm_window_type_topmenu )
        p->properties[ WINDOW_TYPES ] |= TopMenuMask;

    else if( atom == net_wm_state )
        p->properties[ PROTOCOLS ] |= WMState;


    else if( atom == net_wm_state_modal )
        p->properties[ STATES ] |= Modal;
    else if( atom == net_wm_state_sticky )
        p->properties[ STATES ] |= Sticky;
    else if( atom == net_wm_state_max_vert )
        p->properties[ STATES ] |= MaxVert;
    else if( atom == net_wm_state_max_horiz )
        p->properties[ STATES ] |= MaxHoriz;
    else if( atom == net_wm_state_shaded )
        p->properties[ STATES ] |= Shaded;
    else if( atom == net_wm_state_skip_taskbar )
        p->properties[ STATES ] |= SkipTaskbar;
    else if( atom == net_wm_state_skip_pager )
        p->properties[ STATES ] |= SkipPager;
    else if( atom == net_wm_state_hidden )
        p->properties[ STATES ] |= Hidden;
    else if( atom == net_wm_state_fullscreen )
        p->properties[ STATES ] |= FullScreen;
    else if( atom == net_wm_state_above )
        p->properties[ STATES ] |= KeepAbove;
    else if( atom == net_wm_state_below )
        p->properties[ STATES ] |= KeepBelow;
    else if( atom == net_wm_state_demands_attention )
        p->properties[ STATES ] |= DemandsAttention;

    else if( atom == net_wm_state_stays_on_top )
        p->properties[ STATES ] |= StaysOnTop;

    else if( atom == net_wm_strut )
        p->properties[ PROTOCOLS ] |= WMStrut;

    else if( atom == net_wm_icon_geometry )
        p->properties[ PROTOCOLS ] |= WMIconGeometry;

    else if( atom == net_wm_icon )
        p->properties[ PROTOCOLS ] |= WMIcon;

    else if( atom == net_wm_pid )
        p->properties[ PROTOCOLS ] |= WMPid;

    else if( atom == net_wm_handled_icons )
        p->properties[ PROTOCOLS ] |= WMHandledIcons;

    else if( atom == net_wm_ping )
        p->properties[ PROTOCOLS ] |= WMPing;

    else if( atom == net_wm_user_time )
        p->properties[ PROTOCOLS2 ] |= WM2UserTime;

    else if( atom == net_startup_id )
        p->properties[ PROTOCOLS2 ] |= WM2StartupId;

    else if( atom == net_wm_allowed_actions )
        p->properties[ PROTOCOLS2 ] |= WM2AllowedActions;


    else if( atom == net_wm_action_move )
        p->properties[ ACTIONS ] |= ActionMove;
    else if( atom == net_wm_action_resize )
        p->properties[ ACTIONS ] |= ActionResize;
    else if( atom == net_wm_action_minimize )
        p->properties[ ACTIONS ] |= ActionMinimize;
    else if( atom == net_wm_action_shade )
        p->properties[ ACTIONS ] |= ActionShade;
    else if( atom == net_wm_action_stick )
        p->properties[ ACTIONS ] |= ActionStick;
    else if( atom == net_wm_action_max_vert )
        p->properties[ ACTIONS ] |= ActionMaxVert;
    else if( atom == net_wm_action_max_horiz )
        p->properties[ ACTIONS ] |= ActionMaxHoriz;
    else if( atom == net_wm_action_fullscreen )
        p->properties[ ACTIONS ] |= ActionFullScreen;
    else if( atom == net_wm_action_change_desk )
        p->properties[ ACTIONS ] |= ActionChangeDesktop;
    else if( atom == net_wm_action_close )
        p->properties[ ACTIONS ] |= ActionClose;


    else if( atom == kde_net_system_tray_windows )
        p->properties[ PROTOCOLS ] |= KDESystemTrayWindows;

    else if( atom == kde_net_wm_system_tray_window_for )
        p->properties[ PROTOCOLS ] |= WMKDESystemTrayWinFor;

    else if( atom == kde_net_wm_frame_strut )
        p->properties[ PROTOCOLS ] |= WMKDEFrameStrut;
}

extern Time qt_x_last_input_time;
void NETRootInfo::setActiveWindow(Window window) {
    setActiveWindow( window, FromUnknown, qt_x_last_input_time );
}

void NETRootInfo::setActiveWindow(Window window, NET::RequestSource src,
    Time timestamp ) {






    if (role == WindowManager) {
        p->active = window;
        XChangeProperty(p->display, p->root, net_active_window, ((Atom) 33), 32,
                        0, (unsigned char *) &(p->active), 1);
    } else {
        XEvent e;

        e.xclient.type = 33;
        e.xclient.message_type = net_active_window;
        e.xclient.display = p->display;
        e.xclient.window = window;
        e.xclient.format = 32;
        e.xclient.data.l[0] = src;
        e.xclient.data.l[1] = timestamp;
        e.xclient.data.l[2] = 0l;
        e.xclient.data.l[3] = 0l;
        e.xclient.data.l[4] = 0l;

        XSendEvent(p->display, p->root, 0, netwm_sendevent_mask, &e);
    }
}


void NETRootInfo::setWorkArea(int desktop, const NETRect &workarea) {







    if (role != WindowManager || desktop < 1) return;

    p->workarea[desktop - 1] = workarea;

    long *wa = new long[p->number_of_desktops * 4];
    int i, o;
    for (i = 0, o = 0; i < p->number_of_desktops; i++) {
        wa[o++] = p->workarea[i].pos.x;
        wa[o++] = p->workarea[i].pos.y;
        wa[o++] = p->workarea[i].size.width;
        wa[o++] = p->workarea[i].size.height;
    }

    XChangeProperty(p->display, p->root, net_workarea, ((Atom) 6), 32,
                    0, (unsigned char *) wa,
                    p->number_of_desktops * 4);

    delete [] wa;
}


void NETRootInfo::setVirtualRoots(Window *windows, unsigned int count) {
    if (role != WindowManager) return;

    p->virtual_roots_count = count;
    p->virtual_roots = windows;






    XChangeProperty(p->display, p->root, net_virtual_roots, ((Atom) 33), 32,
                    0, (unsigned char *) p->virtual_roots,
                    p->virtual_roots_count);
}


void NETRootInfo::closeWindowRequest(Window window) {






    XEvent e;

    e.xclient.type = 33;
    e.xclient.message_type = net_close_window;
    e.xclient.display = p->display;
    e.xclient.window = window;
    e.xclient.format = 32;
    e.xclient.data.l[0] = 0l;
    e.xclient.data.l[1] = 0l;
    e.xclient.data.l[2] = 0l;
    e.xclient.data.l[3] = 0l;
    e.xclient.data.l[4] = 0l;

    XSendEvent(p->display, p->root, 0, netwm_sendevent_mask, &e);
}


{







    XEvent e;

