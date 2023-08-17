#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int i, n;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (n = i; n < size; n++)
{
_putchar(' ');
}
for (n = 1; n <= i; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
