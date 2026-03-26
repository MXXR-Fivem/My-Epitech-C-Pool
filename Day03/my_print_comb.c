#include "lib/my_putchar.h"

int my_print_comb(void)
{
    for (char c1 = '0'; c1 <= '7'; c1++) {
        for (char c2 = c1 + 1; c2 <= '8'; c2++) {
            for (char c3 = c2 + 1; c3 <= '9'; c3++) {
                my_putchar(c1);
                my_putchar(c2);
                my_putchar(c3);
                if (!(c1 == '7' && c2 == '8' && c3 == '9')) {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
    return 0;
}
