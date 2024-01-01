/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-elie.chardin
** File description:
** my_strcmp
*/
#include <stdio.h>

int my_strlen_cmp(char const *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        res++;
    }
    return res;
}

int compare_alpha(char const *s1, char const *s2)
{
    int i = 0;
    int res = 0;

    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] + 48 < s2[i] + 48) {
            return (s1[i] + 48 - s2[i] + 48);
        }
        if (s1[i] + 48 > s2[i] + 48){
            return -(s1[i] + 48 - s2[i] + 48);
        }
    }
}

int case_str_cmp(char const *s1, char const *s2)
{
    if (my_strlen_cmp(s2) == 0) {
        return -1;
    }
    if (my_strlen_cmp(s1) > my_strlen_cmp(s2)) {
        return compare_alpha(s1, s2);
    }
    if (my_strlen_cmp(s1) < my_strlen_cmp(s2)) {
        return -compare_alpha(s1, s2);
    }
    return 60;
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int count = 0;

    if (case_str_cmp(s1, s2) != 60) {
        return case_str_cmp(s1, s2);
    }
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == s2[i]) {
            count++;
        }
    }
    if (count == my_strlen_cmp(s1)) {
        return 0;
    } else {
        return compare_alpha(s1, s2);
    }
}
