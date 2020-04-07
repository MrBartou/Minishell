/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** tests_compt
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(coumpt, return_coumpt)
{
    cr_assert_eq(coumpt("hello"), 1);
}

Test(len_of_word, return_len_of_word)
{
    cr_assert_eq(len_of_word("hello", 0), 5);
}