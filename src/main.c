/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** main
*/

#include "my.h"

void msg_ctrl(int test)
{
    (void)test;
    my_putchar('\n');
    put_prompt();
}

int main(__attribute__((unused)) int ac,
    __attribute__((unused)) char **av, char **env)
{
    char *buffer = '\0';
    char **cpenv = env;
    int quit = 0;

    if (put_prompt())
        return EPITECH_ERROR;
    signal(SIGINT, msg_ctrl);
    for (size_t BUFFER_SIZE = 0; getline(&buffer, &BUFFER_SIZE, stdin) != -1;
        BUFFER_SIZE = 0) {
        quit = do_loop(buffer, &env);
        if (quit >= 0)
            return (quit);
        if (put_prompt()) {
            env = cpenv;
            return EPITECH_ERROR;
        }
    }
    env = cpenv;
    my_putstr("exit\n");
    return EXIT_SUCCESS;
}