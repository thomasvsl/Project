/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    long long int run;
    run = 0;
    while (str[run] == '0') {
        run = run + 1;
    }
    while (str[run] != '\0'){
        my_putchar(str[run]);
        run = run + 1;
    }
}