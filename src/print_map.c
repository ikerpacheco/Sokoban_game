/*
** EPITECH PROJECT, 2022
** track_position
** File description:
** track_position
*/

#include "../include/my.h"

void print_map(char **map)
{
    int len = my_arrlen(map);
    int i = 0;
    char *str = "Please, enlarge the terminal to see the map";

    while (map[i] !=  NULL) {
        mvprintw((LINES - len) / 2 + i, (COLS - my_strlen(map[i])) / 2, map[i]);
        i++;
    }
}