##
## EPITECH PROJECT, 2020
## PSU_minishell1_2019 [WSL: Ubuntu-18.04]
## File description:
## Makefile
##

RM	=	rm -f

CC = gcc

NAMETEST = units_test

SRC	=   my_putchar.c		\
		my_putstr.c		\
		my_strlen.c		\
		my_str_to_word_array.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_atoi.c \
		my_put_nbr.c \
		free_array.c \

SRCSTEST	= 	tests/tests_atoi.c \
				tests/tests_put_nbr.c \
				tests/tests_putchar.c \
				tests/tests_putstr.c \
				tests/tests_strcat.c \
				tests/tests_strcmp.c \
				tests/tests_strlen.c \
				tests/tests_strncmp.c \
				tests/tests_is_charac.c \
				tests/tests_compt.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I ../include/

EXEC	=	libmy.a

all:		$(EXEC) clean

$(EXEC):
		gcc -c $(SRC) $(CFLAGS)
		ar rc $(EXEC) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(EXEC)
		$(RM) $(NAMETEST)

tests_run: $(SRC) $(SRCSTEST) clean
	$(CC) --coverage $(SRC) -lcriterion -lgcov $(SRCSTEST) -o $(NAMETEST) $(CFLAGS)
	./$(NAMETEST)
	gcovr

re:		fclean all

.PHONY:		all clean fclean re
