/*
** EPITECH PROJECT, 2022
** my sokoban
** File description:
** my_sokoban
*/

#include "../include/my.h"

t_player *reset_game(t_player *player)
{
    player->reset = 1;
    return player;
}