/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Tests for my_print_combn
*/

#include "../my_print_combn.h"
#include "../my_putchar.h"

int main(void)
{
    my_print_combn(2);
    my_putchar('\n');
    my_putchar('\n');
    my_print_combn(3);
    my_putchar('\n');
    my_putchar('\n');
    my_print_combn(5);
    return (0);
}