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
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the head of node
 * @str: is the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *new;
if (str != NULL)
{
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = _strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (*head);
}
else
{
new = *head;
while (new->next != NULL)
new = new->next;
new->next = new_node;
return (new);
}
}
return (NULL);
}

