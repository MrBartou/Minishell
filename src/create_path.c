/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** create_path
*/

#include "my.h"

char **create_path(char **env)
{
    char **path = {0};
    int i = 0;

    path = malloc(sizeof(char *));
    while (1) {
        if (my_strncmp(env[i], "PATH", 4) == 0) {
            break;
        }
        i++;
    }
    path = my_strtowordarray1(env[i]);
    return (path);
}

char **my_strtowordarray1(char *env)
{
    char **result = {0};
    int i = 0;
    int j = 0;
    int k = 0;

    result = malloc(sizeof(char *) * my_strlen(env));
    while (env[k] != '\0') {
        result[k] = malloc(sizeof(char) * my_strlen(env));
        if (env[k] == ':') {
            result[i][j] = 47;
            result[i][j + 1] = '\0';
            i = i + 1;
            j = 0;
            k++;
        }
        result[i][j] = env[k];
        j++;
        k++;
    }
    return (result);
}

int my_strcmp1(char s1, char *s2)
{
    int i = 0;

    while (s1) {
        if (s1 > s2[i])
            return (1);
        else if (s1 < s2[i])
            return (-1);
        if (s1 == '\0')
            return (0);
        i++;
    }
    return (-3);
}