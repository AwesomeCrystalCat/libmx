#include "libmx.h"

static int count_chars(const char *s, char c) {    
    int i = 0;

    while (s[i] != c && s[i] != '\0')
        i++;
    return i;
}

static char **if_null() {
    char **arr = (char **)malloc((1) * sizeof(char *));

    arr[0] = NULL;
    return arr;
}

char **mx_strsplit(const char *s, char c) {
    if (s && (mx_strlen(s) != 0)) {
        int len = mx_count_words(s, c);
        int depth = 0;
        char **arr = (char **)malloc((len + 1) * sizeof(char *));

        for (int i = 0, x = 0; i < mx_strlen(s); i++) {
            while (s[i] == c)
                i++;
            if (s[i] != c) {
                depth = count_chars(&s[i], c);
                arr[x] = mx_strndup(&s[i], depth);
                i = i + depth;
                x++;
            }
        }
        arr[len] = NULL;
        return arr;
    }
    return if_null();
}
