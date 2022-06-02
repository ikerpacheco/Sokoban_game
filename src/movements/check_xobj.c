/*
** EPITECH PROJECT, 2022
** track_position
** File description:
** track_position
*/

#include "../../include/my.h"

t_player *check_xobj(t_player *player)
{
    int a = 0;
    int b = 0;

    if (player->map[player->obj_posax][player->obj_posbx] == ' ') {
        player->map[player->obj_posax][player->obj_posbx] = 'O';
        player->counter += 1;
    }
    return player;
}