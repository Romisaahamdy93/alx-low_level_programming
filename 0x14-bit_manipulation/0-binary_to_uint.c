#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int num = 0;
if (b == NULL)
return (0);
for (x = 0; b[x]; x++)
{
if (b[x] != '0' && b[x] != '1')
return (0);
num = num * 2 + (b[x] - '0');
}
return (num);
}
