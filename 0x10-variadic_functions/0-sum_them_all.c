#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: numbers of arguments
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int x;
int sum = 0;
if (n == 0)
return (0);
va_start(args, n);
for (x = 0; x < n; x++)
{
sum = sum + va_args(args, int);
}
v_end(args);
return (sum);
}
