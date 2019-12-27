#include "libmx.h"

void mx_foreach(char *arr, int size, void (*f)(char)) {
    if (arr) {
        for (int i = 0; i < size; i++) {
            f(arr[i]);
        }
    }
}
