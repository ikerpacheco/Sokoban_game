/*
** EPITECH PROJECT, 2022
** my sokoban
** File description:
** my_sokoban
*/

#include "../include/my.h"

t_player *quit_game(t_player *player)
{
    clear();
    player->counter = -5;

    return player;
}