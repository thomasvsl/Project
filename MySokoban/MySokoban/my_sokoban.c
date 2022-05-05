/*
** EPITECH PROJECT, 2021
** B-PSU-200-MAR-2-1-mysokoban-thomas.vidal-savelli
** File description:
** my_sokoban.c
*/

#include "include/my.h"

int invalid(char **map, struct coord *my_cords)
{
    int i = 0, j = 0, e = 0;
    while (map[j] != NULL) {
        while (map[j][i] != '\n' && map[j][i] != '\0') {
            if (map[j][i] != ' ' && map[j][i] != '\n' && map[j][i] != '#' &&
            map[j][i] != 'X' && map[j][i] != 'O' && map[j][i] != 'P' && map[j][i] != '\0') {
                e = e + 1;
            }
            i = i + 1;
        }
        i = 0;
        j = j + 1;
    }
    return e;
}

int define(int ac, char **av)
{
    if (my_strstr("-h", av[1])) {
        rules(ac, av);
        return 0;
    }
    struct coord *my_cords = malloc(sizeof(struct coord));
    WINDOW *wd = initscr();
    keypad(stdscr, TRUE);
    char **map = convert(ac, av);
    if (invalid(map, my_cords) > 0)
        return 84;
    sokoban(ac, av, my_cords, wd, map);
}

int sokoban(int ac, char **av, struct coord *my_cords, WINDOW *wd, char **map)
{
    p_map(map, my_cords);
    int i = 1, ch;
    while (i == 1) {
        if (getmaxy(wd) < my_cords->n) {
            clear();
            window(ac, av, wd);
            refresh();
        }
        int k = search_o(map, my_cords);
        if (k == 0) {
            ch = endwin();
            return 0;
        }
        ch = getch();
        clear();
        search_p(map, my_cords);
        movement(map, my_cords, ch);
        p_map(map, my_cords);
    }
    ch = endwin();
}

int main(int ac, char **av)
{
    if (ac < 2 || ac > 2) {
        return 84;
    } else if (my_strstr("-h", av[1])) {
        rules(ac, av);
        return 0;
    } else {
        define(ac, av);
    }
}