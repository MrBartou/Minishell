/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_lib_four
*/

#include "my.h"
#include <criterion/criterion.h>

Test(my_is_char, print_return_fonctionatoi)
{
    cr_assert_eq(is_char('A'), 1);
}

Test(my_is_char, print_return_fonctionatoi2)
{
    cr_assert_eq(is_char('1'), 0);
}

Test(my_is_num, print_return_fonctionatoi3)
{
    cr_assert_eq(is_num('A'), 0);
}

Test(my_is_num, print_return_fonctionatoi4)
{
    cr_assert_eq(is_num('1'), 1);
}

Test(my_atoi, print_return_fonctionatoi5)
{
    cr_assert_eq(my_atoi("a"), -1);
}