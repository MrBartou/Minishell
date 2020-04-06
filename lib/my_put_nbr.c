/*
** EPITECH PROJECT, 2020
** PSU_minishell2_2019 [WSL: Ubuntu-18.04]
** File description:
** my_put_nbr
*/

#include "lib.h"

int	my_put_nbr(int nb)
{
    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }
    if (nb != 0 && nb > 10)
        my_put_nbr(nb/10);
    my_putchar(nb % 10 + 48);
    return (nb);
}