/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check character
*/

#include "../../include/my.h"

int explore_map(char **map, int a, int counter)
{
    int b = 0;

    while (map[a][b] != '\0') {
        if (map[a][b] == 'O') {
            counter += 1;
        }
        b += 1;
    }
    return counter;
}

int objective_counter(char **map)
{
    int a = 0;
    int b = 0;
    int counter = 0;

    while (map[a] != NULL) {
        counter = explore_map(map, a, counter);
        a += 1;
    }
    return counter;
}