/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_atoi
*/

#include "my.h"
#include <criterion/criterion.h>

Test(my_atoi, print_fonction)
{
    cr_assert_eq(my_atoi("4"), 4);
}

Test(my_is_char, return_is_char_one)
{
    cr_assert_eq(is_char('A'), 1);
}

Test(my_is_char, return_is_char_two)
{
    cr_assert_eq(is_char('1'), 0);
}

Test(my_is_num, return_is_num_one)
{
    cr_assert_eq(is_num('A'), 0);
}

Test(my_is_num, return_is_num_two)
{
    cr_assert_eq(is_num('1'), 1);
}

Test(my_atoi, print_return_fonctionatoi5)
{
    cr_assert_eq(my_atoi("a"), -1);
}

Test(my_atoi, print_return_fonctionatoi6)
{
    cr_assert_eq(my_atoi(" 1"), 1);
}

Test(my_atoi, print_return_fonctionatoi7)
{
    cr_assert_eq(my_atoi("-3"), -3);
}