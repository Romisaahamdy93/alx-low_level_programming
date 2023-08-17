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
int x;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
