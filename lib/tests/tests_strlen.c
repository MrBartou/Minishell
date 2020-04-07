/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_strlen
*/

#include "my.h"
#include <criterion/criterion.h>

Test(my_strlen, return_strlen)
{
    cr_assert_eq(my_strlen("test"), 4);
}