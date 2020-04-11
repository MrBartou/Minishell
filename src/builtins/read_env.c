/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** read_env
*/

#include "my.h"

void read_env(char **env)
{
    for (int count = 0; env[count] != NULL; count++) {
        my_putstr(env[count]);
        my_putchar('\n');
    }
}