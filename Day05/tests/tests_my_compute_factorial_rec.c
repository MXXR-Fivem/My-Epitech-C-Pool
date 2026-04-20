/*
** EPITECH PROJECT, 2026
** C Pool Day05
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Tests for my_compute_factorial_rec
*/

#include <stdio.h>
#include "../my_compute_factorial_rec.h"

int main() {
    printf("%d | ", my_compute_factorial_rec(0));
    printf("%d | ", my_compute_factorial_rec(1));
    printf("%d | ", my_compute_factorial_rec(3));
    printf("%d | ", my_compute_factorial_rec(4));
    printf("%d | ", my_compute_factorial_rec(5));
    return 0;
}

