#include "main.h"
int prime(int n, int i);
/**
 * is_prime_number - data entry
 * @n: is the number to check
 * Return: 1 if integer is a prime number,otherwise return 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime(n, n - 1));
}
/**
 * prime - to check prime number
 * @n: is the number to check
 * @i: integer
 * Return: 1 if integer is a prime number,otherwise return 0
 */
int prime(int n, int i)
{
if (i == 1)
return (1);
else if (n % i == 0 && i > 0)
return (0);
return (prime(n, i - 1));
}
