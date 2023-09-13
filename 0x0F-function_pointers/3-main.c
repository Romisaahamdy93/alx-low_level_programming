#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - data entry
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int (*op_fun)(int, int), x, y;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
op_fun = get_op_func(argv[2]);
if (op_fun == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", op_fun(x, y));
return (0);
}
