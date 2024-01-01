##
## EPITECH PROJECT, 2023
## day10
## File description:
## Makefile
##

SRC =	$(wildcard *.c)	\

OBJ = $(SRC:.c=.o)

NAME = libmy.a

NAMEH = my.h

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../
	cp $(NAMEH) ../../include/
	rm $(OBJ)
	make clean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)
	rm -f ../../$(NAME)
