#include "main.h"
/**
 *  print_square - check the code
 *
 * @size: is the character to check
 *
 *  Return: Always 0 (Success)
 */
void print_square(int size)
{
int x, y;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
