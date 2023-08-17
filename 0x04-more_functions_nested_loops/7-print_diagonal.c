#include "main.h"
/**
 * print_diagonal - check the code
 *
 * @n: is the number of times the character \
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (b == 0)
_putchar('\\');
else if (b < a)
_putchar(' ');
}
_putchar('\n');
}
}
}

