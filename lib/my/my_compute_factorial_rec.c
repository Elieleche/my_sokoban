/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-elie.chardin
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_rec(int nb)
{
    if (nb == 0) {
        return 1;
    }
    if (nb == 1) {
        return 1;
    }
    if (nb == 2) {
        return 2;
    }
    if (nb > 0 && nb < 13) {
        return nb * my_compute_factorial_rec(nb - 1);
    } else {
        return 0;
    }
}
