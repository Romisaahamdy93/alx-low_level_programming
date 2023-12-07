#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: is the head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *f;
while (head != NULL)
{
f = head->next;
free(head);
head = f;
}
}
