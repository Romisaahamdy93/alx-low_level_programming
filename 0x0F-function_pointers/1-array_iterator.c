#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  executes a function given as an array
 * @array: is an array
 * @size: is a size of array
 * @action: function to pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
