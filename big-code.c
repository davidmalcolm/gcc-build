extern int get_i(void);
typedef signed char schar;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long llong;
typedef unsigned long long ullong;
typedef long double ldouble;

#define BODY(T) \
for (i = get_i(); i; i--) { \
  accum += do_1_ ## T(accum, x, y, z); \
  switch (get_i()) { \
    case 1: case 3: case 34: case 123: \
      if (z*x > y) \
        x = do_2_ ## T (x * y + z); \
      else \
        y = do_3_ ## T (x / y - z); \
      break; \
    case 6: case 43: case -2: \
      z = do_4_ ## T ((int)z); \
      break; \
  }\
  for (j = 1; j < get_i (); j++) { \
    a[i+j] = accum * b[i+j*get_i()] / c[j]; \
    b[j] = b[j] - a[j-1]*x; \
    x += b[j-1] + b[j+1]; \
    y *= c[j*i] += a[0] + b[0] * c[(int)x]; \
  } \
  for (j = 0; j < 8192; j++) { \
    a[j] = a[j] + b[j] * c[j]; \
  } \
}

#define L1(T) BODY(T) BODY(T) BODY(T) BODY(T) BODY(T) BODY(T) BODY(T) BODY(T)
#define L2(T) L1(T) L1(T) L1(T) L1(T) L1(T) L1(T) L1(T) L1(T)
#define L3(T) L2(T) L2(T) L2(T) L2(T) L2(T) L2(T) L2(T) L2(T)

#define FUNC(T) \
extern T do_1_ ## T(T, T, T, int); \
extern T do_2_ ## T(T); \
extern T do_3_ ## T(T); \
extern T do_4_ ## T(T); \
T func_ ## T (T x, T y, T z, T *a, T *b, T *c) \
{ \
  T accum = 0; \
  int i, j; \
  L2(T) \
  /*L2(T)*/ \
  return accum; \
}

FUNC(schar)
FUNC(uchar)
FUNC(short)
FUNC(ushort)
FUNC(int)
FUNC(uint)
FUNC(long)
FUNC(ulong)
FUNC(llong)
FUNC(ullong)
FUNC(float)
FUNC(double)
FUNC(ldouble)
