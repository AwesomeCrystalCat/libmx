#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src,
int c, size_t n) {
    char *s = NULL;
    char *d = NULL;
    unsigned int i = 0;

    if (dst && src) {
        s = (char *) src;
        d = (char *) dst;
        if (s[i] == c)
            return d + 1;
        while (i < n) {
            d[i] = s[i];
            if (s[i] == c)
                return d + i + 1;
            i++;
        }
    }
    return NULL;
}
