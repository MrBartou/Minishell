/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** create_path
*/

#include "my.h"

static char **my_strtopath(char *env)
{
    char **result = NULL;

    result = malloc(sizeof(char *) * my_strlen(env) + 1);
    if (!result)
        return NULL;
    for (int i = 0, j = 0, k = 0; env[k] != '\0'; j++, k++) {
        result[k] = malloc(sizeof(char) * my_strlen(env) + 1);
        if (!result[k])
            return NULL;
        if (env[k] == ':') {
            result[i][j] = 47;
            result[i][j + 1] = '\0';
            i = i + 1;
            j = 0;
            k++;
        }
        result[i][j] = env[k];
    }
    result[my_strlen(env)] = NULL;
    return (result);
}

char **create_path(char **env)
{
    int i = 0;

    for (; my_strncmp(env[i], "PATH", 4); i++);
    return (my_strtopath(env[i]));
}