#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array
 *
 * @n: is the number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int x, y, temp;
y = x - 1;
for (x = 0; x < n / 2; x++)
{
temp = a[x];
a[x] = a[y];
a[y] = temp;
y--;
}
}
