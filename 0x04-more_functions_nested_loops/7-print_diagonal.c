#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 *
 * @size: size of the square
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
int a, b;
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
if (size <= 0)
{
_putchar('\n');
}
_putchar('#');
}
_putchar('\n');
}
}
