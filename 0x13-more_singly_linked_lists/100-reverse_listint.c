#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: is the head of linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *old = NULL;
listint_t *next = NULL;
if (head == NULL || *head == NULL)
return (NULL);
old = *head;
*head = NULL;
while (old != NULL)
{
next = old->next;
old->next = old;
old = *head;
*head = next;
}
return (*head);
}
