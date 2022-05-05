/*
** EPITECH PROJECT, 2021
** B-PSU-200-MAR-2-1-mysokoban-thomas.vidal-savelli
** File description:
** movement.c
*/

#include "include/my.h"

int up(char **map, struct coord *my_cords, int ch)
{
    if (map[my_cords->j - 2][my_cords->i] == 'X' &&
    map[my_cords->j - 1][my_cords->i] == 'X') {
        return 0;
    }
    if (map[my_cords->j - 2][my_cords->i] != '#' &&
    map[my_cords->j - 1][my_cords->i] == 'X') {
        map[my_cords->j - 2][my_cords->i] = 'X';
        map[my_cords->j - 1][my_cords->i] = 'P';
    }
    if (map[my_cords->j - 2][my_cords->i] == '#' &&
    map[my_cords->j - 1][my_cords->i] == 'X') {
        return 0;
    }
    if (map[my_cords->j - 1][my_cords->i] == 'O') {
        map[my_cords->j][my_cords->i] = ' ';
        my_cords->j = my_cords->j - 1;
        map[my_cords->j][my_cords->i] = 'P';
        my_cords->o = 1;
    } else {
        if (my_cords->o == 1) {
            map[my_cords->j][my_cords->i] = 'O';
            my_cords->o = 0;
        } else {
            map[my_cords->j][my_cords->i] = ' ';
        }
        my_cords->j = my_cords->j - 1;
        map[my_cords->j][my_cords->i] = 'P';
    }
    return 0;
}

int down(char **map, struct coord *my_cords, int ch)
{
    if (map[my_cords->j + 2][my_cords->i] == 'X' &&
    map[my_cords->j + 1][my_cords->i] == 'X') {
        return 0;
    }
    if (map[my_cords->j + 2][my_cords->i] != '#' &&
    map[my_cords->j + 1][my_cords->i] == 'X') {
        map[my_cords->j + 2][my_cords->i] = 'X';
        map[my_cords->j + 1][my_cords->i] = 'P';
    }
    if (map[my_cords->j + 2][my_cords->i] == '#' &&
    map[my_cords->j + 1][my_cords->i] == 'X') {
        return 0;
    }
    if (map[my_cords->j + 1][my_cords->i] == 'O') {
        map[my_cords->j][my_cords->i] = ' ';
        my_cords->j = my_cords->j + 1;
        map[my_cords->j][my_cords->i] = 'P';
        my_cords->o = 1;
    } else {
        if (my_cords->o == 1) {
            map[my_cords->j][my_cords->i] = 'O';
            my_cords->o = 0;
        } else {
            map[my_cords->j][my_cords->i] = ' ';
        }
        my_cords->j = my_cords->j + 1;
        map[my_cords->j][my_cords->i] = 'P';
    }
    return 0;
}

int right(char **map, struct coord *my_cords, int ch)
{
    if (map[my_cords->j][my_cords->i + 2] == 'X' &&
    map[my_cords->j][my_cords->i + 1] == 'X') {
        return 0;
    }
    if (map[my_cords->j][my_cords->i + 2] != '#' &&
    map[my_cords->j][my_cords->i + 1] == 'X') {
        map[my_cords->j][my_cords->i + 2] = 'X';
        map[my_cords->j][my_cords->i + 1] = 'P';
    }
    if (map[my_cords->j][my_cords->i + 2] == '#' &&
    map[my_cords->j][my_cords->i + 1] == 'X') {
        return 0;
    }
    if (map[my_cords->j][my_cords->i + 1] == 'O') {
        map[my_cords->j][my_cords->i] = ' ';
        my_cords->i = my_cords->i + 1;
        map[my_cords->j][my_cords->i] = 'P';
        my_cords->o = 1;
    } else {
        if (my_cords->o == 1) {
            map[my_cords->j][my_cords->i] = 'O';
            my_cords->o = 0;
        } else if (my_cords->o == 2) {
            map[my_cords->j - 1][my_cords->i - 1] = 'O';
            my_cords->o = 0;
        } else {
            map[my_cords->j][my_cords->i] = ' ';
        }
        my_cords->i = my_cords->i + 1;
        map[my_cords->j][my_cords->i] = 'P';
    }
    return 0;
}

int left(char **map, struct coord *my_cords, int ch)
{
    if (map[my_cords->j][my_cords->i - 2] == 'X' &&
    map[my_cords->j][my_cords->i - 1] == 'X') {
        return 0;
    }
    if (map[my_cords->j][my_cords->i - 2] != '#' &&
    map[my_cords->j][my_cords->i - 1] == 'X') {
        map[my_cords->j][my_cords->i - 2] = 'X';
        map[my_cords->j][my_cords->i - 1] = 'P';
    }
    if (map[my_cords->j][my_cords->i - 2] == '#' &&
    map[my_cords->j][my_cords->i - 1] == 'X') {
        return 0;
    }
    if (map[my_cords->j][my_cords->i - 1] == 'O') {
        map[my_cords->j][my_cords->i] = ' ';
        my_cords->i = my_cords->i - 1;
        map[my_cords->j][my_cords->i] = 'P';
        my_cords->o = 1;
    } else {
        if (my_cords->o == 1) {
            map[my_cords->j][my_cords->i] = 'O';
            my_cords->o = 0;
        } else {
            map[my_cords->j][my_cords->i] = ' ';
        }
        my_cords->i = my_cords->i - 1;
        map[my_cords->j][my_cords->i] = 'P';
    }
    return 0;
}