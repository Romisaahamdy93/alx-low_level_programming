#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: is an integer to check
 * @c: is the character to check
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int x = 0;
if (size == 0)
return (NULL);
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
return (NULL);
while (x < size)
{
ptr[x] = c;
x++;
}
return (ptr);
}
