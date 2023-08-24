#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
int x, y, temp;
y = n - 1;
for (x = 0; x < n / 2; x++)
{
temp = a[x];
a[x] = a[y];
a[y] = temp;
y--;
}
}
