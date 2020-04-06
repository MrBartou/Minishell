/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** my_putstr
*/

#include "lib.h"

int my_putstr(char *str)
{
    write(1, str, my_strlen(str));
    return (0);
}