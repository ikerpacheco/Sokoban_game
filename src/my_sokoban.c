/*
** EPITECH PROJECT, 2022
** my sokoban
** File description:
** my_sokoban
*/

#include "../include/my.h"

t_player *reset(t_player *player, char **map)
{
    if (player->reset == 1)  {
        player->map = my_arrdup(map);
        player->reset = 0;
    }
    return player;
}

int sokoban_loop(t_player *player, int key, WINDOW *win)
{
    search_player(player);
    print_map(player->map);
    refresh();
    key = getch();
    player_movement(key, win, player);
    refresh();
    if (check_win(player) == 5)
        return 5;
}

int my_sokoban(int ac, char **av)
{
    char *str = get_map(av[1]);
    char **map = str_to_array(str);
    t_player *player = init_player(map);
    WINDOW *win;
    int len = my_arrlen(map);
    int key;
    clear();

    while ((key != 'q') && (player->counter > 0)) {
        player = reset(player, map);
        clear();
        check_obj(player);
        check_xobj(player);
        if (sokoban_loop(player, key, win) == 5)
            return 0;
        if (check_lose(player) == 1)
            return 1;
        refresh();
    }
    return 0;
}