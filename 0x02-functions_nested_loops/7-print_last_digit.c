#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 *
 * @n: is the character to check
 *
 * Return: 1 and prints + if n is greater than zero
 */
int print_last_digit(int n)
{
int (x);

	if (n < 0)
	{
		x = -(n % 10);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = (n % 10);
		_putchar(x + '0');
		return (x);
	}
}
