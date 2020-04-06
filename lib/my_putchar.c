/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** my_putchar
*/

#include "lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}