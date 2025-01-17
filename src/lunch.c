/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** lunch
*/

#include "my.h"

static int lunch_if(char **tab, char **env, char **path, int k)
{
    int error = 0;

    if (k == my_strlen(path[k])) {
        error = execve(tab[0], tab, env);
        return (error);
    }
    return (error);
}

void lunch(char **tab, char **env)
{
    pid_t pid;
    char **path = NULL;
    int error = 0;

    pid = fork();
    path = create_path(env);
    if (pid == 0)
        for (int k = 0; k <= my_strlen(path[k]) ; k++) {
            error = execve(my_strcat(path[k], tab[0]), tab, env);
            lunch_if(tab, env, path, k);
    } else
        waitpid(pid, 0, WUNTRACED);
    if (error != 0)
        perror(tab[0]);
    else
        kill (pid, SIGKILL);
}