/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** my_strcmp
*/

#include "lib.h"

int my_strcmp(char *s1, char *s2)
{
    for (int i = 0; s1; i++) {
        if (s1[i] > s2[i])
            return (1);
        else if (s1[i] < s2[i])
            return (-1);
        if (s1[i] == '\0')
            return (0);
    }
    return (1);
}