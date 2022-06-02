/*
** EPITECH PROJECT, 2022
** str to array
** File description:
** str_to_array
*/

#include "../include/my.h"

char **my_2Dmalloc(char **array, int size)
{
    array = malloc(size * sizeof(char *));

    for (int i = 0; i < size; i++) {
        array[i] = malloc(100 * sizeof(char));
    }
    return (array);
}

char **str_to_array(char *str)
{
    int len = my_strlen(str);
    char **array = my_2Dmalloc(array, len);
    int n = 0;
    int x = 0;
    int y = 0;

    while (str[n] != '\0') {
        while (str[n] != '\n') {
            array[y][x] = str[n];
            n += 1;
            x += 1;
        }
        n += 1;
        x = 0;
        y += 1;
    }
    array[y] = NULL;
    return (array);
}