/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Tests for my_swap
*/

#include <stdio.h>
#include "../my_swap.h"

int main() {
    int a = 5;
    int b = 6;
    my_swap(&a, &b);
    printf("a: %d | b : %d", a, b);
    return 0;
}

