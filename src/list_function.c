/*
** EPITECH PROJECT, 2018
** list_function.c
** File description:
** get_list_in_static_function
*/

#include "my_malloc.h"

node_t *get_list(node_t *new)
{
    static node_t *list = NULL;

    if (new == NULL)
        return list;
    list = new;
    return list;
}
