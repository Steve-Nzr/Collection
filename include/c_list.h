#ifndef __C_LIST_H__
#define __C_LIST_H__
#pragma once

#include <stdlib.h>
#include <stdbool.h>

typedef struct s_list
{
    void *data;
    struct s_list *other;
} t_list, *pt_list, **ppt_list;

#define PT_LIST_INITIALIZE(list, returnval) \
    list = (pt_list)malloc(sizeof(t_list));\
    if (!list) returnval;\
    list->data = NULL;\
    list->other = NULL;

bool c_list_push_front(ppt_list head, void *data);
bool c_list_push_back(ppt_list head, void *data);
bool c_list_pop_front(ppt_list head);
bool c_list_pop_back(ppt_list head);
size_t c_list_size(pt_list list);

#endif /* __C_LIST_H__ */
