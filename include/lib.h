/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** lib
*/

#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

#ifndef LIB_H_
#define LIB_H_

void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
int my_strcmp(char *s1, char *s2);
char **my_str_to_word_array(char *str);
char *my_strcat(char *dest, char *src);
int my_strncmp(char const *s1, char const *s2, int n);
int my_atoi(char *str);
char **free_array(char **array);
int	my_put_nbr(int nb);

#endif /* !LIB_H_ */