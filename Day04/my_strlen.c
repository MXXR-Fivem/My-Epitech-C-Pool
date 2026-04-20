/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_strlen function
*/

#include "my_putchar.h"

int my_strlen(char const *str) {
    int n = 0;
    char const *c = str;
    while (*c != '\0') {
        c++;
        n++;
    }
    return n;
}

