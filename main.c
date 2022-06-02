/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "include/my.h"

int main(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("Sokoban game by Iker\n Enjoy!!\n");
        return 0;
    }
    initscr();
    keypad(stdscr, TRUE);
    noecho();
    refresh();
    if (error_handling(ac, av) == 84) {
        endwin();
        return 84;
    }
    if (my_sokoban(ac, av) == 1) {
        endwin();
        return 1;
    } else {
        endwin();
        return 0;
    }
    return 0;
}