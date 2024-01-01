/*
** EPITECH PROJECT, 2023
** my_sokoban
** File description:
** open_file
*/
#include "include/my.h"
#include "include/my_struct.h"

char *open_file(char **argv)
{
    struct stat statzise;
    int fd = 0;
    int sz = 0;
    int buffer_size = 0;
    char *buffer;

    stat(argv[1], &statzise);
    buffer_size = statzise.st_size;
    buffer = (char *)malloc(buffer_size + 1);
    if (buffer == NULL) {
        return NULL;
    }
    fd = open(argv[1], O_RDONLY);
    sz = read(fd, buffer, buffer_size);
    buffer[buffer_size] = '\0';
    return buffer;
}
