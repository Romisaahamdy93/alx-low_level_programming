#include "main.h"
/**
 * *_memcpy - function copies n bytes from memory area
 * @dest: memory area
 * @src: memory area
 * @n: numbers of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
