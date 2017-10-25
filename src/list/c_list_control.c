#include "../collection.h"

bool c_list_push_front(ppt_list head, void *data)
{
    pt_list node;

    node = c_list_initialize();
    if (!node)
        return false;

    node->data = data;
    node->other = *head;

    *head = node;
    return true;
}

bool c_list_push_back(ppt_list head, void *data)
{
    pt_list current = *head;
    while (current->other)
        current = current->other;

    current->other = c_list_initialize();
    current->other->data = data;
    current->other->other = NULL;
    return true;
}

bool c_list_pop_front(ppt_list head)
{
    pt_list next_node = NULL;

    if (*head == NULL)
        return false;

    next_node = (*head)->other;
    free(*head);
    *head = next_node;
    return true;
}

bool c_list_pop_back(ppt_list head)
{
    pt_list current = *head;

    if (!head || *head == NULL)
        return false;
    if ((*head)->other == NULL)
    {
        free(head);
        return false;
    }

    while (current->other->other)
        current = current->other;

    free(current->other);
    current->other = NULL;
    return true;
}
