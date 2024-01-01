/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday07-elie.chardin
** File description:
** my_strcat
*/
#include <stdio.h>
#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int len = my_strlen(dest);

    for (i = 0; src[i] != '\0' && i > nb; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return dest;
}
