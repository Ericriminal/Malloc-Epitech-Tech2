/*
** EPITECH PROJECT, 2018
** my_malloc.c
** File description:
** my_malloc
*/

#include "my_malloc.h"

void *malloc(size_t size)
{
    node_t *pointer = NULL;

    if (size <= 0)
        return NULL;
    size = align_2(size);
    pointer = find_heap(size, get_list(NULL));
    if (pointer == NULL) {
        if (add_heap(size, get_list(NULL)) == -1)
            return NULL;
        pointer = find_heap(size, get_list(NULL));
    }
    split_heap(&pointer, size);
    return (pointer + 1);
}

void free(void *ptr)
{
    node_t *now = get_list(NULL);

    while (now != NULL) {
        if (now + 1 == ptr) {
            now->free = 1;
            return;
        }
        now = now->next;
    }
}

void *calloc(size_t nmemb, size_t size)
{
    void *new = NULL;
    size_t aligned_size = align_2(nmemb * size);

    if (nmemb == 0 || size == 0)
        return NULL;
    new = malloc(nmemb * size);
    if (new != NULL)
        memset(new, 0, aligned_size);
    return new;
}

void *realloc(void *ptr, size_t size)
{
    void *tmp = NULL;
    size_t size_ptr = find_size_ptr(ptr, get_list(NULL));

    if (size == 0 && ptr != NULL) {
        free(ptr);
        return NULL;
    }
    if (ptr == NULL)
        return (malloc(size));
    if (size <= size_ptr)
        size_ptr = size;
    free(ptr);
    tmp = memcpy(malloc(size), ptr, size_ptr);
    return tmp;
}

void *reallocarray(void *ptr, size_t nb, size_t size)
{
    return (realloc(ptr, nb * size));
}
