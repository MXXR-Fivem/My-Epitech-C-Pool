/*
** EPITECH PROJECT, 2026
** C Pool Day05
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_compute_factorial_rec function
*/

int my_compute_factorial_rec(int nb) {
    if (nb <= 0)
        return 1;
    return nb * my_compute_factorial_rec(nb-1);
}

