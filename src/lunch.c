/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** lunch
*/

#include "my.h"

void lunch(char **tab, char **env)
{
    pid_t pid;
    char **path = NULL;

    pid = fork();
    path = create_path(env);
    if (pid == 0)
        for (int k = 0; k <= my_strlen(path[k]) ; k++) {
            execve(my_strcat(path[k], tab[0]), tab, env);
        }
    else
        waitpid(pid, 0, WUNTRACED);
}