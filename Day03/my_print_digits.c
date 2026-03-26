/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Print digits 0 to 9
*/

#include "lib/my_putchar.h"

int my_print_digits(void)
{
    char c;

    c = '0';
    while (c <= '9') {
        my_putchar(c);
        c++;
    }
    return (0);
}
