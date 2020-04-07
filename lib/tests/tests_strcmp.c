/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_strcmp
*/

#include "my.h"
#include <criterion/criterion.h>

Test(my_strcmp, return_strcmp_one)
{
    cr_assert_eq(my_strcmp("test", "test"), 0);
}

Test(my_strcmp, return_strcmp_two)
{
    cr_assert_eq(my_strcmp("zest", "test"), 1);
}

Test(my_strcmp, return_strcmp_three)
{
    cr_assert_eq(my_strcmp("aest", "test"), -1);
}