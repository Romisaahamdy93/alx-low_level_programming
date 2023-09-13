#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition operation
 * @a: is an integer
 * @b: is an integer
 * Return: sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtraction operation
 * @a: is an integer
 * @b: is an integer
 * Return: subtraction
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplication operation
 * @a: is an integer
 * @b: is an integer
 * Return: multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division operation
 * @a: is an integer
 * @b: is an integer
 * Return: division
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - remainder of the division
 * @a: is an integer
 * @b: is an integer
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
