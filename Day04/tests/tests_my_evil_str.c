/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Tests for my_evil_str
*/

#include "../my_evil_str.h"
#include "../my_putstr.h"
#include <stdio.h>

int main() {
    char init[] = "abcdef";
    char *swapped = my_evil_str(init);
    my_putstr(swapped);
    return 0;
}

