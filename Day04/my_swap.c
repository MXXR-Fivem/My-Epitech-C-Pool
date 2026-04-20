/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_swap function
*/

#include <stdio.h>
#include "my_putchar.h"

void my_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

