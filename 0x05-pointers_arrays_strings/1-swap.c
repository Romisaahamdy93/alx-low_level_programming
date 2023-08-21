#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: is the parameter 1 to check
 *
 * @b: is the parameter 2 to check
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = *a;
}
