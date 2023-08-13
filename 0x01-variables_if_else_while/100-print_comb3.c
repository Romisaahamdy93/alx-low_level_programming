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
for (s = 0; s < 10 ; s++)
{
for (x = s + 1; x < 10 ; x++)
{
putchar(s + '0');
putchar(x + '0');
if (s <= 8 && x <= 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
