/*
** EPITECH PROJECT, 2021
** B-PSU-200-MAR-2-1-mysokoban-thomas.vidal-savelli
** File description:
** pos.c
*/

#include "include/my.h"

int movement(char **map, struct coord *my_cords, int ch)
{
    if (ch == KEY_UP && map[my_cords->j - 1][my_cords->i] != '#')
        up(map, my_cords, ch);
    if (ch == KEY_DOWN && map[my_cords->j + 1][my_cords->i] != '#')
        down(map, my_cords, ch);
    if (ch == KEY_RIGHT && map[my_cords->j][my_cords->i + 1] != '#')
        right(map, my_cords, ch);
    if (ch == KEY_LEFT && map[my_cords->j][my_cords->i - 1] != '#')
        left(map, my_cords, ch);
}