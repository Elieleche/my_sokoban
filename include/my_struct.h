/*
** EPITECH PROJECT, 2023
** B-CPE-101-LYN-1-1-myprintf-guillaume.gaudencio
** File description:
** my_struct
*/

#ifndef MY_STRUCT_H_
    #define MY_STRUCT_H_
    #include <stdio.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <ncurses.h>
    #include <unistd.h>

struct map {
    int i;
    int starty;
    int startx;
    char *token;
    int num_lines;
    char **map_xy;
    char **map_origin;
    char *map;
    int boxes_done;
    int win;
    int player_row;
    int player_col;
    int num_boxes;
    int res;
    int compare;
    int num_boxes_on_storage;
    int x_origin;
    int next_row;
    int next_col;
    int new_row;
    int new_col;
    int y_origin;
};

char *open_file(char **argv);
void display_help(void);
void init_struct(struct map *map, int size);
int set_window(struct map *map);
int switch_key(int *key, struct map *map);
void move_player(struct map *map, int newRow, int newCol);
void find_player_position(char **map, int *playerRow, int *playerCol);
int check_boxe_move(struct map *map, int new_row, int new_col);
int is_box_movable(struct map *map, int box_row, int box_col);
int check_boxes_blocked(struct map *map);
int move_box(struct map *map);
void display_map(struct map *map);
void display_map(struct map *map);
int resize_screen(int max_rows, int max_cols, struct map *map);
int check_win(struct map *map, int key);
void print_map(struct map *map);
char **convert_to_map(char *input, struct map *map);
int is_box_blocked(struct map *map, int box_row, int box_col);
int is_box_movable(struct map *map, int box_row, int box_col);
int check_boxes_blocked(struct map *map);
int switch_key(int *key, struct map *map);
int switch_key_end(int *key, struct map *map, int new_row, int new_col);

#endif /* !MY_STRUCT_H_ */
