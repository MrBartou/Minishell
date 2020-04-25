/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** my_strcat
*/

#include "lib.h"

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int count = 0;
    char *res = NULL;

    res = malloc(sizeof(*res) * (my_strlen(dest) + my_strlen(src) + 1));
    if (res == NULL)
        return NULL;
    for (; dest[i]; i++)
        res[i] = dest[i];
    for (; src[count]; count++)
        res[i + count] = src[count];
    res[i + count] = '\0';
    return (res);
}
