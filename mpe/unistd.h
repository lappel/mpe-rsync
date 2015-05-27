#include "/usr/include/unistd.h"

#ifndef chroot
#define chroot(x) DEBUG()
#endif

#ifndef getpass
#define getpass(x) DEBUG()
#endif
