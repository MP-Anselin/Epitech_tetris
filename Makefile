
NAME	=	my_tetris

SRC_DIR	=	src

SRCS	=	src/main.c									\
			src/game_manager/game_analyzer.c			\
			src/game_manager/parsing/args/flag_parsing.c		\
			src/game_manager/parsing/customs_starter.c	\
			src/game_manager/parsing/tetris_help.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-I include

MY_CLIB =	src/lib/my_clib.a

CC	=	gcc -g -W -Wall -Werror -pedantic

all:	$(NAME)

$(NAME):		$(OBJS) $(LIB)
	$(CC) -o $(NAME) $(OBJS) $(MY_CLIB) $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all