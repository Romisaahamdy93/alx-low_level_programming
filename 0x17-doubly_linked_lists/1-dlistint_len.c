#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
