#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list args;
va_start(args, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(args, int));
if (x != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
