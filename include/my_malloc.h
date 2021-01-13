/*
** EPITECH PROJECT, 2018
** my_malloc.h
** File description:
** my_malloc_lib
*/

#ifndef MY_MALLOC_H_
#define MY_MALLOC_H_

#include <sys/types.h>
#include <unistd.h>
#include <string.h>

typedef struct s_node {
    size_t size;
    struct s_node *next;
    int free;
} node_t;

int add_heap(size_t size, node_t *list);
node_t *find_heap(size_t size, node_t *list);
void split_heap(node_t **pointer, size_t size);
int align_2(size_t size);
size_t find_size_ptr(void *ptr, node_t *list);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nb, size_t size);
node_t *get_list(node_t *new);

#endif
