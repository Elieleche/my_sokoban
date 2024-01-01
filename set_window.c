/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** set_window
*/
#include "include/my.h"
#include "include/my_struct.h"

bool in_corner_boxes(struct map *map, int i)
{
    for (int j = 1; j < my_strlen(map->map_xy[i]) - 1; j++) {
        if (map->map_xy[i][j] == 'X' &&
            map->map_xy[i - 1][j] == '#' && map->map_xy[i + 1][j] == '#' &&
            map->map_xy[i][j - 1] == '#' && map->map_xy[i][j + 1] == '#') {
            return true;
        }
    }
}

static bool are_boxes_in_corner(struct map *map)
{
    for (int i = 1; i < map->num_lines - 1; i++) {
        if (in_corner_boxes(map, i) == true)
            return true;
    }
    return false;
}

static int check_map_mid(struct map *map, int i, int *tmp)
{
    for (int j = 0; j < my_strlen(map->map_xy[i]); j++) {
        if (map->map_origin[i][j] == 'O' && map->map_xy[i][j] == 'X') {
            *tmp = *tmp + 1;
            return 1;
        }
    }
    return 0;
}

int check_map(struct map *map)
{
    int tmp = 0;

    for (int i = 0; i < map->num_lines; i++) {
        if (check_map_mid(map, i, &tmp) == 1)
            break;
    }
    if (map->num_boxes == tmp)
        return 1;
    return 0;
}

void print_map(struct map *map)
{
    clear();
    for (int i = 0; i < map->num_lines; i++) {
        printw("%s\n", map->map_xy[i]);
    }
    refresh();
}

int check_win(struct map *map, int key)
{
    if (map->boxes_done == map->num_boxes) {
        map->win = 1;
    }
    if (check_map(map) == 1) {
        map->win = 1;
        print_map(map);
        return 1;
    }
    return 0;
}

static void check_avancement(struct map *map, int i, int j)
{
    if (map->map_xy[i][j] == 'X') {
        map->num_boxes++;
    } else if (map->map_xy[i][j] == 'O') {
        map->num_boxes_on_storage++;
        map->res++;
    }
}

int set_window(struct map *map)
{
    char *str = malloc(sizeof(char) * my_strlen(map->map) + 1);

    my_strcpy(str, map->map);
    map->map_xy = convert_to_map(str, map);
    map->map_origin = convert_to_map(map->map, map);
    map->num_boxes = 0;
    map->num_boxes_on_storage = 0;
    map->res = 0;
    for (int i = 0; i < map->num_lines; i++) {
        for (int j = 0; j < my_strlen(map->map_xy[i]); j++) {
            check_avancement(map, i, j);
        }
    }
    map->res = map->num_boxes;
    map->x_origin = map->player_col;
    map->y_origin = map->player_row;
    display_map(map);
    return 0;
}
