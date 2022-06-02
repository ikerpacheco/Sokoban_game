/*
** EPITECH PROJECT, 2022
** track_position
** File description:
** track_position
*/

#include "../../include/my.h"

t_player *check_conditions_left(t_player *player)
{
    if (player->map[player->a][player->b - 1] == 'X' &&
        player->map[player->a][player->b - 2] == 'O') {
        player->map[player->a][player->b] = ' ';
        player->map[player->a][player->b - 1] = 'P';
        player->map[player->a][player->b - 2] = 'X';
        player->obj_posax = player->a;
        player->obj_posbx = player->b - 2;
        player->counter -= 1;
        return player;
    }
    return player;
}

t_player *movement_l(t_player *player)
{
    if (player->map[player->a][player->b - 1] == 'X' &&
        player->map[player->a][player->b - 2] != '#') {
        player->map[player->a][player->b - 2] = 'X';
        player->map[player->a][player->b - 1] = 'P';
        player->map[player->a][player->b] = ' ';
        return player;
    }
    if (player->map[player->a][player->b - 1] == ' ') {
        player->map[player->a][player->b] = ' ';
        player->map[player->a][player->b - 1] = 'P';
        return player;
    }
    return player;
}

t_player *move_left(t_player *player)
{
    if (player->map[player->a][player->b - 1] == 'O') {
        player->map[player->a][player->b - 1] = 'P';
        player->map[player->a][player->b] = ' ';
        player->obj_posa = player->a;
        player->obj_posb = player->b - 1;
        return player;
    }
    if (player->map[player->a][player->b - 1] == '#')
        return player;
    if (player->map[player->a][player->b - 1] == 'X' &&
        player->map[player->a][player->b - 2] == 'X')
        return player;
    player = check_conditions_left(player);
    player = movement_l(player);
    return player;
}