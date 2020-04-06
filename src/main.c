/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av, char **env)
{
    (void)ac;
    (void)av;
    char *buffer;
    size_t BUFFER_SIZE = 512;
    char **tab = malloc(sizeof(char));
    char *s = malloc(sizeof(char) * 100);

    buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
    while (42) {
        my_putstr(getcwd(s, 100));
        my_putstr(" $> ");
        if (getline(&buffer, &BUFFER_SIZE, stdin) == -1)
            return (0);
        tab = my_str_to_word_array(buffer);
        check_command(tab, env);
    }
}