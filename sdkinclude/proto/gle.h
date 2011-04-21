#ifndef PROTO_GLE_H
#define PROTO_GLE_H
#include <exec/libraries.h>
extern struct Library *gleBase;
#ifndef APIENTRY
#ifndef NOSAVEDS
#define APIENTRY __saveds
#else
#define APIENTRY
#endif
#endif
#include <inline/gle_protos.h>
#endif
