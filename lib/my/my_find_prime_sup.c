/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday05-elie.chardin
** File description:
** my_find_prime_sup
*/

int calculate(int nb)
{
    int i = 2;
    int res = 0;
    int prime = 1;

    while (i <= nb / 2) {
        res = nb % i;
        if (res != 0) {
            i++;
        } else {
            prime = 0;
            return prime;
        }
    }
    return prime;
}

int my_is_prime_sup(int nb)
{
    if (nb == 1 || nb == 0) {
        return 0;
    }
    if (nb < 0) {
        return 84;
    } else {
        return calculate(nb);
    }
}

int my_find_prime_sup(int nb)
{
    for (int i = nb; i >= 0; i++) {
        if (my_is_prime_sup(i) == 1) {
            return i;
        }
    }
}
