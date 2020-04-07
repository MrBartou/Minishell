/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_putstr
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_putstr, print_fonction, .init = redirect_all_stds)
{
    my_putstr("test");
    cr_assert_stdout_eq_str("test");
}