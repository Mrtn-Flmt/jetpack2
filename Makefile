##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

SRC	=	./src/main.c	\
		./src/word_array.c	\
		./src/init.c	\
		./src/display.c	\
		./src/error.c	\
		./src/keyboard.c	\
		./src/move.c	\
		./src/obstacle.c

CFLAGS += -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

NAME = 	clientJ2T3

$(NAME):
		 gcc $(CFLAGS) -o $(NAME) $(SRC)

all:	$(NAME)

clean:
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re:	fclean all