/*
** EPITECH PROJECT, 2021
** B-PSU-200-MAR-2-1-mysokoban-thomas.vidal-savelli
** File description:
** print.c
*/

#include "include/my.h"

void p_map(char **map, struct coord *my_cords)
{
    int ac = 0;
    while (map[ac] != NULL) {
        printw("%s\n", map[ac]);
        ac = ac + 1;
    }
    my_cords->n = ac;
}