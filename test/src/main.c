#include "../../include/c_list.h"
#include "../../include/c_string.h"

#include <stdio.h>

int main(void)
{
    int i = 0;
    pt_list list = c_list_initialize();

    list->c_list_push_front(&list, &i);
    printf("SIZE:%lu\n", list->c_list_size(&list));

    c_putstr("THIS IS THE END\n");
    return 0;
}
