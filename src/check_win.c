/*
** EPITECH PROJECT, 2022
** my sokoban
** File description:
** my_sokoban
*/

#include "../include/my.h"

int check_win(t_player *player)
{
    if (player->counter == 0) {
        clear();
        player->counter = -5;
        return 5;
    }
}