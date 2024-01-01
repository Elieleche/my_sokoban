/*
** EPITECH PROJECT, 2023
** day04
** File description:
** my_sort_int_array
*/

int end(int *array, int d, int temp)
{
    if (array[d] > array[d + 1]) {
        temp = array[d];
        array[d] = array[d + 1];
        array[d + 1] = temp;
    }
}

void my_sort_int_array(int *array, int size)
{
    int ascending[size];
    int min[size];
    int d;
    int temp;

    for (int i = 0; i != size - 1; i++) {
        for (d = 0; d < size - i - 1; d++) {
            end(array, d, temp);
        }
    }
}
