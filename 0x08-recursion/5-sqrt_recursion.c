#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the number to check
 * Return: the square root
 */
int square_root(int i, int j);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (square_root(n, 0));
}
/**
 * square_root - returns the natural square root of a number
 * @i: is the number to check
 * @j: square root
 * Return: the square root
 */
int square_root(int i, int j)
{
if ( j * j > i)
{
return (-1);
}
else if ( j * j == i)
return (j);
return (square_root(i, j + 1));
}
