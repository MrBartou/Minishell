/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_one
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_putchar, print_fonction, .init = redirect_all_std)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}

Test(my_putstr, print_fonction, .init = redirect_all_std)
{
    my_putstr("test");
    cr_assert_stdout_eq_str("test");
}

Test(my_strlen, print_fonction)
{
    cr_assert_eq(my_strlen("test"), 4);
}

Test(my_atoi, print_fonction)
{
    cr_assert_eq(my_atoi("4"), 4);
}