/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** sortie
*/

#include "my.h"

int sortie(char **tab)
{
    int quit = 0;

    if (tab[1] == NULL) {
        exit(quit);
    }
    quit = my_atoi(tab[1]);
    quit = quit % 256;
    my_putstr("exit\n");
    return (quit);
}