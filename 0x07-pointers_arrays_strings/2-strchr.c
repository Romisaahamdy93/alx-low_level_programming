#include "main.h"
/**
 * *_strchr -  locates a character in a string
 * @s: is the string
 * @c: is the character
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
int x = 0, y;
while (s[x])
{
x++;
}
for (y = 0; y <= x; y++)
{
if (c == s[y])
{
s = s + y;
return (s);
}
}
return (NULL);
}
