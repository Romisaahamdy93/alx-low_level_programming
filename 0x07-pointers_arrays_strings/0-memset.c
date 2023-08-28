#include "main.h"
/**
 * *_memset - function fills the first n bytes of the memory area
 * @s: the memory area pointed to
 * @b: the constant byte
 * @n: numbers of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
