#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    char *src1 = NULL;
    char *dst1 = NULL;

    if (src && dst) {
        src1 = (char *) src;
        dst1 = (char *) dst;
        return mx_memcpy(dst1, src1, len);
    }
    return NULL;
}
