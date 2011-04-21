#ifndef _VBCCINLINE_SOCKET_H
#define _VBCCINLINE_SOCKET_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

LONG __socket(__reg("d0") LONG domain, __reg("d1") LONG type, __reg("d2") LONG protocol, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define socket(domain, type, protocol) __socket((domain), (type), (protocol), SocketBase)

LONG __bind(__reg("d0") LONG s, __reg("a0") const struct sockaddr * name, __reg("d1") LONG namelen, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define bind(s, name, namelen) __bind((s), (name), (namelen), SocketBase)

LONG __listen(__reg("d0") LONG s, __reg("d1") LONG backlog, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define listen(s, backlog) __listen((s), (backlog), SocketBase)

LONG __accept(__reg("d0") LONG s, __reg("a0") struct sockaddr * addr, __reg("a1") LONG * addrlen, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define accept(s, addr, addrlen) __accept((s), (addr), (addrlen), SocketBase)

LONG __connect(__reg("d0") LONG s, __reg("a0") const struct sockaddr * name, __reg("d1") LONG namelen, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define connect(s, name, namelen) __connect((s), (name), (namelen), SocketBase)

LONG __sendto(__reg("d0") LONG s, __reg("a0") const UBYTE * msg, __reg("d1") LONG len, __reg("d2") LONG flags, __reg("a1") const struct sockaddr * to, __reg("d3") LONG tolen, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define sendto(s, msg, len, flags, to, tolen) __sendto((s), (msg), (len), (flags), (to), (tolen), SocketBase)

LONG __send(__reg("d0") LONG s, __reg("a0") const UBYTE * msg, __reg("d1") LONG len, __reg("d2") LONG flags, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define send(s, msg, len, flags) __send((s), (msg), (len), (flags), SocketBase)

LONG __recvfrom(__reg("d0") LONG s, __reg("a0") UBYTE * buf, __reg("d1") LONG len, __reg("d2") LONG flags, __reg("a1") struct sockaddr * from, __reg("a2") LONG * fromlen, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define recvfrom(s, buf, len, flags, from, fromlen) __recvfrom((s), (buf), (len), (flags), (from), (fromlen), SocketBase)

LONG __recv(__reg("d0") LONG s, __reg("a0") UBYTE * buf, __reg("d1") LONG len, __reg("d2") LONG flags, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define recv(s, buf, len, flags) __recv((s), (buf), (len), (flags), SocketBase)

LONG __shutdown(__reg("d0") LONG s, __reg("d1") LONG how, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define shutdown(s, how) __shutdown((s), (how), SocketBase)

LONG __setsockopt(__reg("d0") LONG s, __reg("d1") LONG level, __reg("d2") LONG optname, __reg("a0") const void * optval, __reg("d3") LONG optlen, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define setsockopt(s, level, optname, optval, optlen) __setsockopt((s), (level), (optname), (optval), (optlen), SocketBase)

LONG __getsockopt(__reg("d0") LONG s, __reg("d1") LONG level, __reg("d2") LONG optname, __reg("a0") void * optval, __reg("a1") LONG * optlen, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define getsockopt(s, level, optname, optval, optlen) __getsockopt((s), (level), (optname), (optval), (optlen), SocketBase)

LONG __getsockname(__reg("d0") LONG s, __reg("a0") struct sockaddr * hostname, __reg("a1") LONG * namelen, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define getsockname(s, hostname, namelen) __getsockname((s), (hostname), (namelen), SocketBase)

LONG __getpeername(__reg("d0") LONG s, __reg("a0") struct sockaddr * hostname, __reg("a1") LONG * namelen, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define getpeername(s, hostname, namelen) __getpeername((s), (hostname), (namelen), SocketBase)

LONG __IoctlSocket(__reg("d0") LONG d, __reg("d1") ULONG request, __reg("a0") char * argp, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define IoctlSocket(d, request, argp) __IoctlSocket((d), (request), (argp), SocketBase)

LONG __CloseSocket(__reg("d0") LONG d, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define CloseSocket(d) __CloseSocket((d), SocketBase)

LONG __WaitSelect(__reg("d0") LONG nfds, __reg("a0") fd_set * readfds, __reg("a1") fd_set * writefds, __reg("a2") fd_set * execptfds, __reg("a3") struct timeval * timeout, __reg("d1") ULONG * maskp, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define WaitSelect(nfds, readfds, writefds, execptfds, timeout, maskp) __WaitSelect((nfds), (readfds), (writefds), (execptfds), (timeout), (maskp), SocketBase)

void __SetSocketSignals(__reg("d0") ULONG SIGINTR, __reg("d1") ULONG SIGIO, __reg("d2") ULONG SIGURG, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define SetSocketSignals(SIGINTR, SIGIO, SIGURG) __SetSocketSignals((SIGINTR), (SIGIO), (SIGURG), SocketBase)

LONG __getdtablesize(__reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define getdtablesize() __getdtablesize(SocketBase)

LONG __ObtainSocket(__reg("d0") LONG id, __reg("d1") LONG domain, __reg("d2") LONG type, __reg("d3") LONG protocol, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define ObtainSocket(id, domain, type, protocol) __ObtainSocket((id), (domain), (type), (protocol), SocketBase)

LONG __ReleaseSocket(__reg("d0") LONG fd, __reg("d1") LONG id, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define ReleaseSocket(fd, id) __ReleaseSocket((fd), (id), SocketBase)

LONG __ReleaseCopyOfSocket(__reg("d0") LONG fd, __reg("d1") LONG id, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define ReleaseCopyOfSocket(fd, id) __ReleaseCopyOfSocket((fd), (id), SocketBase)

LONG __Errno(__reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define Errno() __Errno(SocketBase)

LONG __SetErrnoPtr(__reg("a0") void * errno_p, __reg("d0") LONG size, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define SetErrnoPtr(errno_p, size) __SetErrnoPtr((errno_p), (size), SocketBase)

char * __Inet_NtoA(__reg("d0") ULONG in, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define Inet_NtoA(in) __Inet_NtoA((in), SocketBase)

ULONG __inet_addr(__reg("a0") const UBYTE * cp, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define inet_addr(cp) __inet_addr((cp), SocketBase)

ULONG __Inet_LnaOf(__reg("d0") LONG in, __reg("a6") struct Library *)="\tjsr\t-186(a6)";
#define Inet_LnaOf(in) __Inet_LnaOf((in), SocketBase)

ULONG __Inet_NetOf(__reg("d0") LONG in, __reg("a6") struct Library *)="\tjsr\t-192(a6)";
#define Inet_NetOf(in) __Inet_NetOf((in), SocketBase)

ULONG __Inet_MakeAddr(__reg("d0") ULONG net, __reg("d1") ULONG host, __reg("a6") struct Library *)="\tjsr\t-198(a6)";
#define Inet_MakeAddr(net, host) __Inet_MakeAddr((net), (host), SocketBase)

ULONG __inet_network(__reg("a0") const UBYTE * cp, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define inet_network(cp) __inet_network((cp), SocketBase)

struct hostent  * __gethostbyname(__reg("a0") const UBYTE * name, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define gethostbyname(name) __gethostbyname((name), SocketBase)

struct hostent  * __gethostbyaddr(__reg("a0") const UBYTE * addr, __reg("d0") LONG len, __reg("d1") LONG type, __reg("a6") struct Library *)="\tjsr\t-216(a6)";
#define gethostbyaddr(addr, len, type) __gethostbyaddr((addr), (len), (type), SocketBase)

struct netent   * __getnetbyname(__reg("a0") const UBYTE * name, __reg("a6") struct Library *)="\tjsr\t-222(a6)";
#define getnetbyname(name) __getnetbyname((name), SocketBase)

struct netent   * __getnetbyaddr(__reg("d0") LONG net, __reg("d1") LONG type, __reg("a6") struct Library *)="\tjsr\t-228(a6)";
#define getnetbyaddr(net, type) __getnetbyaddr((net), (type), SocketBase)

struct servent  * __getservbyname(__reg("a0") const UBYTE * name, __reg("a1") const UBYTE * proto, __reg("a6") struct Library *)="\tjsr\t-234(a6)";
#define getservbyname(name, proto) __getservbyname((name), (proto), SocketBase)

struct servent  * __getservbyport(__reg("d0") LONG port, __reg("a0") const UBYTE * proto, __reg("a6") struct Library *)="\tjsr\t-240(a6)";
#define getservbyport(port, proto) __getservbyport((port), (proto), SocketBase)

struct protoent * __getprotobyname(__reg("a0") const UBYTE * name, __reg("a6") struct Library *)="\tjsr\t-246(a6)";
#define getprotobyname(name) __getprotobyname((name), SocketBase)

struct protoent * __getprotobynumber(__reg("d0") LONG proto, __reg("a6") struct Library *)="\tjsr\t-252(a6)";
#define getprotobynumber(proto) __getprotobynumber((proto), SocketBase)

void __vsyslog(__reg("d0") ULONG level, __reg("a0") const char * format, __reg("a1") LONG * ap, __reg("a6") struct Library *)="\tjsr\t-258(a6)";
#define vsyslog(level, format, ap) __vsyslog((level), (format), (ap), SocketBase)

LONG __Dup2Socket(__reg("d0") LONG fd1, __reg("d1") LONG fd2, __reg("a6") struct Library *)="\tjsr\t-264(a6)";
#define Dup2Socket(fd1, fd2) __Dup2Socket((fd1), (fd2), SocketBase)

LONG __sendmsg(__reg("d0") LONG s, __reg("a0") struct msghdr * msg, __reg("d1") LONG flags, __reg("a6") struct Library *)="\tjsr\t-270(a6)";
#define sendmsg(s, msg, flags) __sendmsg((s), (msg), (flags), SocketBase)

LONG __recvmsg(__reg("d0") LONG s, __reg("a0") struct msghdr * msg, __reg("d1") LONG flags, __reg("a6") struct Library *)="\tjsr\t-276(a6)";
#define recvmsg(s, msg, flags) __recvmsg((s), (msg), (flags), SocketBase)

LONG __gethostname(__reg("a0") STRPTR hostname, __reg("d0") LONG size, __reg("a6") struct Library *)="\tjsr\t-282(a6)";
#define gethostname(hostname, size) __gethostname((hostname), (size), SocketBase)

ULONG __gethostid(__reg("a6") struct Library *)="\tjsr\t-288(a6)";
#define gethostid() __gethostid(SocketBase)

LONG __SocketBaseTagList(__reg("a0") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-294(a6)";
#define SocketBaseTagList(taglist) __SocketBaseTagList((taglist), SocketBase)

LONG __GetSocketEvents(__reg("a0") ULONG * eventmaskp, __reg("a6") struct Library *)="\tjsr\t-300(a6)";
#define GetSocketEvents(eventmaskp) __GetSocketEvents((eventmaskp), SocketBase)

#endif /*  _VBCCINLINE_SOCKET_H  */
