/*
** EPITECH PROJECT, 2023
** day04
** File description:
** my_put_str
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
