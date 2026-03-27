/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Print an integer
*/

#include "my_putchar.h"

static int show_positive_number(long nb)
{
    if (nb >= 10) {
        show_positive_number(nb / 10);
    }
    my_putchar('0' + (nb % 10));
    return 0;
}

int my_put_nbr(int nb)
{
    long pos_nb = nb;

    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    if (pos_nb < 0) {
        my_putchar('-');
        pos_nb = -pos_nb;
    }
    show_positive_number(pos_nb);
    return 0;
}
