/*
** EPITECH PROJECT, 2021
** B-PSU-200-MAR-2-1-mysokoban-thomas.vidal-savelli
** File description:
** h.c
*/

#include "include/my.h"

int rules(int ac, char **av)
{
    my_putstr("USAGE\n");
    my_putstr("      ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("      map file representing the warehouse map, containing '#' for walls,\n");
    my_putstr("          'P' for the player, 'X' for boxes and 'O' for storage locations.\n");
}