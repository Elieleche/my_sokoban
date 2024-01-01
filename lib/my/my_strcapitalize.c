/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday06-elie.chardin
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 97 && str[i] <= 122 && str[i - 1] >= 32
            && str[i - 1] <= 47) || str[0] >= 97 && str[0] <= 122) {
            str[i] = str[i] - 32;
        }
        if (str[i] >= 65 && str[i] <= 90 && str[i - 1] < 32
            && str[i - 1] > 47) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
