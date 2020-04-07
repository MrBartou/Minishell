/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_strcat
*/

#include "my.h"
#include <criterion/criterion.h>

Test(my_strcat, return_strcat_one)
{
    cr_assert_str_eq(my_strcat("test", "test"), "testtest");
}