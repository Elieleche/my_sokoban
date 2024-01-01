/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-sokoban-elie.chardin
** File description:
** screen_handling
*/
#include "include/my.h"
#include "include/my_struct.h"

int resize_screen(int max_rows, int max_cols, struct map *map)
{
    if (max_rows < map->num_lines || max_cols < my_strlen(map->map_xy[0])) {
        clear();
        printw("Resize the window");
        refresh();
        return 1;
    }
    return 0;
}

void display_map(struct map *map)
{
    int key;
    int max_rows = 0;
    int max_cols = 0;

    initscr();
    keypad(stdscr, TRUE);
    find_player_position(map->map_xy, &map->player_row, &map->player_col);
    while (1) {
        getmaxyx(stdscr, max_rows, max_cols);
        if (resize_screen(max_rows, max_cols, map) == 1) {
            continue;
        }
        print_map(map);
        key = getch();
        if (!switch_key(&key, map))
            break;
        if (check_win(map, key) == 1)
            break;
    }
    endwin();
}
