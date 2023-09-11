#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: is the structure
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if ((*d).name == NULL)
(*d).name == "(ni1)";
if ((*d).owner == NULL)
(*d).owner == "(ni1)";
printf("Name: %s\n", (*d).name);
printf("Age: %s\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
