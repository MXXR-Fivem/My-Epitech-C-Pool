#include "lib/my_putchar.h"

int my_print_digits(void)
{
    for (char c = '0'; c <= '9'; c++) my_putchar(c);
    return 0;
}
