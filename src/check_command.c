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

int check_command(char **tab, char ***env)
{
    if (my_strcmp(tab[0], "setenv") == 0) {
        *env = set_env(tab, *env);
        return (0);
    }
    if (!my_strcmp(tab[0], "cd" ))
        return (cd(tab));
    if (!my_strcmp(tab[0], "exit"))
        return (sortie(tab));
    *env = check_command2(tab, *env);
    return EXIT_SUCCESS;
}

