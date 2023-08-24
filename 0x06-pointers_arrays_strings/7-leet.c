#include "main.h"
/**
 * *leet -  encodes a string into 1337
 * @s: is the string
 * Return: s
 */
char *leet(char *s)
{
int x, y;
char a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char b[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y < 10; y++)
{
if (s[x] == a[y])
{
s[x] = b[y];
}
}
}
return (s);
}
