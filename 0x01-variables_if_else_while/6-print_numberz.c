#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
int s;
for (s = 0; s < 10 ; s++)
{
putchar((s % 10) + '0');
}
putchar('\n');
return (0);
}
