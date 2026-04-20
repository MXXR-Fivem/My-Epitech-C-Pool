/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_evil_str function
*/

#include "my_strlen.h"
#include <stdio.h>
    
void switch_characters(char *c1, char *c2) {
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

char *my_evil_str(char *str) {
    char *c1 = str;
    char *c2 = (str + my_strlen(str)-1);
    while (c1 < c2) {
        switch_characters(c1, c2);
        c1++, c2--;
    }
    return str;
}

