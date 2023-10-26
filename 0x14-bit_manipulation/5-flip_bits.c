#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: is the number of bits to flip
 * @m: is the number of bits to convert
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor;
unsigned long int a = 0;
xor = n ^ m;
while (xor != 0)
{
if ((xor & 1) == 1)
a++;
xor = xor >> 1;
}
return (a);
}
