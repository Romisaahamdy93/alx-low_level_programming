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
int i = 0;
int j, k;
while (str[i] != '0')
{
i++;
}
if (i % 2 == 1)
{
j = (i - 1) / 2;
j = j + 1;
}
else
{
j = i / 2;
}
while (j < i)
{
j++;
_putchar(str[j]);
}
_putchar('\n');
}