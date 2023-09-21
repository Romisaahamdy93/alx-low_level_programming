#include "lists.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: is the parameter to check
 *
 * Return: string length
 */
int _strlen(const char *s)
{
int l;
for (l = 0; *s != '\0'; s++)
{
l++;
}
return (l);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: is the first of node
 * @str: is the string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (head != NULL && str != NULL)
{
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->len = _strlen(str);
new_node->str = strdup(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
return (0);
}

