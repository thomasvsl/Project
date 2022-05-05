/*
** EPITECH PROJECT, 2021
** B-PSU-200-MAR-2-1-mysokoban-thomas.vidal-savelli
** File description:
** window.c
*/

#include "include/my.h"

int window(int ac, char **av, WINDOW *wd)
{
    char *txt = "> Resize your window <";
    int x = getmaxx(wd) / 2;
    int y = getmaxy(wd) / 2;
    int z = my_strlen(txt) / 2;
    mvprintw(y, x - my_strlen(txt), txt);
}