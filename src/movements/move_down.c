/*
** EPITECH PROJECT, 2022
** track_position
** File description:
** track_position
*/

#include "../../include/my.h"

t_player *check_conditions_down(t_player *player)
{
    if (player->map[player->a + 1][player->b] == 'X' &&
        player->map[player->a + 2][player->b] == 'O') {
        player->map[player->a][player->b] = ' ';
        player->map[player->a + 1][player->b] = 'P';
        player->map[player->a + 2][player->b] = 'X';
        player->obj_posax = player->a + 2;
        player->obj_posbx = player->b;
        player->counter -= 1;
        return player;
    }
    return player;
}

t_player *movement_d(t_player *player)
{
    if (player->map[player->a + 1][player->b] == 'X' &&
        player->map[player->a + 2][player->b] != '#') {
        player->map[player->a + 2][player->b] = 'X';
        player->map[player->a + 1][player->b] = 'P';
        player->map[player->a][player->b] = ' ';
        return player;
    }
    if (player->map[player->a + 1][player->b] == ' ') {
        player->map[player->a][player->b] = ' ';
        player->map[player->a + 1][player->b] = 'P';
        return player;
    }
    return player;
}

t_player *move_down(t_player *player)
{
    if (player->map[player->a + 1][player->b] == 'O') {
        player->map[player->a + 1][player->b] = 'P';
        player->map[player->a][player->b] = ' ';
        player->obj_posa = player->a + 1;
        player->obj_posb = player->b;
        return player;
    }
    if (player->map[player->a + 1][player->b] == '#')
        return player;
    if (player->map[player->a + 1][player->b] == 'X' &&
        player->map[player->a + 2][player->b] == 'X')
        return player;
    player = check_conditions_down(player);
    player = movement_d(player);
    return player;
}