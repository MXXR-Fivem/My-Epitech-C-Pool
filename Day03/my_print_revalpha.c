/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Print lowercase alphabet in reverse
*/

#include "lib/my_putchar.h"

int my_print_revalpha(void)
{
    char c;

    c = 'z';
    while (c >= 'a') {
        my_putchar(c);
        c--;
    }
    return (0);
}
