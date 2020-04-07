/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** set_env
*/

#include "my.h"

char **set_env(char **tab, char **env)
{
    int k = 0;
    char **newenv;
    char *value;

    if (!tab[1] || !tab[2]) {
        write(2, "Too many arguments", 18);
        return NULL;
    }
    for (; env[k] != NULL; k++);
    newenv = malloc(sizeof(char *) * (k + 2));
    value = malloc(sizeof(char) * my_strlen(tab[1] + my_strlen(tab[2]) + 1));
    value = my_strcat(value, tab[1]);
    value = my_strcat(value, "=");
    value = my_strcat(value, tab[2]);
    newenv = env;
    newenv[k] = value;
    newenv[k + 1] = NULL;
    free(value);
    return (newenv);
}