#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - Prints a character
 * @separator: The separator
 * @args: arguments
 */
void print_char(char *separator, va_list args)
{
printf("%s%c", separator, va_arg(args, int));
}
/**
 * print_float - Prints a float
 * @separator: The separator
 * @args: arguments
 */
void print_float(char *separator, va_list args)
{
printf("%s%f", separator, va_arg(args, double));
}
/**
 * print_int - Prints a integer
 * @separator: The separator
 * @args: arguments
 */
void print_int(char *separator, va_list args)
{
printf("%s%i", separator, va_arg(args, int));
}
/**
 * print_str - Prints a string
 * @separator: The separator
 * @args: arguments
 */
void print_str(char *separator, va_list args)
{
char *string;
string = va_arg(args, char *);
if (string == NULL)
{
printf("%s%s", separator, "(nil");
}
printf("%s%s", separator, string);
}
/**
 * print_all -  prints anything
 * @format:  is a list of types of arguments
 */
void print_all(const char * const format, ...)
{
p_t types[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_str},
{NULL, NULL}
};
unsigned int a = 0;
unsigned int b = 0;
char *separator = "";
va_list args;
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
