#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
int s;
int x;
for (s = 0; s <= 98 ; s++)
{
for (x = s + 1; x <= 99 ; x++)
{
putchar((s / 10) + '0');
putchar((s % 10) + '0');
putchar((x / 10) + '0');
putchar((x % 10) + '0');
if (s < 98 && x <= 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
