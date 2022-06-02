/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check character
*/

#include "../include/my.h"

char *get_map(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat buff;
    char *buffer;
    int i = 0;

    stat(filepath, &buff);
    buffer = malloc(buff.st_size + 1);
    read(fd, buffer, buff.st_size);

    return buffer;
}