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
int x;
int y = 0;
while (str[y] != '\0')
{
y++;
}
for (x = 0; x < y; x += 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
