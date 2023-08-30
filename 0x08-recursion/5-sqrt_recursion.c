#include "main.h"
int square_root(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the number to check
 * Return: the square root
 */
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
 * @n: is the number to check
 * @i: square root
 * Return: the square root
 */
int square_root(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
return (i);
return (square_root(n, i + 1));
}
