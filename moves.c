/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** moves
*/
#include "include/my.h"
#include "include/my_struct.h"

int move_box(struct map *map)
{
    char previous_value = map->map_xy[map->new_row][map->new_col];

    if (map->map_xy[map->next_row][map->next_col] == ' ' ||
        map->map_xy[map->next_row][map->next_col] == 'O') {
        if (previous_value == 'O') {
            map->map_xy[map->new_row][map->new_col] = 'O';
            map->num_boxes_on_storage++;
        } else {
            map->map_xy[map->new_row][map->new_col] = ' ';
        }
        map->map_xy[map->next_row][map->next_col] = 'X';
        if (map->map_xy[map->next_row][map->next_col] == 'O') {
            map->num_boxes_on_storage++;
        }
    }
}

void tools_p_pos(int i , char **map, int *player_row, int *player_col)
{
    for (int j = 0; map[i][j] != '\0'; j++) {
        if (map[i][j] == 'P') {
            *player_row = i;
            *player_col = j;
            return;
        }
    }
}

void find_player_position(char **map, int *player_row, int *player_col)
{
    for (int i = 0; map[i] != NULL; i++) {
        tools_p_pos(i, map, player_row, player_col);
    }
}

void move_player(struct map *map, int new_row, int new_col)
{
    if (map->map_xy[new_row][new_col] == ' ' ||
        map->map_xy[new_row][new_col] == 'O') {
        if (map->map_origin[map->player_row][map->player_col] == 'O') {
            map->map_xy[map->player_row][map->player_col] = 'O';
            map->num_boxes_on_storage++;
        } else {
            map->map_xy[map->player_row][map->player_col] = ' ';
        }
        map->player_row = new_row;
        map->player_col = new_col;
        map->map_xy[map->player_row][map->player_col] = 'P';
    }
}

static void boxe_move(struct map *map)
{
    if (map->map_xy[map->next_row][map->next_col] == ' ' ||
        map->map_xy[map->next_row][map->next_col] == 'O') {
        move_box(map);
        move_player(map, map->new_row, map->new_col);
    }
    if (map->map_xy[map->next_row][map->next_col] == 'O') {
        move_box(map);
        move_player(map, map->new_row, map->new_col);
    }
}

int check_boxe_move(struct map *map, int new_row, int new_col)
{
    int next_row = 0;
    int next_col = 0;

    map->next_row = 0;
    map->next_col = 0;
    map->new_row = new_row;
    map->new_col = new_col;
    if (map->map_xy[map->new_row][map->new_col] == ' ' ||
        map->map_xy[map->new_row][map->new_col] == 'O') {
        move_player(map, map->new_row, map->new_col);
    }
    if (map->map_xy[map->new_row][map->new_col] == 'X') {
        map->next_row = map->new_row + (map->new_row - map->player_row);
        map->next_col = map->new_col + (map->new_col - map->player_col);
        boxe_move(map);
    }
}
