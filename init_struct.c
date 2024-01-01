/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** init_struct
*/
#include "include/my.h"
#include "include/my_struct.h"

void init_struct(struct map *map, int size)
{
    map->map = malloc(sizeof(char) * (size + 1));
    map->map_xy = NULL;
    map->map_origin = NULL;
    map->i = 0;
    map->boxes_done = 0;
    map->win = 0;
    map->startx = 0;
    map->starty = 0;
    map->player_row = 0;
    map->res = 0;
    map->compare = 0;
    map->player_col = 0;
    map->num_lines = 0;
}
