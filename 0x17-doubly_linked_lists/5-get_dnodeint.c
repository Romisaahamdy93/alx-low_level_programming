#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: is the head of list
 * @index:  is the index of the node, starting from 0
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
if (head == NULL)
return (NULL);
for (i = 0; head != NULL && i < index; i++)
{
head = head->next;
}
return (head);
}
