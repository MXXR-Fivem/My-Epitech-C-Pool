/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Display N if negative, P otherwise
*/

#include "lib/my_putchar.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
