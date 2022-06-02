/*
** EPITECH PROJECT, 2022
** track_position
** File description:
** track_position
*/

#include "../include/my.h"

void player_movement(int key, WINDOW *win, t_player *player)
{
    key = getch();
    switch(key) {
        case KEY_RIGHT:
            player = move_right(player);
            break;
        case KEY_LEFT:
            player = move_left(player);
            break;
        case KEY_UP:
            player = move_up(player);
            break;
        case KEY_DOWN:
            player = move_down(player);
            break;
        case 'q':
            quit_game(player);
            break;
        case ' ':
            player = reset_game(player);
            break;
    }
}