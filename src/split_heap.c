/*
** EPITECH PROJECT, 2018
** split_heap.c
** File description:
** split_heap
*/

#include "my_malloc.h"

void split_heap(node_t **pointer, size_t size)
{
    node_t *new;

    if ((*pointer)->size >= size + sizeof(node_t)) {
        new = (void*)(*pointer) + sizeof(node_t) + size;
        new->free = 1;
        new->size = (*pointer)->size - size - sizeof(node_t);
        new->next = (*pointer)->next;
        (*pointer)->next = new;
        (*pointer)->size = size;
        (*pointer)->free = 0;
    } else
        (*pointer)->free = 0;
}
