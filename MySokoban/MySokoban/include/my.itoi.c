/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** my.atoi.c
*/

#include "my.h"

char *my_itoi(int nb)
{
    int size = 0, tmp = nb;
    char *nb_in_str = NULL;
    if (nb == 0) {
        nb_in_str = malloc(sizeof(char) * 2);
        nb_in_str[0] = '0';
        nb_in_str[1] = '\0';
        return (nb_in_str);
    }
    while (tmp > 0) {
        tmp /= 10;
        size++;
    }
    nb_in_str = malloc(sizeof(char) * (size + 1));
    nb_in_str[size] = '\0';
    while (size--) {
        nb_in_str[size] = nb % 10  + '0';
        nb /= 10;
    }
    return (nb_in_str);
}