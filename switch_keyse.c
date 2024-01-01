/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-sokoban-elie.chardin
** File description:
** switch_keyse
*/
#include "include/my.h"
#include "include/my_struct.h"

int switch_key_end(int *key, struct map *map, int new_row, int new_col)
{
        switch (*key) {
        case KEY_RIGHT:
            new_row = map->player_row;
            new_col = map->player_col + 1;
            break;
        case ' ':
            map->map_xy = map->map_origin;
            map->boxes_done = 0;
            map->player_col = map->x_origin;
            map->player_row = map->y_origin;
            break;
        case 'q':
            return 0;
    }
    check_boxe_move(map, new_row, new_col);
    return 1;
}

int switch_key(int *key, struct map *map)
{
    int new_row = 0;
    int new_col = 0;

    switch (*key) {
        case KEY_UP:
            new_row = map->player_row - 1;
            new_col = map->player_col;
            break;
        case KEY_DOWN:
            new_row = map->player_row + 1;
            new_col = map->player_col;
            break;
        case KEY_LEFT:
            new_row = map->player_row;
            new_col = map->player_col - 1;
            break;
    }
    switch_key_end(key, map, new_row, new_col);
}
