/*
** EPITECH PROJECT, 2022
** my sokoban
** File description:
** my_sokoban
*/

#include "../include/my.h"

int check_surroundings(t_player *player, int a, int b, int blocked)
{
    int borders = 0;

    if (player->map[a][b + 1] == '#' && player->map[a + 1][b] == '#')
        borders += 1;
    if (player->map[a][b + 1] == '#' && player->map[a - 1][b] == '#')
        borders += 1;
    if (player->map[a][b - 1] == '#' && player->map[a + 1][b] == '#')
        borders += 1;
    if (player->map[a][b - 1] == '#' && player->map[a - 1][b] == '#')
        borders += 1;
    if (borders >= 1)
        blocked += 1;
    return blocked;
}

int explorer(int a, int b, t_player *player, int blocked)
{
    if (player->map[a][b] == 'X') {
        blocked = check_surroundings(player, a, b, blocked);
    }
    return blocked;
}

int check_lose(t_player *player)
{
    int a = 0;
    int b = 0;
    int counter = 0;
    int blocked = 0;

    while (player->map[a] != NULL) {
        while (player->map[a][b] != '\0') {
            blocked = explorer(a, b, player, blocked);
            b++;
        }
        b = 0;
        a += 1;
    }
    if (blocked == player->boxes)
        return 1;
}