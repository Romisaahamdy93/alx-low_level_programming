#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: is the string to check
 * Return: NULL
 */
char *_strdup(char *str)
{
char *ptr;
int x = 0, y;
if (str == NULL)
return (NULL);
while (str[x] != '\0')
{
x++;
}
ptr = malloc(x *sizeof(char) + 1);
if (ptr == NULL)
return (NULL);
for (y = 0; y < x; y++)
{
ptr[y] = str[y];
}
ptr[y] = '\0';
return (ptr);
}
