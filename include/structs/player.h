/*
** EPITECH PROJECT, 2022
** player
** File description:
** player
*/

#ifndef PLAYER
    #define PLAYER

    #include "../my.h"

    typedef struct s_player {
        int a;
        int b;
        char **map;
        int obj_posa;
        int obj_posb;
        int obj_posax;
        int obj_posbx;
        int reset;
        int counter;
        int objectives;
        int boxes;
        int in_counter;
    } t_player;

#endif /* !PLAYER_H_ */
