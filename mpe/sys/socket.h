#include "/usr/include/sys/socket.h"

#ifndef PF_UNIX
#define PF_UNIX AF_UNIX
#endif

#ifndef PF_INET
#define PF_INET AF_INET
#endif

#ifndef AF_UNSPEC
#define AF_UNSPEC 0
#endif

#ifndef PF_UNSPEC
#define PF_UNSPEC 0
#endif
