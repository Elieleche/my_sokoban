/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** main
*/

#include "include/my.h"
#include "include/my_struct.h"

int validate_characters(const char *buffer)
{
    int i = 0;

    while (buffer[i]) {
        if (buffer[i] != '#' && buffer[i] != ' ' &&
            buffer[i] != '\n' && buffer[i] != 'X' &&
            buffer[i] != 'O' && buffer[i] != 'P') {
            return 84;
        }
        i++;
    }
    return 0;
}

static int check_element(int nb_x, int nb_o, int nb_p)
{
    if (nb_x < nb_o) {
        return 1;
    }
    if (nb_x == 0 || nb_o == 0) {
        return 1;
    }
    if (nb_p != 1) {
        return 1;
    }
    return 0;
}

int check_conditions(const char *buffer)
{
    int nb_x = 0;
    int nb_o = 0;
    int nb_p = 0;

    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == 'X')
            nb_x++;
        if (buffer[i] == 'O')
            nb_o++;
        if (buffer[i] == 'P')
            nb_p++;
    }
    if (check_element(nb_x, nb_o, nb_p) == 1) {
        return 84;
    }
    return 0;
}

int error_handling(char *buffer)
{
    if (check_conditions(buffer) != 0) {
        return 1;
    }
    if (validate_characters(buffer) != 0) {
        return 1;
    }
    return 0;
}

void game(struct map *map, char *buffer)
{
    init_struct(map, my_strlen(buffer));
    my_strcpy(map->map, buffer);
    set_window(map);
}

int main(int argc, char **argv)
{
    struct map map;
    char *buffer;

    map.win = 0;
    if (argc < 2)
        return 84;
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        display_help();
        return 0;
    } else {
        buffer = open_file(argv);
    }
    if (error_handling(buffer) == 1)
        return 84;
    game(&map, buffer);
    if (map.win == 1)
        return 1;
    return 0;
}
