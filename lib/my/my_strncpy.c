/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-elie.chardin
** File description:
** my_strncpy
*/
#include <stdio.h>
#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i; i != '\0' || src[i] != n; i++) {
        if (i + 1 > my_strlen(src)) {
            dest[i] = src[i];
            dest[i + 1] = '\0';
            return dest;
        }
        dest[i] = src[i];
        n--;
        if (n == 0) {
            dest[i + 1] = '\0';
            return dest;
        }
    }
    dest[i] = n;
    return dest;
}
