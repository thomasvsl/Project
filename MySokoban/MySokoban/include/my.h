/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <curses.h>

#ifndef FN_H
    #define FN_H

struct coord {
    int i;
    int j;
    int o;
    int n;
    int x;
    int y;
};

char **malloc_map(int fd, char *buffer, int size);
char **c_map(char *buffer, char **map);
void p_map(char **map, struct coord *my_cords);
char **convert(int ac, char **av);

void my_putchar(char c);
int my_putstr(char const *str);
char *my_strstr(char *str, char const *to_find);
char *my_itoi(int nb);
int my_strlen(char const *str);

int rules(int ac, char **av);
int define(int ac, char **av);
int sokoban(int ac, char **av, struct coord *my_cords, WINDOW *wd, char **map);
int invalid(char **map, struct coord *my_cords);
int search_p(char **map, struct coord *my_cords);
int search_o(char **map, struct coord *my_cords);
int movement(char **map, struct coord *my_cords, int ch);
int up(char **map, struct coord *my_cords, int ch);
int down(char **map, struct coord *my_cords, int ch);
int right(char **map, struct coord *my_cords, int ch);
int left(char **map, struct coord *my_cords, int ch);
int window(int ac, char **av, WINDOW *wd);

#endif /* FN_H */