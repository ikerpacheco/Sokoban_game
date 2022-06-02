/*
** EPITECH PROJECT, 2022
** track_position
** File description:
** track_position
*/

#include "../include/my.h"

void check_map(t_player *player, int a)
{
    int b = 0;

    while (player->map[a][b] != '\0') {
        if (player->map[a][b] == 'P') {
            player->a = a;
            player->b = b;
        }
        b += 1;
    }
}

void search_player(t_player *player)
{
    int a = 0;
    int b = 0;

    while (player->map[a] != NULL) {
        check_map(player, a);
        a += 1;
    }
}