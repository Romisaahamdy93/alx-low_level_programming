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
for (a = 0; dest[a] != '\0'; a++)
{
for (b = 0; src[b] != '\0'; b++)
{
dest[b] = src[b];
a++;
}
dest[b] = '\0';
}
return (dest);
}
