#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct types - Struct format_types
 * @print: The conversion specifier
 * @f: The function pointer
 */
typedef struct types
{
char *print;
void (*f)(char *separator, va_list args);
} p_t;

#endif
