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
for (str = 0; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
