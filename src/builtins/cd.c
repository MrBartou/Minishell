/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** cd
*/

#include "my.h"

static char *my_strtooldpath(char *env)
{
    char **result = NULL;
    int i = 0, j = 0;

    result = malloc(sizeof(char *) * my_strlen(env) + 1);
    for (int k = 7; env[k] != '\0'; j++, k++) {
        result[k - 7] = malloc(sizeof(char) * my_strlen(env) + 1);
        if (result[k - 7] == NULL)
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
    result[i][j] = 47;
    result[my_strlen(env)] = NULL;
    return (result[0]);
}

char *create_oldpath(char **env)
{
    int i = 0;

    for (; my_strncmp(env[i], "OLDPWD", 6); i++);
    return (my_strtooldpath(env[i]));
}

char **cd(char **tab, char **env)
{
    int error = 0;

    if (tab[1] == NULL) {
        chdir("/home/");
    }
    if (tab[1] != NULL) {
        error = chdir(tab[1]);
    }
    if (error != 0)
        perror(tab[1]);
    return env;
}