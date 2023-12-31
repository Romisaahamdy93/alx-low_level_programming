#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: is the head of linked list
 * @n: data of new node
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *new;
if (head != NULL)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
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
