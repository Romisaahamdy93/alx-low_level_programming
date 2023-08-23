#include "main.h"
/**
 * *_strncat - concatenates two strings
 *
 * @dest: is the string
 *
 * @src: is the string
 *
 * @n: numbers of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;
a = 0;
b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';
return (dest);
}
