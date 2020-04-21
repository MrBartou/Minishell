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

    if (my_strcmp(tab[0], "unsetenv") == 0)
        env = unset_env(tab, env);
    else if (my_strcmp(tab[0], "env") == 0)
        read_env(env);
    else {
        envp = create_path(env);
        lunch(tab, env, envp);
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
    return check_command2(tab, env);
}