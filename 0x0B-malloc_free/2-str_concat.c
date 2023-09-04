#include "main.h"
#include <stdlib.h>
/**
 * *str_concat -  concatenates two strings
 * @s1: the string1 to check
 * @s2: the string2 to check
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;
int x = 0, y = 0, z, size = 0;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
while (s1[x] != '\0')
{
x++;
}
while (s2[y] != '\0')
{
y++;
}
size = x + y;
ptr = malloc(size *sizeof(char) + 1);
if (ptr == NULL)
return (NULL);
for (z = 0, y = 0; z < size; z++)
{
if (z <= x)
ptr[z] = s1[z];
if (z >= x)
{
ptr[z] = s2[y];
y++;
}
}
ptr[z] = '\0';
return (ptr);
}
