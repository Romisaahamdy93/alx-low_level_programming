#include "main.h"
/**
 * *_strncpy -  copies a string
 *
 * @dest: is the string
 *
 * @src: is the string
 *
 * @n: numbers of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
