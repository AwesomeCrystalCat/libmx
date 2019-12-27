#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    if (s1) {
        unsigned int len = mx_strlen(s1);
        char *strcp = mx_strnew(len);

        return mx_strncpy(strcp, s1, n);
    }
    return NULL;
}
