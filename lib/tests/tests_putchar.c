/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_putchar
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putchar, print_fonction, .init = redirect_all_stds)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}