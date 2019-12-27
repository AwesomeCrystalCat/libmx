#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *temp = NULL;
    char *res = NULL;

    if (str && (mx_strlen(str) != 0)) {
        temp = mx_strtrim(str);
        res = mx_strnew(mx_count_chars(temp));
        for (int i = 0, j = 0; i < mx_strlen(temp); i++, j++) {
            while(mx_is_space(str[i]) == 1)
                i++;
            while (mx_is_space(str[i]) == 0) {
                res[j] = str[i];
                i++;
                j++;
            }
            if (j < mx_count_chars(temp))
                res[j] = 32;
        }
    }
    return res;
}
