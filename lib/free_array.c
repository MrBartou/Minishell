/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** free_array
*/

#include "lib.h"

char **free_array(char **array)
{
    if (!array)
        return NULL;
    for (int count = 0; array[count] != NULL; count++)
        free(array[count]);
    free(array);
    return NULL;
}