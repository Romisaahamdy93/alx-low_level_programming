#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: is the linked list to print
 * Return: the numbers of elements
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
