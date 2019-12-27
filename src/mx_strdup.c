#include "libmx.h"

char *mx_strdup(const char *str) {
    if (str) {
        int len = mx_strlen(str);
        char *strcp = mx_strnew(len);

        return mx_strcpy(strcp, str);
    }
    return NULL;
}
