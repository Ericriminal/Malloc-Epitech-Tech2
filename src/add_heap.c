/*
** EPITECH PROJECT, 2018
** add_heap.c
** File description:
** add_heap_for_malloc
*/

#include "my_malloc.h"

int set_start_page(size_t size, int number_of_page)
{
    const int page_size = getpagesize() * 2;
    node_t *new = NULL;

    new = sbrk(0);
    if (sbrk(number_of_page * page_size) == (void*) -1)
        return -1;
    new->size = number_of_page * page_size - sizeof(node_t);
    new->free = 1;
    new->next = NULL;
    get_list(new);
    return 0;
}

int set_next_page(size_t size, int number_of_page, node_t *now)
{
    node_t *new = (void*)now + sizeof(node_t) + now->size;
    const int page_size = getpagesize() * 2;

    if (sbrk(number_of_page * page_size) == (void*) -1)
        return -1;
    new->size = number_of_page * page_size - sizeof(node_t);
    new->free = 1;
    new->next = NULL;
    now->next = new;
    return 0;
}

int add_heap(size_t size, node_t *list)
{
    const int page_size = getpagesize() * 2;
    int number_of_page = 1;
    node_t *now = list;
    int result = 0;

    while (size + sizeof(node_t) >= number_of_page * page_size)
        number_of_page++;
    if (list == NULL)
        result = set_start_page(size, number_of_page);
    else {
        while (now->next != NULL)
            now = now->next;
        result = set_next_page(size, number_of_page, now);
    }
    return result;
}
