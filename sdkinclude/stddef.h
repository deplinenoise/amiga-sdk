#pragma begin_header
#ifndef __STDDEF_H
#define __STDDEF_H 1

#ifndef __SIZE_T
#define __SIZE_T 1
typedef unsigned long size_t;
#endif

#ifndef __PTRDIFF_T
#define __PTRDIFF_T 1
typedef long ptrdiff_t;
#endif

#ifndef __WCHAR_T
#define __WCHAR_T
typedef char wchar_t;
#endif

#undef NULL
#define NULL ((void *)0)

#undef offsetof
#define offsetof(P,M) __offsetof(P,M)

#endif
#pragma end_header
