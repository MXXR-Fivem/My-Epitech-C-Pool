#include "lib/my_putchar.h"

int my_print_alpha(void)
{
    for (char c = 'z'; c >= 'a'; c--) my_putchar(c);
    return 0;
}
