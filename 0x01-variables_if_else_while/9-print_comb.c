#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
int s;
for (s = 0; s <= 9 ; s++)
{
if (s < 9)
{
putchar(',');
putchar(' ');
}
putchar((s % 10) + '0');
}
return (0);
}
