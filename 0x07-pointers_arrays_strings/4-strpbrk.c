#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: is the string
 * @accept: is the string
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
int x, y;
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; s[y] != '\0'; y++)
{
if (s[x] == s[y])
return (s);
}
s++;
}
return (NULL);
}
