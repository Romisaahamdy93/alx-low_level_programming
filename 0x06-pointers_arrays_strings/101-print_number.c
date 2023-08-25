#include "main.h"
/**
 * print_number -  prints an integer
 * @n: an integer
 */
void print_number(int n)
{
unsigned int x;
if (n < 0)
{
x = -n;
_putchar('_');
}
else
{
x = n;
}
if (n / 10)
{
print_number(x / 10);
_putchar(x % 10 + '0');
}
}
