#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list *ptr = NULL;
    unsigned int count = 0;

    if (list != NULL) {
        ptr = list;
        while (ptr->next != NULL) {
            count++;
            ptr = ptr->next;
        }
        count++;
    }
    return count;
}
