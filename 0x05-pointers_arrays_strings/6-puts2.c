#include "main.h"
/**
 * puts2 -  prints every other character of a string
 *
 * @str: is the parameter to check
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int i = 0;
int j;
while (str[i] != '0')
{
i++;
}
for (j = 0; j <= i; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
