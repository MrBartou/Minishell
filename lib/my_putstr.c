/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
    return (0);
}
