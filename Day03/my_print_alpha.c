/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Print lowercase alphabet
*/

#include "my_putchar.h"

int my_print_alpha(void)
{
    char c;

    c = 'a';
    while (c <= 'z') {
        my_putchar(c);
        c++;
    }
    return 0;
}
