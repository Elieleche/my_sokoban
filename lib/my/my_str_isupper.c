/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-elie.chardin
** File description:
** my_str_islower
*/
#include <stdio.h>

int my_str_isupper(char const *str)
{
    int i = 0;
    int res = 0;

    if (str[0] == '\0') {
        return 1;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str [i] >= 65 && str[i] <= 90) {
            res = 1;
        } else {
            res = 0;
            return res;
        }
    }
    return res;
}
