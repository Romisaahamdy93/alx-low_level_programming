#include <stdio.h>
/**
 * add - adds 2 integers
 * @x: is the 1 integer
 * @y: is the 2 integer
 * Return: the sum
 */
int add(int x, int y)
{
return (x + y);
}


/**
 * sub - substracts 2 integers
 * @x: is the 1 integer
 * @y: is the 2 integer
 * Return: the substraction
 */
int sub(int x, int y)
{
return (x - y);
}


/**
 * mul - multiplies 2 integers
 * @x: is the 1 integer
 * @y: is the 2 integer
 * Return: the multiple
 */
int mul(int x, int y)
{
return (x * y);
}




/**
 * div - divides 2 integers
 * @x: is the 1 integer
 * @y: is the 2 integer
 * Return: the divider
 */
int div(int x, int y)
{
if (y == 0)
{
printf("ERROR\n");
return (0);
}
return (x / y);
}



/**
 * mod - modulus 2 integers
 * @x: is the 1 integer
 * @y: is the 2 integer
 * Return: the mod
 */
int mod(int x, int y)
{
if (y == 0)
{
printf("ERROR\n");
return (0);
}
return (x % y);
}
