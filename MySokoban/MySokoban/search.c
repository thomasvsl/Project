/*
** EPITECH PROJECT, 2021
** B-PSU-200-MAR-2-1-mysokoban-thomas.vidal-savelli
** File description:
** search.c
*/

#include "include/my.h"

int search_o(char **map, struct coord *my_cords)
{
    int i = 0, j = 0, k = 0;
    while (map[j] != NULL) {
        if (map[j][i] == 'O') {
            k = k + 1;
        }
        i = i + 1;
        if (i == '\n') {
            i = 0;
            j = j + 1;
        }
    }
    return k;
}

int search_p(char **map, struct coord *my_cords)
{
    int i = 0, j = 0;
    while (map[j] != NULL) {
        while (map[j][i] != '\0') {
            if (map[j][i] == 'P') {
                my_cords->i = i;
                my_cords->j = j;
                my_cords->x = i;
                my_cords->y = j;
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
}