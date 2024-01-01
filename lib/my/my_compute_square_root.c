/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-elie.chardin
** File description:
** my_compute_square_root
*/

int my_compute_power(int nb, int p)
{
    if (p < 0) {
        return 0;
    }
    if (p == 0) {
        return 1;
    }
    if (p > 1) {
        return nb * my_compute_power(nb, p - 1);
    }
}

int my_compute_square_root(int nb)
{
    int precision;
    int i = 0;

    while (nb != my_compute_power(i, 2)) {
        if (i == nb) {
            return 0;
        }
        if (nb < 0) {
            return 84;
        }
        i++;
    }
    return i;
}
