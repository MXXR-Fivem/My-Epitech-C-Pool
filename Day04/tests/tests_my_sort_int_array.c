/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** Tests for my_sort_int_array
*/

#include <stdio.h>
#include "../my_sort_int_array.h"

void print_int_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {25, 2, 86, 6, 22, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_int_array(arr, size);
    my_sort_int_array(arr, size);
    print_int_array(arr, size);
    return 0;
}

