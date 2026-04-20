/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_sort_int_array function
*/

void my_sort_int_array(int *array, int size) {
    for (int i = 0; i < size-1; i++) {
        int min = i;
        for (int j = i+1; j < size; j++) {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i) {
            int tmp = array[i];
            array[i] = array[min];
            array[min] = tmp;
        }
    }
}

