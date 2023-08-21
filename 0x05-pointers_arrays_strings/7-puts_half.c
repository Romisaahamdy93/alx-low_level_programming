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
int n;
for (n = 0; str[n] != '0'; n++)
{
n++;
}
n++;
for (n /= 2; str[n] != '0' ; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
