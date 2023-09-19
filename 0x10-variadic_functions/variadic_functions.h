#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(char *separator, va_list args);
void print_an_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
void print_a_char_ptr(char *separator, va_list args);
/**
 * struct types - Struct format_types
 * @print: The conversion specifier
 * @f: The function pointer
 */
typedef struct types
{
char *print;
void (*f)(char *separator, va_list args);
} print_t;

#endif
