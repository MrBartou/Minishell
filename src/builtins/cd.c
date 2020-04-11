/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** cd
*/

#include "my.h"

char **cd(char **tab, char **env)
{
    int error;
    char *old;

    if (my_strcmp(tab[1], "-") == 0) {
        old = recup_oldpwd(env);
        chdir(old);
        return env;
    }
    if (tab[1] == NULL) {
        chdir("/home/");
        return env;
    }
    if (tab[1] != NULL) {
        error = chdir(tab[1]);
        return env;
    }
    if (error != 0) {
        perror("cd");
    }
    return env;
}

char *recup_oldpwd(char **env)
{
    char *old = NULL;
    char *temp = NULL;
    int count2 = 1;

    old = malloc(sizeof(char) * 100);
    temp = malloc(sizeof(char) * 100);
    temp[0] = 47;
    for (int count = 0; env[count] != NULL; count++) {
        if (my_strncmp(env[count], "OLDPWD", 6) == 0) {
            old = env[count];
        }
    }
    for (int count1 = 0; old[count1] != '\0'; count1++)
        if (old[count1] >= 'a' && old[count1] <= 'z') {
            temp[count2] = old[count1];
            count2++;
        }
    return (temp);
}