/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen(char *str)
{
    int    i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}