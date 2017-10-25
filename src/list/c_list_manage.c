#include "../collection.h"

pt_list c_list_initialize()
{
    pt_list head = (pt_list)malloc(sizeof(t_list));
    if (!head)
        return nullptr;

    head->data = nullptr;
    head->other = nullptr;
    head->c_list_push_front = &c_list_push_front;
    head->c_list_push_back = &c_list_push_back;
    head->c_list_pop_front = &c_list_pop_front;
    head->c_list_pop_back = &c_list_pop_back;
    head->c_list_size = &c_list_size;
    return head;
}
