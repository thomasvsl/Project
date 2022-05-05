/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** strstr
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0, j = 0, x = 0;
    while (str[i] != '\0') {
        if (str[i] == to_find[j]) {
            x = i;
            while (to_find[j] == str[x]) {
                if (to_find[j + 1] == '\0') {
                    return (str + i - 1);
                }
                j = j + 1;
                x = x + 1;
            }
        }
        i = i + 1;
    }
    return (NULL);
}