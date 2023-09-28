#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the numbers of bit
 * @index: is the index
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
n = n >> index;
if (n & 1 == 0)
return (0);
else
return (1);
}
