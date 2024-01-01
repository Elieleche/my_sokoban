##
## EPITECH PROJECT, 2023
## day10
## File description:
## Makefile
##

SRC	=	main.c	\
		help.c	\
		open_file.c	\
		init_struct.c	\
		set_window.c	\
		moves.c	\
		screen_handling.c	\
		convert_map.c	\
		switch_keyse.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CC	=	gcc

CFLAGS	+=	-Wextra -g3 -I.include -L./lib/my -lmy -lncurses

all:	libmy.a	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

libmy.a :
	make -C lib/my

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f vgcore.*
	make -C lib/my fclean

re:	fclean	all
