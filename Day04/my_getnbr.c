/*
** EPITECH PROJECT, 2026
** C Pool Day04
** Author: Theo Busiris <theo.busiris@epitech.eu>
** File description:
** my_getnbr function
*/

int my_getnbr(char const * str) {
    char const *c = str;
    long result = 0;
    int nbr_neg = 0;
    while (*c != '\0') {
        if (*c >= '0' && *c <= '9') {
            int digit = *c - '0';
            int max_last_digit = (nbr_neg % 2) != 0 ? 8 : 7;
            if (result > 214748364 || (result == 214748364 && digit > max_last_digit))
                return 0;
            result = (result * 10) + digit;
        } else if (result == 0 && (*c == '-' || *c == '+')) {
            nbr_neg += (*c == '-') ? 1 : 0;
        } else if (result != 0) {
            break;
        }
        c++;
    }
    result = (nbr_neg % 2) != 0 ? (result * -1) : result;
    return (int)result;
}

