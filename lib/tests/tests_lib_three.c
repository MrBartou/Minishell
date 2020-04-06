/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_one
*/

#include "my.h"
#include <criterion/criterion.h>

Test(my_strcmp, print_return_fonctioncmp2)
{
    cr_assert_eq(my_strcmp("aest", "test"), -1);
}

Test(my_strncmp, print_return_fonctioncmpn)
{
    cr_assert_eq(my_strncmp("test", "test", 0), 0);
}

Test(my_strncmp, print_return_fonctioncmpn1)
{
    cr_assert_eq(my_strncmp("zest", "test", 1), 1);
}

Test(my_strncmp, print_return_fonctioncmpn2)
{
    cr_assert_eq(my_strncmp("aest", "test", 1), -1);
}