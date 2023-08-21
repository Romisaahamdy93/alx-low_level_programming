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
int k = 0;
int j;
while (str[i] != '0')
{
i++;
}
k = i - 1;
for (j = 0; j <= k; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
