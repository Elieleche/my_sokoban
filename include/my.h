/*
** EPITECH PROJECT, 2023
** day03
** File description:
** my_h_
*/
#ifndef MY_H_
    #define MY_H_
int my_compute_factorial_rec(int nb);
int my_compute_power(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
void my_sort_int_array(int *array, int size);
int my_str_isprintable(char const *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
char *my_strcapitalize(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char **render_file(int argc, char **argv);

#endif
