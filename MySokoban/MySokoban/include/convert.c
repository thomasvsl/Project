/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-BSQ-thomas.vidal-savelli
** File description:
** chare_to_charee.c
*/

#include "my.h"

char **malloc_map(int fd, char *buffer, int size)
{
    int i = 0, y = 0, j = 0, ac = 0;
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            y = y + 1;
        }
        i = i + 1;
    }
    char **map = malloc(sizeof(char*) * (y + 1));
    while (ac <= y) {
        map[ac] = malloc(sizeof(char) * (i + 1));
        ac = ac + 1;
    }
    map[ac] = NULL;
    map = c_map(buffer, map);
    return map;
}

char **c_map(char *buffer, char **map)
{
    int j = 0, k = 0, ac = 0;
    while (buffer[j] != '\0') {
        if (buffer[j] == '\n') {
            k = 0;
            j = j + 1;
            ac = ac + 1;
        } else {
            map[ac][k] = buffer[j];
            j = j + 1;
            k = k + 1;
        }
    }
    return map;
}

char **convert(int ac, char **av)
{
    struct stat s;
    stat(av[1], &s);
    int size = s.st_size;
    int fd = open(av[1], O_RDONLY);
    char *buffer = malloc(sizeof(char) * (size + 1));
    int rd = read(fd, buffer, size);
    buffer[size] = '\0';
    char **map = malloc_map(fd, buffer, size);
    return map;
}