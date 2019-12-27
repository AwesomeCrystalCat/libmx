#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *newstr = NULL;

    if (ptr == NULL)
        return malloc(size);
    else if (mx_findlen(ptr) > size) {
        newstr = malloc(size);
        mx_memcpy(newstr, ptr, size);
        free(ptr);
        }
    else if (mx_findlen(ptr) < size) {
        newstr = malloc(mx_findlen(ptr));
        mx_memcpy(newstr, ptr, mx_findlen(ptr));
        free(ptr);
    }
    else
        free(ptr);
    ptr = NULL;
    return newstr;
}
