/*
** EPITECH PROJECT, 2022
** track_position
** File description:
** track_position
*/

#include "../../include/my.h"

t_player *check_obj(t_player *player)
{
    int a = 0;
    int b = 0;

    if (player->map[player->obj_posa][player->obj_posb] == ' ') {
        player->map[player->obj_posa][player->obj_posb] = 'O';
    }
    return player;
}