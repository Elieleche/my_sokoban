/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-elie.chardin
** File description:
** my_strupcase
*/
#include <stdio.h>

char *my_strupcase(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}
