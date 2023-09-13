#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: is a character to check
 * @f: is a function to pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
