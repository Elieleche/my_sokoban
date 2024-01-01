/*
** EPITECH PROJECT, 2023
** day03
** File description:
** my_isneg
*/
#include "my.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
        return 0;
    } else {
        my_putchar('P');
        return 0;
    }
}
