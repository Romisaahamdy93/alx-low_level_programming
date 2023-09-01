#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: is the string
 *
 * @src: is the string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a, b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
for (b = 0; src[b] != '\0'; b++)
{
dest[a] = src[b];
a++;
}
dest[a] = '\0';
return (dest);
}
