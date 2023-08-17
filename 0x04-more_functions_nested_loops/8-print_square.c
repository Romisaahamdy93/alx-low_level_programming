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
for (x = 1; x < size; x++)
{
if (size <= 0)
{
_putchar('\n');
}
_putchar('#');
}
_putchar('\n');
}
