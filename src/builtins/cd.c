/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** cd
*/

#include "my.h"

int cd(char **tab)
{
    int error;

    if (tab[1] == NULL) {
        chdir("/home/");
        return (0);
    } else
        error = chdir(tab[1]);
    if (error != 0) {
        perror("cd");
    } else {
        return (0);
    }
    return (0);
}

char **create_home(char **env)
{
    char **path = {0};
    int i = 0;
    int k = 0;
    int j = 0;

    path = malloc(sizeof(char *));
    while (1) {
        if (my_strncmp(env[i], "OLDPWD", 6) == 0) {
            break;
        }
        i++;
    }
    path[0] = my_strcat(env[i], env[i]);
    for (k = 7; k != (my_strlen(path[0]) - 1); k++) {
        path[1][j] = path[0][k];
        my_putstr("aaa");
        j++;
    }
    my_putstr(path[1]);
    return (path);
}