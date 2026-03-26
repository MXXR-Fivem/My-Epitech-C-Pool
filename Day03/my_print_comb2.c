#include "lib/my_putchar.h"

int my_print_comb2(void)
{
    for (char c1 = '0'; c1 <= '9'; c1++) {
        for (char c2 = '0'; c2 <= '9'; c2++) {
            for (char c3 = '0'; c3 <= '9'; c3++) {
                for (char c4 = '0'; c4 <= '9'; c4++) {
                    if (c1+c2 < c3+c4) {
                        my_putchar(c1);
                        my_putchar(c2);
                        my_putchar(' ');
                        my_putchar(c3);
                        my_putchar(c4);
                        if (!(c1 == '9' && c2 == '9')) {
                            my_putchar(',');
                            my_putchar(' ');
                        }
                    }
                }
            }
        }
    }
    return 0;
}
