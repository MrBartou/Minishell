/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** my
*/

#ifndef _MY_H_
#define _MY_H_

#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

typedef struct all
{
    int lenght;
} all_t;

// lib
void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
int my_strcmp(char *s1, char *s2);
char **my_str_to_word_array(char *str);
char **my_strtowordarray1(char *env);
int my_strcmp1(char s1, char *s2);
char    *my_strcat(char *dest, char *src);
int my_strncmp(char const *s1, char const *s2, int n);
int my_atoi(char *str);

// main
int    main(int ac, char **av, char **env);

// fonction
int check_command(char **tab, char **env);
int check_command2(char **tab, char **env);
void lunch(char **tab, char **env, char **enpv);
char **create_path(char **env);

// builtins
int cd(char **tab);
char **set_env(char **tab, char **env);
void read_env(char **env);
void unset_env(char **tab, char **env);
int sortie(char **tab);

#endif /* _MY_H_ */
