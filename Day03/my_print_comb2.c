/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Print all combinations of two two-digit numbers
*/

#include "my_putchar.h"

int my_print_comb2(void)
{
    char c1;
    char c2;
    char c3;
    char c4;

    c1 = '0';
    while (c1 <= '9') {
        c2 = '0';
        while (c2 <= '9') {
            c3 = '0';
            while (c3 <= '9') {
                c4 = '0';
                while (c4 <= '9') {
                    if (((c1 - '0') * 10 + (c2 - '0'))
                        < ((c3 - '0') * 10 + (c4 - '0'))) {
                        my_putchar(c1);
                        my_putchar(c2);
                        my_putchar(' ');
                        my_putchar(c3);
                        my_putchar(c4);
                        if (!(c1 == '9' && c2 == '8'
                                && c3 == '9' && c4 == '9')) {
                            my_putchar(',');
                            my_putchar(' ');
                        }
                    }
                    c4++;
                }
                c3++;
            }
            c2++;
        }
        c1++;
    }
    return 0;
}
