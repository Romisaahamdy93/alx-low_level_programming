#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list args;
char *string;
va_start(args, n);
for (x = 0; x < n; x++)
{
string = va_arg(args, char *);
printf("%s", string);
if (string == NULL)
printf("%s", "(nil)");
if (x != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
