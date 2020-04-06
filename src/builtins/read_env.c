/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** read_env
*/

#include "my.h"

void read_env(char **env)
{
    all_t all;

    for (; env[all.lenght] != NULL; all.lenght++);
    for (int i = 0; i != all.lenght; i++) {
        my_putstr(env[i]);
        my_putchar('\n');
    }
}