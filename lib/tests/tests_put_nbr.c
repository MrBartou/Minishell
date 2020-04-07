/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_put_nbr
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stds(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_nbr, print_put_nbr, .init = redirect_all_stds)
{
    my_put_nbr(4);
    cr_assert_stdout_eq_str("4");
}

Test(my_put_nbr, return_put_nbr)
{
    cr_assert_eq(my_put_nbr(4), 4);
}

Test(my_put_nbr, print_put_nbr_two, .init = redirect_all_stds)
{
    my_put_nbr(-4);
    cr_assert_stdout_eq_str("-4");
}

Test(my_put_nbr, print_put_nbr_four, .init = redirect_all_stds)
{
    my_put_nbr(15);
    cr_assert_stdout_eq_str("15");
}