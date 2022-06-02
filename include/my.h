/*
** EPITECH PROJECT, 2021
** MY H
** File description:
** Library header
*/


#ifndef MY_H_
    #define MY_H_

    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <dirent.h>
    #include <signal.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <string.h>
    #include <pwd.h>
    #include <fcntl.h>
    #include <grp.h>
    #include <ncurses.h>
    #include <time.h>

    #include "structs/player.h"

    int main(int ac, char **av);
    char *get_map(char const *filepath);
    int my_strlen(char const *str);
    void my_putstr(char const *str);
    int my_arrlen(char **arr);
    void search_player(t_player *player);
    t_player *move_right(t_player *player);
    t_player *move_left(t_player *player);
    t_player *move_up(t_player *player);
    t_player *move_down(t_player *player);
    void player_movement(int key, WINDOW *win, t_player *player);
    t_player *check_xobj(t_player *player);
    void my_putchar(char c);
    char **str_to_array(char *str);
    t_player *quit_game(t_player *player);
    t_player *reset_game(t_player *player);
    char **my_arrdup(char **arr);
    char *my_strcpy(char *dest, char const *src);
    int my_strcmp(char const *s1, char const *s2);
    int box_counter(char **map);
    void my_printarr(char **arr);
    char *my_strdup(char *src);
    int check_lose(t_player *player);
    void print_map(char **map);
    int my_sokoban(int ac, char **av);
    int objective_counter(char **map);
    int error_handling(int ac, char **av);
    int check_win(t_player *player);
    t_player *check_obj(t_player *player);
    t_player *init_player(char **map);
    void get_position(char **map, t_player *player);
#endif /* MY_H_ */
