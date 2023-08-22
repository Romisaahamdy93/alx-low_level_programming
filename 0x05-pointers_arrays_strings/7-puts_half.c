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
int i, j;
i = 0;
while (str[i] != '\0')
{
i++;
}
j = i / 2;
if (i % 2 == 1)
{
j++;
}
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
