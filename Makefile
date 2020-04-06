##
## EPITECH PROJECT, 2020
## PSU_minishell2_2019 [WSL: Ubuntu-18.04]
## File description:
## Makefile
##

#========== COLOR =============#

DEFAULT	=	"\033[00m"
GREEN	=	"\033[1;32m"
GCC		= 	"\e[30;48;5;82m"
TEAL	=	"\033[1;5;36m"
OBJTEAL	=	"\033[1;90;106m"
YELLOW	=	"\033[1;5;25;33m"
MAGENTA	=	"\033[1;3;93;5m"
ERROR	=	"\033[5;7;1;31m"

ECHO	=	echo -e

#======== COMPILATION =========#

CC	=	gcc

RM 	=	rm -rf

#=========== DIR ==============#

SRCDIR	=	./src

TESTDIR	=	./tests

#=========== SRC ==============#

SRCTEST	=

MAIN	=	$(SRCDIR)/main.c

SRC	=	$(SRCDIR)/builtins/cd.c	\
		$(SRCDIR)/builtins/read_env.c	\
		$(SRCDIR)/builtins/set_env.c	\
		$(SRCDIR)/builtins/sortie.c	\
		$(SRCDIR)/builtins/unset_env.c	\
		$(SRCDIR)/check_command.c	\
		$(SRCDIR)/create_path.c	\
		$(SRCDIR)/lunch.c	\
		$(SRCDIR)/put_prompt.c	\

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(MAIN:.c=.o)

OBJ_TEST	=	$(SRCTEST:.c=.o)

#========== FLAGS =============#

cflags.common	:=	-W -Wall -Wextra -I./include/ -pedantic
cflags.debug	:=	-g -g3
cflags.release	:=
cflags.tests	:=

ldflags.common	:=	-L./lib/ -lmy
ldflags.debug	:=
ldflags.release	:=
ldflags.tests	:=	-lcriterion -lgcov  --coverage

CFLAGS	:=	${cflags.${BUILD}} ${cflags.common}
LDFLAGS	:=	${ldflags.${BUILD}} ${ldflags.common}

#=========== BIN ==============#

BINNAME	= mysh

TEST_BIN	=	$(BINNAME)_test

#========== BUILD =============#

BUILD   =   release

#========== RULES =============#

all:
	@make -s $(BINNAME) && \
	$(ECHO) $(GCC) "[GCC] " $(DEFAULT) $(TEAL) "Compilation finish with no error !" $(DEFAULT)  || \
	$(ECHO) $(ERROR) "[ERROR]" $(YELLOW) $(BINNAME) $(DEFAULT)

$(BINNAME)	:	$(OBJ) $(OBJ_MAIN)
				@make -s -C ./lib/
				@$(CC) -o $(BINNAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS) $(LDFLAGS)

%.o	:	%.c
		@$(CC)  $(CFLAGS) -c $< -o $@ && \
		$(ECHO) $(GCC) "[GCC] " $(DEFAULT) $(OBJTEAL) $<  $(DEFAULT)  " → " $(GREEN) "OK" $(DEFAULT) || \
		$(ECHO) $(ERROR) "[GCC] " $(DEFAULT) $(ERROR) "error into → " $(YELLOW) $^ $(DEFAULT)


set_rules	:
			$(eval BUILD=tests)
			$(eval CFLAGS=${cflags.tests} $(cflags.common))
			$(eval LDFLAGS=${ldflags.tests} $(ldflags.common))


$(TEST_BIN)	:	set_rules $(OBJ_TEST) $(OBJ)
			@make -s -C ./lib/
			@$(CC) -o $(TEST_BIN) $(OBJ_TEST) $(OBJ) $(CFLAGS) $(LDFLAGS)

tests_run	:	set_rules $(TEST_BIN)
			@make tests_run -C ./lib/
			@./$(TEST_BIN) && \
			$(ECHO) $(GREEN) "[OK]"$(TEAL)"  Done : " $@ $(DEFAULT)  || \
			$(ECHO) $(ERROR) "[ERROR]" $(YELLOW) $(BINNAME) $(DEFAULT)

set_rules_debug	:
			$(eval BUILD=debug)
			$(eval CFLAGS=${cflags.debug} $(cflags.common))
			$(eval LDFLAGS=${ldflags.debug} $(ldflags.common))

debug		:	 set_rules_debug $(OBJ) $(OBJ_MAIN)
			@$(CC) -o $(BINNAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS) $(LDFLAGS) && \
		    $(ECHO) $(GREEN) "[OK]"$(TEAL)"  Done : " $@ $(DEFAULT)  || \
			$(ECHO) $(ERROR) "[ERROR]" $(YELLOW) $(BINNAME) $(DEFAULT)

clean:
	@make -s clean -C ./lib/
	@$(foreach i, $(OBJ), $(shell $(RM) $(i)) echo -e $(MAGENTA)" [Removed] ->  $(i)" $(DEFAULT);)
	@$(ECHO) $(MAGENTA)" [Removed] -> $(OBJ_MAIN)" $(DEFAULT)
	@$(RM) $(OBJ_MAIN)
	@$(foreach k, $(OBJ_TEST), $(shell $(RM) $(i)) echo -e $(MAGENTA)" [Removed] ->  $(k)" $(DEFAULT);)
	@find -name "*.gcda" -delete
	@find -name "*.gcno" -delete
	@find -name "*.gcov" -delete && \
	$(ECHO) $(GREEN) "[CLEAN]"$(TEAL)"  Your programme is clean " $(DEFAULT)  || \
	$(ECHO) $(ERROR) "[ERROR]" $(YELLOW) $(BINNAME) $(DEFAULT)

fclean:	clean
	@make -s fclean -C ./lib/
	@$(RM) $(BINNAME)
	@$(RM) $(TEST_BIN) && \
	$(ECHO) $(GREEN) "[FCLEAN]"$(TEAL)"  Your programme is clean" $(DEFAULT)  || \
	$(ECHO) $(ERROR) "[ERROR]" $(YELLOW) $(BINNAME) $(DEFAULT)


re:	fclean all

.PHONY: all clean fclean re debug set_rules_debug tests_run set_rules