/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** my
*/

#ifndef _MY_H_
#define _MY_H_

#include "lib.h"

static const int EPITECH_ERROR = 84;
typedef struct all
{
    int lenght;
} all_t;

// fonction
int check_command(char **tab, char ***env);
void lunch(char **tab, char **env, char **enpv);
char **create_path(char **env);

// builtins
int cd(char **tab);
char **set_env(char **tab, char **env);
void read_env(char **env);
char **unset_env(char **tab, char **env);
int sortie(char **tab);

// prompt
int put_prompt(void);

#endif /* _MY_H_ */
