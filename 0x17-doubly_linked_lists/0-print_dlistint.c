#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i;
for (i = 0; i != NULL; i++)
h = h->next;
return i;
}
