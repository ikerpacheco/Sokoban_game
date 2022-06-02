##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makes file
##

SRC	=	main.c \
		src/get_map.c \
		src/my_sokoban.c \
		src/search_player.c \
		src/movements/move_right.c \
		src/structs/init_player.c \
		lib/my_printarr.c \
		lib/my_putchar.c \
		lib/my_putstr.c \
		lib/my_strlen.c \
		lib/str_to_array.c \
		lib/my_arrlen.c \
		src/print_map.c \
		src/movements/move_left.c \
		src/movements/move_down.c \
		src/movements/move_up.c \
		src/counters/objective_counter.c \
		lib/my_strdup.c \
		lib/my_strcpy.c \
		src/movements/check_obj.c \
		src/movements/check_xobj.c \
		lib/my_strcmp.c \
		src/player_movement.c \
		src/check_win.c \
		src/quit_game.c \
		src/reset_game.c \
		src/counters/box_counter.c \
		src/check_lose.c \
		src/error_handling.c \
		lib/my_arrdup.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L lib/ -std=c99 -lncurses

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all