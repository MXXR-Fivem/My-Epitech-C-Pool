/*
** EPITECH PROJECT, 2026
** C Pool Day05
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_compute_factorial_it function
*/

int my_compute_factorial_it(int nb) {
    int result = 1;
    for (int it = nb; it > 1; it--) {
        result *= it;
    }
    return result;
}

