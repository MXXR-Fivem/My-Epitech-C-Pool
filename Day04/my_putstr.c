/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_putstr function
*/

#include "my_putchar.h"

void my_putstr(char const *str) {
    char const *c = str;
    while (*c != '\0') {
        my_putchar(*c);
        c++;
    }
}

