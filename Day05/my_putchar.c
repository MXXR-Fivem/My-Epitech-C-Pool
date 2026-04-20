/*
** EPITECH PROJECT, 2026
** C Pool Day05
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_putchar function
*/

#include <unistd.h>
#include "my_putchar.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

