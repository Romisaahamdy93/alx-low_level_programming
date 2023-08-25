#include "main.h"
/**
 * *rot13 -  encodes a string
 * @s: is the string
 * Return: s
 */
char *rot13(char *s)
{
int x, y;
char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"
for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y < 52; y++)
{
if (s[x] == a[y])
{
s[x] = b[y];
break;
}
}
}
return (s);
}
