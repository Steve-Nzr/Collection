#include "../../include/c_list.h"
#include "../../include/c_string.h"

#include <stdio.h>

int main(void)
{
    int i = 0;
    int b = 1;
    pt_list list;

    list = NULL;
    c_list_push_front(&list, &i);
    c_list_push_front(&list, &b);
    c_list_push_front(&list, &b);
    c_list_push_back(&list, &b);
    c_list_push_back(&list, &i);
    c_list_pop_front(&list);
    c_list_pop_back(&list);
    printf("SIZE:%lu\n", c_list_size(list));

    c_putstr("THIS IS THE END\n");
    return 0;
}
