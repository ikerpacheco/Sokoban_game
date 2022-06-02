/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** my_strdup
*/

#include "../include/my.h"

char *my_strdup(char *src)
{
    int len = my_strlen(src);
    char *dest = malloc(len + 1);

    my_strcpy(dest, src);
    return dest;
}