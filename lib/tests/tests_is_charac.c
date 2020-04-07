/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_is_charac
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(is_charac, return_is_charac)
{
    cr_assert_eq(is_charac('a', 1), EXIT_FAILURE);
}

Test(is_charac, return_is_charac_two)
{
    cr_assert_eq(is_charac('µ', 1), EXIT_SUCCESS);
}

Test(is_charac, return_is_charac_three)
{
    cr_assert_eq(is_charac('a', 2), EXIT_FAILURE);
}

Test(is_charac, return_is_charac_four)
{
    cr_assert_eq(is_charac('µ', 2), EXIT_SUCCESS);
}