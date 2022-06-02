/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check character
*/

#include "../../include/my.h"

int find_box(char **map, int a, int counter)
{
    int b = 0;

    while (map[a][b] != '\0') {
        if (map[a][b] == 'X') {
            counter += 1;
        }
        b += 1;
    }
    return counter;
}

int box_counter(char **map)
{
    int a = 0;
    int b = 0;
    int counter = 0;

    while (map[a] != NULL) {
        counter = find_box(map, a, counter);
        a += 1;
    }
    return counter;
}