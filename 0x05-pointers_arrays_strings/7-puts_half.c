#include "main.h"
/**
 * puts_half -  prints half of a string
 *
 * @str: is the parameter to check
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int n, i, j;
for (n = 0; str[n] != '0'; n++)
{
if (n % 2 == 0)
{
for (i = n / 2; str[i] != '0' ; i++)
{
_putchar(str[i]);
}
else if (n % 2)
{
for (j = (n - 1) / 2; j < n - 1; j++)
{
_putchar(str[j + 1])
}
}
}
_putchar('\n');
}
