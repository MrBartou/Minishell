/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** lunch
*/

#include "my.h"

static void lunch_if(char **tab, char **env, char **path, int k)
{
    if (k == my_strlen(path[k]))
        if (execve(tab[0], tab, env) == -1)
            perror(tab[0]);
}

void lunch(char **tab, char **env, char **path)
{
    pid_t pid;

    pid = fork();
    if (pid == 0)
        for (int k = 0; k <= my_strlen(path[k]) ; k++) {
            execve(my_strcat(path[k], tab[0]), tab, env);
            lunch_if(tab, env, path, k);
        }
    else
        waitpid(pid, 0, WUNTRACED);
}