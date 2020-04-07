/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_strncmp
*/

#include "my.h"
#include <criterion/criterion.h>

Test(my_strncmp, return_strncmp_one)
{
    cr_assert_eq(my_strncmp("test", "test", 0), 0);
}

Test(my_strncmp, return_strncmp_two)
{
    cr_assert_eq(my_strncmp("zest", "test", 1), 1);
}

Test(my_strncmp, return_strncmp_three)
{
    cr_assert_eq(my_strncmp("aest", "test", 1), -1);
}