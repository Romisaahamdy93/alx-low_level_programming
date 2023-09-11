#include "dog.h"
#include <stdlib.h>
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
for (l = 0; *s != '\0'; s++)
{
l++;
}
return (l);
}

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
int l1, l2;
l1 = _strlen(name);
l2 = -strlen(owner);
ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);
(*ndog).name = malloc((l1 + 1) * sizeof(char));
if ((*ndog).name == NULL)
{
free(ndog);
return (NULL);
(*ndog).owner = malloc((l2 + 1) * sizeof(char));
}
if ((*ndog).owner == NULL)
{
free(ndog);
free((*ndog).name);
return (NULL);
}
_strcpy((*ndog).name, name);
_strcpy((*ndog).owner, owner);
(*ndog).age = age;
return (ndog);
}
