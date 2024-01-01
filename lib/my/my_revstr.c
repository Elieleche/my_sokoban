/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-elie.chardin
** File description:
** my_revstr
*/
#include <stdio.h>

int my_strlennn(char const *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        res++;
    }
    return res;
}

char *my_revstr(char *str)
{
    int i = 0;
    int lenstr = my_strlennn(str) - 1;
    char first;

    while (i < lenstr) {
        first = str[i];
        str[i] = str[lenstr];
        str[lenstr] = first;
        i++;
        lenstr--;
    }
    return str;
}
