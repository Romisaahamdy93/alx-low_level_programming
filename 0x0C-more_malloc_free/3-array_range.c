#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: is an integer
 * @max: is an integer
 * Return:the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *ptr;
int x, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(size *sizeof(int));
if (ptr == NULL)
return (NULL);
for (x = 0; min <= max; x++)
{
ptr[x] = min;
min++;
}
return (ptr);
}
