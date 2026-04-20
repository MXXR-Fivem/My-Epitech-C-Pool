/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Tests for my_getnbr
*/

#include <stdio.h>
#include "../my_getnbr.h"

int main() {
    const char *tests[] = {"21", "-21", "+33", "++++099", "1000000", "000000", "0", "-000000", "18446744073709551615", "12f34", "2147483647", "2147483648", "-2147483648", "\"\"", "-------++---------------42", "+---+--++---+---+---+-42", "42a43", "11000000000000000000000042", "-11000000000000000000000042", NULL};
    int i = 0;
    while (tests[i]) {
        printf("%d\n", my_getnbr(tests[i]));
        ++i;
    }
    return 0;
}

