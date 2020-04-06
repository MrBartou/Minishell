/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** check_command
*/

#include "my.h"

int check_command(char **tab, char **env)
{
    if (my_strcmp(tab[0], "setenv") == 0) {
        env = set_env(tab, env);
        return (0);
    }
    if (my_strcmp(tab[0], "cd" ) == 0) {
        cd(tab);
        return (0);
    }
    if (my_strcmp(tab[0], "exit") == 0) {
        sortie(tab);
        return (0);
    } else {
        check_command2(tab, env);
    }
    return (0);
}

int check_command2(char **tab, char **env)
{
    char **envp = NULL;

    if (my_strcmp(tab[0], "unsetenv") == 0) {
        unset_env(tab, env);
        return (0);
    }
    if (my_strcmp(tab[0], "env") == 0) {
        read_env(env);
        return (0);
    } else {
        envp = create_path(env);
        lunch(tab, env, envp);
    }
    return (0);
}