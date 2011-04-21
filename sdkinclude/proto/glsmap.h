#ifndef PROTO_GLSMAP_H
#define PROTO_GLSMAP_H
#include <exec/libraries.h>
extern struct Library *glsmapBase;
#ifndef APIENTRY
#ifndef NOSAVEDS
#define APIENTRY __saveds
#else
#define APIENTRY
#endif
#endif
#include <inline/glsmap_protos.h>
#endif
