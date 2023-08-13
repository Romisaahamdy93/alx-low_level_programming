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
int z;
for (s = 0; s < 10 ; s++)
{
for (x = s + 1; x < 10 ; x++)
{
for (z = x + 1; z < 10 ; z++)
{
putchar(s + '0');
putchar(x + '0');
putchar(z + '0');
if (s < 7 && x <= 8 && z <= 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
