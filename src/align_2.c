/*
** EPITECH PROJECT, 2018
** align_2.c
** File description:
** align_by_2
*/

#include "my_malloc.h"

int align_2(size_t size)
{
    size_t result = 1;

    while (result < size)
        result = result * 2;
    return result;
}
