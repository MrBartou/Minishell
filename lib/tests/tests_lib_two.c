/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_one
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stds(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_nbr, print_fonction, .init = redirect_all_stds)
{
    my_put_nbr(4);
    cr_assert_stdout_eq_str("4");
}

Test(my_put_nbr, print_return_fonction)
{
    cr_assert_eq(my_put_nbr(4), 4);
}

Test(my_strcmp, print_return_fonctioncmp)
{
    cr_assert_eq(my_strcmp("test", "test"), 0);
}

Test(my_strcmp, print_return_fonctioncmp1)
{
    cr_assert_eq(my_strcmp("zest", "test"), 1);
}