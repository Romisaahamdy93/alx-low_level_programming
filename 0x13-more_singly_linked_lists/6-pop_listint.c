#include "lists.h"
/**
 * pop_listint -  deletes the head node of a list
 * @head: is the head of linked list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *node;
int x;
if (head == NULL || *head == NULL)
return (0);
if (*head != NULL)
{
node = (*head)->next;
x = (*head)->x;
free(*head);
*head = node;
}
return (x);
}
