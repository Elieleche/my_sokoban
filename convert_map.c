/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-sokoban-elie.chardin
** File description:
** convert_map
*/
#include "include/my.h"
#include "include/my_struct.h"

char **convert_to_map(char *input, struct map *map)
{
    char **result;
    int num_lines = 1;
    int line_index = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            num_lines++;
            map->num_lines = num_lines;
        }
    }
    result = malloc(sizeof(char *) * (num_lines + 1));
    result[line_index] = input;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            line_index++;
            result[line_index] = &input[i + 1];
        }
    }
    return result;
}
