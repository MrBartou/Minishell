/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** do_loop
*/

#include "my.h"

int do_loop(char *buffer, char ***env)
{
    char **tab = NULL;
    char **array = NULL;

    array = str_to_commat(buffer, ';');
    for (int count = 0; array[count] != NULL; count++) {
        tab = my_str_to_word_array(array[count]);
        if (!my_strcmp(tab[0], "exit"))
            return (sortie(tab));
        *env = check_command(tab, *env);
    }
    free_array(array);
    return (-1);
}