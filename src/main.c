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
    char **cpenv = env;

    if (put_prompt())
        return EPITECH_ERROR;
    for (size_t BUFFER_SIZE = 0; getline(&buffer, &BUFFER_SIZE, stdin) != -1;
        BUFFER_SIZE = 0) {
        tab = my_str_to_word_array(buffer);
        check_command(tab, &env);
        free_array(tab);
        if (put_prompt()) {
            env = free_array(env);
            env = cpenv;
            return EPITECH_ERROR;
        }
    }
    env = free_array(env);
    env = cpenv;
    return EXIT_SUCCESS;
}