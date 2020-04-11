/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** unset_env
*/

#include "my.h"

char **unset_env(char **tab, char **env)
{
    char **newenvi = NULL;
    int k = 0;
    int count= 0;

    for (; env[k] != NULL; k++);
    newenvi = malloc(sizeof(char *) * (k + 2));
    while (env[count] != NULL) {
        newenvi[count] = malloc(sizeof(char) * (k + 2));
        if (my_strncmp(env[count], tab[1], my_strlen(tab[1])) != 0) {
            newenvi[count] = env[count];
            count++;
        } else
            count++;
    }
    newenvi[count + 1] = NULL;
    return newenvi;
}