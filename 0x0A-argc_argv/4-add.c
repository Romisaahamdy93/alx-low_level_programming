#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  adds positive numbers
 * @argc: argument counter
 * @argv: argument array
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
int a, b;
int sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] < 48 || argv[a][b] > 57)
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
