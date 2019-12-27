#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;

    if (src && dst) {
        while (i < len) {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
        return dst;
    }
    return 0;
}
