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
int x = 0;
while (*s != '\0')
{
s++;
}
for (x -= 1; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
