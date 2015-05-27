#include <string.h>

int bcmp (const void *src, const void *dst, size_t n)
{
  return memcmp (src,dst,n);
}
