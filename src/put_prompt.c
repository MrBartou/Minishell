/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** put_prompt
*/

#include "my.h"

int put_prompt(void)
{
    char *s = '\0';

    s = malloc(sizeof(char) * 100);
    if (!s)
        return EXIT_FAILURE;
    my_putstr(getcwd(s, 100));
    my_putstr(" $> ");
    free(s);
    return EXIT_SUCCESS;
}