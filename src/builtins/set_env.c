/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** set_env
*/

#include "my.h"

char **set_env(char **tab, char **env)
{
    all_t all;
    all.lenght = 0;

    if (tab[1] == NULL || tab[2] == NULL) {
        write(2, "No enought arguments\n", 21);
        return (0);
    } else {
        for (; env[all.lenght] != NULL; all.lenght++);
        tab[1] = my_strcat(tab[1], "=");
        all.lenght = all.lenght + 1;
        env[all.lenght] = malloc(sizeof(char *) * 2);
        env[all.lenght] = my_strcat(tab[1], tab[2]);
        return (env);
    }
}