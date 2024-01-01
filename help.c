/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** help
*/
#include "include/my.h"
#include "include/my_struct.h"

void display_help(void)
{
    FILE *file = fopen("help.txt", "r");
    size_t read_size;
    char buffer;

    if (file != NULL) {
        read_size = fread(&buffer, 1, 1, file);
        for (; read_size > 0;) {
            fwrite(&buffer, 1, 1, stdout);
        }
        fclose(file);
    }
}
