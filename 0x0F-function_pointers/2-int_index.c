#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array to check
 * @size: the number of elements in the array array
 * @cmp: function pointer
 * Return:  index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
}
return (-1);
}
