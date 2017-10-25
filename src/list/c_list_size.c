#include "../collection.h"

size_t c_list_size(ppt_list head)
{
    pt_list current = *head;

    if (!current)
        return 0;
    return c_list_size(&current->other) + 1;
}
