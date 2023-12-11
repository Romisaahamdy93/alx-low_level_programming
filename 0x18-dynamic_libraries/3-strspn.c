#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: is the string which consist only of bytes from
 * Return: s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int x, y, z = 0;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] != 32)
{
for (y = 0; s[y] != '\0'; y++)
{
if (s[x] == accept[y])
{
z++;
}
}
}
else
return (z);
}
return (z);
}
