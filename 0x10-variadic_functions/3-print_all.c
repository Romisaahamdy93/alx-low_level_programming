#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - to print anything
 * @format: list of types of arguments to print
 */

void print_all(const char * const format, ...)
{
va_list args;

print_t types[] = {
{ "c", print_a_char },
{ "i", print_an_integer },
{ "f", print_a_float },
{ "s", print_a_char_ptr }
};

unsigned int a = 0;
unsigned int b = 0;
char *separator = "";

va_start(args, format);

while (format != NULL && format[a])
{
b = 0;
while (b < 4)
{
if (format[a] == *types[b].print)
{
types[b].f(separator, args);
separator = ", ";
}
b++;
}
a++;
}

va_end(args);
printf("\n");
}

/**
 * print_a_char - to print a char type
 * @separator: is the separator between char
 * @args: is the list of arguments
 */

void print_a_char(char *separator, va_list args)
{
printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_an_integer - to print an integer type
 * @separator: is the separator between integers
 * @args: is the list of arguments
 */

void print_an_integer(char *separator, va_list args)
{
printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_a_float - to print a float type
 * @separator: is the separator between float
 * @args: is the list of arguments
 */

void print_a_float(char *separator, va_list args)
{
printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_a_char_ptr - to print a pointer to char type
 * @separator: is the separator between char
 * @args: is the list of arguments
 */

void print_a_char_ptr(char *separator, va_list args)
{
char *ptr = va_arg(args, char *);

if (ptr == NULL)
{
printf("%s%s", separator, "(nil)");
return;
}

printf("%s%s", separator, ptr);
}
