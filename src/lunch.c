/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** lunch
*/

#include "my.h"

void lunch(char **tab, char **env, char **path)
{
    pid_t pid;
    pid = fork();
    int k = 0;

    if (pid == 0) {
        while (1) {
            if (execve(my_strcat(path[k], tab[0]), tab, env) == -1)
            if (k == my_strlen(path[k])) {
                if (execve(tab[0], tab, env) == -1) {
                    perror(tab[0]);
                }
            }
            k++;
        }
        exit(1);
    } else {
        waitpid(pid, 0, WUNTRACED);
    }
    kill(pid, SIGTERM);
}