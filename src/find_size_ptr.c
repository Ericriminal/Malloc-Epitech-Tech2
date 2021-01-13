/*
** EPITECH PROJECT, 2018
** find_size_ptr.c
** File description:
** find_size_ptr_for_realloc
*/

#include "my_malloc.h"

size_t find_size_ptr(void *ptr, node_t *list)
{
    node_t *now = list;

    while (now != NULL) {
        if ((void*)now + sizeof(node_t) == ptr)
            return now->size;
        now = now->next;
    }
    return (0);
}
