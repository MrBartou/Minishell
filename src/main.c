/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** main
*/

#include "my.h"

int main(__attribute__((unused)) int ac,
    __attribute__((unused)) char **av, char **env)
{
    char *buffer = '\0';
    char **tab = NULL;

    if (put_prompt())
        return EPITECH_ERROR;
    for (size_t BUFFER_SIZE = 0; getline(&buffer, &BUFFER_SIZE, stdin) != -1;
        BUFFER_SIZE = 0) {
        tab = my_str_to_word_array(buffer);
        check_command(tab, env);
        free_array(tab);
        if (put_prompt()) {
            free_array(env);
            return EPITECH_ERROR;
        }
    }
    free_array(env);
    return EXIT_SUCCESS;
}