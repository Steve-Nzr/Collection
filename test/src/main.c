#include "../../include/c_list.h"
#include "../../include/c_string.h"

#include <stdio.h>

int main(void)
{
    int i = 0;
    int b = 1;
    pt_list list = c_list_initialize();

    list->c_list_push_front(&list, &i);
    list->c_list_push_front(&list, &b);
    list->c_list_push_front(&list, &b);
    list->c_list_push_back(&list, &b);
    list->c_list_push_back(&list, &i);
    list->c_list_pop_front(&list);
    list->c_list_pop_back(&list);
    printf("SIZE:%lu\n", list->c_list_size(&list));

    c_putstr("THIS IS THE END\n");
    return 0;
}
