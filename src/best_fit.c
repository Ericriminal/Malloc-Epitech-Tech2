/*
** EPITECH PROJECT, 2018
** best_fit.c
** File description:
** find_best_node
*/

#include "my_malloc.h"

node_t *select_best_result(node_t *now, node_t *select, size_t size)
{
    if (select == NULL)
        return now;
    if (select->size >= now->size)
        return now;
    return select;
}

node_t *find_heap(size_t size, node_t *list)
{
    node_t *now = list;
    node_t *result = NULL;

    if (now == NULL)
        return NULL;
    while (now != NULL) {
        if (now->free == 1 && now->size >= size)
            result = select_best_result(now, result, size);
        now = now->next;
    }
    return result;
}
