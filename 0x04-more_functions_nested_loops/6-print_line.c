#include "main.h"
/**
 *  print_line - check the code
 *
 * @n: is the character to check
 *
 *  Return: Always 0 (Success)
 */
void print_line(int n)
{
int x;
for (x = 1; x <= n; x++)
{
if (n <= 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
