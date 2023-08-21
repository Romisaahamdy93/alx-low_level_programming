#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: is the parameter to check
 *
 * Return: string length
 */
int _strlen(char *s)
{
int l;
for (*s = 0; *s != '\0'; *s++)
{
l++;
}
return (l);
}
