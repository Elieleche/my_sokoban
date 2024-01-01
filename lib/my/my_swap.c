/*
** EPITECH PROJECT, 2023
** day04
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
