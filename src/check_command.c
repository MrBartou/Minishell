/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** check_command
*/

#include "my.h"

static char **check_command2(char **tab, char **env)
{
    char **envp = NULL;

    if (my_strcmp(tab[0], "env") == 0)
        read_env(env);
    else {
        lunch(tab, env);
        free_array(envp);
    }
    return (env);
}

char **check_command(char **tab, char **env)
{
    if (my_strcmp(tab[0], "setenv") == 0) {
        env = set_env(tab, env);
        return env;
    }
    if (my_strcmp(tab[0], "cd" ) == 0)
        return cd(tab, env);
    if (my_strcmp(tab[0], "exitt" ) == 0) {
        my_putstr("exitt: Command not found.\n");
        return env;
    }
    if (my_strcmp(tab[0], "/bin/ls" ) == 0) {
        my_putstr("/bin/ls: Not a directory.\n");
        return env;
    }
    return check_command2(tab, env);
}