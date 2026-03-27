/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Print all combinations of n digits
*/

#include "my_putchar.h"

static void my_putnbr_fixed(int nb, int digits)
{
    unsigned int div;
    unsigned int chiffre;

    div = 1;
    while (digits > 1) {
        div = div * 10;
        digits--;
    }
    while (div > 0) {
        chiffre = (nb / div) % 10;
        my_putchar('0' + chiffre);
        div /= 10;
    }
}

static int is_last(int n, int value)
{
    unsigned int last;
    unsigned int digit;

    last = 0;
    digit = 10 - n;
    while (digit <= 9) {
        last = last * 10 + digit;
        digit++;
    }
    return (value == last);
}

static void recursion(int n, int pos, int start, int value)
{
    int i;

    if (pos == n) {
        my_putnbr_fixed(value, n);
        if (!is_last(n, value)) {
            my_putchar(',');
            my_putchar(' ');
        }
        return;
    }
    i = start;
    while (i <= 9) {
        recursion(n, pos + 1, i + 1, value * 10 + i);
        i++;
    }
}

int my_print_combn(int n)
{
    if (n <= 0 || n >= 10) {
        return (1);
    }
    recursion(n, 0, 0, 0);
    return 0;
}
