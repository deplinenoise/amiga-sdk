#pragma begin_header
#ifndef __LIMITS_H
#define __LIMITS_H 1

#define MB_LEN_MAX 1

#define CHAR_BIT 8
#define INT_MAX 2147483647
#define INT_MIN (-2147483647-1)
#define LONG_MAX 2147483647L
#define LONG_MIN (-2147483647L-1)
#define SCHAR_MAX +127
#define SCHAR_MIN (-128)
#define CHAR_MAX SCHAR_MAX
#define CHAR_MIN SCHAR_MIN
#define SHRT_MAX 32767
#define SHRT_MIN (-32768)
#define UCHAR_MAX 255U
#define UINT_MAX 4294967295U
#define ULONG_MAX 4294967295UL
#define USHRT_MAX 65535U

#if __STDC_VERSION__ == 199901
#define LLONG_MIN (-9223372036854775807LL-1)
#define LLONG_MAX 9223372036854775807LL
#define ULLONG_MAX 18446744073709551615ULL
#endif

#endif
#pragma end_header
