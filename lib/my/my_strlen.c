/*
** EPITECH PROJECT, 2023
** day04
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        res++;
    }
    return res;
}
