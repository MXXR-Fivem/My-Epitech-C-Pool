/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Tests for my_put_nbr
*/

#include "../my_put_nbr.h"
#include "../my_putchar.h"

int main(void)
{
    my_put_nbr(0);
    my_putchar('\n');
    my_put_nbr(42);
    my_putchar('\n');
    my_put_nbr(-42);
    my_putchar('\n');
    my_put_nbr(2147483647);
    my_putchar('\n');
    my_put_nbr(-2147483648);
    my_putchar('\n');
    return 0;
}
