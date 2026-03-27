/*
** EPITECH PROJECT, 2026
** C Pool Day03
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Write a character to stdout
*/

#include <unistd.h>
#include "my_putchar.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
