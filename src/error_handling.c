/*
** EPITECH PROJECT, 2022
** my sokoban
** File description:
** my_sokoban
*/

#include "../include/my.h"

int check_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '#' &&
            str[i] != 'P' && str[i] != 'X' &&
            str[i] != '\n' && str[i] != 'O')
            return 84;
        i++;
    }
    return 0;
}

int error_handling(int ac, char **av)
{
    char *str = get_map(av[1]);
    char **map = str_to_array(str);
    int boxes = box_counter(map);
    int objectives = objective_counter(map);

    if (ac != 2)
        return 84;
    if (check_str(str) == 84)
        return 84;
    if (boxes < objectives)
        return 84;
    return 0;
}