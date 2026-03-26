/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Print all unique 3-digit combinations
*/

#include "lib/my_putchar.h"

int my_print_comb(void)
{
    char c1;
    char c2;
    char c3;

    c1 = '0';
    while (c1 <= '7') {
        c2 = c1 + 1;
        while (c2 <= '8') {
            c3 = c2 + 1;
            while (c3 <= '9') {
                my_putchar(c1);
                my_putchar(c2);
                my_putchar(c3);
                if (!(c1 == '7' && c2 == '8' && c3 == '9')) {
                    my_putchar(',');
                    my_putchar(' ');
                }
                c3++;
            }
            c2++;
        }
        c1++;
    }
    return (0);
}
