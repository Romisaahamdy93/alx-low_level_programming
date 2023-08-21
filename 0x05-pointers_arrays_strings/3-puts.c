#include "main.h"
/**
 * _puts -  prints a string
 *
 * @str: is the parameter to check
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
