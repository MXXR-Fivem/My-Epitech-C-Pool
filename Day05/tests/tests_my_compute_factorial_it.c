/*
** EPITECH PROJECT, 2026
** C Pool Day05
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Tests for my_compute_factorial_it
*/

#include <stdio.h>
#include "../my_compute_factorial_it.h"

int main() {
    printf("%d | ", my_compute_factorial_it(0));
    printf("%d | ", my_compute_factorial_it(1));
    printf("%d | ", my_compute_factorial_it(3));
    printf("%d | ", my_compute_factorial_it(4));
    printf("%d | ", my_compute_factorial_it(5));
    return 0;
}

