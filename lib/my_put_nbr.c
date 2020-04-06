/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** my_put_nbr
*/

#include "my.h"

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