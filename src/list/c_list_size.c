#include "../collection.h"

size_t c_list_size(pt_list list)
{
    pt_list current = list;

    if (!current)
        return 0;
    printf("ADDR:%p\n", (void *)current->data);
    return c_list_size(current->other) + 1;
}
