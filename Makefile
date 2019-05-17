##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	main.c					\
		src/do_help.c				\
		src/map/do_first_map.c			\
		src/map/do_hidden_map.c			\
		src/map/do_second_map.c			\
		src/map/print_player_maps.c		\
		src/map/check_letter_number.c		\
		src/map/check_positions.c		\
		src/map/get_first_pos.c			\
		src/map/get_second_pos.c		\
		src/map/place_first_boat.c		\
		src/map/place_second_boat.c		\
		src/map/place_third_boat.c		\
		src/map/place_last_boat.c		\
		src/map/check_map.c			\
		src/map/check_same_pos_first.c		\
		src/map/check_same_pos_second.c		\
		src/map/fill_maps.c			\
		src/get_next_line.c			\
		src/player_one/player_one.c		\
		src/player_two/player_two.c		\
		src/player_two/check_two_move.c		\
		src/utilities/utilities.c		\
		src/utilities/check_hit_or_miss.c	\
		src/convert/convert.c			\

CC	=	gcc

CFLAGS	=	-I./include -W -Wall -Wextra -g

LDFLAGS	=	-L lib/ -lmy

NAME	=	navy

all:		$(NAME)

$(NAME):	$(SRC)
		$(MAKE) -C lib/my
		$(CC) $(SRC) -o $(NAME) $(CFLAGS) $(LDFLAGS)

clean:
		$(MAKE) -C lib/my clean
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)
		rm -f *~
		rm -f lib/libmy.a
		$(MAKE) -C lib/my fclean

re:		fclean all

.PHONY: 	all clean fclean re
