/*
** EPITECH PROJECT, 2022
** init player struct
** File description:
** init_player
*/

#include "../../include/my.h"

t_player *init_player(char **map)
{
    t_player *player = malloc(sizeof(t_player));

    player->a = 0;
    player->b = 0;
    player->map = my_arrdup(map);
    player->reset = 0;
    player->obj_posa = 0;
    player->obj_posb = 0;
    player->obj_posax = 0;
    player->obj_posbx = 0;
    player->objectives = objective_counter(map);
    player->counter = objective_counter(map);
    player->in_counter = player->counter;
    player->boxes = box_counter(map);

    return player;
}