#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: is the parameter to check
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
while (s--)
{
_putchar(*s);
}
_putchar('\n');
}
