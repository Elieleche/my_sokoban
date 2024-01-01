/*
** EPITECH PROJECT, 2023
** day03
** File description:
** my_put_nbr
*/
#include <unistd.h>
#include "my.h"

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return 0;
    }
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    if (nb < 10) {
        nb = nb + 48;
        my_putchar(nb);
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
}
