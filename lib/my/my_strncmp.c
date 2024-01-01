/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-elie.chardin
** File description:
** my_strncmp
*/
#include <stdio.h>

int my_strlen_ncmp(char const *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        res++;
    }
    return res;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int j = 0;
    int count = 0;

    for (i = 0; i != n; i++) {
        if (s1[i] == s2[i]) {
            count++;
        }
    }
    if (count == n) {
        return 0;
    }
    if (count > n) {
        return 1;
    }
    if (count < n) {
        return -1;
    }
}
