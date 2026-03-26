#include "../my_put_nbr.h"
#include "../lib/my_putchar.h"

int main(void)
{
    my_put_nbr(0);
    my_putchar('\n');
    my_put_nbr(42);
    my_putchar('\n');
    my_put_nbr(-42);
    my_putchar('\n');
    my_put_nbr(2147483647);
    my_putchar('\n');
    my_put_nbr(-2147483648);
    my_putchar('\n');
    return 0;
}
