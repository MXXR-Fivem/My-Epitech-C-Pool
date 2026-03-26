#include "lib/my_putchar.h"

int my_print_alpha(void)
{
    for (char c = 'a'; c <= 'z'; c++) my_putchar(c);
    return 0;
}
