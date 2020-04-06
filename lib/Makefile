##
## EPITECH PROJECT, 2020
## PSU_minishell1_2019 [WSL: Ubuntu-18.04]
## File description:
## Makefile
##

RM	=	rm -f

SRC	=   my_putchar.c		\
		my_putstr.c		\
		my_strlen.c		\
		my_str_to_word_array.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_atoi.c \
		my_put_nbr.c \

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

re:		fclean all

.PHONY:		all clean fclean re
