#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *tmp = NULL;

    if (*list != NULL) {
        tmp = *list;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = mx_create_node(data);
    }
}
